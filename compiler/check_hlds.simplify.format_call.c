/*
** Automatically generated from `format_call.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "cord.mih"
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
#include "set_tree234.mih"
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
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "check_hlds.simplify.format_call.parse_string_format.mih"




#line 145 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0;

#line 148 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0;

#line 151 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;

#line 154 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 157 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 166 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0;

#line 172 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0[1];

#line 178 "check_hlds.simplify.format_call.c"
static const MR_NotagFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0;

#line 181 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 184 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0;

#line 187 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0;

#line 190 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0[4];

#line 196 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0[4];

#line 199 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0;

#line 202 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0[1];

#line 205 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0[1];

#line 208 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0[1];

#line 211 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0[1];

#line 214 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0;

#line 217 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0;

#line 220 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;

#line 223 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 226 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0[2];

#line 229 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0[2];

#line 232 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0;

#line 235 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1];

#line 238 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0[1];

#line 241 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0[1];

#line 244 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0[1];

#line 247 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0;

#line 250 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 253 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_1[2];

#line 256 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_1[2];

#line 259 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1;

#line 262 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0[1];

#line 265 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1[1];

#line 268 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0[2];

#line 271 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0[2];

#line 274 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0[2];

#line 277 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0[2];

#line 280 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0[2];

#line 283 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0;

#line 286 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1[3];

#line 289 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1[3];

#line 292 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1;

#line 295 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2[4];

#line 298 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2[4];

#line 301 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2;

#line 304 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3[5];

#line 307 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3[5];

#line 310 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3;

#line 313 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0[1];

#line 316 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1[1];

#line 319 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2[1];

#line 322 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3[1];

#line 325 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0[4];

#line 328 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0[4];

#line 331 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0[4];

#line 334 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0[9];

#line 337 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0[9];

#line 340 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0;

#line 343 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0[1];

#line 346 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0[1];

#line 349 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0[1];

#line 352 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0[1];

#line 355 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0;

#line 358 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1[2];

#line 361 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1[2];

#line 364 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1;

#line 367 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0[1];

#line 370 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1[1];

#line 373 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0[2];

#line 376 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0[2];

#line 379 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0[2];

#line 382 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0_10001(
#line 385 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 387 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 390 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0_10001(
#line 393 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 395 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 397 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 400 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0_10001(
#line 403 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 405 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 408 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0_10001(
#line 411 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 413 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 415 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 418 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001(
#line 421 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 423 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 426 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001(
#line 429 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 431 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 433 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 436 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001(
#line 439 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 441 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 444 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001(
#line 447 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 449 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 451 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 454 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001(
#line 457 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 459 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 462 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001(
#line 465 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 467 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 469 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 472 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001(
#line 475 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 477 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 480 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001(
#line 483 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 485 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 487 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 490 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001(
#line 493 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 495 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 498 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001(
#line 501 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 503 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 505 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 508 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001(
#line 511 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 513 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 516 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001(
#line 519 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 521 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 523 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 526 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001(
#line 529 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 531 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 534 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001(
#line 537 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 539 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 541 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 544 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001(
#line 547 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 549 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 552 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001(
#line 555 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 557 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 559 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 562 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001(
#line 565 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 567 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 570 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001(
#line 573 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 575 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 577 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 580 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001(
#line 583 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 585 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 588 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001(
#line 591 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 593 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 595 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 598 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001(
#line 601 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 603 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 606 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001(
#line 609 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 611 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 613 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 616 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0_10001(
#line 619 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 621 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 624 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0_10001(
#line 627 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 629 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 631 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 767 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__767__1_2_p_0(
#line 767 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ArgVars_20,
#line 767 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_59);

#line 767 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1(
#line 767 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg);

#line 645 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
#line 645 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 645 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1);

#line 497 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_2(
#line 497 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 497 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1);

#line 444 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_1(
#line 444 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 444 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 444 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_2);

#line 384 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_8_p_0_1(
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 384 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_3,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_4,
#line 384 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_5,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_6,
#line 384 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_7,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_8,
#line 384 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_9);


static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_1[11][3];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[20][2];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[1][16];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_6[3][5];




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
    ((MR_Box) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0))
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
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_6[0])),
    ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_6[1])),
    ((MR_Box) (check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[20][2] = {
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
    ((MR_Box) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_3[0])),
    ((MR_Box) ((MR_String) "string_writer"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Unknown format string in call to"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Unknown format values in call to"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Mismatched format and values"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in call to"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[10])))
  },
  /* row 18 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[16])),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[17]))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_3[4][1] = {
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
    ((MR_Box) ((MR_String) "replace_string_format"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "replace_io_format"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[1][16] = {
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

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_6[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 989 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0
  }
};

#line 998 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0
  }
};

#line 1007 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0
  }
};

#line 1016 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1024 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1032 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1040 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1049 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1057 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0
  }
};

#line 1065 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1073 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0[1] = {
  (MR_Integer) 0
};

#line 1078 "check_hlds.simplify.format_call.c"
static const MR_NotagFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 = {
  (MR_String) "conj_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1085 "check_hlds.simplify.format_call.c"
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

#line 1106 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1115 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0
  }
};

#line 1124 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0
  }
};

#line 1133 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1142 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1150 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0[4] = {
  (MR_String) "cm_string_map",
  (MR_String) "cm_list_skeleton_map",
  (MR_String) "cm_list_element_map",
  (MR_String) "cm_eqv_map"
};

#line 1158 "check_hlds.simplify.format_call.c"
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

#line 1173 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0
};

#line 1178 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0
  }
};

#line 1187 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0
};

#line 1192 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0[1] = {
  (MR_Integer) 0
};

#line 1197 "check_hlds.simplify.format_call.c"
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

#line 1218 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0
  }
};

#line 1227 "check_hlds.simplify.format_call.c"
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

#line 1248 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0
  }
};

#line 1257 "check_hlds.simplify.format_call.c"
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

#line 1278 "check_hlds.simplify.format_call.c"
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

#line 1299 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0
  }
};

#line 1308 "check_hlds.simplify.format_call.c"
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

#line 1329 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1337 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1343 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0[2] = {
  (MR_String) "fcogi_replacement_goal",
  (MR_String) "fcogi_unneeded_vars"
};

#line 1349 "check_hlds.simplify.format_call.c"
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

#line 1364 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

#line 1369 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0
  }
};

#line 1378 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

#line 1383 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0[1] = {
  (MR_Integer) 0
};

#line 1388 "check_hlds.simplify.format_call.c"
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

#line 1409 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0 = {
  (MR_String) "no_follow_skeleton_result",
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

#line 1424 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1432 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1438 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_1[2] = {
  (MR_String) "fsr_polytype_vars",
  (MR_String) "fsr_skeleton_vars"
};

#line 1444 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1 = {
  (MR_String) "follow_skeleton_result",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_1,
  NULL,
  NULL
};

#line 1459 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0
};

#line 1464 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1
};

#line 1469 "check_hlds.simplify.format_call.c"
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

#line 1483 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0
};

#line 1489 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1495 "check_hlds.simplify.format_call.c"
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

#line 1516 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1522 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0[2] = {
  (MR_String) "sf_context",
  (MR_String) "sf_result_var"
};

#line 1528 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0 = {
  (MR_String) "kind_string_format",
  (MR_Integer) 2,
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

#line 1543 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1550 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1[3] = {
  (MR_String) "iofns_context",
  (MR_String) "iofns_io_in_var",
  (MR_String) "iofns_io_out_var"
};

#line 1557 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1 = {
  (MR_String) "kind_io_format_nostream",
  (MR_Integer) 3,
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

#line 1572 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1580 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2[4] = {
  (MR_String) "iofs_context",
  (MR_String) "iofs_stream_var",
  (MR_String) "iofs_io_in_var",
  (MR_String) "iofs_io_out_var"
};

#line 1588 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2 = {
  (MR_String) "kind_io_format_stream",
  (MR_Integer) 4,
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

#line 1603 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1612 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3[5] = {
  (MR_String) "ssw_context",
  (MR_String) "ssw_tc_info_var",
  (MR_String) "ssw_stream_var",
  (MR_String) "ssw_in_var",
  (MR_String) "ssw_out_var"
};

#line 1621 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3 = {
  (MR_String) "kind_stream_string_writer",
  (MR_Integer) 5,
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

#line 1636 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0
};

#line 1641 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1
};

#line 1646 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2
};

#line 1651 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3
};

#line 1656 "check_hlds.simplify.format_call.c"
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

#line 1680 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0[4] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0
};

#line 1688 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1696 "check_hlds.simplify.format_call.c"
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

#line 1717 "check_hlds.simplify.format_call.c"
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

#line 1730 "check_hlds.simplify.format_call.c"
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

#line 1743 "check_hlds.simplify.format_call.c"
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

#line 1758 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0
};

#line 1763 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0
  }
};

#line 1772 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0
};

#line 1777 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0[1] = {
  (MR_Integer) 0
};

#line 1782 "check_hlds.simplify.format_call.c"
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

#line 1803 "check_hlds.simplify.format_call.c"
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
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1824 "check_hlds.simplify.format_call.c"
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

#line 1845 "check_hlds.simplify.format_call.c"
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

#line 1860 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1866 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1[2] = {
  (MR_String) "head",
  (MR_String) "tail"
};

#line 1872 "check_hlds.simplify.format_call.c"
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

#line 1887 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0
};

#line 1892 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1
};

#line 1897 "check_hlds.simplify.format_call.c"
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

#line 1911 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0
};

#line 1917 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1923 "check_hlds.simplify.format_call.c"
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

#line 1944 "check_hlds.simplify.format_call.c"
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

#line 1965 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0_10001(
#line 1968 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 1970 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 1972 "check_hlds.simplify.format_call.c"
{
#line 1974 "check_hlds.simplify.format_call.c"
  {
#line 1976 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1979 "check_hlds.simplify.format_call.c"
    {
#line 1981 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_id_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 1984 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 1986 "check_hlds.simplify.format_call.c"
  }
#line 1988 "check_hlds.simplify.format_call.c"
}

#line 1991 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0_10001(
#line 1994 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 1996 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 1998 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2000 "check_hlds.simplify.format_call.c"
{
#line 2002 "check_hlds.simplify.format_call.c"
  {
#line 2004 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2007 "check_hlds.simplify.format_call.c"
    {
#line 2009 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____conj_id_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2012 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2014 "check_hlds.simplify.format_call.c"
  }
#line 2016 "check_hlds.simplify.format_call.c"
}

#line 2019 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0_10001(
#line 2022 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2024 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2026 "check_hlds.simplify.format_call.c"
{
#line 2028 "check_hlds.simplify.format_call.c"
  {
#line 2030 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2033 "check_hlds.simplify.format_call.c"
    {
#line 2035 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2038 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2040 "check_hlds.simplify.format_call.c"
  }
#line 2042 "check_hlds.simplify.format_call.c"
}

#line 2045 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0_10001(
#line 2048 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2050 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2052 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2054 "check_hlds.simplify.format_call.c"
{
#line 2056 "check_hlds.simplify.format_call.c"
  {
#line 2058 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2061 "check_hlds.simplify.format_call.c"
    {
#line 2063 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____conj_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2066 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2068 "check_hlds.simplify.format_call.c"
  }
#line 2070 "check_hlds.simplify.format_call.c"
}

#line 2073 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001(
#line 2076 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2078 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2080 "check_hlds.simplify.format_call.c"
{
#line 2082 "check_hlds.simplify.format_call.c"
  {
#line 2084 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2087 "check_hlds.simplify.format_call.c"
    {
#line 2089 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_maps_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2092 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2094 "check_hlds.simplify.format_call.c"
  }
#line 2096 "check_hlds.simplify.format_call.c"
}

#line 2099 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001(
#line 2102 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2104 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2106 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2108 "check_hlds.simplify.format_call.c"
{
#line 2110 "check_hlds.simplify.format_call.c"
  {
#line 2112 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2115 "check_hlds.simplify.format_call.c"
    {
#line 2117 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____conj_maps_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2120 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2122 "check_hlds.simplify.format_call.c"
  }
#line 2124 "check_hlds.simplify.format_call.c"
}

#line 2127 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001(
#line 2130 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2132 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2134 "check_hlds.simplify.format_call.c"
{
#line 2136 "check_hlds.simplify.format_call.c"
  {
#line 2138 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2141 "check_hlds.simplify.format_call.c"
    {
#line 2143 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2146 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2148 "check_hlds.simplify.format_call.c"
  }
#line 2150 "check_hlds.simplify.format_call.c"
}

#line 2153 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001(
#line 2156 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2158 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2160 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2162 "check_hlds.simplify.format_call.c"
{
#line 2164 "check_hlds.simplify.format_call.c"
  {
#line 2166 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2169 "check_hlds.simplify.format_call.c"
    {
#line 2171 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2174 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2176 "check_hlds.simplify.format_call.c"
  }
#line 2178 "check_hlds.simplify.format_call.c"
}

#line 2181 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001(
#line 2184 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2186 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2188 "check_hlds.simplify.format_call.c"
{
#line 2190 "check_hlds.simplify.format_call.c"
  {
#line 2192 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2195 "check_hlds.simplify.format_call.c"
    {
#line 2197 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2200 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2202 "check_hlds.simplify.format_call.c"
  }
#line 2204 "check_hlds.simplify.format_call.c"
}

#line 2207 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001(
#line 2210 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2212 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2214 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2216 "check_hlds.simplify.format_call.c"
{
#line 2218 "check_hlds.simplify.format_call.c"
  {
#line 2220 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2223 "check_hlds.simplify.format_call.c"
    {
#line 2225 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2228 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2230 "check_hlds.simplify.format_call.c"
  }
#line 2232 "check_hlds.simplify.format_call.c"
}

#line 2235 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001(
#line 2238 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2240 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2242 "check_hlds.simplify.format_call.c"
{
#line 2244 "check_hlds.simplify.format_call.c"
  {
#line 2246 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2249 "check_hlds.simplify.format_call.c"
    {
#line 2251 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2254 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2256 "check_hlds.simplify.format_call.c"
  }
#line 2258 "check_hlds.simplify.format_call.c"
}

#line 2261 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001(
#line 2264 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2266 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2268 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2270 "check_hlds.simplify.format_call.c"
{
#line 2272 "check_hlds.simplify.format_call.c"
  {
#line 2274 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2277 "check_hlds.simplify.format_call.c"
    {
#line 2279 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2282 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2284 "check_hlds.simplify.format_call.c"
  }
#line 2286 "check_hlds.simplify.format_call.c"
}

#line 2289 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001(
#line 2292 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2294 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2296 "check_hlds.simplify.format_call.c"
{
#line 2298 "check_hlds.simplify.format_call.c"
  {
#line 2300 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2303 "check_hlds.simplify.format_call.c"
    {
#line 2305 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2308 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2310 "check_hlds.simplify.format_call.c"
  }
#line 2312 "check_hlds.simplify.format_call.c"
}

#line 2315 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001(
#line 2318 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2320 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2322 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2324 "check_hlds.simplify.format_call.c"
{
#line 2326 "check_hlds.simplify.format_call.c"
  {
#line 2328 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2331 "check_hlds.simplify.format_call.c"
    {
#line 2333 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2336 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2338 "check_hlds.simplify.format_call.c"
  }
#line 2340 "check_hlds.simplify.format_call.c"
}

#line 2343 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001(
#line 2346 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2348 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2350 "check_hlds.simplify.format_call.c"
{
#line 2352 "check_hlds.simplify.format_call.c"
  {
#line 2354 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2357 "check_hlds.simplify.format_call.c"
    {
#line 2359 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2362 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2364 "check_hlds.simplify.format_call.c"
  }
#line 2366 "check_hlds.simplify.format_call.c"
}

#line 2369 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001(
#line 2372 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2374 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2376 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2378 "check_hlds.simplify.format_call.c"
{
#line 2380 "check_hlds.simplify.format_call.c"
  {
#line 2382 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2385 "check_hlds.simplify.format_call.c"
    {
#line 2387 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2390 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2392 "check_hlds.simplify.format_call.c"
  }
#line 2394 "check_hlds.simplify.format_call.c"
}

#line 2397 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001(
#line 2400 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2402 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2404 "check_hlds.simplify.format_call.c"
{
#line 2406 "check_hlds.simplify.format_call.c"
  {
#line 2408 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2411 "check_hlds.simplify.format_call.c"
    {
#line 2413 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2416 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2418 "check_hlds.simplify.format_call.c"
  }
#line 2420 "check_hlds.simplify.format_call.c"
}

#line 2423 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001(
#line 2426 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2428 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2430 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2432 "check_hlds.simplify.format_call.c"
{
#line 2434 "check_hlds.simplify.format_call.c"
  {
#line 2436 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2439 "check_hlds.simplify.format_call.c"
    {
#line 2441 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2444 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2446 "check_hlds.simplify.format_call.c"
  }
#line 2448 "check_hlds.simplify.format_call.c"
}

#line 2451 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001(
#line 2454 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2456 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2458 "check_hlds.simplify.format_call.c"
{
#line 2460 "check_hlds.simplify.format_call.c"
  {
#line 2462 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2465 "check_hlds.simplify.format_call.c"
    {
#line 2467 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____format_call_site_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2470 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2472 "check_hlds.simplify.format_call.c"
  }
#line 2474 "check_hlds.simplify.format_call.c"
}

#line 2477 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001(
#line 2480 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2482 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2484 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2486 "check_hlds.simplify.format_call.c"
{
#line 2488 "check_hlds.simplify.format_call.c"
  {
#line 2490 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2493 "check_hlds.simplify.format_call.c"
    {
#line 2495 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____format_call_site_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2498 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2500 "check_hlds.simplify.format_call.c"
  }
#line 2502 "check_hlds.simplify.format_call.c"
}

#line 2505 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001(
#line 2508 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2510 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2512 "check_hlds.simplify.format_call.c"
{
#line 2514 "check_hlds.simplify.format_call.c"
  {
#line 2516 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2519 "check_hlds.simplify.format_call.c"
    {
#line 2521 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____list_element_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2524 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2526 "check_hlds.simplify.format_call.c"
  }
#line 2528 "check_hlds.simplify.format_call.c"
}

#line 2531 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001(
#line 2534 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2536 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2538 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2540 "check_hlds.simplify.format_call.c"
{
#line 2542 "check_hlds.simplify.format_call.c"
  {
#line 2544 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2547 "check_hlds.simplify.format_call.c"
    {
#line 2549 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____list_element_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2552 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2554 "check_hlds.simplify.format_call.c"
  }
#line 2556 "check_hlds.simplify.format_call.c"
}

#line 2559 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001(
#line 2562 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2564 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2566 "check_hlds.simplify.format_call.c"
{
#line 2568 "check_hlds.simplify.format_call.c"
  {
#line 2570 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2573 "check_hlds.simplify.format_call.c"
    {
#line 2575 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2578 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2580 "check_hlds.simplify.format_call.c"
  }
#line 2582 "check_hlds.simplify.format_call.c"
}

#line 2585 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001(
#line 2588 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2590 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2592 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2594 "check_hlds.simplify.format_call.c"
{
#line 2596 "check_hlds.simplify.format_call.c"
  {
#line 2598 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2601 "check_hlds.simplify.format_call.c"
    {
#line 2603 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2606 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2608 "check_hlds.simplify.format_call.c"
  }
#line 2610 "check_hlds.simplify.format_call.c"
}

#line 2613 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001(
#line 2616 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2618 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2620 "check_hlds.simplify.format_call.c"
{
#line 2622 "check_hlds.simplify.format_call.c"
  {
#line 2624 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2627 "check_hlds.simplify.format_call.c"
    {
#line 2629 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2632 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2634 "check_hlds.simplify.format_call.c"
  }
#line 2636 "check_hlds.simplify.format_call.c"
}

#line 2639 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001(
#line 2642 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2644 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2646 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2648 "check_hlds.simplify.format_call.c"
{
#line 2650 "check_hlds.simplify.format_call.c"
  {
#line 2652 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2655 "check_hlds.simplify.format_call.c"
    {
#line 2657 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2660 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2662 "check_hlds.simplify.format_call.c"
  }
#line 2664 "check_hlds.simplify.format_call.c"
}

#line 2667 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0_10001(
#line 2670 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 2672 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 2674 "check_hlds.simplify.format_call.c"
{
#line 2676 "check_hlds.simplify.format_call.c"
  {
#line 2678 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 2681 "check_hlds.simplify.format_call.c"
    {
#line 2683 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____string_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 2686 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 2688 "check_hlds.simplify.format_call.c"
  }
#line 2690 "check_hlds.simplify.format_call.c"
}

#line 2693 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0_10001(
#line 2696 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 2698 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 2700 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 2702 "check_hlds.simplify.format_call.c"
{
#line 2704 "check_hlds.simplify.format_call.c"
  {
#line 2706 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 2709 "check_hlds.simplify.format_call.c"
    {
#line 2711 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____string_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 2714 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 2716 "check_hlds.simplify.format_call.c"
  }
#line 2718 "check_hlds.simplify.format_call.c"
}

#line 767 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__767__1_2_p_0(
#line 767 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ArgVars_20,
#line 767 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_59)
#line 767 "format_call.m"
{
#line 767 "format_call.m"
  {
#line 767 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 767 "format_call.m"
    {
#line 767 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4], ((MR_Box) (check_hlds__simplify__format_call__ArgVars_20)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__2_59)));
    }
#line 767 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 767 "format_call.m"
  }
#line 767 "format_call.m"
}

#line 207 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0(
#line 207 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 207 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 207 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 207 "format_call.m"
{
#line 207 "format_call.m"
  {
#line 207 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 207 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 207 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 207 "format_call.m"
    {
#line 207 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[1], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 207 "format_call.m"
      return;
    }
#line 207 "format_call.m"
  }
#line 207 "format_call.m"
}

#line 207 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0(
#line 207 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 207 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 207 "format_call.m"
{
#line 207 "format_call.m"
  {
#line 207 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 207 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 207 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 207 "format_call.m"
    {
#line 207 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 207 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 207 "format_call.m"
  }
#line 207 "format_call.m"
}

#line 209 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(
#line 209 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 209 "format_call.m"
{
#line 209 "format_call.m"
  {
#line 209 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 209 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_13 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 209 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_14 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 209 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_13 == check_hlds__simplify__format_call__CastY_14);
#line 209 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 2833 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 209 "format_call.m"
    else
#line 209 "format_call.m"
      if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "format_call.m"
        if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 209 "format_call.m"
        else
#line 2845 "check_hlds.simplify.format_call.c"
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 209 "format_call.m"
      else
#line 209 "format_call.m"
        {
#line 209 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 209 "format_call.m"
          if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2858 "check_hlds.simplify.format_call.c"
            *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 209 "format_call.m"
          else
#line 209 "format_call.m"
            {
#line 209 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 209 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 209 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_12_12;

#line 209 "format_call.m"
              {
#line 209 "format_call.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_12_12, ((MR_Box) (check_hlds__simplify__format_call__V_18_18)), ((MR_Box) (check_hlds__simplify__format_call__V_10_10)));
              }
#line 2876 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_12_12 == (MR_Integer) 0);
#line 209 "format_call.m"
              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 209 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 209 "format_call.m"
                *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_12_12;
#line 209 "format_call.m"
              else
#line 209 "format_call.m"
                {
#line 209 "format_call.m"
                  {
#line 209 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_17_17)), ((MR_Box) (check_hlds__simplify__format_call__V_11_11)));
#line 209 "format_call.m"
                    return;
                  }
#line 209 "format_call.m"
                }
#line 209 "format_call.m"
            }
#line 209 "format_call.m"
        }
#line 209 "format_call.m"
  }
#line 209 "format_call.m"
}

#line 209 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(
#line 209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 209 "format_call.m"
{
#line 209 "format_call.m"
  {
#line 209 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 209 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 209 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 209 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
#line 209 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 209 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 209 "format_call.m"
    else
#line 209 "format_call.m"
      if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "format_call.m"
        {
#line 209 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 209 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 209 "format_call.m"
          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastY_4 == check_hlds__simplify__format_call__CastX_3);
#line 209 "format_call.m"
        }
#line 209 "format_call.m"
      else
#line 209 "format_call.m"
        {
#line 209 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_11_11;
#line 209 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_12_12;
#line 209 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 209 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_7_7;
#line 209 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_8_8;

#line 209 "format_call.m"
          check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 209 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 209 "format_call.m"
            {
#line 209 "format_call.m"
              check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 209 "format_call.m"
              check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 2972 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 2974 "check_hlds.simplify.format_call.c"
              {
#line 2976 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
              }
#line 209 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 209 "format_call.m"
                {
#line 2983 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 2985 "check_hlds.simplify.format_call.c"
                  {
#line 2987 "check_hlds.simplify.format_call.c"
                    return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_8_8)));
                  }
#line 209 "format_call.m"
                }
#line 209 "format_call.m"
            }
#line 209 "format_call.m"
        }
#line 209 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 209 "format_call.m"
  }
#line 209 "format_call.m"
}

#line 218 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(
#line 218 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 218 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 218 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 218 "format_call.m"
{
#line 218 "format_call.m"
  {
#line 218 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 218 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 218 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 218 "format_call.m"
    {
#line 218 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 218 "format_call.m"
      return;
    }
#line 218 "format_call.m"
  }
#line 218 "format_call.m"
}

#line 218 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(
#line 218 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 218 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 218 "format_call.m"
{
#line 218 "format_call.m"
  {
#line 218 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 218 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 218 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 218 "format_call.m"
    {
#line 218 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 218 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 218 "format_call.m"
  }
#line 218 "format_call.m"
}

#line 227 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0(
#line 227 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 227 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 227 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 227 "format_call.m"
{
#line 227 "format_call.m"
  {
#line 227 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 227 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 227 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 227 "format_call.m"
    {
#line 227 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 227 "format_call.m"
      return;
    }
#line 227 "format_call.m"
  }
#line 227 "format_call.m"
}

#line 227 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0(
#line 227 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 227 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 227 "format_call.m"
{
#line 227 "format_call.m"
  {
#line 227 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 227 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 227 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 227 "format_call.m"
    {
#line 227 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 227 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 227 "format_call.m"
  }
#line 227 "format_call.m"
}

#line 180 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0(
#line 180 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 180 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 180 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 180 "format_call.m"
{
#line 180 "format_call.m"
  {
#line 180 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 180 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_30 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 180 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_31 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 180 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_30 == check_hlds__simplify__format_call__CastY_31);
#line 180 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 3151 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 180 "format_call.m"
    else
#line 180 "format_call.m"
      {
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
#line 180 "format_call.m"
        MR_String check_hlds__simplify__format_call__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 5)));
#line 180 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 6)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 7)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 8)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 4)));
#line 180 "format_call.m"
        MR_String check_hlds__simplify__format_call__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 5)));
#line 180 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 6)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 7)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 8)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_22_22;
#line 180 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_41_41 = (MR_Integer) check_hlds__simplify__format_call__V_4_4;
#line 180 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_42_42 = (MR_Integer) check_hlds__simplify__format_call__V_13_13;

#line 180 "format_call.m"
        {
#line 180 "format_call.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__V_22_22, check_hlds__simplify__format_call__V_41_41, check_hlds__simplify__format_call__V_42_42);
        }
#line 3205 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_22_22 == (MR_Integer) 0);
#line 180 "format_call.m"
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 180 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_22_22;
#line 180 "format_call.m"
        else
#line 180 "format_call.m"
          {
#line 180 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_23_23;

#line 180 "format_call.m"
            {
#line 180 "format_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_23_23, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_14_14)));
            }
#line 3225 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_23_23 == (MR_Integer) 0);
#line 180 "format_call.m"
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 180 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_23_23;
#line 180 "format_call.m"
            else
#line 180 "format_call.m"
              {
#line 180 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_24_24;

#line 180 "format_call.m"
                {
#line 180 "format_call.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_24_24, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_15_15)));
                }
#line 3245 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_24_24 == (MR_Integer) 0);
#line 180 "format_call.m"
                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 180 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_24_24;
#line 180 "format_call.m"
                else
#line 180 "format_call.m"
                  {
#line 180 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_25_25;

#line 180 "format_call.m"
                    {
#line 180 "format_call.m"
                      check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&check_hlds__simplify__format_call__V_25_25, check_hlds__simplify__format_call__V_7_7, check_hlds__simplify__format_call__V_16_16);
                    }
#line 3265 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_25_25 == (MR_Integer) 0);
#line 180 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 180 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                      *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_25_25;
#line 180 "format_call.m"
                    else
#line 180 "format_call.m"
                      {
#line 180 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__V_26_26;

#line 180 "format_call.m"
                        {
#line 180 "format_call.m"
                          mdbcomp__sym_name____Compare____sym_name_0_0(&check_hlds__simplify__format_call__V_26_26, check_hlds__simplify__format_call__V_8_8, check_hlds__simplify__format_call__V_17_17);
                        }
#line 3285 "check_hlds.simplify.format_call.c"
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_26_26 == (MR_Integer) 0);
#line 180 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 180 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_26_26;
#line 180 "format_call.m"
                        else
#line 180 "format_call.m"
                          {
#line 180 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__V_27_27;

#line 180 "format_call.m"
                            {
#line 180 "format_call.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__simplify__format_call__V_27_27, check_hlds__simplify__format_call__V_9_9, check_hlds__simplify__format_call__V_18_18);
                            }
#line 3305 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_27_27 == (MR_Integer) 0);
#line 180 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 180 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_27_27;
#line 180 "format_call.m"
                            else
#line 180 "format_call.m"
                              {
#line 180 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__V_28_28;

#line 180 "format_call.m"
                                {
#line 180 "format_call.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__V_28_28, check_hlds__simplify__format_call__V_10_10, check_hlds__simplify__format_call__V_19_19);
                                }
#line 3325 "check_hlds.simplify.format_call.c"
                                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_28_28 == (MR_Integer) 0);
#line 180 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 180 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_28_28;
#line 180 "format_call.m"
                                else
#line 180 "format_call.m"
                                  {
#line 180 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__V_29_29;

#line 180 "format_call.m"
                                    {
#line 180 "format_call.m"
                                      mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__V_29_29, check_hlds__simplify__format_call__V_11_11, check_hlds__simplify__format_call__V_20_20);
                                    }
#line 3345 "check_hlds.simplify.format_call.c"
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_29_29 == (MR_Integer) 0);
#line 180 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 180 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                                      *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_29_29;
#line 180 "format_call.m"
                                    else
#line 180 "format_call.m"
                                      {
#line 180 "format_call.m"
                                        MR_Integer check_hlds__simplify__format_call__V_43_43 = (MR_Integer) check_hlds__simplify__format_call__V_12_12;
#line 180 "format_call.m"
                                        MR_Integer check_hlds__simplify__format_call__V_44_44 = (MR_Integer) check_hlds__simplify__format_call__V_21_21;

#line 180 "format_call.m"
                                        {
#line 180 "format_call.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_43_43, check_hlds__simplify__format_call__V_44_44);
#line 180 "format_call.m"
                                          return;
                                        }
#line 180 "format_call.m"
                                      }
#line 180 "format_call.m"
                                  }
#line 180 "format_call.m"
                              }
#line 180 "format_call.m"
                          }
#line 180 "format_call.m"
                      }
#line 180 "format_call.m"
                  }
#line 180 "format_call.m"
              }
#line 180 "format_call.m"
          }
#line 180 "format_call.m"
      }
#line 180 "format_call.m"
  }
#line 180 "format_call.m"
}

#line 180 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0(
#line 180 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 180 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 180 "format_call.m"
{
#line 180 "format_call.m"
  {
#line 180 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 180 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_21 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 180 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_22 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 180 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_21 == check_hlds__simplify__format_call__CastY_22);
#line 180 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 180 "format_call.m"
    else
#line 180 "format_call.m"
      {
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_24_24;
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_25_25;
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 4)));
#line 180 "format_call.m"
        MR_String check_hlds__simplify__format_call__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 5)));
#line 180 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 6)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 7)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 8)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
#line 180 "format_call.m"
        MR_String check_hlds__simplify__format_call__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 5)));
#line 180 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 6)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 7)));
#line 180 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 8)));
#line 180 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_28_28 = (MR_Integer) check_hlds__simplify__format_call__V_3_3;
#line 180 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_29_29 = (MR_Integer) check_hlds__simplify__format_call__V_12_12;
#line 195 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__CastX_32;
#line 195 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__CastY_33;

#line 3469 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_28_28 == check_hlds__simplify__format_call__V_29_29);
#line 180 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
          {
#line 3475 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeInfo_24_24 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 3477 "check_hlds.simplify.format_call.c"
            {
#line 3479 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_24_24, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_13_13)));
            }
#line 180 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
              {
#line 3486 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeInfo_25_25 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 3488 "check_hlds.simplify.format_call.c"
                {
#line 3490 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_25_25, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_14_14)));
                }
#line 180 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                  {
#line 3497 "check_hlds.simplify.format_call.c"
                    {
#line 3499 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(check_hlds__simplify__format_call__V_6_6, check_hlds__simplify__format_call__V_15_15);
                    }
#line 180 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                      {
#line 3506 "check_hlds.simplify.format_call.c"
                        {
#line 3508 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__V_7_7, check_hlds__simplify__format_call__V_16_16);
                        }
#line 180 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                          {
#line 3515 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__V_8_8, check_hlds__simplify__format_call__V_17_17) == 0);
#line 180 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                              {
#line 3521 "check_hlds.simplify.format_call.c"
                                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_9_9 == check_hlds__simplify__format_call__V_18_18);
#line 180 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                                  {
#line 3527 "check_hlds.simplify.format_call.c"
                                    {
#line 3529 "check_hlds.simplify.format_call.c"
                                      check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__V_10_10, check_hlds__simplify__format_call__V_19_19);
                                    }
#line 180 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 180 "format_call.m"
                                      {
#line 195 "format_call.m"
                                        check_hlds__simplify__format_call__CastX_32 = (MR_Integer) check_hlds__simplify__format_call__V_11_11;
#line 195 "format_call.m"
                                        check_hlds__simplify__format_call__CastY_33 = (MR_Integer) check_hlds__simplify__format_call__V_20_20;
#line 195 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_32 == check_hlds__simplify__format_call__CastY_33);
#line 195 "format_call.m"
                                        if (check_hlds__simplify__format_call__succeeded)
#line 195 "format_call.m"
                                          check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 195 "format_call.m"
                                        else
#line 195 "format_call.m"
                                          {
#line 195 "format_call.m"
                                            MR_Integer check_hlds__simplify__format_call__V_30_30 = (MR_Integer) check_hlds__simplify__format_call__V_11_11;
#line 195 "format_call.m"
                                            MR_Integer check_hlds__simplify__format_call__V_31_31 = (MR_Integer) check_hlds__simplify__format_call__V_20_20;

#line 3555 "check_hlds.simplify.format_call.c"
                                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_30_30 == check_hlds__simplify__format_call__V_31_31);
#line 195 "format_call.m"
                                          }
#line 180 "format_call.m"
                                      }
#line 180 "format_call.m"
                                  }
#line 180 "format_call.m"
                              }
#line 180 "format_call.m"
                          }
#line 180 "format_call.m"
                      }
#line 180 "format_call.m"
                  }
#line 180 "format_call.m"
              }
#line 180 "format_call.m"
          }
#line 180 "format_call.m"
      }
#line 180 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 180 "format_call.m"
  }
#line 180 "format_call.m"
}

#line 254 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0(
#line 254 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 254 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 254 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 254 "format_call.m"
{
#line 254 "format_call.m"
  {
#line 254 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 254 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_126 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 254 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_127 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 254 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_126 == check_hlds__simplify__format_call__CastY_127);
#line 254 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 3608 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 254 "format_call.m"
    else
#line 254 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 254 "format_call.m"
        {
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 254 "format_call.m"
            {
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_38_38;

#line 254 "format_call.m"
              {
#line 254 "format_call.m"
                mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__V_38_38, check_hlds__simplify__format_call__V_144_144, check_hlds__simplify__format_call__V_35_35);
              }
#line 3641 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_38_38 == (MR_Integer) 0);
#line 254 "format_call.m"
              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_38_38;
#line 254 "format_call.m"
              else
#line 254 "format_call.m"
                {
#line 254 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_39_39;

#line 254 "format_call.m"
                  {
#line 254 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_39_39, ((MR_Box) (check_hlds__simplify__format_call__V_143_143)), ((MR_Box) (check_hlds__simplify__format_call__V_36_36)));
                  }
#line 3661 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_39_39 == (MR_Integer) 0);
#line 254 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_39_39;
#line 254 "format_call.m"
                  else
#line 254 "format_call.m"
                    {
#line 254 "format_call.m"
                      {
#line 254 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_142_142)), ((MR_Box) (check_hlds__simplify__format_call__V_37_37)));
#line 254 "format_call.m"
                        return;
                      }
#line 254 "format_call.m"
                    }
#line 254 "format_call.m"
                }
#line 254 "format_call.m"
            }
#line 254 "format_call.m"
          else
#line 254 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3690 "check_hlds.simplify.format_call.c"
              *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "format_call.m"
            else
#line 254 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3696 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "format_call.m"
              else
#line 3700 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "format_call.m"
        }
#line 254 "format_call.m"
      else
#line 254 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 254 "format_call.m"
          {
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3721 "check_hlds.simplify.format_call.c"
              *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "format_call.m"
            else
#line 254 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 254 "format_call.m"
                {
#line 254 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 254 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 254 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 254 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 254 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_76_76;

#line 254 "format_call.m"
                  {
#line 254 "format_call.m"
                    mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__V_76_76, check_hlds__simplify__format_call__V_148_148, check_hlds__simplify__format_call__V_72_72);
                  }
#line 3745 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_76_76 == (MR_Integer) 0);
#line 254 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_76_76;
#line 254 "format_call.m"
                  else
#line 254 "format_call.m"
                    {
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_77_77;

#line 254 "format_call.m"
                      {
#line 254 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_77_77, ((MR_Box) (check_hlds__simplify__format_call__V_147_147)), ((MR_Box) (check_hlds__simplify__format_call__V_73_73)));
                      }
#line 3765 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_77_77 == (MR_Integer) 0);
#line 254 "format_call.m"
                      check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                        *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_77_77;
#line 254 "format_call.m"
                      else
#line 254 "format_call.m"
                        {
#line 254 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__V_78_78;

#line 254 "format_call.m"
                          {
#line 254 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_78_78, ((MR_Box) (check_hlds__simplify__format_call__V_146_146)), ((MR_Box) (check_hlds__simplify__format_call__V_74_74)));
                          }
#line 3785 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_78_78 == (MR_Integer) 0);
#line 254 "format_call.m"
                          check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                            *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_78_78;
#line 254 "format_call.m"
                          else
#line 254 "format_call.m"
                            {
#line 254 "format_call.m"
                              {
#line 254 "format_call.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_145_145)), ((MR_Box) (check_hlds__simplify__format_call__V_75_75)));
#line 254 "format_call.m"
                                return;
                              }
#line 254 "format_call.m"
                            }
#line 254 "format_call.m"
                        }
#line 254 "format_call.m"
                    }
#line 254 "format_call.m"
                }
#line 254 "format_call.m"
              else
#line 254 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3816 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "format_call.m"
                else
#line 3820 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "format_call.m"
          }
#line 254 "format_call.m"
        else
#line 254 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 254 "format_call.m"
            {
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3843 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "format_call.m"
              else
#line 254 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3849 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "format_call.m"
                else
#line 254 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 254 "format_call.m"
                    {
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 4)));
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_122_122;

#line 254 "format_call.m"
                      {
#line 254 "format_call.m"
                        mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__V_122_122, check_hlds__simplify__format_call__V_153_153, check_hlds__simplify__format_call__V_117_117);
                      }
#line 3875 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_122_122 == (MR_Integer) 0);
#line 254 "format_call.m"
                      check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                        *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_122_122;
#line 254 "format_call.m"
                      else
#line 254 "format_call.m"
                        {
#line 254 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__V_123_123;

#line 254 "format_call.m"
                          {
#line 254 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_123_123, ((MR_Box) (check_hlds__simplify__format_call__V_152_152)), ((MR_Box) (check_hlds__simplify__format_call__V_118_118)));
                          }
#line 3895 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_123_123 == (MR_Integer) 0);
#line 254 "format_call.m"
                          check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                            *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_123_123;
#line 254 "format_call.m"
                          else
#line 254 "format_call.m"
                            {
#line 254 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_124_124;

#line 254 "format_call.m"
                              {
#line 254 "format_call.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_124_124, ((MR_Box) (check_hlds__simplify__format_call__V_151_151)), ((MR_Box) (check_hlds__simplify__format_call__V_119_119)));
                              }
#line 3915 "check_hlds.simplify.format_call.c"
                              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_124_124 == (MR_Integer) 0);
#line 254 "format_call.m"
                              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                                *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_124_124;
#line 254 "format_call.m"
                              else
#line 254 "format_call.m"
                                {
#line 254 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__V_125_125;

#line 254 "format_call.m"
                                  {
#line 254 "format_call.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_125_125, ((MR_Box) (check_hlds__simplify__format_call__V_150_150)), ((MR_Box) (check_hlds__simplify__format_call__V_120_120)));
                                  }
#line 3935 "check_hlds.simplify.format_call.c"
                                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_125_125 == (MR_Integer) 0);
#line 254 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
                                  if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_125_125;
#line 254 "format_call.m"
                                  else
#line 254 "format_call.m"
                                    {
#line 254 "format_call.m"
                                      {
#line 254 "format_call.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_149_149)), ((MR_Box) (check_hlds__simplify__format_call__V_121_121)));
#line 254 "format_call.m"
                                        return;
                                      }
#line 254 "format_call.m"
                                    }
#line 254 "format_call.m"
                                }
#line 254 "format_call.m"
                            }
#line 254 "format_call.m"
                        }
#line 254 "format_call.m"
                    }
#line 254 "format_call.m"
                  else
#line 3966 "check_hlds.simplify.format_call.c"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "format_call.m"
            }
#line 254 "format_call.m"
          else
#line 254 "format_call.m"
            {
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3981 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "format_call.m"
              else
#line 254 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3987 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "format_call.m"
                else
#line 254 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3993 "check_hlds.simplify.format_call.c"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "format_call.m"
                  else
#line 254 "format_call.m"
                    {
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 254 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_8_8;

#line 254 "format_call.m"
                      {
#line 254 "format_call.m"
                        mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__V_8_8, check_hlds__simplify__format_call__V_155_155, check_hlds__simplify__format_call__V_6_6);
                      }
#line 4011 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_8_8 == (MR_Integer) 0);
#line 254 "format_call.m"
                      check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 254 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                        *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_8_8;
#line 254 "format_call.m"
                      else
#line 254 "format_call.m"
                        {
#line 254 "format_call.m"
                          {
#line 254 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_154_154)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
#line 254 "format_call.m"
                            return;
                          }
#line 254 "format_call.m"
                        }
#line 254 "format_call.m"
                    }
#line 254 "format_call.m"
            }
#line 254 "format_call.m"
  }
#line 254 "format_call.m"
}

#line 254 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0(
#line 254 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 254 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 254 "format_call.m"
{
#line 254 "format_call.m"
  {
#line 254 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 254 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_31 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 254 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_32 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 254 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_31 == check_hlds__simplify__format_call__CastY_32);
#line 254 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 254 "format_call.m"
    else
#line 254 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 254 "format_call.m"
        {
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_34_34;
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_35_35;
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_10_10;
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_11_11;
#line 254 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_12_12;

#line 254 "format_call.m"
          check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 254 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
            {
#line 254 "format_call.m"
              check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "format_call.m"
              check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "format_call.m"
              check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 4100 "check_hlds.simplify.format_call.c"
              {
#line 4102 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__V_7_7, check_hlds__simplify__format_call__V_10_10);
              }
#line 254 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                {
#line 4109 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeInfo_34_34 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4111 "check_hlds.simplify.format_call.c"
                  {
#line 4113 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_34_34, ((MR_Box) (check_hlds__simplify__format_call__V_8_8)), ((MR_Box) (check_hlds__simplify__format_call__V_11_11)));
                  }
#line 254 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                    {
#line 4120 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__TypeInfo_35_35 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4122 "check_hlds.simplify.format_call.c"
                      {
#line 4124 "check_hlds.simplify.format_call.c"
                        return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_35_35, ((MR_Box) (check_hlds__simplify__format_call__V_9_9)), ((MR_Box) (check_hlds__simplify__format_call__V_12_12)));
                      }
#line 254 "format_call.m"
                    }
#line 254 "format_call.m"
                }
#line 254 "format_call.m"
            }
#line 254 "format_call.m"
        }
#line 254 "format_call.m"
      else
#line 254 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 254 "format_call.m"
          {
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_37_37;
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_38_38;
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_39_39;
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_17_17;
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_18_18;
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_19_19;
#line 254 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_20_20;

#line 254 "format_call.m"
            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 254 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
              {
#line 254 "format_call.m"
                check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "format_call.m"
                check_hlds__simplify__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "format_call.m"
                check_hlds__simplify__format_call__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 254 "format_call.m"
                check_hlds__simplify__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 4178 "check_hlds.simplify.format_call.c"
                {
#line 4180 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__V_13_13, check_hlds__simplify__format_call__V_17_17);
                }
#line 254 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                  {
#line 4187 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeInfo_37_37 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4189 "check_hlds.simplify.format_call.c"
                    {
#line 4191 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_37_37, ((MR_Box) (check_hlds__simplify__format_call__V_14_14)), ((MR_Box) (check_hlds__simplify__format_call__V_18_18)));
                    }
#line 254 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                      {
#line 4198 "check_hlds.simplify.format_call.c"
                        check_hlds__simplify__format_call__TypeInfo_38_38 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4200 "check_hlds.simplify.format_call.c"
                        {
#line 4202 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_38_38, ((MR_Box) (check_hlds__simplify__format_call__V_15_15)), ((MR_Box) (check_hlds__simplify__format_call__V_19_19)));
                        }
#line 254 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                          {
#line 4209 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__TypeInfo_39_39 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4211 "check_hlds.simplify.format_call.c"
                            {
#line 4213 "check_hlds.simplify.format_call.c"
                              return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_39_39, ((MR_Box) (check_hlds__simplify__format_call__V_16_16)), ((MR_Box) (check_hlds__simplify__format_call__V_20_20)));
                            }
#line 254 "format_call.m"
                          }
#line 254 "format_call.m"
                      }
#line 254 "format_call.m"
                  }
#line 254 "format_call.m"
              }
#line 254 "format_call.m"
          }
#line 254 "format_call.m"
        else
#line 254 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 254 "format_call.m"
            {
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_41_41;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_42_42;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_43_43;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_44_44;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 4)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_26_26;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_27_27;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_28_28;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_29_29;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_30_30;

#line 254 "format_call.m"
              check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 254 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                {
#line 254 "format_call.m"
                  check_hlds__simplify__format_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "format_call.m"
                  check_hlds__simplify__format_call__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "format_call.m"
                  check_hlds__simplify__format_call__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 254 "format_call.m"
                  check_hlds__simplify__format_call__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 254 "format_call.m"
                  check_hlds__simplify__format_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
#line 4277 "check_hlds.simplify.format_call.c"
                  {
#line 4279 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__V_21_21, check_hlds__simplify__format_call__V_26_26);
                  }
#line 254 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                    {
#line 4286 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__TypeInfo_41_41 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4288 "check_hlds.simplify.format_call.c"
                      {
#line 4290 "check_hlds.simplify.format_call.c"
                        check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_41_41, ((MR_Box) (check_hlds__simplify__format_call__V_22_22)), ((MR_Box) (check_hlds__simplify__format_call__V_27_27)));
                      }
#line 254 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                        {
#line 4297 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__TypeInfo_42_42 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4299 "check_hlds.simplify.format_call.c"
                          {
#line 4301 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_42_42, ((MR_Box) (check_hlds__simplify__format_call__V_23_23)), ((MR_Box) (check_hlds__simplify__format_call__V_28_28)));
                          }
#line 254 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                            {
#line 4308 "check_hlds.simplify.format_call.c"
                              check_hlds__simplify__format_call__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4310 "check_hlds.simplify.format_call.c"
                              {
#line 4312 "check_hlds.simplify.format_call.c"
                                check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_43_43, ((MR_Box) (check_hlds__simplify__format_call__V_24_24)), ((MR_Box) (check_hlds__simplify__format_call__V_29_29)));
                              }
#line 254 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                                {
#line 4319 "check_hlds.simplify.format_call.c"
                                  check_hlds__simplify__format_call__TypeInfo_44_44 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4321 "check_hlds.simplify.format_call.c"
                                  {
#line 4323 "check_hlds.simplify.format_call.c"
                                    return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_44_44, ((MR_Box) (check_hlds__simplify__format_call__V_25_25)), ((MR_Box) (check_hlds__simplify__format_call__V_30_30)));
                                  }
#line 254 "format_call.m"
                                }
#line 254 "format_call.m"
                            }
#line 254 "format_call.m"
                        }
#line 254 "format_call.m"
                    }
#line 254 "format_call.m"
                }
#line 254 "format_call.m"
            }
#line 254 "format_call.m"
          else
#line 254 "format_call.m"
            {
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_46_46;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_5_5;
#line 254 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_6_6;

#line 254 "format_call.m"
              check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 254 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                {
#line 254 "format_call.m"
                  check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "format_call.m"
                  check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 4363 "check_hlds.simplify.format_call.c"
                  {
#line 4365 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__V_3_3, check_hlds__simplify__format_call__V_5_5);
                  }
#line 254 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 254 "format_call.m"
                    {
#line 4372 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__TypeInfo_46_46 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4374 "check_hlds.simplify.format_call.c"
                      {
#line 4376 "check_hlds.simplify.format_call.c"
                        return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_46_46, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_6_6)));
                      }
#line 254 "format_call.m"
                    }
#line 254 "format_call.m"
                }
#line 254 "format_call.m"
            }
#line 254 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 254 "format_call.m"
  }
#line 254 "format_call.m"
}

#line 542 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(
#line 542 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 542 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 542 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 542 "format_call.m"
{
#line 542 "format_call.m"
  {
#line 542 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 542 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_13 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 542 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_14 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 542 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_13 == check_hlds__simplify__format_call__CastY_14);
#line 542 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 4416 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 542 "format_call.m"
    else
#line 542 "format_call.m"
      if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "format_call.m"
        if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 542 "format_call.m"
        else
#line 4428 "check_hlds.simplify.format_call.c"
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 542 "format_call.m"
      else
#line 542 "format_call.m"
        {
#line 542 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 542 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 542 "format_call.m"
          if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4441 "check_hlds.simplify.format_call.c"
            *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 542 "format_call.m"
          else
#line 542 "format_call.m"
            {
#line 542 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 542 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 542 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_12_12;

#line 542 "format_call.m"
              {
#line 542 "format_call.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4], &check_hlds__simplify__format_call__V_12_12, ((MR_Box) (check_hlds__simplify__format_call__V_18_18)), ((MR_Box) (check_hlds__simplify__format_call__V_10_10)));
              }
#line 4459 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_12_12 == (MR_Integer) 0);
#line 542 "format_call.m"
              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 542 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 542 "format_call.m"
                *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_12_12;
#line 542 "format_call.m"
              else
#line 542 "format_call.m"
                {
#line 542 "format_call.m"
                  {
#line 542 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_17_17)), ((MR_Box) (check_hlds__simplify__format_call__V_11_11)));
#line 542 "format_call.m"
                    return;
                  }
#line 542 "format_call.m"
                }
#line 542 "format_call.m"
            }
#line 542 "format_call.m"
        }
#line 542 "format_call.m"
  }
#line 542 "format_call.m"
}

#line 542 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(
#line 542 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 542 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 542 "format_call.m"
{
#line 542 "format_call.m"
  {
#line 542 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 542 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 542 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 542 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
#line 542 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 542 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 542 "format_call.m"
    else
#line 542 "format_call.m"
      if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "format_call.m"
        {
#line 542 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 542 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 542 "format_call.m"
          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastY_4 == check_hlds__simplify__format_call__CastX_3);
#line 542 "format_call.m"
        }
#line 542 "format_call.m"
      else
#line 542 "format_call.m"
        {
#line 542 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_11_11;
#line 542 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_12_12;
#line 542 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 542 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 542 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_7_7;
#line 542 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_8_8;

#line 542 "format_call.m"
          check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 542 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 542 "format_call.m"
            {
#line 542 "format_call.m"
              check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 542 "format_call.m"
              check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 4555 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4];
#line 4557 "check_hlds.simplify.format_call.c"
              {
#line 4559 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
              }
#line 542 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 542 "format_call.m"
                {
#line 4566 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4];
#line 4568 "check_hlds.simplify.format_call.c"
                  {
#line 4570 "check_hlds.simplify.format_call.c"
                    return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_8_8)));
                  }
#line 542 "format_call.m"
                }
#line 542 "format_call.m"
            }
#line 542 "format_call.m"
        }
#line 542 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 542 "format_call.m"
  }
#line 542 "format_call.m"
}

#line 957 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(
#line 957 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 957 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 957 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 957 "format_call.m"
{
#line 957 "format_call.m"
  {
#line 957 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 957 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 957 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 957 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
#line 957 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 4610 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 957 "format_call.m"
    else
#line 957 "format_call.m"
      {
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8;

#line 957 "format_call.m"
        {
#line 957 "format_call.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&check_hlds__simplify__format_call__V_8_8, check_hlds__simplify__format_call__V_4_4, check_hlds__simplify__format_call__V_6_6);
        }
#line 4632 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_8_8 == (MR_Integer) 0);
#line 957 "format_call.m"
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 957 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 957 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_8_8;
#line 957 "format_call.m"
        else
#line 957 "format_call.m"
          {
#line 957 "format_call.m"
            {
#line 957 "format_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
#line 957 "format_call.m"
              return;
            }
#line 957 "format_call.m"
          }
#line 957 "format_call.m"
      }
#line 957 "format_call.m"
  }
#line 957 "format_call.m"
}

#line 957 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(
#line 957 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 957 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 957 "format_call.m"
{
#line 957 "format_call.m"
  {
#line 957 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 957 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_7 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 957 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_8 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 957 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_7 == check_hlds__simplify__format_call__CastY_8);
#line 957 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 957 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 957 "format_call.m"
    else
#line 957 "format_call.m"
      {
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_10_10;
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 957 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));

#line 4699 "check_hlds.simplify.format_call.c"
        {
#line 4701 "check_hlds.simplify.format_call.c"
          check_hlds__simplify__format_call__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__simplify__format_call__V_3_3, check_hlds__simplify__format_call__V_5_5);
        }
#line 957 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 957 "format_call.m"
          {
#line 4708 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeInfo_10_10 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5];
#line 4710 "check_hlds.simplify.format_call.c"
            {
#line 4712 "check_hlds.simplify.format_call.c"
              return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_10_10, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_6_6)));
            }
#line 957 "format_call.m"
          }
#line 957 "format_call.m"
      }
#line 957 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 957 "format_call.m"
  }
#line 957 "format_call.m"
}

#line 963 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(
#line 963 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 963 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 963 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 963 "format_call.m"
{
#line 963 "format_call.m"
  {
#line 963 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 963 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 963 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 963 "format_call.m"
    {
#line 963 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[0], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 963 "format_call.m"
      return;
    }
#line 963 "format_call.m"
  }
#line 963 "format_call.m"
}

#line 963 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(
#line 963 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 963 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 963 "format_call.m"
{
#line 963 "format_call.m"
  {
#line 963 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 963 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 963 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 963 "format_call.m"
    {
#line 963 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 963 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 963 "format_call.m"
  }
#line 963 "format_call.m"
}

#line 231 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(
#line 231 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 231 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 231 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 231 "format_call.m"
{
#line 231 "format_call.m"
  {
#line 231 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 231 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 231 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 231 "format_call.m"
    {
#line 231 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 231 "format_call.m"
      return;
    }
#line 231 "format_call.m"
  }
#line 231 "format_call.m"
}

#line 231 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(
#line 231 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 231 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 231 "format_call.m"
{
#line 231 "format_call.m"
  {
#line 231 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 231 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 231 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 231 "format_call.m"
    {
#line 231 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 231 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 231 "format_call.m"
  }
#line 231 "format_call.m"
}

#line 201 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[6], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 201 "format_call.m"
      return;
    }
#line 201 "format_call.m"
  }
#line 201 "format_call.m"
}

#line 201 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(
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
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[6], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 201 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 201 "format_call.m"
  }
#line 201 "format_call.m"
}

#line 247 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0(
#line 247 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 247 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 247 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 247 "format_call.m"
{
#line 247 "format_call.m"
  {
#line 247 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 247 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 247 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 247 "format_call.m"
    {
#line 247 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[5], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 247 "format_call.m"
      return;
    }
#line 247 "format_call.m"
  }
#line 247 "format_call.m"
}

#line 247 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0(
#line 247 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 247 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 247 "format_call.m"
{
#line 247 "format_call.m"
  {
#line 247 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 247 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 247 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 247 "format_call.m"
    {
#line 247 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[5], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 247 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 247 "format_call.m"
  }
#line 247 "format_call.m"
}

#line 236 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0(
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
    MR_Integer check_hlds__simplify__format_call__CastX_15 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 236 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_16 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 236 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_15 == check_hlds__simplify__format_call__CastY_16);
#line 236 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 4998 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 236 "format_call.m"
    else
#line 236 "format_call.m"
      {
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12;

#line 236 "format_call.m"
        {
#line 236 "format_call.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[1], &check_hlds__simplify__format_call__V_12_12, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_8_8)));
        }
#line 5028 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_12_12 == (MR_Integer) 0);
#line 236 "format_call.m"
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 236 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 236 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_12_12;
#line 236 "format_call.m"
        else
#line 236 "format_call.m"
          {
#line 236 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_13_13;

#line 236 "format_call.m"
            {
#line 236 "format_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], &check_hlds__simplify__format_call__V_13_13, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_9_9)));
            }
#line 5048 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_13_13 == (MR_Integer) 0);
#line 236 "format_call.m"
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 236 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 236 "format_call.m"
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_13_13;
#line 236 "format_call.m"
            else
#line 236 "format_call.m"
              {
#line 236 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_14_14;

#line 236 "format_call.m"
                {
#line 236 "format_call.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3], &check_hlds__simplify__format_call__V_14_14, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_10_10)));
                }
#line 5068 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_14_14 == (MR_Integer) 0);
#line 236 "format_call.m"
                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 236 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 236 "format_call.m"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_14_14;
#line 236 "format_call.m"
                else
#line 236 "format_call.m"
                  {
#line 236 "format_call.m"
                    {
#line 236 "format_call.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_7_7)), ((MR_Box) (check_hlds__simplify__format_call__V_11_11)));
#line 236 "format_call.m"
                      return;
                    }
#line 236 "format_call.m"
                  }
#line 236 "format_call.m"
              }
#line 236 "format_call.m"
          }
#line 236 "format_call.m"
      }
#line 236 "format_call.m"
  }
#line 236 "format_call.m"
}

#line 236 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0(
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
    MR_Integer check_hlds__simplify__format_call__CastX_11 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 236 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_12 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 236 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_11 == check_hlds__simplify__format_call__CastY_12);
#line 236 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 236 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 236 "format_call.m"
    else
#line 236 "format_call.m"
      {
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_14_14;
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_15_15;
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_16_16;
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 236 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));

#line 5151 "check_hlds.simplify.format_call.c"
        {
#line 5153 "check_hlds.simplify.format_call.c"
          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__format_call__V_3_3)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
        }
#line 236 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 236 "format_call.m"
          {
#line 5160 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2];
#line 5162 "check_hlds.simplify.format_call.c"
            {
#line 5164 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_14_14, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_8_8)));
            }
#line 236 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 236 "format_call.m"
              {
#line 5171 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeInfo_15_15 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3];
#line 5173 "check_hlds.simplify.format_call.c"
                {
#line 5175 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_15_15, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_9_9)));
                }
#line 236 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 236 "format_call.m"
                  {
#line 5182 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4];
#line 5184 "check_hlds.simplify.format_call.c"
                    {
#line 5186 "check_hlds.simplify.format_call.c"
                      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_16_16, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_10_10)));
                    }
#line 236 "format_call.m"
                  }
#line 236 "format_call.m"
              }
#line 236 "format_call.m"
          }
#line 236 "format_call.m"
      }
#line 236 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 236 "format_call.m"
  }
#line 236 "format_call.m"
}

#line 195 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0(
#line 195 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 195 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 195 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 195 "format_call.m"
{
#line 195 "format_call.m"
  {
#line 195 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 195 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_6 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 195 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_7 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 195 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_6 == check_hlds__simplify__format_call__CastY_7);
#line 195 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 5228 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 195 "format_call.m"
    else
#line 195 "format_call.m"
      {
#line 195 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_4_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 195 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_5_5 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 195 "format_call.m"
        {
#line 195 "format_call.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_4_4, check_hlds__simplify__format_call__V_5_5);
#line 195 "format_call.m"
          return;
        }
#line 195 "format_call.m"
      }
#line 195 "format_call.m"
  }
#line 195 "format_call.m"
}

#line 195 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0(
#line 195 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 195 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 195 "format_call.m"
{
#line 195 "format_call.m"
  {
#line 195 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 195 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_5 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 195 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_6 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 195 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_5 == check_hlds__simplify__format_call__CastY_6);
#line 195 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 195 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 195 "format_call.m"
    else
#line 195 "format_call.m"
      {
#line 195 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_3_3 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 195 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_4_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 5286 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_3_3 == check_hlds__simplify__format_call__V_4_4);
#line 195 "format_call.m"
      }
#line 195 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 195 "format_call.m"
  }
#line 195 "format_call.m"
}

#line 1853 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(
#line 1853 "format_call.m"
  MR_Word check_hlds__simplify__format_call__InVar_4,
#line 1853 "format_call.m"
  MR_Word check_hlds__simplify__format_call__OutVar_5,
#line 1853 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__InstMapDelta_6)
#line 1853 "format_call.m"
{
#line 1856 "format_call.m"
  {
#line 1856 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1856 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_13_13;
#line 1856 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_14_14;
#line 1856 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_15_15;
#line 1856 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_16_16;

#line 1860 "format_call.m"
    {
#line 1860 "format_call.m"
      check_hlds__simplify__format_call__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1860 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_14_14, 0) = ((MR_Box) (check_hlds__simplify__format_call__InVar_4));
#line 1860 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[10])));
#line 1860 "format_call.m"
    }
#line 1860 "format_call.m"
    {
#line 1860 "format_call.m"
      check_hlds__simplify__format_call__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1860 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_16_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__OutVar_5));
#line 1860 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
#line 1860 "format_call.m"
    }
#line 1860 "format_call.m"
    {
#line 1860 "format_call.m"
      check_hlds__simplify__format_call__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1860 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_15_15, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_16_16));
#line 1860 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1860 "format_call.m"
    }
#line 1860 "format_call.m"
    {
#line 1860 "format_call.m"
      check_hlds__simplify__format_call__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1860 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_13_13, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_14_14));
#line 1860 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_13_13, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_15_15));
#line 1860 "format_call.m"
    }
#line 1859 "format_call.m"
    {
#line 1859 "format_call.m"
      *check_hlds__simplify__format_call__InstMapDelta_6 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_13_13);
    }
#line 1856 "format_call.m"
  }
#line 1853 "format_call.m"
}

#line 1841 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(
#line 1841 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_7,
#line 1841 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_8,
#line 1841 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11,
#line 1841 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12,
#line 1841 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13,
#line 1841 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14)
#line 1841 "format_call.m"
{
#line 1846 "format_call.m"
  {
#line 1846 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1846 "format_call.m"
    if ((check_hlds__simplify__format_call__MaybeResultVar_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1848 "format_call.m"
      {
#line 1848 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_16_16;

#line 1849 "format_call.m"
        {
#line 1849 "format_call.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ResultVar_8, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12);
        }
#line 1850 "format_call.m"
        {
#line 1850 "format_call.m"
          check_hlds__simplify__format_call__V_16_16 = parse_tree__builtin_lib_types__string_type_0_f_0();
        }
#line 1850 "format_call.m"
        {
#line 1850 "format_call.m"
          parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__simplify__format_call__ResultVar_8, check_hlds__simplify__format_call__V_16_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14);
#line 1850 "format_call.m"
          return;
        }
#line 1848 "format_call.m"
      }
#line 1846 "format_call.m"
    else
#line 1846 "format_call.m"
      {
#line 1846 "format_call.m"
        *check_hlds__simplify__format_call__ResultVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeResultVar_7, (MR_Integer) 0)));
#line 1846 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11;
#line 1846 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13;
#line 1846 "format_call.m"
      }
#line 1846 "format_call.m"
  }
#line 1841 "format_call.m"
}

#line 1809 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__build_float_kind_arg_7_p_0(
#line 1809 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Kind_8,
#line 1809 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Var_9,
#line 1809 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goal_10,
#line 1809 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_19,
#line 1809 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_20,
#line 1809 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_21,
#line 1809 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_22)
#line 1809 "format_call.m"
{
#line 1813 "format_call.m"
  {
#line 1813 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1813 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ParseUtil_13;
#line 1813 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeName_14;
#line 1813 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtor_15;
#line 1813 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Type_16;
#line 1813 "format_call.m"
    MR_String check_hlds__simplify__format_call__ConsName_17;
#line 1813 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConsId_18;
#line 1813 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_27_27;

#line 1814 "format_call.m"
    {
#line 1814 "format_call.m"
      check_hlds__simplify__format_call__ParseUtil_13 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    }
#line 1815 "format_call.m"
    {
#line 1815 "format_call.m"
      check_hlds__simplify__format_call__TypeName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeName_14, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_13));
#line 1815 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeName_14, 1) = ((MR_Box) ((MR_String) "string_format_float_kind"));
#line 1815 "format_call.m"
    }
#line 1816 "format_call.m"
    {
#line 1816 "format_call.m"
      check_hlds__simplify__format_call__TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1816 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtor_15, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeName_14));
#line 1816 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtor_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1816 "format_call.m"
    }
#line 1817 "format_call.m"
    {
#line 1817 "format_call.m"
      check_hlds__simplify__format_call__Type_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeName_14));
#line 1817 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1817 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1817 "format_call.m"
    }
#line 1821 "format_call.m"
    if ((check_hlds__simplify__format_call__Kind_8 == (MR_Integer) 0))
#line 1820 "format_call.m"
      check_hlds__simplify__format_call__ConsName_17 = (MR_String) "kind_e_scientific_lc";
#line 1821 "format_call.m"
    else
#line 1821 "format_call.m"
      if ((check_hlds__simplify__format_call__Kind_8 == (MR_Integer) 1))
#line 1823 "format_call.m"
        check_hlds__simplify__format_call__ConsName_17 = (MR_String) "kind_e_scientific_uc";
#line 1821 "format_call.m"
      else
#line 1821 "format_call.m"
        if ((check_hlds__simplify__format_call__Kind_8 == (MR_Integer) 2))
#line 1826 "format_call.m"
          check_hlds__simplify__format_call__ConsName_17 = (MR_String) "kind_f_plain_lc";
#line 1821 "format_call.m"
        else
#line 1821 "format_call.m"
          if ((check_hlds__simplify__format_call__Kind_8 == (MR_Integer) 3))
#line 1829 "format_call.m"
            check_hlds__simplify__format_call__ConsName_17 = (MR_String) "kind_f_plain_uc";
#line 1821 "format_call.m"
          else
#line 1821 "format_call.m"
            if ((check_hlds__simplify__format_call__Kind_8 == (MR_Integer) 4))
#line 1832 "format_call.m"
              check_hlds__simplify__format_call__ConsName_17 = (MR_String) "kind_g_flexible_lc";
#line 1821 "format_call.m"
            else
#line 1835 "format_call.m"
              check_hlds__simplify__format_call__ConsName_17 = (MR_String) "kind_g_flexible_uc";
#line 1837 "format_call.m"
    {
#line 1837 "format_call.m"
      check_hlds__simplify__format_call__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_27_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_13));
#line 1837 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_27_27, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsName_17));
#line 1837 "format_call.m"
    }
#line 1837 "format_call.m"
    {
#line 1837 "format_call.m"
      check_hlds__simplify__format_call__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1837 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_27_27));
#line 1837 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1837 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtor_15));
#line 1837 "format_call.m"
    }
#line 1838 "format_call.m"
    {
#line 1838 "format_call.m"
      hlds__make_goal__make_const_construction_alloc_9_p_0(check_hlds__simplify__format_call__ConsId_18, check_hlds__simplify__format_call__Type_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Goal_10, check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_21, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_22);
#line 1838 "format_call.m"
      return;
    }
#line 1813 "format_call.m"
  }
#line 1809 "format_call.m"
}

#line 1780 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__build_int_base_arg_7_p_0(
#line 1780 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Base_8,
#line 1780 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Var_9,
#line 1780 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goal_10,
#line 1780 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_19,
#line 1780 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_20,
#line 1780 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_21,
#line 1780 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_22)
#line 1780 "format_call.m"
{
#line 1784 "format_call.m"
  {
#line 1784 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1784 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ParseUtil_13;
#line 1784 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeName_14;
#line 1784 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtor_15;
#line 1784 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Type_16;
#line 1784 "format_call.m"
    MR_String check_hlds__simplify__format_call__ConsName_17;
#line 1784 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConsId_18;
#line 1784 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_27_27;

#line 1785 "format_call.m"
    {
#line 1785 "format_call.m"
      check_hlds__simplify__format_call__ParseUtil_13 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    }
#line 1786 "format_call.m"
    {
#line 1786 "format_call.m"
      check_hlds__simplify__format_call__TypeName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeName_14, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_13));
#line 1786 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeName_14, 1) = ((MR_Box) ((MR_String) "string_format_int_base"));
#line 1786 "format_call.m"
    }
#line 1787 "format_call.m"
    {
#line 1787 "format_call.m"
      check_hlds__simplify__format_call__TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1787 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtor_15, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeName_14));
#line 1787 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtor_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1787 "format_call.m"
    }
#line 1788 "format_call.m"
    {
#line 1788 "format_call.m"
      check_hlds__simplify__format_call__Type_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1788 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeName_14));
#line 1788 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1788 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1788 "format_call.m"
    }
#line 1792 "format_call.m"
    if ((check_hlds__simplify__format_call__Base_8 == (MR_Integer) 1))
#line 1794 "format_call.m"
      check_hlds__simplify__format_call__ConsName_17 = (MR_String) "base_decimal";
#line 1792 "format_call.m"
    else
#line 1792 "format_call.m"
      if ((check_hlds__simplify__format_call__Base_8 == (MR_Integer) 2))
#line 1797 "format_call.m"
        check_hlds__simplify__format_call__ConsName_17 = (MR_String) "base_hex_lc";
#line 1792 "format_call.m"
      else
#line 1792 "format_call.m"
        if ((check_hlds__simplify__format_call__Base_8 == (MR_Integer) 4))
#line 1803 "format_call.m"
          check_hlds__simplify__format_call__ConsName_17 = (MR_String) "base_hex_p";
#line 1792 "format_call.m"
        else
#line 1792 "format_call.m"
          if ((check_hlds__simplify__format_call__Base_8 == (MR_Integer) 3))
#line 1800 "format_call.m"
            check_hlds__simplify__format_call__ConsName_17 = (MR_String) "base_hex_uc";
#line 1792 "format_call.m"
          else
#line 1791 "format_call.m"
            check_hlds__simplify__format_call__ConsName_17 = (MR_String) "base_octal";
#line 1805 "format_call.m"
    {
#line 1805 "format_call.m"
      check_hlds__simplify__format_call__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_27_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_13));
#line 1805 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_27_27, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsName_17));
#line 1805 "format_call.m"
    }
#line 1805 "format_call.m"
    {
#line 1805 "format_call.m"
      check_hlds__simplify__format_call__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1805 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_27_27));
#line 1805 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1805 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtor_15));
#line 1805 "format_call.m"
    }
#line 1806 "format_call.m"
    {
#line 1806 "format_call.m"
      hlds__make_goal__make_const_construction_alloc_9_p_0(check_hlds__simplify__format_call__ConsId_18, check_hlds__simplify__format_call__Type_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Goal_10, check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_21, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_22);
#line 1806 "format_call.m"
      return;
    }
#line 1784 "format_call.m"
  }
#line 1780 "format_call.m"
}

#line 1755 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(
#line 1755 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybePrec_9,
#line 1755 "format_call.m"
  MR_String * check_hlds__simplify__format_call__PredNameSuffix_10,
#line 1755 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybePrecVar_11,
#line 1755 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybePrecGoals_12,
#line 1755 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18,
#line 1755 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19,
#line 1755 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20,
#line 1755 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21)
#line 1755 "format_call.m"
{
#line 1762 "format_call.m"
  {
#line 1762 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1762 "format_call.m"
    if ((check_hlds__simplify__format_call__MaybePrec_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1762 "format_call.m"
      {
#line 1763 "format_call.m"
        *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_noprec";
#line 1764 "format_call.m"
        *check_hlds__simplify__format_call__MaybePrecVar_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1765 "format_call.m"
        *check_hlds__simplify__format_call__MaybePrecGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1765 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18;
#line 1765 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20;
#line 1762 "format_call.m"
      }
#line 1762 "format_call.m"
    else
#line 1762 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybePrec_9)) == (MR_mktag((MR_Integer) 1))))
#line 1767 "format_call.m"
        {
#line 1767 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__PrecInt_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybePrec_9, (MR_Integer) 0)));
#line 1767 "format_call.m"
          MR_Word check_hlds__simplify__format_call__PrecGoal_16;
#line 1767 "format_call.m"
          MR_Word check_hlds__simplify__format_call__PrecVar_17;

#line 1768 "format_call.m"
          *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_prec";
#line 1769 "format_call.m"
          {
#line 1769 "format_call.m"
            hlds__make_goal__make_int_const_construction_alloc_8_p_0(check_hlds__simplify__format_call__PrecInt_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__PrecGoal_16, &check_hlds__simplify__format_call__PrecVar_17, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21);
          }
#line 1771 "format_call.m"
          {
#line 1771 "format_call.m"
            MR_Word base;
#line 1771 "format_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1771 "format_call.m"
            *check_hlds__simplify__format_call__MaybePrecVar_11 = base;
#line 1771 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__PrecVar_17));
#line 1771 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1771 "format_call.m"
          }
#line 1772 "format_call.m"
          {
#line 1772 "format_call.m"
            MR_Word base;
#line 1772 "format_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "format_call.m"
            *check_hlds__simplify__format_call__MaybePrecGoals_12 = base;
#line 1772 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__PrecGoal_16));
#line 1772 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1772 "format_call.m"
          }
#line 1767 "format_call.m"
        }
#line 1762 "format_call.m"
      else
#line 1774 "format_call.m"
        {
#line 1774 "format_call.m"
          MR_Word check_hlds__simplify__format_call__PrecVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__MaybePrec_9, (MR_Integer) 0)));

#line 1775 "format_call.m"
          *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_prec";
#line 1776 "format_call.m"
          {
#line 1776 "format_call.m"
            MR_Word base;
#line 1776 "format_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "format_call.m"
            *check_hlds__simplify__format_call__MaybePrecVar_11 = base;
#line 1776 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__PrecVar_28));
#line 1776 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1776 "format_call.m"
          }
#line 1777 "format_call.m"
          *check_hlds__simplify__format_call__MaybePrecGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1777 "format_call.m"
          *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18;
#line 1777 "format_call.m"
          *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20;
#line 1774 "format_call.m"
        }
#line 1762 "format_call.m"
  }
#line 1755 "format_call.m"
}

#line 1725 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(
#line 1725 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeWidth_9,
#line 1725 "format_call.m"
  MR_String * check_hlds__simplify__format_call__PredNameSuffix_10,
#line 1725 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeWidthVar_11,
#line 1725 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeWidthGoals_12,
#line 1725 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18,
#line 1725 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19,
#line 1725 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20,
#line 1725 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21)
#line 1725 "format_call.m"
{
#line 1732 "format_call.m"
  {
#line 1732 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1732 "format_call.m"
    if ((check_hlds__simplify__format_call__MaybeWidth_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1732 "format_call.m"
      {
#line 1733 "format_call.m"
        *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_nowidth";
#line 1734 "format_call.m"
        *check_hlds__simplify__format_call__MaybeWidthVar_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1735 "format_call.m"
        *check_hlds__simplify__format_call__MaybeWidthGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1735 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18;
#line 1735 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20;
#line 1732 "format_call.m"
      }
#line 1732 "format_call.m"
    else
#line 1732 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeWidth_9)) == (MR_mktag((MR_Integer) 1))))
#line 1737 "format_call.m"
        {
#line 1737 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__WidthInt_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeWidth_9, (MR_Integer) 0)));
#line 1737 "format_call.m"
          MR_Word check_hlds__simplify__format_call__WidthGoal_16;
#line 1737 "format_call.m"
          MR_Word check_hlds__simplify__format_call__WidthVar_17;

#line 1738 "format_call.m"
          *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_width";
#line 1739 "format_call.m"
          {
#line 1739 "format_call.m"
            hlds__make_goal__make_int_const_construction_alloc_8_p_0(check_hlds__simplify__format_call__WidthInt_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__WidthGoal_16, &check_hlds__simplify__format_call__WidthVar_17, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21);
          }
#line 1741 "format_call.m"
          {
#line 1741 "format_call.m"
            MR_Word base;
#line 1741 "format_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1741 "format_call.m"
            *check_hlds__simplify__format_call__MaybeWidthVar_11 = base;
#line 1741 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__WidthVar_17));
#line 1741 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1741 "format_call.m"
          }
#line 1742 "format_call.m"
          {
#line 1742 "format_call.m"
            MR_Word base;
#line 1742 "format_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1742 "format_call.m"
            *check_hlds__simplify__format_call__MaybeWidthGoals_12 = base;
#line 1742 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__WidthGoal_16));
#line 1742 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1742 "format_call.m"
          }
#line 1737 "format_call.m"
        }
#line 1732 "format_call.m"
      else
#line 1744 "format_call.m"
        {
#line 1744 "format_call.m"
          MR_Word check_hlds__simplify__format_call__WidthVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__MaybeWidth_9, (MR_Integer) 0)));

#line 1745 "format_call.m"
          *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_width";
#line 1746 "format_call.m"
          {
#line 1746 "format_call.m"
            MR_Word base;
#line 1746 "format_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1746 "format_call.m"
            *check_hlds__simplify__format_call__MaybeWidthVar_11 = base;
#line 1746 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__WidthVar_28));
#line 1746 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1746 "format_call.m"
          }
#line 1747 "format_call.m"
          *check_hlds__simplify__format_call__MaybeWidthGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1747 "format_call.m"
          *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18;
#line 1747 "format_call.m"
          *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20;
#line 1744 "format_call.m"
        }
#line 1732 "format_call.m"
  }
#line 1725 "format_call.m"
}

#line 1628 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__build_flags_arg_7_p_0(
#line 1628 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Flags_8,
#line 1628 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Var_9,
#line 1628 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_10,
#line 1628 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_61,
#line 1628 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_62,
#line 1628 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_63,
#line 1628 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_64)
#line 1628 "format_call.m"
{
#line 1632 "format_call.m"
  {
#line 1632 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_124_124 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__FlagHash_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__FlagSpace_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__FlagZero_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__FlagMinus_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__FlagPlus_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__VarHash_18;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__VarSpace_19;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__VarZero_20;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__VarMinus_21;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__VarPlus_22;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ParseUtil_23;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeSymNameHash_24;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeSymNameSpace_25;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeSymNameZero_26;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeSymNameMinus_27;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeSymNamePlus_28;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorHash_29;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorSpace_30;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorZero_31;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorMinus_32;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorPlus_33;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeHash_34;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeSpace_35;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeZero_36;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeMinus_37;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypePlus_38;
#line 1632 "format_call.m"
    MR_String check_hlds__simplify__format_call__ConsNameHash_39;
#line 1632 "format_call.m"
    MR_String check_hlds__simplify__format_call__ConsNameSpace_40;
#line 1632 "format_call.m"
    MR_String check_hlds__simplify__format_call__ConsNameZero_41;
#line 1632 "format_call.m"
    MR_String check_hlds__simplify__format_call__ConsNameMinus_42;
#line 1632 "format_call.m"
    MR_String check_hlds__simplify__format_call__ConsNamePlus_43;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConsIdHash_44;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConsIdSpace_45;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConsIdZero_46;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConsIdMinus_47;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConsIdPlus_48;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalHash_49;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalSpace_50;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalZero_51;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalMinus_52;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalPlus_53;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCombine_55;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorCombine_56;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConsSymNameCombine_57;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConsIdCombine_58;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SpecVars_59;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalCombine_60;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_65_65;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_66_66;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_67_67;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_68_68;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_69_69;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_90_90;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_91_91;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_92_92;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_93_93;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_94_94;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_95_95;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_97_97;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_99_99;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_101_101;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_103_103;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_113_113;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_114_114;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_115_115;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_116_116;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_118_118;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_119_119;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_120_120;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_121_121;
#line 1632 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_122_122;

#line 1635 "format_call.m"
    {
#line 1635 "format_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarHash_18, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_61, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_65_65);
    }
#line 1636 "format_call.m"
    {
#line 1636 "format_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarSpace_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_65_65, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_66_66);
    }
#line 1637 "format_call.m"
    {
#line 1637 "format_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarZero_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_66_66, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_67_67);
    }
#line 1638 "format_call.m"
    {
#line 1638 "format_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarMinus_21, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_67_67, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_68_68);
    }
#line 1639 "format_call.m"
    {
#line 1639 "format_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarPlus_22, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_68_68, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_69_69);
    }
#line 1640 "format_call.m"
    {
#line 1640 "format_call.m"
      check_hlds__simplify__format_call__ParseUtil_23 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    }
#line 1641 "format_call.m"
    {
#line 1641 "format_call.m"
      check_hlds__simplify__format_call__TypeSymNameHash_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1641 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameHash_24, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1641 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameHash_24, 1) = ((MR_Box) ((MR_String) "string_format_flag_hash"));
#line 1641 "format_call.m"
    }
#line 1642 "format_call.m"
    {
#line 1642 "format_call.m"
      check_hlds__simplify__format_call__TypeSymNameSpace_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1642 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameSpace_25, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1642 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameSpace_25, 1) = ((MR_Box) ((MR_String) "string_format_flag_space"));
#line 1642 "format_call.m"
    }
#line 1643 "format_call.m"
    {
#line 1643 "format_call.m"
      check_hlds__simplify__format_call__TypeSymNameZero_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameZero_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1643 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameZero_26, 1) = ((MR_Box) ((MR_String) "string_format_flag_zero"));
#line 1643 "format_call.m"
    }
#line 1644 "format_call.m"
    {
#line 1644 "format_call.m"
      check_hlds__simplify__format_call__TypeSymNameMinus_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1644 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameMinus_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1644 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameMinus_27, 1) = ((MR_Box) ((MR_String) "string_format_flag_minus"));
#line 1644 "format_call.m"
    }
#line 1645 "format_call.m"
    {
#line 1645 "format_call.m"
      check_hlds__simplify__format_call__TypeSymNamePlus_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1645 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNamePlus_28, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1645 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNamePlus_28, 1) = ((MR_Box) ((MR_String) "string_format_flag_plus"));
#line 1645 "format_call.m"
    }
#line 1646 "format_call.m"
    {
#line 1646 "format_call.m"
      check_hlds__simplify__format_call__TypeCtorHash_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1646 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorHash_29, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameHash_24));
#line 1646 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorHash_29, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1646 "format_call.m"
    }
#line 1647 "format_call.m"
    {
#line 1647 "format_call.m"
      check_hlds__simplify__format_call__TypeCtorSpace_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1647 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorSpace_30, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameSpace_25));
#line 1647 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorSpace_30, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1647 "format_call.m"
    }
#line 1648 "format_call.m"
    {
#line 1648 "format_call.m"
      check_hlds__simplify__format_call__TypeCtorZero_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1648 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorZero_31, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameZero_26));
#line 1648 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorZero_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1648 "format_call.m"
    }
#line 1649 "format_call.m"
    {
#line 1649 "format_call.m"
      check_hlds__simplify__format_call__TypeCtorMinus_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1649 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorMinus_32, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameMinus_27));
#line 1649 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorMinus_32, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1649 "format_call.m"
    }
#line 1650 "format_call.m"
    {
#line 1650 "format_call.m"
      check_hlds__simplify__format_call__TypeCtorPlus_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1650 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorPlus_33, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNamePlus_28));
#line 1650 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorPlus_33, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1650 "format_call.m"
    }
#line 1651 "format_call.m"
    {
#line 1651 "format_call.m"
      check_hlds__simplify__format_call__TypeHash_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeHash_34, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameHash_24));
#line 1651 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeHash_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1651 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeHash_34, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1651 "format_call.m"
    }
#line 1652 "format_call.m"
    {
#line 1652 "format_call.m"
      check_hlds__simplify__format_call__TypeSpace_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSpace_35, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameSpace_25));
#line 1652 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSpace_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1652 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSpace_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1652 "format_call.m"
    }
#line 1653 "format_call.m"
    {
#line 1653 "format_call.m"
      check_hlds__simplify__format_call__TypeZero_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1653 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeZero_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameZero_26));
#line 1653 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeZero_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1653 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeZero_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1653 "format_call.m"
    }
#line 1654 "format_call.m"
    {
#line 1654 "format_call.m"
      check_hlds__simplify__format_call__TypeMinus_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeMinus_37, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameMinus_27));
#line 1654 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeMinus_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1654 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeMinus_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1654 "format_call.m"
    }
#line 1655 "format_call.m"
    {
#line 1655 "format_call.m"
      check_hlds__simplify__format_call__TypePlus_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1655 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypePlus_38, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNamePlus_28));
#line 1655 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypePlus_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypePlus_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "format_call.m"
    }
#line 1656 "format_call.m"
    {
#line 1656 "format_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__format_call__VarHash_18, check_hlds__simplify__format_call__TypeHash_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_63, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_90_90);
    }
#line 1657 "format_call.m"
    {
#line 1657 "format_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__format_call__VarSpace_19, check_hlds__simplify__format_call__TypeSpace_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_90_90, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_91_91);
    }
#line 1658 "format_call.m"
    {
#line 1658 "format_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__format_call__VarZero_20, check_hlds__simplify__format_call__TypeZero_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_91_91, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_92_92);
    }
#line 1659 "format_call.m"
    {
#line 1659 "format_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__format_call__VarMinus_21, check_hlds__simplify__format_call__TypeMinus_37, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_92_92, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_93_93);
    }
#line 1660 "format_call.m"
    {
#line 1660 "format_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__format_call__VarPlus_22, check_hlds__simplify__format_call__TypePlus_38, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_93_93, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_94_94);
    }
#line 1664 "format_call.m"
    if ((check_hlds__simplify__format_call__FlagHash_13 == (MR_Integer) 0))
#line 1663 "format_call.m"
      check_hlds__simplify__format_call__ConsNameHash_39 = (MR_String) "flag_hash_clear";
#line 1664 "format_call.m"
    else
#line 1666 "format_call.m"
      check_hlds__simplify__format_call__ConsNameHash_39 = (MR_String) "flag_hash_set";
#line 1671 "format_call.m"
    if ((check_hlds__simplify__format_call__FlagSpace_14 == (MR_Integer) 0))
#line 1670 "format_call.m"
      check_hlds__simplify__format_call__ConsNameSpace_40 = (MR_String) "flag_space_clear";
#line 1671 "format_call.m"
    else
#line 1673 "format_call.m"
      check_hlds__simplify__format_call__ConsNameSpace_40 = (MR_String) "flag_space_set";
#line 1678 "format_call.m"
    if ((check_hlds__simplify__format_call__FlagZero_15 == (MR_Integer) 0))
#line 1677 "format_call.m"
      check_hlds__simplify__format_call__ConsNameZero_41 = (MR_String) "flag_zero_clear";
#line 1678 "format_call.m"
    else
#line 1680 "format_call.m"
      check_hlds__simplify__format_call__ConsNameZero_41 = (MR_String) "flag_zero_set";
#line 1685 "format_call.m"
    if ((check_hlds__simplify__format_call__FlagMinus_16 == (MR_Integer) 0))
#line 1684 "format_call.m"
      check_hlds__simplify__format_call__ConsNameMinus_42 = (MR_String) "flag_minus_clear";
#line 1685 "format_call.m"
    else
#line 1687 "format_call.m"
      check_hlds__simplify__format_call__ConsNameMinus_42 = (MR_String) "flag_minus_set";
#line 1692 "format_call.m"
    if ((check_hlds__simplify__format_call__FlagPlus_17 == (MR_Integer) 0))
#line 1691 "format_call.m"
      check_hlds__simplify__format_call__ConsNamePlus_43 = (MR_String) "flag_plus_clear";
#line 1692 "format_call.m"
    else
#line 1694 "format_call.m"
      check_hlds__simplify__format_call__ConsNamePlus_43 = (MR_String) "flag_plus_set";
#line 1696 "format_call.m"
    {
#line 1696 "format_call.m"
      check_hlds__simplify__format_call__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_95_95, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1696 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_95_95, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNameHash_39));
#line 1696 "format_call.m"
    }
#line 1696 "format_call.m"
    {
#line 1696 "format_call.m"
      check_hlds__simplify__format_call__ConsIdHash_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdHash_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1696 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdHash_44, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_95_95));
#line 1696 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdHash_44, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1696 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdHash_44, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorHash_29));
#line 1696 "format_call.m"
    }
#line 1697 "format_call.m"
    {
#line 1697 "format_call.m"
      check_hlds__simplify__format_call__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_97_97, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1697 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_97_97, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNameSpace_40));
#line 1697 "format_call.m"
    }
#line 1697 "format_call.m"
    {
#line 1697 "format_call.m"
      check_hlds__simplify__format_call__ConsIdSpace_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1697 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdSpace_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1697 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdSpace_45, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_97_97));
#line 1697 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdSpace_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1697 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdSpace_45, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorSpace_30));
#line 1697 "format_call.m"
    }
#line 1698 "format_call.m"
    {
#line 1698 "format_call.m"
      check_hlds__simplify__format_call__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_99_99, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1698 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_99_99, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNameZero_41));
#line 1698 "format_call.m"
    }
#line 1698 "format_call.m"
    {
#line 1698 "format_call.m"
      check_hlds__simplify__format_call__ConsIdZero_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1698 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdZero_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1698 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdZero_46, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_99_99));
#line 1698 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdZero_46, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1698 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdZero_46, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorZero_31));
#line 1698 "format_call.m"
    }
#line 1699 "format_call.m"
    {
#line 1699 "format_call.m"
      check_hlds__simplify__format_call__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_101_101, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1699 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_101_101, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNameMinus_42));
#line 1699 "format_call.m"
    }
#line 1699 "format_call.m"
    {
#line 1699 "format_call.m"
      check_hlds__simplify__format_call__ConsIdMinus_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdMinus_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1699 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdMinus_47, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_101_101));
#line 1699 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdMinus_47, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1699 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdMinus_47, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorMinus_32));
#line 1699 "format_call.m"
    }
#line 1700 "format_call.m"
    {
#line 1700 "format_call.m"
      check_hlds__simplify__format_call__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1700 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_103_103, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1700 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_103_103, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNamePlus_43));
#line 1700 "format_call.m"
    }
#line 1700 "format_call.m"
    {
#line 1700 "format_call.m"
      check_hlds__simplify__format_call__ConsIdPlus_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1700 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdPlus_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1700 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdPlus_48, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_103_103));
#line 1700 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdPlus_48, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1700 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdPlus_48, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorPlus_33));
#line 1700 "format_call.m"
    }
#line 1701 "format_call.m"
    {
#line 1701 "format_call.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarHash_18, check_hlds__simplify__format_call__ConsIdHash_44, &check_hlds__simplify__format_call__GoalHash_49);
    }
#line 1702 "format_call.m"
    {
#line 1702 "format_call.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarSpace_19, check_hlds__simplify__format_call__ConsIdSpace_45, &check_hlds__simplify__format_call__GoalSpace_50);
    }
#line 1703 "format_call.m"
    {
#line 1703 "format_call.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarZero_20, check_hlds__simplify__format_call__ConsIdZero_46, &check_hlds__simplify__format_call__GoalZero_51);
    }
#line 1704 "format_call.m"
    {
#line 1704 "format_call.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarMinus_21, check_hlds__simplify__format_call__ConsIdMinus_47, &check_hlds__simplify__format_call__GoalMinus_52);
    }
#line 1705 "format_call.m"
    {
#line 1705 "format_call.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarPlus_22, check_hlds__simplify__format_call__ConsIdPlus_48, &check_hlds__simplify__format_call__GoalPlus_53);
    }
#line 1707 "format_call.m"
    {
#line 1707 "format_call.m"
      check_hlds__simplify__format_call__ConsSymNameCombine_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ConsSymNameCombine_57, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
#line 1707 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ConsSymNameCombine_57, 1) = ((MR_Box) ((MR_String) "string_format_flags"));
#line 1707 "format_call.m"
    }
#line 1708 "format_call.m"
    {
#line 1708 "format_call.m"
      check_hlds__simplify__format_call__TypeCombine_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeCombine_55, 0) = ((MR_Box) (check_hlds__simplify__format_call__ConsSymNameCombine_57));
#line 1708 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeCombine_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1708 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeCombine_55, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1708 "format_call.m"
    }
#line 1709 "format_call.m"
    {
#line 1709 "format_call.m"
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_69_69, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_62);
    }
#line 1710 "format_call.m"
    {
#line 1710 "format_call.m"
      parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__TypeCombine_55, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_94_94, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_64);
    }
#line 1712 "format_call.m"
    {
#line 1712 "format_call.m"
      check_hlds__simplify__format_call__TypeCtorCombine_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1712 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorCombine_56, 0) = ((MR_Box) (check_hlds__simplify__format_call__ConsSymNameCombine_57));
#line 1712 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorCombine_56, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1712 "format_call.m"
    }
#line 1714 "format_call.m"
    {
#line 1714 "format_call.m"
      check_hlds__simplify__format_call__ConsIdCombine_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdCombine_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1714 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdCombine_58, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsSymNameCombine_57));
#line 1714 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdCombine_58, 2) = ((MR_Box) ((MR_Integer) 5));
#line 1714 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdCombine_58, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorCombine_56));
#line 1714 "format_call.m"
    }
#line 1715 "format_call.m"
    {
#line 1715 "format_call.m"
      check_hlds__simplify__format_call__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarPlus_22));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1715 "format_call.m"
    }
#line 1715 "format_call.m"
    {
#line 1715 "format_call.m"
      check_hlds__simplify__format_call__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_115_115, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarMinus_21));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_115_115, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_116_116));
#line 1715 "format_call.m"
    }
#line 1715 "format_call.m"
    {
#line 1715 "format_call.m"
      check_hlds__simplify__format_call__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_114_114, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarZero_20));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_114_114, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_115_115));
#line 1715 "format_call.m"
    }
#line 1715 "format_call.m"
    {
#line 1715 "format_call.m"
      check_hlds__simplify__format_call__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_113_113, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarSpace_19));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_113_113, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_114_114));
#line 1715 "format_call.m"
    }
#line 1715 "format_call.m"
    {
#line 1715 "format_call.m"
      check_hlds__simplify__format_call__SpecVars_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SpecVars_59, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarHash_18));
#line 1715 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SpecVars_59, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_113_113));
#line 1715 "format_call.m"
    }
#line 1716 "format_call.m"
    {
#line 1716 "format_call.m"
      hlds__make_goal__construct_functor_4_p_0(*check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__ConsIdCombine_58, check_hlds__simplify__format_call__SpecVars_59, &check_hlds__simplify__format_call__GoalCombine_60);
    }
#line 1718 "format_call.m"
    {
#line 1718 "format_call.m"
      check_hlds__simplify__format_call__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_122_122, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalCombine_60));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1718 "format_call.m"
    }
#line 1718 "format_call.m"
    {
#line 1718 "format_call.m"
      check_hlds__simplify__format_call__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_121_121, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalPlus_53));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_121_121, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_122_122));
#line 1718 "format_call.m"
    }
#line 1718 "format_call.m"
    {
#line 1718 "format_call.m"
      check_hlds__simplify__format_call__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_120_120, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalMinus_52));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_120_120, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_121_121));
#line 1718 "format_call.m"
    }
#line 1718 "format_call.m"
    {
#line 1718 "format_call.m"
      check_hlds__simplify__format_call__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_119_119, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalZero_51));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_119_119, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_120_120));
#line 1718 "format_call.m"
    }
#line 1718 "format_call.m"
    {
#line 1718 "format_call.m"
      check_hlds__simplify__format_call__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_118_118, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalSpace_50));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_118_118, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_119_119));
#line 1718 "format_call.m"
    }
#line 1718 "format_call.m"
    {
#line 1718 "format_call.m"
      MR_Word base;
#line 1718 "format_call.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1718 "format_call.m"
      *check_hlds__simplify__format_call__Goals_10 = base;
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalHash_49));
#line 1718 "format_call.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_118_118));
#line 1718 "format_call.m"
    }
#line 1632 "format_call.m"
  }
#line 1628 "format_call.m"
}

#line 1503 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__represent_spec_12_p_0(
#line 1503 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_13,
#line 1503 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Spec_14,
#line 1503 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_15,
#line 1503 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_16,
#line 1503 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_17,
#line 1503 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Context_18,
#line 1503 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_43,
#line 1503 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_44,
#line 1503 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_45,
#line 1503 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_46,
#line 1503 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_47,
#line 1503 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_48)
#line 1503 "format_call.m"
{
#line 1511 "format_call.m"
  {
#line 1511 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1511 "format_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Spec_14)) == (MR_mktag((MR_Integer) 0))))
#line 1511 "format_call.m"
      {
#line 1511 "format_call.m"
        MR_String check_hlds__simplify__format_call__StringConstant_22;
#line 1511 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_23;

#line 1511 "format_call.m"
        *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 0)));
#line 1511 "format_call.m"
        check_hlds__simplify__format_call__StringConstant_22 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
#line 1512 "format_call.m"
        {
#line 1512 "format_call.m"
          check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_45, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_46, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_47, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_48);
        }
#line 1514 "format_call.m"
        {
#line 1514 "format_call.m"
          hlds__make_goal__make_string_const_construction_3_p_0(*check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__StringConstant_22, &check_hlds__simplify__format_call__Goal_23);
        }
#line 1515 "format_call.m"
        {
#line 1515 "format_call.m"
          MR_Word base;
#line 1515 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "format_call.m"
          *check_hlds__simplify__format_call__Goals_17 = base;
#line 1515 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_23));
#line 1515 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "format_call.m"
        }
#line 1515 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_44 = check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_43;
#line 1511 "format_call.m"
      }
#line 1511 "format_call.m"
    else
#line 1511 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Spec_14)) == (MR_mktag((MR_Integer) 1))))
#line 1517 "format_call.m"
        {
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_289_289;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeCtorInfo_290_290;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__Flags_24;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__MaybeWidth_25;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__ValueVar_26;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__FlagsVar_27;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__FlagsGoals_28;
#line 1517 "format_call.m"
          MR_String check_hlds__simplify__format_call__WidthSuffix_29;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__WidthVars_30;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__WidthGoals_31;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__CallGoal_32;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_206_206;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_207_207;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_208_208;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_209_209;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_212_212;
#line 1517 "format_call.m"
          MR_String check_hlds__simplify__format_call__V_213_213;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_218_218;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_220_220;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_222_222;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_224_224;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_225_225;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_226_226;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_228_228;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_229_229;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_234_234;
#line 1517 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_235_235;

#line 1517 "format_call.m"
          *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 0)));
#line 1517 "format_call.m"
          check_hlds__simplify__format_call__Flags_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
#line 1517 "format_call.m"
          check_hlds__simplify__format_call__MaybeWidth_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
#line 1517 "format_call.m"
          check_hlds__simplify__format_call__ValueVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
#line 1518 "format_call.m"
          {
#line 1518 "format_call.m"
            parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_26, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_43, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_44);
          }
#line 1519 "format_call.m"
          {
#line 1519 "format_call.m"
            check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_45, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_206_206, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_47, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_207_207);
          }
#line 1521 "format_call.m"
          {
#line 1521 "format_call.m"
            check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_24, &check_hlds__simplify__format_call__FlagsVar_27, &check_hlds__simplify__format_call__FlagsGoals_28, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_206_206, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_208_208, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_207_207, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_209_209);
          }
#line 1522 "format_call.m"
          {
#line 1522 "format_call.m"
            check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_25, &check_hlds__simplify__format_call__WidthSuffix_29, &check_hlds__simplify__format_call__WidthVars_30, &check_hlds__simplify__format_call__WidthGoals_31, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_208_208, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_46, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_209_209, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_48);
          }
#line 1524 "format_call.m"
          {
#line 1524 "format_call.m"
            check_hlds__simplify__format_call__V_212_212 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
          }
#line 1525 "format_call.m"
          {
#line 1525 "format_call.m"
            check_hlds__simplify__format_call__V_213_213 = mercury__string__f_43_43_2_f_0((MR_String) "format_char_component", check_hlds__simplify__format_call__WidthSuffix_29);
          }
#line 6894 "check_hlds.simplify.format_call.c"
          check_hlds__simplify__format_call__TypeInfo_289_289 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 1527 "format_call.m"
          {
#line 1527 "format_call.m"
            check_hlds__simplify__format_call__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_222_222, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_27));
#line 1527 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_222_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1527 "format_call.m"
          }
#line 1527 "format_call.m"
          {
#line 1527 "format_call.m"
            check_hlds__simplify__format_call__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_226_226, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1527 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_226_226, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1527 "format_call.m"
          }
#line 1527 "format_call.m"
          {
#line 1527 "format_call.m"
            check_hlds__simplify__format_call__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_225_225, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_26));
#line 1527 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_225_225, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_226_226));
#line 1527 "format_call.m"
          }
#line 1527 "format_call.m"
          {
#line 1527 "format_call.m"
            check_hlds__simplify__format_call__V_224_224 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_289_289, check_hlds__simplify__format_call__WidthVars_30, check_hlds__simplify__format_call__V_225_225);
          }
#line 1527 "format_call.m"
          {
#line 1527 "format_call.m"
            check_hlds__simplify__format_call__V_218_218 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_289_289, check_hlds__simplify__format_call__V_222_222, check_hlds__simplify__format_call__V_224_224);
          }
#line 1529 "format_call.m"
          {
#line 1529 "format_call.m"
            check_hlds__simplify__format_call__V_229_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1529 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_229_229, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1529 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_229_229, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
#line 1529 "format_call.m"
          }
#line 1529 "format_call.m"
          {
#line 1529 "format_call.m"
            check_hlds__simplify__format_call__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_228_228, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_229_229));
#line 1529 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_228_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1529 "format_call.m"
          }
#line 1528 "format_call.m"
          {
#line 1528 "format_call.m"
            check_hlds__simplify__format_call__V_220_220 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_228_228);
          }
#line 1524 "format_call.m"
          {
#line 1524 "format_call.m"
            hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_212_212, check_hlds__simplify__format_call__V_213_213, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_218_218, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_220_220, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_32);
          }
#line 6966 "check_hlds.simplify.format_call.c"
          check_hlds__simplify__format_call__TypeCtorInfo_290_290 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1531 "format_call.m"
          {
#line 1531 "format_call.m"
            check_hlds__simplify__format_call__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_235_235, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_32));
#line 1531 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_235_235, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1531 "format_call.m"
          }
#line 1531 "format_call.m"
          {
#line 1531 "format_call.m"
            check_hlds__simplify__format_call__V_234_234 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_290_290, check_hlds__simplify__format_call__WidthGoals_31, check_hlds__simplify__format_call__V_235_235);
          }
#line 1531 "format_call.m"
          {
#line 1531 "format_call.m"
            *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_290_290, check_hlds__simplify__format_call__FlagsGoals_28, check_hlds__simplify__format_call__V_234_234);
          }
#line 1517 "format_call.m"
        }
#line 1511 "format_call.m"
      else
#line 1511 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Spec_14)) == (MR_mktag((MR_Integer) 2))))
#line 1534 "format_call.m"
          {
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_292_292;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeCtorInfo_293_293;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__MaybePrec_33;
#line 1534 "format_call.m"
            MR_String check_hlds__simplify__format_call__PrecSuffix_34;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__PrecVars_35;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__PrecGoals_36;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_169_169;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_170_170;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_171_171;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_172_172;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_173_173;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_174_174;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_177_177;
#line 1534 "format_call.m"
            MR_String check_hlds__simplify__format_call__V_178_178;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_183_183;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_185_185;
#line 1534 "format_call.m"
            MR_String check_hlds__simplify__format_call__V_187_187;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_188_188;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_190_190;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_191_191;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_192_192;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_193_193;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_195_195;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_196_196;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_201_201;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_202_202;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_203_203;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Flags_240;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__MaybeWidth_241;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ValueVar_242;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__FlagsVar_243;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__FlagsGoals_244;
#line 1534 "format_call.m"
            MR_String check_hlds__simplify__format_call__WidthSuffix_245;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__WidthVars_246;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__WidthGoals_247;
#line 1534 "format_call.m"
            MR_Word check_hlds__simplify__format_call__CallGoal_248;

#line 1533 "format_call.m"
            *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 0)));
#line 1533 "format_call.m"
            check_hlds__simplify__format_call__Flags_240 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
#line 1533 "format_call.m"
            check_hlds__simplify__format_call__MaybeWidth_241 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
#line 1533 "format_call.m"
            check_hlds__simplify__format_call__MaybePrec_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
#line 1533 "format_call.m"
            check_hlds__simplify__format_call__ValueVar_242 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 4)));
#line 1535 "format_call.m"
            {
#line 1535 "format_call.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_242, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_43, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_44);
            }
#line 1536 "format_call.m"
            {
#line 1536 "format_call.m"
              check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_45, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_169_169, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_47, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_170_170);
            }
#line 1538 "format_call.m"
            {
#line 1538 "format_call.m"
              check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_240, &check_hlds__simplify__format_call__FlagsVar_243, &check_hlds__simplify__format_call__FlagsGoals_244, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_169_169, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_171_171, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_170_170, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_172_172);
            }
#line 1539 "format_call.m"
            {
#line 1539 "format_call.m"
              check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_241, &check_hlds__simplify__format_call__WidthSuffix_245, &check_hlds__simplify__format_call__WidthVars_246, &check_hlds__simplify__format_call__WidthGoals_247, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_171_171, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_173_173, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_172_172, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_174_174);
            }
#line 1541 "format_call.m"
            {
#line 1541 "format_call.m"
              check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(check_hlds__simplify__format_call__MaybePrec_33, &check_hlds__simplify__format_call__PrecSuffix_34, &check_hlds__simplify__format_call__PrecVars_35, &check_hlds__simplify__format_call__PrecGoals_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_173_173, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_46, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_174_174, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_48);
            }
#line 1543 "format_call.m"
            {
#line 1543 "format_call.m"
              check_hlds__simplify__format_call__V_177_177 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
            }
#line 1544 "format_call.m"
            {
#line 1544 "format_call.m"
              check_hlds__simplify__format_call__V_187_187 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__WidthSuffix_245, check_hlds__simplify__format_call__PrecSuffix_34);
            }
#line 1544 "format_call.m"
            {
#line 1544 "format_call.m"
              check_hlds__simplify__format_call__V_178_178 = mercury__string__f_43_43_2_f_0((MR_String) "format_string_component", check_hlds__simplify__format_call__V_187_187);
            }
#line 7119 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeInfo_292_292 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 1546 "format_call.m"
            {
#line 1546 "format_call.m"
              check_hlds__simplify__format_call__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1546 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_188_188, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_243));
#line 1546 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_188_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1546 "format_call.m"
            }
#line 1546 "format_call.m"
            {
#line 1546 "format_call.m"
              check_hlds__simplify__format_call__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1546 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_193_193, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1546 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1546 "format_call.m"
            }
#line 1546 "format_call.m"
            {
#line 1546 "format_call.m"
              check_hlds__simplify__format_call__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1546 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_192_192, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_242));
#line 1546 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_192_192, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_193_193));
#line 1546 "format_call.m"
            }
#line 1546 "format_call.m"
            {
#line 1546 "format_call.m"
              check_hlds__simplify__format_call__V_191_191 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_292_292, check_hlds__simplify__format_call__PrecVars_35, check_hlds__simplify__format_call__V_192_192);
            }
#line 1546 "format_call.m"
            {
#line 1546 "format_call.m"
              check_hlds__simplify__format_call__V_190_190 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_292_292, check_hlds__simplify__format_call__WidthVars_246, check_hlds__simplify__format_call__V_191_191);
            }
#line 1546 "format_call.m"
            {
#line 1546 "format_call.m"
              check_hlds__simplify__format_call__V_183_183 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_292_292, check_hlds__simplify__format_call__V_188_188, check_hlds__simplify__format_call__V_190_190);
            }
#line 1548 "format_call.m"
            {
#line 1548 "format_call.m"
              check_hlds__simplify__format_call__V_196_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1548 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_196_196, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1548 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_196_196, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
#line 1548 "format_call.m"
            }
#line 1548 "format_call.m"
            {
#line 1548 "format_call.m"
              check_hlds__simplify__format_call__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_195_195, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_196_196));
#line 1548 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_195_195, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1548 "format_call.m"
            }
#line 1547 "format_call.m"
            {
#line 1547 "format_call.m"
              check_hlds__simplify__format_call__V_185_185 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_195_195);
            }
#line 1543 "format_call.m"
            {
#line 1543 "format_call.m"
              hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_177_177, check_hlds__simplify__format_call__V_178_178, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_183_183, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_185_185, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_248);
            }
#line 7196 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeCtorInfo_293_293 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1550 "format_call.m"
            {
#line 1550 "format_call.m"
              check_hlds__simplify__format_call__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_203_203, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_248));
#line 1550 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1550 "format_call.m"
            }
#line 1550 "format_call.m"
            {
#line 1550 "format_call.m"
              check_hlds__simplify__format_call__V_202_202 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_293_293, check_hlds__simplify__format_call__PrecGoals_36, check_hlds__simplify__format_call__V_203_203);
            }
#line 1550 "format_call.m"
            {
#line 1550 "format_call.m"
              check_hlds__simplify__format_call__V_201_201 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_293_293, check_hlds__simplify__format_call__WidthGoals_247, check_hlds__simplify__format_call__V_202_202);
            }
#line 1550 "format_call.m"
            {
#line 1550 "format_call.m"
              *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_293_293, check_hlds__simplify__format_call__FlagsGoals_244, check_hlds__simplify__format_call__V_201_201);
            }
#line 1534 "format_call.m"
          }
#line 1511 "format_call.m"
        else
#line 1511 "format_call.m"
          if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__Spec_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1593 "format_call.m"
            {
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_301_301;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_302_302;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__Kind_40;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__KindVar_41;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__KindGoal_42;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_50_50;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_51_51;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_52_52;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_53_53;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_54_54;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_55_55;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_56_56;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_57_57;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_60_60;
#line 1593 "format_call.m"
              MR_String check_hlds__simplify__format_call__V_61_61;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_66_66;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_68_68;
#line 1593 "format_call.m"
              MR_String check_hlds__simplify__format_call__V_70_70;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_71_71;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_73_73;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_74_74;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_75_75;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_76_76;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_77_77;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_79_79;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_80_80;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_85_85;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_86_86;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_87_87;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_88_88;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__Flags_275;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__MaybeWidth_276;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__ValueVar_277;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__FlagsVar_278;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__FlagsGoals_279;
#line 1593 "format_call.m"
              MR_String check_hlds__simplify__format_call__WidthSuffix_280;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__WidthVars_281;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__WidthGoals_282;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__CallGoal_283;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__MaybePrec_284;
#line 1593 "format_call.m"
              MR_String check_hlds__simplify__format_call__PrecSuffix_285;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__PrecVars_286;
#line 1593 "format_call.m"
              MR_Word check_hlds__simplify__format_call__PrecGoals_287;

#line 1592 "format_call.m"
              *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
#line 1592 "format_call.m"
              check_hlds__simplify__format_call__Flags_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
#line 1592 "format_call.m"
              check_hlds__simplify__format_call__MaybeWidth_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
#line 1592 "format_call.m"
              check_hlds__simplify__format_call__MaybePrec_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 4)));
#line 1592 "format_call.m"
              check_hlds__simplify__format_call__Kind_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 5)));
#line 1592 "format_call.m"
              check_hlds__simplify__format_call__ValueVar_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 6)));
#line 1594 "format_call.m"
              {
#line 1594 "format_call.m"
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_277, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_43, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_44);
              }
#line 1595 "format_call.m"
              {
#line 1595 "format_call.m"
                check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_45, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_50_50, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_47, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_51_51);
              }
#line 1597 "format_call.m"
              {
#line 1597 "format_call.m"
                check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_275, &check_hlds__simplify__format_call__FlagsVar_278, &check_hlds__simplify__format_call__FlagsGoals_279, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_50_50, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_52_52, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_51_51, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_53_53);
              }
#line 1598 "format_call.m"
              {
#line 1598 "format_call.m"
                check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_276, &check_hlds__simplify__format_call__WidthSuffix_280, &check_hlds__simplify__format_call__WidthVars_281, &check_hlds__simplify__format_call__WidthGoals_282, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_52_52, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_54_54, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_53_53, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_55_55);
              }
#line 1600 "format_call.m"
              {
#line 1600 "format_call.m"
                check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(check_hlds__simplify__format_call__MaybePrec_284, &check_hlds__simplify__format_call__PrecSuffix_285, &check_hlds__simplify__format_call__PrecVars_286, &check_hlds__simplify__format_call__PrecGoals_287, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_54_54, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_56_56, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_55_55, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_57_57);
              }
#line 1602 "format_call.m"
              {
#line 1602 "format_call.m"
                check_hlds__simplify__format_call__build_float_kind_arg_7_p_0(check_hlds__simplify__format_call__Kind_40, &check_hlds__simplify__format_call__KindVar_41, &check_hlds__simplify__format_call__KindGoal_42, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_56_56, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_46, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_57_57, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_48);
              }
#line 1603 "format_call.m"
              {
#line 1603 "format_call.m"
                check_hlds__simplify__format_call__V_60_60 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
              }
#line 1604 "format_call.m"
              {
#line 1604 "format_call.m"
                check_hlds__simplify__format_call__V_70_70 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__WidthSuffix_280, check_hlds__simplify__format_call__PrecSuffix_285);
              }
#line 1604 "format_call.m"
              {
#line 1604 "format_call.m"
                check_hlds__simplify__format_call__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "format_float_component", check_hlds__simplify__format_call__V_70_70);
              }
#line 7375 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__TypeInfo_301_301 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 1606 "format_call.m"
              {
#line 1606 "format_call.m"
                check_hlds__simplify__format_call__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1606 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_71_71, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_278));
#line 1606 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1606 "format_call.m"
              }
#line 1607 "format_call.m"
              {
#line 1607 "format_call.m"
                check_hlds__simplify__format_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_77_77, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1607 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1607 "format_call.m"
              }
#line 1607 "format_call.m"
              {
#line 1607 "format_call.m"
                check_hlds__simplify__format_call__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_277));
#line 1607 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_76_76, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_77_77));
#line 1607 "format_call.m"
              }
#line 1607 "format_call.m"
              {
#line 1607 "format_call.m"
                check_hlds__simplify__format_call__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_75_75, 0) = ((MR_Box) (check_hlds__simplify__format_call__KindVar_41));
#line 1607 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_75_75, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_76_76));
#line 1607 "format_call.m"
              }
#line 1606 "format_call.m"
              {
#line 1606 "format_call.m"
                check_hlds__simplify__format_call__V_74_74 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_301_301, check_hlds__simplify__format_call__PrecVars_286, check_hlds__simplify__format_call__V_75_75);
              }
#line 1606 "format_call.m"
              {
#line 1606 "format_call.m"
                check_hlds__simplify__format_call__V_73_73 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_301_301, check_hlds__simplify__format_call__WidthVars_281, check_hlds__simplify__format_call__V_74_74);
              }
#line 1606 "format_call.m"
              {
#line 1606 "format_call.m"
                check_hlds__simplify__format_call__V_66_66 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_301_301, check_hlds__simplify__format_call__V_71_71, check_hlds__simplify__format_call__V_73_73);
              }
#line 1609 "format_call.m"
              {
#line 1609 "format_call.m"
                check_hlds__simplify__format_call__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1609 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_80_80, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1609 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
#line 1609 "format_call.m"
              }
#line 1609 "format_call.m"
              {
#line 1609 "format_call.m"
                check_hlds__simplify__format_call__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_79_79, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_80_80));
#line 1609 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1609 "format_call.m"
              }
#line 1608 "format_call.m"
              {
#line 1608 "format_call.m"
                check_hlds__simplify__format_call__V_68_68 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_79_79);
              }
#line 1603 "format_call.m"
              {
#line 1603 "format_call.m"
                hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_60_60, check_hlds__simplify__format_call__V_61_61, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_66_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_68_68, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_283);
              }
#line 7462 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__TypeCtorInfo_302_302 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1611 "format_call.m"
              {
#line 1611 "format_call.m"
                check_hlds__simplify__format_call__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_88_88, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_283));
#line 1611 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1611 "format_call.m"
              }
#line 1611 "format_call.m"
              {
#line 1611 "format_call.m"
                check_hlds__simplify__format_call__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_87_87, 0) = ((MR_Box) (check_hlds__simplify__format_call__KindGoal_42));
#line 1611 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_87_87, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_88_88));
#line 1611 "format_call.m"
              }
#line 1611 "format_call.m"
              {
#line 1611 "format_call.m"
                check_hlds__simplify__format_call__V_86_86 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_302_302, check_hlds__simplify__format_call__PrecGoals_287, check_hlds__simplify__format_call__V_87_87);
              }
#line 1611 "format_call.m"
              {
#line 1611 "format_call.m"
                check_hlds__simplify__format_call__V_85_85 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_302_302, check_hlds__simplify__format_call__WidthGoals_282, check_hlds__simplify__format_call__V_86_86);
              }
#line 1611 "format_call.m"
              {
#line 1611 "format_call.m"
                *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_302_302, check_hlds__simplify__format_call__FlagsGoals_279, check_hlds__simplify__format_call__V_85_85);
              }
#line 1593 "format_call.m"
            }
#line 1511 "format_call.m"
          else
#line 1511 "format_call.m"
            if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__Spec_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1553 "format_call.m"
              {
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeInfo_295_295;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_296_296;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_132_132;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_133_133;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_134_134;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_135_135;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_136_136;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_137_137;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_140_140;
#line 1553 "format_call.m"
                MR_String check_hlds__simplify__format_call__V_141_141;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_146_146;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_148_148;
#line 1553 "format_call.m"
                MR_String check_hlds__simplify__format_call__V_150_150;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_151_151;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_153_153;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_154_154;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_155_155;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_156_156;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_158_158;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_159_159;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_164_164;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_165_165;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_166_166;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__Flags_249;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__MaybeWidth_250;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__ValueVar_251;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__FlagsVar_252;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__FlagsGoals_253;
#line 1553 "format_call.m"
                MR_String check_hlds__simplify__format_call__WidthSuffix_254;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__WidthVars_255;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__WidthGoals_256;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__CallGoal_257;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__MaybePrec_258;
#line 1553 "format_call.m"
                MR_String check_hlds__simplify__format_call__PrecSuffix_259;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PrecVars_260;
#line 1553 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PrecGoals_261;

#line 1552 "format_call.m"
                *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
#line 1552 "format_call.m"
                check_hlds__simplify__format_call__Flags_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
#line 1552 "format_call.m"
                check_hlds__simplify__format_call__MaybeWidth_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
#line 1552 "format_call.m"
                check_hlds__simplify__format_call__MaybePrec_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 4)));
#line 1552 "format_call.m"
                check_hlds__simplify__format_call__ValueVar_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 5)));
#line 1554 "format_call.m"
                {
#line 1554 "format_call.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_251, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_43, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_44);
                }
#line 1555 "format_call.m"
                {
#line 1555 "format_call.m"
                  check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_45, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_132_132, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_47, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_133_133);
                }
#line 1557 "format_call.m"
                {
#line 1557 "format_call.m"
                  check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_249, &check_hlds__simplify__format_call__FlagsVar_252, &check_hlds__simplify__format_call__FlagsGoals_253, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_132_132, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_134_134, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_133_133, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_135_135);
                }
#line 1558 "format_call.m"
                {
#line 1558 "format_call.m"
                  check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_250, &check_hlds__simplify__format_call__WidthSuffix_254, &check_hlds__simplify__format_call__WidthVars_255, &check_hlds__simplify__format_call__WidthGoals_256, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_134_134, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_135_135, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_137_137);
                }
#line 1560 "format_call.m"
                {
#line 1560 "format_call.m"
                  check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(check_hlds__simplify__format_call__MaybePrec_258, &check_hlds__simplify__format_call__PrecSuffix_259, &check_hlds__simplify__format_call__PrecVars_260, &check_hlds__simplify__format_call__PrecGoals_261, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_46, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_137_137, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_48);
                }
#line 1562 "format_call.m"
                {
#line 1562 "format_call.m"
                  check_hlds__simplify__format_call__V_140_140 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
                }
#line 1563 "format_call.m"
                {
#line 1563 "format_call.m"
                  check_hlds__simplify__format_call__V_150_150 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__WidthSuffix_254, check_hlds__simplify__format_call__PrecSuffix_259);
                }
#line 1563 "format_call.m"
                {
#line 1563 "format_call.m"
                  check_hlds__simplify__format_call__V_141_141 = mercury__string__f_43_43_2_f_0((MR_String) "format_signed_int_component", check_hlds__simplify__format_call__V_150_150);
                }
#line 7630 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeInfo_295_295 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 1565 "format_call.m"
                {
#line 1565 "format_call.m"
                  check_hlds__simplify__format_call__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1565 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_151_151, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_252));
#line 1565 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1565 "format_call.m"
                }
#line 1565 "format_call.m"
                {
#line 1565 "format_call.m"
                  check_hlds__simplify__format_call__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1565 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_156_156, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1565 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1565 "format_call.m"
                }
#line 1565 "format_call.m"
                {
#line 1565 "format_call.m"
                  check_hlds__simplify__format_call__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1565 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_155_155, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_251));
#line 1565 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_155_155, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_156_156));
#line 1565 "format_call.m"
                }
#line 1565 "format_call.m"
                {
#line 1565 "format_call.m"
                  check_hlds__simplify__format_call__V_154_154 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_295_295, check_hlds__simplify__format_call__PrecVars_260, check_hlds__simplify__format_call__V_155_155);
                }
#line 1565 "format_call.m"
                {
#line 1565 "format_call.m"
                  check_hlds__simplify__format_call__V_153_153 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_295_295, check_hlds__simplify__format_call__WidthVars_255, check_hlds__simplify__format_call__V_154_154);
                }
#line 1565 "format_call.m"
                {
#line 1565 "format_call.m"
                  check_hlds__simplify__format_call__V_146_146 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_295_295, check_hlds__simplify__format_call__V_151_151, check_hlds__simplify__format_call__V_153_153);
                }
#line 1567 "format_call.m"
                {
#line 1567 "format_call.m"
                  check_hlds__simplify__format_call__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1567 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_159_159, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1567 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
#line 1567 "format_call.m"
                }
#line 1567 "format_call.m"
                {
#line 1567 "format_call.m"
                  check_hlds__simplify__format_call__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1567 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_158_158, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_159_159));
#line 1567 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1567 "format_call.m"
                }
#line 1566 "format_call.m"
                {
#line 1566 "format_call.m"
                  check_hlds__simplify__format_call__V_148_148 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_158_158);
                }
#line 1562 "format_call.m"
                {
#line 1562 "format_call.m"
                  hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_140_140, check_hlds__simplify__format_call__V_141_141, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_146_146, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_148_148, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_257);
                }
#line 7707 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeCtorInfo_296_296 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1569 "format_call.m"
                {
#line 1569 "format_call.m"
                  check_hlds__simplify__format_call__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1569 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_166_166, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_257));
#line 1569 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_166_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1569 "format_call.m"
                }
#line 1569 "format_call.m"
                {
#line 1569 "format_call.m"
                  check_hlds__simplify__format_call__V_165_165 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_296_296, check_hlds__simplify__format_call__PrecGoals_261, check_hlds__simplify__format_call__V_166_166);
                }
#line 1569 "format_call.m"
                {
#line 1569 "format_call.m"
                  check_hlds__simplify__format_call__V_164_164 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_296_296, check_hlds__simplify__format_call__WidthGoals_256, check_hlds__simplify__format_call__V_165_165);
                }
#line 1569 "format_call.m"
                {
#line 1569 "format_call.m"
                  *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_296_296, check_hlds__simplify__format_call__FlagsGoals_253, check_hlds__simplify__format_call__V_164_164);
                }
#line 1553 "format_call.m"
              }
#line 1511 "format_call.m"
            else
#line 1572 "format_call.m"
              {
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeInfo_298_298;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_299_299;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__Base_37;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__BaseVar_38;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__BaseGoal_39;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_91_91;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_92_92;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_93_93;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_94_94;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_95_95;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_96_96;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_97_97;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_98_98;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_101_101;
#line 1572 "format_call.m"
                MR_String check_hlds__simplify__format_call__V_102_102;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_107_107;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_109_109;
#line 1572 "format_call.m"
                MR_String check_hlds__simplify__format_call__V_111_111;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_112_112;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_114_114;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_115_115;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_116_116;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_117_117;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_118_118;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_120_120;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_121_121;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_126_126;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_127_127;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_128_128;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_129_129;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__Flags_262;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__MaybeWidth_263;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__ValueVar_264;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__FlagsVar_265;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__FlagsGoals_266;
#line 1572 "format_call.m"
                MR_String check_hlds__simplify__format_call__WidthSuffix_267;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__WidthVars_268;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__WidthGoals_269;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__CallGoal_270;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__MaybePrec_271;
#line 1572 "format_call.m"
                MR_String check_hlds__simplify__format_call__PrecSuffix_272;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PrecVars_273;
#line 1572 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PrecGoals_274;

#line 1571 "format_call.m"
                *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
#line 1571 "format_call.m"
                check_hlds__simplify__format_call__Flags_262 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
#line 1571 "format_call.m"
                check_hlds__simplify__format_call__MaybeWidth_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
#line 1571 "format_call.m"
                check_hlds__simplify__format_call__MaybePrec_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 4)));
#line 1571 "format_call.m"
                check_hlds__simplify__format_call__Base_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 5)));
#line 1571 "format_call.m"
                check_hlds__simplify__format_call__ValueVar_264 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 6)));
#line 1573 "format_call.m"
                {
#line 1573 "format_call.m"
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_264, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_43, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_44);
                }
#line 1574 "format_call.m"
                {
#line 1574 "format_call.m"
                  check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_45, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_91_91, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_47, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_92_92);
                }
#line 1576 "format_call.m"
                {
#line 1576 "format_call.m"
                  check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_262, &check_hlds__simplify__format_call__FlagsVar_265, &check_hlds__simplify__format_call__FlagsGoals_266, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_91_91, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_93_93, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_92_92, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_94_94);
                }
#line 1577 "format_call.m"
                {
#line 1577 "format_call.m"
                  check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_263, &check_hlds__simplify__format_call__WidthSuffix_267, &check_hlds__simplify__format_call__WidthVars_268, &check_hlds__simplify__format_call__WidthGoals_269, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_93_93, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_95_95, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_94_94, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_96_96);
                }
#line 1579 "format_call.m"
                {
#line 1579 "format_call.m"
                  check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(check_hlds__simplify__format_call__MaybePrec_271, &check_hlds__simplify__format_call__PrecSuffix_272, &check_hlds__simplify__format_call__PrecVars_273, &check_hlds__simplify__format_call__PrecGoals_274, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_95_95, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_97_97, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_96_96, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_98_98);
                }
#line 1581 "format_call.m"
                {
#line 1581 "format_call.m"
                  check_hlds__simplify__format_call__build_int_base_arg_7_p_0(check_hlds__simplify__format_call__Base_37, &check_hlds__simplify__format_call__BaseVar_38, &check_hlds__simplify__format_call__BaseGoal_39, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_97_97, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_46, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_98_98, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_48);
                }
#line 1582 "format_call.m"
                {
#line 1582 "format_call.m"
                  check_hlds__simplify__format_call__V_101_101 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
                }
#line 1583 "format_call.m"
                {
#line 1583 "format_call.m"
                  check_hlds__simplify__format_call__V_111_111 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__WidthSuffix_267, check_hlds__simplify__format_call__PrecSuffix_272);
                }
#line 1583 "format_call.m"
                {
#line 1583 "format_call.m"
                  check_hlds__simplify__format_call__V_102_102 = mercury__string__f_43_43_2_f_0((MR_String) "format_unsigned_int_component", check_hlds__simplify__format_call__V_111_111);
                }
#line 7884 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeInfo_298_298 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 1585 "format_call.m"
                {
#line 1585 "format_call.m"
                  check_hlds__simplify__format_call__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_112_112, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_265));
#line 1585 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1585 "format_call.m"
                }
#line 1586 "format_call.m"
                {
#line 1586 "format_call.m"
                  check_hlds__simplify__format_call__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1586 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_118_118, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1586 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1586 "format_call.m"
                }
#line 1586 "format_call.m"
                {
#line 1586 "format_call.m"
                  check_hlds__simplify__format_call__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1586 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_117_117, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_264));
#line 1586 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_117_117, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_118_118));
#line 1586 "format_call.m"
                }
#line 1586 "format_call.m"
                {
#line 1586 "format_call.m"
                  check_hlds__simplify__format_call__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1586 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 0) = ((MR_Box) (check_hlds__simplify__format_call__BaseVar_38));
#line 1586 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_117_117));
#line 1586 "format_call.m"
                }
#line 1585 "format_call.m"
                {
#line 1585 "format_call.m"
                  check_hlds__simplify__format_call__V_115_115 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_298_298, check_hlds__simplify__format_call__PrecVars_273, check_hlds__simplify__format_call__V_116_116);
                }
#line 1585 "format_call.m"
                {
#line 1585 "format_call.m"
                  check_hlds__simplify__format_call__V_114_114 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_298_298, check_hlds__simplify__format_call__WidthVars_268, check_hlds__simplify__format_call__V_115_115);
                }
#line 1585 "format_call.m"
                {
#line 1585 "format_call.m"
                  check_hlds__simplify__format_call__V_107_107 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_298_298, check_hlds__simplify__format_call__V_112_112, check_hlds__simplify__format_call__V_114_114);
                }
#line 1588 "format_call.m"
                {
#line 1588 "format_call.m"
                  check_hlds__simplify__format_call__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1588 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_121_121, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
#line 1588 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
#line 1588 "format_call.m"
                }
#line 1588 "format_call.m"
                {
#line 1588 "format_call.m"
                  check_hlds__simplify__format_call__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1588 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_120_120, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_121_121));
#line 1588 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1588 "format_call.m"
                }
#line 1587 "format_call.m"
                {
#line 1587 "format_call.m"
                  check_hlds__simplify__format_call__V_109_109 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_120_120);
                }
#line 1582 "format_call.m"
                {
#line 1582 "format_call.m"
                  hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_101_101, check_hlds__simplify__format_call__V_102_102, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_107_107, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_109_109, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_270);
                }
#line 7971 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeCtorInfo_299_299 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1590 "format_call.m"
                {
#line 1590 "format_call.m"
                  check_hlds__simplify__format_call__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1590 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_129_129, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_270));
#line 1590 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1590 "format_call.m"
                }
#line 1590 "format_call.m"
                {
#line 1590 "format_call.m"
                  check_hlds__simplify__format_call__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1590 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_128_128, 0) = ((MR_Box) (check_hlds__simplify__format_call__BaseGoal_39));
#line 1590 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_128_128, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_129_129));
#line 1590 "format_call.m"
                }
#line 1590 "format_call.m"
                {
#line 1590 "format_call.m"
                  check_hlds__simplify__format_call__V_127_127 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_299_299, check_hlds__simplify__format_call__PrecGoals_274, check_hlds__simplify__format_call__V_128_128);
                }
#line 1590 "format_call.m"
                {
#line 1590 "format_call.m"
                  check_hlds__simplify__format_call__V_126_126 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_299_299, check_hlds__simplify__format_call__WidthGoals_269, check_hlds__simplify__format_call__V_127_127);
                }
#line 1590 "format_call.m"
                {
#line 1590 "format_call.m"
                  *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_299_299, check_hlds__simplify__format_call__FlagsGoals_266, check_hlds__simplify__format_call__V_126_126);
                }
#line 1572 "format_call.m"
              }
#line 1511 "format_call.m"
  }
#line 1503 "format_call.m"
}

#line 1477 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__create_stream_string_writer_format_replacement_12_p_0(
#line 1477 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_13,
#line 1477 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Specs_14,
#line 1477 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Context_15,
#line 1477 "format_call.m"
  MR_Word check_hlds__simplify__format_call__TC_InfoVarForStream_16,
#line 1477 "format_call.m"
  MR_Word check_hlds__simplify__format_call__StreamVar_17,
#line 1477 "format_call.m"
  MR_Word check_hlds__simplify__format_call__StateInVar_18,
#line 1477 "format_call.m"
  MR_Word check_hlds__simplify__format_call__StateOutVar_19,
#line 1477 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ReplacementGoal_20,
#line 1477 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_32,
#line 1477 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_33,
#line 1477 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_34,
#line 1477 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_35)
#line 1477 "format_call.m"
{
#line 1484 "format_call.m"
  {
#line 1484 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ResultVar_23;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__StringFormatGoals_24;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ValueVars_25;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ArgVars_26;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__InstMapDelta_27;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__CallGoal_28;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Goals_29;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__NonLocals_30;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalInfo_31;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_39_39;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_40_40;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_41_41;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_42_42;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_44_44;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_51_51;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_53_53;
#line 1484 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_54_54;

#line 1485 "format_call.m"
    {
#line 1485 "format_call.m"
      check_hlds__simplify__format_call__replace_string_format_11_p_0(check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Specs_14, check_hlds__simplify__format_call__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ResultVar_23, &check_hlds__simplify__format_call__StringFormatGoals_24, &check_hlds__simplify__format_call__ValueVars_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_35);
    }
#line 1488 "format_call.m"
    {
#line 1488 "format_call.m"
      check_hlds__simplify__format_call__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__format_call__StateOutVar_19));
#line 1488 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1488 "format_call.m"
    }
#line 1488 "format_call.m"
    {
#line 1488 "format_call.m"
      check_hlds__simplify__format_call__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_41_41, 0) = ((MR_Box) (check_hlds__simplify__format_call__StateInVar_18));
#line 1488 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_41_41, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_42_42));
#line 1488 "format_call.m"
    }
#line 1487 "format_call.m"
    {
#line 1487 "format_call.m"
      check_hlds__simplify__format_call__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_23));
#line 1487 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_41_41));
#line 1487 "format_call.m"
    }
#line 1487 "format_call.m"
    {
#line 1487 "format_call.m"
      check_hlds__simplify__format_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_17));
#line 1487 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_40_40));
#line 1487 "format_call.m"
    }
#line 1487 "format_call.m"
    {
#line 1487 "format_call.m"
      check_hlds__simplify__format_call__ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__TC_InfoVarForStream_16));
#line 1487 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_39_39));
#line 1487 "format_call.m"
    }
#line 1489 "format_call.m"
    {
#line 1489 "format_call.m"
      check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(check_hlds__simplify__format_call__StateInVar_18, check_hlds__simplify__format_call__StateOutVar_19, &check_hlds__simplify__format_call__InstMapDelta_27);
    }
#line 1490 "format_call.m"
    {
#line 1490 "format_call.m"
      check_hlds__simplify__format_call__V_44_44 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
    }
#line 1490 "format_call.m"
    {
#line 1490 "format_call.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_44_44, (MR_String) "put", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__ArgVars_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__InstMapDelta_27, check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Context_15, &check_hlds__simplify__format_call__CallGoal_28);
    }
#line 1493 "format_call.m"
    {
#line 1493 "format_call.m"
      check_hlds__simplify__format_call__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_51_51, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_28));
#line 1493 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1493 "format_call.m"
    }
#line 1493 "format_call.m"
    {
#line 1493 "format_call.m"
      check_hlds__simplify__format_call__Goals_29 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__StringFormatGoals_24, check_hlds__simplify__format_call__V_51_51);
    }
#line 1495 "format_call.m"
    {
#line 1495 "format_call.m"
      check_hlds__simplify__format_call__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_54_54, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_17));
#line 1495 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_54_54, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_41_41));
#line 1495 "format_call.m"
    }
#line 1495 "format_call.m"
    {
#line 1495 "format_call.m"
      check_hlds__simplify__format_call__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_53_53, 0) = ((MR_Box) (check_hlds__simplify__format_call__TC_InfoVarForStream_16));
#line 1495 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_53_53, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_54_54));
#line 1495 "format_call.m"
    }
#line 1495 "format_call.m"
    {
#line 1495 "format_call.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__V_53_53, check_hlds__simplify__format_call__ValueVars_25, &check_hlds__simplify__format_call__NonLocals_30);
    }
#line 1497 "format_call.m"
    {
#line 1497 "format_call.m"
      hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__simplify__format_call__NonLocals_30, check_hlds__simplify__format_call__InstMapDelta_27, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Context_15, &check_hlds__simplify__format_call__GoalInfo_31);
    }
#line 1499 "format_call.m"
    {
#line 1499 "format_call.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__format_call__Goals_29, check_hlds__simplify__format_call__GoalInfo_31, check_hlds__simplify__format_call__ReplacementGoal_20);
#line 1499 "format_call.m"
      return;
    }
#line 1484 "format_call.m"
  }
#line 1477 "format_call.m"
}

#line 1436 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__replace_one_io_format_12_p_0(
#line 1436 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_13,
#line 1436 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Spec_14,
#line 1436 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_15,
#line 1436 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOInVar_16,
#line 1436 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOOutVar_17,
#line 1436 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_18,
#line 1436 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29,
#line 1436 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30,
#line 1436 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31,
#line 1436 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32,
#line 1436 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33,
#line 1436 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34)
#line 1436 "format_call.m"
{
#line 1442 "format_call.m"
  {
#line 1442 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SpecVar_22;
#line 1442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SpecGoals_23;
#line 1442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SpecContext_24;
#line 1442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ArgVars_26;
#line 1442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__InstMapDelta_27;
#line 1442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__CallGoal_28;
#line 1442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_46_46;
#line 1442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_53_53;

#line 1443 "format_call.m"
    {
#line 1443 "format_call.m"
      check_hlds__simplify__format_call__represent_spec_12_p_0(check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Spec_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__SpecVar_22, &check_hlds__simplify__format_call__SpecGoals_23, &check_hlds__simplify__format_call__SpecContext_24, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34);
    }
#line 1448 "format_call.m"
    if ((check_hlds__simplify__format_call__MaybeStreamVar_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1449 "format_call.m"
      {
#line 1449 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_39_39;
#line 1449 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_40_40;

#line 1450 "format_call.m"
        {
#line 1450 "format_call.m"
          check_hlds__simplify__format_call__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_17));
#line 1450 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1450 "format_call.m"
        }
#line 1450 "format_call.m"
        {
#line 1450 "format_call.m"
          check_hlds__simplify__format_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_16));
#line 1450 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_40_40));
#line 1450 "format_call.m"
        }
#line 1450 "format_call.m"
        {
#line 1450 "format_call.m"
          check_hlds__simplify__format_call__ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__SpecVar_22));
#line 1450 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_39_39));
#line 1450 "format_call.m"
        }
#line 1449 "format_call.m"
      }
#line 1448 "format_call.m"
    else
#line 1446 "format_call.m"
      {
#line 1446 "format_call.m"
        MR_Word check_hlds__simplify__format_call__StreamVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeStreamVar_15, (MR_Integer) 0)));
#line 1446 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_42_42;
#line 1446 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_43_43;
#line 1446 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_44_44;

#line 1447 "format_call.m"
        {
#line 1447 "format_call.m"
          check_hlds__simplify__format_call__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_44_44, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_17));
#line 1447 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1447 "format_call.m"
        }
#line 1447 "format_call.m"
        {
#line 1447 "format_call.m"
          check_hlds__simplify__format_call__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_16));
#line 1447 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_44_44));
#line 1447 "format_call.m"
        }
#line 1447 "format_call.m"
        {
#line 1447 "format_call.m"
          check_hlds__simplify__format_call__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__format_call__SpecVar_22));
#line 1447 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_43_43));
#line 1447 "format_call.m"
        }
#line 1447 "format_call.m"
        {
#line 1447 "format_call.m"
          check_hlds__simplify__format_call__ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_25));
#line 1447 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_42_42));
#line 1447 "format_call.m"
        }
#line 1446 "format_call.m"
      }
#line 1452 "format_call.m"
    {
#line 1452 "format_call.m"
      check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(check_hlds__simplify__format_call__IOInVar_16, check_hlds__simplify__format_call__IOOutVar_17, &check_hlds__simplify__format_call__InstMapDelta_27);
    }
#line 1453 "format_call.m"
    {
#line 1453 "format_call.m"
      check_hlds__simplify__format_call__V_46_46 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
#line 1453 "format_call.m"
    {
#line 1453 "format_call.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_46_46, (MR_String) "write_string", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__ArgVars_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__InstMapDelta_27, check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__SpecContext_24, &check_hlds__simplify__format_call__CallGoal_28);
    }
#line 1456 "format_call.m"
    {
#line 1456 "format_call.m"
      check_hlds__simplify__format_call__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_53_53, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_28));
#line 1456 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1456 "format_call.m"
    }
#line 1456 "format_call.m"
    {
#line 1456 "format_call.m"
      *check_hlds__simplify__format_call__Goals_18 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__SpecGoals_23, check_hlds__simplify__format_call__V_53_53);
    }
#line 1442 "format_call.m"
  }
#line 1436 "format_call.m"
}

#line 1408 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__replace_io_format_nonempty_13_p_0(
#line 1408 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 1408 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadSpec_15,
#line 1408 "format_call.m"
  MR_Word check_hlds__simplify__format_call__TailSpecs_16,
#line 1408 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_17,
#line 1408 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOInVar_18,
#line 1408 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOOutVar_19,
#line 1408 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_20,
#line 1408 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29,
#line 1408 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30,
#line 1408 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31,
#line 1408 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32,
#line 1408 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33,
#line 1408 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34)
#line 1408 "format_call.m"
{
#line 1418 "format_call.m"
  {
#line 1418 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1418 "format_call.m"
    if ((check_hlds__simplify__format_call__TailSpecs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "format_call.m"
      {
#line 1419 "format_call.m"
        check_hlds__simplify__format_call__replace_one_io_format_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__HeadSpec_15, check_hlds__simplify__format_call__MaybeStreamVar_17, check_hlds__simplify__format_call__IOInVar_18, check_hlds__simplify__format_call__IOOutVar_19, check_hlds__simplify__format_call__Goals_20, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34);
#line 1419 "format_call.m"
        return;
      }
#line 1418 "format_call.m"
    else
#line 1423 "format_call.m"
      {
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__FirstTailSpec_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailSpecs_16, (MR_Integer) 0)));
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__LaterTailSpecs_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailSpecs_16, (MR_Integer) 1)));
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__IOMidVar_26;
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__HeadSpecGoals_27;
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TailSpecsGoals_28;
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35;
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_36_36;
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37_37;
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38;
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_39_39;
#line 1423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_40_40;

#line 1424 "format_call.m"
        {
#line 1424 "format_call.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__simplify__format_call__IOMidVar_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35);
        }
#line 1425 "format_call.m"
        {
#line 1425 "format_call.m"
          check_hlds__simplify__format_call__V_36_36 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 1425 "format_call.m"
        {
#line 1425 "format_call.m"
          parse_tree__prog_data__add_var_type_4_p_0(check_hlds__simplify__format_call__IOMidVar_26, check_hlds__simplify__format_call__V_36_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37_37);
        }
#line 1426 "format_call.m"
        {
#line 1426 "format_call.m"
          check_hlds__simplify__format_call__replace_one_io_format_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__HeadSpec_15, check_hlds__simplify__format_call__MaybeStreamVar_17, check_hlds__simplify__format_call__IOInVar_18, check_hlds__simplify__format_call__IOMidVar_26, &check_hlds__simplify__format_call__HeadSpecGoals_27, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29, &check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37_37, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_40_40);
        }
#line 1429 "format_call.m"
        {
#line 1429 "format_call.m"
          check_hlds__simplify__format_call__replace_io_format_nonempty_13_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__FirstTailSpec_24, check_hlds__simplify__format_call__LaterTailSpecs_25, check_hlds__simplify__format_call__MaybeStreamVar_17, check_hlds__simplify__format_call__IOMidVar_26, check_hlds__simplify__format_call__IOOutVar_19, &check_hlds__simplify__format_call__TailSpecsGoals_28, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_40_40, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34);
        }
#line 1433 "format_call.m"
        {
#line 1433 "format_call.m"
          *check_hlds__simplify__format_call__Goals_20 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__HeadSpecGoals_27, check_hlds__simplify__format_call__TailSpecsGoals_28);
        }
#line 1423 "format_call.m"
      }
#line 1418 "format_call.m"
  }
#line 1408 "format_call.m"
}

#line 1378 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__replace_io_format_11_p_0(
#line 1378 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_12,
#line 1378 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Specs_13,
#line 1378 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_14,
#line 1378 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOInVar_15,
#line 1378 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOOutVar_16,
#line 1378 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_17,
#line 1378 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33,
#line 1378 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34,
#line 1378 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35,
#line 1378 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36,
#line 1378 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37)
#line 1378 "format_call.m"
{
#line 1384 "format_call.m"
  {
#line 1384 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1384 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1384 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38;

#line 1385 "format_call.m"
    {
#line 1385 "format_call.m"
      parse_tree__set_of_var__init_1_p_0(check_hlds__simplify__format_call__TypeCtorInfo_59_59, &check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38);
    }
#line 1401 "format_call.m"
    if ((check_hlds__simplify__format_call__Specs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1387 "format_call.m"
      {
#line 1387 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Unification_21;
#line 1387 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalExpr_27;
#line 1387 "format_call.m"
        MR_Word check_hlds__simplify__format_call__InstMapDelta_28;
#line 1387 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalInfo_29;
#line 1387 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_30;
#line 1387 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_51_51;
#line 1387 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_52_52;
#line 1387 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_55_55;
#line 1387 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_56_56;

#line 1388 "format_call.m"
        {
#line 1388 "format_call.m"
          check_hlds__simplify__format_call__Unification_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "format_call.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_21, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_16));
#line 1388 "format_call.m"
          MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_21, 1) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_15));
#line 1388 "format_call.m"
        }
#line 1394 "format_call.m"
        {
#line 1394 "format_call.m"
          check_hlds__simplify__format_call__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1394 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_51_51, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_15));
#line 1394 "format_call.m"
        }
#line 1394 "format_call.m"
        {
#line 1394 "format_call.m"
          check_hlds__simplify__format_call__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_16));
#line 1394 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_51_51));
#line 1394 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 2) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[18]));
#line 1394 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 3) = ((MR_Box) (check_hlds__simplify__format_call__Unification_21));
#line 1394 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 4) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[19]));
#line 1394 "format_call.m"
        }
#line 1396 "format_call.m"
        {
#line 1396 "format_call.m"
          check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(check_hlds__simplify__format_call__IOInVar_15, check_hlds__simplify__format_call__IOOutVar_16, &check_hlds__simplify__format_call__InstMapDelta_28);
        }
#line 1397 "format_call.m"
        {
#line 1397 "format_call.m"
          check_hlds__simplify__format_call__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_56_56, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_16));
#line 1397 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1397 "format_call.m"
        }
#line 1397 "format_call.m"
        {
#line 1397 "format_call.m"
          check_hlds__simplify__format_call__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_55_55, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_15));
#line 1397 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_55_55, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_56_56));
#line 1397 "format_call.m"
        }
#line 1397 "format_call.m"
        {
#line 1397 "format_call.m"
          check_hlds__simplify__format_call__V_52_52 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_59_59, check_hlds__simplify__format_call__V_55_55);
        }
#line 1397 "format_call.m"
        {
#line 1397 "format_call.m"
          hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__format_call__V_52_52, check_hlds__simplify__format_call__InstMapDelta_28, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__format_call__GoalInfo_29);
        }
#line 1399 "format_call.m"
        {
#line 1399 "format_call.m"
          check_hlds__simplify__format_call__Goal_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1399 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_30, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_27));
#line 1399 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_30, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_29));
#line 1399 "format_call.m"
        }
#line 1400 "format_call.m"
        {
#line 1400 "format_call.m"
          MR_Word base;
#line 1400 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1400 "format_call.m"
          *check_hlds__simplify__format_call__Goals_17 = base;
#line 1400 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_30));
#line 1400 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1400 "format_call.m"
        }
#line 1400 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33 = check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38;
#line 1400 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34;
#line 1400 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36;
#line 1387 "format_call.m"
      }
#line 1401 "format_call.m"
    else
#line 1402 "format_call.m"
      {
#line 1402 "format_call.m"
        MR_Word check_hlds__simplify__format_call__HeadSpec_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Specs_13, (MR_Integer) 0)));
#line 1402 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TailSpecs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Specs_13, (MR_Integer) 1)));

#line 1403 "format_call.m"
        {
#line 1403 "format_call.m"
          check_hlds__simplify__format_call__replace_io_format_nonempty_13_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__HeadSpec_31, check_hlds__simplify__format_call__TailSpecs_32, check_hlds__simplify__format_call__MaybeStreamVar_14, check_hlds__simplify__format_call__IOInVar_15, check_hlds__simplify__format_call__IOOutVar_16, check_hlds__simplify__format_call__Goals_17, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37);
#line 1403 "format_call.m"
          return;
        }
#line 1402 "format_call.m"
      }
#line 1384 "format_call.m"
  }
#line 1378 "format_call.m"
}

#line 1361 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(
#line 1361 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_12,
#line 1361 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Specs_13,
#line 1361 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Context_14,
#line 1361 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_15,
#line 1361 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOInVar_16,
#line 1361 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOOutVar_17,
#line 1361 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ReplacementGoal_18,
#line 1361 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_26,
#line 1361 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_27,
#line 1361 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_28,
#line 1361 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_29)
#line 1361 "format_call.m"
{
#line 1368 "format_call.m"
  {
#line 1368 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1368 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Goals_21;
#line 1368 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ValueVars_22;
#line 1368 "format_call.m"
    MR_Word check_hlds__simplify__format_call__InstMapDelta_23;
#line 1368 "format_call.m"
    MR_Word check_hlds__simplify__format_call__NonLocals_24;
#line 1368 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalInfo_25;
#line 1368 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_32_32;
#line 1368 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_33_33;

#line 1369 "format_call.m"
    {
#line 1369 "format_call.m"
      check_hlds__simplify__format_call__replace_io_format_11_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__Specs_13, check_hlds__simplify__format_call__MaybeStreamVar_15, check_hlds__simplify__format_call__IOInVar_16, check_hlds__simplify__format_call__IOOutVar_17, &check_hlds__simplify__format_call__Goals_21, &check_hlds__simplify__format_call__ValueVars_22, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_28, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_29);
    }
#line 1372 "format_call.m"
    {
#line 1372 "format_call.m"
      check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(check_hlds__simplify__format_call__IOInVar_16, check_hlds__simplify__format_call__IOOutVar_17, &check_hlds__simplify__format_call__InstMapDelta_23);
    }
#line 1373 "format_call.m"
    {
#line 1373 "format_call.m"
      check_hlds__simplify__format_call__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_33_33, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_17));
#line 1373 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1373 "format_call.m"
    }
#line 1373 "format_call.m"
    {
#line 1373 "format_call.m"
      check_hlds__simplify__format_call__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_32_32, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_16));
#line 1373 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_32_32, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_33_33));
#line 1373 "format_call.m"
    }
#line 1373 "format_call.m"
    {
#line 1373 "format_call.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__V_32_32, check_hlds__simplify__format_call__ValueVars_22, &check_hlds__simplify__format_call__NonLocals_24);
    }
#line 1374 "format_call.m"
    {
#line 1374 "format_call.m"
      hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__simplify__format_call__NonLocals_24, check_hlds__simplify__format_call__InstMapDelta_23, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Context_14, &check_hlds__simplify__format_call__GoalInfo_25);
    }
#line 1376 "format_call.m"
    {
#line 1376 "format_call.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__format_call__Goals_21, check_hlds__simplify__format_call__GoalInfo_25, check_hlds__simplify__format_call__ReplacementGoal_18);
#line 1376 "format_call.m"
      return;
    }
#line 1368 "format_call.m"
  }
#line 1361 "format_call.m"
}

#line 1297 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_nonempty_13_p_0(
#line 1297 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 1297 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadSpec_15,
#line 1297 "format_call.m"
  MR_Word check_hlds__simplify__format_call__TailSpecs_16,
#line 1297 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Context_17,
#line 1297 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_18,
#line 1297 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_19,
#line 1297 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_20,
#line 1297 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_32,
#line 1297 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33,
#line 1297 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34,
#line 1297 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35,
#line 1297 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36,
#line 1297 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37)
#line 1297 "format_call.m"
{
#line 1307 "format_call.m"
  {
#line 1307 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1307 "format_call.m"
    if ((check_hlds__simplify__format_call__TailSpecs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1308 "format_call.m"
      {
#line 1308 "format_call.m"
        MR_Word check_hlds__simplify__format_call___HeadSpecContext_24;

#line 1308 "format_call.m"
        {
#line 1308 "format_call.m"
          check_hlds__simplify__format_call__represent_spec_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__HeadSpec_15, check_hlds__simplify__format_call__MaybeResultVar_18, check_hlds__simplify__format_call__ResultVar_19, check_hlds__simplify__format_call__Goals_20, &check_hlds__simplify__format_call___HeadSpecContext_24, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_32, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37);
        }
#line 1308 "format_call.m"
      }
#line 1307 "format_call.m"
    else
#line 1311 "format_call.m"
      {
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_74_74;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__FirstTailSpec_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailSpecs_16, (MR_Integer) 0)));
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__LaterTailSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailSpecs_16, (MR_Integer) 1)));
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TailSpecsVar_27;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TailSpecsGoals_28;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__HeadSpecVar_29;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__HeadSpecGoals_30;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__AppendGoal_31;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_39_39;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_40_40;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_41_41;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_44_44;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_45_45;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_48_48;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_54_54;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_56_56;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_57_57;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_58_58;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_60_60;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_61_61;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_66_66;
#line 1311 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_67_67;
#line 1316 "format_call.m"
        MR_Word check_hlds__simplify__format_call___HeadSpecContext_72;

#line 1312 "format_call.m"
        {
#line 1312 "format_call.m"
          check_hlds__simplify__format_call__replace_string_format_nonempty_13_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__FirstTailSpec_25, check_hlds__simplify__format_call__LaterTailSpecs_26, check_hlds__simplify__format_call__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__TailSpecsVar_27, &check_hlds__simplify__format_call__TailSpecsGoals_28, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_32, &check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_40_40, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_41_41);
        }
#line 1316 "format_call.m"
        {
#line 1316 "format_call.m"
          check_hlds__simplify__format_call__represent_spec_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__HeadSpec_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__HeadSpecVar_29, &check_hlds__simplify__format_call__HeadSpecGoals_30, &check_hlds__simplify__format_call___HeadSpecContext_72, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_40_40, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_44_44, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_41_41, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_45_45);
        }
#line 1318 "format_call.m"
        {
#line 1318 "format_call.m"
          check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_18, check_hlds__simplify__format_call__ResultVar_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_44_44, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_45_45, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37);
        }
#line 1320 "format_call.m"
        {
#line 1320 "format_call.m"
          check_hlds__simplify__format_call__V_48_48 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
        }
#line 1322 "format_call.m"
        {
#line 1322 "format_call.m"
          check_hlds__simplify__format_call__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_58_58, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_19));
#line 1322 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "format_call.m"
        }
#line 1322 "format_call.m"
        {
#line 1322 "format_call.m"
          check_hlds__simplify__format_call__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_57_57, 0) = ((MR_Box) (check_hlds__simplify__format_call__TailSpecsVar_27));
#line 1322 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_57_57, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_58_58));
#line 1322 "format_call.m"
        }
#line 1322 "format_call.m"
        {
#line 1322 "format_call.m"
          check_hlds__simplify__format_call__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_54_54, 0) = ((MR_Box) (check_hlds__simplify__format_call__HeadSpecVar_29));
#line 1322 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_54_54, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_57_57));
#line 1322 "format_call.m"
        }
#line 1324 "format_call.m"
        {
#line 1324 "format_call.m"
          check_hlds__simplify__format_call__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1324 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_61_61, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_19));
#line 1324 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
#line 1324 "format_call.m"
        }
#line 1324 "format_call.m"
        {
#line 1324 "format_call.m"
          check_hlds__simplify__format_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_60_60, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_61_61));
#line 1324 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "format_call.m"
        }
#line 1323 "format_call.m"
        {
#line 1323 "format_call.m"
          check_hlds__simplify__format_call__V_56_56 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_60_60);
        }
#line 1320 "format_call.m"
        {
#line 1320 "format_call.m"
          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_48_48, (MR_String) "++", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_54_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_56_56, check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__Context_17, &check_hlds__simplify__format_call__AppendGoal_31);
        }
#line 8972 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1326 "format_call.m"
        {
#line 1326 "format_call.m"
          check_hlds__simplify__format_call__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_67_67, 0) = ((MR_Box) (check_hlds__simplify__format_call__AppendGoal_31));
#line 1326 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1326 "format_call.m"
        }
#line 1326 "format_call.m"
        {
#line 1326 "format_call.m"
          check_hlds__simplify__format_call__V_66_66 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_74_74, check_hlds__simplify__format_call__HeadSpecGoals_30, check_hlds__simplify__format_call__V_67_67);
        }
#line 1326 "format_call.m"
        {
#line 1326 "format_call.m"
          *check_hlds__simplify__format_call__Goals_20 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_74_74, check_hlds__simplify__format_call__TailSpecsGoals_28, check_hlds__simplify__format_call__V_66_66);
        }
#line 1311 "format_call.m"
      }
#line 1307 "format_call.m"
  }
#line 1297 "format_call.m"
}

#line 1276 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_11_p_0(
#line 1276 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_12,
#line 1276 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Specs_13,
#line 1276 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Context_14,
#line 1276 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_15,
#line 1276 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_16,
#line 1276 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_17,
#line 1276 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_24,
#line 1276 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25,
#line 1276 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26,
#line 1276 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27,
#line 1276 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28)
#line 1276 "format_call.m"
{
#line 1282 "format_call.m"
  {
#line 1282 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1282 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_29_29;

#line 1283 "format_call.m"
    {
#line 1283 "format_call.m"
      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_29_29);
    }
#line 1290 "format_call.m"
    if ((check_hlds__simplify__format_call__Specs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1285 "format_call.m"
      {
#line 1285 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_21;

#line 1286 "format_call.m"
        {
#line 1286 "format_call.m"
          check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28);
        }
#line 1288 "format_call.m"
        {
#line 1288 "format_call.m"
          hlds__make_goal__make_string_const_construction_3_p_0(*check_hlds__simplify__format_call__ResultVar_16, (MR_String) "", &check_hlds__simplify__format_call__Goal_21);
        }
#line 1289 "format_call.m"
        {
#line 1289 "format_call.m"
          MR_Word base;
#line 1289 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "format_call.m"
          *check_hlds__simplify__format_call__Goals_17 = base;
#line 1289 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_21));
#line 1289 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1289 "format_call.m"
        }
#line 1289 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_24 = check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_29_29;
#line 1285 "format_call.m"
      }
#line 1290 "format_call.m"
    else
#line 1291 "format_call.m"
      {
#line 1291 "format_call.m"
        MR_Word check_hlds__simplify__format_call__HeadSpec_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Specs_13, (MR_Integer) 0)));
#line 1291 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TailSpecs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Specs_13, (MR_Integer) 1)));

#line 1292 "format_call.m"
        {
#line 1292 "format_call.m"
          check_hlds__simplify__format_call__replace_string_format_nonempty_13_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__HeadSpec_22, check_hlds__simplify__format_call__TailSpecs_23, check_hlds__simplify__format_call__Context_14, check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__Goals_17, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_29_29, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28);
#line 1292 "format_call.m"
          return;
        }
#line 1291 "format_call.m"
      }
#line 1282 "format_call.m"
  }
#line 1276 "format_call.m"
}

#line 1251 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__create_string_format_replacement_9_p_0(
#line 1251 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_10,
#line 1251 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Specs_11,
#line 1251 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Context_12,
#line 1251 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ResultVar_13,
#line 1251 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ReplacementGoal_14,
#line 1251 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25,
#line 1251 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26,
#line 1251 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27,
#line 1251 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28)
#line 1251 "format_call.m"
{
#line 1257 "format_call.m"
  {
#line 1257 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1257 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ActualResultVar_17;
#line 1257 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Goals_18;
#line 1257 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ValueVars_19;
#line 1257 "format_call.m"
    MR_Word check_hlds__simplify__format_call__AllGoals_20;
#line 1257 "format_call.m"
    MR_Word check_hlds__simplify__format_call__NonLocals_22;
#line 1257 "format_call.m"
    MR_Word check_hlds__simplify__format_call__InstMapDelta_23;
#line 1257 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalInfo_24;
#line 1257 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_29_29;

#line 1258 "format_call.m"
    {
#line 1258 "format_call.m"
      check_hlds__simplify__format_call__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_29_29, 0) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_13));
#line 1258 "format_call.m"
    }
#line 1258 "format_call.m"
    {
#line 1258 "format_call.m"
      check_hlds__simplify__format_call__replace_string_format_11_p_0(check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__Specs_11, check_hlds__simplify__format_call__Context_12, check_hlds__simplify__format_call__V_29_29, &check_hlds__simplify__format_call__ActualResultVar_17, &check_hlds__simplify__format_call__Goals_18, &check_hlds__simplify__format_call__ValueVars_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28);
    }
#line 1260 "format_call.m"
    {
#line 1260 "format_call.m"
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], ((MR_Box) (check_hlds__simplify__format_call__ActualResultVar_17)), ((MR_Box) (check_hlds__simplify__format_call__ResultVar_13)));
    }
#line 1262 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 1261 "format_call.m"
      check_hlds__simplify__format_call__AllGoals_20 = check_hlds__simplify__format_call__Goals_18;
#line 1262 "format_call.m"
    else
#line 1267 "format_call.m"
      {
#line 1267 "format_call.m"
        MR_Word check_hlds__simplify__format_call__AssignGoal_21;
#line 1267 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_35_35;

#line 1266 "format_call.m"
        {
#line 1266 "format_call.m"
          hlds__make_goal__make_simple_assign_5_p_0(check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__ActualResultVar_17, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_3[2]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__AssignGoal_21);
        }
#line 1268 "format_call.m"
        {
#line 1268 "format_call.m"
          check_hlds__simplify__format_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_35_35, 0) = ((MR_Box) (check_hlds__simplify__format_call__AssignGoal_21));
#line 1268 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1268 "format_call.m"
        }
#line 1268 "format_call.m"
        {
#line 1268 "format_call.m"
          check_hlds__simplify__format_call__AllGoals_20 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__Goals_18, check_hlds__simplify__format_call__V_35_35);
        }
#line 1267 "format_call.m"
      }
#line 1270 "format_call.m"
    {
#line 1270 "format_call.m"
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__ValueVars_19, &check_hlds__simplify__format_call__NonLocals_22);
    }
#line 1271 "format_call.m"
    {
#line 1271 "format_call.m"
      check_hlds__simplify__format_call__InstMapDelta_23 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__simplify__format_call__ResultVar_13);
    }
#line 1272 "format_call.m"
    {
#line 1272 "format_call.m"
      hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__simplify__format_call__NonLocals_22, check_hlds__simplify__format_call__InstMapDelta_23, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Context_12, &check_hlds__simplify__format_call__GoalInfo_24);
    }
#line 1274 "format_call.m"
    {
#line 1274 "format_call.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__format_call__AllGoals_20, check_hlds__simplify__format_call__GoalInfo_24, check_hlds__simplify__format_call__ReplacementGoal_14);
#line 1274 "format_call.m"
      return;
    }
#line 1257 "format_call.m"
  }
#line 1251 "format_call.m"
}

#line 1189 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__create_replacement_goal_11_p_0(
#line 1189 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_12,
#line 1189 "format_call.m"
  MR_Word check_hlds__simplify__format_call__GoalId_13,
#line 1189 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CallKind_14,
#line 1189 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Specs_15,
#line 1189 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ToDeleteVars_16,
#line 1189 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_31,
#line 1189 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_32,
#line 1189 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_33,
#line 1189 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_34,
#line 1189 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_35,
#line 1189 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_36)
#line 1189 "format_call.m"
{
#line 1195 "format_call.m"
  {
#line 1195 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1195 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ReplacementGoal_22;
#line 1195 "format_call.m"
    MR_Word check_hlds__simplify__format_call__FCOptGoalInfo_30;
#line 1195 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_43_43;

#line 1204 "format_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__CallKind_14)) == (MR_mktag((MR_Integer) 1))))
#line 1212 "format_call.m"
      {
#line 1212 "format_call.m"
        MR_Word check_hlds__simplify__format_call__IOInVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 1)));
#line 1212 "format_call.m"
        MR_Word check_hlds__simplify__format_call__IOOutVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 2)));
#line 1212 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Context_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 0)));

#line 1213 "format_call.m"
        {
#line 1213 "format_call.m"
          check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__Specs_15, check_hlds__simplify__format_call__Context_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__IOInVar_23, check_hlds__simplify__format_call__IOOutVar_24, &check_hlds__simplify__format_call__ReplacementGoal_22, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_36);
        }
#line 1212 "format_call.m"
      }
#line 1204 "format_call.m"
    else
#line 1204 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__CallKind_14)) == (MR_mktag((MR_Integer) 2))))
#line 1212 "format_call.m"
        {
#line 1212 "format_call.m"
          MR_Word check_hlds__simplify__format_call__StreamVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 1)));
#line 1212 "format_call.m"
          MR_Word check_hlds__simplify__format_call__IOInVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 2)));
#line 1212 "format_call.m"
          MR_Word check_hlds__simplify__format_call__IOOutVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 3)));
#line 1212 "format_call.m"
          MR_Word check_hlds__simplify__format_call__MaybeStreamVar_53;
#line 1212 "format_call.m"
          MR_Word check_hlds__simplify__format_call__Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 0)));

#line 1211 "format_call.m"
          {
#line 1211 "format_call.m"
            check_hlds__simplify__format_call__MaybeStreamVar_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeStreamVar_53, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_26));
#line 1211 "format_call.m"
          }
#line 1213 "format_call.m"
          {
#line 1213 "format_call.m"
            check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__Specs_15, check_hlds__simplify__format_call__Context_54, check_hlds__simplify__format_call__MaybeStreamVar_53, check_hlds__simplify__format_call__IOInVar_51, check_hlds__simplify__format_call__IOOutVar_52, &check_hlds__simplify__format_call__ReplacementGoal_22, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_36);
          }
#line 1212 "format_call.m"
        }
#line 1204 "format_call.m"
      else
#line 1204 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__CallKind_14)) == (MR_mktag((MR_Integer) 3))))
#line 1218 "format_call.m"
          {
#line 1218 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TC_InfoVarForStream_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 1)));
#line 1218 "format_call.m"
            MR_Word check_hlds__simplify__format_call__StateInVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 3)));
#line 1218 "format_call.m"
            MR_Word check_hlds__simplify__format_call__StateOutVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 4)));
#line 1218 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 0)));
#line 1218 "format_call.m"
            MR_Word check_hlds__simplify__format_call__StreamVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 2)));

#line 1219 "format_call.m"
            {
#line 1219 "format_call.m"
              check_hlds__simplify__format_call__create_stream_string_writer_format_replacement_12_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__Specs_15, check_hlds__simplify__format_call__Context_46, check_hlds__simplify__format_call__TC_InfoVarForStream_27, check_hlds__simplify__format_call__StreamVar_47, check_hlds__simplify__format_call__StateInVar_28, check_hlds__simplify__format_call__StateOutVar_29, &check_hlds__simplify__format_call__ReplacementGoal_22, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_36);
            }
#line 1218 "format_call.m"
          }
#line 1204 "format_call.m"
        else
#line 1201 "format_call.m"
          {
#line 1201 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 0)));
#line 1201 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ResultVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__CallKind_14, (MR_Integer) 1)));

#line 1202 "format_call.m"
            {
#line 1202 "format_call.m"
              check_hlds__simplify__format_call__create_string_format_replacement_9_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__Specs_15, check_hlds__simplify__format_call__Context_20, check_hlds__simplify__format_call__ResultVar_21, &check_hlds__simplify__format_call__ReplacementGoal_22, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_36);
            }
#line 1201 "format_call.m"
          }
#line 1224 "format_call.m"
    {
#line 1224 "format_call.m"
      check_hlds__simplify__format_call__V_43_43 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ToDeleteVars_16);
    }
#line 1223 "format_call.m"
    {
#line 1223 "format_call.m"
      check_hlds__simplify__format_call__FCOptGoalInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_30, 0) = ((MR_Box) (check_hlds__simplify__format_call__ReplacementGoal_22));
#line 1223 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_30, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_43_43));
#line 1223 "format_call.m"
    }
#line 1225 "format_call.m"
    {
#line 1225 "format_call.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__simplify__format_call__GoalId_13)), ((MR_Box) (check_hlds__simplify__format_call__FCOptGoalInfo_30)), check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_31, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_32);
#line 1225 "format_call.m"
      return;
    }
#line 1195 "format_call.m"
  }
#line 1189 "format_call.m"
}

#line 1166 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_switch_10_p_0(
#line 1166 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1166 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
#line 1166 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1166 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1166 "format_call.m"
  MR_Word check_hlds__simplify__format_call__NeededVars0_5,
#line 1166 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1166 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1166 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ToDeleteVars0_8,
#line 1166 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1166 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10)
#line 1166 "format_call.m"
{
#line 1172 "format_call.m"
  {
#line 1172 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1172 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1172 "format_call.m"
      {
#line 1172 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1173 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9;
#line 1173 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6;
#line 1172 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3;
#line 1172 "format_call.m"
      }
#line 1172 "format_call.m"
    else
#line 1175 "format_call.m"
      {
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Case0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Case_24;
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Cases_25;
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__FirstConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case0_22, (MR_Integer) 0)));
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__LaterConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case0_22, (MR_Integer) 1)));
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case0_22, (MR_Integer) 2)));
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_34;
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__NeededVars_35;
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ToDeleteVars_36;
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_43_43;
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44;
#line 1175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45;

#line 1179 "format_call.m"
        {
#line 1179 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Goal0_33, &check_hlds__simplify__format_call__Goal_34, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_43_43, check_hlds__simplify__format_call__NeededVars0_5, &check_hlds__simplify__format_call__NeededVars_35, check_hlds__simplify__format_call__ToDeleteVars0_8, &check_hlds__simplify__format_call__ToDeleteVars_36);
        }
#line 1181 "format_call.m"
        {
#line 1181 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44, 0) = ((MR_Box) (check_hlds__simplify__format_call__NeededVars_35));
#line 1181 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6));
#line 1181 "format_call.m"
        }
#line 1182 "format_call.m"
        {
#line 1182 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVars_36));
#line 1182 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9));
#line 1182 "format_call.m"
        }
#line 1183 "format_call.m"
        {
#line 1183 "format_call.m"
          check_hlds__simplify__format_call__Case_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case_24, 0) = ((MR_Box) (check_hlds__simplify__format_call__FirstConsId_31));
#line 1183 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case_24, 1) = ((MR_Box) (check_hlds__simplify__format_call__LaterConsIds_32));
#line 1183 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case_24, 2) = ((MR_Box) (check_hlds__simplify__format_call__Goal_34));
#line 1183 "format_call.m"
        }
#line 1184 "format_call.m"
        {
#line 1184 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_switch_10_p_0(check_hlds__simplify__format_call__Cases0_23, &check_hlds__simplify__format_call__Cases_25, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_43_43, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__simplify__format_call__NeededVars0_5, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7, check_hlds__simplify__format_call__ToDeleteVars0_8, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);
        }
#line 1174 "format_call.m"
        {
#line 1174 "format_call.m"
          MR_Word base;
#line 1174 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__2_2 = base;
#line 1174 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Case_24));
#line 1174 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Cases_25));
#line 1174 "format_call.m"
        }
#line 1175 "format_call.m"
      }
#line 1172 "format_call.m"
  }
#line 1166 "format_call.m"
}

#line 1146 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_disj_10_p_0(
#line 1146 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1146 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
#line 1146 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1146 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1146 "format_call.m"
  MR_Word check_hlds__simplify__format_call__NeededVars0_5,
#line 1146 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1146 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1146 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ToDeleteVars0_8,
#line 1146 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1146 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10)
#line 1146 "format_call.m"
{
#line 1153 "format_call.m"
  {
#line 1153 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1153 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1153 "format_call.m"
      {
#line 1153 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1154 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9;
#line 1154 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6;
#line 1153 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3;
#line 1153 "format_call.m"
      }
#line 1153 "format_call.m"
    else
#line 1156 "format_call.m"
      {
#line 1156 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1156 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1156 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_24;
#line 1156 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals_25;
#line 1156 "format_call.m"
        MR_Word check_hlds__simplify__format_call__NeededVars_31;
#line 1156 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ToDeleteVars_32;
#line 1156 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39_39;
#line 1156 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40;
#line 1156 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41;

#line 1159 "format_call.m"
        {
#line 1159 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Goal0_22, &check_hlds__simplify__format_call__Goal_24, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39_39, check_hlds__simplify__format_call__NeededVars0_5, &check_hlds__simplify__format_call__NeededVars_31, check_hlds__simplify__format_call__ToDeleteVars0_8, &check_hlds__simplify__format_call__ToDeleteVars_32);
        }
#line 1161 "format_call.m"
        {
#line 1161 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__NeededVars_31));
#line 1161 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6));
#line 1161 "format_call.m"
        }
#line 1162 "format_call.m"
        {
#line 1162 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVars_32));
#line 1162 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9));
#line 1162 "format_call.m"
        }
#line 1163 "format_call.m"
        {
#line 1163 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_disj_10_p_0(check_hlds__simplify__format_call__Goals0_23, &check_hlds__simplify__format_call__Goals_25, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__simplify__format_call__NeededVars0_5, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7, check_hlds__simplify__format_call__ToDeleteVars0_8, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);
        }
#line 1155 "format_call.m"
        {
#line 1155 "format_call.m"
          MR_Word base;
#line 1155 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__2_2 = base;
#line 1155 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_24));
#line 1155 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Goals_25));
#line 1155 "format_call.m"
        }
#line 1156 "format_call.m"
      }
#line 1153 "format_call.m"
  }
#line 1146 "format_call.m"
}

#line 1130 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_conj_8_p_0(
#line 1130 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1130 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
#line 1130 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1130 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1130 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5,
#line 1130 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6,
#line 1130 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7,
#line 1130 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8)
#line 1130 "format_call.m"
{
#line 1136 "format_call.m"
  {
#line 1136 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1136 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "format_call.m"
      {
#line 1136 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1137 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7;
#line 1137 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5;
#line 1136 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3;
#line 1136 "format_call.m"
      }
#line 1136 "format_call.m"
    else
#line 1139 "format_call.m"
      {
#line 1139 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1139 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1139 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_20;
#line 1139 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals_21;
#line 1139 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_31_31;
#line 1139 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_32_32;
#line 1139 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_33_33;

#line 1141 "format_call.m"
        {
#line 1141 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_conj_8_p_0(check_hlds__simplify__format_call__Goals0_19, &check_hlds__simplify__format_call__Goals_21, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_31_31, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5, &check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_32_32, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_33_33);
        }
#line 1143 "format_call.m"
        {
#line 1143 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Goal0_18, &check_hlds__simplify__format_call__Goal_20, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_31_31, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_32_32, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_33_33, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8);
        }
#line 1138 "format_call.m"
        {
#line 1138 "format_call.m"
          MR_Word base;
#line 1138 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__2_2 = base;
#line 1138 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_20));
#line 1138 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Goals_21));
#line 1138 "format_call.m"
        }
#line 1139 "format_call.m"
      }
#line 1136 "format_call.m"
  }
#line 1130 "format_call.m"
}

#line 968 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(
#line 968 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Goal0_9,
#line 968 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goal_10,
#line 968 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97,
#line 968 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98,
#line 968 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99,
#line 968 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100,
#line 968 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101,
#line 968 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102)
#line 968 "format_call.m"
{
#line 974 "format_call.m"
  while (MR_TRUE)
#line 974 "format_call.m"
    {
#line 974 "format_call.m"
      /* tailcall optimized into a loop */
#line 974 "format_call.m"
      {
#line 974 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;
#line 974 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal0_9, (MR_Integer) 0)));
#line 974 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal0_9, (MR_Integer) 1)));

#line 990 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 0))))
#line 1070 "format_call.m"
          {
#line 1070 "format_call.m"
            MR_Word check_hlds__simplify__format_call__SubGoal0_76 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14), (MR_Integer) 0);
#line 1070 "format_call.m"
            MR_Word check_hlds__simplify__format_call__SubGoal_77;
#line 1070 "format_call.m"
            MR_Word check_hlds__simplify__format_call__GoalExpr_165;

#line 1073 "format_call.m"
            {
#line 1073 "format_call.m"
              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__SubGoal0_76, &check_hlds__simplify__format_call__SubGoal_77, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
            }
#line 1075 "format_call.m"
            check_hlds__simplify__format_call__GoalExpr_165 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__format_call__SubGoal_77);
#line 1076 "format_call.m"
            {
#line 1076 "format_call.m"
              MR_Word base;
#line 1076 "format_call.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "format_call.m"
              *check_hlds__simplify__format_call__Goal_10 = base;
#line 1076 "format_call.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_165));
#line 1076 "format_call.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1076 "format_call.m"
            }
#line 1070 "format_call.m"
          }
#line 990 "format_call.m"
        else
#line 990 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 2))))
#line 977 "format_call.m"
            {
#line 977 "format_call.m"
              MR_Word check_hlds__simplify__format_call__GoalId_22;
#line 983 "format_call.m"
              MR_Word check_hlds__simplify__format_call__OptGoalInfo_23;
#line 983 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_151_151;
#line 979 "format_call.m"
              MR_Box check_hlds__simplify__format_call__conv0_OptGoalInfo_23;

#line 978 "format_call.m"
              {
#line 978 "format_call.m"
                check_hlds__simplify__format_call__GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__simplify__format_call__GoalInfo_15);
              }
#line 979 "format_call.m"
              {
#line 979 "format_call.m"
                check_hlds__simplify__format_call__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__simplify__format_call__GoalId_22)), &check_hlds__simplify__format_call__conv0_OptGoalInfo_23, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_151_151);
              }
#line 979 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 979 "format_call.m"
                {
#line 979 "format_call.m"
                  check_hlds__simplify__format_call__OptGoalInfo_23 = ((MR_Word) check_hlds__simplify__format_call__conv0_OptGoalInfo_23);
#line 979 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 979 "format_call.m"
                }
#line 983 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 980 "format_call.m"
                {
#line 980 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__GoalToDeleteVars_25;

#line 980 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_151_151;
#line 980 "format_call.m"
                  *check_hlds__simplify__format_call__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__OptGoalInfo_23, (MR_Integer) 0)));
#line 980 "format_call.m"
                  check_hlds__simplify__format_call__GoalToDeleteVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__OptGoalInfo_23, (MR_Integer) 1)));
#line 982 "format_call.m"
                  {
#line 982 "format_call.m"
                    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__GoalToDeleteVars_25, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                  }
#line 982 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99;
#line 980 "format_call.m"
                }
#line 983 "format_call.m"
              else
#line 984 "format_call.m"
                {
#line 984 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_190_190;
#line 984 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__NonLocals_26;

#line 984 "format_call.m"
                  *check_hlds__simplify__format_call__Goal_10 = check_hlds__simplify__format_call__Goal0_9;
#line 985 "format_call.m"
                  {
#line 985 "format_call.m"
                    check_hlds__simplify__format_call__NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__format_call__GoalInfo_15);
                  }
#line 9866 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeCtorInfo_190_190 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 987 "format_call.m"
                  {
#line 987 "format_call.m"
                    parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_190_190, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__NonLocals_26, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100);
                  }
#line 988 "format_call.m"
                  {
#line 988 "format_call.m"
                    parse_tree__set_of_var__difference_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_190_190, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__NonLocals_26, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                  }
#line 988 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97;
#line 984 "format_call.m"
                }
#line 977 "format_call.m"
            }
#line 990 "format_call.m"
          else
#line 990 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 1))))
#line 1000 "format_call.m"
              {
#line 1000 "format_call.m"
                MR_Word check_hlds__simplify__format_call__Unification_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 3)));
#line 1000 "format_call.m"
                MR_Word check_hlds__simplify__format_call___LHS_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)));
#line 1000 "format_call.m"
                MR_Word check_hlds__simplify__format_call___RHS_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1000 "format_call.m"
                MR_Word check_hlds__simplify__format_call___UnifyModes_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 1000 "format_call.m"
                MR_Word check_hlds__simplify__format_call___UnifyContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 4)));
#line 1011 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_146_146;
#line 1003 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_193_193;
#line 1003 "format_call.m"
                MR_Word check_hlds__simplify__format_call__LHSVar_44;
#line 1002 "format_call.m"
                MR_Word check_hlds__simplify__format_call___ConsId_45;
#line 1002 "format_call.m"
                MR_Word check_hlds__simplify__format_call___RHSVars_46;
#line 1002 "format_call.m"
                MR_Word check_hlds__simplify__format_call___ArgModes_47;
#line 1002 "format_call.m"
                MR_Word check_hlds__simplify__format_call___How_48;
#line 1002 "format_call.m"
                MR_Word check_hlds__simplify__format_call___Unique_49;
#line 1002 "format_call.m"
                MR_Word check_hlds__simplify__format_call___SubInfo_50;
#line 1004 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_192_192;

#line 1002 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_42)) == (MR_mktag((MR_Integer) 0)));
#line 1002 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 1002 "format_call.m"
                  {
#line 1002 "format_call.m"
                    check_hlds__simplify__format_call__LHSVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 0)));
#line 1002 "format_call.m"
                    check_hlds__simplify__format_call___ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 1)));
#line 1002 "format_call.m"
                    check_hlds__simplify__format_call___RHSVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 2)));
#line 1002 "format_call.m"
                    check_hlds__simplify__format_call___ArgModes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 3)));
#line 1002 "format_call.m"
                    check_hlds__simplify__format_call___How_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 4)));
#line 1002 "format_call.m"
                    check_hlds__simplify__format_call___Unique_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 5)));
#line 1002 "format_call.m"
                    check_hlds__simplify__format_call___SubInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 6)));
#line 9941 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeCtorInfo_192_192 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1004 "format_call.m"
                    {
#line 1004 "format_call.m"
                      check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_192_192, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__LHSVar_44);
                    }
#line 1004 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 1003 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 1003 "format_call.m"
                      {
#line 9954 "check_hlds.simplify.format_call.c"
                        check_hlds__simplify__format_call__TypeCtorInfo_193_193 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1007 "format_call.m"
                        {
#line 1007 "format_call.m"
                          check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__remove_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_193_193, check_hlds__simplify__format_call__LHSVar_44, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_146_146);
                        }
#line 1003 "format_call.m"
                      }
#line 1002 "format_call.m"
                  }
#line 1011 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 1010 "format_call.m"
                  {
#line 1010 "format_call.m"
                    *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_146_146;
#line 1010 "format_call.m"
                    {
#line 1010 "format_call.m"
                      *check_hlds__simplify__format_call__Goal_10 = hlds__make_goal__true_goal_0_f_0();
                    }
#line 1010 "format_call.m"
                    *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99;
#line 1010 "format_call.m"
                  }
#line 1011 "format_call.m"
                else
#line 1021 "format_call.m"
                  {
#line 1021 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_194_194;
#line 1021 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__NonLocals_157;

#line 1021 "format_call.m"
                    *check_hlds__simplify__format_call__Goal_10 = check_hlds__simplify__format_call__Goal0_9;
#line 1022 "format_call.m"
                    {
#line 1022 "format_call.m"
                      check_hlds__simplify__format_call__NonLocals_157 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__format_call__GoalInfo_15);
                    }
#line 9996 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeCtorInfo_194_194 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1024 "format_call.m"
                    {
#line 1024 "format_call.m"
                      parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_194_194, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__NonLocals_157, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100);
                    }
#line 1025 "format_call.m"
                    {
#line 1025 "format_call.m"
                      parse_tree__set_of_var__difference_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_194_194, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__NonLocals_157, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                    }
#line 1021 "format_call.m"
                  }
#line 1025 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97;
#line 1000 "format_call.m"
              }
#line 990 "format_call.m"
            else
#line 990 "format_call.m"
              if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1029 "format_call.m"
                {
#line 1029 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__ConjType_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1029 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__Conjuncts0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 1029 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__Conjuncts_53;
#line 1029 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__GoalExpr_54;

#line 1030 "format_call.m"
                  {
#line 1030 "format_call.m"
                    check_hlds__simplify__format_call__opt_format_call_sites_in_conj_8_p_0(check_hlds__simplify__format_call__Conjuncts0_52, &check_hlds__simplify__format_call__Conjuncts_53, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                  }
#line 1032 "format_call.m"
                  {
#line 1032 "format_call.m"
                    check_hlds__simplify__format_call__GoalExpr_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "format_call.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1032 "format_call.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_54, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConjType_51));
#line 1032 "format_call.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_54, 2) = ((MR_Box) (check_hlds__simplify__format_call__Conjuncts_53));
#line 1032 "format_call.m"
                  }
#line 1033 "format_call.m"
                  {
#line 1033 "format_call.m"
                    MR_Word base;
#line 1033 "format_call.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "format_call.m"
                    *check_hlds__simplify__format_call__Goal_10 = base;
#line 1033 "format_call.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_54));
#line 1033 "format_call.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1033 "format_call.m"
                  }
#line 1029 "format_call.m"
                }
#line 990 "format_call.m"
              else
#line 990 "format_call.m"
                if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1035 "format_call.m"
                  {
#line 1035 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_195_195;
#line 1035 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__Disjuncts0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1035 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__Disjuncts_56;
#line 1035 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__NeededVarsSets_57;
#line 1035 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__ToDeleteVarsSets_58;
#line 1035 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__GoalExpr_160;

#line 1036 "format_call.m"
                    {
#line 1036 "format_call.m"
                      check_hlds__simplify__format_call__opt_format_call_sites_in_disj_10_p_0(check_hlds__simplify__format_call__Disjuncts0_55, &check_hlds__simplify__format_call__Disjuncts_56, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__NeededVarsSets_57, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteVarsSets_58);
                    }
#line 10086 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeCtorInfo_195_195 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1039 "format_call.m"
                    {
#line 1039 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_195_195, check_hlds__simplify__format_call__NeededVarsSets_57);
                    }
#line 1040 "format_call.m"
                    {
#line 1040 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_195_195, check_hlds__simplify__format_call__ToDeleteVarsSets_58);
                    }
#line 1041 "format_call.m"
                    {
#line 1041 "format_call.m"
                      check_hlds__simplify__format_call__GoalExpr_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "format_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1041 "format_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_160, 1) = ((MR_Box) (check_hlds__simplify__format_call__Disjuncts_56));
#line 1041 "format_call.m"
                    }
#line 1042 "format_call.m"
                    {
#line 1042 "format_call.m"
                      MR_Word base;
#line 1042 "format_call.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1042 "format_call.m"
                      *check_hlds__simplify__format_call__Goal_10 = base;
#line 1042 "format_call.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_160));
#line 1042 "format_call.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1042 "format_call.m"
                    }
#line 1035 "format_call.m"
                  }
#line 990 "format_call.m"
                else
#line 990 "format_call.m"
                  if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1053 "format_call.m"
                    {
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_197_197;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Vars_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Cond0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Then0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 3)));
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Else0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 4)));
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Else_67;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__NeededVarsBeforeElse_68;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__ToDeleteVarsBeforeElse_69;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Then_70;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__NeededVarsBeforeThen_71;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__ToDeleteVarsBeforeThen_72;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Cond_73;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__NeededVarsBeforeCond_74;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__ToDeleteVarsBeforeCond_75;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_128_128;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_129_129;
#line 1053 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__GoalExpr_164;

#line 1054 "format_call.m"
                      {
#line 1054 "format_call.m"
                        check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Else0_66, &check_hlds__simplify__format_call__Else_67, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_128_128, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, &check_hlds__simplify__format_call__NeededVarsBeforeElse_68, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__ToDeleteVarsBeforeElse_69);
                      }
#line 1057 "format_call.m"
                      {
#line 1057 "format_call.m"
                        check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Then0_65, &check_hlds__simplify__format_call__Then_70, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_128_128, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, &check_hlds__simplify__format_call__NeededVarsBeforeThen_71, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__ToDeleteVarsBeforeThen_72);
                      }
#line 1060 "format_call.m"
                      {
#line 1060 "format_call.m"
                        check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Cond0_64, &check_hlds__simplify__format_call__Cond_73, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__NeededVarsBeforeThen_71, &check_hlds__simplify__format_call__NeededVarsBeforeCond_74, check_hlds__simplify__format_call__ToDeleteVarsBeforeThen_72, &check_hlds__simplify__format_call__ToDeleteVarsBeforeCond_75);
                      }
#line 10180 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__TypeCtorInfo_197_197 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1063 "format_call.m"
                      {
#line 1063 "format_call.m"
                        parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_197_197, check_hlds__simplify__format_call__NeededVarsBeforeCond_74, check_hlds__simplify__format_call__NeededVarsBeforeElse_68, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100);
                      }
#line 1065 "format_call.m"
                      {
#line 1065 "format_call.m"
                        parse_tree__set_of_var__intersect_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_197_197, check_hlds__simplify__format_call__ToDeleteVarsBeforeCond_75, check_hlds__simplify__format_call__ToDeleteVarsBeforeElse_69, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                      }
#line 1067 "format_call.m"
                      {
#line 1067 "format_call.m"
                        check_hlds__simplify__format_call__GoalExpr_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1067 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 1) = ((MR_Box) (check_hlds__simplify__format_call__Vars_63));
#line 1067 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 2) = ((MR_Box) (check_hlds__simplify__format_call__Cond_73));
#line 1067 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 3) = ((MR_Box) (check_hlds__simplify__format_call__Then_70));
#line 1067 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 4) = ((MR_Box) (check_hlds__simplify__format_call__Else_67));
#line 1067 "format_call.m"
                      }
#line 1068 "format_call.m"
                      {
#line 1068 "format_call.m"
                        MR_Word base;
#line 1068 "format_call.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "format_call.m"
                        *check_hlds__simplify__format_call__Goal_10 = base;
#line 1068 "format_call.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_164));
#line 1068 "format_call.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1068 "format_call.m"
                      }
#line 1053 "format_call.m"
                    }
#line 990 "format_call.m"
                  else
#line 990 "format_call.m"
                    if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1078 "format_call.m"
                      {
#line 1078 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__Reason_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1078 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__SubGoal0_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 1091 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_118_118;
#line 1080 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_199_199;
#line 1080 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__TermVar_79;
#line 1080 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__V_117_117;
#line 1081 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_198_198;

#line 1080 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__Reason_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_78, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1080 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 1080 "format_call.m"
                          {
#line 1080 "format_call.m"
                            check_hlds__simplify__format_call__TermVar_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_78, (MR_Integer) 1)));
#line 1080 "format_call.m"
                            check_hlds__simplify__format_call__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_78, (MR_Integer) 2)));
#line 1080 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_117_117 == (MR_Integer) 1);
#line 1080 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 1080 "format_call.m"
                              {
#line 10261 "check_hlds.simplify.format_call.c"
                                check_hlds__simplify__format_call__TypeCtorInfo_198_198 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1081 "format_call.m"
                                {
#line 1081 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_198_198, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__TermVar_79);
                                }
#line 1081 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 1080 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 1080 "format_call.m"
                                  {
#line 10274 "check_hlds.simplify.format_call.c"
                                    check_hlds__simplify__format_call__TypeCtorInfo_199_199 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1084 "format_call.m"
                                    {
#line 1084 "format_call.m"
                                      check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__remove_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_199_199, check_hlds__simplify__format_call__TermVar_79, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_118_118);
                                    }
#line 1080 "format_call.m"
                                  }
#line 1080 "format_call.m"
                              }
#line 1080 "format_call.m"
                          }
#line 1091 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 1089 "format_call.m"
                          {
#line 1089 "format_call.m"
                            /* direct tailcall eliminated */
#line 1089 "format_call.m"
                            {
#line 1089 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__Goal0__tmp_copy_9 = check_hlds__simplify__format_call__SubGoal0_171;
#line 1089 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0__tmp_copy_101 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_118_118;

#line 1089 "format_call.m"
                              check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0__tmp_copy_101;
#line 1089 "format_call.m"
                              check_hlds__simplify__format_call__Goal0_9 = check_hlds__simplify__format_call__Goal0__tmp_copy_9;
#line 1089 "format_call.m"
                            }
#line 1089 "format_call.m"
                            continue;
#line 1089 "format_call.m"
                          }
#line 1091 "format_call.m"
                        else
#line 1093 "format_call.m"
                          {
#line 1093 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__GoalExpr_166;
#line 1093 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__SubGoal_167;

#line 1092 "format_call.m"
                            {
#line 1092 "format_call.m"
                              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__SubGoal0_171, &check_hlds__simplify__format_call__SubGoal_167, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                            }
#line 1094 "format_call.m"
                            {
#line 1094 "format_call.m"
                              check_hlds__simplify__format_call__GoalExpr_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1094 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1094 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_166, 1) = ((MR_Box) (check_hlds__simplify__format_call__Reason_78));
#line 1094 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_166, 2) = ((MR_Box) (check_hlds__simplify__format_call__SubGoal_167));
#line 1094 "format_call.m"
                            }
#line 1095 "format_call.m"
                            {
#line 1095 "format_call.m"
                              MR_Word base;
#line 1095 "format_call.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "format_call.m"
                              *check_hlds__simplify__format_call__Goal_10 = base;
#line 1095 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_166));
#line 1095 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1095 "format_call.m"
                            }
#line 1093 "format_call.m"
                          }
#line 1078 "format_call.m"
                      }
#line 990 "format_call.m"
                    else
#line 990 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1098 "format_call.m"
                        {
#line 1098 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__ShortHand0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1098 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__GoalExpr_182;

#line 1116 "format_call.m"
                          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand0_80)) == (MR_mktag((MR_Integer) 1))))
#line 1101 "format_call.m"
                            {
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_200_200;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__AtomicType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 0)));
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OuterVars_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 1)));
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__InnerVars_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 2)));
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 3)));
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__MainGoal0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 4)));
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OrElseGoals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 5)));
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 6)));
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__MainGoal_88;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__NeededVarsMain_89;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ToDeleteVarsMain_90;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OrElseGoals_91;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ShortHand_92;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109_109;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_114_114;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_116_116;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__NeededVarsSets_173;
#line 1101 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ToDeleteVarsSets_174;

#line 1102 "format_call.m"
                              {
#line 1102 "format_call.m"
                                check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__MainGoal0_85, &check_hlds__simplify__format_call__MainGoal_88, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109_109, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, &check_hlds__simplify__format_call__NeededVarsMain_89, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__ToDeleteVarsMain_90);
                              }
#line 1105 "format_call.m"
                              {
#line 1105 "format_call.m"
                                check_hlds__simplify__format_call__opt_format_call_sites_in_disj_10_p_0(check_hlds__simplify__format_call__OrElseGoals0_86, &check_hlds__simplify__format_call__OrElseGoals_91, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109_109, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__NeededVarsSets_173, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteVarsSets_174);
                              }
#line 10416 "check_hlds.simplify.format_call.c"
                              check_hlds__simplify__format_call__TypeCtorInfo_200_200 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1109 "format_call.m"
                              {
#line 1109 "format_call.m"
                                check_hlds__simplify__format_call__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_114_114, 0) = ((MR_Box) (check_hlds__simplify__format_call__NeededVarsMain_89));
#line 1109 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_114_114, 1) = ((MR_Box) (check_hlds__simplify__format_call__NeededVarsSets_173));
#line 1109 "format_call.m"
                              }
#line 1109 "format_call.m"
                              {
#line 1109 "format_call.m"
                                *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_200_200, check_hlds__simplify__format_call__V_114_114);
                              }
#line 1112 "format_call.m"
                              {
#line 1112 "format_call.m"
                                check_hlds__simplify__format_call__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVarsMain_90));
#line 1112 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 1) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVarsSets_174));
#line 1112 "format_call.m"
                              }
#line 1111 "format_call.m"
                              {
#line 1111 "format_call.m"
                                *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_200_200, check_hlds__simplify__format_call__V_116_116);
                              }
#line 1113 "format_call.m"
                              {
#line 1113 "format_call.m"
                                check_hlds__simplify__format_call__ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 0) = ((MR_Box) (check_hlds__simplify__format_call__AtomicType_81));
#line 1113 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 1) = ((MR_Box) (check_hlds__simplify__format_call__OuterVars_82));
#line 1113 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 2) = ((MR_Box) (check_hlds__simplify__format_call__InnerVars_83));
#line 1113 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 3) = ((MR_Box) (check_hlds__simplify__format_call__OutputVars_84));
#line 1113 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 4) = ((MR_Box) (check_hlds__simplify__format_call__MainGoal_88));
#line 1113 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 5) = ((MR_Box) (check_hlds__simplify__format_call__OrElseGoals_91));
#line 1113 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 6) = ((MR_Box) (check_hlds__simplify__format_call__OrElseInners_87));
#line 1113 "format_call.m"
                              }
#line 1115 "format_call.m"
                              {
#line 1115 "format_call.m"
                                check_hlds__simplify__format_call__GoalExpr_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "format_call.m"
                                MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1115 "format_call.m"
                                MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_182, 1) = ((MR_Box) (check_hlds__simplify__format_call__ShortHand_92));
#line 1115 "format_call.m"
                              }
#line 1101 "format_call.m"
                            }
#line 1116 "format_call.m"
                          else
#line 1116 "format_call.m"
                            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand0_80)) == (MR_mktag((MR_Integer) 0))))
#line 1123 "format_call.m"
                              {
#line 1125 "format_call.m"
                                {
#line 1125 "format_call.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.opt_format_call_sites_in_goal\'/8", (MR_String) "bi_implication");
#line 1125 "format_call.m"
                                  return;
                                }
#line 1123 "format_call.m"
                              }
#line 1116 "format_call.m"
                            else
#line 1117 "format_call.m"
                              {
#line 1117 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__MaybeIO_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 0)));
#line 1117 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__ResultVar_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 1)));
#line 1117 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__SubGoal0_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 2)));
#line 1117 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__SubGoal_176;
#line 1117 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__ShortHand_177;

#line 1118 "format_call.m"
                                {
#line 1118 "format_call.m"
                                  check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__SubGoal0_175, &check_hlds__simplify__format_call__SubGoal_176, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                                }
#line 1120 "format_call.m"
                                {
#line 1120 "format_call.m"
                                  check_hlds__simplify__format_call__ShortHand_177 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "format_call.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_177, 0) = ((MR_Box) (check_hlds__simplify__format_call__MaybeIO_93));
#line 1120 "format_call.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_177, 1) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_94));
#line 1120 "format_call.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_177, 2) = ((MR_Box) (check_hlds__simplify__format_call__SubGoal_176));
#line 1120 "format_call.m"
                                }
#line 1121 "format_call.m"
                                {
#line 1121 "format_call.m"
                                  check_hlds__simplify__format_call__GoalExpr_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1121 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_182, 1) = ((MR_Box) (check_hlds__simplify__format_call__ShortHand_177));
#line 1121 "format_call.m"
                                }
#line 1117 "format_call.m"
                              }
#line 1127 "format_call.m"
                          {
#line 1127 "format_call.m"
                            MR_Word base;
#line 1127 "format_call.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "format_call.m"
                            *check_hlds__simplify__format_call__Goal_10 = base;
#line 1127 "format_call.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_182));
#line 1127 "format_call.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1127 "format_call.m"
                          }
#line 1098 "format_call.m"
                        }
#line 990 "format_call.m"
                      else
#line 990 "format_call.m"
                        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1044 "format_call.m"
                          {
#line 1044 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__TypeCtorInfo_196_196;
#line 1044 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__SwitchVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1044 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__CanFail_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 1044 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__Cases0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 3)));
#line 1044 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__Cases_62;
#line 1044 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__GoalExpr_161;
#line 1044 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__NeededVarsSets_162;
#line 1044 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__ToDeleteVarsSets_163;

#line 1045 "format_call.m"
                            {
#line 1045 "format_call.m"
                              check_hlds__simplify__format_call__opt_format_call_sites_in_switch_10_p_0(check_hlds__simplify__format_call__Cases0_61, &check_hlds__simplify__format_call__Cases_62, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__NeededVarsSets_162, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteVarsSets_163);
                            }
#line 10583 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__TypeCtorInfo_196_196 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1048 "format_call.m"
                            {
#line 1048 "format_call.m"
                              *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_196_196, check_hlds__simplify__format_call__NeededVarsSets_162);
                            }
#line 1049 "format_call.m"
                            {
#line 1049 "format_call.m"
                              *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_196_196, check_hlds__simplify__format_call__ToDeleteVarsSets_163);
                            }
#line 1050 "format_call.m"
                            {
#line 1050 "format_call.m"
                              check_hlds__simplify__format_call__GoalExpr_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1050 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_161, 1) = ((MR_Box) (check_hlds__simplify__format_call__SwitchVar_59));
#line 1050 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_161, 2) = ((MR_Box) (check_hlds__simplify__format_call__CanFail_60));
#line 1050 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_161, 3) = ((MR_Box) (check_hlds__simplify__format_call__Cases_62));
#line 1050 "format_call.m"
                            }
#line 1051 "format_call.m"
                            {
#line 1051 "format_call.m"
                              MR_Word base;
#line 1051 "format_call.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1051 "format_call.m"
                              *check_hlds__simplify__format_call__Goal_10 = base;
#line 1051 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_161));
#line 1051 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1051 "format_call.m"
                            }
#line 1044 "format_call.m"
                          }
#line 990 "format_call.m"
                        else
#line 993 "format_call.m"
                          {
#line 993 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__TypeCtorInfo_191_191;
#line 993 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__NonLocals_156;

#line 994 "format_call.m"
                            *check_hlds__simplify__format_call__Goal_10 = check_hlds__simplify__format_call__Goal0_9;
#line 995 "format_call.m"
                            {
#line 995 "format_call.m"
                              check_hlds__simplify__format_call__NonLocals_156 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__format_call__GoalInfo_15);
                            }
#line 10641 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__TypeCtorInfo_191_191 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 997 "format_call.m"
                            {
#line 997 "format_call.m"
                              parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_191_191, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__NonLocals_156, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100);
                            }
#line 998 "format_call.m"
                            {
#line 998 "format_call.m"
                              parse_tree__set_of_var__difference_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_191_191, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__NonLocals_156, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                            }
#line 998 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97;
#line 993 "format_call.m"
                          }
#line 974 "format_call.m"
      }
#line 974 "format_call.m"
      break;
#line 974 "format_call.m"
    }
#line 968 "format_call.m"
}

#line 940 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__add_to_fc_eqv_map_5_p_0(
#line 940 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjId_6,
#line 940 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Var_7,
#line 940 "format_call.m"
  MR_Word check_hlds__simplify__format_call__EqvVar_8,
#line 940 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17,
#line 940 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18)
#line 940 "format_call.m"
{
#line 949 "format_call.m"
  {
#line 949 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 949 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMap0_10;
#line 944 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv0_ConjMap0_10;

#line 944 "format_call.m"
    {
#line 944 "format_call.m"
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), &check_hlds__simplify__format_call__conv0_ConjMap0_10);
    }
#line 944 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 944 "format_call.m"
      {
#line 944 "format_call.m"
        check_hlds__simplify__format_call__ConjMap0_10 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMap0_10);
#line 944 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 944 "format_call.m"
      }
#line 949 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 945 "format_call.m"
      {
#line 945 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_28_28 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 945 "format_call.m"
        MR_Word check_hlds__simplify__format_call__StringMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 0)));
#line 945 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ListMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 1)));
#line 945 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ElementMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 2)));
#line 945 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 3)));
#line 945 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
#line 945 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_16;

#line 946 "format_call.m"
        {
#line 946 "format_call.m"
          mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeInfo_28_28, check_hlds__simplify__format_call__TypeInfo_28_28, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__EqvVar_8)), check_hlds__simplify__format_call__EqvMap0_14, &check_hlds__simplify__format_call__EqvMap_15);
        }
#line 947 "format_call.m"
        {
#line 947 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 947 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_11));
#line 947 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_12));
#line 947 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_13));
#line 947 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_15));
#line 947 "format_call.m"
        }
#line 948 "format_call.m"
        {
#line 948 "format_call.m"
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_16)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
#line 948 "format_call.m"
          return;
        }
#line 945 "format_call.m"
      }
#line 949 "format_call.m"
    else
#line 950 "format_call.m"
      {
#line 950 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_31_31 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 950 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_20_20;
#line 950 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_21_21;
#line 950 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_22_22;
#line 950 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_24;
#line 950 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_25;

#line 950 "format_call.m"
        {
#line 950 "format_call.m"
          check_hlds__simplify__format_call__EqvMap_24 = mercury__map__singleton_2_f_0(check_hlds__simplify__format_call__TypeInfo_31_31, check_hlds__simplify__format_call__TypeInfo_31_31, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__EqvVar_8)));
        }
#line 951 "format_call.m"
        {
#line 951 "format_call.m"
          check_hlds__simplify__format_call__V_20_20 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_31_31, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 951 "format_call.m"
        {
#line 951 "format_call.m"
          check_hlds__simplify__format_call__V_21_21 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_31_31, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
        }
#line 951 "format_call.m"
        {
#line 951 "format_call.m"
          check_hlds__simplify__format_call__V_22_22 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_31_31, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
        }
#line 951 "format_call.m"
        {
#line 951 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 951 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_20_20));
#line 951 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_21_21));
#line 951 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_22_22));
#line 951 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_24));
#line 951 "format_call.m"
        }
#line 952 "format_call.m"
        {
#line 952 "format_call.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_25)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
#line 952 "format_call.m"
          return;
        }
#line 950 "format_call.m"
      }
#line 949 "format_call.m"
  }
#line 940 "format_call.m"
}

#line 925 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__add_to_element_map_5_p_0(
#line 925 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjId_6,
#line 925 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Var_7,
#line 925 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Element_8,
#line 925 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17,
#line 925 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18)
#line 925 "format_call.m"
{
#line 934 "format_call.m"
  {
#line 934 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 934 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMap0_10;
#line 929 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv0_ConjMap0_10;

#line 929 "format_call.m"
    {
#line 929 "format_call.m"
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), &check_hlds__simplify__format_call__conv0_ConjMap0_10);
    }
#line 929 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 929 "format_call.m"
      {
#line 929 "format_call.m"
        check_hlds__simplify__format_call__ConjMap0_10 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMap0_10);
#line 929 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 929 "format_call.m"
      }
#line 934 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 930 "format_call.m"
      {
#line 930 "format_call.m"
        MR_Word check_hlds__simplify__format_call__StringMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 0)));
#line 930 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ListMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 1)));
#line 930 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ElementMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 2)));
#line 930 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 3)));
#line 930 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ElementMap_15;
#line 930 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_16;

#line 931 "format_call.m"
        {
#line 931 "format_call.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__Element_8)), check_hlds__simplify__format_call__ElementMap0_13, &check_hlds__simplify__format_call__ElementMap_15);
        }
#line 932 "format_call.m"
        {
#line 932 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 932 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_11));
#line 932 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_12));
#line 932 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_15));
#line 932 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_14));
#line 932 "format_call.m"
        }
#line 933 "format_call.m"
        {
#line 933 "format_call.m"
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_16)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
#line 933 "format_call.m"
          return;
        }
#line 930 "format_call.m"
      }
#line 934 "format_call.m"
    else
#line 935 "format_call.m"
      {
#line 935 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_32_32 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 935 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_20_20;
#line 935 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_21_21;
#line 935 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_22_22;
#line 935 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ElementMap_24;
#line 935 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_25;

#line 935 "format_call.m"
        {
#line 935 "format_call.m"
          check_hlds__simplify__format_call__ElementMap_24 = mercury__map__singleton_2_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__Element_8)));
        }
#line 936 "format_call.m"
        {
#line 936 "format_call.m"
          check_hlds__simplify__format_call__V_20_20 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 936 "format_call.m"
        {
#line 936 "format_call.m"
          check_hlds__simplify__format_call__V_21_21 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
        }
#line 936 "format_call.m"
        {
#line 936 "format_call.m"
          check_hlds__simplify__format_call__V_22_22 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, check_hlds__simplify__format_call__TypeInfo_32_32);
        }
#line 936 "format_call.m"
        {
#line 936 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 936 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_20_20));
#line 936 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_21_21));
#line 936 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_24));
#line 936 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 3) = ((MR_Box) (check_hlds__simplify__format_call__V_22_22));
#line 936 "format_call.m"
        }
#line 937 "format_call.m"
        {
#line 937 "format_call.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_25)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
#line 937 "format_call.m"
          return;
        }
#line 935 "format_call.m"
      }
#line 934 "format_call.m"
  }
#line 925 "format_call.m"
}

#line 910 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__add_to_list_map_5_p_0(
#line 910 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjId_6,
#line 910 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Var_7,
#line 910 "format_call.m"
  MR_Word check_hlds__simplify__format_call__List_8,
#line 910 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17,
#line 910 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18)
#line 910 "format_call.m"
{
#line 919 "format_call.m"
  {
#line 919 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 919 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMap0_10;
#line 914 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv0_ConjMap0_10;

#line 914 "format_call.m"
    {
#line 914 "format_call.m"
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), &check_hlds__simplify__format_call__conv0_ConjMap0_10);
    }
#line 914 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 914 "format_call.m"
      {
#line 914 "format_call.m"
        check_hlds__simplify__format_call__ConjMap0_10 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMap0_10);
#line 914 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 914 "format_call.m"
      }
#line 919 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 915 "format_call.m"
      {
#line 915 "format_call.m"
        MR_Word check_hlds__simplify__format_call__StringMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 0)));
#line 915 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ListMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 1)));
#line 915 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ElementMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 2)));
#line 915 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 3)));
#line 915 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ListMap_15;
#line 915 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_16;

#line 916 "format_call.m"
        {
#line 916 "format_call.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__List_8)), check_hlds__simplify__format_call__ListMap0_12, &check_hlds__simplify__format_call__ListMap_15);
        }
#line 917 "format_call.m"
        {
#line 917 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 917 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_11));
#line 917 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_15));
#line 917 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_13));
#line 917 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_14));
#line 917 "format_call.m"
        }
#line 918 "format_call.m"
        {
#line 918 "format_call.m"
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_16)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
#line 918 "format_call.m"
          return;
        }
#line 915 "format_call.m"
      }
#line 919 "format_call.m"
    else
#line 920 "format_call.m"
      {
#line 920 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_32_32 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 920 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_20_20;
#line 920 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_21_21;
#line 920 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_22_22;
#line 920 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ListMap_24;
#line 920 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_25;

#line 920 "format_call.m"
        {
#line 920 "format_call.m"
          check_hlds__simplify__format_call__ListMap_24 = mercury__map__singleton_2_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__List_8)));
        }
#line 921 "format_call.m"
        {
#line 921 "format_call.m"
          check_hlds__simplify__format_call__V_20_20 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 921 "format_call.m"
        {
#line 921 "format_call.m"
          check_hlds__simplify__format_call__V_21_21 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
        }
#line 921 "format_call.m"
        {
#line 921 "format_call.m"
          check_hlds__simplify__format_call__V_22_22 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, check_hlds__simplify__format_call__TypeInfo_32_32);
        }
#line 921 "format_call.m"
        {
#line 921 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 921 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_20_20));
#line 921 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_24));
#line 921 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_21_21));
#line 921 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 3) = ((MR_Box) (check_hlds__simplify__format_call__V_22_22));
#line 921 "format_call.m"
        }
#line 922 "format_call.m"
        {
#line 922 "format_call.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_25)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
#line 922 "format_call.m"
          return;
        }
#line 920 "format_call.m"
      }
#line 919 "format_call.m"
  }
#line 910 "format_call.m"
}

#line 895 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__add_to_string_map_5_p_0(
#line 895 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjId_6,
#line 895 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Var_7,
#line 895 "format_call.m"
  MR_String check_hlds__simplify__format_call__String_8,
#line 895 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17,
#line 895 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18)
#line 895 "format_call.m"
{
#line 904 "format_call.m"
  {
#line 904 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 904 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMap0_10;
#line 899 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv0_ConjMap0_10;

#line 899 "format_call.m"
    {
#line 899 "format_call.m"
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), &check_hlds__simplify__format_call__conv0_ConjMap0_10);
    }
#line 899 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 899 "format_call.m"
      {
#line 899 "format_call.m"
        check_hlds__simplify__format_call__ConjMap0_10 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMap0_10);
#line 899 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 899 "format_call.m"
      }
#line 904 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 900 "format_call.m"
      {
#line 900 "format_call.m"
        MR_Word check_hlds__simplify__format_call__StringMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 0)));
#line 900 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ListMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 1)));
#line 900 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ElementMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 2)));
#line 900 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 3)));
#line 900 "format_call.m"
        MR_Word check_hlds__simplify__format_call__StringMap_15;
#line 900 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_16;

#line 901 "format_call.m"
        {
#line 901 "format_call.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__String_8)), check_hlds__simplify__format_call__StringMap0_11, &check_hlds__simplify__format_call__StringMap_15);
        }
#line 902 "format_call.m"
        {
#line 902 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 902 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_15));
#line 902 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_12));
#line 902 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_13));
#line 902 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_14));
#line 902 "format_call.m"
        }
#line 903 "format_call.m"
        {
#line 903 "format_call.m"
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_16)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
#line 903 "format_call.m"
          return;
        }
#line 900 "format_call.m"
      }
#line 904 "format_call.m"
    else
#line 905 "format_call.m"
      {
#line 905 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_32_32 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 905 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_20_20;
#line 905 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_21_21;
#line 905 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_22_22;
#line 905 "format_call.m"
        MR_Word check_hlds__simplify__format_call__StringMap_24;
#line 905 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_25;

#line 905 "format_call.m"
        {
#line 905 "format_call.m"
          check_hlds__simplify__format_call__StringMap_24 = mercury__map__singleton_2_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__String_8)));
        }
#line 906 "format_call.m"
        {
#line 906 "format_call.m"
          check_hlds__simplify__format_call__V_20_20 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
        }
#line 906 "format_call.m"
        {
#line 906 "format_call.m"
          check_hlds__simplify__format_call__V_21_21 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
        }
#line 906 "format_call.m"
        {
#line 906 "format_call.m"
          check_hlds__simplify__format_call__V_22_22 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_32_32, check_hlds__simplify__format_call__TypeInfo_32_32);
        }
#line 906 "format_call.m"
        {
#line 906 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 906 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_24));
#line 906 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_20_20));
#line 906 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_21_21));
#line 906 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 3) = ((MR_Box) (check_hlds__simplify__format_call__V_22_22));
#line 906 "format_call.m"
        }
#line 907 "format_call.m"
        {
#line 907 "format_call.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_25)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
#line 907 "format_call.m"
          return;
        }
#line 905 "format_call.m"
      }
#line 904 "format_call.m"
  }
#line 895 "format_call.m"
}

#line 886 "format_call.m"
MR_Word MR_CALL 
check_hlds__simplify__format_call__get_conj_map_2_f_0(
#line 886 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_4,
#line 886 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjId_5)
#line 886 "format_call.m"
{
#line 891 "format_call.m"
  {
#line 891 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 891 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMap_6;
#line 891 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMapPrime_7;
#line 889 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv0_ConjMapPrime_7;

#line 889 "format_call.m"
    {
#line 889 "format_call.m"
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__ConjMaps_4, ((MR_Box) (check_hlds__simplify__format_call__ConjId_5)), &check_hlds__simplify__format_call__conv0_ConjMapPrime_7);
    }
#line 889 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 889 "format_call.m"
      {
#line 889 "format_call.m"
        check_hlds__simplify__format_call__ConjMapPrime_7 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMapPrime_7);
#line 889 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 889 "format_call.m"
      }
#line 891 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 890 "format_call.m"
      check_hlds__simplify__format_call__ConjMap_6 = check_hlds__simplify__format_call__ConjMapPrime_7;
#line 891 "format_call.m"
    else
#line 892 "format_call.m"
      {
#line 892 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 892 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8;
#line 892 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_9_9;
#line 892 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_10_10;
#line 892 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_11_11;

#line 892 "format_call.m"
        {
#line 892 "format_call.m"
          check_hlds__simplify__format_call__V_8_8 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 892 "format_call.m"
        {
#line 892 "format_call.m"
          check_hlds__simplify__format_call__V_9_9 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
        }
#line 892 "format_call.m"
        {
#line 892 "format_call.m"
          check_hlds__simplify__format_call__V_10_10 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
        }
#line 892 "format_call.m"
        {
#line 892 "format_call.m"
          check_hlds__simplify__format_call__V_11_11 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, check_hlds__simplify__format_call__TypeInfo_14_14);
        }
#line 892 "format_call.m"
        {
#line 892 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 892 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_8_8));
#line 892 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_9_9));
#line 892 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_10_10));
#line 892 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 3) = ((MR_Box) (check_hlds__simplify__format_call__V_11_11));
#line 892 "format_call.m"
        }
#line 892 "format_call.m"
      }
#line 891 "format_call.m"
    return check_hlds__simplify__format_call__ConjMap_6;
#line 891 "format_call.m"
  }
#line 886 "format_call.m"
}

#line 880 "format_call.m"
void MR_CALL 
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

#line 861 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(
#line 861 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_1,
#line 861 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 861 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ContainingId_3,
#line 861 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4,
#line 861 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5,
#line 861 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6,
#line 861 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7,
#line 861 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8,
#line 861 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9,
#line 861 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10,
#line 861 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11,
#line 861 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__12_12)
#line 861 "format_call.m"
{
#line 866 "format_call.m"
  {
#line 866 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 866 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "format_call.m"
      {
#line 867 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10;
#line 867 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8;
#line 867 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6;
#line 867 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4;
#line 866 "format_call.m"
      }
#line 866 "format_call.m"
    else
#line 869 "format_call.m"
      {
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_58_58;
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__DisjId_36;
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__HeadRelevantVars_37;
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TailRelevantVars_38;
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_47_47;
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_48_48;
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_49_49;
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_50_50;
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_51_51;
#line 869 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52_52;

#line 872 "format_call.m"
        {
#line 872 "format_call.m"
          check_hlds__simplify__format_call__V_51_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 870 "format_call.m"
        {
#line 870 "format_call.m"
          check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__ModuleInfo_1, check_hlds__simplify__format_call__Goal_28, &check_hlds__simplify__format_call__DisjId_36, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4, &check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_47_47, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_48_48, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_49_49, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_50_50, check_hlds__simplify__format_call__V_51_51, &check_hlds__simplify__format_call__HeadRelevantVars_37);
        }
#line 11480 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeCtorInfo_58_58 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 873 "format_call.m"
        {
#line 873 "format_call.m"
          mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_58_58, check_hlds__simplify__format_call__TypeCtorInfo_58_58, ((MR_Box) (check_hlds__simplify__format_call__DisjId_36)), ((MR_Box) (check_hlds__simplify__format_call__ContainingId_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_50_50, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52_52);
        }
#line 874 "format_call.m"
        {
#line 874 "format_call.m"
          check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(check_hlds__simplify__format_call__ModuleInfo_1, check_hlds__simplify__format_call__Goals_29, check_hlds__simplify__format_call__ContainingId_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_47_47, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_48_48, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_49_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52_52, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, &check_hlds__simplify__format_call__TailRelevantVars_38);
        }
#line 876 "format_call.m"
        {
#line 876 "format_call.m"
          MR_Word base;
#line 876 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__12_12 = base;
#line 876 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__HeadRelevantVars_37));
#line 876 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailRelevantVars_38));
#line 876 "format_call.m"
        }
#line 869 "format_call.m"
      }
#line 866 "format_call.m"
  }
#line 861 "format_call.m"
}

#line 848 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(
#line 848 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 848 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Disjuncts_15,
#line 848 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_16,
#line 848 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_24,
#line 848 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_25,
#line 848 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_26,
#line 848 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_27,
#line 848 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_28,
#line 848 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_29,
#line 848 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_30,
#line 848 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_31,
#line 848 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_32,
#line 848 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_33)
#line 848 "format_call.m"
{
#line 855 "format_call.m"
  {
#line 855 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 855 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_39_39;
#line 855 "format_call.m"
    MR_Word check_hlds__simplify__format_call__DisjRelevantVarSets_22;
#line 855 "format_call.m"
    MR_Word check_hlds__simplify__format_call__DisjRelevantVars_23;

#line 856 "format_call.m"
    {
#line 856 "format_call.m"
      check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__Disjuncts_15, check_hlds__simplify__format_call__CurId_16, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_24, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_25, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_26, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_27, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_28, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_29, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_30, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_31, &check_hlds__simplify__format_call__DisjRelevantVarSets_22);
    }
#line 11560 "check_hlds.simplify.format_call.c"
    check_hlds__simplify__format_call__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 858 "format_call.m"
    {
#line 858 "format_call.m"
      check_hlds__simplify__format_call__DisjRelevantVars_23 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_39_39, check_hlds__simplify__format_call__DisjRelevantVarSets_22);
    }
#line 859 "format_call.m"
    {
#line 859 "format_call.m"
      parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_39_39, check_hlds__simplify__format_call__DisjRelevantVars_23, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_32, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_33);
#line 859 "format_call.m"
      return;
    }
#line 855 "format_call.m"
  }
#line 848 "format_call.m"
}

#line 844 "format_call.m"
MR_Word MR_CALL 
check_hlds__simplify__format_call__project_case_goal_1_f_0(
#line 844 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1)
#line 844 "format_call.m"
{
#line 846 "format_call.m"
  {
#line 846 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 846 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 846 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 846 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));

#line 846 "format_call.m"
    return check_hlds__simplify__format_call__Goal_5;
#line 846 "format_call.m"
  }
#line 844 "format_call.m"
}

#line 767 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1(
#line 767 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg)
#line 767 "format_call.m"
{
#line 767 "format_call.m"
  {
#line 767 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 767 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;

#line 767 "format_call.m"
    {
#line 767 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__767__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))));
    }
#line 767 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 767 "format_call.m"
  }
#line 767 "format_call.m"
}

#line 746 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0(
#line 746 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Unification_10,
#line 746 "format_call.m"
  MR_Word check_hlds__simplify__format_call__GoalInfo_11,
#line 746 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_12,
#line 746 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49,
#line 746 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50,
#line 746 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_51,
#line 746 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52,
#line 746 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53,
#line 746 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54)
#line 746 "format_call.m"
{
#line 751 "format_call.m"
  {
#line 751 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 761 "format_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_10)) == (MR_mktag((MR_Integer) 2))))
#line 753 "format_call.m"
      {
#line 753 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TargetVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 0)));
#line 753 "format_call.m"
        MR_Word check_hlds__simplify__format_call__SourceVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 1)));

#line 754 "format_call.m"
        {
#line 754 "format_call.m"
          check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, check_hlds__simplify__format_call__TargetVar_16);
        }
#line 758 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 755 "format_call.m"
          {
#line 755 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 755 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_79_79;

#line 755 "format_call.m"
            {
#line 755 "format_call.m"
              parse_tree__set_of_var__delete_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_91_91, check_hlds__simplify__format_call__TargetVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_79_79);
            }
#line 756 "format_call.m"
            {
#line 756 "format_call.m"
              parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_91_91, check_hlds__simplify__format_call__SourceVar_17, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_79_79, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54);
            }
#line 757 "format_call.m"
            {
#line 757 "format_call.m"
              check_hlds__simplify__format_call__add_to_fc_eqv_map_5_p_0(check_hlds__simplify__format_call__CurId_12, check_hlds__simplify__format_call__TargetVar_16, check_hlds__simplify__format_call__SourceVar_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50);
            }
#line 755 "format_call.m"
          }
#line 758 "format_call.m"
        else
#line 759 "format_call.m"
          {
#line 759 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
#line 759 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
#line 759 "format_call.m"
          }
#line 753 "format_call.m"
      }
#line 761 "format_call.m"
    else
#line 761 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_10)) == (MR_mktag((MR_Integer) 0))))
#line 762 "format_call.m"
        {
#line 762 "format_call.m"
          MR_Word check_hlds__simplify__format_call__CellVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 0)));
#line 762 "format_call.m"
          MR_Word check_hlds__simplify__format_call__ConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 1)));
#line 762 "format_call.m"
          MR_Word check_hlds__simplify__format_call__ArgVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 2)));
#line 762 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 3)));
#line 762 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 4)));
#line 762 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 5)));
#line 762 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 6)));

#line 763 "format_call.m"
          {
#line 763 "format_call.m"
            check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, check_hlds__simplify__format_call__CellVar_18);
          }
#line 834 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 771 "format_call.m"
            {
#line 771 "format_call.m"
              MR_String check_hlds__simplify__format_call__StringConst_25;

#line 765 "format_call.m"
              check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__ConsId_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 765 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 765 "format_call.m"
                {
#line 765 "format_call.m"
                  check_hlds__simplify__format_call__StringConst_25 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 1)));
#line 768 "format_call.m"
                  {
#line 768 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_55_55;

#line 767 "format_call.m"
                    {
#line 767 "format_call.m"
                      check_hlds__simplify__format_call__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 767 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_55_55, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_6[2]));
#line 767 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_55_55, 1) = ((MR_Box) (check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1));
#line 767 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 767 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_55_55, 3) = ((MR_Box) (check_hlds__simplify__format_call__ArgVars_20));
#line 767 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_55_55, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 767 "format_call.m"
                    }
#line 767 "format_call.m"
                    {
#line 767 "format_call.m"
                      mercury__require__expect_4_p_0(check_hlds__simplify__format_call__V_55_55, (MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "string constant with args");
                    }
#line 769 "format_call.m"
                    {
#line 769 "format_call.m"
                      parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54);
                    }
#line 770 "format_call.m"
                    {
#line 770 "format_call.m"
                      check_hlds__simplify__format_call__add_to_string_map_5_p_0(check_hlds__simplify__format_call__CurId_12, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__StringConst_25, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50);
                    }
#line 768 "format_call.m"
                  }
#line 765 "format_call.m"
                }
#line 765 "format_call.m"
              else
#line 796 "format_call.m"
                {
#line 796 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__SymName_26;
#line 796 "format_call.m"
                  MR_Integer check_hlds__simplify__format_call__Arity_27;
#line 772 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__TypeCtor_28;
#line 772 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_97_97;

#line 772 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__ConsId_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 772 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 772 "format_call.m"
                    {
#line 772 "format_call.m"
                      check_hlds__simplify__format_call__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 1)));
#line 772 "format_call.m"
                      check_hlds__simplify__format_call__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 2)));
#line 772 "format_call.m"
                      check_hlds__simplify__format_call__TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 3)));
#line 773 "format_call.m"
                      {
#line 773 "format_call.m"
                        check_hlds__simplify__format_call__V_97_97 = parse_tree__builtin_lib_types__list_type_ctor_0_f_0();
                      }
#line 773 "format_call.m"
                      {
#line 773 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__simplify__format_call__TypeCtor_28, check_hlds__simplify__format_call__V_97_97);
                      }
#line 772 "format_call.m"
                    }
#line 796 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 775 "format_call.m"
                    {
#line 775 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_95_95;
#line 775 "format_call.m"
                      MR_String check_hlds__simplify__format_call__Functor_29;
#line 775 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__List_33;
#line 775 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_67_67;
#line 790 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__ListPrime_32;

#line 775 "format_call.m"
                      {
#line 775 "format_call.m"
                        check_hlds__simplify__format_call__Functor_29 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__simplify__format_call__SymName_26);
                      }
#line 782 "format_call.m"
                      if ((check_hlds__simplify__format_call__ArgVars_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "format_call.m"
                        {
#line 783 "format_call.m"
                          check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Functor_29, (MR_String) "[]") == 0);
#line 783 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 783 "format_call.m"
                            {
#line 784 "format_call.m"
                              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Arity_27 == (MR_Integer) 0);
#line 783 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 783 "format_call.m"
                                {
#line 786 "format_call.m"
                                  check_hlds__simplify__format_call__ListPrime_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 786 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 783 "format_call.m"
                                }
#line 783 "format_call.m"
                            }
#line 783 "format_call.m"
                        }
#line 782 "format_call.m"
                      else
#line 778 "format_call.m"
                        {
#line 778 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__ArgVar1_30;
#line 778 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__ArgVar2_31;
#line 778 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__V_62_62;
#line 778 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__V_63_63;

#line 778 "format_call.m"
                          check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Functor_29, (MR_String) "[|]") == 0);
#line 778 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 778 "format_call.m"
                            {
#line 779 "format_call.m"
                              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Arity_27 == (MR_Integer) 2);
#line 778 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 778 "format_call.m"
                                {
#line 780 "format_call.m"
                                  check_hlds__simplify__format_call__ArgVar1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_20, (MR_Integer) 0)));
#line 780 "format_call.m"
                                  check_hlds__simplify__format_call__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_20, (MR_Integer) 1)));
#line 780 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 780 "format_call.m"
                                  if (check_hlds__simplify__format_call__succeeded)
#line 780 "format_call.m"
                                    {
#line 780 "format_call.m"
                                      check_hlds__simplify__format_call__ArgVar2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_62_62, (MR_Integer) 0)));
#line 780 "format_call.m"
                                      check_hlds__simplify__format_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_62_62, (MR_Integer) 1)));
#line 780 "format_call.m"
                                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "format_call.m"
                                      if (check_hlds__simplify__format_call__succeeded)
#line 778 "format_call.m"
                                        {
#line 781 "format_call.m"
                                          {
#line 781 "format_call.m"
                                            check_hlds__simplify__format_call__ListPrime_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "format_call.m"
                                            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListPrime_32, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar1_30));
#line 781 "format_call.m"
                                            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListPrime_32, 1) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar2_31));
#line 781 "format_call.m"
                                          }
#line 781 "format_call.m"
                                          check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 778 "format_call.m"
                                        }
#line 780 "format_call.m"
                                    }
#line 778 "format_call.m"
                                }
#line 778 "format_call.m"
                            }
#line 778 "format_call.m"
                        }
#line 790 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 789 "format_call.m"
                        check_hlds__simplify__format_call__List_33 = check_hlds__simplify__format_call__ListPrime_32;
#line 790 "format_call.m"
                      else
#line 791 "format_call.m"
                        {
#line 791 "format_call.m"
                          {
#line 791 "format_call.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "unexpected list functor");
#line 791 "format_call.m"
                            return;
                          }
#line 791 "format_call.m"
                        }
#line 11958 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__TypeCtorInfo_95_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 793 "format_call.m"
                      {
#line 793 "format_call.m"
                        parse_tree__set_of_var__delete_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_95_95, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_67_67);
                      }
#line 794 "format_call.m"
                      {
#line 794 "format_call.m"
                        parse_tree__set_of_var__insert_list_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_95_95, check_hlds__simplify__format_call__ArgVars_20, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_67_67, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54);
                      }
#line 795 "format_call.m"
                      {
#line 795 "format_call.m"
                        check_hlds__simplify__format_call__add_to_list_map_5_p_0(check_hlds__simplify__format_call__CurId_12, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__List_33, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50);
                      }
#line 775 "format_call.m"
                    }
#line 796 "format_call.m"
                  else
#line 831 "format_call.m"
                    {
#line 831 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__SymName_86;
#line 831 "format_call.m"
                      MR_Integer check_hlds__simplify__format_call__Arity_87;
#line 797 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TypeCtor_82;
#line 797 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_98_98;

#line 797 "format_call.m"
                      check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__ConsId_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 797 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 797 "format_call.m"
                        {
#line 797 "format_call.m"
                          check_hlds__simplify__format_call__SymName_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 1)));
#line 797 "format_call.m"
                          check_hlds__simplify__format_call__Arity_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 2)));
#line 797 "format_call.m"
                          check_hlds__simplify__format_call__TypeCtor_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 3)));
#line 798 "format_call.m"
                          {
#line 798 "format_call.m"
                            check_hlds__simplify__format_call__V_98_98 = parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0();
                          }
#line 798 "format_call.m"
                          {
#line 798 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__simplify__format_call__TypeCtor_82, check_hlds__simplify__format_call__V_98_98);
                          }
#line 797 "format_call.m"
                        }
#line 831 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 828 "format_call.m"
                        {
#line 828 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__VarPolyType_37;
#line 826 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__ArgVar_34;
#line 801 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__V_70_70;

#line 801 "format_call.m"
                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Arity_87 == (MR_Integer) 1);
#line 801 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 801 "format_call.m"
                            {
#line 802 "format_call.m"
                              check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__ArgVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 802 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 802 "format_call.m"
                                {
#line 802 "format_call.m"
                                  check_hlds__simplify__format_call__ArgVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_20, (MR_Integer) 0)));
#line 802 "format_call.m"
                                  check_hlds__simplify__format_call__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_20, (MR_Integer) 1)));
#line 802 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "format_call.m"
                                }
#line 801 "format_call.m"
                            }
#line 826 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 804 "format_call.m"
                            {
#line 804 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__Context_35;
#line 804 "format_call.m"
                              MR_String check_hlds__simplify__format_call__Functor_83;
#line 822 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__VarPolyTypePrime_36;

#line 804 "format_call.m"
                              {
#line 804 "format_call.m"
                                check_hlds__simplify__format_call__Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                              }
#line 805 "format_call.m"
                              {
#line 805 "format_call.m"
                                check_hlds__simplify__format_call__Functor_83 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__simplify__format_call__SymName_86);
                              }
#line 810 "format_call.m"
                              if ((strcmp(check_hlds__simplify__format_call__Functor_83, (MR_String) "c") == 0))
#line 818 "format_call.m"
                                {
#line 818 "format_call.m"
                                  {
#line 818 "format_call.m"
                                    check_hlds__simplify__format_call__VarPolyTypePrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "format_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__VarPolyTypePrime_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar_34));
#line 818 "format_call.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__VarPolyTypePrime_36, 1) = ((MR_Box) (check_hlds__simplify__format_call__Context_35));
#line 818 "format_call.m"
                                  }
#line 818 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 818 "format_call.m"
                                }
#line 810 "format_call.m"
                              else
#line 810 "format_call.m"
                                if ((strcmp(check_hlds__simplify__format_call__Functor_83, (MR_String) "f") == 0))
#line 809 "format_call.m"
                                  {
#line 809 "format_call.m"
                                    {
#line 809 "format_call.m"
                                      check_hlds__simplify__format_call__VarPolyTypePrime_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 809 "format_call.m"
                                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__VarPolyTypePrime_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar_34));
#line 809 "format_call.m"
                                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__VarPolyTypePrime_36, 1) = ((MR_Box) (check_hlds__simplify__format_call__Context_35));
#line 809 "format_call.m"
                                    }
#line 809 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 809 "format_call.m"
                                  }
#line 810 "format_call.m"
                                else
#line 810 "format_call.m"
                                  if ((strcmp(check_hlds__simplify__format_call__Functor_83, (MR_String) "i") == 0))
#line 812 "format_call.m"
                                    {
#line 812 "format_call.m"
                                      {
#line 812 "format_call.m"
                                        check_hlds__simplify__format_call__VarPolyTypePrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "format_call.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__VarPolyTypePrime_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar_34));
#line 812 "format_call.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__VarPolyTypePrime_36, 1) = ((MR_Box) (check_hlds__simplify__format_call__Context_35));
#line 812 "format_call.m"
                                      }
#line 812 "format_call.m"
                                      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 812 "format_call.m"
                                    }
#line 810 "format_call.m"
                                  else
#line 810 "format_call.m"
                                    if ((strcmp(check_hlds__simplify__format_call__Functor_83, (MR_String) "s") == 0))
#line 815 "format_call.m"
                                      {
#line 815 "format_call.m"
                                        {
#line 815 "format_call.m"
                                          check_hlds__simplify__format_call__VarPolyTypePrime_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "format_call.m"
                                          MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__VarPolyTypePrime_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar_34));
#line 815 "format_call.m"
                                          MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__VarPolyTypePrime_36, 1) = ((MR_Box) (check_hlds__simplify__format_call__Context_35));
#line 815 "format_call.m"
                                        }
#line 815 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 815 "format_call.m"
                                      }
#line 810 "format_call.m"
                                    else
#line 810 "format_call.m"
                                      check_hlds__simplify__format_call__succeeded = MR_FALSE;
#line 822 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 821 "format_call.m"
                                check_hlds__simplify__format_call__VarPolyType_37 = check_hlds__simplify__format_call__VarPolyTypePrime_36;
#line 822 "format_call.m"
                              else
#line 823 "format_call.m"
                                {
#line 823 "format_call.m"
                                  {
#line 823 "format_call.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "unexpected poly_type functor");
#line 823 "format_call.m"
                                    return;
                                  }
#line 823 "format_call.m"
                                }
#line 804 "format_call.m"
                            }
#line 826 "format_call.m"
                          else
#line 827 "format_call.m"
                            {
#line 827 "format_call.m"
                              {
#line 827 "format_call.m"
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "poly_type arity mismatch");
#line 827 "format_call.m"
                                return;
                              }
#line 827 "format_call.m"
                            }
#line 829 "format_call.m"
                          {
#line 829 "format_call.m"
                            parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54);
                          }
#line 830 "format_call.m"
                          {
#line 830 "format_call.m"
                            check_hlds__simplify__format_call__add_to_element_map_5_p_0(check_hlds__simplify__format_call__CurId_12, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__VarPolyType_37, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50);
                          }
#line 828 "format_call.m"
                        }
#line 831 "format_call.m"
                      else
#line 832 "format_call.m"
                        {
#line 832 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
#line 832 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
#line 832 "format_call.m"
                        }
#line 831 "format_call.m"
                    }
#line 796 "format_call.m"
                }
#line 771 "format_call.m"
            }
#line 834 "format_call.m"
          else
#line 835 "format_call.m"
            {
#line 835 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
#line 835 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
#line 835 "format_call.m"
            }
#line 762 "format_call.m"
        }
#line 761 "format_call.m"
      else
#line 761 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_10)) == (MR_mktag((MR_Integer) 1))))
#line 838 "format_call.m"
          {
#line 838 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
#line 838 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
#line 838 "format_call.m"
          }
#line 761 "format_call.m"
        else
#line 761 "format_call.m"
          if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 840 "format_call.m"
            {
#line 840 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
#line 840 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
#line 840 "format_call.m"
            }
#line 761 "format_call.m"
          else
#line 839 "format_call.m"
            {
#line 839 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
#line 839 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
#line 839 "format_call.m"
            }
#line 840 "format_call.m"
    *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_51;
#line 751 "format_call.m"
  }
#line 746 "format_call.m"
}

#line 645 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
#line 645 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 645 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1)
#line 645 "format_call.m"
{
#line 645 "format_call.m"
  {
#line 645 "format_call.m"
    MR_Box check_hlds__simplify__format_call__wrapper_arg_2;
#line 645 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 645 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv0_Goal_5;

#line 645 "format_call.m"
    {
#line 645 "format_call.m"
      check_hlds__simplify__format_call__conv0_Goal_5 = check_hlds__simplify__format_call__project_case_goal_1_f_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1));
    }
#line 645 "format_call.m"
    check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv0_Goal_5));
#line 645 "format_call.m"
    return check_hlds__simplify__format_call__wrapper_arg_2;
#line 645 "format_call.m"
  }
#line 645 "format_call.m"
}

#line 622 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(
#line 622 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 622 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 622 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3,
#line 622 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4,
#line 622 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5,
#line 622 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6,
#line 622 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7,
#line 622 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8,
#line 622 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9,
#line 622 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10,
#line 622 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11,
#line 622 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12,
#line 622 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13)
#line 622 "format_call.m"
{
#line 628 "format_call.m"
  while (MR_TRUE)
#line 628 "format_call.m"
    {
#line 628 "format_call.m"
      /* tailcall optimized into a loop */
#line 628 "format_call.m"
      {
#line 628 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;

#line 628 "format_call.m"
        if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "format_call.m"
          {
#line 629 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12;
#line 629 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10;
#line 629 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8;
#line 629 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6;
#line 628 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4;
#line 628 "format_call.m"
          }
#line 628 "format_call.m"
        else
#line 631 "format_call.m"
          {
#line 631 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Goal_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 631 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 631 "format_call.m"
            MR_Word check_hlds__simplify__format_call__GoalExpr_40;
#line 631 "format_call.m"
            MR_Word check_hlds__simplify__format_call__GoalInfo_41;
#line 631 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 631 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 631 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 631 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 631 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;

#line 632 "format_call.m"
            {
#line 632 "format_call.m"
              check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Goals_33, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4, &check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133);
            }
#line 634 "format_call.m"
            check_hlds__simplify__format_call__GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_32, (MR_Integer) 0)));
#line 634 "format_call.m"
            check_hlds__simplify__format_call__GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_32, (MR_Integer) 1)));
#line 639 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 0))))
#line 662 "format_call.m"
              {
#line 662 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_221_221;
#line 662 "format_call.m"
                MR_Word check_hlds__simplify__format_call__SubGoal_56 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__format_call__GoalExpr_40), (MR_Integer) 0);
#line 662 "format_call.m"
                MR_Word check_hlds__simplify__format_call__SubGoalId_57;
#line 662 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_174_174;

#line 663 "format_call.m"
                {
#line 663 "format_call.m"
                  check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__SubGoal_56, &check_hlds__simplify__format_call__SubGoalId_57, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_174_174, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                }
#line 12403 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeCtorInfo_221_221 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 665 "format_call.m"
                {
#line 665 "format_call.m"
                  mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_221_221, check_hlds__simplify__format_call__TypeCtorInfo_221_221, ((MR_Box) (check_hlds__simplify__format_call__SubGoalId_57)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_174_174, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
#line 665 "format_call.m"
                  return;
                }
#line 662 "format_call.m"
              }
#line 639 "format_call.m"
            else
#line 639 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 2))))
#line 691 "format_call.m"
                {
#line 691 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__PredId_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)));
#line 691 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 691 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__PredInfo_78;
#line 691 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__ModuleName_79;
#line 691 "format_call.m"
                  MR_String check_hlds__simplify__format_call__Name_80;
#line 691 "format_call.m"
                  MR_Integer check_hlds__simplify__format_call___ProcId_73 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 691 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 691 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 4)));
#line 691 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 5)));
#line 706 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__Kind_81;
#line 706 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__StringVar_82;
#line 706 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__ValuesVar_83;

#line 692 "format_call.m"
                  {
#line 692 "format_call.m"
                    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__PredId_72, &check_hlds__simplify__format_call__PredInfo_78);
                  }
#line 693 "format_call.m"
                  {
#line 693 "format_call.m"
                    check_hlds__simplify__format_call__ModuleName_79 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__format_call__PredInfo_78);
                  }
#line 694 "format_call.m"
                  {
#line 694 "format_call.m"
                    check_hlds__simplify__format_call__Name_80 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__format_call__PredInfo_78);
                  }
#line 696 "format_call.m"
                  {
#line 696 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__is_format_call_kind_and_vars_7_p_0(check_hlds__simplify__format_call__ModuleName_79, check_hlds__simplify__format_call__Name_80, check_hlds__simplify__format_call__Args_74, check_hlds__simplify__format_call__GoalInfo_41, &check_hlds__simplify__format_call__Kind_81, &check_hlds__simplify__format_call__StringVar_82, &check_hlds__simplify__format_call__ValuesVar_83);
                  }
#line 706 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 699 "format_call.m"
                    {
#line 699 "format_call.m"
                      MR_Integer check_hlds__simplify__format_call__Arity_84;
#line 699 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__GoalId_85;
#line 699 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Context_86;
#line 699 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__FormatCallSite_87;
#line 699 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_159_159;
#line 699 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_161_161;

#line 699 "format_call.m"
                      {
#line 699 "format_call.m"
                        check_hlds__simplify__format_call__Arity_84 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__simplify__format_call__PredInfo_78);
                      }
#line 700 "format_call.m"
                      {
#line 700 "format_call.m"
                        check_hlds__simplify__format_call__GoalId_85 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__simplify__format_call__GoalInfo_41);
                      }
#line 701 "format_call.m"
                      {
#line 701 "format_call.m"
                        check_hlds__simplify__format_call__Context_86 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_41);
                      }
#line 702 "format_call.m"
                      {
#line 702 "format_call.m"
                        check_hlds__simplify__format_call__FormatCallSite_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 702 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalId_85));
#line 702 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 1) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_82));
#line 702 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 2) = ((MR_Box) (check_hlds__simplify__format_call__ValuesVar_83));
#line 702 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 3) = ((MR_Box) (check_hlds__simplify__format_call__Kind_81));
#line 702 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 4) = ((MR_Box) (check_hlds__simplify__format_call__ModuleName_79));
#line 702 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 5) = ((MR_Box) (check_hlds__simplify__format_call__Name_80));
#line 702 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 6) = ((MR_Box) (check_hlds__simplify__format_call__Arity_84));
#line 702 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 7) = ((MR_Box) (check_hlds__simplify__format_call__Context_86));
#line 702 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 8) = ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3));
#line 702 "format_call.m"
                      }
#line 704 "format_call.m"
                      {
#line 704 "format_call.m"
                        MR_Word base;
#line 704 "format_call.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = base;
#line 704 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__FormatCallSite_87));
#line 704 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129));
#line 704 "format_call.m"
                      }
#line 705 "format_call.m"
                      {
#line 705 "format_call.m"
                        check_hlds__simplify__format_call__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_161_161, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValuesVar_83));
#line 705 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "format_call.m"
                      }
#line 705 "format_call.m"
                      {
#line 705 "format_call.m"
                        check_hlds__simplify__format_call__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_159_159, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_82));
#line 705 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_159_159, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_161_161));
#line 705 "format_call.m"
                      }
#line 705 "format_call.m"
                      {
#line 705 "format_call.m"
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__V_159_159, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                      }
#line 699 "format_call.m"
                    }
#line 706 "format_call.m"
                  else
#line 707 "format_call.m"
                    {
#line 707 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 707 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 707 "format_call.m"
                    }
#line 707 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 707 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 707 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 691 "format_call.m"
                }
#line 639 "format_call.m"
              else
#line 639 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 1))))
#line 710 "format_call.m"
                  {
#line 710 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__RHS_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 710 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__Unification_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 710 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149;
#line 710 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150;
#line 710 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151;
#line 710 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)));
#line 710 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 710 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 4)));

#line 711 "format_call.m"
                    {
#line 711 "format_call.m"
                      check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0(check_hlds__simplify__format_call__Unification_91, check_hlds__simplify__format_call__GoalInfo_41, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151);
                    }
#line 721 "format_call.m"
                    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__RHS_89)) == (MR_mktag((MR_Integer) 1))))
#line 723 "format_call.m"
                      {
#line 723 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 723 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 723 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149;
#line 723 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150;
#line 723 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151;
#line 723 "format_call.m"
                      }
#line 721 "format_call.m"
                    else
#line 721 "format_call.m"
                      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__RHS_89)) == (MR_mktag((MR_Integer) 2))))
#line 716 "format_call.m"
                        {
#line 716 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__TypeCtorInfo_224_224;
#line 716 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__LambdaGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 6)));
#line 716 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__LambdaGoalId_102;
#line 716 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155;
#line 714 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___Purity_93 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 714 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___HOGroundness_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 714 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___PredFunc_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 714 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___LambdaNonLocals_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 2)));
#line 714 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___LambdaQuantVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 3)));
#line 714 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___LambdaModes_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 4)));
#line 714 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___LambdaDetism_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 5)));

#line 717 "format_call.m"
                          {
#line 717 "format_call.m"
                            check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__LambdaGoal_101, &check_hlds__simplify__format_call__LambdaGoalId_102, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                          }
#line 12658 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__TypeCtorInfo_224_224 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 720 "format_call.m"
                          {
#line 720 "format_call.m"
                            mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_224_224, check_hlds__simplify__format_call__TypeCtorInfo_224_224, ((MR_Box) (check_hlds__simplify__format_call__LambdaGoalId_102)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
#line 720 "format_call.m"
                            return;
                          }
#line 716 "format_call.m"
                        }
#line 721 "format_call.m"
                      else
#line 722 "format_call.m"
                        {
#line 722 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 722 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 722 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149;
#line 722 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150;
#line 722 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151;
#line 722 "format_call.m"
                        }
#line 710 "format_call.m"
                  }
#line 639 "format_call.m"
                else
#line 639 "format_call.m"
                  if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 689 "format_call.m"
                    {
#line 689 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 689 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 689 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 689 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 689 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 689 "format_call.m"
                    }
#line 639 "format_call.m"
                  else
#line 639 "format_call.m"
                    if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 636 "format_call.m"
                      {
#line 636 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__Conjuncts_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 636 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 637 "format_call.m"
                        /* direct tailcall eliminated */
#line 637 "format_call.m"
                        {
#line 637 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__format_call__Conjuncts_43;
#line 637 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 637 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 637 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 637 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 637 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;

#line 637 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12;
#line 637 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10;
#line 637 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8;
#line 637 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6;
#line 637 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4;
#line 637 "format_call.m"
                          check_hlds__simplify__format_call__HeadVar__2_2 = check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2;
#line 637 "format_call.m"
                        }
#line 637 "format_call.m"
                        continue;
#line 636 "format_call.m"
                      }
#line 639 "format_call.m"
                    else
#line 639 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 640 "format_call.m"
                        {
#line 640 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__Disjuncts_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 641 "format_call.m"
                          {
#line 641 "format_call.m"
                            check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Disjuncts_44, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
#line 641 "format_call.m"
                            return;
                          }
#line 640 "format_call.m"
                        }
#line 639 "format_call.m"
                      else
#line 639 "format_call.m"
                        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 687 "format_call.m"
                          {
#line 687 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 687 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 687 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 687 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 687 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 687 "format_call.m"
                          }
#line 639 "format_call.m"
                        else
#line 639 "format_call.m"
                          if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 649 "format_call.m"
                            {
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_219_219;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__Then_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__Else_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 4)));
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ElseId_52;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__CondThenId_53;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ThenConj_54;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__CondConj_55;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_177_177;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_178_178;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_179_179;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_180_180;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_181_181;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_182_182;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_183_183;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_184_184;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_188_188;
#line 649 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 651 "format_call.m"
                              {
#line 651 "format_call.m"
                                check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Else_51, &check_hlds__simplify__format_call__ElseId_52, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, &check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_177_177, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_178_178, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_179_179, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_180_180, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_181_181);
                              }
#line 12835 "check_hlds.simplify.format_call.c"
                              check_hlds__simplify__format_call__TypeCtorInfo_219_219 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 653 "format_call.m"
                              {
#line 653 "format_call.m"
                                mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_219_219, check_hlds__simplify__format_call__TypeCtorInfo_219_219, ((MR_Box) (check_hlds__simplify__format_call__ElseId_52)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_180_180, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_182_182);
                              }
#line 655 "format_call.m"
                              {
#line 655 "format_call.m"
                                check_hlds__simplify__format_call__alloc_id_3_p_0(&check_hlds__simplify__format_call__CondThenId_53, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_178_178, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_183_183);
                              }
#line 656 "format_call.m"
                              {
#line 656 "format_call.m"
                                hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Then_50, &check_hlds__simplify__format_call__ThenConj_54);
                              }
#line 657 "format_call.m"
                              {
#line 657 "format_call.m"
                                hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Cond_49, &check_hlds__simplify__format_call__CondConj_55);
                              }
#line 658 "format_call.m"
                              {
#line 658 "format_call.m"
                                check_hlds__simplify__format_call__V_184_184 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__CondConj_55, check_hlds__simplify__format_call__ThenConj_54);
                              }
#line 658 "format_call.m"
                              {
#line 658 "format_call.m"
                                check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_184_184, check_hlds__simplify__format_call__CondThenId_53, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_177_177, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_183_183, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_179_179, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_182_182, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_188_188, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_181_181, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                              }
#line 660 "format_call.m"
                              {
#line 660 "format_call.m"
                                mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_219_219, check_hlds__simplify__format_call__TypeCtorInfo_219_219, ((MR_Box) (check_hlds__simplify__format_call__CondThenId_53)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_188_188, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
#line 660 "format_call.m"
                                return;
                              }
#line 649 "format_call.m"
                            }
#line 639 "format_call.m"
                          else
#line 639 "format_call.m"
                            if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 667 "format_call.m"
                              {
#line 667 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 667 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__SubGoal_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 669 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_222_222;
#line 669 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__TermVar_59;
#line 669 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__V_163_163;

#line 669 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 669 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 669 "format_call.m"
                                  {
#line 669 "format_call.m"
                                    check_hlds__simplify__format_call__TermVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_58, (MR_Integer) 1)));
#line 669 "format_call.m"
                                    check_hlds__simplify__format_call__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_58, (MR_Integer) 2)));
#line 669 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_163_163 == (MR_Integer) 1);
#line 669 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 669 "format_call.m"
                                      {
#line 12909 "check_hlds.simplify.format_call.c"
                                        check_hlds__simplify__format_call__TypeCtorInfo_222_222 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 676 "format_call.m"
                                        {
#line 676 "format_call.m"
                                          check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_222_222, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__TermVar_59);
                                        }
#line 669 "format_call.m"
                                      }
#line 669 "format_call.m"
                                  }
#line 680 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
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
#line 680 "format_call.m"
                                else
#line 684 "format_call.m"
                                  {
#line 684 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 684 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 684 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 684 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 684 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 684 "format_call.m"
                                  }
#line 667 "format_call.m"
                              }
#line 639 "format_call.m"
                            else
#line 639 "format_call.m"
                              if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 727 "format_call.m"
                                {
#line 727 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__ShortHand_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 733 "format_call.m"
                                  if (((MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand_107)) == (MR_mktag((MR_Integer) 1))))
#line 729 "format_call.m"
                                    {
#line 729 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__MainGoal_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 4)));
#line 729 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__OrElseGoals_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 5)));
#line 729 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_143_143;
#line 729 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 0)));
#line 729 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 1)));
#line 729 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 2)));
#line 729 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 3)));
#line 729 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 6)));

#line 730 "format_call.m"
                                      {
#line 730 "format_call.m"
                                        check_hlds__simplify__format_call__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "format_call.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_143_143, 0) = ((MR_Box) (check_hlds__simplify__format_call__MainGoal_112));
#line 730 "format_call.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_143_143, 1) = ((MR_Box) (check_hlds__simplify__format_call__OrElseGoals_113));
#line 730 "format_call.m"
                                      }
#line 730 "format_call.m"
                                      {
#line 730 "format_call.m"
                                        check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_143_143, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
#line 730 "format_call.m"
                                        return;
                                      }
#line 729 "format_call.m"
                                    }
#line 733 "format_call.m"
                                  else
#line 733 "format_call.m"
                                    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand_107)) == (MR_mktag((MR_Integer) 0))))
#line 740 "format_call.m"
                                      {
#line 742 "format_call.m"
                                        {
#line 742 "format_call.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_conj\'/13", (MR_String) "bi_implication");
#line 742 "format_call.m"
                                          return;
                                        }
#line 740 "format_call.m"
                                      }
#line 733 "format_call.m"
                                    else
#line 734 "format_call.m"
                                      {
#line 734 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_225_225;
#line 734 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_140_140;
#line 734 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__SubGoal_209 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 2)));
#line 734 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__SubGoalId_210;
#line 734 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 0)));
#line 734 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 1)));

#line 735 "format_call.m"
                                        {
#line 735 "format_call.m"
                                          check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__SubGoal_209, &check_hlds__simplify__format_call__SubGoalId_210, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_140_140, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                                        }
#line 13076 "check_hlds.simplify.format_call.c"
                                        check_hlds__simplify__format_call__TypeCtorInfo_225_225 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 738 "format_call.m"
                                        {
#line 738 "format_call.m"
                                          mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_225_225, check_hlds__simplify__format_call__TypeCtorInfo_225_225, ((MR_Box) (check_hlds__simplify__format_call__SubGoalId_210)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_140_140, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
#line 738 "format_call.m"
                                          return;
                                        }
#line 734 "format_call.m"
                                      }
#line 727 "format_call.m"
                                }
#line 639 "format_call.m"
                              else
#line 644 "format_call.m"
                                {
#line 644 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__Cases_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 644 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__Disjuncts_207;
#line 644 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 644 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));

#line 645 "format_call.m"
                                  {
#line 645 "format_call.m"
                                    check_hlds__simplify__format_call__Disjuncts_207 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[8], check_hlds__simplify__format_call__Cases_47);
                                  }
#line 646 "format_call.m"
                                  {
#line 646 "format_call.m"
                                    check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Disjuncts_207, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
#line 646 "format_call.m"
                                    return;
                                  }
#line 644 "format_call.m"
                                }
#line 631 "format_call.m"
          }
#line 628 "format_call.m"
      }
#line 628 "format_call.m"
      break;
#line 628 "format_call.m"
    }
#line 622 "format_call.m"
}

#line 609 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(
#line 609 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 609 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Goal_15,
#line 609 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__CurId_16,
#line 609 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_23,
#line 609 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_24,
#line 609 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_25,
#line 609 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_26,
#line 609 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_27,
#line 609 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_28,
#line 609 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_29,
#line 609 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_30,
#line 609 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_31,
#line 609 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_32)
#line 609 "format_call.m"
{
#line 616 "format_call.m"
  {
#line 616 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 616 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalConj_22;
#line 616 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_33;
#line 616 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__N_43;

#line 883 "format_call.m"
    {
#line 883 "format_call.m"
      mercury__counter__allocate_3_p_0(&check_hlds__simplify__format_call__N_43, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_25, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_33);
    }
#line 884 "format_call.m"
    *check_hlds__simplify__format_call__CurId_16 = (MR_Word) check_hlds__simplify__format_call__N_43;
#line 618 "format_call.m"
    {
#line 618 "format_call.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Goal_15, &check_hlds__simplify__format_call__GoalConj_22);
    }
#line 619 "format_call.m"
    {
#line 619 "format_call.m"
      check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__GoalConj_22, *check_hlds__simplify__format_call__CurId_16, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_23, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_24, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_33, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_26, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_28, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_29, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_30, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_31, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_32);
#line 619 "format_call.m"
      return;
    }
#line 616 "format_call.m"
  }
#line 609 "format_call.m"
}

#line 601 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__project_all_yes_2_p_0(
#line 601 "format_call.m"
  MR_Word check_hlds__simplify__format_call__TypeInfo_for_T_7,
#line 601 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 601 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2)
#line 601 "format_call.m"
{
#line 603 "format_call.m"
  {
#line 603 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 603 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "format_call.m"
      {
#line 603 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 603 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 603 "format_call.m"
      }
#line 603 "format_call.m"
    else
#line 604 "format_call.m"
      {
#line 604 "format_call.m"
        MR_Box check_hlds__simplify__format_call__Value_3;
#line 604 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TailMaybes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Tail_5;
#line 604 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));

#line 604 "format_call.m"
        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 604 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 604 "format_call.m"
          {
#line 604 "format_call.m"
            check_hlds__simplify__format_call__Value_3 = (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_6_6, (MR_Integer) 0));
#line 605 "format_call.m"
            {
#line 605 "format_call.m"
              check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__project_all_yes_2_p_0(check_hlds__simplify__format_call__TypeInfo_for_T_7, check_hlds__simplify__format_call__TailMaybes_4, &check_hlds__simplify__format_call__Tail_5);
            }
#line 604 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 604 "format_call.m"
              {
#line 604 "format_call.m"
                {
#line 604 "format_call.m"
                  MR_Word base;
#line 604 "format_call.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "format_call.m"
                  *check_hlds__simplify__format_call__HeadVar__2_2 = base;
#line 604 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__simplify__format_call__Value_3;
#line 604 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Tail_5));
#line 604 "format_call.m"
                }
#line 604 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 604 "format_call.m"
              }
#line 604 "format_call.m"
          }
#line 604 "format_call.m"
      }
#line 603 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 603 "format_call.m"
  }
#line 601 "format_call.m"
}

#line 582 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__follow_list_value_5_p_0(
#line 582 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
#line 582 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_7,
#line 582 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_8,
#line 582 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PolytypeVar_9,
#line 582 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeAbstractPolyType_10)
#line 582 "format_call.m"
{
#line 586 "format_call.m"
  while (MR_TRUE)
#line 586 "format_call.m"
    {
#line 586 "format_call.m"
      /* tailcall optimized into a loop */
#line 586 "format_call.m"
      {
#line 586 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;
#line 586 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_11;
#line 586 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ElementMap_14;
#line 586 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
#line 588 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12;
#line 588 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_13_13;
#line 592 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvVar_16;
#line 589 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_19_19;
#line 589 "format_call.m"
        MR_Box check_hlds__simplify__format_call__conv0_EqvVar_16;

#line 587 "format_call.m"
        {
#line 587 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_11 = check_hlds__simplify__format_call__get_conj_map_2_f_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__CurId_8);
        }
#line 588 "format_call.m"
        check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 0)));
#line 588 "format_call.m"
        check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 1)));
#line 588 "format_call.m"
        check_hlds__simplify__format_call__ElementMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 2)));
#line 588 "format_call.m"
        check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 3)));
#line 13333 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_19_19 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 589 "format_call.m"
        {
#line 589 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__EqvMap_15, ((MR_Box) (check_hlds__simplify__format_call__PolytypeVar_9)), &check_hlds__simplify__format_call__conv0_EqvVar_16);
        }
#line 589 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 589 "format_call.m"
          {
#line 589 "format_call.m"
            check_hlds__simplify__format_call__EqvVar_16 = ((MR_Word) check_hlds__simplify__format_call__conv0_EqvVar_16);
#line 589 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 589 "format_call.m"
          }
#line 592 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 590 "format_call.m"
          {
#line 590 "format_call.m"
            /* direct tailcall eliminated */
#line 590 "format_call.m"
            {
#line 590 "format_call.m"
              MR_Word check_hlds__simplify__format_call__PolytypeVar__tmp_copy_9 = check_hlds__simplify__format_call__EqvVar_16;

#line 590 "format_call.m"
              check_hlds__simplify__format_call__PolytypeVar_9 = check_hlds__simplify__format_call__PolytypeVar__tmp_copy_9;
#line 590 "format_call.m"
            }
#line 590 "format_call.m"
            continue;
#line 590 "format_call.m"
          }
#line 592 "format_call.m"
        else
#line 594 "format_call.m"
          {
#line 594 "format_call.m"
            MR_Word check_hlds__simplify__format_call__AbstractPolyType_17;
#line 592 "format_call.m"
            MR_Box check_hlds__simplify__format_call__conv1_AbstractPolyType_17;

#line 592 "format_call.m"
            {
#line 592 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, check_hlds__simplify__format_call__ElementMap_14, ((MR_Box) (check_hlds__simplify__format_call__PolytypeVar_9)), &check_hlds__simplify__format_call__conv1_AbstractPolyType_17);
            }
#line 592 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 592 "format_call.m"
              {
#line 592 "format_call.m"
                check_hlds__simplify__format_call__AbstractPolyType_17 = ((MR_Word) check_hlds__simplify__format_call__conv1_AbstractPolyType_17);
#line 592 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 592 "format_call.m"
              }
#line 594 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 593 "format_call.m"
              {
#line 593 "format_call.m"
                MR_Word base;
#line 593 "format_call.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "format_call.m"
                *check_hlds__simplify__format_call__MaybeAbstractPolyType_10 = base;
#line 593 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__AbstractPolyType_17));
#line 593 "format_call.m"
              }
#line 594 "format_call.m"
            else
#line 597 "format_call.m"
              {
#line 597 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PredId_18;
#line 594 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 594 "format_call.m"
                MR_Box check_hlds__simplify__format_call__conv2_PredId_18;

#line 594 "format_call.m"
                {
#line 594 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__PredMap_7, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv2_PredId_18);
                }
#line 594 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 594 "format_call.m"
                  {
#line 594 "format_call.m"
                    check_hlds__simplify__format_call__PredId_18 = ((MR_Word) check_hlds__simplify__format_call__conv2_PredId_18);
#line 594 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 594 "format_call.m"
                  }
#line 597 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 595 "format_call.m"
                  {
#line 595 "format_call.m"
                    /* direct tailcall eliminated */
#line 595 "format_call.m"
                    {
#line 595 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__CurId__tmp_copy_8 = check_hlds__simplify__format_call__PredId_18;

#line 595 "format_call.m"
                      check_hlds__simplify__format_call__CurId_8 = check_hlds__simplify__format_call__CurId__tmp_copy_8;
#line 595 "format_call.m"
                    }
#line 595 "format_call.m"
                    continue;
#line 595 "format_call.m"
                  }
#line 597 "format_call.m"
                else
#line 598 "format_call.m"
                  *check_hlds__simplify__format_call__MaybeAbstractPolyType_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "format_call.m"
              }
#line 594 "format_call.m"
          }
#line 586 "format_call.m"
      }
#line 586 "format_call.m"
      break;
#line 586 "format_call.m"
    }
#line 582 "format_call.m"
}

#line 549 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(
#line 549 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
#line 549 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_7,
#line 549 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_8,
#line 549 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ListVar_9,
#line 549 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Result_10)
#line 549 "format_call.m"
{
#line 552 "format_call.m"
  while (MR_TRUE)
#line 552 "format_call.m"
    {
#line 552 "format_call.m"
      /* tailcall optimized into a loop */
#line 552 "format_call.m"
      {
#line 552 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;
#line 552 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_11;
#line 552 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ListMap_13;
#line 552 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
#line 554 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12;
#line 554 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_14_14;
#line 557 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvVar_16;
#line 555 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_29_29;
#line 555 "format_call.m"
        MR_Box check_hlds__simplify__format_call__conv0_EqvVar_16;

#line 553 "format_call.m"
        {
#line 553 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_11 = check_hlds__simplify__format_call__get_conj_map_2_f_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__CurId_8);
        }
#line 554 "format_call.m"
        check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 0)));
#line 554 "format_call.m"
        check_hlds__simplify__format_call__ListMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 1)));
#line 554 "format_call.m"
        check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 2)));
#line 554 "format_call.m"
        check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 3)));
#line 13524 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_29_29 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 555 "format_call.m"
        {
#line 555 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeInfo_29_29, check_hlds__simplify__format_call__TypeInfo_29_29, check_hlds__simplify__format_call__EqvMap_15, ((MR_Box) (check_hlds__simplify__format_call__ListVar_9)), &check_hlds__simplify__format_call__conv0_EqvVar_16);
        }
#line 555 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 555 "format_call.m"
          {
#line 555 "format_call.m"
            check_hlds__simplify__format_call__EqvVar_16 = ((MR_Word) check_hlds__simplify__format_call__conv0_EqvVar_16);
#line 555 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 555 "format_call.m"
          }
#line 557 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 556 "format_call.m"
          {
#line 556 "format_call.m"
            /* direct tailcall eliminated */
#line 556 "format_call.m"
            {
#line 556 "format_call.m"
              MR_Word check_hlds__simplify__format_call__ListVar__tmp_copy_9 = check_hlds__simplify__format_call__EqvVar_16;

#line 556 "format_call.m"
              check_hlds__simplify__format_call__ListVar_9 = check_hlds__simplify__format_call__ListVar__tmp_copy_9;
#line 556 "format_call.m"
            }
#line 556 "format_call.m"
            continue;
#line 556 "format_call.m"
          }
#line 557 "format_call.m"
        else
#line 576 "format_call.m"
          {
#line 576 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ListState_17;
#line 557 "format_call.m"
            MR_Box check_hlds__simplify__format_call__conv1_ListState_17;

#line 557 "format_call.m"
            {
#line 557 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0, check_hlds__simplify__format_call__ListMap_13, ((MR_Box) (check_hlds__simplify__format_call__ListVar_9)), &check_hlds__simplify__format_call__conv1_ListState_17);
            }
#line 557 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 557 "format_call.m"
              {
#line 557 "format_call.m"
                check_hlds__simplify__format_call__ListState_17 = ((MR_Word) check_hlds__simplify__format_call__conv1_ListState_17);
#line 557 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 557 "format_call.m"
              }
#line 576 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 561 "format_call.m"
              if ((check_hlds__simplify__format_call__ListState_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "format_call.m"
                {
#line 559 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_27_27;

#line 560 "format_call.m"
                  {
#line 560 "format_call.m"
                    check_hlds__simplify__format_call__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "format_call.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_27_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__ListVar_9));
#line 560 "format_call.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "format_call.m"
                  }
#line 560 "format_call.m"
                  {
#line 560 "format_call.m"
                    MR_Word base;
#line 560 "format_call.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "format_call.m"
                    *check_hlds__simplify__format_call__Result_10 = base;
#line 560 "format_call.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 560 "format_call.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_27_27));
#line 560 "format_call.m"
                  }
#line 559 "format_call.m"
                }
#line 561 "format_call.m"
              else
#line 562 "format_call.m"
                {
#line 562 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__HeadVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListState_17, (MR_Integer) 0)));
#line 562 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__TailVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListState_17, (MR_Integer) 1)));
#line 562 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__TailResult_20;

#line 563 "format_call.m"
                  {
#line 563 "format_call.m"
                    check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__PredMap_7, check_hlds__simplify__format_call__CurId_8, check_hlds__simplify__format_call__TailVar_19, &check_hlds__simplify__format_call__TailResult_20);
                  }
#line 568 "format_call.m"
                  if ((check_hlds__simplify__format_call__TailResult_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "format_call.m"
                    *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "format_call.m"
                  else
#line 570 "format_call.m"
                    {
#line 570 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TailPolytypeVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailResult_20, (MR_Integer) 0)));
#line 570 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TailSkeletonVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailResult_20, (MR_Integer) 1)));
#line 570 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__PolytypeVars_23;
#line 570 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__SkeletonVars_24;

#line 571 "format_call.m"
                      {
#line 571 "format_call.m"
                        check_hlds__simplify__format_call__PolytypeVars_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__PolytypeVars_23, 0) = ((MR_Box) (check_hlds__simplify__format_call__HeadVar_18));
#line 571 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__PolytypeVars_23, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailPolytypeVars_21));
#line 571 "format_call.m"
                      }
#line 572 "format_call.m"
                      {
#line 572 "format_call.m"
                        check_hlds__simplify__format_call__SkeletonVars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonVars_24, 0) = ((MR_Box) (check_hlds__simplify__format_call__TailVar_19));
#line 572 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonVars_24, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailSkeletonVars_22));
#line 572 "format_call.m"
                      }
#line 573 "format_call.m"
                      {
#line 573 "format_call.m"
                        MR_Word base;
#line 573 "format_call.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "format_call.m"
                        *check_hlds__simplify__format_call__Result_10 = base;
#line 573 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__PolytypeVars_23));
#line 573 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__SkeletonVars_24));
#line 573 "format_call.m"
                      }
#line 570 "format_call.m"
                    }
#line 562 "format_call.m"
                }
#line 576 "format_call.m"
            else
#line 578 "format_call.m"
              {
#line 578 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PredId_25;
#line 576 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_32_32 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 576 "format_call.m"
                MR_Box check_hlds__simplify__format_call__conv2_PredId_25;

#line 576 "format_call.m"
                {
#line 576 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_32_32, check_hlds__simplify__format_call__TypeCtorInfo_32_32, check_hlds__simplify__format_call__PredMap_7, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv2_PredId_25);
                }
#line 576 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 576 "format_call.m"
                  {
#line 576 "format_call.m"
                    check_hlds__simplify__format_call__PredId_25 = ((MR_Word) check_hlds__simplify__format_call__conv2_PredId_25);
#line 576 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 576 "format_call.m"
                  }
#line 578 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 577 "format_call.m"
                  {
#line 577 "format_call.m"
                    /* direct tailcall eliminated */
#line 577 "format_call.m"
                    {
#line 577 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__CurId__tmp_copy_8 = check_hlds__simplify__format_call__PredId_25;

#line 577 "format_call.m"
                      check_hlds__simplify__format_call__CurId_8 = check_hlds__simplify__format_call__CurId__tmp_copy_8;
#line 577 "format_call.m"
                    }
#line 577 "format_call.m"
                    continue;
#line 577 "format_call.m"
                  }
#line 578 "format_call.m"
                else
#line 579 "format_call.m"
                  *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "format_call.m"
              }
#line 576 "format_call.m"
          }
#line 552 "format_call.m"
      }
#line 552 "format_call.m"
      break;
#line 552 "format_call.m"
    }
#line 549 "format_call.m"
}

#line 526 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0(
#line 526 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
#line 526 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_7,
#line 526 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_8,
#line 526 "format_call.m"
  MR_Word check_hlds__simplify__format_call__StringVar_9,
#line 526 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeString_10)
#line 526 "format_call.m"
{
#line 529 "format_call.m"
  while (MR_TRUE)
#line 529 "format_call.m"
    {
#line 529 "format_call.m"
      /* tailcall optimized into a loop */
#line 529 "format_call.m"
      {
#line 529 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;
#line 529 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_11;
#line 529 "format_call.m"
        MR_Word check_hlds__simplify__format_call__StringMap_12;
#line 529 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
#line 531 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_13_13;
#line 531 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_14_14;
#line 534 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvVar_16;
#line 532 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_19_19;
#line 532 "format_call.m"
        MR_Box check_hlds__simplify__format_call__conv0_EqvVar_16;

#line 530 "format_call.m"
        {
#line 530 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_11 = check_hlds__simplify__format_call__get_conj_map_2_f_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__CurId_8);
        }
#line 531 "format_call.m"
        check_hlds__simplify__format_call__StringMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 0)));
#line 531 "format_call.m"
        check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 1)));
#line 531 "format_call.m"
        check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 2)));
#line 531 "format_call.m"
        check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 3)));
#line 13807 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_19_19 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 532 "format_call.m"
        {
#line 532 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__EqvMap_15, ((MR_Box) (check_hlds__simplify__format_call__StringVar_9)), &check_hlds__simplify__format_call__conv0_EqvVar_16);
        }
#line 532 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 532 "format_call.m"
          {
#line 532 "format_call.m"
            check_hlds__simplify__format_call__EqvVar_16 = ((MR_Word) check_hlds__simplify__format_call__conv0_EqvVar_16);
#line 532 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 532 "format_call.m"
          }
#line 534 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 533 "format_call.m"
          {
#line 533 "format_call.m"
            /* direct tailcall eliminated */
#line 533 "format_call.m"
            {
#line 533 "format_call.m"
              MR_Word check_hlds__simplify__format_call__StringVar__tmp_copy_9 = check_hlds__simplify__format_call__EqvVar_16;

#line 533 "format_call.m"
              check_hlds__simplify__format_call__StringVar_9 = check_hlds__simplify__format_call__StringVar__tmp_copy_9;
#line 533 "format_call.m"
            }
#line 533 "format_call.m"
            continue;
#line 533 "format_call.m"
          }
#line 534 "format_call.m"
        else
#line 536 "format_call.m"
          {
#line 536 "format_call.m"
            MR_String check_hlds__simplify__format_call__String_17;
#line 534 "format_call.m"
            MR_Box check_hlds__simplify__format_call__conv1_String_17;

#line 534 "format_call.m"
            {
#line 534 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__simplify__format_call__StringMap_12, ((MR_Box) (check_hlds__simplify__format_call__StringVar_9)), &check_hlds__simplify__format_call__conv1_String_17);
            }
#line 534 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 534 "format_call.m"
              {
#line 534 "format_call.m"
                check_hlds__simplify__format_call__String_17 = ((MR_String) check_hlds__simplify__format_call__conv1_String_17);
#line 534 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 534 "format_call.m"
              }
#line 536 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 535 "format_call.m"
              {
#line 535 "format_call.m"
                MR_Word base;
#line 535 "format_call.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 535 "format_call.m"
                *check_hlds__simplify__format_call__MaybeString_10 = base;
#line 535 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__String_17));
#line 535 "format_call.m"
              }
#line 536 "format_call.m"
            else
#line 538 "format_call.m"
              {
#line 538 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PredId_18;
#line 536 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 536 "format_call.m"
                MR_Box check_hlds__simplify__format_call__conv2_PredId_18;

#line 536 "format_call.m"
                {
#line 536 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__PredMap_7, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv2_PredId_18);
                }
#line 536 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 536 "format_call.m"
                  {
#line 536 "format_call.m"
                    check_hlds__simplify__format_call__PredId_18 = ((MR_Word) check_hlds__simplify__format_call__conv2_PredId_18);
#line 536 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 536 "format_call.m"
                  }
#line 538 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 537 "format_call.m"
                  {
#line 537 "format_call.m"
                    /* direct tailcall eliminated */
#line 537 "format_call.m"
                    {
#line 537 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__CurId__tmp_copy_8 = check_hlds__simplify__format_call__PredId_18;

#line 537 "format_call.m"
                      check_hlds__simplify__format_call__CurId_8 = check_hlds__simplify__format_call__CurId__tmp_copy_8;
#line 537 "format_call.m"
                    }
#line 537 "format_call.m"
                    continue;
#line 537 "format_call.m"
                  }
#line 538 "format_call.m"
                else
#line 539 "format_call.m"
                  *check_hlds__simplify__format_call__MaybeString_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 538 "format_call.m"
              }
#line 536 "format_call.m"
          }
#line 529 "format_call.m"
      }
#line 529 "format_call.m"
      break;
#line 529 "format_call.m"
    }
#line 526 "format_call.m"
}

#line 521 "format_call.m"
MR_Word MR_CALL 
check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(
#line 521 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Error_3)
#line 521 "format_call.m"
{
#line 523 "format_call.m"
  {
#line 523 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 523 "format_call.m"
    MR_Word check_hlds__simplify__format_call__HeadVar__2_2;
#line 523 "format_call.m"
    MR_String check_hlds__simplify__format_call__V_4_4;

#line 524 "format_call.m"
    {
#line 524 "format_call.m"
      check_hlds__simplify__format_call__V_4_4 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(check_hlds__simplify__format_call__Error_3);
    }
#line 524 "format_call.m"
    {
#line 524 "format_call.m"
      check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 524 "format_call.m"
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_4_4));
#line 524 "format_call.m"
    }
#line 523 "format_call.m"
    return check_hlds__simplify__format_call__HeadVar__2_2;
#line 523 "format_call.m"
  }
#line 521 "format_call.m"
}

#line 497 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_2(
#line 497 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 497 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1)
#line 497 "format_call.m"
{
#line 497 "format_call.m"
  {
#line 497 "format_call.m"
    MR_Box check_hlds__simplify__format_call__wrapper_arg_2;
#line 497 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 497 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv1_HeadVar__2_2;

#line 497 "format_call.m"
    {
#line 497 "format_call.m"
      check_hlds__simplify__format_call__conv1_HeadVar__2_2 = check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1));
    }
#line 497 "format_call.m"
    check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv1_HeadVar__2_2));
#line 497 "format_call.m"
    return check_hlds__simplify__format_call__wrapper_arg_2;
#line 497 "format_call.m"
  }
#line 497 "format_call.m"
}

#line 444 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_1(
#line 444 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 444 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 444 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_2)
#line 444 "format_call.m"
{
#line 444 "format_call.m"
  {
#line 444 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 444 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv0_MaybeAbstractPolyType_10;

#line 444 "format_call.m"
    {
#line 444 "format_call.m"
      check_hlds__simplify__format_call__follow_list_value_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), &check_hlds__simplify__format_call__conv0_MaybeAbstractPolyType_10);
    }
#line 444 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv0_MaybeAbstractPolyType_10));
#line 444 "format_call.m"
  }
#line 444 "format_call.m"
}

#line 403 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0(
#line 403 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 403 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ShouldOptFormatCalls_15,
#line 403 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_16,
#line 403 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_17,
#line 403 "format_call.m"
  MR_Word check_hlds__simplify__format_call__FormatCallSite_18,
#line 403 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_65,
#line 403 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_66,
#line 403 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_67,
#line 403 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Specs_68,
#line 403 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_69,
#line 403 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_70,
#line 403 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_71,
#line 403 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_72)
#line 403 "format_call.m"
{
#line 410 "format_call.m"
  {
#line 410 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 0)));
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__StringVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 1)));
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ValuesVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 2)));
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__CallKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 3)));
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 4)));
#line 410 "format_call.m"
    MR_String check_hlds__simplify__format_call__Name_28 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 5)));
#line 410 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 6)));
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 7)));
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__CurId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 8)));
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SymName_32;
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Globals_33;
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__MaybeFormatString_36;
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__MaybeSkeletonInfo_47;
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_93_93;
#line 410 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118;
#line 422 "format_call.m"
    MR_Word check_hlds__simplify__format_call__MaybeFormatString0_34;
#line 419 "format_call.m"
    MR_String check_hlds__simplify__format_call__FormatString0_35;
#line 451 "format_call.m"
    MR_Word check_hlds__simplify__format_call__PolytypeVars0_42;
#line 451 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SkeletonVars0_43;
#line 451 "format_call.m"
    MR_Word check_hlds__simplify__format_call__AbstractPolyTypes0_45;
#line 442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeInfo_157_157;
#line 442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeInfo_158_158;
#line 442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_159_159;
#line 442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SkeletonResult_41;
#line 442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__MaybeAbstractPolyTypes0_44;
#line 442 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_94_94;
#line 516 "format_call.m"
    MR_String check_hlds__simplify__format_call__FormatString_52;
#line 516 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ToDeleteVars_53;
#line 516 "format_call.m"
    MR_Word check_hlds__simplify__format_call__AbstractPolyTypes_54;
#line 471 "format_call.m"
    MR_Tuple check_hlds__simplify__format_call__V_119_119;

#line 413 "format_call.m"
    {
#line 413 "format_call.m"
      check_hlds__simplify__format_call__SymName_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SymName_32, 0) = ((MR_Box) (check_hlds__simplify__format_call__ModuleName_27));
#line 413 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SymName_32, 1) = ((MR_Box) (check_hlds__simplify__format_call__Name_28));
#line 413 "format_call.m"
    }
#line 414 "format_call.m"
    {
#line 414 "format_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__format_call__ModuleInfo_14, &check_hlds__simplify__format_call__Globals_33);
    }
#line 417 "format_call.m"
    {
#line 417 "format_call.m"
      check_hlds__simplify__format_call__follow_format_string_5_p_0(check_hlds__simplify__format_call__ConjMaps_16, check_hlds__simplify__format_call__PredMap_17, check_hlds__simplify__format_call__CurId_31, check_hlds__simplify__format_call__StringVar_24, &check_hlds__simplify__format_call__MaybeFormatString0_34);
    }
#line 419 "format_call.m"
    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeFormatString0_34)) == (MR_mktag((MR_Integer) 1)));
#line 419 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 419 "format_call.m"
      {
#line 419 "format_call.m"
        check_hlds__simplify__format_call__FormatString0_35 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeFormatString0_34, (MR_Integer) 0)));
#line 421 "format_call.m"
        check_hlds__simplify__format_call__MaybeFormatString_36 = check_hlds__simplify__format_call__MaybeFormatString0_34;
#line 421 "format_call.m"
        check_hlds__simplify__format_call__STATE_VARIABLE_Specs_93_93 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_67;
#line 419 "format_call.m"
      }
#line 419 "format_call.m"
    else
#line 423 "format_call.m"
      {
#line 423 "format_call.m"
        MR_Word check_hlds__simplify__format_call__WarnUnknownFormatCallsA_37;

#line 423 "format_call.m"
        check_hlds__simplify__format_call__MaybeFormatString_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 424 "format_call.m"
        {
#line 424 "format_call.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_33, (MR_Integer) 34, &check_hlds__simplify__format_call__WarnUnknownFormatCallsA_37);
        }
#line 428 "format_call.m"
        if ((check_hlds__simplify__format_call__WarnUnknownFormatCallsA_37 == (MR_Integer) 0))
#line 427 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_Specs_93_93 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_67;
#line 428 "format_call.m"
        else
#line 429 "format_call.m"
          {
#line 429 "format_call.m"
            MR_Word check_hlds__simplify__format_call__UnknownFormatPieces_38;
#line 429 "format_call.m"
            MR_Word check_hlds__simplify__format_call__UnknownFormatMsg_39;
#line 429 "format_call.m"
            MR_Word check_hlds__simplify__format_call__UnknownFormatSpec_40;
#line 429 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_76_76;
#line 429 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_77_77;
#line 429 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_78_78;
#line 429 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_85_85;
#line 429 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_86_86;
#line 429 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_91_91;

#line 431 "format_call.m"
            {
#line 431 "format_call.m"
              check_hlds__simplify__format_call__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 431 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_78_78, 0) = ((MR_Box) (check_hlds__simplify__format_call__SymName_32));
#line 431 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_78_78, 1) = ((MR_Box) (check_hlds__simplify__format_call__Arity_29));
#line 431 "format_call.m"
            }
#line 431 "format_call.m"
            {
#line 431 "format_call.m"
              check_hlds__simplify__format_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "format_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 431 "format_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_77_77, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_78_78));
#line 431 "format_call.m"
            }
#line 431 "format_call.m"
            {
#line 431 "format_call.m"
              check_hlds__simplify__format_call__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_76_76, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_77_77));
#line 431 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[8])));
#line 431 "format_call.m"
            }
#line 430 "format_call.m"
            {
#line 430 "format_call.m"
              check_hlds__simplify__format_call__UnknownFormatPieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatPieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[12])));
#line 430 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatPieces_38, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_76_76));
#line 430 "format_call.m"
            }
#line 433 "format_call.m"
            {
#line 433 "format_call.m"
              check_hlds__simplify__format_call__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 433 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_86_86, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatPieces_38));
#line 433 "format_call.m"
            }
#line 433 "format_call.m"
            {
#line 433 "format_call.m"
              check_hlds__simplify__format_call__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_85_85, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_86_86));
#line 433 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "format_call.m"
            }
#line 432 "format_call.m"
            {
#line 432 "format_call.m"
              check_hlds__simplify__format_call__UnknownFormatMsg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatMsg_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_30));
#line 432 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatMsg_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_85_85));
#line 432 "format_call.m"
            }
#line 435 "format_call.m"
            {
#line 435 "format_call.m"
              check_hlds__simplify__format_call__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_91_91, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatMsg_39));
#line 435 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "format_call.m"
            }
#line 434 "format_call.m"
            {
#line 434 "format_call.m"
              check_hlds__simplify__format_call__UnknownFormatSpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 434 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatSpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 434 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatSpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_3[1])));
#line 434 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatSpec_40, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_91_91));
#line 434 "format_call.m"
            }
#line 436 "format_call.m"
            {
#line 436 "format_call.m"
              check_hlds__simplify__format_call__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatSpec_40));
#line 436 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_67));
#line 436 "format_call.m"
            }
#line 429 "format_call.m"
          }
#line 423 "format_call.m"
      }
#line 441 "format_call.m"
    {
#line 441 "format_call.m"
      check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(check_hlds__simplify__format_call__ConjMaps_16, check_hlds__simplify__format_call__PredMap_17, check_hlds__simplify__format_call__CurId_31, check_hlds__simplify__format_call__ValuesVar_25, &check_hlds__simplify__format_call__SkeletonResult_41);
    }
#line 443 "format_call.m"
    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__SkeletonResult_41)) == (MR_mktag((MR_Integer) 1)));
#line 443 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 443 "format_call.m"
      {
#line 443 "format_call.m"
        check_hlds__simplify__format_call__PolytypeVars0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonResult_41, (MR_Integer) 0)));
#line 443 "format_call.m"
        check_hlds__simplify__format_call__SkeletonVars0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonResult_41, (MR_Integer) 1)));
#line 14333 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_157_157 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 14335 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_158_158 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[3];
#line 444 "format_call.m"
        {
#line 444 "format_call.m"
          check_hlds__simplify__format_call__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 444 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_94_94, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_5[0]));
#line 444 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_94_94, 1) = ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_13_p_0_1));
#line 444 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 444 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_94_94, 3) = ((MR_Box) (check_hlds__simplify__format_call__ConjMaps_16));
#line 444 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_94_94, 4) = ((MR_Box) (check_hlds__simplify__format_call__PredMap_17));
#line 444 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_94_94, 5) = ((MR_Box) (check_hlds__simplify__format_call__CurId_31));
#line 444 "format_call.m"
        }
#line 444 "format_call.m"
        {
#line 444 "format_call.m"
          mercury__list__map_3_p_0(check_hlds__simplify__format_call__TypeInfo_157_157, check_hlds__simplify__format_call__TypeInfo_158_158, check_hlds__simplify__format_call__V_94_94, check_hlds__simplify__format_call__PolytypeVars0_42, &check_hlds__simplify__format_call__MaybeAbstractPolyTypes0_44);
        }
#line 14360 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeCtorInfo_159_159 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0;
#line 446 "format_call.m"
        {
#line 446 "format_call.m"
          check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__project_all_yes_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_159_159, check_hlds__simplify__format_call__MaybeAbstractPolyTypes0_44, &check_hlds__simplify__format_call__AbstractPolyTypes0_45);
        }
#line 443 "format_call.m"
      }
#line 451 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 449 "format_call.m"
      {
#line 449 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ToDeleteVars0_46;
#line 449 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_95_95;
#line 449 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_96_96;
#line 449 "format_call.m"
        MR_Tuple check_hlds__simplify__format_call__V_97_97;

#line 449 "format_call.m"
        {
#line 449 "format_call.m"
          check_hlds__simplify__format_call__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_96_96, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValuesVar_25));
#line 449 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_96_96, 1) = ((MR_Box) (check_hlds__simplify__format_call__SkeletonVars0_43));
#line 449 "format_call.m"
        }
#line 449 "format_call.m"
        {
#line 449 "format_call.m"
          check_hlds__simplify__format_call__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_95_95, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_24));
#line 449 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_95_95, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_96_96));
#line 449 "format_call.m"
        }
#line 449 "format_call.m"
        {
#line 449 "format_call.m"
          check_hlds__simplify__format_call__ToDeleteVars0_46 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__V_95_95, check_hlds__simplify__format_call__PolytypeVars0_42);
        }
#line 450 "format_call.m"
        {
#line 450 "format_call.m"
          check_hlds__simplify__format_call__V_97_97 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 450 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_97_97, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVars0_46));
#line 450 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_97_97, 1) = ((MR_Box) (check_hlds__simplify__format_call__AbstractPolyTypes0_45));
#line 450 "format_call.m"
        }
#line 450 "format_call.m"
        {
#line 450 "format_call.m"
          check_hlds__simplify__format_call__MaybeSkeletonInfo_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeSkeletonInfo_47, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_97_97));
#line 450 "format_call.m"
        }
#line 450 "format_call.m"
        check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_93_93;
#line 449 "format_call.m"
      }
#line 451 "format_call.m"
    else
#line 452 "format_call.m"
      {
#line 452 "format_call.m"
        MR_Word check_hlds__simplify__format_call__WarnUnknownFormatCallsB_48;

#line 452 "format_call.m"
        check_hlds__simplify__format_call__MaybeSkeletonInfo_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 453 "format_call.m"
        {
#line 453 "format_call.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_33, (MR_Integer) 34, &check_hlds__simplify__format_call__WarnUnknownFormatCallsB_48);
        }
#line 457 "format_call.m"
        if ((check_hlds__simplify__format_call__WarnUnknownFormatCallsB_48 == (MR_Integer) 0))
#line 456 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_93_93;
#line 457 "format_call.m"
        else
#line 458 "format_call.m"
          {
#line 458 "format_call.m"
            MR_Word check_hlds__simplify__format_call__UnknownFormatValuesPieces_49;
#line 458 "format_call.m"
            MR_Word check_hlds__simplify__format_call__UnknownFormatValuesMsg_50;
#line 458 "format_call.m"
            MR_Word check_hlds__simplify__format_call__UnknownFormatValuesSpec_51;
#line 458 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_101_101;
#line 458 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_102_102;
#line 458 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_103_103;
#line 458 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_110_110;
#line 458 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_111_111;
#line 458 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_116_116;

#line 461 "format_call.m"
            {
#line 461 "format_call.m"
              check_hlds__simplify__format_call__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_103_103, 0) = ((MR_Box) (check_hlds__simplify__format_call__SymName_32));
#line 461 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_103_103, 1) = ((MR_Box) (check_hlds__simplify__format_call__Arity_29));
#line 461 "format_call.m"
            }
#line 461 "format_call.m"
            {
#line 461 "format_call.m"
              check_hlds__simplify__format_call__V_102_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "format_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_102_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 461 "format_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_102_102, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_103_103));
#line 461 "format_call.m"
            }
#line 461 "format_call.m"
            {
#line 461 "format_call.m"
              check_hlds__simplify__format_call__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_101_101, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_102_102));
#line 461 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[8])));
#line 461 "format_call.m"
            }
#line 460 "format_call.m"
            {
#line 460 "format_call.m"
              check_hlds__simplify__format_call__UnknownFormatValuesPieces_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatValuesPieces_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[13])));
#line 460 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatValuesPieces_49, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_101_101));
#line 460 "format_call.m"
            }
#line 463 "format_call.m"
            {
#line 463 "format_call.m"
              check_hlds__simplify__format_call__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 463 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_111_111, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatValuesPieces_49));
#line 463 "format_call.m"
            }
#line 463 "format_call.m"
            {
#line 463 "format_call.m"
              check_hlds__simplify__format_call__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_110_110, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_111_111));
#line 463 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "format_call.m"
            }
#line 462 "format_call.m"
            {
#line 462 "format_call.m"
              check_hlds__simplify__format_call__UnknownFormatValuesMsg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 462 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesMsg_50, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_30));
#line 462 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesMsg_50, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_110_110));
#line 462 "format_call.m"
            }
#line 465 "format_call.m"
            {
#line 465 "format_call.m"
              check_hlds__simplify__format_call__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatValuesMsg_50));
#line 465 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "format_call.m"
            }
#line 464 "format_call.m"
            {
#line 464 "format_call.m"
              check_hlds__simplify__format_call__UnknownFormatValuesSpec_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 464 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesSpec_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 464 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesSpec_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_3[1])));
#line 464 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesSpec_51, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_116_116));
#line 464 "format_call.m"
            }
#line 466 "format_call.m"
            {
#line 466 "format_call.m"
              check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatValuesSpec_51));
#line 466 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_93_93));
#line 466 "format_call.m"
            }
#line 458 "format_call.m"
          }
#line 452 "format_call.m"
      }
#line 471 "format_call.m"
    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeFormatString_36)) == (MR_mktag((MR_Integer) 1)));
#line 471 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 471 "format_call.m"
      {
#line 471 "format_call.m"
        check_hlds__simplify__format_call__FormatString_52 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeFormatString_36, (MR_Integer) 0)));
#line 472 "format_call.m"
        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeSkeletonInfo_47)) == (MR_mktag((MR_Integer) 1)));
#line 472 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 472 "format_call.m"
          {
#line 472 "format_call.m"
            check_hlds__simplify__format_call__V_119_119 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeSkeletonInfo_47, (MR_Integer) 0)));
#line 472 "format_call.m"
            check_hlds__simplify__format_call__ToDeleteVars_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_119_119, (MR_Integer) 0)));
#line 472 "format_call.m"
            check_hlds__simplify__format_call__AbstractPolyTypes_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_119_119, (MR_Integer) 1)));
#line 472 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 472 "format_call.m"
          }
#line 471 "format_call.m"
      }
#line 516 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 474 "format_call.m"
      {
#line 474 "format_call.m"
        MR_Word check_hlds__simplify__format_call__FormatStringChars_55;
#line 474 "format_call.m"
        MR_Word check_hlds__simplify__format_call__MaybeSpecs_56;

#line 474 "format_call.m"
        {
#line 474 "format_call.m"
          mercury__string__to_char_list_2_p_0(check_hlds__simplify__format_call__FormatString_52, &check_hlds__simplify__format_call__FormatStringChars_55);
        }
#line 475 "format_call.m"
        {
#line 475 "format_call.m"
          check_hlds__simplify__format_call__parse_string_format__parse_and_optimize_format_string_4_p_0(check_hlds__simplify__format_call__FormatStringChars_55, check_hlds__simplify__format_call__AbstractPolyTypes_54, check_hlds__simplify__format_call__Context_30, &check_hlds__simplify__format_call__MaybeSpecs_56);
        }
#line 506 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeSpecs_56)) == (MR_mktag((MR_Integer) 1))))
#line 478 "format_call.m"
          {
#line 478 "format_call.m"
            MR_Word check_hlds__simplify__format_call__HeadError_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeSpecs_56, (MR_Integer) 0)));
#line 478 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TailErrors_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeSpecs_56, (MR_Integer) 1)));
#line 478 "format_call.m"
            MR_Word check_hlds__simplify__format_call__WarnKnownBadFormatCalls_59;

#line 479 "format_call.m"
            {
#line 479 "format_call.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_33, (MR_Integer) 32, &check_hlds__simplify__format_call__WarnKnownBadFormatCalls_59);
            }
#line 483 "format_call.m"
            if ((check_hlds__simplify__format_call__WarnKnownBadFormatCalls_59 == (MR_Integer) 0))
#line 482 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_68 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118;
#line 483 "format_call.m"
            else
#line 484 "format_call.m"
              {
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PrefixPieces_60;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__WarnOnlyOneFormatStringError_61;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__ErrorPieces_62;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__BadFormatMsg_63;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__BadFormatSpec_64;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_126_126;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_129_129;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_130_130;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_131_131;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_144_144;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_145_145;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_146_146;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_147_147;
#line 484 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_152_152;

#line 487 "format_call.m"
                {
#line 487 "format_call.m"
                  check_hlds__simplify__format_call__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_131_131, 0) = ((MR_Box) (check_hlds__simplify__format_call__SymName_32));
#line 487 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_131_131, 1) = ((MR_Box) (check_hlds__simplify__format_call__Arity_29));
#line 487 "format_call.m"
                }
#line 487 "format_call.m"
                {
#line 487 "format_call.m"
                  check_hlds__simplify__format_call__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 487 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_130_130, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_131_131));
#line 487 "format_call.m"
                }
#line 487 "format_call.m"
                {
#line 487 "format_call.m"
                  check_hlds__simplify__format_call__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_129_129, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_130_130));
#line 487 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[10])));
#line 487 "format_call.m"
                }
#line 486 "format_call.m"
                {
#line 486 "format_call.m"
                  check_hlds__simplify__format_call__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_126_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[15])));
#line 486 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_126_126, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_129_129));
#line 486 "format_call.m"
                }
#line 485 "format_call.m"
                {
#line 485 "format_call.m"
                  check_hlds__simplify__format_call__PrefixPieces_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__PrefixPieces_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[14])));
#line 485 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__PrefixPieces_60, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_126_126));
#line 485 "format_call.m"
                }
#line 488 "format_call.m"
                {
#line 488 "format_call.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_33, (MR_Integer) 33, &check_hlds__simplify__format_call__WarnOnlyOneFormatStringError_61);
                }
#line 494 "format_call.m"
                if ((check_hlds__simplify__format_call__WarnOnlyOneFormatStringError_61 == (MR_Integer) 0))
#line 495 "format_call.m"
                  {
#line 495 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_139_139;
#line 495 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_140_140;

#line 496 "format_call.m"
                    {
#line 496 "format_call.m"
                      check_hlds__simplify__format_call__V_139_139 = check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(check_hlds__simplify__format_call__HeadError_57);
                    }
#line 497 "format_call.m"
                    {
#line 497 "format_call.m"
                      check_hlds__simplify__format_call__V_140_140 = mercury__list__map_2_f_0((MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[7], check_hlds__simplify__format_call__TailErrors_58);
                    }
#line 496 "format_call.m"
                    {
#line 496 "format_call.m"
                      check_hlds__simplify__format_call__ErrorPieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "format_call.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ErrorPieces_62, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_139_139));
#line 496 "format_call.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ErrorPieces_62, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_140_140));
#line 496 "format_call.m"
                    }
#line 495 "format_call.m"
                  }
#line 494 "format_call.m"
                else
#line 492 "format_call.m"
                  {
#line 492 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_142_142;

#line 493 "format_call.m"
                    {
#line 493 "format_call.m"
                      check_hlds__simplify__format_call__V_142_142 = check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(check_hlds__simplify__format_call__HeadError_57);
                    }
#line 493 "format_call.m"
                    {
#line 493 "format_call.m"
                      check_hlds__simplify__format_call__ErrorPieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "format_call.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ErrorPieces_62, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_142_142));
#line 493 "format_call.m"
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ErrorPieces_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "format_call.m"
                    }
#line 492 "format_call.m"
                  }
#line 501 "format_call.m"
                {
#line 501 "format_call.m"
                  check_hlds__simplify__format_call__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 501 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_145_145, 0) = ((MR_Box) (check_hlds__simplify__format_call__PrefixPieces_60));
#line 501 "format_call.m"
                }
#line 501 "format_call.m"
                {
#line 501 "format_call.m"
                  check_hlds__simplify__format_call__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 501 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_147_147, 0) = ((MR_Box) (check_hlds__simplify__format_call__ErrorPieces_62));
#line 501 "format_call.m"
                }
#line 501 "format_call.m"
                {
#line 501 "format_call.m"
                  check_hlds__simplify__format_call__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_146_146, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_147_147));
#line 501 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "format_call.m"
                }
#line 501 "format_call.m"
                {
#line 501 "format_call.m"
                  check_hlds__simplify__format_call__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_144_144, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_145_145));
#line 501 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_144_144, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_146_146));
#line 501 "format_call.m"
                }
#line 500 "format_call.m"
                {
#line 500 "format_call.m"
                  check_hlds__simplify__format_call__BadFormatMsg_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatMsg_63, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_30));
#line 500 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatMsg_63, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_144_144));
#line 500 "format_call.m"
                }
#line 503 "format_call.m"
                {
#line 503 "format_call.m"
                  check_hlds__simplify__format_call__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_152_152, 0) = ((MR_Box) (check_hlds__simplify__format_call__BadFormatMsg_63));
#line 503 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 503 "format_call.m"
                }
#line 502 "format_call.m"
                {
#line 502 "format_call.m"
                  check_hlds__simplify__format_call__BadFormatSpec_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 502 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatSpec_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 502 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatSpec_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_3[1])));
#line 502 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatSpec_64, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_152_152));
#line 502 "format_call.m"
                }
#line 504 "format_call.m"
                {
#line 504 "format_call.m"
                  MR_Word base;
#line 504 "format_call.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_68 = base;
#line 504 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__BadFormatSpec_64));
#line 504 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118));
#line 504 "format_call.m"
                }
#line 484 "format_call.m"
              }
#line 504 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_66 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_65;
#line 504 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_70 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_69;
#line 504 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_72 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_71;
#line 478 "format_call.m"
          }
#line 506 "format_call.m"
        else
#line 507 "format_call.m"
          {
#line 507 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Specs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__MaybeSpecs_56, (MR_Integer) 0)));

#line 510 "format_call.m"
            if ((check_hlds__simplify__format_call__ShouldOptFormatCalls_15 == (MR_Integer) 0))
#line 509 "format_call.m"
              {
#line 509 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_66 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_65;
#line 509 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_70 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_69;
#line 509 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_72 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_71;
#line 509 "format_call.m"
              }
#line 510 "format_call.m"
            else
#line 512 "format_call.m"
              {
#line 512 "format_call.m"
                check_hlds__simplify__format_call__create_replacement_goal_11_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__GoalId_23, check_hlds__simplify__format_call__CallKind_26, check_hlds__simplify__format_call__Specs_20, check_hlds__simplify__format_call__ToDeleteVars_53, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_65, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_66, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_69, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_70, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_71, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_72);
              }
#line 512 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_68 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118;
#line 507 "format_call.m"
          }
#line 474 "format_call.m"
      }
#line 516 "format_call.m"
    else
#line 518 "format_call.m"
      {
#line 518 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_72 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_71;
#line 518 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_70 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_69;
#line 518 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_68 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_118_118;
#line 518 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_66 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_65;
#line 518 "format_call.m"
      }
#line 410 "format_call.m"
  }
#line 403 "format_call.m"
}

#line 307 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_kind_and_vars_7_p_0(
#line 307 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleName_8,
#line 307 "format_call.m"
  MR_String check_hlds__simplify__format_call__Name_9,
#line 307 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Args_10,
#line 307 "format_call.m"
  MR_Word check_hlds__simplify__format_call__GoalInfo_11,
#line 307 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Kind_12,
#line 307 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__FormatStringVar_13,
#line 307 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__FormattedValuesVar_14)
#line 307 "format_call.m"
{
#line 312 "format_call.m"
  {
#line 312 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Name_9, (MR_String) "format") == 0);
#line 323 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_55_55;

#line 312 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 312 "format_call.m"
      {
#line 323 "format_call.m"
        {
#line 323 "format_call.m"
          check_hlds__simplify__format_call__V_55_55 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
        }
#line 323 "format_call.m"
        {
#line 323 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_8, check_hlds__simplify__format_call__V_55_55);
        }
#line 330 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 327 "format_call.m"
          {
#line 327 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ResultVar_15;
#line 327 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Context_16;
#line 327 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_23_23;
#line 327 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_24_24;
#line 327 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_25_25;

#line 327 "format_call.m"
            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 327 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 327 "format_call.m"
              {
#line 327 "format_call.m"
                *check_hlds__simplify__format_call__FormatStringVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 0)));
#line 327 "format_call.m"
                check_hlds__simplify__format_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 1)));
#line 327 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 327 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 327 "format_call.m"
                  {
#line 327 "format_call.m"
                    *check_hlds__simplify__format_call__FormattedValuesVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_23_23, (MR_Integer) 0)));
#line 327 "format_call.m"
                    check_hlds__simplify__format_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_23_23, (MR_Integer) 1)));
#line 327 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 327 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 327 "format_call.m"
                      {
#line 327 "format_call.m"
                        check_hlds__simplify__format_call__ResultVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_24_24, (MR_Integer) 0)));
#line 327 "format_call.m"
                        check_hlds__simplify__format_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_24_24, (MR_Integer) 1)));
#line 327 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 327 "format_call.m"
                          {
#line 328 "format_call.m"
                            {
#line 328 "format_call.m"
                              check_hlds__simplify__format_call__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                            }
#line 329 "format_call.m"
                            {
#line 329 "format_call.m"
                              MR_Word base;
#line 329 "format_call.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "format_call.m"
                              *check_hlds__simplify__format_call__Kind_12 = base;
#line 329 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_16));
#line 329 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_15));
#line 329 "format_call.m"
                            }
#line 329 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 327 "format_call.m"
                          }
#line 327 "format_call.m"
                      }
#line 327 "format_call.m"
                  }
#line 327 "format_call.m"
              }
#line 327 "format_call.m"
          }
#line 330 "format_call.m"
        else
#line 343 "format_call.m"
          {
#line 331 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_56_56;

#line 331 "format_call.m"
            {
#line 331 "format_call.m"
              check_hlds__simplify__format_call__V_56_56 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 331 "format_call.m"
            {
#line 331 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_8, check_hlds__simplify__format_call__V_56_56);
            }
#line 343 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 337 "format_call.m"
              {
#line 337 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_59_59;
#line 337 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_60_60;
#line 337 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_61_61;
#line 337 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_62_62;
#line 337 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_63_63;
#line 337 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_64_64;
#line 337 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_65_65;
#line 337 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_66_66;

#line 334 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 334 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 334 "format_call.m"
                  {
#line 334 "format_call.m"
                    check_hlds__simplify__format_call__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 0)));
#line 334 "format_call.m"
                    check_hlds__simplify__format_call__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 1)));
#line 334 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 334 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 334 "format_call.m"
                      {
#line 334 "format_call.m"
                        check_hlds__simplify__format_call__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_59_59, (MR_Integer) 0)));
#line 334 "format_call.m"
                        check_hlds__simplify__format_call__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_59_59, (MR_Integer) 1)));
#line 334 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 334 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 334 "format_call.m"
                          {
#line 334 "format_call.m"
                            check_hlds__simplify__format_call__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_61_61, (MR_Integer) 0)));
#line 334 "format_call.m"
                            check_hlds__simplify__format_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_61_61, (MR_Integer) 1)));
#line 334 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_63_63)) == (MR_mktag((MR_Integer) 1)));
#line 334 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 334 "format_call.m"
                              {
#line 334 "format_call.m"
                                check_hlds__simplify__format_call__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_63_63, (MR_Integer) 0)));
#line 334 "format_call.m"
                                check_hlds__simplify__format_call__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_63_63, (MR_Integer) 1)));
#line 337 "format_call.m"
                                if ((check_hlds__simplify__format_call__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "format_call.m"
                                  {
#line 334 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__Context_45;

#line 334 "format_call.m"
                                    *check_hlds__simplify__format_call__FormatStringVar_13 = check_hlds__simplify__format_call__V_60_60;
#line 334 "format_call.m"
                                    *check_hlds__simplify__format_call__FormattedValuesVar_14 = check_hlds__simplify__format_call__V_62_62;
#line 335 "format_call.m"
                                    {
#line 335 "format_call.m"
                                      check_hlds__simplify__format_call__Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                                    }
#line 336 "format_call.m"
                                    {
#line 336 "format_call.m"
                                      MR_Word base;
#line 336 "format_call.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 336 "format_call.m"
                                      *check_hlds__simplify__format_call__Kind_12 = base;
#line 336 "format_call.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_45));
#line 336 "format_call.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_64_64));
#line 336 "format_call.m"
                                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_66_66));
#line 336 "format_call.m"
                                    }
#line 334 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 334 "format_call.m"
                                  }
#line 337 "format_call.m"
                                else
#line 339 "format_call.m"
                                  {
#line 339 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__V_30_30;
#line 339 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__Context_46;
#line 339 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__IOOut_48;

#line 338 "format_call.m"
                                    *check_hlds__simplify__format_call__FormatStringVar_13 = check_hlds__simplify__format_call__V_62_62;
#line 338 "format_call.m"
                                    *check_hlds__simplify__format_call__FormattedValuesVar_14 = check_hlds__simplify__format_call__V_64_64;
#line 339 "format_call.m"
                                    check_hlds__simplify__format_call__IOOut_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_65_65, (MR_Integer) 0)));
#line 339 "format_call.m"
                                    check_hlds__simplify__format_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_65_65, (MR_Integer) 1)));
#line 339 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 339 "format_call.m"
                                      {
#line 340 "format_call.m"
                                        {
#line 340 "format_call.m"
                                          check_hlds__simplify__format_call__Context_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                                        }
#line 341 "format_call.m"
                                        {
#line 341 "format_call.m"
                                          MR_Word base;
#line 341 "format_call.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 341 "format_call.m"
                                          *check_hlds__simplify__format_call__Kind_12 = base;
#line 341 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_46));
#line 341 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_60_60));
#line 341 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_66_66));
#line 341 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__simplify__format_call__IOOut_48));
#line 341 "format_call.m"
                                        }
#line 341 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 339 "format_call.m"
                                      }
#line 339 "format_call.m"
                                  }
#line 334 "format_call.m"
                              }
#line 334 "format_call.m"
                          }
#line 334 "format_call.m"
                      }
#line 334 "format_call.m"
                  }
#line 337 "format_call.m"
              }
#line 343 "format_call.m"
            else
#line 354 "format_call.m"
              {
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TC_InfoVarForStream_20;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__StateInVar_21;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__StateOutVar_22;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_39_39;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_40_40;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_41_41;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_42_42;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_43_43;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_44_44;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__Context_50;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__StreamVar_51;
#line 354 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_58_58;

#line 344 "format_call.m"
                {
#line 344 "format_call.m"
                  check_hlds__simplify__format_call__V_58_58 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[11]));
                }
#line 344 "format_call.m"
                {
#line 344 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_8, check_hlds__simplify__format_call__V_58_58);
                }
#line 354 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 354 "format_call.m"
                  {
#line 349 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 349 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 349 "format_call.m"
                      {
#line 349 "format_call.m"
                        check_hlds__simplify__format_call__TC_InfoVarForStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 0)));
#line 349 "format_call.m"
                        check_hlds__simplify__format_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 1)));
#line 349 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 349 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 349 "format_call.m"
                          {
#line 349 "format_call.m"
                            check_hlds__simplify__format_call__StreamVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, (MR_Integer) 0)));
#line 349 "format_call.m"
                            check_hlds__simplify__format_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, (MR_Integer) 1)));
#line 349 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 349 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 349 "format_call.m"
                              {
#line 349 "format_call.m"
                                *check_hlds__simplify__format_call__FormatStringVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, (MR_Integer) 0)));
#line 349 "format_call.m"
                                check_hlds__simplify__format_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, (MR_Integer) 1)));
#line 350 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 350 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 350 "format_call.m"
                                  {
#line 350 "format_call.m"
                                    *check_hlds__simplify__format_call__FormattedValuesVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_41_41, (MR_Integer) 0)));
#line 350 "format_call.m"
                                    check_hlds__simplify__format_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_41_41, (MR_Integer) 1)));
#line 350 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 350 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 350 "format_call.m"
                                      {
#line 350 "format_call.m"
                                        check_hlds__simplify__format_call__StateInVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, (MR_Integer) 0)));
#line 350 "format_call.m"
                                        check_hlds__simplify__format_call__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, (MR_Integer) 1)));
#line 350 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 350 "format_call.m"
                                        if (check_hlds__simplify__format_call__succeeded)
#line 350 "format_call.m"
                                          {
#line 350 "format_call.m"
                                            check_hlds__simplify__format_call__StateOutVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_43_43, (MR_Integer) 0)));
#line 350 "format_call.m"
                                            check_hlds__simplify__format_call__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_43_43, (MR_Integer) 1)));
#line 350 "format_call.m"
                                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "format_call.m"
                                            if (check_hlds__simplify__format_call__succeeded)
#line 354 "format_call.m"
                                              {
#line 351 "format_call.m"
                                                {
#line 351 "format_call.m"
                                                  check_hlds__simplify__format_call__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                                                }
#line 352 "format_call.m"
                                                {
#line 352 "format_call.m"
                                                  MR_Word base;
#line 352 "format_call.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 352 "format_call.m"
                                                  *check_hlds__simplify__format_call__Kind_12 = base;
#line 352 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_50));
#line 352 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__TC_InfoVarForStream_20));
#line 352 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_51));
#line 352 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__format_call__StateInVar_21));
#line 352 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__simplify__format_call__StateOutVar_22));
#line 352 "format_call.m"
                                                }
#line 352 "format_call.m"
                                                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 354 "format_call.m"
                                              }
#line 350 "format_call.m"
                                          }
#line 350 "format_call.m"
                                      }
#line 350 "format_call.m"
                                  }
#line 349 "format_call.m"
                              }
#line 349 "format_call.m"
                          }
#line 349 "format_call.m"
                      }
#line 354 "format_call.m"
                  }
#line 354 "format_call.m"
              }
#line 343 "format_call.m"
          }
#line 312 "format_call.m"
      }
#line 312 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 312 "format_call.m"
  }
#line 307 "format_call.m"
}

#line 384 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_8_p_0_1(
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 384 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_3,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_4,
#line 384 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_5,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_6,
#line 384 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_7,
#line 384 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_8,
#line 384 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_9)
#line 384 "format_call.m"
{
#line 384 "format_call.m"
  {
#line 384 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 384 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv3_STATE_VARIABLE_GoalIdMap_66;
#line 384 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv2_STATE_VARIABLE_Specs_68;
#line 384 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv1_STATE_VARIABLE_VarSet_70;
#line 384 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv0_STATE_VARIABLE_VarTypes_72;

#line 384 "format_call.m"
    {
#line 384 "format_call.m"
      check_hlds__simplify__format_call__check_format_call_site_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), &check_hlds__simplify__format_call__conv3_STATE_VARIABLE_GoalIdMap_66, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_4), &check_hlds__simplify__format_call__conv2_STATE_VARIABLE_Specs_68, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_6), &check_hlds__simplify__format_call__conv1_STATE_VARIABLE_VarSet_70, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_8), &check_hlds__simplify__format_call__conv0_STATE_VARIABLE_VarTypes_72);
    }
#line 384 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_3 = ((MR_Box) (check_hlds__simplify__format_call__conv3_STATE_VARIABLE_GoalIdMap_66));
#line 384 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_5 = ((MR_Box) (check_hlds__simplify__format_call__conv2_STATE_VARIABLE_Specs_68));
#line 384 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_7 = ((MR_Box) (check_hlds__simplify__format_call__conv1_STATE_VARIABLE_VarSet_70));
#line 384 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_9 = ((MR_Box) (check_hlds__simplify__format_call__conv0_STATE_VARIABLE_VarTypes_72));
#line 384 "format_call.m"
  }
#line 384 "format_call.m"
}

#line 136 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_8_p_0(
#line 136 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_9,
#line 136 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Goal0_10,
#line 136 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeGoal_11,
#line 136 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Specs_12,
#line 136 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_39,
#line 136 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_40,
#line 136 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_41,
#line 136 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_42)
#line 136 "format_call.m"
{
#line 361 "format_call.m"
  {
#line 361 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_54_54 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_56_56;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_66_66;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_67_67;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMaps0_15;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Counter0_16;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Goal1_18;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__FormatCallSites_20;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMaps_22;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__PredMap_23;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Globals_25;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__OptFormatCalls_26;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ExecTrace_27;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ShouldOptFormatCalls_28;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalIdMap_29;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_45_45;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_46_46;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_49_49;
#line 361 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_50_50;
#line 364 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_17_17;
#line 365 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_19_19;
#line 365 "format_call.m"
    MR_Word check_hlds__simplify__format_call___Counter_21;
#line 365 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_24_24;
#line 383 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv7_GoalIdMap_29;
#line 383 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv6_Specs_12;
#line 383 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv5_STATE_VARIABLE_VarSet_40;
#line 383 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv4_STATE_VARIABLE_VarTypes_42;

#line 362 "format_call.m"
    {
#line 362 "format_call.m"
      mercury__map__init_1_p_0(check_hlds__simplify__format_call__TypeCtorInfo_54_54, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, &check_hlds__simplify__format_call__ConjMaps0_15);
    }
#line 363 "format_call.m"
    {
#line 363 "format_call.m"
      mercury__counter__init_2_p_0((MR_Integer) 0, &check_hlds__simplify__format_call__Counter0_16);
    }
#line 364 "format_call.m"
    {
#line 364 "format_call.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(check_hlds__simplify__format_call__ModuleInfo_9, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_41, &check_hlds__simplify__format_call__V_17_17, check_hlds__simplify__format_call__Goal0_10, &check_hlds__simplify__format_call__Goal1_18);
    }
#line 366 "format_call.m"
    {
#line 366 "format_call.m"
      check_hlds__simplify__format_call__V_45_45 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_54_54, check_hlds__simplify__format_call__TypeCtorInfo_54_54);
    }
#line 15546 "check_hlds.simplify.format_call.c"
    check_hlds__simplify__format_call__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 367 "format_call.m"
    {
#line 367 "format_call.m"
      check_hlds__simplify__format_call__V_46_46 = parse_tree__set_of_var__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_56_56);
    }
#line 365 "format_call.m"
    {
#line 365 "format_call.m"
      check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__ModuleInfo_9, check_hlds__simplify__format_call__Goal1_18, &check_hlds__simplify__format_call__V_19_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__FormatCallSites_20, check_hlds__simplify__format_call__Counter0_16, &check_hlds__simplify__format_call___Counter_21, check_hlds__simplify__format_call__ConjMaps0_15, &check_hlds__simplify__format_call__ConjMaps_22, check_hlds__simplify__format_call__V_45_45, &check_hlds__simplify__format_call__PredMap_23, check_hlds__simplify__format_call__V_46_46, &check_hlds__simplify__format_call__V_24_24);
    }
#line 368 "format_call.m"
    {
#line 368 "format_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__format_call__ModuleInfo_9, &check_hlds__simplify__format_call__Globals_25);
    }
#line 369 "format_call.m"
    {
#line 369 "format_call.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_25, (MR_Integer) 369, &check_hlds__simplify__format_call__OptFormatCalls_26);
    }
#line 370 "format_call.m"
    {
#line 370 "format_call.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_25, (MR_Integer) 184, &check_hlds__simplify__format_call__ExecTrace_27);
    }
#line 376 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__OptFormatCalls_26 == (MR_Integer) 1);
#line 376 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 377 "format_call.m"
      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__ExecTrace_27 == (MR_Integer) 0);
#line 380 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 379 "format_call.m"
      check_hlds__simplify__format_call__ShouldOptFormatCalls_28 = (MR_Integer) 1;
#line 380 "format_call.m"
    else
#line 381 "format_call.m"
      check_hlds__simplify__format_call__ShouldOptFormatCalls_28 = (MR_Integer) 0;
#line 384 "format_call.m"
    {
#line 384 "format_call.m"
      check_hlds__simplify__format_call__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 384 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_49_49, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_4[0]));
#line 384 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_49_49, 1) = ((MR_Box) (check_hlds__simplify__format_call__analyze_and_optimize_format_calls_8_p_0_1));
#line 384 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 384 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_49_49, 3) = ((MR_Box) (check_hlds__simplify__format_call__ModuleInfo_9));
#line 384 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_49_49, 4) = ((MR_Box) (check_hlds__simplify__format_call__ShouldOptFormatCalls_28));
#line 384 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_49_49, 5) = ((MR_Box) (check_hlds__simplify__format_call__ConjMaps_22));
#line 384 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_49_49, 6) = ((MR_Box) (check_hlds__simplify__format_call__PredMap_23));
#line 384 "format_call.m"
    }
#line 15607 "check_hlds.simplify.format_call.c"
    check_hlds__simplify__format_call__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 15609 "check_hlds.simplify.format_call.c"
    check_hlds__simplify__format_call__TypeCtorInfo_67_67 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;
#line 386 "format_call.m"
    {
#line 386 "format_call.m"
      check_hlds__simplify__format_call__V_50_50 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_66_66, check_hlds__simplify__format_call__TypeCtorInfo_67_67);
    }
#line 383 "format_call.m"
    {
#line 383 "format_call.m"
      mercury__list__foldl4_10_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[0], (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, check_hlds__simplify__format_call__V_49_49, check_hlds__simplify__format_call__FormatCallSites_20, ((MR_Box) (check_hlds__simplify__format_call__V_50_50)), &check_hlds__simplify__format_call__conv7_GoalIdMap_29, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__simplify__format_call__conv6_Specs_12, ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_39)), &check_hlds__simplify__format_call__conv5_STATE_VARIABLE_VarSet_40, ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_41)), &check_hlds__simplify__format_call__conv4_STATE_VARIABLE_VarTypes_42);
    }
#line 383 "format_call.m"
    check_hlds__simplify__format_call__GoalIdMap_29 = ((MR_Word) check_hlds__simplify__format_call__conv7_GoalIdMap_29);
#line 383 "format_call.m"
    *check_hlds__simplify__format_call__Specs_12 = ((MR_Word) check_hlds__simplify__format_call__conv6_Specs_12);
#line 383 "format_call.m"
    *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_40 = ((MR_Word) check_hlds__simplify__format_call__conv5_STATE_VARIABLE_VarSet_40);
#line 383 "format_call.m"
    *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_42 = ((MR_Word) check_hlds__simplify__format_call__conv4_STATE_VARIABLE_VarTypes_42);
#line 387 "format_call.m"
    {
#line 387 "format_call.m"
      check_hlds__simplify__format_call__succeeded = mercury__map__is_empty_1_p_0(check_hlds__simplify__format_call__TypeCtorInfo_66_66, check_hlds__simplify__format_call__TypeCtorInfo_67_67, check_hlds__simplify__format_call__GoalIdMap_29);
    }
#line 390 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 389 "format_call.m"
      *check_hlds__simplify__format_call__MaybeGoal_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 390 "format_call.m"
    else
#line 394 "format_call.m"
      {
#line 394 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalInfo1_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal1_18, (MR_Integer) 1)));
#line 394 "format_call.m"
        MR_Word check_hlds__simplify__format_call__InstMapDelta_32;
#line 394 "format_call.m"
        MR_Word check_hlds__simplify__format_call__NeededVars0_33;
#line 394 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ToDeleteVars0_34;
#line 394 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_35;
#line 394 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal1_18, (MR_Integer) 0)));
#line 398 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_36_36;
#line 398 "format_call.m"
        MR_Word check_hlds__simplify__format_call___NeededVars_37;
#line 398 "format_call.m"
        MR_Word check_hlds__simplify__format_call___ToDeleteVars_38;

#line 395 "format_call.m"
        {
#line 395 "format_call.m"
          check_hlds__simplify__format_call__InstMapDelta_32 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__format_call__GoalInfo1_31);
        }
#line 396 "format_call.m"
        {
#line 396 "format_call.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__simplify__format_call__InstMapDelta_32, &check_hlds__simplify__format_call__NeededVars0_33);
        }
#line 397 "format_call.m"
        {
#line 397 "format_call.m"
          check_hlds__simplify__format_call__ToDeleteVars0_34 = parse_tree__set_of_var__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_56_56);
        }
#line 398 "format_call.m"
        {
#line 398 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Goal1_18, &check_hlds__simplify__format_call__Goal_35, check_hlds__simplify__format_call__GoalIdMap_29, &check_hlds__simplify__format_call__V_36_36, check_hlds__simplify__format_call__NeededVars0_33, &check_hlds__simplify__format_call___NeededVars_37, check_hlds__simplify__format_call__ToDeleteVars0_34, &check_hlds__simplify__format_call___ToDeleteVars_38);
        }
#line 400 "format_call.m"
        {
#line 400 "format_call.m"
          MR_Word base;
#line 400 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "format_call.m"
          *check_hlds__simplify__format_call__MaybeGoal_11 = base;
#line 400 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_35));
#line 400 "format_call.m"
        }
#line 394 "format_call.m"
      }
#line 361 "format_call.m"
  }
#line 136 "format_call.m"
}

#line 133 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_3_p_0(
#line 133 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleName_4,
#line 133 "format_call.m"
  MR_String check_hlds__simplify__format_call__Name_5,
#line 133 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Args_6)
#line 133 "format_call.m"
{
#line 280 "format_call.m"
  {
#line 280 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Name_5, (MR_String) "format") == 0);
#line 285 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_63_63;

#line 280 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 280 "format_call.m"
      {
#line 285 "format_call.m"
        {
#line 285 "format_call.m"
          check_hlds__simplify__format_call__V_63_63 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
        }
#line 285 "format_call.m"
        {
#line 285 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_4, check_hlds__simplify__format_call__V_63_63);
        }
#line 288 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 287 "format_call.m"
          {
#line 287 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_16_16;
#line 287 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_17_17;
#line 287 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_18_18;
#line 287 "format_call.m"
            MR_Word check_hlds__simplify__format_call___FormatStringVar_7;
#line 287 "format_call.m"
            MR_Word check_hlds__simplify__format_call___FormattedValuesVar_8;
#line 287 "format_call.m"
            MR_Word check_hlds__simplify__format_call___ResultVar_9;

#line 287 "format_call.m"
            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 287 "format_call.m"
              {
#line 287 "format_call.m"
                check_hlds__simplify__format_call___FormatStringVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 0)));
#line 287 "format_call.m"
                check_hlds__simplify__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 1)));
#line 287 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 287 "format_call.m"
                  {
#line 287 "format_call.m"
                    check_hlds__simplify__format_call___FormattedValuesVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_16_16, (MR_Integer) 0)));
#line 287 "format_call.m"
                    check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_16_16, (MR_Integer) 1)));
#line 287 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 287 "format_call.m"
                      {
#line 287 "format_call.m"
                        check_hlds__simplify__format_call___ResultVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_17_17, (MR_Integer) 0)));
#line 287 "format_call.m"
                        check_hlds__simplify__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_17_17, (MR_Integer) 1)));
#line 287 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "format_call.m"
                      }
#line 287 "format_call.m"
                  }
#line 287 "format_call.m"
              }
#line 287 "format_call.m"
          }
#line 288 "format_call.m"
        else
#line 297 "format_call.m"
          {
#line 289 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_64_64;

#line 289 "format_call.m"
            {
#line 289 "format_call.m"
              check_hlds__simplify__format_call__V_64_64 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 289 "format_call.m"
            {
#line 289 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_4, check_hlds__simplify__format_call__V_64_64);
            }
#line 297 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 293 "format_call.m"
              {
#line 293 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_67_67;
#line 293 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_69_69;
#line 293 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_71_71;
#line 293 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_73_73;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_68_68;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_70_70;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_72_72;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_74_74;

#line 292 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 292 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 292 "format_call.m"
                  {
#line 292 "format_call.m"
                    check_hlds__simplify__format_call__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 0)));
#line 292 "format_call.m"
                    check_hlds__simplify__format_call__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 1)));
#line 292 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 292 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 292 "format_call.m"
                      {
#line 292 "format_call.m"
                        check_hlds__simplify__format_call__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_67_67, (MR_Integer) 0)));
#line 292 "format_call.m"
                        check_hlds__simplify__format_call__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_67_67, (MR_Integer) 1)));
#line 292 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 292 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 292 "format_call.m"
                          {
#line 292 "format_call.m"
                            check_hlds__simplify__format_call__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_69_69, (MR_Integer) 0)));
#line 292 "format_call.m"
                            check_hlds__simplify__format_call__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_69_69, (MR_Integer) 1)));
#line 292 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 292 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 292 "format_call.m"
                              {
#line 292 "format_call.m"
                                check_hlds__simplify__format_call__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_71_71, (MR_Integer) 0)));
#line 292 "format_call.m"
                                check_hlds__simplify__format_call__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_71_71, (MR_Integer) 1)));
#line 293 "format_call.m"
                                if ((check_hlds__simplify__format_call__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 293 "format_call.m"
                                else
#line 294 "format_call.m"
                                  {
#line 294 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_73_73, (MR_Integer) 1)));
#line 295 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call___IOOut_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_73_73, (MR_Integer) 0)));

#line 295 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "format_call.m"
                                  }
#line 292 "format_call.m"
                              }
#line 292 "format_call.m"
                          }
#line 292 "format_call.m"
                      }
#line 292 "format_call.m"
                  }
#line 293 "format_call.m"
              }
#line 297 "format_call.m"
            else
#line 303 "format_call.m"
              {
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_32_32;
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_33_33;
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_34_34;
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_35_35;
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_36_36;
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_37_37;
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_66_66;
#line 301 "format_call.m"
                MR_Word check_hlds__simplify__format_call___TC_InfoVarForStream_13;
#line 301 "format_call.m"
                MR_Word check_hlds__simplify__format_call___StreamVar_52;
#line 301 "format_call.m"
                MR_Word check_hlds__simplify__format_call___FormatStringVar_53;
#line 302 "format_call.m"
                MR_Word check_hlds__simplify__format_call___FormattedValuesVar_54;
#line 302 "format_call.m"
                MR_Word check_hlds__simplify__format_call___StateInVar_14;
#line 302 "format_call.m"
                MR_Word check_hlds__simplify__format_call___StateOutVar_15;

#line 298 "format_call.m"
                {
#line 298 "format_call.m"
                  check_hlds__simplify__format_call__V_66_66 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[11]));
                }
#line 298 "format_call.m"
                {
#line 298 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_4, check_hlds__simplify__format_call__V_66_66);
                }
#line 303 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 303 "format_call.m"
                  {
#line 301 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 301 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 301 "format_call.m"
                      {
#line 301 "format_call.m"
                        check_hlds__simplify__format_call___TC_InfoVarForStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 0)));
#line 301 "format_call.m"
                        check_hlds__simplify__format_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 1)));
#line 301 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 301 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 301 "format_call.m"
                          {
#line 301 "format_call.m"
                            check_hlds__simplify__format_call___StreamVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_32_32, (MR_Integer) 0)));
#line 301 "format_call.m"
                            check_hlds__simplify__format_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_32_32, (MR_Integer) 1)));
#line 301 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 301 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 301 "format_call.m"
                              {
#line 301 "format_call.m"
                                check_hlds__simplify__format_call___FormatStringVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_33_33, (MR_Integer) 0)));
#line 301 "format_call.m"
                                check_hlds__simplify__format_call__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_33_33, (MR_Integer) 1)));
#line 302 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 302 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 302 "format_call.m"
                                  {
#line 302 "format_call.m"
                                    check_hlds__simplify__format_call___FormattedValuesVar_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_34_34, (MR_Integer) 0)));
#line 302 "format_call.m"
                                    check_hlds__simplify__format_call__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_34_34, (MR_Integer) 1)));
#line 302 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 302 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 302 "format_call.m"
                                      {
#line 302 "format_call.m"
                                        check_hlds__simplify__format_call___StateInVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_35_35, (MR_Integer) 0)));
#line 302 "format_call.m"
                                        check_hlds__simplify__format_call__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_35_35, (MR_Integer) 1)));
#line 302 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 302 "format_call.m"
                                        if (check_hlds__simplify__format_call__succeeded)
#line 302 "format_call.m"
                                          {
#line 302 "format_call.m"
                                            check_hlds__simplify__format_call___StateOutVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_36_36, (MR_Integer) 0)));
#line 302 "format_call.m"
                                            check_hlds__simplify__format_call__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_36_36, (MR_Integer) 1)));
#line 302 "format_call.m"
                                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "format_call.m"
                                          }
#line 302 "format_call.m"
                                      }
#line 302 "format_call.m"
                                  }
#line 301 "format_call.m"
                              }
#line 301 "format_call.m"
                          }
#line 301 "format_call.m"
                      }
#line 303 "format_call.m"
                  }
#line 303 "format_call.m"
              }
#line 297 "format_call.m"
          }
#line 280 "format_call.m"
      }
#line 280 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 280 "format_call.m"
  }
#line 133 "format_call.m"
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
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_map_0);
}

void mercury__check_hlds__simplify__format_call__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.format_call. */
