/*
** Automatically generated from `term_constr_build.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module transform_hlds.term_constr_build. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_build__init
ENDINIT
*/

#include "transform_hlds.term_constr_build.mih"


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
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
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
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1277 "term_constr_build.m"
struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s {
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__ModuleInfo_8;
#line 1277 "term_constr_build.m"
  MR_bool transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded;
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Args_19;
#line 1279 "term_constr_build.m"
  jmp_buf transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__commit_0;
#line 1279 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Arg_21;
#line 1280 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__conv0_Arg_21;
#line 1277 "term_constr_build.m"
};


#line 161 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 164 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 167 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0;

#line 170 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 173 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 176 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 179 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 182 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 185 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 188 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

#line 191 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0;

#line 194 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 197 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 200 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 203 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 206 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 209 "transform_hlds.term_constr_build.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 212 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 215 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 218 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2];

#line 221 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0;

#line 224 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 227 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1];

#line 230 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1;

#line 233 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1];

#line 236 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1];

#line 239 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0[2];

#line 242 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2];

#line 245 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2];

#line 248 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3];

#line 251 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3];

#line 254 "transform_hlds.term_constr_build.c"
static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0[3];

#line 257 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0;

#line 260 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1];

#line 263 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1];

#line 266 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1];

#line 269 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1];

#line 272 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 275 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 278 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 281 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6];

#line 284 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6];

#line 287 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0;

#line 290 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1];

#line 293 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1];

#line 296 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1];

#line 299 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1];

#line 302 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 305 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 308 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 311 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

#line 314 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[15];

#line 317 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0[15];

#line 320 "transform_hlds.term_constr_build.c"
static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0[15];

#line 323 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0;

#line 326 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1];

#line 329 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1];

#line 332 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1];

#line 335 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1];

#line 338 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
#line 341 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 343 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 346 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
#line 349 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 351 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 353 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 356 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
#line 359 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 361 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 364 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
#line 367 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 369 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 371 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 374 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
#line 377 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 379 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 382 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
#line 385 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 387 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 389 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 392 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
#line 395 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 397 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 400 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
#line 403 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 405 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 407 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 1279 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_1(
#line 1279 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1280 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_3(
#line 1280 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1279 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_2(
#line 1279 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1279 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_4(
#line 1279 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1277 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0(
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_28,
#line 1277 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__HeadVar__5_29,
#line 1277 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__6_30);

#line 1223 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1223__1_1_p_0(
#line 1223 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__HeadVar__1_29);

#line 1190 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1190__1_3_p_0(
#line 1190 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsName_45,
#line 1190 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__ConsArity_46,
#line 1190 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_66);

#line 1188 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1188__1_2_p_0(
#line 1188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_43,
#line 1188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsTypeCtor_47);

#line 1150 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1150__1_2_p_0(
#line 1150 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_73,
#line 1150 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_178);

#line 931 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__931__1_2_p_0(
#line 931 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_49,
#line 931 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_128);

#line 822 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__822__1_4_p_0(
#line 822 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_45,
#line 822 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__2_46,
#line 822 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_47,
#line 822 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_48);

#line 460 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__460__1_1_f_0(
#line 460 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_70);

#line 225 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__225__1_4_f_0(
#line 225 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_15,
#line 225 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_24,
#line 225 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_62,
#line 225 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_63);

#line 167 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_p_0_1(
#line 167 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 167 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 141 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_p_0(
#line 141 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarset_16,
#line 141 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_51,
#line 141 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_52,
#line 141 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_53,
#line 141 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__5_54,
#line 141 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__6_55);

#line 167 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__167__1_1_f_0(
#line 167 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_68);

#line 273 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
#line 273 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 273 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 273 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3);

#line 273 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
#line 273 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 273 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2);

#line 120 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
#line 120 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 120 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 120 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3);

#line 120 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
#line 120 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 120 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2);

#line 631 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
#line 631 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 631 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 631 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3);

#line 631 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
#line 631 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 631 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2);

#line 1277 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1(
#line 1277 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1277 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1277 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 1277 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3);

#line 1265 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_9,
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Ctors_11,
#line 1265 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12);

#line 1252 "term_constr_build.m"
static MR_Integer MR_CALL 
transform_hlds__term_constr_build__lower_bound_4_f_0(
#line 1252 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_6,
#line 1252 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_7,
#line 1252 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_8,
#line 1252 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constructor_9);

#line 1240 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_3(
#line 1240 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1240 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1240 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 1223 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_2(
#line 1223 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1223 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1218 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_1(
#line 1218 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1218 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1214 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0(
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_9,
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constructors_11,
#line 1214 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Polyhedron_12);

#line 1190 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4(
#line 1190 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1190 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1188 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
#line 1188 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg);

#line 1150 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
#line 1150 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1150 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1150 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
#line 1150 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1150 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1137 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
#line 1137 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1137 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 1137 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6);

#line 1117 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
#line 1117 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1117 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5);

#line 1080 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
#line 1080 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 1080 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2,
#line 1080 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_3,
#line 1080 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4,
#line 1080 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_5);

#line 1061 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__allocate_sizevars_5_p_0(
#line 1061 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadProgVars_6,
#line 1061 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_7,
#line 1061 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__SizeVarMap_8,
#line 1061 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_11,
#line 1061 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_12);

#line 1011 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
#line 1011 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constraints_3);

#line 1000 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1(
#line 1000 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1000 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 978 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(
#line 978 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LeftProgVar_6,
#line 978 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RightProgVar_7,
#line 978 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_8,
#line 978 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 978 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);

#line 959 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
#line 959 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_1,
#line 959 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 959 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__3_3,
#line 959 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 959 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__5_5);

#line 948 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(
#line 948 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_6,
#line 948 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_9,
#line 948 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Args_10,
#line 948 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_11,
#line 948 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Modes_12);

#line 937 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarMap_7,
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_8,
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Coeff_9,
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13,
#line 937 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14);

#line 933 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4(
#line 933 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 933 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 931 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3(
#line 931 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 931 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 931 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2(
#line 931 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 931 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 923 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1(
#line 923 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 923 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 923 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 923 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3);

#line 874 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_8,
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_9,
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgVars_10,
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Modes_11,
#line 874 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12,
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35,
#line 874 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_36);

#line 842 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_4_p_0(
#line 842 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Unification_5,
#line 842 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 842 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23,
#line 842 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);

#line 830 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
#line 830 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 830 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2,
#line 830 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_3);

#line 822 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
#line 822 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 822 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 822 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 822 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 822 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4);

#line 788 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3,
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5,
#line 788 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_6);

#line 759 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(
#line 759 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TermVar_6,
#line 759 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SubGoal_7,
#line 759 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 759 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24,
#line 759 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_25);

#line 735 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
#line 735 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 735 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchVar_2,
#line 735 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_3);

#line 679 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
#line 679 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchProgVar_1,
#line 679 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 679 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3,
#line 679 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_4,
#line 679 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5,
#line 679 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_6);

#line 658 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
#line 658 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 658 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2,
#line 658 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_3,
#line 658 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 658 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5);

#line 635 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
#line 635 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Type_5,
#line 635 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 635 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 635 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);

#line 557 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
#line 557 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 557 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 557 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 557 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 557 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34,
#line 557 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_35);

#line 532 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_recursive_call_6_p_0(
#line 532 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 532 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 532 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 532 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 532 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 532 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);

#line 515 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
#line 515 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 515 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 515 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_9,
#line 515 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 515 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13,
#line 515 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_14);

#line 506 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
#line 506 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 506 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 506 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 506 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 506 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4);

#line 502 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
#line 502 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Conjuncts_5,
#line 502 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 502 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_10,
#line 502 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_11);

#line 460 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
#line 460 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 460 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 391 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
#line 391 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalExpr_6,
#line 391 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_7,
#line 391 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 391 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61,
#line 391 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);

#line 378 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
#line 378 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 378 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 378 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 378 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);

#line 357 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
#line 357 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_4,
#line 357 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 357 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7);

#line 350 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
#line 350 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RecType_4,
#line 350 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7,
#line 350 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_8);

#line 344 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_errors_3_p_0(
#line 344 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Error_4,
#line 344 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 344 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7);

#line 338 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
#line 338 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 338 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5);

#line 328 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__init_traversal_info_10_f_0(
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_12,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_13,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_14,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_15,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Types_16,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_17,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarMap_18,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_19,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__FailConstrs_20,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgSizeOnly_21);

#line 225 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0_1(
#line 225 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 225 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 225 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 183 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0(
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__EntryProcs_12,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Options_13,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_14,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_15,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_16,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_46,
#line 183 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_47,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_0_48,
#line 183 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_49);

#line 141 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_2(
#line 141 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 141 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 141 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 141 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 141 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 141 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5);

#line 137 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_1(
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 137 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 137 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5,
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_6,
#line 137 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_1[12][2];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_3[1][14];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_4[3][9];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_5[2][8];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_6[6][5];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_7[2][7];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_8[2][6];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_9[1][4];




static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_2[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[5])),
    ((MR_Box) (transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_3[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_4[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_6[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_build____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_8[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_9[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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



#line 1616 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1624 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1632 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0
  }
};

#line 1640 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1649 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1657 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1666 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1674 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1683 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1691 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1700 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1708 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1717 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1725 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1734 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

#line 1742 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1750 "transform_hlds.term_constr_build.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1759 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1768 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1776 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1782 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0 = {
  (MR_String) "switch",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1797 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1805 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1810 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1 = {
  (MR_String) "non_switch",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 1825 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

#line 1830 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1
};

#line 1835 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1
  }
};

#line 1849 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1,
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

#line 1855 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1861 "transform_hlds.term_constr_build.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_disj_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____disj_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____disj_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "disj_info",
  {
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0
  },
  {
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0
};

#line 1882 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1889 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3] = {
  (MR_String) "tbo_functor_info",
  (MR_String) "tbo_failure_constrs",
  (MR_String) "tbo_arg_size_only"
};

#line 1896 "transform_hlds.term_constr_build.c"
static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

#line 1915 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0 = {
  (MR_String) "term_build_options",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0,
  NULL
};

#line 1930 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0
};

#line 1935 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0
  }
};

#line 1944 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0
};

#line 1949 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1] = {
  (MR_Integer) 0
};

#line 1954 "transform_hlds.term_constr_build.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "term_build_options",
  {
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0
  },
  {
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0
};

#line 1975 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1984 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1992 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 2000 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 2010 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6] = {
  (MR_String) "tsi_scc_ppid",
  (MR_String) "tsi_proc",
  (MR_String) "tsi_size_var_map",
  (MR_String) "tsi_intermod",
  (MR_String) "tsi_accum_errors",
  (MR_String) "tsi_non_zero_heads"
};

#line 2020 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0 = {
  (MR_String) "term_scc_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0,
  NULL,
  NULL
};

#line 2035 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0
};

#line 2040 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0
  }
};

#line 2049 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0
};

#line 2054 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1] = {
  (MR_Integer) 0
};

#line 2059 "transform_hlds.term_constr_build.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "term_scc_info",
  {
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0
  },
  {
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0
};

#line 2080 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2089 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 2097 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2105 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
  }
};

#line 2113 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[15] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2132 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0[15] = {
  (MR_String) "tti_recursion",
  (MR_String) "tti_intermod_status",
  (MR_String) "tti_errors",
  (MR_String) "tti_module_info",
  (MR_String) "tti_norm",
  (MR_String) "tti_ppid",
  (MR_String) "tti_context",
  (MR_String) "tti_vartypes",
  (MR_String) "tti_zeros",
  (MR_String) "tti_size_var_map",
  (MR_String) "tti_scc",
  (MR_String) "tti_maxcalls",
  (MR_String) "tti_find_fail_constrs",
  (MR_String) "tti_ho_info",
  (MR_String) "tti_arg_analysis_only"
};

#line 2151 "transform_hlds.term_constr_build.c"
static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0[15] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 2230 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0 = {
  (MR_String) "tti_traversal_info",
  (MR_Integer) 15,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0,
  NULL
};

#line 2245 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0
};

#line 2250 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0
  }
};

#line 2259 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0
};

#line 2264 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1] = {
  (MR_Integer) 0
};

#line 2269 "transform_hlds.term_constr_build.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "tti_traversal_info",
  {
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0
  },
  {
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0
};

#line 2290 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
#line 2293 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2295 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2297 "transform_hlds.term_constr_build.c"
{
#line 2299 "transform_hlds.term_constr_build.c"
  {
#line 2301 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2304 "transform_hlds.term_constr_build.c"
    {
#line 2306 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____disj_info_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2309 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2311 "transform_hlds.term_constr_build.c"
  }
#line 2313 "transform_hlds.term_constr_build.c"
}

#line 2316 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
#line 2319 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2321 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2323 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2325 "transform_hlds.term_constr_build.c"
{
#line 2327 "transform_hlds.term_constr_build.c"
  {
#line 2329 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2332 "transform_hlds.term_constr_build.c"
    {
#line 2334 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____disj_info_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2337 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2339 "transform_hlds.term_constr_build.c"
  }
#line 2341 "transform_hlds.term_constr_build.c"
}

#line 2344 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
#line 2347 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2349 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2351 "transform_hlds.term_constr_build.c"
{
#line 2353 "transform_hlds.term_constr_build.c"
  {
#line 2355 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2358 "transform_hlds.term_constr_build.c"
    {
#line 2360 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____term_build_options_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2363 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2365 "transform_hlds.term_constr_build.c"
  }
#line 2367 "transform_hlds.term_constr_build.c"
}

#line 2370 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
#line 2373 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2375 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2377 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2379 "transform_hlds.term_constr_build.c"
{
#line 2381 "transform_hlds.term_constr_build.c"
  {
#line 2383 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2386 "transform_hlds.term_constr_build.c"
    {
#line 2388 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____term_build_options_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2391 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2393 "transform_hlds.term_constr_build.c"
  }
#line 2395 "transform_hlds.term_constr_build.c"
}

#line 2398 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
#line 2401 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2403 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2405 "transform_hlds.term_constr_build.c"
{
#line 2407 "transform_hlds.term_constr_build.c"
  {
#line 2409 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2412 "transform_hlds.term_constr_build.c"
    {
#line 2414 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____term_scc_info_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2417 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2419 "transform_hlds.term_constr_build.c"
  }
#line 2421 "transform_hlds.term_constr_build.c"
}

#line 2424 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
#line 2427 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2429 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2431 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2433 "transform_hlds.term_constr_build.c"
{
#line 2435 "transform_hlds.term_constr_build.c"
  {
#line 2437 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2440 "transform_hlds.term_constr_build.c"
    {
#line 2442 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____term_scc_info_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2445 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2447 "transform_hlds.term_constr_build.c"
  }
#line 2449 "transform_hlds.term_constr_build.c"
}

#line 2452 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
#line 2455 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2457 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2459 "transform_hlds.term_constr_build.c"
{
#line 2461 "transform_hlds.term_constr_build.c"
  {
#line 2463 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2466 "transform_hlds.term_constr_build.c"
    {
#line 2468 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2471 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2473 "transform_hlds.term_constr_build.c"
  }
#line 2475 "transform_hlds.term_constr_build.c"
}

#line 2478 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
#line 2481 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2483 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2485 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2487 "transform_hlds.term_constr_build.c"
{
#line 2489 "transform_hlds.term_constr_build.c"
  {
#line 2491 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2494 "transform_hlds.term_constr_build.c"
    {
#line 2496 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2499 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2501 "transform_hlds.term_constr_build.c"
  }
#line 2503 "transform_hlds.term_constr_build.c"
}

#line 1279 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_1(
#line 1279 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1279 "term_constr_build.m"
{
#line 1279 "term_constr_build.m"
  {
#line 1279 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1279 "term_constr_build.m"
    MR_builtin_longjmp((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__commit_0, 1);
#line 1279 "term_constr_build.m"
  }
#line 1279 "term_constr_build.m"
}

#line 1280 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_3(
#line 1280 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1280 "term_constr_build.m"
{
#line 1280 "term_constr_build.m"
  {
#line 1280 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1280 "term_constr_build.m"
    (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Arg_21 = ((MR_Word) (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__conv0_Arg_21);
#line 1280 "term_constr_build.m"
    {
#line 1280 "term_constr_build.m"
      transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_2(transform_hlds__term_constr_build__env_ptr);
#line 1280 "term_constr_build.m"
      return;
    }
#line 1280 "term_constr_build.m"
  }
#line 1280 "term_constr_build.m"
}

#line 1279 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_2(
#line 1279 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1279 "term_constr_build.m"
{
#line 1279 "term_constr_build.m"
  {
#line 1279 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1279 "term_constr_build.m"
    {
#line 1282 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Arg_21, (MR_Integer) 1)));
#line 1282 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Arg_21, (MR_Integer) 0)));
#line 1282 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Arg_21, (MR_Integer) 2)));
#line 1282 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Arg_21, (MR_Integer) 3)));

#line 1282 "term_constr_build.m"
      {
#line 1282 "term_constr_build.m"
        (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__ModuleInfo_8, transform_hlds__term_constr_build__V_31_31);
      }
#line 1281 "term_constr_build.m"
      (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded = !((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded);
#line 1281 "term_constr_build.m"
      if ((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded)
#line 1281 "term_constr_build.m"
        {
#line 1281 "term_constr_build.m"
          transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_1(transform_hlds__term_constr_build__env_ptr);
#line 1281 "term_constr_build.m"
          return;
        }
#line 1279 "term_constr_build.m"
    }
#line 1279 "term_constr_build.m"
  }
#line 1279 "term_constr_build.m"
}

#line 1279 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_4(
#line 1279 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1279 "term_constr_build.m"
{
#line 1279 "term_constr_build.m"
  {
#line 1279 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1279 "term_constr_build.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__commit_0) == 0)
#line 1279 "term_constr_build.m"
      {
#line 1279 "term_constr_build.m"
        {
#line 1280 "term_constr_build.m"
          {
#line 1280 "term_constr_build.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, &(transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__conv0_Arg_21, (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Args_19, transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_3, transform_hlds__term_constr_build__env_ptr);
          }
#line 1279 "term_constr_build.m"
        }
#line 1279 "term_constr_build.m"
        (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded = MR_FALSE;
#line 1279 "term_constr_build.m"
      }
#line 1279 "term_constr_build.m"
    else
#line 1279 "term_constr_build.m"
      (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded = MR_TRUE;
#line 1279 "term_constr_build.m"
  }
#line 1279 "term_constr_build.m"
}

#line 1277 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0(
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1277 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_28,
#line 1277 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__HeadVar__5_29,
#line 1277 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__6_30)
#line 1277 "term_constr_build.m"
{
#line 1277 "term_constr_build.m"
  {
#line 1277 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0_s transform_hlds__term_constr_build__env;

#line 1277 "term_constr_build.m"
    (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__ModuleInfo_8 = transform_hlds__term_constr_build__ModuleInfo_8;
#line 1277 "term_constr_build.m"
    {
#line 1277 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__TypeCtorInfo_52_52;
#line 1277 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 2)));
#line 1277 "term_constr_build.m"
      MR_Integer transform_hlds__term_constr_build__Arity_22;
#line 1277 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__ConsId_23;
#line 1277 "term_constr_build.m"
      MR_Integer transform_hlds__term_constr_build__Bound_24;
#line 1278 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 0)));
#line 1278 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 1)));
#line 1278 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_20_20;

#line 1278 "term_constr_build.m"
      (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 3)));
#line 1278 "term_constr_build.m"
      transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 4)));
#line 1279 "term_constr_build.m"
      {
#line 1279 "term_constr_build.m"
        transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_4(&transform_hlds__term_constr_build__env);
      }
#line 1279 "term_constr_build.m"
      (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded = !((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded);
#line 1277 "term_constr_build.m"
      if ((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded)
#line 1277 "term_constr_build.m"
        {
#line 2693 "transform_hlds.term_constr_build.c"
          transform_hlds__term_constr_build__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1284 "term_constr_build.m"
          {
#line 1284 "term_constr_build.m"
            transform_hlds__term_constr_build__Arity_22 = mercury__list__length_1_f_0(transform_hlds__term_constr_build__TypeCtorInfo_52_52, (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__Args_19);
          }
#line 1285 "term_constr_build.m"
          {
#line 1285 "term_constr_build.m"
            transform_hlds__term_constr_build__ConsId_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1285 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 1) = ((MR_Box) (transform_hlds__term_constr_build__SymName_18));
#line 1285 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 2) = ((MR_Box) (transform_hlds__term_constr_build__Arity_22));
#line 1285 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 3) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_10));
#line 1285 "term_constr_build.m"
          }
#line 1286 "term_constr_build.m"
          {
#line 1286 "term_constr_build.m"
            transform_hlds__term_constr_build__Bound_24 = transform_hlds__term_norm__functor_lower_bound_4_f_0((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__ModuleInfo_8, transform_hlds__term_constr_build__Norm_7, transform_hlds__term_constr_build__TypeCtor_10, transform_hlds__term_constr_build__ConsId_23);
          }
#line 1287 "term_constr_build.m"
          (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded = (transform_hlds__term_constr_build__Bound_24 > transform_hlds__term_constr_build__HeadVar__5_29);
#line 1287 "term_constr_build.m"
          if ((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded)
#line 1287 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__6_30 = transform_hlds__term_constr_build__Bound_24;
#line 1287 "term_constr_build.m"
          else
#line 1287 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__6_30 = transform_hlds__term_constr_build__HeadVar__5_29;
#line 1287 "term_constr_build.m"
          (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded = MR_TRUE;
#line 1277 "term_constr_build.m"
        }
#line 1277 "term_constr_build.m"
      return (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0_env_0__succeeded;
#line 1277 "term_constr_build.m"
    }
#line 1277 "term_constr_build.m"
  }
#line 1277 "term_constr_build.m"
}

#line 1223 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1223__1_1_p_0(
#line 1223 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__HeadVar__1_29)
#line 1223 "term_constr_build.m"
{
#line 1223 "term_constr_build.m"
  {
#line 1223 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__HeadVar__1_29 == (MR_Integer) 0);

#line 1223 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1223 "term_constr_build.m"
  }
#line 1223 "term_constr_build.m"
}

#line 1190 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1190__1_3_p_0(
#line 1190 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsName_45,
#line 1190 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__ConsArity_46,
#line 1190 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_66)
#line 1190 "term_constr_build.m"
{
#line 1190 "term_constr_build.m"
  {
#line 1190 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SymName_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 2)));
#line 1190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 3)));
#line 1190 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__Arity_55;
#line 1191 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 0)));
#line 1191 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 1)));
#line 1191 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 4)));

#line 1192 "term_constr_build.m"
    {
#line 1192 "term_constr_build.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, transform_hlds__term_constr_build__Args_53, &transform_hlds__term_constr_build__Arity_55);
    }
#line 1194 "term_constr_build.m"
    {
#line 1194 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__term_constr_build__SymName_52, transform_hlds__term_constr_build__ConsName_45);
    }
#line 1194 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1195 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__Arity_55 == transform_hlds__term_constr_build__ConsArity_46);
#line 1193 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 1190 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1190 "term_constr_build.m"
  }
#line 1190 "term_constr_build.m"
}

#line 1188 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1188__1_2_p_0(
#line 1188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_43,
#line 1188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsTypeCtor_47)
#line 1188 "term_constr_build.m"
{
#line 1188 "term_constr_build.m"
  {
#line 1188 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 1188 "term_constr_build.m"
    {
#line 1188 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(transform_hlds__term_constr_build__TypeCtor_43, transform_hlds__term_constr_build__ConsTypeCtor_47);
    }
#line 1188 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1188 "term_constr_build.m"
  }
#line 1188 "term_constr_build.m"
}

#line 1150 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1150__1_2_p_0(
#line 1150 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_73,
#line 1150 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_178)
#line 1150 "term_constr_build.m"
{
#line 1150 "term_constr_build.m"
  {
#line 1150 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 1150 "term_constr_build.m"
    {
#line 1150 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__HeadVar__1_73, ((MR_Box) (transform_hlds__term_constr_build__HeadVar__2_178)));
    }
#line 1150 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1150 "term_constr_build.m"
  }
#line 1150 "term_constr_build.m"
}

#line 931 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__931__1_2_p_0(
#line 931 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_49,
#line 931 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_128)
#line 931 "term_constr_build.m"
{
#line 931 "term_constr_build.m"
  {
#line 931 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 931 "term_constr_build.m"
    {
#line 931 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__HeadVar__1_49, ((MR_Box) (transform_hlds__term_constr_build__HeadVar__2_128)));
    }
#line 931 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 931 "term_constr_build.m"
  }
#line 931 "term_constr_build.m"
}

#line 822 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__822__1_4_p_0(
#line 822 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_45,
#line 822 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__2_46,
#line 822 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_47,
#line 822 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_48)
#line 822 "term_constr_build.m"
{
#line 822 "term_constr_build.m"
  {
#line 822 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 822 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv0_HeadVar__2_46;

#line 822 "term_constr_build.m"
    {
#line 822 "term_constr_build.m"
      mercury__map__det_remove_4_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__term_constr_build__HeadVar__1_45)), &transform_hlds__term_constr_build__conv0_HeadVar__2_46, transform_hlds__term_constr_build__HeadVar__3_47, transform_hlds__term_constr_build__HeadVar__4_48);
    }
#line 822 "term_constr_build.m"
    *transform_hlds__term_constr_build__HeadVar__2_46 = ((MR_Integer) transform_hlds__term_constr_build__conv0_HeadVar__2_46);
#line 822 "term_constr_build.m"
  }
#line 822 "term_constr_build.m"
}

#line 460 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__460__1_1_f_0(
#line 460 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_70)
#line 460 "term_constr_build.m"
{
#line 460 "term_constr_build.m"
  {
#line 460 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 460 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__2_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_70, (MR_Integer) 0)));
#line 460 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_70, (MR_Integer) 1)));
#line 460 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_70, (MR_Integer) 2)));
#line 460 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_70, (MR_Integer) 3)));

#line 460 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__2_71;
#line 460 "term_constr_build.m"
  }
#line 460 "term_constr_build.m"
}

#line 225 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__225__1_4_f_0(
#line 225 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_15,
#line 225 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_24,
#line 225 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_62,
#line 225 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_63)
#line 225 "term_constr_build.m"
{
#line 225 "term_constr_build.m"
  {
#line 225 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 225 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__5_64;
#line 225 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Type_41;

#line 226 "term_constr_build.m"
    {
#line 226 "term_constr_build.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__term_constr_build__VarTypes_24, transform_hlds__term_constr_build__HeadVar__3_62, &transform_hlds__term_constr_build__Type_41);
    }
#line 228 "term_constr_build.m"
    {
#line 228 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__Type_41);
    }
#line 228 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 228 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 229 "term_constr_build.m"
      {
#line 229 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__HeadVar__4_63);
      }
#line 232 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 231 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__5_64 = (MR_Integer) 1;
#line 232 "term_constr_build.m"
    else
#line 233 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__5_64 = (MR_Integer) 0;
#line 225 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__5_64;
#line 225 "term_constr_build.m"
  }
#line 225 "term_constr_build.m"
}

#line 167 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_p_0_1(
#line 167 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 167 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 167 "term_constr_build.m"
{
#line 167 "term_constr_build.m"
  {
#line 167 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 167 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 167 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv2_HeadVar__2_69;

#line 167 "term_constr_build.m"
    {
#line 167 "term_constr_build.m"
      transform_hlds__term_constr_build__conv2_HeadVar__2_69 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__167__1_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 167 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv2_HeadVar__2_69));
#line 167 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 167 "term_constr_build.m"
  }
#line 167 "term_constr_build.m"
}

#line 141 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_p_0(
#line 141 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarset_16,
#line 141 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_51,
#line 141 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_52,
#line 141 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_53,
#line 141 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__5_54,
#line 141 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__6_55)
#line 141 "term_constr_build.m"
{
#line 141 "term_constr_build.m"
  {
#line 141 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_118_118;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_119_119;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_120_120;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_121_121;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredId_22;
#line 141 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__ProcId_23;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AR0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 1)));
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__VarMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 2)));
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Status_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 3)));
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcErrors_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 4)));
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadSizeVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 5)));
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AR_29;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredInfo0_30;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcTable0_31;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcInfo0_32;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcInfo_36;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcTable_37;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredInfo_38;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 0)));
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_57_57;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_58_58;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_60_60;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_61_61;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_62_62;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_63_63;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_64_64;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Errors_72_72;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_83_83;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_84_84;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_85_85;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_86_86;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_87_87;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_88_88;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_89_89;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_91_91;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_92_92;
#line 152 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_93_93;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_94_94;
#line 152 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_90_90;
#line 153 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv0_PredInfo0_30;
#line 155 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv1_ProcInfo0_32;

#line 143 "term_constr_build.m"
    transform_hlds__term_constr_build__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_56_56, (MR_Integer) 0)));
#line 143 "term_constr_build.m"
    transform_hlds__term_constr_build__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_56_56, (MR_Integer) 1)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 0)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 1)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 2)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 3)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 4)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 5)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 6)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 7)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 8)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 9)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 10)));
#line 152 "term_constr_build.m"
    transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 11)));
#line 152 "term_constr_build.m"
    {
#line 152 "term_constr_build.m"
      transform_hlds__term_constr_build__AR_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_83_83));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_84_84));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_85_85));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_86_86));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_87_87));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_88_88));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_89_89));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 7) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarset_16));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_91_91));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_92_92));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_93_93));
#line 152 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_94_94));
#line 152 "term_constr_build.m"
    }
#line 3201 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_118_118 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3203 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_119_119 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 153 "term_constr_build.m"
    {
#line 153 "term_constr_build.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_constr_build__TypeCtorInfo_118_118, transform_hlds__term_constr_build__TypeCtorInfo_119_119, transform_hlds__term_constr_build__HeadVar__5_54, ((MR_Box) (transform_hlds__term_constr_build__PredId_22)), &transform_hlds__term_constr_build__conv0_PredInfo0_30);
    }
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__PredInfo0_30 = ((MR_Word) transform_hlds__term_constr_build__conv0_PredInfo0_30);
#line 154 "term_constr_build.m"
    {
#line 154 "term_constr_build.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__term_constr_build__PredInfo0_30, &transform_hlds__term_constr_build__ProcTable0_31);
    }
#line 3217 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_120_120 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3219 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_121_121 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 155 "term_constr_build.m"
    {
#line 155 "term_constr_build.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_constr_build__TypeCtorInfo_120_120, transform_hlds__term_constr_build__TypeCtorInfo_121_121, transform_hlds__term_constr_build__ProcTable0_31, ((MR_Box) (transform_hlds__term_constr_build__ProcId_23)), &transform_hlds__term_constr_build__conv1_ProcInfo0_32);
    }
#line 155 "term_constr_build.m"
    transform_hlds__term_constr_build__ProcInfo0_32 = ((MR_Word) transform_hlds__term_constr_build__conv1_ProcInfo0_32);
#line 157 "term_constr_build.m"
    {
#line 157 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_build__ProcInfo0_32, &transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_57_57);
    }
#line 158 "term_constr_build.m"
    {
#line 158 "term_constr_build.m"
      transform_hlds__term_constr_build__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 158 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_59_59, 0) = ((MR_Box) (transform_hlds__term_constr_build__Status_26));
#line 158 "term_constr_build.m"
    }
#line 158 "term_constr_build.m"
    {
#line 158 "term_constr_build.m"
      transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_58_58 = transform_hlds__term_constr_main__f_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_57_57, transform_hlds__term_constr_build__V_59_59);
    }
#line 159 "term_constr_build.m"
    {
#line 159 "term_constr_build.m"
      transform_hlds__term_constr_build__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 159 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_61_61, 0) = ((MR_Box) (transform_hlds__term_constr_build__AR_29));
#line 159 "term_constr_build.m"
    }
#line 159 "term_constr_build.m"
    {
#line 159 "term_constr_build.m"
      transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_60_60 = transform_hlds__term_constr_main__f_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_58_58, transform_hlds__term_constr_build__V_61_61);
    }
#line 160 "term_constr_build.m"
    {
#line 160 "term_constr_build.m"
      transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_62_62 = transform_hlds__term_constr_main__f_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_60_60, transform_hlds__term_constr_build__VarMap_25);
    }
#line 161 "term_constr_build.m"
    {
#line 161 "term_constr_build.m"
      transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_63_63 = transform_hlds__term_constr_main__f_104_101_97_100_95_118_97_114_115_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_62_62, transform_hlds__term_constr_build__HeadSizeVars_28);
    }
#line 165 "term_constr_build.m"
    {
#line 165 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_data__analysis_depends_on_ho_1_p_0(transform_hlds__term_constr_build__AR_29);
    }
#line 170 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 166 "term_constr_build.m"
      {
#line 166 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_123_123;
#line 166 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__HorderErrors_34;
#line 166 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_65_65;
#line 166 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_66_66;
#line 166 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_95_95;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_96_96;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_97_97;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_98_98;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_99_99;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_100_100;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_101_101;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_102_102;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_103_103;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_104_104;
#line 167 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_105_105;

#line 166 "term_constr_build.m"
        {
#line 166 "term_constr_build.m"
          transform_hlds__term_constr_build__V_66_66 = libs__polyhedron__universe_0_f_0();
        }
#line 166 "term_constr_build.m"
        {
#line 166 "term_constr_build.m"
          transform_hlds__term_constr_build__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 166 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_65_65, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_66_66));
#line 166 "term_constr_build.m"
        }
#line 166 "term_constr_build.m"
        {
#line 166 "term_constr_build.m"
          transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_64_64 = transform_hlds__term_constr_main__f_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_63_63, transform_hlds__term_constr_build__V_65_65);
        }
#line 3329 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__TypeInfo_123_123 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[0];
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 0)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 1)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 2)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 3)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 4)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 5)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 6)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 7)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 8)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 9)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 10)));
#line 167 "term_constr_build.m"
        transform_hlds__term_constr_build__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 11)));
#line 167 "term_constr_build.m"
        {
#line 167 "term_constr_build.m"
          transform_hlds__term_constr_build__HorderErrors_34 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0, transform_hlds__term_constr_build__TypeInfo_123_123, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[12], transform_hlds__term_constr_build__V_71_71);
        }
#line 169 "term_constr_build.m"
        {
#line 169 "term_constr_build.m"
          mercury__list__append_3_p_1(transform_hlds__term_constr_build__TypeInfo_123_123, transform_hlds__term_constr_build__HorderErrors_34, transform_hlds__term_constr_build__HeadVar__3_52, &transform_hlds__term_constr_build__STATE_VARIABLE_Errors_72_72);
        }
#line 166 "term_constr_build.m"
      }
#line 170 "term_constr_build.m"
    else
#line 171 "term_constr_build.m"
      {
#line 171 "term_constr_build.m"
        transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_64_64 = transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_63_63;
#line 171 "term_constr_build.m"
        transform_hlds__term_constr_build__STATE_VARIABLE_Errors_72_72 = transform_hlds__term_constr_build__HeadVar__3_52;
#line 171 "term_constr_build.m"
      }
#line 173 "term_constr_build.m"
    {
#line 173 "term_constr_build.m"
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_64_64, transform_hlds__term_constr_build__ProcInfo0_32, &transform_hlds__term_constr_build__ProcInfo_36);
    }
#line 175 "term_constr_build.m"
    {
#line 175 "term_constr_build.m"
      mercury__map__det_update_4_p_0(transform_hlds__term_constr_build__TypeCtorInfo_120_120, transform_hlds__term_constr_build__TypeCtorInfo_121_121, ((MR_Box) (transform_hlds__term_constr_build__ProcId_23)), ((MR_Box) (transform_hlds__term_constr_build__ProcInfo_36)), transform_hlds__term_constr_build__ProcTable0_31, &transform_hlds__term_constr_build__ProcTable_37);
    }
#line 176 "term_constr_build.m"
    {
#line 176 "term_constr_build.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__term_constr_build__ProcTable_37, transform_hlds__term_constr_build__PredInfo0_30, &transform_hlds__term_constr_build__PredInfo_38);
    }
#line 177 "term_constr_build.m"
    {
#line 177 "term_constr_build.m"
      mercury__map__det_update_4_p_0(transform_hlds__term_constr_build__TypeCtorInfo_118_118, transform_hlds__term_constr_build__TypeCtorInfo_119_119, ((MR_Box) (transform_hlds__term_constr_build__PredId_22)), ((MR_Box) (transform_hlds__term_constr_build__PredInfo_38)), transform_hlds__term_constr_build__HeadVar__5_54, transform_hlds__term_constr_build__HeadVar__6_55);
    }
#line 178 "term_constr_build.m"
    {
#line 178 "term_constr_build.m"
      mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[0], transform_hlds__term_constr_build__ProcErrors_27, transform_hlds__term_constr_build__STATE_VARIABLE_Errors_72_72, transform_hlds__term_constr_build__HeadVar__4_53);
#line 178 "term_constr_build.m"
      return;
    }
#line 141 "term_constr_build.m"
  }
#line 141 "term_constr_build.m"
}

#line 167 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__167__1_1_f_0(
#line 167 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_68)
#line 167 "term_constr_build.m"
{
#line 167 "term_constr_build.m"
  {
#line 167 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 167 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__2_69;
#line 167 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Context_77 = (MR_Word) transform_hlds__term_constr_build__HeadVar__1_68;

#line 168 "term_constr_build.m"
    {
#line 168 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__2_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 168 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_69, 0) = ((MR_Box) (transform_hlds__term_constr_build__Context_77));
#line 168 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 168 "term_constr_build.m"
    }
#line 167 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__2_69;
#line 167 "term_constr_build.m"
  }
#line 167 "term_constr_build.m"
}

#line 273 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
#line 273 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 273 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 273 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 273 "term_constr_build.m"
{
#line 273 "term_constr_build.m"
  {
#line 273 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 273 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_48 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 273 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_49 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 273 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_48 == transform_hlds__term_constr_build__CastY_49);
#line 273 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 3466 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 273 "term_constr_build.m"
    else
#line 273 "term_constr_build.m"
      {
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 6)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 7)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 8)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 9)));
#line 273 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 10)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 11)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 12)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 13)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 2)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 3)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 4)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 5)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 6)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 7)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 8)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 9)));
#line 273 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 10)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 11)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 12)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 13)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_34_34;
#line 273 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_65_65 = (MR_Integer) transform_hlds__term_constr_build__V_4_4;
#line 273 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_66_66 = (MR_Integer) transform_hlds__term_constr_build__V_19_19;

#line 273 "term_constr_build.m"
        {
#line 273 "term_constr_build.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_34_34, transform_hlds__term_constr_build__V_65_65, transform_hlds__term_constr_build__V_66_66);
        }
#line 3544 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_34_34 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_34_34;
#line 273 "term_constr_build.m"
        else
#line 273 "term_constr_build.m"
          {
#line 273 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_35_35;
#line 273 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_67_67 = (MR_Integer) transform_hlds__term_constr_build__V_5_5;
#line 273 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_68_68 = (MR_Integer) transform_hlds__term_constr_build__V_20_20;

#line 273 "term_constr_build.m"
            {
#line 273 "term_constr_build.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_35_35, transform_hlds__term_constr_build__V_67_67, transform_hlds__term_constr_build__V_68_68);
            }
#line 3568 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_35_35 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_35_35;
#line 273 "term_constr_build.m"
            else
#line 273 "term_constr_build.m"
              {
#line 273 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_36_36;

#line 273 "term_constr_build.m"
                {
#line 273 "term_constr_build.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2], &transform_hlds__term_constr_build__V_36_36, ((MR_Box) (transform_hlds__term_constr_build__V_6_6)), ((MR_Box) (transform_hlds__term_constr_build__V_21_21)));
                }
#line 3588 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_36_36 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_36_36;
#line 273 "term_constr_build.m"
                else
#line 273 "term_constr_build.m"
                  {
#line 273 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__V_37_37;

#line 273 "term_constr_build.m"
                    {
#line 273 "term_constr_build.m"
                      hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__term_constr_build__V_37_37, transform_hlds__term_constr_build__V_7_7, transform_hlds__term_constr_build__V_22_22);
                    }
#line 3608 "transform_hlds.term_constr_build.c"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_37_37 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_37_37;
#line 273 "term_constr_build.m"
                    else
#line 273 "term_constr_build.m"
                      {
#line 273 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__V_38_38;

#line 273 "term_constr_build.m"
                        {
#line 273 "term_constr_build.m"
                          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_constr_build__V_38_38, transform_hlds__term_constr_build__V_8_8, transform_hlds__term_constr_build__V_23_23);
                        }
#line 3628 "transform_hlds.term_constr_build.c"
                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_38_38 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_38_38;
#line 273 "term_constr_build.m"
                        else
#line 273 "term_constr_build.m"
                          {
#line 273 "term_constr_build.m"
                            MR_Word transform_hlds__term_constr_build__V_39_39;

#line 273 "term_constr_build.m"
                            {
#line 273 "term_constr_build.m"
                              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_build__V_39_39, transform_hlds__term_constr_build__V_9_9, transform_hlds__term_constr_build__V_24_24);
                            }
#line 3648 "transform_hlds.term_constr_build.c"
                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_39_39 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                            if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_39_39;
#line 273 "term_constr_build.m"
                            else
#line 273 "term_constr_build.m"
                              {
#line 273 "term_constr_build.m"
                                MR_Word transform_hlds__term_constr_build__V_40_40;

#line 273 "term_constr_build.m"
                                {
#line 273 "term_constr_build.m"
                                  mercury__term____Compare____context_0_0(&transform_hlds__term_constr_build__V_40_40, transform_hlds__term_constr_build__V_10_10, transform_hlds__term_constr_build__V_25_25);
                                }
#line 3668 "transform_hlds.term_constr_build.c"
                                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_40_40 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                                if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_40_40;
#line 273 "term_constr_build.m"
                                else
#line 273 "term_constr_build.m"
                                  {
#line 273 "term_constr_build.m"
                                    MR_Word transform_hlds__term_constr_build__V_41_41;

#line 273 "term_constr_build.m"
                                    {
#line 273 "term_constr_build.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__term_constr_build__V_41_41, ((MR_Box) (transform_hlds__term_constr_build__V_11_11)), ((MR_Box) (transform_hlds__term_constr_build__V_26_26)));
                                    }
#line 3688 "transform_hlds.term_constr_build.c"
                                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_41_41 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                                    if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_41_41;
#line 273 "term_constr_build.m"
                                    else
#line 273 "term_constr_build.m"
                                      {
#line 273 "term_constr_build.m"
                                        MR_Word transform_hlds__term_constr_build__V_42_42;

#line 273 "term_constr_build.m"
                                        {
#line 273 "term_constr_build.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[9], &transform_hlds__term_constr_build__V_42_42, ((MR_Box) (transform_hlds__term_constr_build__V_12_12)), ((MR_Box) (transform_hlds__term_constr_build__V_27_27)));
                                        }
#line 3708 "transform_hlds.term_constr_build.c"
                                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_42_42 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                                        if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_42_42;
#line 273 "term_constr_build.m"
                                        else
#line 273 "term_constr_build.m"
                                          {
#line 273 "term_constr_build.m"
                                            MR_Word transform_hlds__term_constr_build__V_43_43;

#line 273 "term_constr_build.m"
                                            {
#line 273 "term_constr_build.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4], &transform_hlds__term_constr_build__V_43_43, ((MR_Box) (transform_hlds__term_constr_build__V_13_13)), ((MR_Box) (transform_hlds__term_constr_build__V_28_28)));
                                            }
#line 3728 "transform_hlds.term_constr_build.c"
                                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_43_43 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                                            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                                            if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_43_43;
#line 273 "term_constr_build.m"
                                            else
#line 273 "term_constr_build.m"
                                              {
#line 273 "term_constr_build.m"
                                                MR_Word transform_hlds__term_constr_build__V_44_44;

#line 273 "term_constr_build.m"
                                                {
#line 273 "term_constr_build.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[10], &transform_hlds__term_constr_build__V_44_44, ((MR_Box) (transform_hlds__term_constr_build__V_14_14)), ((MR_Box) (transform_hlds__term_constr_build__V_29_29)));
                                                }
#line 3748 "transform_hlds.term_constr_build.c"
                                                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_44_44 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                                                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                                                if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_44_44;
#line 273 "term_constr_build.m"
                                                else
#line 273 "term_constr_build.m"
                                                  {
#line 273 "term_constr_build.m"
                                                    MR_Word transform_hlds__term_constr_build__V_45_45;

#line 273 "term_constr_build.m"
                                                    {
#line 273 "term_constr_build.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_45_45, transform_hlds__term_constr_build__V_15_15, transform_hlds__term_constr_build__V_30_30);
                                                    }
#line 3768 "transform_hlds.term_constr_build.c"
                                                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_45_45 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                                                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                                                    if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_45_45;
#line 273 "term_constr_build.m"
                                                    else
#line 273 "term_constr_build.m"
                                                      {
#line 273 "term_constr_build.m"
                                                        MR_Word transform_hlds__term_constr_build__V_46_46;
#line 273 "term_constr_build.m"
                                                        MR_Integer transform_hlds__term_constr_build__V_69_69 = (MR_Integer) transform_hlds__term_constr_build__V_16_16;
#line 273 "term_constr_build.m"
                                                        MR_Integer transform_hlds__term_constr_build__V_70_70 = (MR_Integer) transform_hlds__term_constr_build__V_31_31;

#line 273 "term_constr_build.m"
                                                        {
#line 273 "term_constr_build.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_46_46, transform_hlds__term_constr_build__V_69_69, transform_hlds__term_constr_build__V_70_70);
                                                        }
#line 3792 "transform_hlds.term_constr_build.c"
                                                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_46_46 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                                                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                                                        if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_46_46;
#line 273 "term_constr_build.m"
                                                        else
#line 273 "term_constr_build.m"
                                                          {
#line 273 "term_constr_build.m"
                                                            MR_Word transform_hlds__term_constr_build__V_47_47;

#line 273 "term_constr_build.m"
                                                            {
#line 273 "term_constr_build.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[11], &transform_hlds__term_constr_build__V_47_47, ((MR_Box) (transform_hlds__term_constr_build__V_17_17)), ((MR_Box) (transform_hlds__term_constr_build__V_32_32)));
                                                            }
#line 3812 "transform_hlds.term_constr_build.c"
                                                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_47_47 == (MR_Integer) 0);
#line 273 "term_constr_build.m"
                                                            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 273 "term_constr_build.m"
                                                            if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                                              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_47_47;
#line 273 "term_constr_build.m"
                                                            else
#line 273 "term_constr_build.m"
                                                              {
#line 273 "term_constr_build.m"
                                                                MR_Integer transform_hlds__term_constr_build__V_71_71 = (MR_Integer) transform_hlds__term_constr_build__V_18_18;
#line 273 "term_constr_build.m"
                                                                MR_Integer transform_hlds__term_constr_build__V_72_72 = (MR_Integer) transform_hlds__term_constr_build__V_33_33;

#line 273 "term_constr_build.m"
                                                                {
#line 273 "term_constr_build.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_build__HeadVar__1_1, transform_hlds__term_constr_build__V_71_71, transform_hlds__term_constr_build__V_72_72);
#line 273 "term_constr_build.m"
                                                                  return;
                                                                }
#line 273 "term_constr_build.m"
                                                              }
#line 273 "term_constr_build.m"
                                                          }
#line 273 "term_constr_build.m"
                                                      }
#line 273 "term_constr_build.m"
                                                  }
#line 273 "term_constr_build.m"
                                              }
#line 273 "term_constr_build.m"
                                          }
#line 273 "term_constr_build.m"
                                      }
#line 273 "term_constr_build.m"
                                  }
#line 273 "term_constr_build.m"
                              }
#line 273 "term_constr_build.m"
                          }
#line 273 "term_constr_build.m"
                      }
#line 273 "term_constr_build.m"
                  }
#line 273 "term_constr_build.m"
              }
#line 273 "term_constr_build.m"
          }
#line 273 "term_constr_build.m"
      }
#line 273 "term_constr_build.m"
  }
#line 273 "term_constr_build.m"
}

#line 273 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
#line 273 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 273 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 273 "term_constr_build.m"
{
#line 273 "term_constr_build.m"
  {
#line 273 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 273 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_33 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 273 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_34 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 273 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_33 == transform_hlds__term_constr_build__CastY_34);
#line 273 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 273 "term_constr_build.m"
    else
#line 273 "term_constr_build.m"
      {
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_35_35;
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeCtorInfo_40_40;
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_41_41;
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_42_42;
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_43_43;
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_44_44;
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 2)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 3)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 4)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 5)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 6)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 7)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 8)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 9)));
#line 273 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 10)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 11)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 12)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 13)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 6)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 7)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 8)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 9)));
#line 273 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 10)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 11)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 12)));
#line 273 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 13)));

#line 3972 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_3_3 == transform_hlds__term_constr_build__V_18_18);
#line 273 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
          {
#line 3978 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_4_4 == transform_hlds__term_constr_build__V_19_19);
#line 273 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
              {
#line 3984 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_35_35 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2];
#line 3986 "transform_hlds.term_constr_build.c"
                {
#line 3988 "transform_hlds.term_constr_build.c"
                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_35_35, ((MR_Box) (transform_hlds__term_constr_build__V_5_5)), ((MR_Box) (transform_hlds__term_constr_build__V_20_20)));
                }
#line 273 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                  {
#line 3995 "transform_hlds.term_constr_build.c"
                    {
#line 3997 "transform_hlds.term_constr_build.c"
                      transform_hlds__term_constr_build__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__term_constr_build__V_6_6, transform_hlds__term_constr_build__V_21_21);
                    }
#line 273 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                      {
#line 4004 "transform_hlds.term_constr_build.c"
                        {
#line 4006 "transform_hlds.term_constr_build.c"
                          transform_hlds__term_constr_build__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_constr_build__V_7_7, transform_hlds__term_constr_build__V_22_22);
                        }
#line 273 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                          {
#line 4013 "transform_hlds.term_constr_build.c"
                            {
#line 4015 "transform_hlds.term_constr_build.c"
                              transform_hlds__term_constr_build__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_build__V_8_8, transform_hlds__term_constr_build__V_23_23);
                            }
#line 273 "term_constr_build.m"
                            if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                              {
#line 4022 "transform_hlds.term_constr_build.c"
                                {
#line 4024 "transform_hlds.term_constr_build.c"
                                  transform_hlds__term_constr_build__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_build__V_9_9, transform_hlds__term_constr_build__V_24_24);
                                }
#line 273 "term_constr_build.m"
                                if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                  {
#line 4031 "transform_hlds.term_constr_build.c"
                                    transform_hlds__term_constr_build__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4033 "transform_hlds.term_constr_build.c"
                                    {
#line 4035 "transform_hlds.term_constr_build.c"
                                      transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__term_constr_build__V_10_10)), ((MR_Box) (transform_hlds__term_constr_build__V_25_25)));
                                    }
#line 273 "term_constr_build.m"
                                    if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                      {
#line 4042 "transform_hlds.term_constr_build.c"
                                        transform_hlds__term_constr_build__TypeInfo_41_41 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[9];
#line 4044 "transform_hlds.term_constr_build.c"
                                        {
#line 4046 "transform_hlds.term_constr_build.c"
                                          transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_41_41, ((MR_Box) (transform_hlds__term_constr_build__V_11_11)), ((MR_Box) (transform_hlds__term_constr_build__V_26_26)));
                                        }
#line 273 "term_constr_build.m"
                                        if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                          {
#line 4053 "transform_hlds.term_constr_build.c"
                                            transform_hlds__term_constr_build__TypeInfo_42_42 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4];
#line 4055 "transform_hlds.term_constr_build.c"
                                            {
#line 4057 "transform_hlds.term_constr_build.c"
                                              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_42_42, ((MR_Box) (transform_hlds__term_constr_build__V_12_12)), ((MR_Box) (transform_hlds__term_constr_build__V_27_27)));
                                            }
#line 273 "term_constr_build.m"
                                            if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                              {
#line 4064 "transform_hlds.term_constr_build.c"
                                                transform_hlds__term_constr_build__TypeInfo_43_43 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[10];
#line 4066 "transform_hlds.term_constr_build.c"
                                                {
#line 4068 "transform_hlds.term_constr_build.c"
                                                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_43_43, ((MR_Box) (transform_hlds__term_constr_build__V_13_13)), ((MR_Box) (transform_hlds__term_constr_build__V_28_28)));
                                                }
#line 273 "term_constr_build.m"
                                                if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                                  {
#line 4075 "transform_hlds.term_constr_build.c"
                                                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_14_14 == transform_hlds__term_constr_build__V_29_29);
#line 273 "term_constr_build.m"
                                                    if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                                      {
#line 4081 "transform_hlds.term_constr_build.c"
                                                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_15_15 == transform_hlds__term_constr_build__V_30_30);
#line 273 "term_constr_build.m"
                                                        if (transform_hlds__term_constr_build__succeeded)
#line 273 "term_constr_build.m"
                                                          {
#line 4087 "transform_hlds.term_constr_build.c"
                                                            transform_hlds__term_constr_build__TypeInfo_44_44 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[11];
#line 4089 "transform_hlds.term_constr_build.c"
                                                            {
#line 4091 "transform_hlds.term_constr_build.c"
                                                              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_44_44, ((MR_Box) (transform_hlds__term_constr_build__V_16_16)), ((MR_Box) (transform_hlds__term_constr_build__V_31_31)));
                                                            }
#line 273 "term_constr_build.m"
                                                            if (transform_hlds__term_constr_build__succeeded)
#line 4096 "transform_hlds.term_constr_build.c"
                                                              transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_17_17 == transform_hlds__term_constr_build__V_32_32);
#line 273 "term_constr_build.m"
                                                          }
#line 273 "term_constr_build.m"
                                                      }
#line 273 "term_constr_build.m"
                                                  }
#line 273 "term_constr_build.m"
                                              }
#line 273 "term_constr_build.m"
                                          }
#line 273 "term_constr_build.m"
                                      }
#line 273 "term_constr_build.m"
                                  }
#line 273 "term_constr_build.m"
                              }
#line 273 "term_constr_build.m"
                          }
#line 273 "term_constr_build.m"
                      }
#line 273 "term_constr_build.m"
                  }
#line 273 "term_constr_build.m"
              }
#line 273 "term_constr_build.m"
          }
#line 273 "term_constr_build.m"
      }
#line 273 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 273 "term_constr_build.m"
  }
#line 273 "term_constr_build.m"
}

#line 120 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
#line 120 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 120 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 120 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 120 "term_constr_build.m"
{
#line 120 "term_constr_build.m"
  {
#line 120 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 120 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_21 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 120 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_22 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 120 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_21 == transform_hlds__term_constr_build__CastY_22);
#line 120 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 4157 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 120 "term_constr_build.m"
    else
#line 120 "term_constr_build.m"
      {
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 2)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 3)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 4)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 5)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16;

#line 120 "term_constr_build.m"
        {
#line 120 "term_constr_build.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_build__V_16_16, transform_hlds__term_constr_build__V_4_4, transform_hlds__term_constr_build__V_10_10);
        }
#line 4195 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_16_16 == (MR_Integer) 0);
#line 120 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 120 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_16_16;
#line 120 "term_constr_build.m"
        else
#line 120 "term_constr_build.m"
          {
#line 120 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_17_17;

#line 120 "term_constr_build.m"
            {
#line 120 "term_constr_build.m"
              transform_hlds__term_constr_data____Compare____abstract_proc_0_0(&transform_hlds__term_constr_build__V_17_17, transform_hlds__term_constr_build__V_5_5, transform_hlds__term_constr_build__V_11_11);
            }
#line 4215 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_17_17 == (MR_Integer) 0);
#line 120 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 120 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_17_17;
#line 120 "term_constr_build.m"
            else
#line 120 "term_constr_build.m"
              {
#line 120 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_18_18;

#line 120 "term_constr_build.m"
                {
#line 120 "term_constr_build.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4], &transform_hlds__term_constr_build__V_18_18, ((MR_Box) (transform_hlds__term_constr_build__V_6_6)), ((MR_Box) (transform_hlds__term_constr_build__V_12_12)));
                }
#line 4235 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_18_18 == (MR_Integer) 0);
#line 120 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 120 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_18_18;
#line 120 "term_constr_build.m"
                else
#line 120 "term_constr_build.m"
                  {
#line 120 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__V_19_19;
#line 120 "term_constr_build.m"
                    MR_Integer transform_hlds__term_constr_build__V_29_29 = (MR_Integer) transform_hlds__term_constr_build__V_7_7;
#line 120 "term_constr_build.m"
                    MR_Integer transform_hlds__term_constr_build__V_30_30 = (MR_Integer) transform_hlds__term_constr_build__V_13_13;

#line 120 "term_constr_build.m"
                    {
#line 120 "term_constr_build.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_19_19, transform_hlds__term_constr_build__V_29_29, transform_hlds__term_constr_build__V_30_30);
                    }
#line 4259 "transform_hlds.term_constr_build.c"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_19_19 == (MR_Integer) 0);
#line 120 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 120 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_19_19;
#line 120 "term_constr_build.m"
                    else
#line 120 "term_constr_build.m"
                      {
#line 120 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__V_20_20;

#line 120 "term_constr_build.m"
                        {
#line 120 "term_constr_build.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2], &transform_hlds__term_constr_build__V_20_20, ((MR_Box) (transform_hlds__term_constr_build__V_8_8)), ((MR_Box) (transform_hlds__term_constr_build__V_14_14)));
                        }
#line 4279 "transform_hlds.term_constr_build.c"
                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_20_20 == (MR_Integer) 0);
#line 120 "term_constr_build.m"
                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 120 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_20_20;
#line 120 "term_constr_build.m"
                        else
#line 120 "term_constr_build.m"
                          {
#line 120 "term_constr_build.m"
                            {
#line 120 "term_constr_build.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[8], transform_hlds__term_constr_build__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_build__V_9_9)), ((MR_Box) (transform_hlds__term_constr_build__V_15_15)));
#line 120 "term_constr_build.m"
                              return;
                            }
#line 120 "term_constr_build.m"
                          }
#line 120 "term_constr_build.m"
                      }
#line 120 "term_constr_build.m"
                  }
#line 120 "term_constr_build.m"
              }
#line 120 "term_constr_build.m"
          }
#line 120 "term_constr_build.m"
      }
#line 120 "term_constr_build.m"
  }
#line 120 "term_constr_build.m"
}

#line 120 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
#line 120 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 120 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 120 "term_constr_build.m"
{
#line 120 "term_constr_build.m"
  {
#line 120 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 120 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_15 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 120 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_16 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 120 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_15 == transform_hlds__term_constr_build__CastY_16);
#line 120 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 120 "term_constr_build.m"
    else
#line 120 "term_constr_build.m"
      {
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_19_19;
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_20_20;
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_21_21;
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 2)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 3)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 4)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 5)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 120 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));

#line 4374 "transform_hlds.term_constr_build.c"
        {
#line 4376 "transform_hlds.term_constr_build.c"
          transform_hlds__term_constr_build__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_build__V_3_3, transform_hlds__term_constr_build__V_9_9);
        }
#line 120 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
          {
#line 4383 "transform_hlds.term_constr_build.c"
            {
#line 4385 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_data____Unify____abstract_proc_0_0(transform_hlds__term_constr_build__V_4_4, transform_hlds__term_constr_build__V_10_10);
            }
#line 120 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
              {
#line 4392 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4];
#line 4394 "transform_hlds.term_constr_build.c"
                {
#line 4396 "transform_hlds.term_constr_build.c"
                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_19_19, ((MR_Box) (transform_hlds__term_constr_build__V_5_5)), ((MR_Box) (transform_hlds__term_constr_build__V_11_11)));
                }
#line 120 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
                  {
#line 4403 "transform_hlds.term_constr_build.c"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_6_6 == transform_hlds__term_constr_build__V_12_12);
#line 120 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
                      {
#line 4409 "transform_hlds.term_constr_build.c"
                        transform_hlds__term_constr_build__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2];
#line 4411 "transform_hlds.term_constr_build.c"
                        {
#line 4413 "transform_hlds.term_constr_build.c"
                          transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_build__V_7_7)), ((MR_Box) (transform_hlds__term_constr_build__V_13_13)));
                        }
#line 120 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 120 "term_constr_build.m"
                          {
#line 4420 "transform_hlds.term_constr_build.c"
                            transform_hlds__term_constr_build__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[8];
#line 4422 "transform_hlds.term_constr_build.c"
                            {
#line 4424 "transform_hlds.term_constr_build.c"
                              return transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_build__V_8_8)), ((MR_Box) (transform_hlds__term_constr_build__V_14_14)));
                            }
#line 120 "term_constr_build.m"
                          }
#line 120 "term_constr_build.m"
                      }
#line 120 "term_constr_build.m"
                  }
#line 120 "term_constr_build.m"
              }
#line 120 "term_constr_build.m"
          }
#line 120 "term_constr_build.m"
      }
#line 120 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 120 "term_constr_build.m"
  }
#line 120 "term_constr_build.m"
}

#line 97 "term_constr_build.m"
void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0(
#line 97 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 97 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 97 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 97 "term_constr_build.m"
{
#line 97 "term_constr_build.m"
  {
#line 97 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 97 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_12 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 97 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_13 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 97 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_12 == transform_hlds__term_constr_build__CastY_13);
#line 97 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 4470 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 97 "term_constr_build.m"
    else
#line 97 "term_constr_build.m"
      {
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10;

#line 97 "term_constr_build.m"
        {
#line 97 "term_constr_build.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_constr_build__V_10_10, transform_hlds__term_constr_build__V_4_4, transform_hlds__term_constr_build__V_7_7);
        }
#line 4496 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_10_10 == (MR_Integer) 0);
#line 97 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 97 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 97 "term_constr_build.m"
          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_10_10;
#line 97 "term_constr_build.m"
        else
#line 97 "term_constr_build.m"
          {
#line 97 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_11_11;
#line 97 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_17_17 = (MR_Integer) transform_hlds__term_constr_build__V_5_5;
#line 97 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_18_18 = (MR_Integer) transform_hlds__term_constr_build__V_8_8;

#line 97 "term_constr_build.m"
            {
#line 97 "term_constr_build.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_11_11, transform_hlds__term_constr_build__V_17_17, transform_hlds__term_constr_build__V_18_18);
            }
#line 4520 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_11_11 == (MR_Integer) 0);
#line 97 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 97 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 97 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_11_11;
#line 97 "term_constr_build.m"
            else
#line 97 "term_constr_build.m"
              {
#line 97 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_19_19 = (MR_Integer) transform_hlds__term_constr_build__V_6_6;
#line 97 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_20_20 = (MR_Integer) transform_hlds__term_constr_build__V_9_9;

#line 97 "term_constr_build.m"
                {
#line 97 "term_constr_build.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_build__HeadVar__1_1, transform_hlds__term_constr_build__V_19_19, transform_hlds__term_constr_build__V_20_20);
#line 97 "term_constr_build.m"
                  return;
                }
#line 97 "term_constr_build.m"
              }
#line 97 "term_constr_build.m"
          }
#line 97 "term_constr_build.m"
      }
#line 97 "term_constr_build.m"
  }
#line 97 "term_constr_build.m"
}

#line 97 "term_constr_build.m"
MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0(
#line 97 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 97 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 97 "term_constr_build.m"
{
#line 97 "term_constr_build.m"
  {
#line 97 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 97 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_9 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 97 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_10 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 97 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_9 == transform_hlds__term_constr_build__CastY_10);
#line 97 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 97 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 97 "term_constr_build.m"
    else
#line 97 "term_constr_build.m"
      {
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 97 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4596 "transform_hlds.term_constr_build.c"
        {
#line 4598 "transform_hlds.term_constr_build.c"
          transform_hlds__term_constr_build__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_constr_build__V_3_3, transform_hlds__term_constr_build__V_6_6);
        }
#line 97 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 97 "term_constr_build.m"
          {
#line 4605 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_4_4 == transform_hlds__term_constr_build__V_7_7);
#line 97 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 4609 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_5_5 == transform_hlds__term_constr_build__V_8_8);
#line 97 "term_constr_build.m"
          }
#line 97 "term_constr_build.m"
      }
#line 97 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 97 "term_constr_build.m"
  }
#line 97 "term_constr_build.m"
}

#line 631 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
#line 631 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 631 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 631 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 631 "term_constr_build.m"
{
#line 631 "term_constr_build.m"
  {
#line 631 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 631 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_17 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 631 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_18 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 631 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_17 == transform_hlds__term_constr_build__CastY_18);
#line 631 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 4646 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 631 "term_constr_build.m"
    else
#line 631 "term_constr_build.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 631 "term_constr_build.m"
        {
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));

#line 631 "term_constr_build.m"
          if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 631 "term_constr_build.m"
            {
#line 631 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));

#line 631 "term_constr_build.m"
              {
#line 631 "term_constr_build.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[6], transform_hlds__term_constr_build__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_build__V_22_22)), ((MR_Box) (transform_hlds__term_constr_build__V_16_16)));
#line 631 "term_constr_build.m"
                return;
              }
#line 631 "term_constr_build.m"
            }
#line 631 "term_constr_build.m"
          else
#line 4675 "transform_hlds.term_constr_build.c"
            *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 2;
#line 631 "term_constr_build.m"
        }
#line 631 "term_constr_build.m"
      else
#line 631 "term_constr_build.m"
        {
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));

#line 631 "term_constr_build.m"
          if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4690 "transform_hlds.term_constr_build.c"
            *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 1;
#line 631 "term_constr_build.m"
          else
#line 631 "term_constr_build.m"
            {
#line 631 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));
#line 631 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)));
#line 631 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_8_8;

#line 631 "term_constr_build.m"
              {
#line 631 "term_constr_build.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], &transform_hlds__term_constr_build__V_8_8, ((MR_Box) (transform_hlds__term_constr_build__V_24_24)), ((MR_Box) (transform_hlds__term_constr_build__V_6_6)));
              }
#line 4708 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_8_8 == (MR_Integer) 0);
#line 631 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 631 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 631 "term_constr_build.m"
                *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_8_8;
#line 631 "term_constr_build.m"
              else
#line 631 "term_constr_build.m"
                {
#line 631 "term_constr_build.m"
                  {
#line 631 "term_constr_build.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[7], transform_hlds__term_constr_build__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_build__V_23_23)), ((MR_Box) (transform_hlds__term_constr_build__V_7_7)));
#line 631 "term_constr_build.m"
                    return;
                  }
#line 631 "term_constr_build.m"
                }
#line 631 "term_constr_build.m"
            }
#line 631 "term_constr_build.m"
        }
#line 631 "term_constr_build.m"
  }
#line 631 "term_constr_build.m"
}

#line 631 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
#line 631 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 631 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 631 "term_constr_build.m"
{
#line 631 "term_constr_build.m"
  {
#line 631 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 631 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_9 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 631 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_10 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 631 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_9 == transform_hlds__term_constr_build__CastY_10);
#line 631 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 631 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 631 "term_constr_build.m"
    else
#line 631 "term_constr_build.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 631 "term_constr_build.m"
        {
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__TypeInfo_11_11;
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_8_8;

#line 631 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 631 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 631 "term_constr_build.m"
            {
#line 631 "term_constr_build.m"
              transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 4783 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[6];
#line 4785 "transform_hlds.term_constr_build.c"
              {
#line 4787 "transform_hlds.term_constr_build.c"
                return transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_constr_build__V_7_7)), ((MR_Box) (transform_hlds__term_constr_build__V_8_8)));
              }
#line 631 "term_constr_build.m"
            }
#line 631 "term_constr_build.m"
        }
#line 631 "term_constr_build.m"
      else
#line 631 "term_constr_build.m"
        {
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__TypeInfo_12_12;
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__TypeInfo_13_13;
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_5_5;
#line 631 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_6_6;

#line 631 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 631 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 631 "term_constr_build.m"
            {
#line 631 "term_constr_build.m"
              transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 631 "term_constr_build.m"
              transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 4821 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3];
#line 4823 "transform_hlds.term_constr_build.c"
              {
#line 4825 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_constr_build__V_3_3)), ((MR_Box) (transform_hlds__term_constr_build__V_5_5)));
              }
#line 631 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 631 "term_constr_build.m"
                {
#line 4832 "transform_hlds.term_constr_build.c"
                  transform_hlds__term_constr_build__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[7];
#line 4834 "transform_hlds.term_constr_build.c"
                  {
#line 4836 "transform_hlds.term_constr_build.c"
                    return transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_constr_build__V_4_4)), ((MR_Box) (transform_hlds__term_constr_build__V_6_6)));
                  }
#line 631 "term_constr_build.m"
                }
#line 631 "term_constr_build.m"
            }
#line 631 "term_constr_build.m"
        }
#line 631 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 631 "term_constr_build.m"
  }
#line 631 "term_constr_build.m"
}

#line 1277 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1(
#line 1277 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1277 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1277 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 1277 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3)
#line 1277 "term_constr_build.m"
{
#line 1277 "term_constr_build.m"
  {
#line 1277 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1277 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1277 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv0_HeadVar__6_30;

#line 1277 "term_constr_build.m"
    {
#line 1277 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1277__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Integer) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv0_HeadVar__6_30);
    }
#line 1277 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1277 "term_constr_build.m"
      {
#line 1277 "term_constr_build.m"
        *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__6_30));
#line 1277 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1277 "term_constr_build.m"
      }
#line 1277 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1277 "term_constr_build.m"
  }
#line 1277 "term_constr_build.m"
}

#line 1265 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_9,
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1265 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Ctors_11,
#line 1265 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12)
#line 1265 "term_constr_build.m"
{
#line 1269 "term_constr_build.m"
  {
#line 1269 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1269 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__FindUpperBound_13;
#line 1296 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__Bound0_25;
#line 1289 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv1_Bound0_25;

#line 1277 "term_constr_build.m"
    {
#line 1277 "term_constr_build.m"
      transform_hlds__term_constr_build__FindUpperBound_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1277 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[2]));
#line 1277 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 1) = ((MR_Box) (transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1));
#line 1277 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1277 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 3) = ((MR_Box) (transform_hlds__term_constr_build__Norm_7));
#line 1277 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 4) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_8));
#line 1277 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 5) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_10));
#line 1277 "term_constr_build.m"
    }
#line 1289 "term_constr_build.m"
    {
#line 1289 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__term_constr_build__FindUpperBound_13, transform_hlds__term_constr_build__Ctors_11, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_build__conv1_Bound0_25);
    }
#line 1289 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1289 "term_constr_build.m"
      {
#line 1289 "term_constr_build.m"
        transform_hlds__term_constr_build__Bound0_25 = ((MR_Integer) transform_hlds__term_constr_build__conv1_Bound0_25);
#line 1289 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1289 "term_constr_build.m"
      }
#line 1296 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1292 "term_constr_build.m"
      {
#line 1290 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__Bound0_25 == (MR_Integer) 0);
#line 1292 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 1291 "term_constr_build.m"
          {
#line 1291 "term_constr_build.m"
            {
#line 1291 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.upper_bound_constraints\'/6", (MR_String) "zero upper bound");
#line 1291 "term_constr_build.m"
              return;
            }
#line 1291 "term_constr_build.m"
          }
#line 1292 "term_constr_build.m"
        else
#line 1293 "term_constr_build.m"
          {
#line 1293 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_37_37;
#line 1293 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_38_38;
#line 1293 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1293 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1293 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_43_43;

#line 1294 "term_constr_build.m"
            {
#line 1294 "term_constr_build.m"
              transform_hlds__term_constr_build__V_40_40 = libs__rat__one_0_f_0();
            }
#line 1294 "term_constr_build.m"
            {
#line 1294 "term_constr_build.m"
              transform_hlds__term_constr_build__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1294 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_39_39, 0) = ((MR_Box) (transform_hlds__term_constr_build__Var_9));
#line 1294 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_40_40));
#line 1294 "term_constr_build.m"
            }
#line 1294 "term_constr_build.m"
            {
#line 1294 "term_constr_build.m"
              transform_hlds__term_constr_build__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_38_38, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 1294 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1294 "term_constr_build.m"
            }
#line 1294 "term_constr_build.m"
            {
#line 1294 "term_constr_build.m"
              transform_hlds__term_constr_build__V_43_43 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__Bound0_25);
            }
#line 1294 "term_constr_build.m"
            {
#line 1294 "term_constr_build.m"
              transform_hlds__term_constr_build__V_37_37 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__V_38_38, (MR_Integer) 0, transform_hlds__term_constr_build__V_43_43);
            }
#line 1294 "term_constr_build.m"
            {
#line 1294 "term_constr_build.m"
              MR_Word base;
#line 1294 "term_constr_build.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "term_constr_build.m"
              *transform_hlds__term_constr_build__Constraints_12 = base;
#line 1294 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_37_37));
#line 1294 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1294 "term_constr_build.m"
            }
#line 1293 "term_constr_build.m"
          }
#line 1292 "term_constr_build.m"
      }
#line 1296 "term_constr_build.m"
    else
#line 1297 "term_constr_build.m"
      *transform_hlds__term_constr_build__Constraints_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1269 "term_constr_build.m"
  }
#line 1265 "term_constr_build.m"
}

#line 1252 "term_constr_build.m"
static MR_Integer MR_CALL 
transform_hlds__term_constr_build__lower_bound_4_f_0(
#line 1252 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_6,
#line 1252 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_7,
#line 1252 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_8,
#line 1252 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constructor_9)
#line 1252 "term_constr_build.m"
{
#line 1254 "term_constr_build.m"
  {
#line 1254 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1254 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__LowerBound_10;
#line 1254 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 2)));
#line 1254 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 3)));
#line 1254 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__Arity_16;
#line 1254 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ConsId_17;
#line 1255 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 0)));
#line 1255 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 1)));
#line 1255 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 4)));

#line 1256 "term_constr_build.m"
    {
#line 1256 "term_constr_build.m"
      transform_hlds__term_constr_build__Arity_16 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, transform_hlds__term_constr_build__Args_14);
    }
#line 1257 "term_constr_build.m"
    {
#line 1257 "term_constr_build.m"
      transform_hlds__term_constr_build__ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1257 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 1) = ((MR_Box) (transform_hlds__term_constr_build__SymName_13));
#line 1257 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 2) = ((MR_Box) (transform_hlds__term_constr_build__Arity_16));
#line 1257 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 3) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_8));
#line 1257 "term_constr_build.m"
    }
#line 1258 "term_constr_build.m"
    {
#line 1258 "term_constr_build.m"
      return transform_hlds__term_constr_build__LowerBound_10 = transform_hlds__term_norm__functor_lower_bound_4_f_0(transform_hlds__term_constr_build__ModuleInfo_7, transform_hlds__term_constr_build__Norm_6, transform_hlds__term_constr_build__TypeCtor_8, transform_hlds__term_constr_build__ConsId_17);
    }
#line 1254 "term_constr_build.m"
    return transform_hlds__term_constr_build__LowerBound_10;
#line 1254 "term_constr_build.m"
  }
#line 1252 "term_constr_build.m"
}

#line 1240 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_3(
#line 1240 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1240 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1240 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 1240 "term_constr_build.m"
{
#line 1240 "term_constr_build.m"
  {
#line 1240 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_3;
#line 1240 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1240 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv1_HeadVar__3_3;

#line 1240 "term_constr_build.m"
    {
#line 1240 "term_constr_build.m"
      transform_hlds__term_constr_build__conv1_HeadVar__3_3 = mercury__int__min_2_f_0(((MR_Integer) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Integer) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 1240 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv1_HeadVar__3_3));
#line 1240 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_3;
#line 1240 "term_constr_build.m"
  }
#line 1240 "term_constr_build.m"
}

#line 1223 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_2(
#line 1223 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1223 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1223 "term_constr_build.m"
{
#line 1223 "term_constr_build.m"
  {
#line 1223 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1223 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1223 "term_constr_build.m"
    {
#line 1223 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1223__1_1_p_0(((MR_Integer) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1223 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1223 "term_constr_build.m"
  }
#line 1223 "term_constr_build.m"
}

#line 1218 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_1(
#line 1218 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1218 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1218 "term_constr_build.m"
{
#line 1218 "term_constr_build.m"
  {
#line 1218 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 1218 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1218 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv0_LowerBound_10;

#line 1218 "term_constr_build.m"
    {
#line 1218 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_LowerBound_10 = transform_hlds__term_constr_build__lower_bound_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1218 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv0_LowerBound_10));
#line 1218 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 1218 "term_constr_build.m"
  }
#line 1218 "term_constr_build.m"
}

#line 1214 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0(
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_9,
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 1214 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constructors_11,
#line 1214 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Polyhedron_12)
#line 1214 "term_constr_build.m"
{
#line 1217 "term_constr_build.m"
  {
#line 1217 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1217 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1217 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CtorSizes_13;
#line 1217 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ZeroSizeCtors_15;
#line 1217 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonZeroSizeCtors_16;
#line 1217 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Constraints_19;
#line 1217 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;

#line 1218 "term_constr_build.m"
    {
#line 1218 "term_constr_build.m"
      transform_hlds__term_constr_build__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_5[1]));
#line 1218 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 1) = ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_1));
#line 1218 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1218 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 3) = ((MR_Box) (transform_hlds__term_constr_build__Norm_7));
#line 1218 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 4) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_8));
#line 1218 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 5) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_9));
#line 1218 "term_constr_build.m"
    }
#line 1218 "term_constr_build.m"
    {
#line 1218 "term_constr_build.m"
      transform_hlds__term_constr_build__CtorSizes_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, transform_hlds__term_constr_build__TypeCtorInfo_60_60, transform_hlds__term_constr_build__V_27_27, transform_hlds__term_constr_build__Constructors_11);
    }
#line 1223 "term_constr_build.m"
    {
#line 1223 "term_constr_build.m"
      mercury__list__filter_4_p_0(transform_hlds__term_constr_build__TypeCtorInfo_60_60, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[10], transform_hlds__term_constr_build__CtorSizes_13, &transform_hlds__term_constr_build__ZeroSizeCtors_15, &transform_hlds__term_constr_build__NonZeroSizeCtors_16);
    }
#line 1234 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__NonZeroSizeCtors_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1230 "term_constr_build.m"
      if ((transform_hlds__term_constr_build__ZeroSizeCtors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1228 "term_constr_build.m"
        {
#line 1229 "term_constr_build.m"
          {
#line 1229 "term_constr_build.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.bounds_on_var\'/6", (MR_String) "no other constructors for type");
#line 1229 "term_constr_build.m"
            return;
          }
#line 1228 "term_constr_build.m"
        }
#line 1230 "term_constr_build.m"
      else
#line 1231 "term_constr_build.m"
        {
#line 1231 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_47_47;
#line 1231 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_48_48;
#line 1231 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_49_49;
#line 1231 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_50_50;
#line 1231 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_53_53;

#line 1232 "term_constr_build.m"
          {
#line 1232 "term_constr_build.m"
            transform_hlds__term_constr_build__V_50_50 = libs__rat__one_0_f_0();
          }
#line 1232 "term_constr_build.m"
          {
#line 1232 "term_constr_build.m"
            transform_hlds__term_constr_build__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 0) = ((MR_Box) (transform_hlds__term_constr_build__Var_10));
#line 1232 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_50_50));
#line 1232 "term_constr_build.m"
          }
#line 1232 "term_constr_build.m"
          {
#line 1232 "term_constr_build.m"
            transform_hlds__term_constr_build__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "term_constr_build.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_48_48, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_49_49));
#line 1232 "term_constr_build.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1232 "term_constr_build.m"
          }
#line 1232 "term_constr_build.m"
          {
#line 1232 "term_constr_build.m"
            transform_hlds__term_constr_build__V_53_53 = libs__rat__zero_0_f_0();
          }
#line 1232 "term_constr_build.m"
          {
#line 1232 "term_constr_build.m"
            transform_hlds__term_constr_build__V_47_47 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__V_48_48, (MR_Integer) 1, transform_hlds__term_constr_build__V_53_53);
          }
#line 1232 "term_constr_build.m"
          {
#line 1232 "term_constr_build.m"
            transform_hlds__term_constr_build__Constraints_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "term_constr_build.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_19, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_47_47));
#line 1232 "term_constr_build.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1232 "term_constr_build.m"
          }
#line 1231 "term_constr_build.m"
        }
#line 1234 "term_constr_build.m"
    else
#line 1235 "term_constr_build.m"
      {
#line 1235 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__C_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__NonZeroSizeCtors_16, (MR_Integer) 0)));
#line 1235 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Cs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__NonZeroSizeCtors_16, (MR_Integer) 1)));
#line 1235 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__UpperBoundConstr_22;
#line 1235 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__LowerBoundConstr_24;

#line 1236 "term_constr_build.m"
        {
#line 1236 "term_constr_build.m"
          transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(transform_hlds__term_constr_build__Norm_7, transform_hlds__term_constr_build__ModuleInfo_8, transform_hlds__term_constr_build__Var_10, transform_hlds__term_constr_build__TypeCtor_9, transform_hlds__term_constr_build__Constructors_11, &transform_hlds__term_constr_build__UpperBoundConstr_22);
        }
#line 1243 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__ZeroSizeCtors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1239 "term_constr_build.m"
          {
#line 1239 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__LowerBound_23;
#line 1239 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1239 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1239 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_41_41;
#line 1239 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_42_42;
#line 1239 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_45_45;
#line 1240 "term_constr_build.m"
            MR_Box transform_hlds__term_constr_build__conv2_LowerBound_23;

#line 1240 "term_constr_build.m"
            {
#line 1240 "term_constr_build.m"
              transform_hlds__term_constr_build__conv2_LowerBound_23 = mercury__list__foldl_3_f_0(transform_hlds__term_constr_build__TypeCtorInfo_60_60, transform_hlds__term_constr_build__TypeCtorInfo_60_60, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[11], transform_hlds__term_constr_build__Cs_21, ((MR_Box) (transform_hlds__term_constr_build__C_20)));
            }
#line 1240 "term_constr_build.m"
            transform_hlds__term_constr_build__LowerBound_23 = ((MR_Integer) transform_hlds__term_constr_build__conv2_LowerBound_23);
#line 1242 "term_constr_build.m"
            {
#line 1242 "term_constr_build.m"
              transform_hlds__term_constr_build__V_42_42 = libs__rat__one_0_f_0();
            }
#line 1242 "term_constr_build.m"
            {
#line 1242 "term_constr_build.m"
              transform_hlds__term_constr_build__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_41_41, 0) = ((MR_Box) (transform_hlds__term_constr_build__Var_10));
#line 1242 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_41_41, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_42_42));
#line 1242 "term_constr_build.m"
            }
#line 1242 "term_constr_build.m"
            {
#line 1242 "term_constr_build.m"
              transform_hlds__term_constr_build__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_40_40, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_41_41));
#line 1242 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "term_constr_build.m"
            }
#line 1242 "term_constr_build.m"
            {
#line 1242 "term_constr_build.m"
              transform_hlds__term_constr_build__V_45_45 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__LowerBound_23);
            }
#line 1242 "term_constr_build.m"
            {
#line 1242 "term_constr_build.m"
              transform_hlds__term_constr_build__V_39_39 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__V_40_40, (MR_Integer) 2, transform_hlds__term_constr_build__V_45_45);
            }
#line 1242 "term_constr_build.m"
            {
#line 1242 "term_constr_build.m"
              transform_hlds__term_constr_build__LowerBoundConstr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__LowerBoundConstr_24, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 1242 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__LowerBoundConstr_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "term_constr_build.m"
            }
#line 1239 "term_constr_build.m"
          }
#line 1243 "term_constr_build.m"
        else
#line 1244 "term_constr_build.m"
          {
#line 1244 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_30_30;
#line 1244 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_31_31;
#line 1244 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_32_32;
#line 1244 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_33_33;
#line 1244 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_36_36;

#line 1246 "term_constr_build.m"
            {
#line 1246 "term_constr_build.m"
              transform_hlds__term_constr_build__V_33_33 = libs__rat__one_0_f_0();
            }
#line 1246 "term_constr_build.m"
            {
#line 1246 "term_constr_build.m"
              transform_hlds__term_constr_build__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_32_32, 0) = ((MR_Box) (transform_hlds__term_constr_build__Var_10));
#line 1246 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_32_32, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_33_33));
#line 1246 "term_constr_build.m"
            }
#line 1246 "term_constr_build.m"
            {
#line 1246 "term_constr_build.m"
              transform_hlds__term_constr_build__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_31_31, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_32_32));
#line 1246 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1246 "term_constr_build.m"
            }
#line 1246 "term_constr_build.m"
            {
#line 1246 "term_constr_build.m"
              transform_hlds__term_constr_build__V_36_36 = libs__rat__zero_0_f_0();
            }
#line 1246 "term_constr_build.m"
            {
#line 1246 "term_constr_build.m"
              transform_hlds__term_constr_build__V_30_30 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__V_31_31, (MR_Integer) 2, transform_hlds__term_constr_build__V_36_36);
            }
#line 1246 "term_constr_build.m"
            {
#line 1246 "term_constr_build.m"
              transform_hlds__term_constr_build__LowerBoundConstr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__LowerBoundConstr_24, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_30_30));
#line 1246 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__LowerBoundConstr_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1246 "term_constr_build.m"
            }
#line 1244 "term_constr_build.m"
          }
#line 1248 "term_constr_build.m"
        {
#line 1248 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_19 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, transform_hlds__term_constr_build__LowerBoundConstr_24, transform_hlds__term_constr_build__UpperBoundConstr_22);
        }
#line 1235 "term_constr_build.m"
      }
#line 1250 "term_constr_build.m"
    {
#line 1250 "term_constr_build.m"
      *transform_hlds__term_constr_build__Polyhedron_12 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_19);
    }
#line 1217 "term_constr_build.m"
  }
#line 1214 "term_constr_build.m"
}

#line 1190 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4(
#line 1190 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1190 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1190 "term_constr_build.m"
{
#line 1190 "term_constr_build.m"
  {
#line 1190 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1190 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1190 "term_constr_build.m"
    {
#line 1190 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1190__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1190 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1190 "term_constr_build.m"
  }
#line 1190 "term_constr_build.m"
}

#line 1188 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
#line 1188 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg)
#line 1188 "term_constr_build.m"
{
#line 1188 "term_constr_build.m"
  {
#line 1188 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1188 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1188 "term_constr_build.m"
    {
#line 1188 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1188__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))));
    }
#line 1188 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1188 "term_constr_build.m"
  }
#line 1188 "term_constr_build.m"
}

#line 1150 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
#line 1150 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1150 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1150 "term_constr_build.m"
{
#line 1150 "term_constr_build.m"
  {
#line 1150 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1150 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1150 "term_constr_build.m"
    {
#line 1150 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1150__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1150 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1150 "term_constr_build.m"
  }
#line 1150 "term_constr_build.m"
}

#line 1150 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
#line 1150 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1150 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1150 "term_constr_build.m"
{
#line 1150 "term_constr_build.m"
  {
#line 1150 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1150 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1150 "term_constr_build.m"
    {
#line 1150 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1150 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1150 "term_constr_build.m"
  }
#line 1150 "term_constr_build.m"
}

#line 1137 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
#line 1137 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1137 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 1137 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6)
#line 1137 "term_constr_build.m"
{
#line 1140 "term_constr_build.m"
  {
#line 1140 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1140 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 1140 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1140 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1144 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1147 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_187_187 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_197_197 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1147 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_198_198 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);

#line 1177 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 1146 "term_constr_build.m"
      {
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 0)));
#line 1146 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 1)));
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CallArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 2)));
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CallSizeArgs0_16;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Zeros_17;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CallSizeArgs_18;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ModuleInfo_19;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ProcInfo_21;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TermInfo_22;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__MaybeFailureConstrs_23;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FailureConstraints_24;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FailurePolyhedron_31;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_72_72;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_73_73;
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 3)));
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 4)));
#line 1146 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 5)));
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_93_93;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_94_94;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_95_95;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_96_96;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_97_97;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_98_98;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_99_99;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_100_100;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_101_101;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_102_102;
#line 1149 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_103_103;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_104_104;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_105_105;
#line 1149 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_106_106;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_107_107;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_108_108;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_109_109;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_110_110;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_111_111;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_112_112;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_113_113;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_114_114;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_115_115;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_116_116;
#line 1152 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_117_117;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_118_118;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_119_119;
#line 1152 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_120_120;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_20_20;

#line 1148 "term_constr_build.m"
        {
#line 1148 "term_constr_build.m"
          transform_hlds__term_constr_build__CallSizeArgs0_16 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_189_189, transform_hlds__term_constr_build__CallArgs_11);
        }
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__Zeros_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1149 "term_constr_build.m"
        transform_hlds__term_constr_build__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1150 "term_constr_build.m"
        {
#line 1150 "term_constr_build.m"
          transform_hlds__term_constr_build__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1]));
#line 1150 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1));
#line 1150 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1150 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 3) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_17));
#line 1150 "term_constr_build.m"
        }
#line 1150 "term_constr_build.m"
        {
#line 1150 "term_constr_build.m"
          transform_hlds__term_constr_build__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[2]));
#line 1150 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2));
#line 1150 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1150 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_73_73));
#line 1150 "term_constr_build.m"
        }
#line 1150 "term_constr_build.m"
        {
#line 1150 "term_constr_build.m"
          transform_hlds__term_constr_build__CallSizeArgs_18 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__V_72_72, transform_hlds__term_constr_build__CallSizeArgs0_16);
        }
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_107_107 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1152 "term_constr_build.m"
        transform_hlds__term_constr_build__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1153 "term_constr_build.m"
        {
#line 1153 "term_constr_build.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_constr_build__ModuleInfo_19, transform_hlds__term_constr_build__PredId_9, transform_hlds__term_constr_build__ProcId_10, &transform_hlds__term_constr_build__V_20_20, &transform_hlds__term_constr_build__ProcInfo_21);
        }
#line 1154 "term_constr_build.m"
        {
#line 1154 "term_constr_build.m"
          hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_build__ProcInfo_21, &transform_hlds__term_constr_build__TermInfo_22);
        }
#line 1155 "term_constr_build.m"
        {
#line 1155 "term_constr_build.m"
          transform_hlds__term_constr_build__MaybeFailureConstrs_23 = transform_hlds__term_constr_main__failure_constrs_1_f_0(transform_hlds__term_constr_build__TermInfo_22);
        }
#line 1159 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__MaybeFailureConstrs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "term_constr_build.m"
          transform_hlds__term_constr_build__FailureConstraints_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1159 "term_constr_build.m"
        else
#line 1160 "term_constr_build.m"
          {
#line 1160 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__CalleeFailurePolyhedron_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__MaybeFailureConstrs_23, (MR_Integer) 0)));
#line 1160 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__CalleeFailureConstraints_26;

#line 1161 "term_constr_build.m"
            {
#line 1161 "term_constr_build.m"
              transform_hlds__term_constr_build__CalleeFailureConstraints_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_build__CalleeFailurePolyhedron_25);
            }
#line 1166 "term_constr_build.m"
            if ((transform_hlds__term_constr_build__CalleeFailureConstraints_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1164 "term_constr_build.m"
              transform_hlds__term_constr_build__FailureConstraints_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1166 "term_constr_build.m"
            else
#line 1167 "term_constr_build.m"
              {
#line 1167 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__CalleeHeadVars_29;
#line 1167 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SubstMap_30;

#line 1168 "term_constr_build.m"
                {
#line 1168 "term_constr_build.m"
                  transform_hlds__term_constr_build__CalleeHeadVars_29 = transform_hlds__term_constr_main__head_vars_1_f_0(transform_hlds__term_constr_build__TermInfo_22);
                }
#line 1169 "term_constr_build.m"
                {
#line 1169 "term_constr_build.m"
                  transform_hlds__term_constr_build__SubstMap_30 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(transform_hlds__term_constr_build__CallSizeArgs_18, transform_hlds__term_constr_build__CalleeHeadVars_29);
                }
#line 1171 "term_constr_build.m"
                {
#line 1171 "term_constr_build.m"
                  transform_hlds__term_constr_build__FailureConstraints_24 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(transform_hlds__term_constr_build__CalleeFailureConstraints_26, transform_hlds__term_constr_build__SubstMap_30);
                }
#line 1167 "term_constr_build.m"
              }
#line 1160 "term_constr_build.m"
          }
#line 1175 "term_constr_build.m"
        {
#line 1175 "term_constr_build.m"
          transform_hlds__term_constr_build__FailurePolyhedron_31 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__FailureConstraints_24);
        }
#line 1176 "term_constr_build.m"
        {
#line 1176 "term_constr_build.m"
          MR_Word base;
#line 1176 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1176 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__FailurePolyhedron_31));
#line 1176 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1176 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1176 "term_constr_build.m"
        }
#line 1146 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1146 "term_constr_build.m"
      }
#line 1177 "term_constr_build.m"
    else
#line 1177 "term_constr_build.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 1181 "term_constr_build.m"
        {
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Unification_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 3)));
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Var_37;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ConsId_38;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Type_42;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__TypeCtor_43;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Constructors0_44;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Constructors_56;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__SizeVar_57;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Norm_58;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Polyhedron_59;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_60_60;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_70_70;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_71_71;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__SizeVarMap_77;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ModuleInfo_78;
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 0)));
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 1)));
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 2)));
#line 1181 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 4)));
#line 1182 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1182 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1182 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_41_41;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_135_135;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_136_136;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_137_137;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_138_138;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_139_139;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_140_140;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_141_141;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_142_142;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_143_143;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_144_144;
#line 1185 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__V_145_145;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_146_146;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_147_147;
#line 1185 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_148_148;
#line 1199 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ConsName_45;
#line 1199 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__ConsArity_46;
#line 1199 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ConsTypeCtor_47;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_149_149;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_150_150;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_151_151;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_152_152;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_153_153;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_154_154;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_155_155;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_156_156;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_157_157;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_158_158;
#line 1202 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__V_159_159;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_160_160;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_161_161;
#line 1202 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_162_162;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_163_163;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_164_164;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_165_165;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_166_166;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_167_167;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_168_168;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_169_169;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_170_170;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_171_171;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_172_172;
#line 1204 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__V_173_173;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_174_174;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_175_175;
#line 1204 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_176_176;

#line 1182 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__Unification_35)) == (MR_mktag((MR_Integer) 1)));
#line 1182 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 1182 "term_constr_build.m"
            {
#line 1182 "term_constr_build.m"
              transform_hlds__term_constr_build__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 0)));
#line 1182 "term_constr_build.m"
              transform_hlds__term_constr_build__ConsId_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 1)));
#line 1182 "term_constr_build.m"
              transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 2)));
#line 1182 "term_constr_build.m"
              transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 3)));
#line 1182 "term_constr_build.m"
              transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 4)));
#line 1182 "term_constr_build.m"
              transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 5)));
#line 1182 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_60_60 == (MR_Integer) 0);
#line 1181 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 1181 "term_constr_build.m"
                {
#line 1183 "term_constr_build.m"
                  {
#line 1183 "term_constr_build.m"
                    parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__term_constr_build__V_191_191, transform_hlds__term_constr_build__Var_37, &transform_hlds__term_constr_build__Type_42);
                  }
#line 1184 "term_constr_build.m"
                  {
#line 1184 "term_constr_build.m"
                    parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__Type_42, &transform_hlds__term_constr_build__TypeCtor_43);
                  }
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_135_135 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__ModuleInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1185 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1186 "term_constr_build.m"
                  {
#line 1186 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = check_hlds__type_util__type_constructors_3_p_0(transform_hlds__term_constr_build__ModuleInfo_78, transform_hlds__term_constr_build__Type_42, &transform_hlds__term_constr_build__Constructors0_44);
                  }
#line 1181 "term_constr_build.m"
                  if (transform_hlds__term_constr_build__succeeded)
#line 1181 "term_constr_build.m"
                    {
#line 1187 "term_constr_build.m"
                      transform_hlds__term_constr_build__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_build__ConsId_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1187 "term_constr_build.m"
                      if (transform_hlds__term_constr_build__succeeded)
#line 1187 "term_constr_build.m"
                        {
#line 1187 "term_constr_build.m"
                          transform_hlds__term_constr_build__ConsName_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 1)));
#line 1187 "term_constr_build.m"
                          transform_hlds__term_constr_build__ConsArity_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 2)));
#line 1187 "term_constr_build.m"
                          transform_hlds__term_constr_build__ConsTypeCtor_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 3)));
#line 1189 "term_constr_build.m"
                          {
#line 1189 "term_constr_build.m"
                            MR_Word transform_hlds__term_constr_build__FindComplement_48;
#line 1189 "term_constr_build.m"
                            MR_Word transform_hlds__term_constr_build__V_62_62;

#line 1188 "term_constr_build.m"
                            {
#line 1188 "term_constr_build.m"
                              transform_hlds__term_constr_build__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[4]));
#line 1188 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3));
#line 1188 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1188 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 3) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_43));
#line 1188 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 4) = ((MR_Box) (transform_hlds__term_constr_build__ConsTypeCtor_47));
#line 1188 "term_constr_build.m"
                            }
#line 1188 "term_constr_build.m"
                            {
#line 1188 "term_constr_build.m"
                              mercury__require__expect_4_p_0(transform_hlds__term_constr_build__V_62_62, (MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", (MR_String) "mismatched type_ctors");
                            }
#line 1190 "term_constr_build.m"
                            {
#line 1190 "term_constr_build.m"
                              transform_hlds__term_constr_build__FindComplement_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_8[0]));
#line 1190 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4));
#line 1190 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1190 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 3) = ((MR_Box) (transform_hlds__term_constr_build__ConsName_45));
#line 1190 "term_constr_build.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 4) = ((MR_Box) (transform_hlds__term_constr_build__ConsArity_46));
#line 1190 "term_constr_build.m"
                            }
#line 1198 "term_constr_build.m"
                            {
#line 1198 "term_constr_build.m"
                              mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, transform_hlds__term_constr_build__FindComplement_48, transform_hlds__term_constr_build__Constructors0_44, &transform_hlds__term_constr_build__Constructors_56);
                            }
#line 1189 "term_constr_build.m"
                          }
#line 1187 "term_constr_build.m"
                        }
#line 1187 "term_constr_build.m"
                      else
#line 1200 "term_constr_build.m"
                        {
#line 1200 "term_constr_build.m"
                          {
#line 1200 "term_constr_build.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", (MR_String) "non cons cons_id.");
                          }
#line 1200 "term_constr_build.m"
                        }
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_149_149 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__SizeVarMap_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1202 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1203 "term_constr_build.m"
                      {
#line 1203 "term_constr_build.m"
                        transform_hlds__term_constr_build__SizeVar_57 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_77, transform_hlds__term_constr_build__Var_37);
                      }
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_163_163 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_164_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__Norm_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1204 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1205 "term_constr_build.m"
                      {
#line 1205 "term_constr_build.m"
                        transform_hlds__term_constr_build__bounds_on_var_6_p_0(transform_hlds__term_constr_build__Norm_58, transform_hlds__term_constr_build__ModuleInfo_78, transform_hlds__term_constr_build__TypeCtor_43, transform_hlds__term_constr_build__SizeVar_57, transform_hlds__term_constr_build__Constructors_56, &transform_hlds__term_constr_build__Polyhedron_59);
                      }
#line 1207 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1207 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1207 "term_constr_build.m"
                      {
#line 1207 "term_constr_build.m"
                        MR_Word base;
#line 1207 "term_constr_build.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "term_constr_build.m"
                        *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1207 "term_constr_build.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_59));
#line 1207 "term_constr_build.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_70_70));
#line 1207 "term_constr_build.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_71_71));
#line 1207 "term_constr_build.m"
                      }
#line 1207 "term_constr_build.m"
                      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1181 "term_constr_build.m"
                    }
#line 1181 "term_constr_build.m"
                }
#line 1182 "term_constr_build.m"
            }
#line 1181 "term_constr_build.m"
        }
#line 1177 "term_constr_build.m"
      else
#line 1177 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_FALSE;
#line 1140 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1140 "term_constr_build.m"
  }
#line 1137 "term_constr_build.m"
}

#line 1117 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
#line 1117 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1117 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5)
#line 1117 "term_constr_build.m"
{
#line 1126 "term_constr_build.m"
  {
#line 1126 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1126 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoal_6;
#line 1126 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoal0_7;
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1122 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1122 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));

#line 1122 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_13_13 == (MR_Integer) 1);
#line 1122 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1123 "term_constr_build.m"
      {
#line 1123 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(transform_hlds__term_constr_build__Info_4, transform_hlds__term_constr_build__Goal_5, &transform_hlds__term_constr_build__AbstractGoal0_7);
      }
#line 1126 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1125 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractGoal_6 = transform_hlds__term_constr_build__AbstractGoal0_7;
#line 1126 "term_constr_build.m"
    else
#line 1127 "term_constr_build.m"
      {
#line 1127 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonLocalProgVars0_8;
#line 1127 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonLocalProgVars_9;
#line 1127 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonLocalSizeVars_10;
#line 1127 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraints_11;
#line 1127 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FailPoly_12;
#line 1127 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 1127 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_15_15;
#line 1127 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16;
#line 1127 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_34_34;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_35_35;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_36_36;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_37_37;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_38_38;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_42_42;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_43_43;
#line 1129 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_44_44;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_45_45;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_46_46;
#line 1129 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_47_47;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_48_48;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_49_49;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_50_50;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_51_51;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_52_52;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_53_53;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_54_54;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_55_55;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_56_56;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_57_57;
#line 1131 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_58_58;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_59_59;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_60_60;
#line 1131 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_61_61;

#line 1127 "term_constr_build.m"
        {
#line 1127 "term_constr_build.m"
          transform_hlds__term_constr_build__NonLocalProgVars0_8 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__term_constr_build__V_14_14);
        }
#line 1128 "term_constr_build.m"
        {
#line 1128 "term_constr_build.m"
          transform_hlds__term_constr_build__NonLocalProgVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_constr_build__NonLocalProgVars0_8);
        }
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1129 "term_constr_build.m"
        transform_hlds__term_constr_build__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1129 "term_constr_build.m"
        {
#line 1129 "term_constr_build.m"
          transform_hlds__term_constr_build__NonLocalSizeVars_10 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_15_15, transform_hlds__term_constr_build__NonLocalProgVars_9);
        }
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1131 "term_constr_build.m"
        transform_hlds__term_constr_build__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1131 "term_constr_build.m"
        {
#line 1131 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_11 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_build__NonLocalSizeVars_10, transform_hlds__term_constr_build__V_16_16);
        }
#line 1133 "term_constr_build.m"
        {
#line 1133 "term_constr_build.m"
          transform_hlds__term_constr_build__FailPoly_12 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_11);
        }
#line 1134 "term_constr_build.m"
        {
#line 1134 "term_constr_build.m"
          transform_hlds__term_constr_build__AbstractGoal_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__AbstractGoal_6, 0) = ((MR_Box) (transform_hlds__term_constr_build__FailPoly_12));
#line 1134 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__AbstractGoal_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1134 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__AbstractGoal_6, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1134 "term_constr_build.m"
        }
#line 1127 "term_constr_build.m"
      }
#line 1126 "term_constr_build.m"
    return transform_hlds__term_constr_build__AbstractGoal_6;
#line 1126 "term_constr_build.m"
  }
#line 1117 "term_constr_build.m"
}

#line 1080 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
#line 1080 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 1080 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2,
#line 1080 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_3,
#line 1080 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4,
#line 1080 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_5)
#line 1080 "term_constr_build.m"
{
#line 1083 "term_constr_build.m"
  while (MR_TRUE)
#line 1083 "term_constr_build.m"
    {
#line 1083 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 1083 "term_constr_build.m"
      {
#line 1083 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 1083 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1083 "term_constr_build.m"
          {
#line 1083 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_5 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4;
#line 1083 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_3 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2;
#line 1083 "term_constr_build.m"
          }
#line 1083 "term_constr_build.m"
        else
#line 1084 "term_constr_build.m"
          {
#line 1084 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ProgVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 1084 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ProgVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 1085 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_16_16;
#line 1085 "term_constr_build.m"
            MR_Box transform_hlds__term_constr_build__conv0_V_16_16;

#line 1085 "term_constr_build.m"
            {
#line 1085 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4, ((MR_Box) (transform_hlds__term_constr_build__ProgVar_12)), &transform_hlds__term_constr_build__conv0_V_16_16);
            }
#line 1085 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 1085 "term_constr_build.m"
              {
#line 1085 "term_constr_build.m"
                transform_hlds__term_constr_build__V_16_16 = ((MR_Word) transform_hlds__term_constr_build__conv0_V_16_16);
#line 1085 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1085 "term_constr_build.m"
              }
#line 1087 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 1086 "term_constr_build.m"
              {
#line 1086 "term_constr_build.m"
                /* direct tailcall eliminated */
#line 1086 "term_constr_build.m"
                {
#line 1086 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__ProgVars_13;

#line 1086 "term_constr_build.m"
                  transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 1086 "term_constr_build.m"
                }
#line 1086 "term_constr_build.m"
                continue;
#line 1086 "term_constr_build.m"
              }
#line 1087 "term_constr_build.m"
            else
#line 1088 "term_constr_build.m"
              {
#line 1088 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SizeVar_17;
#line 1088 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_24_24;
#line 1088 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_25_25;

#line 1088 "term_constr_build.m"
                {
#line 1088 "term_constr_build.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_constr_build__SizeVar_17, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_24_24);
                }
#line 1089 "term_constr_build.m"
                {
#line 1089 "term_constr_build.m"
                  mercury__map__set_4_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__ProgVar_12)), ((MR_Box) (transform_hlds__term_constr_build__SizeVar_17)), transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_25_25);
                }
#line 1090 "term_constr_build.m"
                /* direct tailcall eliminated */
#line 1090 "term_constr_build.m"
                {
#line 1090 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__ProgVars_13;
#line 1090 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0__tmp_copy_2 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_24_24;
#line 1090 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0__tmp_copy_4 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_25_25;

#line 1090 "term_constr_build.m"
                  transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0__tmp_copy_4;
#line 1090 "term_constr_build.m"
                  transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0__tmp_copy_2;
#line 1090 "term_constr_build.m"
                  transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 1090 "term_constr_build.m"
                }
#line 1090 "term_constr_build.m"
                continue;
#line 1088 "term_constr_build.m"
              }
#line 1084 "term_constr_build.m"
          }
#line 1083 "term_constr_build.m"
      }
#line 1083 "term_constr_build.m"
      break;
#line 1083 "term_constr_build.m"
    }
#line 1080 "term_constr_build.m"
}

#line 1061 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__allocate_sizevars_5_p_0(
#line 1061 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadProgVars_6,
#line 1061 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_7,
#line 1061 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__SizeVarMap_8,
#line 1061 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_11,
#line 1061 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_12)
#line 1061 "term_constr_build.m"
{
#line 1064 "term_constr_build.m"
  {
#line 1064 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1064 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap0_10;
#line 1064 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_13_13;
#line 1064 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProgVarsInGoal_20;
#line 1064 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProgVars_21;

#line 1073 "term_constr_build.m"
    {
#line 1073 "term_constr_build.m"
      transform_hlds__term_constr_build__ProgVarsInGoal_20 = hlds__quantification__free_goal_vars_1_f_0(transform_hlds__term_constr_build__Goal_7);
    }
#line 1074 "term_constr_build.m"
    {
#line 1074 "term_constr_build.m"
      transform_hlds__term_constr_build__ProgVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_constr_build__ProgVarsInGoal_20);
    }
#line 1075 "term_constr_build.m"
    {
#line 1075 "term_constr_build.m"
      transform_hlds__term_constr_util__make_size_var_map_4_p_0(transform_hlds__term_constr_build__ProgVars_21, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_11, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_13_13, &transform_hlds__term_constr_build__SizeVarMap0_10);
    }
#line 1066 "term_constr_build.m"
    {
#line 1066 "term_constr_build.m"
      transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(transform_hlds__term_constr_build__HeadProgVars_6, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_13_13, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_12, transform_hlds__term_constr_build__SizeVarMap0_10, transform_hlds__term_constr_build__SizeVarMap_8);
#line 1066 "term_constr_build.m"
      return;
    }
#line 1064 "term_constr_build.m"
  }
#line 1061 "term_constr_build.m"
}

#line 1011 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
#line 1011 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constraints_3)
#line 1011 "term_constr_build.m"
{
#line 1013 "term_constr_build.m"
  {
#line 1013 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1013 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__2_2;
#line 1013 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Polyhedron_4;

#line 1014 "term_constr_build.m"
    {
#line 1014 "term_constr_build.m"
      transform_hlds__term_constr_build__Polyhedron_4 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_3);
    }
#line 1013 "term_constr_build.m"
    {
#line 1013 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_4));
#line 1013 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
    }
#line 1015 "term_constr_build.m"
    {
#line 1015 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_4);
    }
#line 1017 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1016 "term_constr_build.m"
      {
#line 1016 "term_constr_build.m"
        {
#line 1016 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
        }
#line 1016 "term_constr_build.m"
      }
#line 1017 "term_constr_build.m"
    else
#line 1018 "term_constr_build.m"
      {
#line 1018 "term_constr_build.m"
      }
#line 1013 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__2_2;
#line 1013 "term_constr_build.m"
  }
#line 1011 "term_constr_build.m"
}

#line 1000 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1(
#line 1000 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1000 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1000 "term_constr_build.m"
{
#line 1000 "term_constr_build.m"
  {
#line 1000 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 1000 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1000 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__2_2;

#line 1000 "term_constr_build.m"
    {
#line 1000 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1000 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__2_2));
#line 1000 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 1000 "term_constr_build.m"
  }
#line 1000 "term_constr_build.m"
}

#line 978 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(
#line 978 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LeftProgVar_6,
#line 978 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RightProgVar_7,
#line 978 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_8,
#line 978 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 978 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18)
#line 978 "term_constr_build.m"
{
#line 982 "term_constr_build.m"
  {
#line 982 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 982 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 982 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Zeros_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 982 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__LeftSizeVar_12;
#line 982 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__RightSizeVar_13;
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 983 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
#line 988 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeInfo_64_64;

#line 985 "term_constr_build.m"
    {
#line 985 "term_constr_build.m"
      transform_hlds__term_constr_build__LeftSizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_10, transform_hlds__term_constr_build__LeftProgVar_6);
    }
#line 986 "term_constr_build.m"
    {
#line 986 "term_constr_build.m"
      transform_hlds__term_constr_build__RightSizeVar_13 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_10, transform_hlds__term_constr_build__RightProgVar_7);
    }
#line 6966 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeInfo_64_64 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4];
#line 988 "term_constr_build.m"
    {
#line 988 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0(transform_hlds__term_constr_build__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12)), transform_hlds__term_constr_build__Zeros_11);
    }
#line 988 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 989 "term_constr_build.m"
      {
#line 989 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0(transform_hlds__term_constr_build__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13)), transform_hlds__term_constr_build__Zeros_11);
      }
#line 992 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 991 "term_constr_build.m"
      *transform_hlds__term_constr_build__Constraints_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "term_constr_build.m"
    else
#line 998 "term_constr_build.m"
      {
#line 993 "term_constr_build.m"
        {
#line 993 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12)), transform_hlds__term_constr_build__Zeros_11);
        }
#line 994 "term_constr_build.m"
        if (!(transform_hlds__term_constr_build__succeeded))
#line 994 "term_constr_build.m"
          {
#line 994 "term_constr_build.m"
            {
#line 994 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13)), transform_hlds__term_constr_build__Zeros_11);
            }
#line 994 "term_constr_build.m"
          }
#line 998 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 997 "term_constr_build.m"
          {
#line 997 "term_constr_build.m"
            {
#line 997 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_simple_or_assign_unify\'/5", (MR_String) "zero unified with non-zero");
#line 997 "term_constr_build.m"
              return;
            }
#line 997 "term_constr_build.m"
          }
#line 998 "term_constr_build.m"
        else
#line 1001 "term_constr_build.m"
          {
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__NonNegConstrs_14;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Terms_15;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AssignConstr_16;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_23_23;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_24_24;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_26_26;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_27_27;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_28_28;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_29_29;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_30_30;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_31_31;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_34_34;
#line 1001 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_35_35;

#line 1001 "term_constr_build.m"
            {
#line 1001 "term_constr_build.m"
              transform_hlds__term_constr_build__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_24_24, 0) = ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13));
#line 1001 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "term_constr_build.m"
            }
#line 1001 "term_constr_build.m"
            {
#line 1001 "term_constr_build.m"
              transform_hlds__term_constr_build__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_23_23, 0) = ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12));
#line 1001 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_23_23, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_24_24));
#line 1001 "term_constr_build.m"
            }
#line 1000 "term_constr_build.m"
            {
#line 1000 "term_constr_build.m"
              transform_hlds__term_constr_build__NonNegConstrs_14 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[9], transform_hlds__term_constr_build__V_23_23);
            }
#line 1002 "term_constr_build.m"
            {
#line 1002 "term_constr_build.m"
              transform_hlds__term_constr_build__V_27_27 = libs__rat__one_0_f_0();
            }
#line 1002 "term_constr_build.m"
            {
#line 1002 "term_constr_build.m"
              transform_hlds__term_constr_build__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_26_26, 0) = ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_26_26, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_27_27));
#line 1002 "term_constr_build.m"
            }
#line 1002 "term_constr_build.m"
            {
#line 1002 "term_constr_build.m"
              transform_hlds__term_constr_build__V_31_31 = libs__rat__one_0_f_0();
            }
#line 1002 "term_constr_build.m"
            {
#line 1002 "term_constr_build.m"
              transform_hlds__term_constr_build__V_30_30 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_build__V_31_31);
            }
#line 1002 "term_constr_build.m"
            {
#line 1002 "term_constr_build.m"
              transform_hlds__term_constr_build__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_29_29, 0) = ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_29_29, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_30_30));
#line 1002 "term_constr_build.m"
            }
#line 1002 "term_constr_build.m"
            {
#line 1002 "term_constr_build.m"
              transform_hlds__term_constr_build__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_28_28, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_29_29));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "term_constr_build.m"
            }
#line 1002 "term_constr_build.m"
            {
#line 1002 "term_constr_build.m"
              transform_hlds__term_constr_build__Terms_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_15, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_26_26));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_15, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_28_28));
#line 1002 "term_constr_build.m"
            }
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__V_34_34 = libs__rat__zero_0_f_0();
            }
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__AssignConstr_16 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__Terms_15, (MR_Integer) 1, transform_hlds__term_constr_build__V_34_34);
            }
#line 1005 "term_constr_build.m"
            {
#line 1005 "term_constr_build.m"
              transform_hlds__term_constr_build__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_35_35, 0) = ((MR_Box) (transform_hlds__term_constr_build__AssignConstr_16));
#line 1005 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_build__NonNegConstrs_14));
#line 1005 "term_constr_build.m"
            }
#line 1005 "term_constr_build.m"
            {
#line 1005 "term_constr_build.m"
              *transform_hlds__term_constr_build__Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(transform_hlds__term_constr_build__V_35_35);
            }
#line 1001 "term_constr_build.m"
          }
#line 998 "term_constr_build.m"
      }
#line 1005 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_18 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17;
#line 982 "term_constr_build.m"
  }
#line 978 "term_constr_build.m"
}

#line 959 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
#line 959 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_1,
#line 959 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 959 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__3_3,
#line 959 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 959 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__5_5)
#line 959 "term_constr_build.m"
{
#line 963 "term_constr_build.m"
  {
#line 963 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 963 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "term_constr_build.m"
      {
#line 963 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 963 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 963 "term_constr_build.m"
          {
#line 963 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 963 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 963 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 963 "term_constr_build.m"
          }
#line 963 "term_constr_build.m"
      }
#line 963 "term_constr_build.m"
    else
#line 965 "term_constr_build.m"
      {
#line 965 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Arg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 965 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Mode_10;
#line 965 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Type_12;
#line 965 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 965 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_15;
#line 965 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17;
#line 965 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18;

#line 965 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 965 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 965 "term_constr_build.m"
          {
#line 965 "term_constr_build.m"
            transform_hlds__term_constr_build__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 0)));
#line 965 "term_constr_build.m"
            transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 1)));
#line 966 "term_constr_build.m"
            {
#line 966 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(transform_hlds__term_constr_build__VarTypes_1, transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_13, &transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17, transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_15, &transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18);
            }
#line 965 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 965 "term_constr_build.m"
              {
#line 967 "term_constr_build.m"
                {
#line 967 "term_constr_build.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__term_constr_build__VarTypes_1, transform_hlds__term_constr_build__Arg_8, &transform_hlds__term_constr_build__Type_12);
                }
#line 968 "term_constr_build.m"
                {
#line 968 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__term_constr_build__Type_12);
                }
#line 970 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 969 "term_constr_build.m"
                  {
#line 969 "term_constr_build.m"
                    *transform_hlds__term_constr_build__HeadVar__5_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18;
#line 969 "term_constr_build.m"
                    *transform_hlds__term_constr_build__HeadVar__3_3 = transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17;
#line 969 "term_constr_build.m"
                  }
#line 970 "term_constr_build.m"
                else
#line 971 "term_constr_build.m"
                  {
#line 971 "term_constr_build.m"
                    {
#line 971 "term_constr_build.m"
                      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_build__Arg_8)), transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17, transform_hlds__term_constr_build__HeadVar__3_3);
                    }
#line 972 "term_constr_build.m"
                    {
#line 972 "term_constr_build.m"
                      mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, ((MR_Box) (transform_hlds__term_constr_build__Mode_10)), transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18, transform_hlds__term_constr_build__HeadVar__5_5);
                    }
#line 971 "term_constr_build.m"
                  }
#line 970 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 965 "term_constr_build.m"
              }
#line 965 "term_constr_build.m"
          }
#line 965 "term_constr_build.m"
      }
#line 963 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 963 "term_constr_build.m"
  }
#line 959 "term_constr_build.m"
}

#line 948 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(
#line 948 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_6,
#line 948 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_9,
#line 948 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Args_10,
#line 948 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_11,
#line 948 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Modes_12)
#line 948 "term_constr_build.m"
{
#line 955 "term_constr_build.m"
  {
#line 955 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 955 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_13;
#line 955 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_14;

#line 953 "term_constr_build.m"
    {
#line 953 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(transform_hlds__term_constr_build__VarTypes_6, transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_9, &transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_13, transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_11, &transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_14);
    }
#line 955 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 954 "term_constr_build.m"
      {
#line 954 "term_constr_build.m"
        *transform_hlds__term_constr_build__STATE_VARIABLE_Modes_12 = transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_14;
#line 954 "term_constr_build.m"
        *transform_hlds__term_constr_build__STATE_VARIABLE_Args_10 = transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_13;
#line 954 "term_constr_build.m"
      }
#line 955 "term_constr_build.m"
    else
#line 956 "term_constr_build.m"
      {
#line 956 "term_constr_build.m"
        {
#line 956 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
#line 956 "term_constr_build.m"
          return;
        }
#line 956 "term_constr_build.m"
      }
#line 955 "term_constr_build.m"
  }
#line 948 "term_constr_build.m"
}

#line 937 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarMap_7,
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_8,
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Coeff_9,
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 937 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13,
#line 937 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14)
#line 937 "term_constr_build.m"
{
#line 940 "term_constr_build.m"
  {
#line 940 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 940 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVar_12;

#line 941 "term_constr_build.m"
    {
#line 941 "term_constr_build.m"
      transform_hlds__term_constr_build__SizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_7, transform_hlds__term_constr_build__Var_10);
    }
#line 942 "term_constr_build.m"
    {
#line 942 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__SizeVar_12)), transform_hlds__term_constr_build__Zeros_8);
    }
#line 944 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 942 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14 = transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13;
#line 944 "term_constr_build.m"
    else
#line 945 "term_constr_build.m"
      {
#line 945 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16;

#line 945 "term_constr_build.m"
        {
#line 945 "term_constr_build.m"
          transform_hlds__term_constr_build__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_16_16, 0) = ((MR_Box) (transform_hlds__term_constr_build__SizeVar_12));
#line 945 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_16_16, 1) = ((MR_Box) (transform_hlds__term_constr_build__Coeff_9));
#line 945 "term_constr_build.m"
        }
#line 945 "term_constr_build.m"
        {
#line 945 "term_constr_build.m"
          MR_Word base;
#line 945 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "term_constr_build.m"
          *transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14 = base;
#line 945 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 945 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13));
#line 945 "term_constr_build.m"
        }
#line 945 "term_constr_build.m"
      }
#line 940 "term_constr_build.m"
  }
#line 937 "term_constr_build.m"
}

#line 933 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4(
#line 933 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 933 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 933 "term_constr_build.m"
{
#line 933 "term_constr_build.m"
  {
#line 933 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 933 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 933 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv2_HeadVar__2_2;

#line 933 "term_constr_build.m"
    {
#line 933 "term_constr_build.m"
      transform_hlds__term_constr_build__conv2_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 933 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv2_HeadVar__2_2));
#line 933 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 933 "term_constr_build.m"
  }
#line 933 "term_constr_build.m"
}

#line 931 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3(
#line 931 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 931 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 931 "term_constr_build.m"
{
#line 931 "term_constr_build.m"
  {
#line 931 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 931 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 931 "term_constr_build.m"
    {
#line 931 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__931__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 931 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 931 "term_constr_build.m"
  }
#line 931 "term_constr_build.m"
}

#line 931 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2(
#line 931 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 931 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 931 "term_constr_build.m"
{
#line 931 "term_constr_build.m"
  {
#line 931 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 931 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 931 "term_constr_build.m"
    {
#line 931 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 931 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 931 "term_constr_build.m"
  }
#line 931 "term_constr_build.m"
}

#line 923 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1(
#line 923 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 923 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 923 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 923 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3)
#line 923 "term_constr_build.m"
{
#line 923 "term_constr_build.m"
  {
#line 923 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 923 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Terms_14;

#line 923 "term_constr_build.m"
    {
#line 923 "term_constr_build.m"
      transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Terms_14);
    }
#line 923 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Terms_14));
#line 923 "term_constr_build.m"
  }
#line 923 "term_constr_build.m"
}

#line 874 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_8,
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_9,
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgVars_10,
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Modes_11,
#line 874 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12,
#line 874 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35,
#line 874 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_36)
#line 874 "term_constr_build.m"
{
#line 879 "term_constr_build.m"
  {
#line 879 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 879 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 879 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Type_15;
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 8)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 9)));
#line 880 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 10)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 11)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 12)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 13)));

#line 881 "term_constr_build.m"
    {
#line 881 "term_constr_build.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__term_constr_build__VarTypes_14, transform_hlds__term_constr_build__Var_8, &transform_hlds__term_constr_build__Type_15);
    }
#line 888 "term_constr_build.m"
    {
#line 888 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_constr_build__Type_15);
    }
#line 889 "term_constr_build.m"
    if (!(transform_hlds__term_constr_build__succeeded))
#line 889 "term_constr_build.m"
      {
#line 889 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_16_16;

#line 889 "term_constr_build.m"
        {
#line 889 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(transform_hlds__term_constr_build__ConsId_9, &transform_hlds__term_constr_build__V_16_16);
        }
#line 889 "term_constr_build.m"
      }
#line 893 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 892 "term_constr_build.m"
      *transform_hlds__term_constr_build__Constraints_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "term_constr_build.m"
    else
#line 900 "term_constr_build.m"
      {
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FixedArgVars_17;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FixedModes_18;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ModuleInfo_19;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Norm_20;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeCtor_21;
#line 900 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__Constant_22;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CountedVars_23;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVarMap_25;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Zeros_26;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVar_27;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FirstTerms_28;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Terms_29;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraint_30;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVars_33;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonNegConstraints_34;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_42_42;
#line 900 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_44_44;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_65_65;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_66_66;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_67_67;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_69_69;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_70_70;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_72_72;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_73_73;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_74_74;
#line 901 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_75_75;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_76_76;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_77_77;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_78_78;
#line 904 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_93_93;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_94_94;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_95_95;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_96_96;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_97_97;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_98_98;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_99_99;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_100_100;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_102_102;
#line 914 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_103_103;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_104_104;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_105_105;
#line 914 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_106_106;
#line 923 "term_constr_build.m"
        MR_Box transform_hlds__term_constr_build__conv1_Terms_29;

#line 899 "term_constr_build.m"
        {
#line 899 "term_constr_build.m"
          transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_constr_build__VarTypes_14, transform_hlds__term_constr_build__ArgVars_10, &transform_hlds__term_constr_build__FixedArgVars_17, transform_hlds__term_constr_build__Modes_11, &transform_hlds__term_constr_build__FixedModes_18);
        }
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__Norm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 8)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 9)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 10)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 11)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 12)));
#line 901 "term_constr_build.m"
        transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 13)));
#line 903 "term_constr_build.m"
        {
#line 903 "term_constr_build.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__Type_15, &transform_hlds__term_constr_build__TypeCtor_21);
        }
#line 904 "term_constr_build.m"
        {
#line 904 "term_constr_build.m"
          transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_constr_build__ModuleInfo_19, transform_hlds__term_constr_build__Norm_20, transform_hlds__term_constr_build__TypeCtor_21, transform_hlds__term_constr_build__ConsId_9, &transform_hlds__term_constr_build__Constant_22, transform_hlds__term_constr_build__FixedArgVars_17, &transform_hlds__term_constr_build__CountedVars_23, transform_hlds__term_constr_build__FixedModes_18, &transform_hlds__term_constr_build__V_24_24);
        }
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__Zeros_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__SizeVarMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 8)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 9)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 10)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 11)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 12)));
#line 914 "term_constr_build.m"
        transform_hlds__term_constr_build__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 13)));
#line 917 "term_constr_build.m"
        {
#line 917 "term_constr_build.m"
          transform_hlds__term_constr_build__SizeVar_27 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_25, transform_hlds__term_constr_build__Var_8);
        }
#line 918 "term_constr_build.m"
        {
#line 918 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__SizeVar_27)), transform_hlds__term_constr_build__Zeros_26);
        }
#line 920 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 919 "term_constr_build.m"
          transform_hlds__term_constr_build__FirstTerms_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 920 "term_constr_build.m"
        else
#line 921 "term_constr_build.m"
          {
#line 921 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_37_37;
#line 921 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_38_38;

#line 921 "term_constr_build.m"
            {
#line 921 "term_constr_build.m"
              transform_hlds__term_constr_build__V_38_38 = libs__rat__one_0_f_0();
            }
#line 921 "term_constr_build.m"
            {
#line 921 "term_constr_build.m"
              transform_hlds__term_constr_build__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 921 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_37_37, 0) = ((MR_Box) (transform_hlds__term_constr_build__SizeVar_27));
#line 921 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_37_37, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_38_38));
#line 921 "term_constr_build.m"
            }
#line 921 "term_constr_build.m"
            {
#line 921 "term_constr_build.m"
              transform_hlds__term_constr_build__FirstTerms_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__FirstTerms_28, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_37_37));
#line 921 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__FirstTerms_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "term_constr_build.m"
            }
#line 921 "term_constr_build.m"
          }
#line 923 "term_constr_build.m"
        {
#line 923 "term_constr_build.m"
          transform_hlds__term_constr_build__V_42_42 = libs__rat__one_0_f_0();
        }
#line 923 "term_constr_build.m"
        {
#line 923 "term_constr_build.m"
          transform_hlds__term_constr_build__V_41_41 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_build__V_42_42);
        }
#line 923 "term_constr_build.m"
        {
#line 923 "term_constr_build.m"
          transform_hlds__term_constr_build__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 923 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[1]));
#line 923 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1));
#line 923 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 923 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 3) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarMap_25));
#line 923 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 4) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_26));
#line 923 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_41_41));
#line 923 "term_constr_build.m"
        }
#line 923 "term_constr_build.m"
        {
#line 923 "term_constr_build.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[5], transform_hlds__term_constr_build__V_40_40, transform_hlds__term_constr_build__CountedVars_23, ((MR_Box) (transform_hlds__term_constr_build__FirstTerms_28)), &transform_hlds__term_constr_build__conv1_Terms_29);
        }
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__Terms_29 = ((MR_Word) transform_hlds__term_constr_build__conv1_Terms_29);
#line 925 "term_constr_build.m"
        {
#line 925 "term_constr_build.m"
          transform_hlds__term_constr_build__V_44_44 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__Constant_22);
        }
#line 925 "term_constr_build.m"
        {
#line 925 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraint_30 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__Terms_29, (MR_Integer) 1, transform_hlds__term_constr_build__V_44_44);
        }
#line 926 "term_constr_build.m"
        {
#line 926 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = libs__lp_rational__is_false_1_p_0(transform_hlds__term_constr_build__Constraint_30);
        }
#line 928 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 927 "term_constr_build.m"
          {
#line 927 "term_constr_build.m"
            {
#line 927 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_decon_or_con_unify\'/7", (MR_String) "false constraint from unification");
#line 927 "term_constr_build.m"
              return;
            }
#line 927 "term_constr_build.m"
          }
#line 928 "term_constr_build.m"
        else
#line 929 "term_constr_build.m"
          {
#line 929 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SizeVars0_31;
#line 929 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SizeVars1_32;
#line 929 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_48_48;
#line 929 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_49_49;

#line 929 "term_constr_build.m"
            {
#line 929 "term_constr_build.m"
              transform_hlds__term_constr_build__SizeVars0_31 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_25, transform_hlds__term_constr_build__ArgVars_10);
            }
#line 930 "term_constr_build.m"
            {
#line 930 "term_constr_build.m"
              transform_hlds__term_constr_build__SizeVars1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__SizeVars1_32, 0) = ((MR_Box) (transform_hlds__term_constr_build__SizeVar_27));
#line 930 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__SizeVars1_32, 1) = ((MR_Box) (transform_hlds__term_constr_build__SizeVars0_31));
#line 930 "term_constr_build.m"
            }
#line 931 "term_constr_build.m"
            {
#line 931 "term_constr_build.m"
              transform_hlds__term_constr_build__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1]));
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2));
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 3) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_26));
#line 931 "term_constr_build.m"
            }
#line 931 "term_constr_build.m"
            {
#line 931 "term_constr_build.m"
              transform_hlds__term_constr_build__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[2]));
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3));
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_49_49));
#line 931 "term_constr_build.m"
            }
#line 931 "term_constr_build.m"
            {
#line 931 "term_constr_build.m"
              transform_hlds__term_constr_build__SizeVars_33 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__V_48_48, transform_hlds__term_constr_build__SizeVars1_32);
            }
#line 929 "term_constr_build.m"
          }
#line 933 "term_constr_build.m"
        {
#line 933 "term_constr_build.m"
          transform_hlds__term_constr_build__NonNegConstraints_34 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[8], transform_hlds__term_constr_build__SizeVars_33);
        }
#line 934 "term_constr_build.m"
        {
#line 934 "term_constr_build.m"
          MR_Word base;
#line 934 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "term_constr_build.m"
          *transform_hlds__term_constr_build__Constraints_12 = base;
#line 934 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Constraint_30));
#line 934 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__NonNegConstraints_34));
#line 934 "term_constr_build.m"
        }
#line 900 "term_constr_build.m"
      }
#line 934 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_36 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35;
#line 879 "term_constr_build.m"
  }
#line 874 "term_constr_build.m"
}

#line 842 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_4_p_0(
#line 842 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Unification_5,
#line 842 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 842 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23,
#line 842 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_24)
#line 842 "term_constr_build.m"
{
#line 847 "term_constr_build.m"
  {
#line 847 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 847 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__Unification_5)) == (MR_mktag((MR_Integer) 2))))
#line 857 "term_constr_build.m"
      {
#line 857 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__LVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)));
#line 857 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__RVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 857 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraints_37;
#line 857 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Polyhedron_42;

#line 858 "term_constr_build.m"
        {
#line 858 "term_constr_build.m"
          transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(transform_hlds__term_constr_build__LVar_18, transform_hlds__term_constr_build__RVar_19, &transform_hlds__term_constr_build__Constraints_37, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
        }
#line 1014 "term_constr_build.m"
        {
#line 1014 "term_constr_build.m"
          transform_hlds__term_constr_build__Polyhedron_42 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_37);
        }
#line 1013 "term_constr_build.m"
        {
#line 1013 "term_constr_build.m"
          MR_Word base;
#line 1013 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1013 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_42));
#line 1013 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
        }
#line 1015 "term_constr_build.m"
        {
#line 1015 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_42);
        }
#line 1017 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 1016 "term_constr_build.m"
          {
#line 1016 "term_constr_build.m"
            {
#line 1016 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1016 "term_constr_build.m"
              return;
            }
#line 1016 "term_constr_build.m"
          }
#line 1017 "term_constr_build.m"
        else
#line 1018 "term_constr_build.m"
          {
#line 1018 "term_constr_build.m"
          }
#line 857 "term_constr_build.m"
      }
#line 847 "term_constr_build.m"
    else
#line 847 "term_constr_build.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_build__Unification_5)) == (MR_mktag((MR_Integer) 0))))
#line 847 "term_constr_build.m"
        {
#line 847 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)));
#line 847 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 847 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 2)));
#line 847 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Modes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 3)));
#line 847 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Constraints_15;
#line 847 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Polyhedron_49;
#line 847 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 4)));
#line 847 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 5)));
#line 847 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 6)));

#line 848 "term_constr_build.m"
          {
#line 848 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(transform_hlds__term_constr_build__Var_8, transform_hlds__term_constr_build__ConsId_9, transform_hlds__term_constr_build__ArgVars_10, transform_hlds__term_constr_build__Modes_11, &transform_hlds__term_constr_build__Constraints_15, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
          }
#line 1014 "term_constr_build.m"
          {
#line 1014 "term_constr_build.m"
            transform_hlds__term_constr_build__Polyhedron_49 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_15);
          }
#line 1013 "term_constr_build.m"
          {
#line 1013 "term_constr_build.m"
            MR_Word base;
#line 1013 "term_constr_build.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "term_constr_build.m"
            *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1013 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_49));
#line 1013 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
          }
#line 1015 "term_constr_build.m"
          {
#line 1015 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_49);
          }
#line 1017 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 1016 "term_constr_build.m"
            {
#line 1016 "term_constr_build.m"
              {
#line 1016 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1016 "term_constr_build.m"
                return;
              }
#line 1016 "term_constr_build.m"
            }
#line 1017 "term_constr_build.m"
          else
#line 1018 "term_constr_build.m"
            {
#line 1018 "term_constr_build.m"
            }
#line 847 "term_constr_build.m"
        }
#line 847 "term_constr_build.m"
      else
#line 847 "term_constr_build.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_build__Unification_5)) == (MR_mktag((MR_Integer) 1))))
#line 852 "term_constr_build.m"
          {
#line 852 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)));
#line 852 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 852 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 2)));
#line 852 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Modes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 3)));
#line 852 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Constraints_36;
#line 852 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Polyhedron_56;
#line 852 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 4)));
#line 852 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 5)));

#line 853 "term_constr_build.m"
            {
#line 853 "term_constr_build.m"
              transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(transform_hlds__term_constr_build__Var_32, transform_hlds__term_constr_build__ConsId_33, transform_hlds__term_constr_build__ArgVars_34, transform_hlds__term_constr_build__Modes_35, &transform_hlds__term_constr_build__Constraints_36, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
            }
#line 1014 "term_constr_build.m"
            {
#line 1014 "term_constr_build.m"
              transform_hlds__term_constr_build__Polyhedron_56 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_36);
            }
#line 1013 "term_constr_build.m"
            {
#line 1013 "term_constr_build.m"
              MR_Word base;
#line 1013 "term_constr_build.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "term_constr_build.m"
              *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1013 "term_constr_build.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_56));
#line 1013 "term_constr_build.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
            }
#line 1015 "term_constr_build.m"
            {
#line 1015 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_56);
            }
#line 1017 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 1016 "term_constr_build.m"
              {
#line 1016 "term_constr_build.m"
                {
#line 1016 "term_constr_build.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1016 "term_constr_build.m"
                  return;
                }
#line 1016 "term_constr_build.m"
              }
#line 1017 "term_constr_build.m"
            else
#line 1018 "term_constr_build.m"
              {
#line 1018 "term_constr_build.m"
              }
#line 852 "term_constr_build.m"
          }
#line 847 "term_constr_build.m"
        else
#line 847 "term_constr_build.m"
          if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__Unification_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 865 "term_constr_build.m"
            {
#line 866 "term_constr_build.m"
              {
#line 866 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_unification\'/4", (MR_String) "complicated_unify");
#line 866 "term_constr_build.m"
                return;
              }
#line 865 "term_constr_build.m"
            }
#line 847 "term_constr_build.m"
          else
#line 861 "term_constr_build.m"
            {
#line 861 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Constraints_38;
#line 861 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__LVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 861 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__RVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 2)));
#line 861 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Polyhedron_63;

#line 862 "term_constr_build.m"
              {
#line 862 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(transform_hlds__term_constr_build__LVar_39, transform_hlds__term_constr_build__RVar_40, &transform_hlds__term_constr_build__Constraints_38, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
              }
#line 1014 "term_constr_build.m"
              {
#line 1014 "term_constr_build.m"
                transform_hlds__term_constr_build__Polyhedron_63 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_38);
              }
#line 1013 "term_constr_build.m"
              {
#line 1013 "term_constr_build.m"
                MR_Word base;
#line 1013 "term_constr_build.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1013 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_63));
#line 1013 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "term_constr_build.m"
              }
#line 1015 "term_constr_build.m"
              {
#line 1015 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_63);
              }
#line 1017 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 1016 "term_constr_build.m"
                {
#line 1016 "term_constr_build.m"
                  {
#line 1016 "term_constr_build.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1016 "term_constr_build.m"
                    return;
                  }
#line 1016 "term_constr_build.m"
                }
#line 1017 "term_constr_build.m"
              else
#line 1018 "term_constr_build.m"
                {
#line 1018 "term_constr_build.m"
                }
#line 861 "term_constr_build.m"
            }
#line 847 "term_constr_build.m"
  }
#line 842 "term_constr_build.m"
}

#line 830 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
#line 830 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 830 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2,
#line 830 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_3)
#line 830 "term_constr_build.m"
{
#line 832 "term_constr_build.m"
  while (MR_TRUE)
#line 832 "term_constr_build.m"
    {
#line 832 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 832 "term_constr_build.m"
      {
#line 832 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 832 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 832 "term_constr_build.m"
          *transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_3 = transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2;
#line 832 "term_constr_build.m"
        else
#line 833 "term_constr_build.m"
          {
#line 833 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__Size_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 833 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Sizes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 833 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_12_12 = (transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2 + transform_hlds__term_constr_build__Size_7);

#line 835 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 835 "term_constr_build.m"
            {
#line 835 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__Sizes_8;
#line 835 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0__tmp_copy_2 = transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_12_12;

#line 835 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2 = transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0__tmp_copy_2;
#line 835 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 835 "term_constr_build.m"
            }
#line 835 "term_constr_build.m"
            continue;
#line 833 "term_constr_build.m"
          }
#line 832 "term_constr_build.m"
      }
#line 832 "term_constr_build.m"
      break;
#line 832 "term_constr_build.m"
    }
#line 830 "term_constr_build.m"
}

#line 822 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
#line 822 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 822 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 822 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 822 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 822 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4)
#line 822 "term_constr_build.m"
{
#line 822 "term_constr_build.m"
  {
#line 822 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 822 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv1_HeadVar__2_46;
#line 822 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__4_48;

#line 822 "term_constr_build.m"
    {
#line 822 "term_constr_build.m"
      transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__822__1_4_p_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), &transform_hlds__term_constr_build__conv1_HeadVar__2_46, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3), &transform_hlds__term_constr_build__conv0_HeadVar__4_48);
    }
#line 822 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv1_HeadVar__2_46));
#line 822 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__4_48));
#line 822 "term_constr_build.m"
  }
#line 822 "term_constr_build.m"
}

#line 788 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3,
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 788 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5,
#line 788 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_6)
#line 788 "term_constr_build.m"
{
#line 792 "term_constr_build.m"
  while (MR_TRUE)
#line 792 "term_constr_build.m"
    {
#line 792 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 792 "term_constr_build.m"
      {
#line 792 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 792 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "term_constr_build.m"
          *transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_6 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5;
#line 792 "term_constr_build.m"
        else
#line 795 "term_constr_build.m"
          {
#line 795 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 0)));
#line 795 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 1)));
#line 795 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_21_21;
#line 795 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__GoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_16, (MR_Integer) 0)));
#line 807 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build___GoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_16, (MR_Integer) 1)));
#line 826 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Var_37;
#line 826 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ConsId_38;
#line 826 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ArgVars_39;
#line 826 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Modes_40;
#line 809 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Unify_35;
#line 809 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_32_32;
#line 809 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_33_33;
#line 809 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_34_34;
#line 809 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_36_36;
#line 810 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_41_41;
#line 810 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_42_42;
#line 810 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_43_43;

#line 809 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_30)) == (MR_mktag((MR_Integer) 1)));
#line 809 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 809 "term_constr_build.m"
              {
#line 809 "term_constr_build.m"
                transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 0)));
#line 809 "term_constr_build.m"
                transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 1)));
#line 809 "term_constr_build.m"
                transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 2)));
#line 809 "term_constr_build.m"
                transform_hlds__term_constr_build__Unify_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 3)));
#line 809 "term_constr_build.m"
                transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 4)));
#line 810 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__Unify_35)) == (MR_mktag((MR_Integer) 0)));
#line 810 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 810 "term_constr_build.m"
                  {
#line 810 "term_constr_build.m"
                    transform_hlds__term_constr_build__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 0)));
#line 810 "term_constr_build.m"
                    transform_hlds__term_constr_build__ConsId_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 1)));
#line 810 "term_constr_build.m"
                    transform_hlds__term_constr_build__ArgVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 2)));
#line 810 "term_constr_build.m"
                    transform_hlds__term_constr_build__Modes_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 3)));
#line 810 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 4)));
#line 810 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 5)));
#line 810 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 6)));
#line 810 "term_constr_build.m"
                  }
#line 809 "term_constr_build.m"
              }
#line 826 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 813 "term_constr_build.m"
              {
#line 813 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeInfo_51_67;
#line 813 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeCtorInfo_52_68;
#line 813 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__FixedArgVars_44;
#line 813 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__FixedModes_45;
#line 813 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Type_46;
#line 813 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeCtor_47;
#line 813 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__ConsIdSize_48;
#line 813 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__CountedVars_49;
#line 813 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ArgSizes_51;
#line 813 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__TotalArgSize_52;
#line 813 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__Size_53;
#line 813 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_39_55;
#line 955 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_77;
#line 955 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_78;
#line 816 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_50_50;
#line 822 "term_constr_build.m"
                MR_Box transform_hlds__term_constr_build__conv2_STATE_VARIABLE_SizeMap_39_55;

#line 953 "term_constr_build.m"
                {
#line 953 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(transform_hlds__term_constr_build__HeadVar__3_3, transform_hlds__term_constr_build__ArgVars_39, &transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_77, transform_hlds__term_constr_build__Modes_40, &transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_78);
                }
#line 955 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 954 "term_constr_build.m"
                  {
#line 954 "term_constr_build.m"
                    transform_hlds__term_constr_build__FixedModes_45 = transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_78;
#line 954 "term_constr_build.m"
                    transform_hlds__term_constr_build__FixedArgVars_44 = transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_77;
#line 954 "term_constr_build.m"
                  }
#line 955 "term_constr_build.m"
                else
#line 956 "term_constr_build.m"
                  {
#line 956 "term_constr_build.m"
                    {
#line 956 "term_constr_build.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
#line 956 "term_constr_build.m"
                      return;
                    }
#line 956 "term_constr_build.m"
                  }
#line 814 "term_constr_build.m"
                {
#line 814 "term_constr_build.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__term_constr_build__HeadVar__3_3, transform_hlds__term_constr_build__Var_37, &transform_hlds__term_constr_build__Type_46);
                }
#line 815 "term_constr_build.m"
                {
#line 815 "term_constr_build.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__Type_46, &transform_hlds__term_constr_build__TypeCtor_47);
                }
#line 816 "term_constr_build.m"
                {
#line 816 "term_constr_build.m"
                  transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_constr_build__HeadVar__1_1, transform_hlds__term_constr_build__HeadVar__2_2, transform_hlds__term_constr_build__TypeCtor_47, transform_hlds__term_constr_build__ConsId_38, &transform_hlds__term_constr_build__ConsIdSize_48, transform_hlds__term_constr_build__FixedArgVars_44, &transform_hlds__term_constr_build__CountedVars_49, transform_hlds__term_constr_build__FixedModes_45, &transform_hlds__term_constr_build__V_50_50);
                }
#line 8622 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_51_67 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3];
#line 8624 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeCtorInfo_52_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 822 "term_constr_build.m"
                {
#line 822 "term_constr_build.m"
                  mercury__list__map_foldl_5_p_0(transform_hlds__term_constr_build__TypeInfo_51_67, transform_hlds__term_constr_build__TypeCtorInfo_52_68, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[2], (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[7], transform_hlds__term_constr_build__CountedVars_49, &transform_hlds__term_constr_build__ArgSizes_51, ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5)), &transform_hlds__term_constr_build__conv2_STATE_VARIABLE_SizeMap_39_55);
                }
#line 822 "term_constr_build.m"
                transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_39_55 = ((MR_Word) transform_hlds__term_constr_build__conv2_STATE_VARIABLE_SizeMap_39_55);
#line 823 "term_constr_build.m"
                {
#line 823 "term_constr_build.m"
                  transform_hlds__term_constr_build__accumulate_sum_3_p_0(transform_hlds__term_constr_build__ArgSizes_51, (MR_Integer) 0, &transform_hlds__term_constr_build__TotalArgSize_52);
                }
#line 824 "term_constr_build.m"
                transform_hlds__term_constr_build__Size_53 = (transform_hlds__term_constr_build__ConsIdSize_48 + transform_hlds__term_constr_build__TotalArgSize_52);
#line 825 "term_constr_build.m"
                {
#line 825 "term_constr_build.m"
                  mercury__map__det_insert_4_p_0(transform_hlds__term_constr_build__TypeInfo_51_67, transform_hlds__term_constr_build__TypeCtorInfo_52_68, ((MR_Box) (transform_hlds__term_constr_build__Var_37)), ((MR_Box) (transform_hlds__term_constr_build__Size_53)), transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_39_55, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_21_21);
                }
#line 813 "term_constr_build.m"
              }
#line 826 "term_constr_build.m"
            else
#line 827 "term_constr_build.m"
              {
#line 827 "term_constr_build.m"
                {
#line 827 "term_constr_build.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.abstract_from_ground_term_conjunct\'/6", (MR_String) "malformed conjunct");
#line 827 "term_constr_build.m"
                  return;
                }
#line 827 "term_constr_build.m"
              }
#line 798 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 798 "term_constr_build.m"
            {
#line 798 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__4__tmp_copy_4 = transform_hlds__term_constr_build__Goals_17;
#line 798 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0__tmp_copy_5 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_21_21;

#line 798 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0__tmp_copy_5;
#line 798 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__4_4 = transform_hlds__term_constr_build__HeadVar__4__tmp_copy_4;
#line 798 "term_constr_build.m"
            }
#line 798 "term_constr_build.m"
            continue;
#line 795 "term_constr_build.m"
          }
#line 792 "term_constr_build.m"
      }
#line 792 "term_constr_build.m"
      break;
#line 792 "term_constr_build.m"
    }
#line 788 "term_constr_build.m"
}

#line 759 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(
#line 759 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TermVar_6,
#line 759 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SubGoal_7,
#line 759 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 759 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24,
#line 759 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_25)
#line 759 "term_constr_build.m"
{
#line 763 "term_constr_build.m"
  {
#line 763 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 763 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SubGoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__SubGoal_7, (MR_Integer) 0)));
#line 764 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build___SubGoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__SubGoal_7, (MR_Integer) 1)));
#line 784 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Conjuncts_12;
#line 765 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;

#line 765 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_build__SubGoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__SubGoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 765 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 765 "term_constr_build.m"
      {
#line 765 "term_constr_build.m"
        transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__SubGoalExpr_10, (MR_Integer) 1)));
#line 765 "term_constr_build.m"
        transform_hlds__term_constr_build__Conjuncts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__SubGoalExpr_10, (MR_Integer) 2)));
#line 765 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_26_26 == (MR_Integer) 0);
#line 765 "term_constr_build.m"
      }
#line 784 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 766 "term_constr_build.m"
      {
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVarMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Zeros_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TermSizeVar_15;
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraints_16;
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 9)));
#line 766 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 10)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 11)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 12)));
#line 766 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 13)));

#line 768 "term_constr_build.m"
        {
#line 768 "term_constr_build.m"
          transform_hlds__term_constr_build__TermSizeVar_15 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_13, transform_hlds__term_constr_build__TermVar_6);
        }
#line 769 "term_constr_build.m"
        {
#line 769 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__TermSizeVar_15)), transform_hlds__term_constr_build__Zeros_14);
        }
#line 771 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 770 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "term_constr_build.m"
        else
#line 772 "term_constr_build.m"
          {
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__TypeInfo_108_108 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3];
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__TypeCtorInfo_109_109 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Norm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SizeMap_20;
#line 772 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__KnownTermVarSize_21;
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Terms_22;
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Constraint_23;
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_27_27;
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_28_28;
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_29_29;
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_32_32;
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 9)));
#line 772 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 10)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 11)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 12)));
#line 772 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 13)));
#line 777 "term_constr_build.m"
            MR_Box transform_hlds__term_constr_build__conv0_KnownTermVarSize_21;

#line 776 "term_constr_build.m"
            {
#line 776 "term_constr_build.m"
              transform_hlds__term_constr_build__V_27_27 = mercury__map__init_0_f_0(transform_hlds__term_constr_build__TypeInfo_108_108, transform_hlds__term_constr_build__TypeCtorInfo_109_109);
            }
#line 775 "term_constr_build.m"
            {
#line 775 "term_constr_build.m"
              transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(transform_hlds__term_constr_build__ModuleInfo_17, transform_hlds__term_constr_build__Norm_18, transform_hlds__term_constr_build__VarTypes_19, transform_hlds__term_constr_build__Conjuncts_12, transform_hlds__term_constr_build__V_27_27, &transform_hlds__term_constr_build__SizeMap_20);
            }
#line 777 "term_constr_build.m"
            {
#line 777 "term_constr_build.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_constr_build__TypeInfo_108_108, transform_hlds__term_constr_build__TypeCtorInfo_109_109, transform_hlds__term_constr_build__SizeMap_20, ((MR_Box) (transform_hlds__term_constr_build__TermVar_6)), &transform_hlds__term_constr_build__conv0_KnownTermVarSize_21);
            }
#line 777 "term_constr_build.m"
            transform_hlds__term_constr_build__KnownTermVarSize_21 = ((MR_Integer) transform_hlds__term_constr_build__conv0_KnownTermVarSize_21);
#line 778 "term_constr_build.m"
            {
#line 778 "term_constr_build.m"
              transform_hlds__term_constr_build__V_29_29 = libs__rat__one_0_f_0();
            }
#line 778 "term_constr_build.m"
            {
#line 778 "term_constr_build.m"
              transform_hlds__term_constr_build__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_28_28, 0) = ((MR_Box) (transform_hlds__term_constr_build__TermSizeVar_15));
#line 778 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_28_28, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_29_29));
#line 778 "term_constr_build.m"
            }
#line 778 "term_constr_build.m"
            {
#line 778 "term_constr_build.m"
              transform_hlds__term_constr_build__Terms_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_22, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_28_28));
#line 778 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "term_constr_build.m"
            }
#line 780 "term_constr_build.m"
            {
#line 780 "term_constr_build.m"
              transform_hlds__term_constr_build__V_32_32 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__KnownTermVarSize_21);
            }
#line 780 "term_constr_build.m"
            {
#line 780 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraint_23 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__Terms_22, (MR_Integer) 1, transform_hlds__term_constr_build__V_32_32);
            }
#line 781 "term_constr_build.m"
            {
#line 781 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraints_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_16, 0) = ((MR_Box) (transform_hlds__term_constr_build__Constraint_23));
#line 781 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 781 "term_constr_build.m"
            }
#line 772 "term_constr_build.m"
          }
#line 783 "term_constr_build.m"
        {
#line 783 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_8 = transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(transform_hlds__term_constr_build__Constraints_16);
        }
#line 766 "term_constr_build.m"
      }
#line 784 "term_constr_build.m"
    else
#line 785 "term_constr_build.m"
      {
#line 785 "term_constr_build.m"
        {
#line 785 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_from_ground_term_goal\'/5", (MR_String) "not conj");
#line 785 "term_constr_build.m"
          return;
        }
#line 785 "term_constr_build.m"
      }
#line 785 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_25 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24;
#line 763 "term_constr_build.m"
  }
#line 759 "term_constr_build.m"
}

#line 735 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
#line 735 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 735 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchVar_2,
#line 735 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_3)
#line 735 "term_constr_build.m"
{
#line 737 "term_constr_build.m"
  {
#line 737 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 737 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 737 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));

#line 737 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__V_45_45)) == (MR_mktag((MR_Integer) 1))))
#line 737 "term_constr_build.m"
      {
#line 737 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 3)));
#line 737 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 0)));
#line 737 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 1)));
#line 737 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 2)));
#line 737 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 4)));

#line 740 "term_constr_build.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_build__Kind_7)) == (MR_mktag((MR_Integer) 1))))
#line 739 "term_constr_build.m"
          {
#line 739 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 0)));
#line 739 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 1)));
#line 739 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 2)));
#line 739 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 3)));
#line 739 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 4)));
#line 739 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 5)));

#line 739 "term_constr_build.m"
            {
#line 739 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_build__SwitchVar_2)), ((MR_Box) (transform_hlds__term_constr_build__V_42_42)));
            }
#line 739 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 739 "term_constr_build.m"
              {
#line 739 "term_constr_build.m"
                return transform_hlds__term_constr_build__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__term_constr_build__ConsId_3, transform_hlds__term_constr_build__V_43_43);
              }
#line 739 "term_constr_build.m"
          }
#line 740 "term_constr_build.m"
        else
#line 740 "term_constr_build.m"
          if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__Kind_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 741 "term_constr_build.m"
            {
#line 742 "term_constr_build.m"
              {
#line 742 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "complicated_unify");
              }
#line 741 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 741 "term_constr_build.m"
            }
#line 740 "term_constr_build.m"
          else
#line 740 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = MR_FALSE;
#line 737 "term_constr_build.m"
      }
#line 737 "term_constr_build.m"
    else
#line 737 "term_constr_build.m"
      if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__V_45_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 750 "term_constr_build.m"
        {
#line 751 "term_constr_build.m"
          {
#line 751 "term_constr_build.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "shorthand");
          }
#line 750 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 750 "term_constr_build.m"
        }
#line 737 "term_constr_build.m"
      else
#line 737 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_FALSE;
#line 737 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 737 "term_constr_build.m"
  }
#line 735 "term_constr_build.m"
}

#line 679 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
#line 679 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchProgVar_1,
#line 679 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 679 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3,
#line 679 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_4,
#line 679 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5,
#line 679 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_6)
#line 679 "term_constr_build.m"
{
#line 683 "term_constr_build.m"
  while (MR_TRUE)
#line 683 "term_constr_build.m"
    {
#line 683 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 683 "term_constr_build.m"
      {
#line 683 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 683 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 683 "term_constr_build.m"
          {
#line 683 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_Info_6 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5;
#line 683 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_4 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3;
#line 683 "term_constr_build.m"
          }
#line 683 "term_constr_build.m"
        else
#line 685 "term_constr_build.m"
          {
#line 685 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 685 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 685 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Case_15, (MR_Integer) 0)));
#line 685 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Case_15, (MR_Integer) 1)));
#line 685 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Case_15, (MR_Integer) 2)));
#line 685 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AbstractGoal0_22;
#line 685 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AbstractGoal_23;
#line 685 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42;
#line 685 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_51_51;

#line 687 "term_constr_build.m"
            {
#line 687 "term_constr_build.m"
              transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Goal_21, &transform_hlds__term_constr_build__AbstractGoal0_22, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42);
            }
#line 699 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__OtherConsIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 700 "term_constr_build.m"
              {
#line 700 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__detect_switch_var_3_p_0(transform_hlds__term_constr_build__Goal_21, transform_hlds__term_constr_build__SwitchProgVar_1, transform_hlds__term_constr_build__MainConsId_19);
              }
#line 703 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 702 "term_constr_build.m"
              transform_hlds__term_constr_build__AbstractGoal_23 = transform_hlds__term_constr_build__AbstractGoal0_22;
#line 703 "term_constr_build.m"
            else
#line 704 "term_constr_build.m"
              {
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 6)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SizeVarMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 8)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SwitchVarType_26;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SwitchSizeVar_27;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeCtor_28;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ModuleInfo_29;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Norm_30;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Zeros_31;
#line 704 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__Size_32;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ExtraConstr_33;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ExtraPoly_36;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ExtraGoal_37;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_46_46;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_47_47;
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 2)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 3)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 4)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 5)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 7)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 9)));
#line 704 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 10)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 11)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 12)));
#line 704 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 13)));
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_82_82;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_83_83;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_84_84;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_86_86;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_87_87;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_88_88;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_90_90;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_91_91;
#line 709 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_92_92;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_93_93;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_94_94;
#line 709 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_95_95;

#line 706 "term_constr_build.m"
                {
#line 706 "term_constr_build.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__term_constr_build__TypeMap_24, transform_hlds__term_constr_build__SwitchProgVar_1, &transform_hlds__term_constr_build__SwitchVarType_26);
                }
#line 707 "term_constr_build.m"
                {
#line 707 "term_constr_build.m"
                  transform_hlds__term_constr_build__SwitchSizeVar_27 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_25, transform_hlds__term_constr_build__SwitchProgVar_1);
                }
#line 708 "term_constr_build.m"
                {
#line 708 "term_constr_build.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__SwitchVarType_26, &transform_hlds__term_constr_build__TypeCtor_28);
                }
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_82_82 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__ModuleInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 2)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__Norm_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 3)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 4)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 5)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 6)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__Zeros_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 7)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 8)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 9)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 10)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 11)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 12)));
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 13)));
#line 712 "term_constr_build.m"
                {
#line 712 "term_constr_build.m"
                  transform_hlds__term_constr_build__Size_32 = transform_hlds__term_norm__functor_lower_bound_4_f_0(transform_hlds__term_constr_build__ModuleInfo_29, transform_hlds__term_constr_build__Norm_30, transform_hlds__term_constr_build__TypeCtor_28, transform_hlds__term_constr_build__MainConsId_19);
                }
#line 713 "term_constr_build.m"
                {
#line 713 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__SwitchSizeVar_27)), transform_hlds__term_constr_build__Zeros_31);
                }
#line 715 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 714 "term_constr_build.m"
                  transform_hlds__term_constr_build__ExtraConstr_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 715 "term_constr_build.m"
                else
#line 716 "term_constr_build.m"
                  {
#line 716 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__SwitchVarConst_34;
#line 716 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__SwitchVarConstr_35;

#line 716 "term_constr_build.m"
                    {
#line 716 "term_constr_build.m"
                      transform_hlds__term_constr_build__SwitchVarConst_34 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__Size_32);
                    }
#line 717 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__Size_32 == (MR_Integer) 0);
#line 721 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 718 "term_constr_build.m"
                      {
#line 718 "term_constr_build.m"
                        transform_hlds__term_constr_build__SwitchVarConstr_35 = libs__lp_rational__make_var_const_eq_constraint_2_f_0(transform_hlds__term_constr_build__SwitchSizeVar_27, transform_hlds__term_constr_build__SwitchVarConst_34);
                      }
#line 721 "term_constr_build.m"
                    else
#line 722 "term_constr_build.m"
                      {
#line 722 "term_constr_build.m"
                        transform_hlds__term_constr_build__SwitchVarConstr_35 = libs__lp_rational__make_var_const_gte_constraint_2_f_0(transform_hlds__term_constr_build__SwitchSizeVar_27, transform_hlds__term_constr_build__SwitchVarConst_34);
                      }
#line 726 "term_constr_build.m"
                    {
#line 726 "term_constr_build.m"
                      transform_hlds__term_constr_build__ExtraConstr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "term_constr_build.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__ExtraConstr_33, 0) = ((MR_Box) (transform_hlds__term_constr_build__SwitchVarConstr_35));
#line 726 "term_constr_build.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__ExtraConstr_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "term_constr_build.m"
                    }
#line 716 "term_constr_build.m"
                  }
#line 728 "term_constr_build.m"
                {
#line 728 "term_constr_build.m"
                  transform_hlds__term_constr_build__ExtraPoly_36 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__ExtraConstr_33);
                }
#line 729 "term_constr_build.m"
                {
#line 729 "term_constr_build.m"
                  transform_hlds__term_constr_build__ExtraGoal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 729 "term_constr_build.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ExtraGoal_37, 0) = ((MR_Box) (transform_hlds__term_constr_build__ExtraPoly_36));
#line 729 "term_constr_build.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ExtraGoal_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "term_constr_build.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ExtraGoal_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "term_constr_build.m"
                }
#line 730 "term_constr_build.m"
                {
#line 730 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_47_47, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractGoal0_22));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "term_constr_build.m"
                }
#line 730 "term_constr_build.m"
                {
#line 730 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_46_46, 0) = ((MR_Box) (transform_hlds__term_constr_build__ExtraGoal_37));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_46_46, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_47_47));
#line 730 "term_constr_build.m"
                }
#line 730 "term_constr_build.m"
                {
#line 730 "term_constr_build.m"
                  transform_hlds__term_constr_build__AbstractGoal_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoal_23, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_46_46));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoal_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoal_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "term_constr_build.m"
                }
#line 704 "term_constr_build.m"
              }
#line 732 "term_constr_build.m"
            {
#line 732 "term_constr_build.m"
              mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, ((MR_Box) (transform_hlds__term_constr_build__AbstractGoal_23)), transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3, &transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_51_51);
            }
#line 733 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 733 "term_constr_build.m"
            {
#line 733 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__2__tmp_copy_2 = transform_hlds__term_constr_build__Cases_16;
#line 733 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_3 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_51_51;
#line 733 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42;

#line 733 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_5;
#line 733 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_3;
#line 733 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__2_2 = transform_hlds__term_constr_build__HeadVar__2__tmp_copy_2;
#line 733 "term_constr_build.m"
            }
#line 733 "term_constr_build.m"
            continue;
#line 685 "term_constr_build.m"
          }
#line 683 "term_constr_build.m"
      }
#line 683 "term_constr_build.m"
      break;
#line 683 "term_constr_build.m"
    }
#line 679 "term_constr_build.m"
}

#line 658 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
#line 658 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 658 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2,
#line 658 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_3,
#line 658 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 658 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5)
#line 658 "term_constr_build.m"
{
#line 662 "term_constr_build.m"
  while (MR_TRUE)
#line 662 "term_constr_build.m"
    {
#line 662 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 662 "term_constr_build.m"
      {
#line 662 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 662 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 662 "term_constr_build.m"
          {
#line 662 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_Info_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4;
#line 662 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_3 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2;
#line 662 "term_constr_build.m"
          }
#line 662 "term_constr_build.m"
        else
#line 663 "term_constr_build.m"
          {
#line 663 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 663 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 663 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AbstractGoal_16;
#line 663 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_21_21;
#line 663 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_22_22;

#line 664 "term_constr_build.m"
            {
#line 664 "term_constr_build.m"
              transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Goal_12, &transform_hlds__term_constr_build__AbstractGoal_16, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_21_21);
            }
#line 665 "term_constr_build.m"
            {
#line 665 "term_constr_build.m"
              mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, ((MR_Box) (transform_hlds__term_constr_build__AbstractGoal_16)), transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2, &transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_22_22);
            }
#line 666 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 666 "term_constr_build.m"
            {
#line 666 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__Goals_13;
#line 666 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_2 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_22_22;
#line 666 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_21_21;

#line 666 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 666 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_2;
#line 666 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 666 "term_constr_build.m"
            }
#line 666 "term_constr_build.m"
            continue;
#line 663 "term_constr_build.m"
          }
#line 662 "term_constr_build.m"
      }
#line 662 "term_constr_build.m"
      break;
#line 662 "term_constr_build.m"
    }
#line 658 "term_constr_build.m"
}

#line 635 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
#line 635 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Type_5,
#line 635 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 635 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 635 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18)
#line 635 "term_constr_build.m"
{
#line 638 "term_constr_build.m"
  {
#line 638 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 638 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoals_9;

#line 642 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__Type_5)) == (MR_mktag((MR_Integer) 1))))
#line 640 "term_constr_build.m"
      {
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Type_5, (MR_Integer) 0)));

#line 641 "term_constr_build.m"
        {
#line 641 "term_constr_build.m"
          transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(transform_hlds__term_constr_build__Goals_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_build__AbstractGoals_9, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);
        }
#line 640 "term_constr_build.m"
      }
#line 642 "term_constr_build.m"
    else
#line 643 "term_constr_build.m"
      {
#line 643 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SwitchVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Type_5, (MR_Integer) 0)));
#line 643 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Type_5, (MR_Integer) 1)));

#line 644 "term_constr_build.m"
        {
#line 644 "term_constr_build.m"
          transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(transform_hlds__term_constr_build__SwitchVar_10, transform_hlds__term_constr_build__Cases_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_build__AbstractGoals_9, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);
        }
#line 643 "term_constr_build.m"
      }
#line 649 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__AbstractGoals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "term_constr_build.m"
      {
#line 647 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_27_27;

#line 648 "term_constr_build.m"
        {
#line 648 "term_constr_build.m"
          transform_hlds__term_constr_build__V_27_27 = libs__polyhedron__universe_0_f_0();
        }
#line 648 "term_constr_build.m"
        {
#line 648 "term_constr_build.m"
          MR_Word base;
#line 648 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 648 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 648 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_27_27));
#line 648 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "term_constr_build.m"
        }
#line 647 "term_constr_build.m"
      }
#line 649 "term_constr_build.m"
    else
#line 649 "term_constr_build.m"
      {
#line 649 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoals_9, (MR_Integer) 1)));
#line 649 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoals_9, (MR_Integer) 0)));

#line 649 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = transform_hlds__term_constr_build__V_32_32;
#line 649 "term_constr_build.m"
        else
#line 653 "term_constr_build.m"
          {
#line 653 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__DisjSize_16;

#line 654 "term_constr_build.m"
            {
#line 654 "term_constr_build.m"
              transform_hlds__term_constr_build__DisjSize_16 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, transform_hlds__term_constr_build__AbstractGoals_9);
            }
#line 655 "term_constr_build.m"
            {
#line 655 "term_constr_build.m"
              MR_Word base;
#line 655 "term_constr_build.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 655 "term_constr_build.m"
              *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 655 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractGoals_9));
#line 655 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__DisjSize_16));
#line 655 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "term_constr_build.m"
            }
#line 653 "term_constr_build.m"
          }
#line 649 "term_constr_build.m"
      }
#line 638 "term_constr_build.m"
  }
#line 635 "term_constr_build.m"
}

#line 557 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
#line 557 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 557 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 557 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 557 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 557 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34,
#line 557 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_35)
#line 557 "term_constr_build.m"
{
#line 562 "term_constr_build.m"
  {
#line 562 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 562 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 562 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerPPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 562 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ZeroVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 7)));
#line 562 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CalleeProcInfo_16;
#line 562 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CalleeTerm2Info_17;
#line 562 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ArgAnalysisOnly_18;
#line 562 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ArgSizeInfo_24;
#line 562 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Constraints_27;
#line 562 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Polyhedron_33;
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 8)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 9)));
#line 563 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 10)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 11)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 12)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 13)));
#line 566 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_88_88;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_89_89;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_90_90;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_91_91;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_92_92;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_93_93;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_94_94;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_95_95;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_96_96;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_97_97;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_98_98;
#line 571 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_99_99;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_100_100;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_101_101;

#line 566 "term_constr_build.m"
    {
#line 566 "term_constr_build.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_build__ModuleInfo_12, transform_hlds__term_constr_build__CalleePPId_7, &transform_hlds__term_constr_build__V_15_15, &transform_hlds__term_constr_build__CalleeProcInfo_16);
    }
#line 570 "term_constr_build.m"
    {
#line 570 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_build__CalleeProcInfo_16, &transform_hlds__term_constr_build__CalleeTerm2Info_17);
    }
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_88_88 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_89_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 7)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 8)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 9)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 10)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 11)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 12)));
#line 571 "term_constr_build.m"
    transform_hlds__term_constr_build__ArgAnalysisOnly_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 13)));
#line 589 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__ArgAnalysisOnly_18 == (MR_Integer) 0))
#line 573 "term_constr_build.m"
      {
#line 573 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__MaybeTermStatus_19;

#line 574 "term_constr_build.m"
        {
#line 574 "term_constr_build.m"
          transform_hlds__term_constr_build__MaybeTermStatus_19 = transform_hlds__term_constr_main__term_status_1_f_0(transform_hlds__term_constr_build__CalleeTerm2Info_17);
        }
#line 584 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__MaybeTermStatus_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "term_constr_build.m"
          {
#line 586 "term_constr_build.m"
            {
#line 586 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "callee procedure has no termination status.");
#line 586 "term_constr_build.m"
              return;
            }
#line 585 "term_constr_build.m"
          }
#line 584 "term_constr_build.m"
        else
#line 576 "term_constr_build.m"
          {
#line 576 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__TermStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__MaybeTermStatus_19, (MR_Integer) 0)));

#line 581 "term_constr_build.m"
            if (((MR_tag((MR_Word) transform_hlds__term_constr_build__TermStatus_20)) == (MR_mktag((MR_Integer) 1))))
#line 578 "term_constr_build.m"
              {
#line 578 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Error_22;
#line 578 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_39_39;

#line 579 "term_constr_build.m"
                {
#line 579 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_39_39, 0) = ((MR_Box) (transform_hlds__term_constr_build__CallerPPId_13));
#line 579 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_build__CalleePPId_7));
#line 579 "term_constr_build.m"
                }
#line 579 "term_constr_build.m"
                {
#line 579 "term_constr_build.m"
                  transform_hlds__term_constr_build__Error_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "term_constr_build.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_22, 0) = ((MR_Box) (transform_hlds__term_constr_build__Context_9));
#line 579 "term_constr_build.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_22, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 579 "term_constr_build.m"
                }
#line 580 "term_constr_build.m"
                {
#line 580 "term_constr_build.m"
                  transform_hlds__term_constr_build__info_update_errors_3_p_0(transform_hlds__term_constr_build__Error_22, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, transform_hlds__term_constr_build__STATE_VARIABLE_Info_35);
                }
#line 578 "term_constr_build.m"
              }
#line 581 "term_constr_build.m"
            else
#line 582 "term_constr_build.m"
              *transform_hlds__term_constr_build__STATE_VARIABLE_Info_35 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34;
#line 576 "term_constr_build.m"
          }
#line 573 "term_constr_build.m"
      }
#line 589 "term_constr_build.m"
    else
#line 590 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_35 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34;
#line 594 "term_constr_build.m"
    {
#line 594 "term_constr_build.m"
      transform_hlds__term_constr_build__ArgSizeInfo_24 = transform_hlds__term_constr_main__success_constrs_1_f_0(transform_hlds__term_constr_build__CalleeTerm2Info_17);
    }
#line 598 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__ArgSizeInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "term_constr_build.m"
      {
#line 597 "term_constr_build.m"
        {
#line 597 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "no argument size info for callee proc");
#line 597 "term_constr_build.m"
          return;
        }
#line 596 "term_constr_build.m"
      }
#line 598 "term_constr_build.m"
    else
#line 599 "term_constr_build.m"
      {
#line 599 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__ArgSizeInfo_24, (MR_Integer) 0)));
#line 599 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ArgSizeConstrs0_26;

#line 600 "term_constr_build.m"
        {
#line 600 "term_constr_build.m"
          transform_hlds__term_constr_build__ArgSizeConstrs0_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_build__SizeInfo_25);
        }
#line 604 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__ArgSizeConstrs0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 604 "term_constr_build.m"
        else
#line 605 "term_constr_build.m"
          {
#line 605 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__CalleeHeadVars_30;
#line 605 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SubstMap_31;
#line 605 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Constraints0_32;

#line 606 "term_constr_build.m"
            {
#line 606 "term_constr_build.m"
              transform_hlds__term_constr_build__CalleeHeadVars_30 = transform_hlds__term_constr_main__head_vars_1_f_0(transform_hlds__term_constr_build__CalleeTerm2Info_17);
            }
#line 607 "term_constr_build.m"
            {
#line 607 "term_constr_build.m"
              transform_hlds__term_constr_build__SubstMap_31 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__CalleeHeadVars_30);
            }
#line 608 "term_constr_build.m"
            {
#line 608 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraints0_32 = libs__lp_rational__substitute_vars_2_f_0(transform_hlds__term_constr_build__SubstMap_31, transform_hlds__term_constr_build__ArgSizeConstrs0_26);
            }
#line 610 "term_constr_build.m"
            {
#line 610 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraints_27 = libs__lp_rational__set_vars_to_zero_2_f_0(transform_hlds__term_constr_build__ZeroVars_14, transform_hlds__term_constr_build__Constraints0_32);
            }
#line 605 "term_constr_build.m"
          }
#line 599 "term_constr_build.m"
      }
#line 613 "term_constr_build.m"
    {
#line 613 "term_constr_build.m"
      transform_hlds__term_constr_build__Polyhedron_33 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_27);
    }
#line 614 "term_constr_build.m"
    {
#line 614 "term_constr_build.m"
      MR_Word base;
#line 614 "term_constr_build.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 614 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_10 = base;
#line 614 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_33));
#line 614 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "term_constr_build.m"
    }
#line 562 "term_constr_build.m"
  }
#line 557 "term_constr_build.m"
}

#line 532 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_recursive_call_6_p_0(
#line 532 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 532 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 532 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 532 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 532 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 532 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17)
#line 532 "term_constr_build.m"
{
#line 536 "term_constr_build.m"
  {
#line 536 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 536 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerPPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 536 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerZeros_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 536 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerArgConstrs_14;
#line 536 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerArgPoly_15;
#line 536 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19;
#line 536 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23;
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 537 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));

#line 539 "term_constr_build.m"
    {
#line 539 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_build__CallerPPId_12, transform_hlds__term_constr_build__CalleePPId_7);
    }
#line 541 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 540 "term_constr_build.m"
      {
#line 540 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__UpdatedRecType_59;
#line 540 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 354 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 354 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_77_77;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_78_78;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_79_79;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_80_80;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_81_81;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_82_82;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_83_83;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_84_84;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_85_85;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_86_86;
#line 355 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_87_87;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_88_88;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_89_89;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_90_90;
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_76_76;

#line 354 "term_constr_build.m"
        {
#line 354 "term_constr_build.m"
          transform_hlds__term_constr_build__UpdatedRecType_59 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(transform_hlds__term_constr_build__V_60_60, (MR_Integer) 1);
        }
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 355 "term_constr_build.m"
        transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 355 "term_constr_build.m"
        {
#line 355 "term_constr_build.m"
          transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 0) = ((MR_Box) ((transform_hlds__term_constr_build__UpdatedRecType_59 | ((transform_hlds__term_constr_build__V_77_77 << (MR_Integer) 2)))));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_78_78));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_79_79));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_80_80));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_81_81));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_82_82));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_83_83));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_84_84));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_85_85));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_86_86));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_87_87));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_88_88));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_89_89));
#line 355 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_90_90));
#line 355 "term_constr_build.m"
        }
#line 540 "term_constr_build.m"
      }
#line 541 "term_constr_build.m"
    else
#line 542 "term_constr_build.m"
      {
#line 542 "term_constr_build.m"
        {
#line 542 "term_constr_build.m"
          transform_hlds__term_constr_build__info_update_recursion_3_p_0((MR_Integer) 2, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19);
        }
#line 542 "term_constr_build.m"
      }
#line 544 "term_constr_build.m"
    {
#line 544 "term_constr_build.m"
      transform_hlds__term_constr_build__CallerArgConstrs_14 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__CallerZeros_13);
    }
#line 545 "term_constr_build.m"
    {
#line 545 "term_constr_build.m"
      transform_hlds__term_constr_build__CallerArgPoly_15 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__CallerArgConstrs_14);
    }
#line 546 "term_constr_build.m"
    {
#line 546 "term_constr_build.m"
      transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);
    }
#line 547 "term_constr_build.m"
    transform_hlds__term_constr_build__V_23_23 = (MR_Word) transform_hlds__term_constr_build__CalleePPId_7;
#line 547 "term_constr_build.m"
    {
#line 547 "term_constr_build.m"
      MR_Word base;
#line 547 "term_constr_build.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 547 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_10 = base;
#line 547 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 547 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__Context_9));
#line 547 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__CallerArgs_8));
#line 547 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__CallerZeros_13));
#line 547 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__CallerArgPoly_15));
#line 547 "term_constr_build.m"
    }
#line 536 "term_constr_build.m"
  }
#line 532 "term_constr_build.m"
}

#line 515 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
#line 515 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 515 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 515 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_9,
#line 515 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 515 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13,
#line 515 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_14)
#line 515 "term_constr_build.m"
{
#line 519 "term_constr_build.m"
  {
#line 519 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 519 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Context_12;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;
#line 521 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_28_28;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30;
#line 521 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31;

#line 520 "term_constr_build.m"
    {
#line 520 "term_constr_build.m"
      transform_hlds__term_constr_build__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_constr_build__GoalInfo_9);
    }
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 11)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 12)));
#line 521 "term_constr_build.m"
    transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 13)));
#line 521 "term_constr_build.m"
    {
#line 521 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_constr_build__CalleePPId_7)), transform_hlds__term_constr_build__V_15_15);
    }
#line 524 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 522 "term_constr_build.m"
      {
#line 522 "term_constr_build.m"
        transform_hlds__term_constr_build__build_recursive_call_6_p_0(transform_hlds__term_constr_build__CalleePPId_7, transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__Context_12, transform_hlds__term_constr_build__AbstractGoal_10, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, transform_hlds__term_constr_build__STATE_VARIABLE_Info_14);
#line 522 "term_constr_build.m"
        return;
      }
#line 524 "term_constr_build.m"
    else
#line 525 "term_constr_build.m"
      {
#line 525 "term_constr_build.m"
        transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(transform_hlds__term_constr_build__CalleePPId_7, transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__Context_12, transform_hlds__term_constr_build__AbstractGoal_10, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, transform_hlds__term_constr_build__STATE_VARIABLE_Info_14);
#line 525 "term_constr_build.m"
        return;
      }
#line 519 "term_constr_build.m"
  }
#line 515 "term_constr_build.m"
}

#line 506 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
#line 506 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 506 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 506 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 506 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 506 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4)
#line 506 "term_constr_build.m"
{
#line 506 "term_constr_build.m"
  {
#line 506 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 506 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv1_AbstractGoal_6;
#line 506 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Info_17;

#line 506 "term_constr_build.m"
    {
#line 506 "term_constr_build.m"
      transform_hlds__term_constr_build__build_abstract_goal_4_p_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), &transform_hlds__term_constr_build__conv1_AbstractGoal_6, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3), &transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Info_17);
    }
#line 506 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv1_AbstractGoal_6));
#line 506 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Info_17));
#line 506 "term_constr_build.m"
  }
#line 506 "term_constr_build.m"
}

#line 502 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
#line 502 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Conjuncts_5,
#line 502 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 502 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_10,
#line 502 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_11)
#line 502 "term_constr_build.m"
{
#line 505 "term_constr_build.m"
  {
#line 505 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 505 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoals0_8;
#line 505 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoals_9;
#line 506 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv2_STATE_VARIABLE_Info_11;

#line 506 "term_constr_build.m"
    {
#line 506 "term_constr_build.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[6], transform_hlds__term_constr_build__Conjuncts_5, &transform_hlds__term_constr_build__AbstractGoals0_8, ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_10)), &transform_hlds__term_constr_build__conv2_STATE_VARIABLE_Info_11);
    }
#line 506 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_11 = ((MR_Word) transform_hlds__term_constr_build__conv2_STATE_VARIABLE_Info_11);
#line 507 "term_constr_build.m"
    {
#line 507 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractGoals_9 = transform_hlds__term_constr_data__simplify_conjuncts_1_f_0(transform_hlds__term_constr_build__AbstractGoals0_8);
    }
#line 508 "term_constr_build.m"
    {
#line 508 "term_constr_build.m"
      MR_Word base;
#line 508 "term_constr_build.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 508 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 508 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractGoals_9));
#line 508 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "term_constr_build.m"
    }
#line 505 "term_constr_build.m"
  }
#line 502 "term_constr_build.m"
}

#line 460 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
#line 460 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 460 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 460 "term_constr_build.m"
{
#line 460 "term_constr_build.m"
  {
#line 460 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 460 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 460 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__2_71;

#line 460 "term_constr_build.m"
    {
#line 460 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_HeadVar__2_71 = transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__460__1_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 460 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__2_71));
#line 460 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 460 "term_constr_build.m"
  }
#line 460 "term_constr_build.m"
}

#line 391 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
#line 391 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalExpr_6,
#line 391 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_7,
#line 391 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 391 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61,
#line 391 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_62)
#line 391 "term_constr_build.m"
{
#line 397 "term_constr_build.m"
  {
#line 397 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 397 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 0))))
#line 442 "term_constr_build.m"
      {
#line 442 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SubGoal_112 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_constr_build__GoalExpr_6), (MR_Integer) 0);
#line 445 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_39_39;

#line 445 "term_constr_build.m"
        {
#line 445 "term_constr_build.m"
          transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__SubGoal_112, &transform_hlds__term_constr_build__V_39_39, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
        }
#line 451 "term_constr_build.m"
        {
#line 451 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_8 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(*transform_hlds__term_constr_build__STATE_VARIABLE_Info_62, transform_hlds__term_constr_build__SubGoal_112);
        }
#line 442 "term_constr_build.m"
      }
#line 397 "term_constr_build.m"
    else
#line 397 "term_constr_build.m"
      if (((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 2))))
#line 433 "term_constr_build.m"
        {
#line 433 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__CallPredId_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)));
#line 433 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__CallProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 433 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__CallArgs_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 433 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__CallSizeArgs_33;
#line 433 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
#line 433 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_86_86;
#line 433 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 433 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));
#line 433 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 5)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_115_115 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
#line 434 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 11)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 12)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 13)));

#line 434 "term_constr_build.m"
          {
#line 434 "term_constr_build.m"
            transform_hlds__term_constr_build__CallSizeArgs_33 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_85_85, transform_hlds__term_constr_build__CallArgs_29);
          }
#line 436 "term_constr_build.m"
          {
#line 436 "term_constr_build.m"
            transform_hlds__term_constr_build__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_86_86, 0) = ((MR_Box) (transform_hlds__term_constr_build__CallPredId_27));
#line 436 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_86_86, 1) = ((MR_Box) (transform_hlds__term_constr_build__CallProcId_28));
#line 436 "term_constr_build.m"
          }
#line 436 "term_constr_build.m"
          {
#line 436 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_call_6_p_0(transform_hlds__term_constr_build__V_86_86, transform_hlds__term_constr_build__CallSizeArgs_33, transform_hlds__term_constr_build__GoalInfo_7, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 436 "term_constr_build.m"
            return;
          }
#line 433 "term_constr_build.m"
        }
#line 397 "term_constr_build.m"
      else
#line 397 "term_constr_build.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 1))))
#line 439 "term_constr_build.m"
          {
#line 439 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Unification_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 439 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)));
#line 439 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 439 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 439 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));

#line 440 "term_constr_build.m"
            {
#line 440 "term_constr_build.m"
              transform_hlds__term_constr_build__build_abstract_unification_4_p_0(transform_hlds__term_constr_build__Unification_37, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 440 "term_constr_build.m"
              return;
            }
#line 439 "term_constr_build.m"
          }
#line 397 "term_constr_build.m"
        else
#line 397 "term_constr_build.m"
          if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 454 "term_constr_build.m"
            {
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__TypeCtorInfo_160_160 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Attrs_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__PredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 454 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__ExtraArgs_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 5)));
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__ProgVars_49;
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__SizeVars_50;
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Constraints_51;
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Polyhedron_54;
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_72_72;
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_73_73;
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_74_74;
#line 453 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 6)));
#line 453 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 7)));
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_132_132;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_133_133;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_134_134;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_135_135;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_136_136;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_137_137;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_138_138;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_139_139;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_140_140;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_141_141;
#line 462 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__V_142_142;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_143_143;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_144_144;
#line 462 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_145_145;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_146_146;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_147_147;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_148_148;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_149_149;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_150_150;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_151_151;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_152_152;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_153_153;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_154_154;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_155_155;
#line 463 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__V_156_156;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_157_157;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_158_158;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_159_159;

#line 461 "term_constr_build.m"
              {
#line 461 "term_constr_build.m"
                transform_hlds__term_constr_build__V_72_72 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_build__TypeCtorInfo_160_160, transform_hlds__term_constr_build__Args_43, transform_hlds__term_constr_build__ExtraArgs_44);
              }
#line 461 "term_constr_build.m"
              {
#line 461 "term_constr_build.m"
                transform_hlds__term_constr_build__ProgVars_49 = mercury__list__map_2_f_0(transform_hlds__term_constr_build__TypeCtorInfo_160_160, (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[5], transform_hlds__term_constr_build__V_72_72);
              }
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_132_132 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 11)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 12)));
#line 462 "term_constr_build.m"
              transform_hlds__term_constr_build__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 13)));
#line 462 "term_constr_build.m"
              {
#line 462 "term_constr_build.m"
                transform_hlds__term_constr_build__SizeVars_50 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_73_73, transform_hlds__term_constr_build__ProgVars_49);
              }
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_146_146 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 11)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 12)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 13)));
#line 463 "term_constr_build.m"
              {
#line 463 "term_constr_build.m"
                transform_hlds__term_constr_build__Constraints_51 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_build__SizeVars_50, transform_hlds__term_constr_build__V_74_74);
              }
#line 466 "term_constr_build.m"
              {
#line 466 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_77_77;

#line 466 "term_constr_build.m"
                {
#line 466 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_77_77 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_constr_build__Attrs_40);
                }
#line 466 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_77_77 == (MR_Integer) 0);
#line 466 "term_constr_build.m"
              }
#line 467 "term_constr_build.m"
              if (!(transform_hlds__term_constr_build__succeeded))
#line 468 "term_constr_build.m"
                {
#line 468 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_75_75;
#line 468 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_76_76;

#line 468 "term_constr_build.m"
                  {
#line 468 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_75_75 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_constr_build__Attrs_40);
                  }
#line 468 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_75_75 == (MR_Integer) 2);
#line 468 "term_constr_build.m"
                  if (transform_hlds__term_constr_build__succeeded)
#line 468 "term_constr_build.m"
                    {
#line 469 "term_constr_build.m"
                      {
#line 469 "term_constr_build.m"
                        transform_hlds__term_constr_build__V_76_76 = parse_tree__prog_data__get_may_call_mercury_1_f_0(transform_hlds__term_constr_build__Attrs_40);
                      }
#line 469 "term_constr_build.m"
                      transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_76_76 == (MR_Integer) 1);
#line 468 "term_constr_build.m"
                    }
#line 468 "term_constr_build.m"
                }
#line 473 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 469 "term_constr_build.m"
                *transform_hlds__term_constr_build__STATE_VARIABLE_Info_62 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61;
#line 473 "term_constr_build.m"
              else
#line 474 "term_constr_build.m"
                {
#line 474 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__Context_52;
#line 474 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__Error_53;
#line 474 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_78_78;
#line 474 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_79_79;

#line 474 "term_constr_build.m"
                  {
#line 474 "term_constr_build.m"
                    transform_hlds__term_constr_build__Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_constr_build__GoalInfo_7);
                  }
#line 475 "term_constr_build.m"
                  {
#line 475 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_79_79, 0) = ((MR_Box) (transform_hlds__term_constr_build__PredId_41));
#line 475 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_79_79, 1) = ((MR_Box) (transform_hlds__term_constr_build__ProcId_42));
#line 475 "term_constr_build.m"
                  }
#line 475 "term_constr_build.m"
                  {
#line 475 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 475 "term_constr_build.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__V_78_78, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_79_79));
#line 475 "term_constr_build.m"
                  }
#line 475 "term_constr_build.m"
                  {
#line 475 "term_constr_build.m"
                    transform_hlds__term_constr_build__Error_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_53, 0) = ((MR_Box) (transform_hlds__term_constr_build__Context_52));
#line 475 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_53, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_78_78));
#line 475 "term_constr_build.m"
                  }
#line 476 "term_constr_build.m"
                  {
#line 476 "term_constr_build.m"
                    transform_hlds__term_constr_build__info_update_errors_3_p_0(transform_hlds__term_constr_build__Error_53, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
                  }
#line 474 "term_constr_build.m"
                }
#line 478 "term_constr_build.m"
              {
#line 478 "term_constr_build.m"
                transform_hlds__term_constr_build__Polyhedron_54 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_51);
              }
#line 479 "term_constr_build.m"
              {
#line 479 "term_constr_build.m"
                MR_Word base;
#line 479 "term_constr_build.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 479 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_8 = base;
#line 479 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_54));
#line 479 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "term_constr_build.m"
              }
#line 454 "term_constr_build.m"
            }
#line 397 "term_constr_build.m"
          else
#line 397 "term_constr_build.m"
            if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 397 "term_constr_build.m"
              {
#line 397 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 397 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));

#line 400 "term_constr_build.m"
                {
#line 400 "term_constr_build.m"
                  transform_hlds__term_constr_build__build_abstract_conj_4_p_0(transform_hlds__term_constr_build__Goals_11, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 400 "term_constr_build.m"
                  return;
                }
#line 397 "term_constr_build.m"
              }
#line 397 "term_constr_build.m"
            else
#line 397 "term_constr_build.m"
              if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 402 "term_constr_build.m"
                {
#line 402 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_108_108;
#line 402 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__Goals_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));

#line 403 "term_constr_build.m"
                  {
#line 403 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "term_constr_build.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_108_108, 0) = ((MR_Box) (transform_hlds__term_constr_build__Goals_111));
#line 403 "term_constr_build.m"
                  }
#line 403 "term_constr_build.m"
                  {
#line 403 "term_constr_build.m"
                    transform_hlds__term_constr_build__build_abstract_disj_4_p_0(transform_hlds__term_constr_build__V_108_108, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 403 "term_constr_build.m"
                    return;
                  }
#line 402 "term_constr_build.m"
                }
#line 397 "term_constr_build.m"
              else
#line 397 "term_constr_build.m"
                if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 481 "term_constr_build.m"
                  {
#line 481 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__V_66_66;
#line 481 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__Context_114;

#line 488 "term_constr_build.m"
                    {
#line 488 "term_constr_build.m"
                      transform_hlds__term_constr_build__Context_114 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_constr_build__GoalInfo_7);
                    }
#line 489 "term_constr_build.m"
                    {
#line 489 "term_constr_build.m"
                      transform_hlds__term_constr_build__V_66_66 = libs__polyhedron__universe_0_f_0();
                    }
#line 489 "term_constr_build.m"
                    {
#line 489 "term_constr_build.m"
                      MR_Word base;
#line 489 "term_constr_build.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 489 "term_constr_build.m"
                      *transform_hlds__term_constr_build__AbstractGoal_8 = base;
#line 489 "term_constr_build.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_66_66));
#line 489 "term_constr_build.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "term_constr_build.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "term_constr_build.m"
                    }
#line 490 "term_constr_build.m"
                    {
#line 490 "term_constr_build.m"
                      transform_hlds__term_constr_build__info_update_ho_info_3_p_0(transform_hlds__term_constr_build__Context_114, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 490 "term_constr_build.m"
                      return;
                    }
#line 481 "term_constr_build.m"
                  }
#line 397 "term_constr_build.m"
                else
#line 397 "term_constr_build.m"
                  if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 408 "term_constr_build.m"
                    {
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__Then_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__Else_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__AbstractSuccessGoal_19;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__CondFail_20;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__AbstractElse_21;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__AbstractFailureGoal_22;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__AbstractDisjuncts_23;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__V_91_91;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__V_93_93;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__V_96_96;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__V_97_97;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__V_101_101;
#line 408 "term_constr_build.m"
                      MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));

#line 411 "term_constr_build.m"
                      {
#line 411 "term_constr_build.m"
                        transform_hlds__term_constr_build__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_93_93, 0) = ((MR_Box) (transform_hlds__term_constr_build__Then_17));
#line 411 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "term_constr_build.m"
                      }
#line 411 "term_constr_build.m"
                      {
#line 411 "term_constr_build.m"
                        transform_hlds__term_constr_build__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_91_91, 0) = ((MR_Box) (transform_hlds__term_constr_build__Cond_16));
#line 411 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_91_91, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_93_93));
#line 411 "term_constr_build.m"
                      }
#line 411 "term_constr_build.m"
                      {
#line 411 "term_constr_build.m"
                        transform_hlds__term_constr_build__build_abstract_conj_4_p_0(transform_hlds__term_constr_build__V_91_91, &transform_hlds__term_constr_build__AbstractSuccessGoal_19, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92);
                      }
#line 416 "term_constr_build.m"
                      {
#line 416 "term_constr_build.m"
                        transform_hlds__term_constr_build__CondFail_20 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92, transform_hlds__term_constr_build__Cond_16);
                      }
#line 420 "term_constr_build.m"
                      {
#line 420 "term_constr_build.m"
                        transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Else_18, &transform_hlds__term_constr_build__AbstractElse_21, transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
                      }
#line 421 "term_constr_build.m"
                      {
#line 421 "term_constr_build.m"
                        transform_hlds__term_constr_build__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_97_97, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractElse_21));
#line 421 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "term_constr_build.m"
                      }
#line 421 "term_constr_build.m"
                      {
#line 421 "term_constr_build.m"
                        transform_hlds__term_constr_build__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_96_96, 0) = ((MR_Box) (transform_hlds__term_constr_build__CondFail_20));
#line 421 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_96_96, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_97_97));
#line 421 "term_constr_build.m"
                      }
#line 421 "term_constr_build.m"
                      {
#line 421 "term_constr_build.m"
                        transform_hlds__term_constr_build__AbstractFailureGoal_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 421 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractFailureGoal_22, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_96_96));
#line 421 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractFailureGoal_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractFailureGoal_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "term_constr_build.m"
                      }
#line 422 "term_constr_build.m"
                      {
#line 422 "term_constr_build.m"
                        transform_hlds__term_constr_build__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_101_101, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractFailureGoal_22));
#line 422 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "term_constr_build.m"
                      }
#line 422 "term_constr_build.m"
                      {
#line 422 "term_constr_build.m"
                        transform_hlds__term_constr_build__AbstractDisjuncts_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractDisjuncts_23, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractSuccessGoal_19));
#line 422 "term_constr_build.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractDisjuncts_23, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_101_101));
#line 422 "term_constr_build.m"
                      }
#line 423 "term_constr_build.m"
                      {
#line 423 "term_constr_build.m"
                        MR_Word base;
#line 423 "term_constr_build.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 423 "term_constr_build.m"
                        *transform_hlds__term_constr_build__AbstractGoal_8 = base;
#line 423 "term_constr_build.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractDisjuncts_23));
#line 423 "term_constr_build.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 2));
#line 423 "term_constr_build.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "term_constr_build.m"
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "term_constr_build.m"
                      }
#line 408 "term_constr_build.m"
                    }
#line 397 "term_constr_build.m"
                  else
#line 397 "term_constr_build.m"
                    if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 425 "term_constr_build.m"
                      {
#line 425 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 425 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__SubGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 429 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__TermVar_26;
#line 426 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__V_88_88;

#line 426 "term_constr_build.m"
                        transform_hlds__term_constr_build__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_build__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 426 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 426 "term_constr_build.m"
                          {
#line 426 "term_constr_build.m"
                            transform_hlds__term_constr_build__TermVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Reason_24, (MR_Integer) 1)));
#line 426 "term_constr_build.m"
                            transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Reason_24, (MR_Integer) 2)));
#line 426 "term_constr_build.m"
                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_88_88 == (MR_Integer) 1);
#line 426 "term_constr_build.m"
                          }
#line 429 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 427 "term_constr_build.m"
                          {
#line 427 "term_constr_build.m"
                            transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(transform_hlds__term_constr_build__TermVar_26, transform_hlds__term_constr_build__SubGoal_25, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 427 "term_constr_build.m"
                            return;
                          }
#line 429 "term_constr_build.m"
                        else
#line 430 "term_constr_build.m"
                          {
#line 430 "term_constr_build.m"
                            transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__SubGoal_25, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 430 "term_constr_build.m"
                            return;
                          }
#line 425 "term_constr_build.m"
                      }
#line 397 "term_constr_build.m"
                    else
#line 397 "term_constr_build.m"
                      if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 492 "term_constr_build.m"
                        {
#line 494 "term_constr_build.m"
                          {
#line 494 "term_constr_build.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_goal_2\'/5", (MR_String) "shorthand");
#line 494 "term_constr_build.m"
                            return;
                          }
#line 492 "term_constr_build.m"
                        }
#line 397 "term_constr_build.m"
                      else
#line 405 "term_constr_build.m"
                        {
#line 405 "term_constr_build.m"
                          MR_Word transform_hlds__term_constr_build__SwitchVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 405 "term_constr_build.m"
                          MR_Word transform_hlds__term_constr_build__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 405 "term_constr_build.m"
                          MR_Word transform_hlds__term_constr_build__V_106_106;
#line 405 "term_constr_build.m"
                          MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));

#line 406 "term_constr_build.m"
                          {
#line 406 "term_constr_build.m"
                            transform_hlds__term_constr_build__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_106_106, 0) = ((MR_Box) (transform_hlds__term_constr_build__SwitchVar_12));
#line 406 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_106_106, 1) = ((MR_Box) (transform_hlds__term_constr_build__Cases_14));
#line 406 "term_constr_build.m"
                          }
#line 406 "term_constr_build.m"
                          {
#line 406 "term_constr_build.m"
                            transform_hlds__term_constr_build__build_abstract_disj_4_p_0(transform_hlds__term_constr_build__V_106_106, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 406 "term_constr_build.m"
                            return;
                          }
#line 405 "term_constr_build.m"
                        }
#line 397 "term_constr_build.m"
  }
#line 391 "term_constr_build.m"
}

#line 378 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
#line 378 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 378 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 378 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 378 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17)
#line 378 "term_constr_build.m"
{
#line 381 "term_constr_build.m"
  {
#line 381 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_12_41;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoal0_10;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Locals0_11;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonLocals0_12;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap_13;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Locals_14;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonLocals_15;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalInfo_36;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonLocals0_37;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__QuantVars_38;
#line 381 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1041 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalExpr_35;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28;
#line 385 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_29_29;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31;
#line 385 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32;

#line 383 "term_constr_build.m"
    {
#line 383 "term_constr_build.m"
      transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(transform_hlds__term_constr_build__GoalExpr_8, transform_hlds__term_constr_build__GoalInfo_9, &transform_hlds__term_constr_build__AbstractGoal0_10, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);
    }
#line 1041 "term_constr_build.m"
    transform_hlds__term_constr_build__GoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 1041 "term_constr_build.m"
    transform_hlds__term_constr_build__GoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 1042 "term_constr_build.m"
    {
#line 1042 "term_constr_build.m"
      transform_hlds__term_constr_build__NonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__term_constr_build__GoalInfo_36);
    }
#line 1043 "term_constr_build.m"
    {
#line 1043 "term_constr_build.m"
      transform_hlds__term_constr_build__QuantVars_38 = hlds__quantification__free_goal_vars_1_f_0(transform_hlds__term_constr_build__Goal_5);
    }
#line 11309 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_12_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1045 "term_constr_build.m"
    {
#line 1045 "term_constr_build.m"
      transform_hlds__term_constr_build__V_40_40 = parse_tree__set_of_var__difference_2_f_0(transform_hlds__term_constr_build__TypeCtorInfo_12_41, transform_hlds__term_constr_build__QuantVars_38, transform_hlds__term_constr_build__NonLocals0_37);
    }
#line 1044 "term_constr_build.m"
    {
#line 1044 "term_constr_build.m"
      transform_hlds__term_constr_build__Locals0_11 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__term_constr_build__TypeCtorInfo_12_41, transform_hlds__term_constr_build__V_40_40);
    }
#line 1046 "term_constr_build.m"
    {
#line 1046 "term_constr_build.m"
      transform_hlds__term_constr_build__NonLocals0_12 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__term_constr_build__TypeCtorInfo_12_41, transform_hlds__term_constr_build__NonLocals0_37);
    }
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 1)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 2)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 3)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 4)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 5)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 6)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 7)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__SizeVarMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 8)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 9)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 10)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 11)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 12)));
#line 385 "term_constr_build.m"
    transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 13)));
#line 386 "term_constr_build.m"
    {
#line 386 "term_constr_build.m"
      transform_hlds__term_constr_build__Locals_14 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_13, transform_hlds__term_constr_build__Locals0_11);
    }
#line 387 "term_constr_build.m"
    {
#line 387 "term_constr_build.m"
      transform_hlds__term_constr_build__NonLocals_15 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_13, transform_hlds__term_constr_build__NonLocals0_12);
    }
#line 388 "term_constr_build.m"
    {
#line 388 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_6 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(transform_hlds__term_constr_build__AbstractGoal0_10, transform_hlds__term_constr_build__Locals_14, transform_hlds__term_constr_build__NonLocals_15);
    }
#line 381 "term_constr_build.m"
  }
#line 378 "term_constr_build.m"
}

#line 357 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
#line 357 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_4,
#line 357 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 357 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7)
#line 357 "term_constr_build.m"
{
#line 360 "term_constr_build.m"
  {
#line 360 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_9_9;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_10_10 = (MR_Word) transform_hlds__term_constr_build__Context_4;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 360 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));

#line 361 "term_constr_build.m"
    {
#line 361 "term_constr_build.m"
      transform_hlds__term_constr_build__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_10_10));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_11_11));
#line 361 "term_constr_build.m"
    }
#line 361 "term_constr_build.m"
    {
#line 361 "term_constr_build.m"
      MR_Word base;
#line 361 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 361 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_7 = base;
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__V_12_12 | ((transform_hlds__term_constr_build__V_13_13 << (MR_Integer) 2)))));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_14_14));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_15_15));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_17_17));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_18_18));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_19_19));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_20_20));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_21_21));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_22_22));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_24_24));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_9_9));
#line 361 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_25_25));
#line 361 "term_constr_build.m"
    }
#line 360 "term_constr_build.m"
  }
#line 357 "term_constr_build.m"
}

#line 350 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
#line 350 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RecType_4,
#line 350 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7,
#line 350 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_8)
#line 350 "term_constr_build.m"
{
#line 353 "term_constr_build.m"
  {
#line 353 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 353 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__UpdatedRecType_6;
#line 353 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 9)));
#line 354 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 10)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 11)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 12)));
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 13)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_33_33;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_34_34;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_35_35;
#line 355 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_36_36;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_37_37;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39;
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25;

#line 354 "term_constr_build.m"
    {
#line 354 "term_constr_build.m"
      transform_hlds__term_constr_build__UpdatedRecType_6 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(transform_hlds__term_constr_build__V_9_9, transform_hlds__term_constr_build__RecType_4);
    }
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 9)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 10)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 11)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 12)));
#line 355 "term_constr_build.m"
    transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 13)));
#line 355 "term_constr_build.m"
    {
#line 355 "term_constr_build.m"
      MR_Word base;
#line 355 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 355 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_8 = base;
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__UpdatedRecType_6 | ((transform_hlds__term_constr_build__V_26_26 << (MR_Integer) 2)))));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_27_27));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_28_28));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_29_29));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_30_30));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_31_31));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_32_32));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_33_33));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_34_34));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_35_35));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_36_36));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_37_37));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_38_38));
#line 355 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 355 "term_constr_build.m"
    }
#line 353 "term_constr_build.m"
  }
#line 350 "term_constr_build.m"
}

#line 344 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_errors_3_p_0(
#line 344 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Error_4,
#line 344 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 344 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7)
#line 344 "term_constr_build.m"
{
#line 347 "term_constr_build.m"
  {
#line 347 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_9_9;
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 347 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
#line 347 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));

#line 348 "term_constr_build.m"
    {
#line 348 "term_constr_build.m"
      transform_hlds__term_constr_build__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 0) = ((MR_Box) (transform_hlds__term_constr_build__Error_4));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_10_10));
#line 348 "term_constr_build.m"
    }
#line 348 "term_constr_build.m"
    {
#line 348 "term_constr_build.m"
      MR_Word base;
#line 348 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 348 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_7 = base;
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__V_11_11 | ((transform_hlds__term_constr_build__V_12_12 << (MR_Integer) 2)))));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_9_9));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_13_13));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_14_14));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_15_15));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_17_17));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_18_18));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_19_19));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_20_20));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_21_21));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_22_22));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 348 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_24_24));
#line 348 "term_constr_build.m"
    }
#line 347 "term_constr_build.m"
  }
#line 344 "term_constr_build.m"
}

#line 338 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
#line 338 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 338 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5)
#line 338 "term_constr_build.m"
{
#line 341 "term_constr_build.m"
  {
#line 341 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 341 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_7_7;
#line 341 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 10)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 8)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 9)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 11)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 12)));
#line 341 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 13)));

#line 342 "term_constr_build.m"
    transform_hlds__term_constr_build__V_7_7 = (transform_hlds__term_constr_build__V_8_8 + (MR_Integer) 1);
#line 342 "term_constr_build.m"
    {
#line 342 "term_constr_build.m"
      MR_Word base;
#line 342 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 342 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_5 = base;
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__V_10_10 | ((transform_hlds__term_constr_build__V_11_11 << (MR_Integer) 2)))));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_12_12));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_13_13));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_14_14));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_15_15));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_17_17));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_18_18));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_19_19));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_20_20));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_7_7));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_21_21));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_22_22));
#line 342 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 342 "term_constr_build.m"
    }
#line 341 "term_constr_build.m"
  }
#line 338 "term_constr_build.m"
}

#line 328 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__init_traversal_info_10_f_0(
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_12,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_13,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_14,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_15,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Types_16,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_17,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarMap_18,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_19,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__FailConstrs_20,
#line 328 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgSizeOnly_21)
#line 328 "term_constr_build.m"
{
#line 334 "term_constr_build.m"
  {
#line 334 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 334 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__11_11;

#line 334 "term_constr_build.m"
    {
#line 334 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 0) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 2)))));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 2) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_12));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 3) = ((MR_Box) (transform_hlds__term_constr_build__Norm_13));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 4) = ((MR_Box) (transform_hlds__term_constr_build__PPId_14));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 5) = ((MR_Box) (transform_hlds__term_constr_build__Context_15));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 6) = ((MR_Box) (transform_hlds__term_constr_build__Types_16));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 7) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_17));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 8) = ((MR_Box) (transform_hlds__term_constr_build__VarMap_18));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 9) = ((MR_Box) (transform_hlds__term_constr_build__SCC_19));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 10) = ((MR_Box) ((MR_Integer) 0));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 11) = ((MR_Box) (transform_hlds__term_constr_build__FailConstrs_20));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 12) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 13) = ((MR_Box) (transform_hlds__term_constr_build__ArgSizeOnly_21));
#line 334 "term_constr_build.m"
    }
#line 334 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__11_11;
#line 334 "term_constr_build.m"
  }
#line 328 "term_constr_build.m"
}

#line 225 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0_1(
#line 225 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 225 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 225 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 225 "term_constr_build.m"
{
#line 225 "term_constr_build.m"
  {
#line 225 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_3;
#line 225 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 225 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__5_64;

#line 225 "term_constr_build.m"
    {
#line 225 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_HeadVar__5_64 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__225__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 225 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__5_64));
#line 225 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_3;
#line 225 "term_constr_build.m"
  }
#line 225 "term_constr_build.m"
}

#line 183 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0(
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__EntryProcs_12,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Options_13,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_14,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_15,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_16,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_46,
#line 183 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_47,
#line 183 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_0_48,
#line 183 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_49)
#line 183 "term_constr_build.m"
{
#line 189 "term_constr_build.m"
  {
#line 189 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredInfo_21;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcInfo_22;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Context_23;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__VarTypes_24;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadProgVars_25;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ArgModes0_26;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Goal0_27;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Goal_28;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap_29;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Zeros_30;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Info0_31;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractBody0_32;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Info_33;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__IntermodStatus_34;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadSizeVars_35;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractBody_36;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ChooseArg_37;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Inputs_42;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__IsEntryPoint_43;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractProc_44;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ThisProcInfo_45;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_65_65;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_66_66;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_79_79;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_80_80;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_100_100;
#line 189 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_109_109;
#line 189 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_111_111;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_85_85;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_86_86;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_87_87;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_88_88;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_89_89;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_90_90;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_91_91;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_92_92;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_93_93;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_94_94;
#line 219 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_95_95;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_96_96;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_97_97;
#line 219 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_98_98;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_99_99;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_101_101;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_102_102;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_103_103;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_104_104;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_105_105;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_106_106;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_107_107;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_108_108;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_110_110;
#line 241 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_112_112;

#line 197 "term_constr_build.m"
    {
#line 197 "term_constr_build.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__PPId_16, &transform_hlds__term_constr_build__PredInfo_21, &transform_hlds__term_constr_build__ProcInfo_22);
    }
#line 198 "term_constr_build.m"
    {
#line 198 "term_constr_build.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_constr_build__PredInfo_21, &transform_hlds__term_constr_build__Context_23);
    }
#line 199 "term_constr_build.m"
    {
#line 199 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_constr_build__ProcInfo_22, &transform_hlds__term_constr_build__VarTypes_24);
    }
#line 200 "term_constr_build.m"
    {
#line 200 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_build__ProcInfo_22, &transform_hlds__term_constr_build__HeadProgVars_25);
    }
#line 201 "term_constr_build.m"
    {
#line 201 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_constr_build__ProcInfo_22, &transform_hlds__term_constr_build__ArgModes0_26);
    }
#line 202 "term_constr_build.m"
    {
#line 202 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_constr_build__ProcInfo_22, &transform_hlds__term_constr_build__Goal0_27);
    }
#line 207 "term_constr_build.m"
    {
#line 207 "term_constr_build.m"
      transform_hlds__term_constr_build__Goal_28 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_constr_build__Goal0_27);
    }
#line 211 "term_constr_build.m"
    {
#line 211 "term_constr_build.m"
      transform_hlds__term_constr_build__allocate_sizevars_5_p_0(transform_hlds__term_constr_build__HeadProgVars_25, transform_hlds__term_constr_build__Goal_28, &transform_hlds__term_constr_build__SizeVarMap_29, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_46, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_47);
    }
#line 212 "term_constr_build.m"
    {
#line 212 "term_constr_build.m"
      transform_hlds__term_constr_build__Zeros_30 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__SizeVarMap_29, transform_hlds__term_constr_build__VarTypes_24);
    }
#line 213 "term_constr_build.m"
    transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Options_13, (MR_Integer) 0)));
#line 213 "term_constr_build.m"
    transform_hlds__term_constr_build__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Options_13, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 213 "term_constr_build.m"
    transform_hlds__term_constr_build__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Options_13, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 213 "term_constr_build.m"
    {
#line 213 "term_constr_build.m"
      transform_hlds__term_constr_build__Info0_31 = transform_hlds__term_constr_build__init_traversal_info_10_f_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__V_59_59, transform_hlds__term_constr_build__PPId_16, transform_hlds__term_constr_build__Context_23, transform_hlds__term_constr_build__VarTypes_24, transform_hlds__term_constr_build__Zeros_30, transform_hlds__term_constr_build__SizeVarMap_29, transform_hlds__term_constr_build__SCC_14, transform_hlds__term_constr_build__V_79_79, transform_hlds__term_constr_build__V_80_80);
    }
#line 218 "term_constr_build.m"
    {
#line 218 "term_constr_build.m"
      transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Goal_28, &transform_hlds__term_constr_build__AbstractBody0_32, transform_hlds__term_constr_build__Info0_31, &transform_hlds__term_constr_build__Info_33);
    }
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_85_85 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__IntermodStatus_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 1)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 2)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 3)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 4)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 5)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 6)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 7)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 8)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 9)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 10)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 11)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 12)));
#line 219 "term_constr_build.m"
    transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 13)));
#line 220 "term_constr_build.m"
    {
#line 220 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadSizeVars_35 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_29, transform_hlds__term_constr_build__HeadProgVars_25);
    }
#line 221 "term_constr_build.m"
    {
#line 221 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractBody_36 = transform_hlds__term_constr_data__simplify_abstract_rep_1_f_0(transform_hlds__term_constr_build__AbstractBody0_32);
    }
#line 225 "term_constr_build.m"
    {
#line 225 "term_constr_build.m"
      transform_hlds__term_constr_build__ChooseArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 225 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_5[0]));
#line 225 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0_1));
#line 225 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 225 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 3) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_15));
#line 225 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 4) = ((MR_Box) (transform_hlds__term_constr_build__VarTypes_24));
#line 225 "term_constr_build.m"
    }
#line 236 "term_constr_build.m"
    {
#line 236 "term_constr_build.m"
      transform_hlds__term_constr_build__Inputs_42 = mercury__list__map_corresponding_3_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_constr_build__ChooseArg_37, transform_hlds__term_constr_build__HeadProgVars_25, transform_hlds__term_constr_build__ArgModes0_26);
    }
#line 240 "term_constr_build.m"
    {
#line 240 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_constr_build__PPId_16)), transform_hlds__term_constr_build__EntryProcs_12);
    }
#line 240 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 240 "term_constr_build.m"
      transform_hlds__term_constr_build__IsEntryPoint_43 = (MR_Integer) 1;
#line 240 "term_constr_build.m"
    else
#line 240 "term_constr_build.m"
      transform_hlds__term_constr_build__IsEntryPoint_43 = (MR_Integer) 0;
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_65_65 = (MR_Word) transform_hlds__term_constr_build__PPId_16;
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 1)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 2)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 3)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 4)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 5)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 6)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 7)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 8)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 9)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 10)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 11)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 12)));
#line 241 "term_constr_build.m"
    transform_hlds__term_constr_build__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 13)));
#line 241 "term_constr_build.m"
    {
#line 241 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractProc_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_65_65));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 1) = ((MR_Box) (transform_hlds__term_constr_build__IsEntryPoint_43));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 2) = ((MR_Box) (transform_hlds__term_constr_build__Context_23));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 3) = ((MR_Box) (transform_hlds__term_constr_build__HeadSizeVars_35));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 4) = ((MR_Box) (transform_hlds__term_constr_build__Inputs_42));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 5) = ((MR_Box) (transform_hlds__term_constr_build__AbstractBody_36));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 6) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarMap_29));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 7) = ((MR_Box) (*transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_47));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 8) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_30));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_66_66));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_109_109));
#line 241 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_111_111));
#line 241 "term_constr_build.m"
    }
#line 245 "term_constr_build.m"
    {
#line 245 "term_constr_build.m"
      transform_hlds__term_constr_build__ThisProcInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 245 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 0) = ((MR_Box) (transform_hlds__term_constr_build__PPId_16));
#line 245 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 1) = ((MR_Box) (transform_hlds__term_constr_build__AbstractProc_44));
#line 245 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 2) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarMap_29));
#line 245 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 3) = ((MR_Box) (transform_hlds__term_constr_build__IntermodStatus_34));
#line 245 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_100_100));
#line 245 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 5) = ((MR_Box) (transform_hlds__term_constr_build__HeadSizeVars_35));
#line 245 "term_constr_build.m"
    }
#line 248 "term_constr_build.m"
    {
#line 248 "term_constr_build.m"
      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0, ((MR_Box) (transform_hlds__term_constr_build__ThisProcInfo_45)), transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_0_48, transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_49);
#line 248 "term_constr_build.m"
      return;
    }
#line 189 "term_constr_build.m"
  }
#line 183 "term_constr_build.m"
}

#line 141 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_2(
#line 141 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 141 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 141 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 141 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 141 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 141 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5)
#line 141 "term_constr_build.m"
{
#line 141 "term_constr_build.m"
  {
#line 141 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv6_HeadVar__4_53;
#line 141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv5_HeadVar__6_55;

#line 141 "term_constr_build.m"
    {
#line 141 "term_constr_build.m"
      transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__141__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv6_HeadVar__4_53, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_4), &transform_hlds__term_constr_build__conv5_HeadVar__6_55);
    }
#line 141 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv6_HeadVar__4_53));
#line 141 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_build__conv5_HeadVar__6_55));
#line 141 "term_constr_build.m"
  }
#line 141 "term_constr_build.m"
}

#line 137 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_1(
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 137 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 137 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5,
#line 137 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_6,
#line 137 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_7)
#line 137 "term_constr_build.m"
{
#line 137 "term_constr_build.m"
  {
#line 137 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 137 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv1_STATE_VARIABLE_SizeVarset_47;
#line 137 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_STATE_VARIABLE_AbstractInfo_49;

#line 137 "term_constr_build.m"
    {
#line 137 "term_constr_build.m"
      transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv1_STATE_VARIABLE_SizeVarset_47, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_4), &transform_hlds__term_constr_build__conv0_STATE_VARIABLE_AbstractInfo_49);
    }
#line 137 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv1_STATE_VARIABLE_SizeVarset_47));
#line 137 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_build__conv0_STATE_VARIABLE_AbstractInfo_49));
#line 137 "term_constr_build.m"
  }
#line 137 "term_constr_build.m"
}

#line 54 "term_constr_build.m"
void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0(
#line 54 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__DepOrder_9,
#line 54 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_10,
#line 54 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Options_11,
#line 54 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Errors_12,
#line 54 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_39,
#line 54 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_40)
#line 54 "term_constr_build.m"
{
#line 133 "term_constr_build.m"
  {
#line 133 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 133 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__EntryProcs_15;
#line 133 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarset_16;
#line 133 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractSCC_17;
#line 133 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredTable0_18;
#line 133 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__RecordInfo_19;
#line 133 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredTable_21;
#line 133 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_43_43;
#line 133 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_44_44;
#line 136 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv4_SizeVarset_16;
#line 136 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv3_AbstractSCC_17;
#line 136 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv2_STATE_VARIABLE_IO_42;
#line 180 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv8_Errors_12;
#line 180 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv7_PredTable_21;

#line 134 "term_constr_build.m"
    {
#line 134 "term_constr_build.m"
      transform_hlds__dependency_graph__get_scc_entry_points_4_p_0(transform_hlds__term_constr_build__SCC_10, transform_hlds__term_constr_build__DepOrder_9, transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_39, &transform_hlds__term_constr_build__EntryProcs_15);
    }
#line 137 "term_constr_build.m"
    {
#line 137 "term_constr_build.m"
      transform_hlds__term_constr_build__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 137 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_3[0]));
#line 137 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_1));
#line 137 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 137 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 3) = ((MR_Box) (transform_hlds__term_constr_build__EntryProcs_15));
#line 137 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 4) = ((MR_Box) (transform_hlds__term_constr_build__Options_11));
#line 137 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 5) = ((MR_Box) (transform_hlds__term_constr_build__SCC_10));
#line 137 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 6) = ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_39));
#line 137 "term_constr_build.m"
    }
#line 139 "term_constr_build.m"
    {
#line 139 "term_constr_build.m"
      transform_hlds__term_constr_build__V_44_44 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 136 "term_constr_build.m"
    {
#line 136 "term_constr_build.m"
      mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_build__V_43_43, transform_hlds__term_constr_build__SCC_10, ((MR_Box) (transform_hlds__term_constr_build__V_44_44)), &transform_hlds__term_constr_build__conv4_SizeVarset_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_build__conv3_AbstractSCC_17, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_build__conv2_STATE_VARIABLE_IO_42);
    }
#line 136 "term_constr_build.m"
    transform_hlds__term_constr_build__SizeVarset_16 = ((MR_Word) transform_hlds__term_constr_build__conv4_SizeVarset_16);
#line 136 "term_constr_build.m"
    transform_hlds__term_constr_build__AbstractSCC_17 = ((MR_Word) transform_hlds__term_constr_build__conv3_AbstractSCC_17);
#line 140 "term_constr_build.m"
    {
#line 140 "term_constr_build.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_39, &transform_hlds__term_constr_build__PredTable0_18);
    }
#line 141 "term_constr_build.m"
    {
#line 141 "term_constr_build.m"
      transform_hlds__term_constr_build__RecordInfo_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 141 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_19, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[0]));
#line 141 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_19, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_2));
#line 141 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 141 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_19, 3) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarset_16));
#line 141 "term_constr_build.m"
    }
#line 180 "term_constr_build.m"
    {
#line 180 "term_constr_build.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2], (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[1], transform_hlds__term_constr_build__RecordInfo_19, transform_hlds__term_constr_build__AbstractSCC_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_build__conv8_Errors_12, ((MR_Box) (transform_hlds__term_constr_build__PredTable0_18)), &transform_hlds__term_constr_build__conv7_PredTable_21);
    }
#line 180 "term_constr_build.m"
    *transform_hlds__term_constr_build__Errors_12 = ((MR_Word) transform_hlds__term_constr_build__conv8_Errors_12);
#line 180 "term_constr_build.m"
    transform_hlds__term_constr_build__PredTable_21 = ((MR_Word) transform_hlds__term_constr_build__conv7_PredTable_21);
#line 181 "term_constr_build.m"
    {
#line 181 "term_constr_build.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_build__PredTable_21, transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_39, transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_40);
#line 181 "term_constr_build.m"
      return;
    }
#line 133 "term_constr_build.m"
  }
#line 54 "term_constr_build.m"
}

#line 50 "term_constr_build.m"
MR_Word MR_CALL 
transform_hlds__term_constr_build__term_build_options_init_3_f_0(
#line 50 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_5,
#line 50 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Failure_6,
#line 50 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgSizeOnly_7)
#line 50 "term_constr_build.m"
{
#line 110 "term_constr_build.m"
  {
#line 110 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 110 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__4_4;

#line 110 "term_constr_build.m"
    {
#line 110 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_4, 0) = ((MR_Box) (transform_hlds__term_constr_build__Norm_5));
#line 110 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_4, 1) = ((MR_Box) ((transform_hlds__term_constr_build__Failure_6 | ((transform_hlds__term_constr_build__ArgSizeOnly_7 << (MR_Integer) 1)))));
#line 110 "term_constr_build.m"
    }
#line 110 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__4_4;
#line 110 "term_constr_build.m"
  }
#line 50 "term_constr_build.m"
}

void mercury__transform_hlds__term_constr_build__init(void)
{
}

void mercury__transform_hlds__term_constr_build__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_disj_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0);
}

void mercury__transform_hlds__term_constr_build__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_build. */
