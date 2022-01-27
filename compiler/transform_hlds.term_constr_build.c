/*
** Automatically generated from `term_constr_build.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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



#line 1276 "term_constr_build.m"
struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s {
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__ModuleInfo_8;
#line 1276 "term_constr_build.m"
  MR_bool transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded;
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__Args_19;
#line 1278 "term_constr_build.m"
  jmp_buf transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__commit_0;
#line 1278 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__Arg_22;
#line 1279 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__conv0_Arg_22;
#line 1276 "term_constr_build.m"
};


#line 167 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 170 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 173 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0;

#line 176 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 179 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 182 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

#line 185 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 188 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 191 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 194 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

#line 197 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0;

#line 200 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 203 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 206 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 209 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0;

#line 212 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 215 "transform_hlds.term_constr_build.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 218 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 221 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 224 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2];

#line 227 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0;

#line 230 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 233 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1];

#line 236 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1;

#line 239 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1];

#line 242 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1];

#line 245 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0[2];

#line 248 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2];

#line 251 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2];

#line 254 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3];

#line 257 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3];

#line 260 "transform_hlds.term_constr_build.c"
static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0[3];

#line 263 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0;

#line 266 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1];

#line 269 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1];

#line 272 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1];

#line 275 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1];

#line 278 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 281 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0;

#line 284 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 287 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6];

#line 290 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6];

#line 293 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0;

#line 296 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1];

#line 299 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1];

#line 302 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1];

#line 305 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1];

#line 308 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 311 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 314 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 317 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

#line 320 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[15];

#line 323 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0[15];

#line 326 "transform_hlds.term_constr_build.c"
static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0[15];

#line 329 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0;

#line 332 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1];

#line 335 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1];

#line 338 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1];

#line 341 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1];

#line 344 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
#line 347 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 349 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 352 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
#line 355 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 357 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 359 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 362 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
#line 365 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 367 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 370 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
#line 373 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 375 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 377 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 380 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
#line 383 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 385 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 388 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
#line 391 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 393 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 395 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 398 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
#line 401 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 403 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 406 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
#line 409 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 411 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 413 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 1278 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_1(
#line 1278 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1279 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_3(
#line 1279 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1278 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_2(
#line 1278 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1278 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_4(
#line 1278 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1276 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0(
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_28,
#line 1276 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__HeadVar__5_29,
#line 1276 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__6_30);

#line 1223 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1223__1_1_p_0(
#line 1223 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__HeadVar__1_29);

#line 1191 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1191__1_3_p_0(
#line 1191 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsName_45,
#line 1191 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__ConsArity_46,
#line 1191 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_66);

#line 1189 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1189__1_2_p_0(
#line 1189 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_43,
#line 1189 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsTypeCtor_47);

#line 1151 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1151__1_2_p_0(
#line 1151 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_73,
#line 1151 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_178);

#line 932 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__932__1_2_p_0(
#line 932 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_49,
#line 932 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_128);

#line 823 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__823__1_4_p_0(
#line 823 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_45,
#line 823 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__2_46,
#line 823 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_47,
#line 823 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_48);

#line 461 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__461__1_1_f_0(
#line 461 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_70);

#line 226 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_f_0(
#line 226 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_15,
#line 226 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_24,
#line 226 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_62,
#line 226 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_63);

#line 168 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__142__1_6_p_0_1(
#line 168 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 168 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 142 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__142__1_6_p_0(
#line 142 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarset_16,
#line 142 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_51,
#line 142 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_52,
#line 142 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_53,
#line 142 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__5_54,
#line 142 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__6_55);

#line 168 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__168__1_1_f_0(
#line 168 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_68);

#line 274 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
#line 274 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 274 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 274 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3);

#line 274 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
#line 274 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 274 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2);

#line 121 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
#line 121 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 121 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 121 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3);

#line 121 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
#line 121 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 121 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2);

#line 632 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
#line 632 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 632 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 632 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3);

#line 632 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
#line 632 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 632 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2);

#line 1276 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1(
#line 1276 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1276 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1276 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 1276 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3);

#line 1264 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_9,
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Ctors_11,
#line 1264 "term_constr_build.m"
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

#line 1191 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4(
#line 1191 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1191 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1189 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
#line 1189 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg);

#line 1151 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
#line 1151 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1151 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1151 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
#line 1151 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1151 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1138 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
#line 1138 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1138 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 1138 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6);

#line 1118 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
#line 1118 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1118 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5);

#line 1081 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
#line 1081 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 1081 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2,
#line 1081 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_3,
#line 1081 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4,
#line 1081 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_5);

#line 1062 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__allocate_sizevars_5_p_0(
#line 1062 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadProgVars_6,
#line 1062 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_7,
#line 1062 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__SizeVarMap_8,
#line 1062 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_11,
#line 1062 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_12);

#line 1012 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
#line 1012 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constraints_3);

#line 1001 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1(
#line 1001 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1001 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 979 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(
#line 979 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LeftProgVar_6,
#line 979 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RightProgVar_7,
#line 979 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_8,
#line 979 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 979 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);

#line 960 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
#line 960 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_1,
#line 960 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 960 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__3_3,
#line 960 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 960 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__5_5);

#line 949 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(
#line 949 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_6,
#line 949 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_9,
#line 949 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Args_10,
#line 949 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_11,
#line 949 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Modes_12);

#line 938 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarMap_7,
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_8,
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Coeff_9,
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13,
#line 938 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14);

#line 934 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4(
#line 934 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 934 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 932 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3(
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 932 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2(
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 924 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1(
#line 924 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 924 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 924 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 924 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3);

#line 875 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_8,
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_9,
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgVars_10,
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Modes_11,
#line 875 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12,
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35,
#line 875 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_36);

#line 843 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_4_p_0(
#line 843 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Unification_5,
#line 843 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 843 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23,
#line 843 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);

#line 831 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
#line 831 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 831 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2,
#line 831 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_3);

#line 823 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
#line 823 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 823 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 823 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 823 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 823 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4);

#line 789 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3,
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5,
#line 789 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_6);

#line 760 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(
#line 760 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TermVar_6,
#line 760 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SubGoal_7,
#line 760 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 760 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24,
#line 760 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_25);

#line 736 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
#line 736 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 736 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchVar_2,
#line 736 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_3);

#line 680 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
#line 680 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchProgVar_1,
#line 680 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 680 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3,
#line 680 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_4,
#line 680 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5,
#line 680 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_6);

#line 659 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
#line 659 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 659 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2,
#line 659 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_3,
#line 659 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 659 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5);

#line 636 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
#line 636 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Type_5,
#line 636 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 636 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 636 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);

#line 558 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
#line 558 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 558 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 558 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 558 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 558 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34,
#line 558 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_35);

#line 533 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_recursive_call_6_p_0(
#line 533 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 533 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 533 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 533 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 533 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 533 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);

#line 516 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
#line 516 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 516 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 516 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_9,
#line 516 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 516 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13,
#line 516 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_14);

#line 507 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
#line 507 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 507 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 507 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 507 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 507 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4);

#line 503 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
#line 503 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Conjuncts_5,
#line 503 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 503 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_10,
#line 503 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_11);

#line 461 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
#line 461 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 461 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 392 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
#line 392 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalExpr_6,
#line 392 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_7,
#line 392 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 392 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61,
#line 392 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);

#line 379 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
#line 379 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 379 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 379 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 379 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);

#line 358 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
#line 358 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_4,
#line 358 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 358 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7);

#line 351 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
#line 351 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RecType_4,
#line 351 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7,
#line 351 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_8);

#line 345 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_errors_3_p_0(
#line 345 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Error_4,
#line 345 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 345 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7);

#line 339 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
#line 339 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 339 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5);

#line 329 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__init_traversal_info_10_f_0(
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_12,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_13,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_14,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_15,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Types_16,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_17,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarMap_18,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_19,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__FailConstrs_20,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgSizeOnly_21);

#line 226 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0_1(
#line 226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 184 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0(
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__EntryProcs_12,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Options_13,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_14,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_15,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_16,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_46,
#line 184 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_47,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_0_48,
#line 184 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_49);

#line 142 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_2(
#line 142 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 142 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 142 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 142 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 142 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 142 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5);

#line 138 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_1(
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 138 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 138 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5,
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_6,
#line 138 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_7);


static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_1[12][2];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_2[14][3];

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

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_2[14][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[5])),
    ((MR_Box) (transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__142__1_6_p_0_1)),
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1622 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1630 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1638 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0
  }
};

#line 1646 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1655 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1663 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1672 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1680 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1689 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1697 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1706 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1714 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1723 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1731 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1740 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

#line 1748 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1756 "transform_hlds.term_constr_build.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1765 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1774 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1782 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1788 "transform_hlds.term_constr_build.c"
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

#line 1803 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1811 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1816 "transform_hlds.term_constr_build.c"
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

#line 1831 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

#line 1836 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1
};

#line 1841 "transform_hlds.term_constr_build.c"
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

#line 1855 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1,
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

#line 1861 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1867 "transform_hlds.term_constr_build.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_disj_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____disj_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____disj_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "disj_info",
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0 },
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0
};

#line 1884 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1891 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3] = {
  (MR_String) "tbo_functor_info",
  (MR_String) "tbo_failure_constrs",
  (MR_String) "tbo_arg_size_only"
};

#line 1898 "transform_hlds.term_constr_build.c"
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

#line 1917 "transform_hlds.term_constr_build.c"
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

#line 1932 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0
};

#line 1937 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0
  }
};

#line 1946 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0
};

#line 1951 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1] = {
  (MR_Integer) 0
};

#line 1956 "transform_hlds.term_constr_build.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "term_build_options",
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0 },
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0
};

#line 1973 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1982 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0
  }
};

#line 1990 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1998 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main__transform_hlds__term_constr_main__type_ctor_info_intermod_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_constr_errors__type_ctor_info_termination2_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 2008 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6] = {
  (MR_String) "tsi_scc_ppid",
  (MR_String) "tsi_proc",
  (MR_String) "tsi_size_var_map",
  (MR_String) "tsi_intermod",
  (MR_String) "tsi_accum_errors",
  (MR_String) "tsi_non_zero_heads"
};

#line 2018 "transform_hlds.term_constr_build.c"
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

#line 2033 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0
};

#line 2038 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0
  }
};

#line 2047 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0
};

#line 2052 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1] = {
  (MR_Integer) 0
};

#line 2057 "transform_hlds.term_constr_build.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "term_scc_info",
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0 },
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0
};

#line 2074 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2083 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 2091 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2099 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
  }
};

#line 2107 "transform_hlds.term_constr_build.c"
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

#line 2126 "transform_hlds.term_constr_build.c"
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

#line 2145 "transform_hlds.term_constr_build.c"
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

#line 2224 "transform_hlds.term_constr_build.c"
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

#line 2239 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0
};

#line 2244 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0
  }
};

#line 2253 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0
};

#line 2258 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1] = {
  (MR_Integer) 0
};

#line 2263 "transform_hlds.term_constr_build.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_build",
  (MR_String) "tti_traversal_info",
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0 },
  {     transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0
};

#line 2280 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
#line 2283 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2285 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2287 "transform_hlds.term_constr_build.c"
{
#line 2289 "transform_hlds.term_constr_build.c"
  {
#line 2291 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2294 "transform_hlds.term_constr_build.c"
    {
#line 2296 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____disj_info_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2299 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2301 "transform_hlds.term_constr_build.c"
  }
#line 2303 "transform_hlds.term_constr_build.c"
}

#line 2306 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
#line 2309 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2311 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2313 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2315 "transform_hlds.term_constr_build.c"
{
#line 2317 "transform_hlds.term_constr_build.c"
  {
#line 2319 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2322 "transform_hlds.term_constr_build.c"
    {
#line 2324 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____disj_info_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2327 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2329 "transform_hlds.term_constr_build.c"
  }
#line 2331 "transform_hlds.term_constr_build.c"
}

#line 2334 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
#line 2337 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2339 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2341 "transform_hlds.term_constr_build.c"
{
#line 2343 "transform_hlds.term_constr_build.c"
  {
#line 2345 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2348 "transform_hlds.term_constr_build.c"
    {
#line 2350 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____term_build_options_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2353 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2355 "transform_hlds.term_constr_build.c"
  }
#line 2357 "transform_hlds.term_constr_build.c"
}

#line 2360 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
#line 2363 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2365 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2367 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2369 "transform_hlds.term_constr_build.c"
{
#line 2371 "transform_hlds.term_constr_build.c"
  {
#line 2373 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2376 "transform_hlds.term_constr_build.c"
    {
#line 2378 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____term_build_options_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2381 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2383 "transform_hlds.term_constr_build.c"
  }
#line 2385 "transform_hlds.term_constr_build.c"
}

#line 2388 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
#line 2391 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2393 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2395 "transform_hlds.term_constr_build.c"
{
#line 2397 "transform_hlds.term_constr_build.c"
  {
#line 2399 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2402 "transform_hlds.term_constr_build.c"
    {
#line 2404 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____term_scc_info_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2407 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2409 "transform_hlds.term_constr_build.c"
  }
#line 2411 "transform_hlds.term_constr_build.c"
}

#line 2414 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
#line 2417 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2419 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2421 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2423 "transform_hlds.term_constr_build.c"
{
#line 2425 "transform_hlds.term_constr_build.c"
  {
#line 2427 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2430 "transform_hlds.term_constr_build.c"
    {
#line 2432 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____term_scc_info_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2435 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2437 "transform_hlds.term_constr_build.c"
  }
#line 2439 "transform_hlds.term_constr_build.c"
}

#line 2442 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
#line 2445 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2447 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2449 "transform_hlds.term_constr_build.c"
{
#line 2451 "transform_hlds.term_constr_build.c"
  {
#line 2453 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2456 "transform_hlds.term_constr_build.c"
    {
#line 2458 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2461 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2463 "transform_hlds.term_constr_build.c"
  }
#line 2465 "transform_hlds.term_constr_build.c"
}

#line 2468 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
#line 2471 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2473 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2475 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2477 "transform_hlds.term_constr_build.c"
{
#line 2479 "transform_hlds.term_constr_build.c"
  {
#line 2481 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2484 "transform_hlds.term_constr_build.c"
    {
#line 2486 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2489 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2491 "transform_hlds.term_constr_build.c"
  }
#line 2493 "transform_hlds.term_constr_build.c"
}

#line 1278 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_1(
#line 1278 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1278 "term_constr_build.m"
{
#line 1278 "term_constr_build.m"
  {
#line 1278 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1278 "term_constr_build.m"
    MR_builtin_longjmp((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__commit_0, 1);
#line 1278 "term_constr_build.m"
  }
#line 1278 "term_constr_build.m"
}

#line 1279 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_3(
#line 1279 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1279 "term_constr_build.m"
{
#line 1279 "term_constr_build.m"
  {
#line 1279 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1279 "term_constr_build.m"
    (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__Arg_22 = ((MR_Word) (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__conv0_Arg_22);
#line 1279 "term_constr_build.m"
    {
#line 1279 "term_constr_build.m"
      transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_2(transform_hlds__term_constr_build__env_ptr);
#line 1279 "term_constr_build.m"
      return;
    }
#line 1279 "term_constr_build.m"
  }
#line 1279 "term_constr_build.m"
}

#line 1278 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_2(
#line 1278 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1278 "term_constr_build.m"
{
#line 1278 "term_constr_build.m"
  {
#line 1278 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1278 "term_constr_build.m"
    {
#line 1281 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__Arg_22, (MR_Integer) 1)));
#line 1281 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__Arg_22, (MR_Integer) 0)));
#line 1281 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__Arg_22, (MR_Integer) 2)));
#line 1281 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__Arg_22, (MR_Integer) 3)));

#line 1281 "term_constr_build.m"
      {
#line 1281 "term_constr_build.m"
        (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__ModuleInfo_8, transform_hlds__term_constr_build__V_31_31);
      }
#line 1280 "term_constr_build.m"
      (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded = !((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded);
#line 1280 "term_constr_build.m"
      if ((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded)
#line 1280 "term_constr_build.m"
        {
#line 1280 "term_constr_build.m"
          transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_1(transform_hlds__term_constr_build__env_ptr);
#line 1280 "term_constr_build.m"
          return;
        }
#line 1278 "term_constr_build.m"
    }
#line 1278 "term_constr_build.m"
  }
#line 1278 "term_constr_build.m"
}

#line 1278 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_4(
#line 1278 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1278 "term_constr_build.m"
{
#line 1278 "term_constr_build.m"
  {
#line 1278 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1278 "term_constr_build.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__commit_0) == 0)
#line 1278 "term_constr_build.m"
      {
#line 1278 "term_constr_build.m"
        {
#line 1279 "term_constr_build.m"
          {
#line 1279 "term_constr_build.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, &(transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__conv0_Arg_22, (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__Args_19, transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_3, transform_hlds__term_constr_build__env_ptr);
          }
#line 1278 "term_constr_build.m"
        }
#line 1278 "term_constr_build.m"
        (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded = MR_FALSE;
#line 1278 "term_constr_build.m"
      }
#line 1278 "term_constr_build.m"
    else
#line 1278 "term_constr_build.m"
      (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded = MR_TRUE;
#line 1278 "term_constr_build.m"
  }
#line 1278 "term_constr_build.m"
}

#line 1276 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0(
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1276 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_28,
#line 1276 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__HeadVar__5_29,
#line 1276 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__6_30)
#line 1276 "term_constr_build.m"
{
#line 1276 "term_constr_build.m"
  {
#line 1276 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0_s transform_hlds__term_constr_build__env;

#line 1276 "term_constr_build.m"
    (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__ModuleInfo_8 = transform_hlds__term_constr_build__ModuleInfo_8;
#line 1276 "term_constr_build.m"
    {
#line 1276 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 2)));
#line 1276 "term_constr_build.m"
      MR_Integer transform_hlds__term_constr_build__Arity_20;
#line 1276 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__ConsId_23;
#line 1276 "term_constr_build.m"
      MR_Integer transform_hlds__term_constr_build__Bound_24;
#line 1277 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 0)));
#line 1277 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 1)));
#line 1277 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_21_21;

#line 1277 "term_constr_build.m"
      (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 3)));
#line 1277 "term_constr_build.m"
      transform_hlds__term_constr_build__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 4)));
#line 1277 "term_constr_build.m"
      transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_28, (MR_Integer) 5)));
#line 1278 "term_constr_build.m"
      {
#line 1278 "term_constr_build.m"
        transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_4(&transform_hlds__term_constr_build__env);
      }
#line 1278 "term_constr_build.m"
      (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded = !((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded);
#line 1276 "term_constr_build.m"
      if ((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded)
#line 1276 "term_constr_build.m"
        {
#line 1283 "term_constr_build.m"
          {
#line 1283 "term_constr_build.m"
            transform_hlds__term_constr_build__ConsId_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1283 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 1) = ((MR_Box) (transform_hlds__term_constr_build__SymName_18));
#line 1283 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 2) = ((MR_Box) (transform_hlds__term_constr_build__Arity_20));
#line 1283 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 3) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_10));
#line 1283 "term_constr_build.m"
          }
#line 1284 "term_constr_build.m"
          {
#line 1284 "term_constr_build.m"
            transform_hlds__term_constr_build__Bound_24 = transform_hlds__term_norm__functor_lower_bound_4_f_0((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__ModuleInfo_8, transform_hlds__term_constr_build__Norm_7, transform_hlds__term_constr_build__TypeCtor_10, transform_hlds__term_constr_build__ConsId_23);
          }
#line 1285 "term_constr_build.m"
          (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded = (transform_hlds__term_constr_build__Bound_24 > transform_hlds__term_constr_build__HeadVar__5_29);
#line 1285 "term_constr_build.m"
          if ((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded)
#line 1285 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__6_30 = transform_hlds__term_constr_build__Bound_24;
#line 1285 "term_constr_build.m"
          else
#line 1285 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__6_30 = transform_hlds__term_constr_build__HeadVar__5_29;
#line 1285 "term_constr_build.m"
          (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded = MR_TRUE;
#line 1276 "term_constr_build.m"
        }
#line 1276 "term_constr_build.m"
      return (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0_env_0__succeeded;
#line 1276 "term_constr_build.m"
    }
#line 1276 "term_constr_build.m"
  }
#line 1276 "term_constr_build.m"
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

#line 1191 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1191__1_3_p_0(
#line 1191 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsName_45,
#line 1191 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__ConsArity_46,
#line 1191 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_66)
#line 1191 "term_constr_build.m"
{
#line 1191 "term_constr_build.m"
  {
#line 1191 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1191 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SymName_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 2)));
#line 1191 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__Arity_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 4)));
#line 1192 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 0)));
#line 1192 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 1)));
#line 1192 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build___Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 3)));
#line 1192 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_66, (MR_Integer) 5)));

#line 1194 "term_constr_build.m"
    {
#line 1194 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__term_constr_build__SymName_52, transform_hlds__term_constr_build__ConsName_45);
    }
#line 1194 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1195 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__Arity_54 == transform_hlds__term_constr_build__ConsArity_46);
#line 1193 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 1191 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1191 "term_constr_build.m"
  }
#line 1191 "term_constr_build.m"
}

#line 1189 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1189__1_2_p_0(
#line 1189 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_43,
#line 1189 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsTypeCtor_47)
#line 1189 "term_constr_build.m"
{
#line 1189 "term_constr_build.m"
  {
#line 1189 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 1189 "term_constr_build.m"
    {
#line 1189 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(transform_hlds__term_constr_build__TypeCtor_43, transform_hlds__term_constr_build__ConsTypeCtor_47);
    }
#line 1189 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1189 "term_constr_build.m"
  }
#line 1189 "term_constr_build.m"
}

#line 1151 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1151__1_2_p_0(
#line 1151 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_73,
#line 1151 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_178)
#line 1151 "term_constr_build.m"
{
#line 1151 "term_constr_build.m"
  {
#line 1151 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 1151 "term_constr_build.m"
    {
#line 1151 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__HeadVar__1_73, ((MR_Box) (transform_hlds__term_constr_build__HeadVar__2_178)));
    }
#line 1151 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1151 "term_constr_build.m"
  }
#line 1151 "term_constr_build.m"
}

#line 932 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__932__1_2_p_0(
#line 932 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_49,
#line 932 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_128)
#line 932 "term_constr_build.m"
{
#line 932 "term_constr_build.m"
  {
#line 932 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 932 "term_constr_build.m"
    {
#line 932 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__HeadVar__1_49, ((MR_Box) (transform_hlds__term_constr_build__HeadVar__2_128)));
    }
#line 932 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 932 "term_constr_build.m"
  }
#line 932 "term_constr_build.m"
}

#line 823 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__823__1_4_p_0(
#line 823 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_45,
#line 823 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__2_46,
#line 823 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_47,
#line 823 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_48)
#line 823 "term_constr_build.m"
{
#line 823 "term_constr_build.m"
  {
#line 823 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 823 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv0_HeadVar__2_46;

#line 823 "term_constr_build.m"
    {
#line 823 "term_constr_build.m"
      mercury__map__det_remove_4_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__term_constr_build__HeadVar__1_45)), &transform_hlds__term_constr_build__conv0_HeadVar__2_46, transform_hlds__term_constr_build__HeadVar__3_47, transform_hlds__term_constr_build__HeadVar__4_48);
    }
#line 823 "term_constr_build.m"
    *transform_hlds__term_constr_build__HeadVar__2_46 = ((MR_Integer) transform_hlds__term_constr_build__conv0_HeadVar__2_46);
#line 823 "term_constr_build.m"
  }
#line 823 "term_constr_build.m"
}

#line 461 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__461__1_1_f_0(
#line 461 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_70)
#line 461 "term_constr_build.m"
{
#line 461 "term_constr_build.m"
  {
#line 461 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 461 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__2_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_70, (MR_Integer) 0)));
#line 461 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_70, (MR_Integer) 1)));
#line 461 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_70, (MR_Integer) 2)));
#line 461 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_70, (MR_Integer) 3)));

#line 461 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__2_71;
#line 461 "term_constr_build.m"
  }
#line 461 "term_constr_build.m"
}

#line 226 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_f_0(
#line 226 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_15,
#line 226 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_24,
#line 226 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_62,
#line 226 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_63)
#line 226 "term_constr_build.m"
{
#line 226 "term_constr_build.m"
  {
#line 226 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 226 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__5_64;
#line 226 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Type_41;

#line 227 "term_constr_build.m"
    {
#line 227 "term_constr_build.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__VarTypes_24, transform_hlds__term_constr_build__HeadVar__3_62, &transform_hlds__term_constr_build__Type_41);
    }
#line 229 "term_constr_build.m"
    {
#line 229 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__Type_41);
    }
#line 229 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 229 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 230 "term_constr_build.m"
      {
#line 230 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__HeadVar__4_63);
      }
#line 233 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 232 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__5_64 = (MR_Integer) 1;
#line 233 "term_constr_build.m"
    else
#line 234 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__5_64 = (MR_Integer) 0;
#line 226 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__5_64;
#line 226 "term_constr_build.m"
  }
#line 226 "term_constr_build.m"
}

#line 168 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__142__1_6_p_0_1(
#line 168 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 168 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 168 "term_constr_build.m"
{
#line 168 "term_constr_build.m"
  {
#line 168 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 168 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 168 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv2_HeadVar__2_69;

#line 168 "term_constr_build.m"
    {
#line 168 "term_constr_build.m"
      transform_hlds__term_constr_build__conv2_HeadVar__2_69 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__168__1_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 168 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv2_HeadVar__2_69));
#line 168 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 168 "term_constr_build.m"
  }
#line 168 "term_constr_build.m"
}

#line 142 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__142__1_6_p_0(
#line 142 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarset_16,
#line 142 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_51,
#line 142 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_52,
#line 142 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_53,
#line 142 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__5_54,
#line 142 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__6_55)
#line 142 "term_constr_build.m"
{
#line 142 "term_constr_build.m"
  {
#line 142 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_118_118;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_119_119;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_121_121;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredId_22;
#line 142 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__ProcId_23;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AR0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 1)));
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__VarMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 2)));
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Status_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 3)));
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcErrors_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 4)));
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadSizeVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 5)));
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AR_29;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredInfo0_30;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcTable0_31;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcInfo0_32;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcInfo_36;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcTable_37;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredInfo_38;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_51, (MR_Integer) 0)));
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_57_57;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_58_58;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_60_60;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_61_61;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_62_62;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_63_63;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_64_64;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Errors_72_72;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_83_83;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_84_84;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_85_85;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_86_86;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_87_87;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_88_88;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_89_89;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_91_91;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_92_92;
#line 153 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_93_93;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_94_94;
#line 153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_90_90;
#line 154 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv0_PredInfo0_30;
#line 156 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv1_ProcInfo0_32;

#line 144 "term_constr_build.m"
    transform_hlds__term_constr_build__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_56_56, (MR_Integer) 0)));
#line 144 "term_constr_build.m"
    transform_hlds__term_constr_build__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_56_56, (MR_Integer) 1)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 0)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 1)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 2)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 3)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 4)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 5)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 6)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 7)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 8)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 9)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 10)));
#line 153 "term_constr_build.m"
    transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_24, (MR_Integer) 11)));
#line 153 "term_constr_build.m"
    {
#line 153 "term_constr_build.m"
      transform_hlds__term_constr_build__AR_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_83_83));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_84_84));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_85_85));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_86_86));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_87_87));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_88_88));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_89_89));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 7) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarset_16));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_91_91));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_92_92));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_93_93));
#line 153 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_94_94));
#line 153 "term_constr_build.m"
    }
#line 3177 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_118_118 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3179 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_119_119 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 154 "term_constr_build.m"
    {
#line 154 "term_constr_build.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_constr_build__TypeCtorInfo_118_118, transform_hlds__term_constr_build__TypeCtorInfo_119_119, transform_hlds__term_constr_build__HeadVar__5_54, ((MR_Box) (transform_hlds__term_constr_build__PredId_22)), &transform_hlds__term_constr_build__conv0_PredInfo0_30);
    }
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__PredInfo0_30 = ((MR_Word) transform_hlds__term_constr_build__conv0_PredInfo0_30);
#line 155 "term_constr_build.m"
    {
#line 155 "term_constr_build.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_build__PredInfo0_30, &transform_hlds__term_constr_build__ProcTable0_31);
    }
#line 3193 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_121_121 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 156 "term_constr_build.m"
    {
#line 156 "term_constr_build.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_build__TypeCtorInfo_121_121, transform_hlds__term_constr_build__ProcTable0_31, transform_hlds__term_constr_build__ProcId_23, &transform_hlds__term_constr_build__conv1_ProcInfo0_32);
    }
#line 156 "term_constr_build.m"
    transform_hlds__term_constr_build__ProcInfo0_32 = ((MR_Word) transform_hlds__term_constr_build__conv1_ProcInfo0_32);
#line 158 "term_constr_build.m"
    {
#line 158 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_build__ProcInfo0_32, &transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_57_57);
    }
#line 159 "term_constr_build.m"
    {
#line 159 "term_constr_build.m"
      transform_hlds__term_constr_build__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 159 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_59_59, 0) = ((MR_Box) (transform_hlds__term_constr_build__Status_26));
#line 159 "term_constr_build.m"
    }
#line 159 "term_constr_build.m"
    {
#line 159 "term_constr_build.m"
      transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_58_58 = transform_hlds__term_constr_main__f_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_57_57, transform_hlds__term_constr_build__V_59_59);
    }
#line 160 "term_constr_build.m"
    {
#line 160 "term_constr_build.m"
      transform_hlds__term_constr_build__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 160 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_61_61, 0) = ((MR_Box) (transform_hlds__term_constr_build__AR_29));
#line 160 "term_constr_build.m"
    }
#line 160 "term_constr_build.m"
    {
#line 160 "term_constr_build.m"
      transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_60_60 = transform_hlds__term_constr_main__f_97_98_115_116_114_97_99_116_95_114_101_112_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_58_58, transform_hlds__term_constr_build__V_61_61);
    }
#line 161 "term_constr_build.m"
    {
#line 161 "term_constr_build.m"
      transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_62_62 = transform_hlds__term_constr_main__f_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_60_60, transform_hlds__term_constr_build__VarMap_25);
    }
#line 162 "term_constr_build.m"
    {
#line 162 "term_constr_build.m"
      transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_63_63 = transform_hlds__term_constr_main__f_104_101_97_100_95_118_97_114_115_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_62_62, transform_hlds__term_constr_build__HeadSizeVars_28);
    }
#line 166 "term_constr_build.m"
    {
#line 166 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_data__analysis_depends_on_ho_1_p_0(transform_hlds__term_constr_build__AR_29);
    }
#line 171 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 167 "term_constr_build.m"
      {
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_123_123;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__HorderErrors_34;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_65_65;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_66_66;
#line 167 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_95_95;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_96_96;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_97_97;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_98_98;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_99_99;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_100_100;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_101_101;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_102_102;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_103_103;
#line 168 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_104_104;
#line 168 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_105_105;

#line 167 "term_constr_build.m"
        {
#line 167 "term_constr_build.m"
          transform_hlds__term_constr_build__V_66_66 = libs__polyhedron__universe_0_f_0();
        }
#line 167 "term_constr_build.m"
        {
#line 167 "term_constr_build.m"
          transform_hlds__term_constr_build__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 167 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_65_65, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_66_66));
#line 167 "term_constr_build.m"
        }
#line 167 "term_constr_build.m"
        {
#line 167 "term_constr_build.m"
          transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_64_64 = transform_hlds__term_constr_main__f_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_63_63, transform_hlds__term_constr_build__V_65_65);
        }
#line 3303 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__TypeInfo_123_123 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[0];
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 0)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 1)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 2)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 3)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 4)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 5)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 6)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 7)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 8)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 9)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 10)));
#line 168 "term_constr_build.m"
        transform_hlds__term_constr_build__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_29, (MR_Integer) 11)));
#line 168 "term_constr_build.m"
        {
#line 168 "term_constr_build.m"
          transform_hlds__term_constr_build__HorderErrors_34 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0, transform_hlds__term_constr_build__TypeInfo_123_123, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[13], transform_hlds__term_constr_build__V_71_71);
        }
#line 170 "term_constr_build.m"
        {
#line 170 "term_constr_build.m"
          mercury__list__append_3_p_1(transform_hlds__term_constr_build__TypeInfo_123_123, transform_hlds__term_constr_build__HorderErrors_34, transform_hlds__term_constr_build__HeadVar__3_52, &transform_hlds__term_constr_build__STATE_VARIABLE_Errors_72_72);
        }
#line 167 "term_constr_build.m"
      }
#line 171 "term_constr_build.m"
    else
#line 172 "term_constr_build.m"
      {
#line 172 "term_constr_build.m"
        transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_64_64 = transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_63_63;
#line 172 "term_constr_build.m"
        transform_hlds__term_constr_build__STATE_VARIABLE_Errors_72_72 = transform_hlds__term_constr_build__HeadVar__3_52;
#line 172 "term_constr_build.m"
      }
#line 174 "term_constr_build.m"
    {
#line 174 "term_constr_build.m"
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_build__STATE_VARIABLE_TermInfo_64_64, transform_hlds__term_constr_build__ProcInfo0_32, &transform_hlds__term_constr_build__ProcInfo_36);
    }
#line 176 "term_constr_build.m"
    {
#line 176 "term_constr_build.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_build__TypeCtorInfo_121_121, transform_hlds__term_constr_build__ProcId_23, ((MR_Box) (transform_hlds__term_constr_build__ProcInfo_36)), transform_hlds__term_constr_build__ProcTable0_31, &transform_hlds__term_constr_build__ProcTable_37);
    }
#line 177 "term_constr_build.m"
    {
#line 177 "term_constr_build.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_constr_build__ProcTable_37, transform_hlds__term_constr_build__PredInfo0_30, &transform_hlds__term_constr_build__PredInfo_38);
    }
#line 178 "term_constr_build.m"
    {
#line 178 "term_constr_build.m"
      mercury__map__det_update_4_p_0(transform_hlds__term_constr_build__TypeCtorInfo_118_118, transform_hlds__term_constr_build__TypeCtorInfo_119_119, ((MR_Box) (transform_hlds__term_constr_build__PredId_22)), ((MR_Box) (transform_hlds__term_constr_build__PredInfo_38)), transform_hlds__term_constr_build__HeadVar__5_54, transform_hlds__term_constr_build__HeadVar__6_55);
    }
#line 179 "term_constr_build.m"
    {
#line 179 "term_constr_build.m"
      mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[0], transform_hlds__term_constr_build__ProcErrors_27, transform_hlds__term_constr_build__STATE_VARIABLE_Errors_72_72, transform_hlds__term_constr_build__HeadVar__4_53);
#line 179 "term_constr_build.m"
      return;
    }
#line 142 "term_constr_build.m"
  }
#line 142 "term_constr_build.m"
}

#line 168 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__168__1_1_f_0(
#line 168 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_68)
#line 168 "term_constr_build.m"
{
#line 168 "term_constr_build.m"
  {
#line 168 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 168 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__2_69;
#line 168 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Context_77 = (MR_Word) transform_hlds__term_constr_build__HeadVar__1_68;

#line 169 "term_constr_build.m"
    {
#line 169 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__2_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 169 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_69, 0) = ((MR_Box) (transform_hlds__term_constr_build__Context_77));
#line 169 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 169 "term_constr_build.m"
    }
#line 168 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__2_69;
#line 168 "term_constr_build.m"
  }
#line 168 "term_constr_build.m"
}

#line 274 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
#line 274 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 274 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 274 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 274 "term_constr_build.m"
{
#line 274 "term_constr_build.m"
  {
#line 274 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 274 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_48 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 274 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_49 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 274 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_48 == transform_hlds__term_constr_build__CastY_49);
#line 274 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 3440 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 274 "term_constr_build.m"
    else
#line 274 "term_constr_build.m"
      {
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 6)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 7)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 8)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 9)));
#line 274 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 10)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 11)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 12)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 13)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 2)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 3)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 4)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 5)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 6)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 7)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 8)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 9)));
#line 274 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 10)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 11)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 12)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 13)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_34_34;
#line 274 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_65_65 = (MR_Integer) transform_hlds__term_constr_build__V_4_4;
#line 274 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_66_66 = (MR_Integer) transform_hlds__term_constr_build__V_19_19;

#line 274 "term_constr_build.m"
        {
#line 274 "term_constr_build.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_34_34, transform_hlds__term_constr_build__V_65_65, transform_hlds__term_constr_build__V_66_66);
        }
#line 3518 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_34_34 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_34_34;
#line 274 "term_constr_build.m"
        else
#line 274 "term_constr_build.m"
          {
#line 274 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_35_35;
#line 274 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_67_67 = (MR_Integer) transform_hlds__term_constr_build__V_5_5;
#line 274 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_68_68 = (MR_Integer) transform_hlds__term_constr_build__V_20_20;

#line 274 "term_constr_build.m"
            {
#line 274 "term_constr_build.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_35_35, transform_hlds__term_constr_build__V_67_67, transform_hlds__term_constr_build__V_68_68);
            }
#line 3542 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_35_35 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_35_35;
#line 274 "term_constr_build.m"
            else
#line 274 "term_constr_build.m"
              {
#line 274 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_36_36;

#line 274 "term_constr_build.m"
                {
#line 274 "term_constr_build.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2], &transform_hlds__term_constr_build__V_36_36, ((MR_Box) (transform_hlds__term_constr_build__V_6_6)), ((MR_Box) (transform_hlds__term_constr_build__V_21_21)));
                }
#line 3562 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_36_36 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_36_36;
#line 274 "term_constr_build.m"
                else
#line 274 "term_constr_build.m"
                  {
#line 274 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__V_37_37;

#line 274 "term_constr_build.m"
                    {
#line 274 "term_constr_build.m"
                      hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__term_constr_build__V_37_37, transform_hlds__term_constr_build__V_7_7, transform_hlds__term_constr_build__V_22_22);
                    }
#line 3582 "transform_hlds.term_constr_build.c"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_37_37 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_37_37;
#line 274 "term_constr_build.m"
                    else
#line 274 "term_constr_build.m"
                      {
#line 274 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__V_38_38;

#line 274 "term_constr_build.m"
                        {
#line 274 "term_constr_build.m"
                          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_constr_build__V_38_38, transform_hlds__term_constr_build__V_8_8, transform_hlds__term_constr_build__V_23_23);
                        }
#line 3602 "transform_hlds.term_constr_build.c"
                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_38_38 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_38_38;
#line 274 "term_constr_build.m"
                        else
#line 274 "term_constr_build.m"
                          {
#line 274 "term_constr_build.m"
                            MR_Word transform_hlds__term_constr_build__V_39_39;

#line 274 "term_constr_build.m"
                            {
#line 274 "term_constr_build.m"
                              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_build__V_39_39, transform_hlds__term_constr_build__V_9_9, transform_hlds__term_constr_build__V_24_24);
                            }
#line 3622 "transform_hlds.term_constr_build.c"
                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_39_39 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                            if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_39_39;
#line 274 "term_constr_build.m"
                            else
#line 274 "term_constr_build.m"
                              {
#line 274 "term_constr_build.m"
                                MR_Word transform_hlds__term_constr_build__V_40_40;

#line 274 "term_constr_build.m"
                                {
#line 274 "term_constr_build.m"
                                  mercury__term____Compare____context_0_0(&transform_hlds__term_constr_build__V_40_40, transform_hlds__term_constr_build__V_10_10, transform_hlds__term_constr_build__V_25_25);
                                }
#line 3642 "transform_hlds.term_constr_build.c"
                                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_40_40 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                                if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_40_40;
#line 274 "term_constr_build.m"
                                else
#line 274 "term_constr_build.m"
                                  {
#line 274 "term_constr_build.m"
                                    MR_Word transform_hlds__term_constr_build__V_41_41;

#line 274 "term_constr_build.m"
                                    {
#line 274 "term_constr_build.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[5], &transform_hlds__term_constr_build__V_41_41, ((MR_Box) (transform_hlds__term_constr_build__V_11_11)), ((MR_Box) (transform_hlds__term_constr_build__V_26_26)));
                                    }
#line 3662 "transform_hlds.term_constr_build.c"
                                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_41_41 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                                    if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_41_41;
#line 274 "term_constr_build.m"
                                    else
#line 274 "term_constr_build.m"
                                      {
#line 274 "term_constr_build.m"
                                        MR_Word transform_hlds__term_constr_build__V_42_42;

#line 274 "term_constr_build.m"
                                        {
#line 274 "term_constr_build.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[9], &transform_hlds__term_constr_build__V_42_42, ((MR_Box) (transform_hlds__term_constr_build__V_12_12)), ((MR_Box) (transform_hlds__term_constr_build__V_27_27)));
                                        }
#line 3682 "transform_hlds.term_constr_build.c"
                                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_42_42 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                                        if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_42_42;
#line 274 "term_constr_build.m"
                                        else
#line 274 "term_constr_build.m"
                                          {
#line 274 "term_constr_build.m"
                                            MR_Word transform_hlds__term_constr_build__V_43_43;

#line 274 "term_constr_build.m"
                                            {
#line 274 "term_constr_build.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4], &transform_hlds__term_constr_build__V_43_43, ((MR_Box) (transform_hlds__term_constr_build__V_13_13)), ((MR_Box) (transform_hlds__term_constr_build__V_28_28)));
                                            }
#line 3702 "transform_hlds.term_constr_build.c"
                                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_43_43 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                                            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                                            if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_43_43;
#line 274 "term_constr_build.m"
                                            else
#line 274 "term_constr_build.m"
                                              {
#line 274 "term_constr_build.m"
                                                MR_Word transform_hlds__term_constr_build__V_44_44;

#line 274 "term_constr_build.m"
                                                {
#line 274 "term_constr_build.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[10], &transform_hlds__term_constr_build__V_44_44, ((MR_Box) (transform_hlds__term_constr_build__V_14_14)), ((MR_Box) (transform_hlds__term_constr_build__V_29_29)));
                                                }
#line 3722 "transform_hlds.term_constr_build.c"
                                                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_44_44 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                                                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                                                if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_44_44;
#line 274 "term_constr_build.m"
                                                else
#line 274 "term_constr_build.m"
                                                  {
#line 274 "term_constr_build.m"
                                                    MR_Word transform_hlds__term_constr_build__V_45_45;

#line 274 "term_constr_build.m"
                                                    {
#line 274 "term_constr_build.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_45_45, transform_hlds__term_constr_build__V_15_15, transform_hlds__term_constr_build__V_30_30);
                                                    }
#line 3742 "transform_hlds.term_constr_build.c"
                                                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_45_45 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                                                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                                                    if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_45_45;
#line 274 "term_constr_build.m"
                                                    else
#line 274 "term_constr_build.m"
                                                      {
#line 274 "term_constr_build.m"
                                                        MR_Word transform_hlds__term_constr_build__V_46_46;
#line 274 "term_constr_build.m"
                                                        MR_Integer transform_hlds__term_constr_build__V_69_69 = (MR_Integer) transform_hlds__term_constr_build__V_16_16;
#line 274 "term_constr_build.m"
                                                        MR_Integer transform_hlds__term_constr_build__V_70_70 = (MR_Integer) transform_hlds__term_constr_build__V_31_31;

#line 274 "term_constr_build.m"
                                                        {
#line 274 "term_constr_build.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_46_46, transform_hlds__term_constr_build__V_69_69, transform_hlds__term_constr_build__V_70_70);
                                                        }
#line 3766 "transform_hlds.term_constr_build.c"
                                                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_46_46 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                                                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                                                        if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_46_46;
#line 274 "term_constr_build.m"
                                                        else
#line 274 "term_constr_build.m"
                                                          {
#line 274 "term_constr_build.m"
                                                            MR_Word transform_hlds__term_constr_build__V_47_47;

#line 274 "term_constr_build.m"
                                                            {
#line 274 "term_constr_build.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[11], &transform_hlds__term_constr_build__V_47_47, ((MR_Box) (transform_hlds__term_constr_build__V_17_17)), ((MR_Box) (transform_hlds__term_constr_build__V_32_32)));
                                                            }
#line 3786 "transform_hlds.term_constr_build.c"
                                                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_47_47 == (MR_Integer) 0);
#line 274 "term_constr_build.m"
                                                            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 274 "term_constr_build.m"
                                                            if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                                              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_47_47;
#line 274 "term_constr_build.m"
                                                            else
#line 274 "term_constr_build.m"
                                                              {
#line 274 "term_constr_build.m"
                                                                MR_Integer transform_hlds__term_constr_build__V_71_71 = (MR_Integer) transform_hlds__term_constr_build__V_18_18;
#line 274 "term_constr_build.m"
                                                                MR_Integer transform_hlds__term_constr_build__V_72_72 = (MR_Integer) transform_hlds__term_constr_build__V_33_33;

#line 274 "term_constr_build.m"
                                                                {
#line 274 "term_constr_build.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_build__HeadVar__1_1, transform_hlds__term_constr_build__V_71_71, transform_hlds__term_constr_build__V_72_72);
#line 274 "term_constr_build.m"
                                                                  return;
                                                                }
#line 274 "term_constr_build.m"
                                                              }
#line 274 "term_constr_build.m"
                                                          }
#line 274 "term_constr_build.m"
                                                      }
#line 274 "term_constr_build.m"
                                                  }
#line 274 "term_constr_build.m"
                                              }
#line 274 "term_constr_build.m"
                                          }
#line 274 "term_constr_build.m"
                                      }
#line 274 "term_constr_build.m"
                                  }
#line 274 "term_constr_build.m"
                              }
#line 274 "term_constr_build.m"
                          }
#line 274 "term_constr_build.m"
                      }
#line 274 "term_constr_build.m"
                  }
#line 274 "term_constr_build.m"
              }
#line 274 "term_constr_build.m"
          }
#line 274 "term_constr_build.m"
      }
#line 274 "term_constr_build.m"
  }
#line 274 "term_constr_build.m"
}

#line 274 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
#line 274 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 274 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 274 "term_constr_build.m"
{
#line 274 "term_constr_build.m"
  {
#line 274 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 274 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_33 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 274 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_34 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 274 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_33 == transform_hlds__term_constr_build__CastY_34);
#line 274 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 274 "term_constr_build.m"
    else
#line 274 "term_constr_build.m"
      {
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_35_35;
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_40_40;
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_41_41;
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_42_42;
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_43_43;
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_44_44;
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 2)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 3)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 4)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 5)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 6)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 7)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 8)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 9)));
#line 274 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 10)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 11)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 12)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 13)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 6)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 7)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 8)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 9)));
#line 274 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 10)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 11)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 12)));
#line 274 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 13)));

#line 3946 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_3_3 == transform_hlds__term_constr_build__V_18_18);
#line 274 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
          {
#line 3952 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_4_4 == transform_hlds__term_constr_build__V_19_19);
#line 274 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
              {
#line 3958 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_35_35 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2];
#line 3960 "transform_hlds.term_constr_build.c"
                {
#line 3962 "transform_hlds.term_constr_build.c"
                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_35_35, ((MR_Box) (transform_hlds__term_constr_build__V_5_5)), ((MR_Box) (transform_hlds__term_constr_build__V_20_20)));
                }
#line 274 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                  {
#line 3969 "transform_hlds.term_constr_build.c"
                    {
#line 3971 "transform_hlds.term_constr_build.c"
                      transform_hlds__term_constr_build__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__term_constr_build__V_6_6, transform_hlds__term_constr_build__V_21_21);
                    }
#line 274 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                      {
#line 3978 "transform_hlds.term_constr_build.c"
                        {
#line 3980 "transform_hlds.term_constr_build.c"
                          transform_hlds__term_constr_build__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_constr_build__V_7_7, transform_hlds__term_constr_build__V_22_22);
                        }
#line 274 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                          {
#line 3987 "transform_hlds.term_constr_build.c"
                            {
#line 3989 "transform_hlds.term_constr_build.c"
                              transform_hlds__term_constr_build__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_build__V_8_8, transform_hlds__term_constr_build__V_23_23);
                            }
#line 274 "term_constr_build.m"
                            if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                              {
#line 3996 "transform_hlds.term_constr_build.c"
                                {
#line 3998 "transform_hlds.term_constr_build.c"
                                  transform_hlds__term_constr_build__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_build__V_9_9, transform_hlds__term_constr_build__V_24_24);
                                }
#line 274 "term_constr_build.m"
                                if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                  {
#line 4005 "transform_hlds.term_constr_build.c"
                                    transform_hlds__term_constr_build__TypeInfo_40_40 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[5];
#line 4007 "transform_hlds.term_constr_build.c"
                                    {
#line 4009 "transform_hlds.term_constr_build.c"
                                      transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_40_40, ((MR_Box) (transform_hlds__term_constr_build__V_10_10)), ((MR_Box) (transform_hlds__term_constr_build__V_25_25)));
                                    }
#line 274 "term_constr_build.m"
                                    if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                      {
#line 4016 "transform_hlds.term_constr_build.c"
                                        transform_hlds__term_constr_build__TypeInfo_41_41 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[9];
#line 4018 "transform_hlds.term_constr_build.c"
                                        {
#line 4020 "transform_hlds.term_constr_build.c"
                                          transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_41_41, ((MR_Box) (transform_hlds__term_constr_build__V_11_11)), ((MR_Box) (transform_hlds__term_constr_build__V_26_26)));
                                        }
#line 274 "term_constr_build.m"
                                        if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                          {
#line 4027 "transform_hlds.term_constr_build.c"
                                            transform_hlds__term_constr_build__TypeInfo_42_42 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4];
#line 4029 "transform_hlds.term_constr_build.c"
                                            {
#line 4031 "transform_hlds.term_constr_build.c"
                                              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_42_42, ((MR_Box) (transform_hlds__term_constr_build__V_12_12)), ((MR_Box) (transform_hlds__term_constr_build__V_27_27)));
                                            }
#line 274 "term_constr_build.m"
                                            if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                              {
#line 4038 "transform_hlds.term_constr_build.c"
                                                transform_hlds__term_constr_build__TypeInfo_43_43 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[10];
#line 4040 "transform_hlds.term_constr_build.c"
                                                {
#line 4042 "transform_hlds.term_constr_build.c"
                                                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_43_43, ((MR_Box) (transform_hlds__term_constr_build__V_13_13)), ((MR_Box) (transform_hlds__term_constr_build__V_28_28)));
                                                }
#line 274 "term_constr_build.m"
                                                if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                                  {
#line 4049 "transform_hlds.term_constr_build.c"
                                                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_14_14 == transform_hlds__term_constr_build__V_29_29);
#line 274 "term_constr_build.m"
                                                    if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                                      {
#line 4055 "transform_hlds.term_constr_build.c"
                                                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_15_15 == transform_hlds__term_constr_build__V_30_30);
#line 274 "term_constr_build.m"
                                                        if (transform_hlds__term_constr_build__succeeded)
#line 274 "term_constr_build.m"
                                                          {
#line 4061 "transform_hlds.term_constr_build.c"
                                                            transform_hlds__term_constr_build__TypeInfo_44_44 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[11];
#line 4063 "transform_hlds.term_constr_build.c"
                                                            {
#line 4065 "transform_hlds.term_constr_build.c"
                                                              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_44_44, ((MR_Box) (transform_hlds__term_constr_build__V_16_16)), ((MR_Box) (transform_hlds__term_constr_build__V_31_31)));
                                                            }
#line 274 "term_constr_build.m"
                                                            if (transform_hlds__term_constr_build__succeeded)
#line 4070 "transform_hlds.term_constr_build.c"
                                                              transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_17_17 == transform_hlds__term_constr_build__V_32_32);
#line 274 "term_constr_build.m"
                                                          }
#line 274 "term_constr_build.m"
                                                      }
#line 274 "term_constr_build.m"
                                                  }
#line 274 "term_constr_build.m"
                                              }
#line 274 "term_constr_build.m"
                                          }
#line 274 "term_constr_build.m"
                                      }
#line 274 "term_constr_build.m"
                                  }
#line 274 "term_constr_build.m"
                              }
#line 274 "term_constr_build.m"
                          }
#line 274 "term_constr_build.m"
                      }
#line 274 "term_constr_build.m"
                  }
#line 274 "term_constr_build.m"
              }
#line 274 "term_constr_build.m"
          }
#line 274 "term_constr_build.m"
      }
#line 274 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 274 "term_constr_build.m"
  }
#line 274 "term_constr_build.m"
}

#line 121 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
#line 121 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 121 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 121 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 121 "term_constr_build.m"
{
#line 121 "term_constr_build.m"
  {
#line 121 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 121 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_21 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 121 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_22 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 121 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_21 == transform_hlds__term_constr_build__CastY_22);
#line 121 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 4131 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "term_constr_build.m"
    else
#line 121 "term_constr_build.m"
      {
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 2)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 3)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 4)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 5)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16;

#line 121 "term_constr_build.m"
        {
#line 121 "term_constr_build.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_build__V_16_16, transform_hlds__term_constr_build__V_4_4, transform_hlds__term_constr_build__V_10_10);
        }
#line 4169 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_16_16 == (MR_Integer) 0);
#line 121 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 121 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_16_16;
#line 121 "term_constr_build.m"
        else
#line 121 "term_constr_build.m"
          {
#line 121 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_17_17;

#line 121 "term_constr_build.m"
            {
#line 121 "term_constr_build.m"
              transform_hlds__term_constr_data____Compare____abstract_proc_0_0(&transform_hlds__term_constr_build__V_17_17, transform_hlds__term_constr_build__V_5_5, transform_hlds__term_constr_build__V_11_11);
            }
#line 4189 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_17_17 == (MR_Integer) 0);
#line 121 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 121 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_17_17;
#line 121 "term_constr_build.m"
            else
#line 121 "term_constr_build.m"
              {
#line 121 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_18_18;

#line 121 "term_constr_build.m"
                {
#line 121 "term_constr_build.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4], &transform_hlds__term_constr_build__V_18_18, ((MR_Box) (transform_hlds__term_constr_build__V_6_6)), ((MR_Box) (transform_hlds__term_constr_build__V_12_12)));
                }
#line 4209 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_18_18 == (MR_Integer) 0);
#line 121 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 121 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_18_18;
#line 121 "term_constr_build.m"
                else
#line 121 "term_constr_build.m"
                  {
#line 121 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__V_19_19;
#line 121 "term_constr_build.m"
                    MR_Integer transform_hlds__term_constr_build__V_29_29 = (MR_Integer) transform_hlds__term_constr_build__V_7_7;
#line 121 "term_constr_build.m"
                    MR_Integer transform_hlds__term_constr_build__V_30_30 = (MR_Integer) transform_hlds__term_constr_build__V_13_13;

#line 121 "term_constr_build.m"
                    {
#line 121 "term_constr_build.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_19_19, transform_hlds__term_constr_build__V_29_29, transform_hlds__term_constr_build__V_30_30);
                    }
#line 4233 "transform_hlds.term_constr_build.c"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_19_19 == (MR_Integer) 0);
#line 121 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 121 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_19_19;
#line 121 "term_constr_build.m"
                    else
#line 121 "term_constr_build.m"
                      {
#line 121 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__V_20_20;

#line 121 "term_constr_build.m"
                        {
#line 121 "term_constr_build.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2], &transform_hlds__term_constr_build__V_20_20, ((MR_Box) (transform_hlds__term_constr_build__V_8_8)), ((MR_Box) (transform_hlds__term_constr_build__V_14_14)));
                        }
#line 4253 "transform_hlds.term_constr_build.c"
                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_20_20 == (MR_Integer) 0);
#line 121 "term_constr_build.m"
                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 121 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_20_20;
#line 121 "term_constr_build.m"
                        else
#line 121 "term_constr_build.m"
                          {
#line 121 "term_constr_build.m"
                            {
#line 121 "term_constr_build.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[8], transform_hlds__term_constr_build__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_build__V_9_9)), ((MR_Box) (transform_hlds__term_constr_build__V_15_15)));
#line 121 "term_constr_build.m"
                              return;
                            }
#line 121 "term_constr_build.m"
                          }
#line 121 "term_constr_build.m"
                      }
#line 121 "term_constr_build.m"
                  }
#line 121 "term_constr_build.m"
              }
#line 121 "term_constr_build.m"
          }
#line 121 "term_constr_build.m"
      }
#line 121 "term_constr_build.m"
  }
#line 121 "term_constr_build.m"
}

#line 121 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
#line 121 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 121 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 121 "term_constr_build.m"
{
#line 121 "term_constr_build.m"
  {
#line 121 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 121 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_15 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 121 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_16 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 121 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_15 == transform_hlds__term_constr_build__CastY_16);
#line 121 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 121 "term_constr_build.m"
    else
#line 121 "term_constr_build.m"
      {
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_19_19;
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_20_20;
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_21_21;
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 2)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 3)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 4)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 5)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 121 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));

#line 4348 "transform_hlds.term_constr_build.c"
        {
#line 4350 "transform_hlds.term_constr_build.c"
          transform_hlds__term_constr_build__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_build__V_3_3, transform_hlds__term_constr_build__V_9_9);
        }
#line 121 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
          {
#line 4357 "transform_hlds.term_constr_build.c"
            {
#line 4359 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_data____Unify____abstract_proc_0_0(transform_hlds__term_constr_build__V_4_4, transform_hlds__term_constr_build__V_10_10);
            }
#line 121 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
              {
#line 4366 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4];
#line 4368 "transform_hlds.term_constr_build.c"
                {
#line 4370 "transform_hlds.term_constr_build.c"
                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_19_19, ((MR_Box) (transform_hlds__term_constr_build__V_5_5)), ((MR_Box) (transform_hlds__term_constr_build__V_11_11)));
                }
#line 121 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
                  {
#line 4377 "transform_hlds.term_constr_build.c"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_6_6 == transform_hlds__term_constr_build__V_12_12);
#line 121 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
                      {
#line 4383 "transform_hlds.term_constr_build.c"
                        transform_hlds__term_constr_build__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2];
#line 4385 "transform_hlds.term_constr_build.c"
                        {
#line 4387 "transform_hlds.term_constr_build.c"
                          transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_build__V_7_7)), ((MR_Box) (transform_hlds__term_constr_build__V_13_13)));
                        }
#line 121 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 121 "term_constr_build.m"
                          {
#line 4394 "transform_hlds.term_constr_build.c"
                            transform_hlds__term_constr_build__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[8];
#line 4396 "transform_hlds.term_constr_build.c"
                            {
#line 4398 "transform_hlds.term_constr_build.c"
                              return transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_build__V_8_8)), ((MR_Box) (transform_hlds__term_constr_build__V_14_14)));
                            }
#line 121 "term_constr_build.m"
                          }
#line 121 "term_constr_build.m"
                      }
#line 121 "term_constr_build.m"
                  }
#line 121 "term_constr_build.m"
              }
#line 121 "term_constr_build.m"
          }
#line 121 "term_constr_build.m"
      }
#line 121 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 121 "term_constr_build.m"
  }
#line 121 "term_constr_build.m"
}

#line 98 "term_constr_build.m"
void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0(
#line 98 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 98 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 98 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 98 "term_constr_build.m"
{
#line 98 "term_constr_build.m"
  {
#line 98 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 98 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_12 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 98 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_13 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 98 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_12 == transform_hlds__term_constr_build__CastY_13);
#line 98 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 4444 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 98 "term_constr_build.m"
    else
#line 98 "term_constr_build.m"
      {
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10;

#line 98 "term_constr_build.m"
        {
#line 98 "term_constr_build.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_constr_build__V_10_10, transform_hlds__term_constr_build__V_4_4, transform_hlds__term_constr_build__V_7_7);
        }
#line 4470 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_10_10 == (MR_Integer) 0);
#line 98 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 98 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 98 "term_constr_build.m"
          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_10_10;
#line 98 "term_constr_build.m"
        else
#line 98 "term_constr_build.m"
          {
#line 98 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_11_11;
#line 98 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_17_17 = (MR_Integer) transform_hlds__term_constr_build__V_5_5;
#line 98 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_18_18 = (MR_Integer) transform_hlds__term_constr_build__V_8_8;

#line 98 "term_constr_build.m"
            {
#line 98 "term_constr_build.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_11_11, transform_hlds__term_constr_build__V_17_17, transform_hlds__term_constr_build__V_18_18);
            }
#line 4494 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_11_11 == (MR_Integer) 0);
#line 98 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 98 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 98 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_11_11;
#line 98 "term_constr_build.m"
            else
#line 98 "term_constr_build.m"
              {
#line 98 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_19_19 = (MR_Integer) transform_hlds__term_constr_build__V_6_6;
#line 98 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_20_20 = (MR_Integer) transform_hlds__term_constr_build__V_9_9;

#line 98 "term_constr_build.m"
                {
#line 98 "term_constr_build.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_build__HeadVar__1_1, transform_hlds__term_constr_build__V_19_19, transform_hlds__term_constr_build__V_20_20);
#line 98 "term_constr_build.m"
                  return;
                }
#line 98 "term_constr_build.m"
              }
#line 98 "term_constr_build.m"
          }
#line 98 "term_constr_build.m"
      }
#line 98 "term_constr_build.m"
  }
#line 98 "term_constr_build.m"
}

#line 98 "term_constr_build.m"
MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0(
#line 98 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 98 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 98 "term_constr_build.m"
{
#line 98 "term_constr_build.m"
  {
#line 98 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 98 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_9 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 98 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_10 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 98 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_9 == transform_hlds__term_constr_build__CastY_10);
#line 98 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 98 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 98 "term_constr_build.m"
    else
#line 98 "term_constr_build.m"
      {
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 98 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4570 "transform_hlds.term_constr_build.c"
        {
#line 4572 "transform_hlds.term_constr_build.c"
          transform_hlds__term_constr_build__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_constr_build__V_3_3, transform_hlds__term_constr_build__V_6_6);
        }
#line 98 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 98 "term_constr_build.m"
          {
#line 4579 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_4_4 == transform_hlds__term_constr_build__V_7_7);
#line 98 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 4583 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_5_5 == transform_hlds__term_constr_build__V_8_8);
#line 98 "term_constr_build.m"
          }
#line 98 "term_constr_build.m"
      }
#line 98 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 98 "term_constr_build.m"
  }
#line 98 "term_constr_build.m"
}

#line 632 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
#line 632 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 632 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 632 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 632 "term_constr_build.m"
{
#line 632 "term_constr_build.m"
  {
#line 632 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 632 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_17 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 632 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_18 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 632 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_17 == transform_hlds__term_constr_build__CastY_18);
#line 632 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 4620 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 632 "term_constr_build.m"
    else
#line 632 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 632 "term_constr_build.m"
      {
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));

#line 632 "term_constr_build.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 632 "term_constr_build.m"
          {
#line 632 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));

#line 632 "term_constr_build.m"
            {
#line 632 "term_constr_build.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[6], transform_hlds__term_constr_build__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_build__V_22_22)), ((MR_Box) (transform_hlds__term_constr_build__V_16_16)));
#line 632 "term_constr_build.m"
              return;
            }
#line 632 "term_constr_build.m"
          }
#line 632 "term_constr_build.m"
        else
#line 4649 "transform_hlds.term_constr_build.c"
          *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 2;
#line 632 "term_constr_build.m"
      }
#line 632 "term_constr_build.m"
    else
#line 632 "term_constr_build.m"
      {
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));

#line 632 "term_constr_build.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4664 "transform_hlds.term_constr_build.c"
          *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 1;
#line 632 "term_constr_build.m"
        else
#line 632 "term_constr_build.m"
          {
#line 632 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));
#line 632 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)));
#line 632 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_8_8;

#line 632 "term_constr_build.m"
            {
#line 632 "term_constr_build.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], &transform_hlds__term_constr_build__V_8_8, ((MR_Box) (transform_hlds__term_constr_build__V_24_24)), ((MR_Box) (transform_hlds__term_constr_build__V_6_6)));
            }
#line 4682 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_8_8 == (MR_Integer) 0);
#line 632 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 632 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 632 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_8_8;
#line 632 "term_constr_build.m"
            else
#line 632 "term_constr_build.m"
              {
#line 632 "term_constr_build.m"
                {
#line 632 "term_constr_build.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[7], transform_hlds__term_constr_build__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_build__V_23_23)), ((MR_Box) (transform_hlds__term_constr_build__V_7_7)));
#line 632 "term_constr_build.m"
                  return;
                }
#line 632 "term_constr_build.m"
              }
#line 632 "term_constr_build.m"
          }
#line 632 "term_constr_build.m"
      }
#line 632 "term_constr_build.m"
  }
#line 632 "term_constr_build.m"
}

#line 632 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
#line 632 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 632 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 632 "term_constr_build.m"
{
#line 632 "term_constr_build.m"
  {
#line 632 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 632 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_9 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 632 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_10 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 632 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_9 == transform_hlds__term_constr_build__CastY_10);
#line 632 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 632 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 632 "term_constr_build.m"
    else
#line 632 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 632 "term_constr_build.m"
      {
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_11_11;
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8;

#line 632 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 632 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 632 "term_constr_build.m"
          {
#line 632 "term_constr_build.m"
            transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 4757 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[6];
#line 4759 "transform_hlds.term_constr_build.c"
            {
#line 4761 "transform_hlds.term_constr_build.c"
              return transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_constr_build__V_7_7)), ((MR_Box) (transform_hlds__term_constr_build__V_8_8)));
            }
#line 632 "term_constr_build.m"
          }
#line 632 "term_constr_build.m"
      }
#line 632 "term_constr_build.m"
    else
#line 632 "term_constr_build.m"
      {
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_12_12;
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_13_13;
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5;
#line 632 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6;

#line 632 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 632 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 632 "term_constr_build.m"
          {
#line 632 "term_constr_build.m"
            transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 632 "term_constr_build.m"
            transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 4795 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3];
#line 4797 "transform_hlds.term_constr_build.c"
            {
#line 4799 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_constr_build__V_3_3)), ((MR_Box) (transform_hlds__term_constr_build__V_5_5)));
            }
#line 632 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 632 "term_constr_build.m"
              {
#line 4806 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[7];
#line 4808 "transform_hlds.term_constr_build.c"
                {
#line 4810 "transform_hlds.term_constr_build.c"
                  return transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_constr_build__V_4_4)), ((MR_Box) (transform_hlds__term_constr_build__V_6_6)));
                }
#line 632 "term_constr_build.m"
              }
#line 632 "term_constr_build.m"
          }
#line 632 "term_constr_build.m"
      }
#line 632 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 632 "term_constr_build.m"
  }
#line 632 "term_constr_build.m"
}

#line 1276 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1(
#line 1276 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1276 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1276 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 1276 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3)
#line 1276 "term_constr_build.m"
{
#line 1276 "term_constr_build.m"
  {
#line 1276 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1276 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1276 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv0_HeadVar__6_30;

#line 1276 "term_constr_build.m"
    {
#line 1276 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1276__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Integer) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv0_HeadVar__6_30);
    }
#line 1276 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1276 "term_constr_build.m"
      {
#line 1276 "term_constr_build.m"
        *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__6_30));
#line 1276 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1276 "term_constr_build.m"
      }
#line 1276 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1276 "term_constr_build.m"
  }
#line 1276 "term_constr_build.m"
}

#line 1264 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_9,
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1264 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Ctors_11,
#line 1264 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12)
#line 1264 "term_constr_build.m"
{
#line 1268 "term_constr_build.m"
  {
#line 1268 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1268 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__FindUpperBound_13;
#line 1294 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__Bound0_25;
#line 1287 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv1_Bound0_25;

#line 1276 "term_constr_build.m"
    {
#line 1276 "term_constr_build.m"
      transform_hlds__term_constr_build__FindUpperBound_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1276 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[2]));
#line 1276 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 1) = ((MR_Box) (transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1));
#line 1276 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1276 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 3) = ((MR_Box) (transform_hlds__term_constr_build__Norm_7));
#line 1276 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 4) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_8));
#line 1276 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 5) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_10));
#line 1276 "term_constr_build.m"
    }
#line 1287 "term_constr_build.m"
    {
#line 1287 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__term_constr_build__FindUpperBound_13, transform_hlds__term_constr_build__Ctors_11, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_build__conv1_Bound0_25);
    }
#line 1287 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1287 "term_constr_build.m"
      {
#line 1287 "term_constr_build.m"
        transform_hlds__term_constr_build__Bound0_25 = ((MR_Integer) transform_hlds__term_constr_build__conv1_Bound0_25);
#line 1287 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1287 "term_constr_build.m"
      }
#line 1294 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1290 "term_constr_build.m"
      {
#line 1288 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__Bound0_25 == (MR_Integer) 0);
#line 1290 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 1289 "term_constr_build.m"
          {
#line 1289 "term_constr_build.m"
            {
#line 1289 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.upper_bound_constraints\'/6", (MR_String) "zero upper bound");
#line 1289 "term_constr_build.m"
              return;
            }
#line 1289 "term_constr_build.m"
          }
#line 1290 "term_constr_build.m"
        else
#line 1291 "term_constr_build.m"
          {
#line 1291 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_37_37;
#line 1291 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_38_38;
#line 1291 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1291 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1291 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_43_43;

#line 1292 "term_constr_build.m"
            {
#line 1292 "term_constr_build.m"
              transform_hlds__term_constr_build__V_40_40 = libs__rat__one_0_f_0();
            }
#line 1292 "term_constr_build.m"
            {
#line 1292 "term_constr_build.m"
              transform_hlds__term_constr_build__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_39_39, 0) = ((MR_Box) (transform_hlds__term_constr_build__Var_9));
#line 1292 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_40_40));
#line 1292 "term_constr_build.m"
            }
#line 1292 "term_constr_build.m"
            {
#line 1292 "term_constr_build.m"
              transform_hlds__term_constr_build__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_38_38, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 1292 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "term_constr_build.m"
            }
#line 1292 "term_constr_build.m"
            {
#line 1292 "term_constr_build.m"
              transform_hlds__term_constr_build__V_43_43 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__Bound0_25);
            }
#line 1292 "term_constr_build.m"
            {
#line 1292 "term_constr_build.m"
              transform_hlds__term_constr_build__V_37_37 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__V_38_38, (MR_Integer) 0, transform_hlds__term_constr_build__V_43_43);
            }
#line 1292 "term_constr_build.m"
            {
#line 1292 "term_constr_build.m"
              MR_Word base;
#line 1292 "term_constr_build.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "term_constr_build.m"
              *transform_hlds__term_constr_build__Constraints_12 = base;
#line 1292 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_37_37));
#line 1292 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "term_constr_build.m"
            }
#line 1291 "term_constr_build.m"
          }
#line 1290 "term_constr_build.m"
      }
#line 1294 "term_constr_build.m"
    else
#line 1295 "term_constr_build.m"
      *transform_hlds__term_constr_build__Constraints_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1268 "term_constr_build.m"
  }
#line 1264 "term_constr_build.m"
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
    MR_Integer transform_hlds__term_constr_build__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 4)));
#line 1254 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ConsId_17;
#line 1255 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 0)));
#line 1255 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 1)));
#line 1255 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build___Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 3)));
#line 1255 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 5)));

#line 1256 "term_constr_build.m"
    {
#line 1256 "term_constr_build.m"
      transform_hlds__term_constr_build__ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1256 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 1) = ((MR_Box) (transform_hlds__term_constr_build__SymName_13));
#line 1256 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 2) = ((MR_Box) (transform_hlds__term_constr_build__Arity_15));
#line 1256 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 3) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_8));
#line 1256 "term_constr_build.m"
    }
#line 1257 "term_constr_build.m"
    {
#line 1257 "term_constr_build.m"
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
      mercury__list__filter_4_p_0(transform_hlds__term_constr_build__TypeCtorInfo_60_60, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[11], transform_hlds__term_constr_build__CtorSizes_13, &transform_hlds__term_constr_build__ZeroSizeCtors_15, &transform_hlds__term_constr_build__NonZeroSizeCtors_16);
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
              transform_hlds__term_constr_build__conv2_LowerBound_23 = mercury__list__foldl_3_f_0(transform_hlds__term_constr_build__TypeCtorInfo_60_60, transform_hlds__term_constr_build__TypeCtorInfo_60_60, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[12], transform_hlds__term_constr_build__Cs_21, ((MR_Box) (transform_hlds__term_constr_build__C_20)));
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

#line 1191 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4(
#line 1191 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1191 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1191 "term_constr_build.m"
{
#line 1191 "term_constr_build.m"
  {
#line 1191 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1191 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1191 "term_constr_build.m"
    {
#line 1191 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1191__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1191 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1191 "term_constr_build.m"
  }
#line 1191 "term_constr_build.m"
}

#line 1189 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
#line 1189 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg)
#line 1189 "term_constr_build.m"
{
#line 1189 "term_constr_build.m"
  {
#line 1189 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1189 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1189 "term_constr_build.m"
    {
#line 1189 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1189__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))));
    }
#line 1189 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1189 "term_constr_build.m"
  }
#line 1189 "term_constr_build.m"
}

#line 1151 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
#line 1151 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1151 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1151 "term_constr_build.m"
{
#line 1151 "term_constr_build.m"
  {
#line 1151 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1151 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1151 "term_constr_build.m"
    {
#line 1151 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1151__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1151 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1151 "term_constr_build.m"
  }
#line 1151 "term_constr_build.m"
}

#line 1151 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
#line 1151 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1151 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1151 "term_constr_build.m"
{
#line 1151 "term_constr_build.m"
  {
#line 1151 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1151 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1151 "term_constr_build.m"
    {
#line 1151 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1151 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1151 "term_constr_build.m"
  }
#line 1151 "term_constr_build.m"
}

#line 1138 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
#line 1138 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1138 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 1138 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6)
#line 1138 "term_constr_build.m"
{
#line 1141 "term_constr_build.m"
  {
#line 1141 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 1141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1141 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1145 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1148 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_196_196 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1148 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_197_197 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);

#line 1178 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 1147 "term_constr_build.m"
      {
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 0)));
#line 1147 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 1)));
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CallArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 2)));
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CallSizeArgs0_16;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Zeros_17;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CallSizeArgs_18;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ModuleInfo_19;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ProcInfo_21;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TermInfo_22;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__MaybeFailureConstrs_23;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FailureConstraints_24;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FailurePolyhedron_31;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_72_72;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_73_73;
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 3)));
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 4)));
#line 1147 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 5)));
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_93_93;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_94_94;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_95_95;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_96_96;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_97_97;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_98_98;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_99_99;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_100_100;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_101_101;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_102_102;
#line 1150 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_103_103;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_104_104;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_105_105;
#line 1150 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_106_106;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_107_107;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_108_108;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_109_109;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_110_110;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_111_111;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_112_112;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_113_113;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_114_114;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_115_115;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_116_116;
#line 1153 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_117_117;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_118_118;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_119_119;
#line 1153 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_120_120;
#line 1154 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_20_20;

#line 1149 "term_constr_build.m"
        {
#line 1149 "term_constr_build.m"
          transform_hlds__term_constr_build__CallSizeArgs0_16 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_188_188, transform_hlds__term_constr_build__CallArgs_11);
        }
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__Zeros_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1150 "term_constr_build.m"
        transform_hlds__term_constr_build__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1151 "term_constr_build.m"
        {
#line 1151 "term_constr_build.m"
          transform_hlds__term_constr_build__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1]));
#line 1151 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1));
#line 1151 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1151 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 3) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_17));
#line 1151 "term_constr_build.m"
        }
#line 1151 "term_constr_build.m"
        {
#line 1151 "term_constr_build.m"
          transform_hlds__term_constr_build__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[2]));
#line 1151 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2));
#line 1151 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1151 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_73_73));
#line 1151 "term_constr_build.m"
        }
#line 1151 "term_constr_build.m"
        {
#line 1151 "term_constr_build.m"
          transform_hlds__term_constr_build__CallSizeArgs_18 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__V_72_72, transform_hlds__term_constr_build__CallSizeArgs0_16);
        }
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_107_107 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1153 "term_constr_build.m"
        transform_hlds__term_constr_build__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1154 "term_constr_build.m"
        {
#line 1154 "term_constr_build.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_constr_build__ModuleInfo_19, transform_hlds__term_constr_build__PredId_9, transform_hlds__term_constr_build__ProcId_10, &transform_hlds__term_constr_build__V_20_20, &transform_hlds__term_constr_build__ProcInfo_21);
        }
#line 1155 "term_constr_build.m"
        {
#line 1155 "term_constr_build.m"
          hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_build__ProcInfo_21, &transform_hlds__term_constr_build__TermInfo_22);
        }
#line 1156 "term_constr_build.m"
        {
#line 1156 "term_constr_build.m"
          transform_hlds__term_constr_build__MaybeFailureConstrs_23 = transform_hlds__term_constr_main__failure_constrs_1_f_0(transform_hlds__term_constr_build__TermInfo_22);
        }
#line 1160 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__MaybeFailureConstrs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1158 "term_constr_build.m"
          transform_hlds__term_constr_build__FailureConstraints_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1160 "term_constr_build.m"
        else
#line 1161 "term_constr_build.m"
          {
#line 1161 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__CalleeFailurePolyhedron_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__MaybeFailureConstrs_23, (MR_Integer) 0)));
#line 1161 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__CalleeFailureConstraints_26;

#line 1162 "term_constr_build.m"
            {
#line 1162 "term_constr_build.m"
              transform_hlds__term_constr_build__CalleeFailureConstraints_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_build__CalleeFailurePolyhedron_25);
            }
#line 1167 "term_constr_build.m"
            if ((transform_hlds__term_constr_build__CalleeFailureConstraints_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1165 "term_constr_build.m"
              transform_hlds__term_constr_build__FailureConstraints_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1167 "term_constr_build.m"
            else
#line 1168 "term_constr_build.m"
              {
#line 1168 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__CalleeHeadVars_29;
#line 1168 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SubstMap_30;

#line 1169 "term_constr_build.m"
                {
#line 1169 "term_constr_build.m"
                  transform_hlds__term_constr_build__CalleeHeadVars_29 = transform_hlds__term_constr_main__head_vars_1_f_0(transform_hlds__term_constr_build__TermInfo_22);
                }
#line 1170 "term_constr_build.m"
                {
#line 1170 "term_constr_build.m"
                  transform_hlds__term_constr_build__SubstMap_30 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(transform_hlds__term_constr_build__CallSizeArgs_18, transform_hlds__term_constr_build__CalleeHeadVars_29);
                }
#line 1172 "term_constr_build.m"
                {
#line 1172 "term_constr_build.m"
                  transform_hlds__term_constr_build__FailureConstraints_24 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(transform_hlds__term_constr_build__CalleeFailureConstraints_26, transform_hlds__term_constr_build__SubstMap_30);
                }
#line 1168 "term_constr_build.m"
              }
#line 1161 "term_constr_build.m"
          }
#line 1176 "term_constr_build.m"
        {
#line 1176 "term_constr_build.m"
          transform_hlds__term_constr_build__FailurePolyhedron_31 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__FailureConstraints_24);
        }
#line 1177 "term_constr_build.m"
        {
#line 1177 "term_constr_build.m"
          MR_Word base;
#line 1177 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1177 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__FailurePolyhedron_31));
#line 1177 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "term_constr_build.m"
        }
#line 1147 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1147 "term_constr_build.m"
      }
#line 1178 "term_constr_build.m"
    else
#line 1178 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 1182 "term_constr_build.m"
      {
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Unification_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 3)));
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Var_37;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ConsId_38;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Type_42;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeCtor_43;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constructors0_44;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constructors_56;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVar_57;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Norm_58;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Polyhedron_59;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_60_60;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_70_70;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVarMap_77;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ModuleInfo_78;
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 0)));
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 1)));
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 2)));
#line 1182 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 4)));
#line 1183 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1183 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1183 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_135_135;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_136_136;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_137_137;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_138_138;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_139_139;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_140_140;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_141_141;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_142_142;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_143_143;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_144_144;
#line 1186 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_145_145;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_146_146;
#line 1186 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_147_147;
#line 1186 "term_constr_build.m"
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

#line 1183 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__Unification_35)) == (MR_mktag((MR_Integer) 1)));
#line 1183 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 1183 "term_constr_build.m"
          {
#line 1183 "term_constr_build.m"
            transform_hlds__term_constr_build__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 0)));
#line 1183 "term_constr_build.m"
            transform_hlds__term_constr_build__ConsId_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 1)));
#line 1183 "term_constr_build.m"
            transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 2)));
#line 1183 "term_constr_build.m"
            transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 3)));
#line 1183 "term_constr_build.m"
            transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 4)));
#line 1183 "term_constr_build.m"
            transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 5)));
#line 1183 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_60_60 == (MR_Integer) 0);
#line 1182 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 1182 "term_constr_build.m"
              {
#line 1184 "term_constr_build.m"
                {
#line 1184 "term_constr_build.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__V_190_190, transform_hlds__term_constr_build__Var_37, &transform_hlds__term_constr_build__Type_42);
                }
#line 1185 "term_constr_build.m"
                {
#line 1185 "term_constr_build.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__Type_42, &transform_hlds__term_constr_build__TypeCtor_43);
                }
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_135_135 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__ModuleInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1186 "term_constr_build.m"
                transform_hlds__term_constr_build__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1187 "term_constr_build.m"
                {
#line 1187 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = check_hlds__type_util__type_constructors_3_p_0(transform_hlds__term_constr_build__ModuleInfo_78, transform_hlds__term_constr_build__Type_42, &transform_hlds__term_constr_build__Constructors0_44);
                }
#line 1182 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 1182 "term_constr_build.m"
                  {
#line 1188 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_build__ConsId_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1188 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 1188 "term_constr_build.m"
                      {
#line 1188 "term_constr_build.m"
                        transform_hlds__term_constr_build__ConsName_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 1)));
#line 1188 "term_constr_build.m"
                        transform_hlds__term_constr_build__ConsArity_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 2)));
#line 1188 "term_constr_build.m"
                        transform_hlds__term_constr_build__ConsTypeCtor_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 3)));
#line 1190 "term_constr_build.m"
                        {
#line 1190 "term_constr_build.m"
                          MR_Word transform_hlds__term_constr_build__FindComplement_48;
#line 1190 "term_constr_build.m"
                          MR_Word transform_hlds__term_constr_build__V_62_62;

#line 1189 "term_constr_build.m"
                          {
#line 1189 "term_constr_build.m"
                            transform_hlds__term_constr_build__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[4]));
#line 1189 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3));
#line 1189 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1189 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 3) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_43));
#line 1189 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 4) = ((MR_Box) (transform_hlds__term_constr_build__ConsTypeCtor_47));
#line 1189 "term_constr_build.m"
                          }
#line 1189 "term_constr_build.m"
                          {
#line 1189 "term_constr_build.m"
                            mercury__require__expect_4_p_0(transform_hlds__term_constr_build__V_62_62, (MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", (MR_String) "mismatched type_ctors");
                          }
#line 1191 "term_constr_build.m"
                          {
#line 1191 "term_constr_build.m"
                            transform_hlds__term_constr_build__FindComplement_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_8[0]));
#line 1191 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4));
#line 1191 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1191 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 3) = ((MR_Box) (transform_hlds__term_constr_build__ConsName_45));
#line 1191 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 4) = ((MR_Box) (transform_hlds__term_constr_build__ConsArity_46));
#line 1191 "term_constr_build.m"
                          }
#line 1198 "term_constr_build.m"
                          {
#line 1198 "term_constr_build.m"
                            mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, transform_hlds__term_constr_build__FindComplement_48, transform_hlds__term_constr_build__Constructors0_44, &transform_hlds__term_constr_build__Constructors_56);
                          }
#line 1190 "term_constr_build.m"
                        }
#line 1188 "term_constr_build.m"
                      }
#line 1188 "term_constr_build.m"
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
#line 1182 "term_constr_build.m"
                  }
#line 1182 "term_constr_build.m"
              }
#line 1183 "term_constr_build.m"
          }
#line 1182 "term_constr_build.m"
      }
#line 1178 "term_constr_build.m"
    else
#line 1178 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_FALSE;
#line 1141 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1141 "term_constr_build.m"
  }
#line 1138 "term_constr_build.m"
}

#line 1118 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
#line 1118 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1118 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5)
#line 1118 "term_constr_build.m"
{
#line 1127 "term_constr_build.m"
  {
#line 1127 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1127 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoal_6;
#line 1127 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoal0_7;
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1123 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1123 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));

#line 1123 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_13_13 == (MR_Integer) 1);
#line 1123 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1124 "term_constr_build.m"
      {
#line 1124 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(transform_hlds__term_constr_build__Info_4, transform_hlds__term_constr_build__Goal_5, &transform_hlds__term_constr_build__AbstractGoal0_7);
      }
#line 1127 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1126 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractGoal_6 = transform_hlds__term_constr_build__AbstractGoal0_7;
#line 1127 "term_constr_build.m"
    else
#line 1128 "term_constr_build.m"
      {
#line 1128 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonLocalProgVars0_8;
#line 1128 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonLocalProgVars_9;
#line 1128 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonLocalSizeVars_10;
#line 1128 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraints_11;
#line 1128 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FailPoly_12;
#line 1128 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 1128 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_15_15;
#line 1128 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16;
#line 1128 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_34_34;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_35_35;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_36_36;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_37_37;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_38_38;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_42_42;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_43_43;
#line 1130 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_44_44;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_45_45;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_46_46;
#line 1130 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_47_47;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_48_48;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_49_49;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_50_50;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_51_51;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_52_52;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_53_53;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_54_54;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_55_55;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_56_56;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_57_57;
#line 1132 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_58_58;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_59_59;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_60_60;
#line 1132 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_61_61;

#line 1128 "term_constr_build.m"
        {
#line 1128 "term_constr_build.m"
          transform_hlds__term_constr_build__NonLocalProgVars0_8 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__term_constr_build__V_14_14);
        }
#line 1129 "term_constr_build.m"
        {
#line 1129 "term_constr_build.m"
          transform_hlds__term_constr_build__NonLocalProgVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_constr_build__NonLocalProgVars0_8);
        }
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1130 "term_constr_build.m"
        transform_hlds__term_constr_build__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1130 "term_constr_build.m"
        {
#line 1130 "term_constr_build.m"
          transform_hlds__term_constr_build__NonLocalSizeVars_10 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_15_15, transform_hlds__term_constr_build__NonLocalProgVars_9);
        }
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1132 "term_constr_build.m"
        {
#line 1132 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_11 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_build__NonLocalSizeVars_10, transform_hlds__term_constr_build__V_16_16);
        }
#line 1134 "term_constr_build.m"
        {
#line 1134 "term_constr_build.m"
          transform_hlds__term_constr_build__FailPoly_12 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_11);
        }
#line 1135 "term_constr_build.m"
        {
#line 1135 "term_constr_build.m"
          transform_hlds__term_constr_build__AbstractGoal_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__AbstractGoal_6, 0) = ((MR_Box) (transform_hlds__term_constr_build__FailPoly_12));
#line 1135 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__AbstractGoal_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1135 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__AbstractGoal_6, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1135 "term_constr_build.m"
        }
#line 1128 "term_constr_build.m"
      }
#line 1127 "term_constr_build.m"
    return transform_hlds__term_constr_build__AbstractGoal_6;
#line 1127 "term_constr_build.m"
  }
#line 1118 "term_constr_build.m"
}

#line 1081 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
#line 1081 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 1081 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2,
#line 1081 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_3,
#line 1081 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4,
#line 1081 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_5)
#line 1081 "term_constr_build.m"
{
#line 1084 "term_constr_build.m"
  while (MR_TRUE)
#line 1084 "term_constr_build.m"
    {
#line 1084 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 1084 "term_constr_build.m"
      {
#line 1084 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 1084 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "term_constr_build.m"
          {
#line 1084 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_5 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4;
#line 1084 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_3 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2;
#line 1084 "term_constr_build.m"
          }
#line 1084 "term_constr_build.m"
        else
#line 1085 "term_constr_build.m"
          {
#line 1085 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ProgVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 1085 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ProgVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 1086 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_16_16;
#line 1086 "term_constr_build.m"
            MR_Box transform_hlds__term_constr_build__conv0_V_16_16;

#line 1086 "term_constr_build.m"
            {
#line 1086 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4, ((MR_Box) (transform_hlds__term_constr_build__ProgVar_12)), &transform_hlds__term_constr_build__conv0_V_16_16);
            }
#line 1086 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 1086 "term_constr_build.m"
              {
#line 1086 "term_constr_build.m"
                transform_hlds__term_constr_build__V_16_16 = ((MR_Word) transform_hlds__term_constr_build__conv0_V_16_16);
#line 1086 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1086 "term_constr_build.m"
              }
#line 1088 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 1087 "term_constr_build.m"
              {
#line 1087 "term_constr_build.m"
                /* direct tailcall eliminated */
#line 1087 "term_constr_build.m"
                {
#line 1087 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__ProgVars_13;

#line 1087 "term_constr_build.m"
                  transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 1087 "term_constr_build.m"
                }
#line 1087 "term_constr_build.m"
                continue;
#line 1087 "term_constr_build.m"
              }
#line 1088 "term_constr_build.m"
            else
#line 1089 "term_constr_build.m"
              {
#line 1089 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SizeVar_17;
#line 1089 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_24_24;
#line 1089 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_25_25;

#line 1089 "term_constr_build.m"
                {
#line 1089 "term_constr_build.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_constr_build__SizeVar_17, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_24_24);
                }
#line 1090 "term_constr_build.m"
                {
#line 1090 "term_constr_build.m"
                  mercury__map__set_4_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__ProgVar_12)), ((MR_Box) (transform_hlds__term_constr_build__SizeVar_17)), transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_25_25);
                }
#line 1091 "term_constr_build.m"
                /* direct tailcall eliminated */
#line 1091 "term_constr_build.m"
                {
#line 1091 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__ProgVars_13;
#line 1091 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0__tmp_copy_2 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_24_24;
#line 1091 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0__tmp_copy_4 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_25_25;

#line 1091 "term_constr_build.m"
                  transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0__tmp_copy_4;
#line 1091 "term_constr_build.m"
                  transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0__tmp_copy_2;
#line 1091 "term_constr_build.m"
                  transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 1091 "term_constr_build.m"
                }
#line 1091 "term_constr_build.m"
                continue;
#line 1089 "term_constr_build.m"
              }
#line 1085 "term_constr_build.m"
          }
#line 1084 "term_constr_build.m"
      }
#line 1084 "term_constr_build.m"
      break;
#line 1084 "term_constr_build.m"
    }
#line 1081 "term_constr_build.m"
}

#line 1062 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__allocate_sizevars_5_p_0(
#line 1062 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadProgVars_6,
#line 1062 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_7,
#line 1062 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__SizeVarMap_8,
#line 1062 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_11,
#line 1062 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_12)
#line 1062 "term_constr_build.m"
{
#line 1065 "term_constr_build.m"
  {
#line 1065 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1065 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap0_10;
#line 1065 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_13_13;
#line 1065 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProgVarsInGoal_20;
#line 1065 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProgVars_21;

#line 1074 "term_constr_build.m"
    {
#line 1074 "term_constr_build.m"
      transform_hlds__term_constr_build__ProgVarsInGoal_20 = hlds__quantification__free_goal_vars_1_f_0(transform_hlds__term_constr_build__Goal_7);
    }
#line 1075 "term_constr_build.m"
    {
#line 1075 "term_constr_build.m"
      transform_hlds__term_constr_build__ProgVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_constr_build__ProgVarsInGoal_20);
    }
#line 1076 "term_constr_build.m"
    {
#line 1076 "term_constr_build.m"
      transform_hlds__term_constr_util__make_size_var_map_4_p_0(transform_hlds__term_constr_build__ProgVars_21, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_11, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_13_13, &transform_hlds__term_constr_build__SizeVarMap0_10);
    }
#line 1067 "term_constr_build.m"
    {
#line 1067 "term_constr_build.m"
      transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(transform_hlds__term_constr_build__HeadProgVars_6, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_13_13, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_12, transform_hlds__term_constr_build__SizeVarMap0_10, transform_hlds__term_constr_build__SizeVarMap_8);
#line 1067 "term_constr_build.m"
      return;
    }
#line 1065 "term_constr_build.m"
  }
#line 1062 "term_constr_build.m"
}

#line 1012 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
#line 1012 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constraints_3)
#line 1012 "term_constr_build.m"
{
#line 1014 "term_constr_build.m"
  {
#line 1014 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1014 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__2_2;
#line 1014 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Polyhedron_4;

#line 1015 "term_constr_build.m"
    {
#line 1015 "term_constr_build.m"
      transform_hlds__term_constr_build__Polyhedron_4 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_3);
    }
#line 1014 "term_constr_build.m"
    {
#line 1014 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_4));
#line 1014 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
    }
#line 1016 "term_constr_build.m"
    {
#line 1016 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_4);
    }
#line 1018 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1017 "term_constr_build.m"
      {
#line 1017 "term_constr_build.m"
        {
#line 1017 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
        }
#line 1017 "term_constr_build.m"
      }
#line 1018 "term_constr_build.m"
    else
#line 1019 "term_constr_build.m"
      {
#line 1019 "term_constr_build.m"
      }
#line 1014 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__2_2;
#line 1014 "term_constr_build.m"
  }
#line 1012 "term_constr_build.m"
}

#line 1001 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1(
#line 1001 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1001 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1001 "term_constr_build.m"
{
#line 1001 "term_constr_build.m"
  {
#line 1001 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 1001 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1001 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__2_2;

#line 1001 "term_constr_build.m"
    {
#line 1001 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1001 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__2_2));
#line 1001 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 1001 "term_constr_build.m"
  }
#line 1001 "term_constr_build.m"
}

#line 979 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(
#line 979 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LeftProgVar_6,
#line 979 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RightProgVar_7,
#line 979 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_8,
#line 979 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 979 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18)
#line 979 "term_constr_build.m"
{
#line 983 "term_constr_build.m"
  {
#line 983 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Zeros_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__LeftSizeVar_12;
#line 983 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__RightSizeVar_13;
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 984 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
#line 984 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
#line 989 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeInfo_64_64;

#line 986 "term_constr_build.m"
    {
#line 986 "term_constr_build.m"
      transform_hlds__term_constr_build__LeftSizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_10, transform_hlds__term_constr_build__LeftProgVar_6);
    }
#line 987 "term_constr_build.m"
    {
#line 987 "term_constr_build.m"
      transform_hlds__term_constr_build__RightSizeVar_13 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_10, transform_hlds__term_constr_build__RightProgVar_7);
    }
#line 6935 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeInfo_64_64 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4];
#line 989 "term_constr_build.m"
    {
#line 989 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0(transform_hlds__term_constr_build__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12)), transform_hlds__term_constr_build__Zeros_11);
    }
#line 989 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 990 "term_constr_build.m"
      {
#line 990 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0(transform_hlds__term_constr_build__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13)), transform_hlds__term_constr_build__Zeros_11);
      }
#line 993 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 992 "term_constr_build.m"
      *transform_hlds__term_constr_build__Constraints_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 993 "term_constr_build.m"
    else
#line 999 "term_constr_build.m"
      {
#line 994 "term_constr_build.m"
        {
#line 994 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12)), transform_hlds__term_constr_build__Zeros_11);
        }
#line 995 "term_constr_build.m"
        if (!(transform_hlds__term_constr_build__succeeded))
#line 995 "term_constr_build.m"
          {
#line 995 "term_constr_build.m"
            {
#line 995 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13)), transform_hlds__term_constr_build__Zeros_11);
            }
#line 995 "term_constr_build.m"
          }
#line 999 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 998 "term_constr_build.m"
          {
#line 998 "term_constr_build.m"
            {
#line 998 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_simple_or_assign_unify\'/5", (MR_String) "zero unified with non-zero");
#line 998 "term_constr_build.m"
              return;
            }
#line 998 "term_constr_build.m"
          }
#line 999 "term_constr_build.m"
        else
#line 1002 "term_constr_build.m"
          {
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__NonNegConstrs_14;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Terms_15;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AssignConstr_16;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_23_23;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_24_24;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_26_26;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_27_27;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_28_28;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_29_29;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_30_30;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_31_31;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_34_34;
#line 1002 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_35_35;

#line 1002 "term_constr_build.m"
            {
#line 1002 "term_constr_build.m"
              transform_hlds__term_constr_build__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_24_24, 0) = ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "term_constr_build.m"
            }
#line 1002 "term_constr_build.m"
            {
#line 1002 "term_constr_build.m"
              transform_hlds__term_constr_build__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_23_23, 0) = ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12));
#line 1002 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_23_23, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_24_24));
#line 1002 "term_constr_build.m"
            }
#line 1001 "term_constr_build.m"
            {
#line 1001 "term_constr_build.m"
              transform_hlds__term_constr_build__NonNegConstrs_14 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[10], transform_hlds__term_constr_build__V_23_23);
            }
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__V_27_27 = libs__rat__one_0_f_0();
            }
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_26_26, 0) = ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12));
#line 1003 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_26_26, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_27_27));
#line 1003 "term_constr_build.m"
            }
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__V_31_31 = libs__rat__one_0_f_0();
            }
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__V_30_30 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_build__V_31_31);
            }
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_29_29, 0) = ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13));
#line 1003 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_29_29, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_30_30));
#line 1003 "term_constr_build.m"
            }
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_28_28, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_29_29));
#line 1003 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1003 "term_constr_build.m"
            }
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__Terms_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_15, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_26_26));
#line 1003 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_15, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_28_28));
#line 1003 "term_constr_build.m"
            }
#line 1004 "term_constr_build.m"
            {
#line 1004 "term_constr_build.m"
              transform_hlds__term_constr_build__V_34_34 = libs__rat__zero_0_f_0();
            }
#line 1004 "term_constr_build.m"
            {
#line 1004 "term_constr_build.m"
              transform_hlds__term_constr_build__AssignConstr_16 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__Terms_15, (MR_Integer) 1, transform_hlds__term_constr_build__V_34_34);
            }
#line 1006 "term_constr_build.m"
            {
#line 1006 "term_constr_build.m"
              transform_hlds__term_constr_build__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_35_35, 0) = ((MR_Box) (transform_hlds__term_constr_build__AssignConstr_16));
#line 1006 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_build__NonNegConstrs_14));
#line 1006 "term_constr_build.m"
            }
#line 1006 "term_constr_build.m"
            {
#line 1006 "term_constr_build.m"
              *transform_hlds__term_constr_build__Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(transform_hlds__term_constr_build__V_35_35);
            }
#line 1002 "term_constr_build.m"
          }
#line 999 "term_constr_build.m"
      }
#line 983 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_18 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17;
#line 983 "term_constr_build.m"
  }
#line 979 "term_constr_build.m"
}

#line 960 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
#line 960 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_1,
#line 960 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 960 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__3_3,
#line 960 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 960 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__5_5)
#line 960 "term_constr_build.m"
{
#line 964 "term_constr_build.m"
  {
#line 964 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 964 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "term_constr_build.m"
      {
#line 964 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 964 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 964 "term_constr_build.m"
          {
#line 964 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 964 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 964 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 964 "term_constr_build.m"
          }
#line 964 "term_constr_build.m"
      }
#line 964 "term_constr_build.m"
    else
#line 966 "term_constr_build.m"
      {
#line 966 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Arg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 966 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Mode_10;
#line 966 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Type_12;
#line 966 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 966 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_15;
#line 966 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17;
#line 966 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18;

#line 966 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 966 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 966 "term_constr_build.m"
          {
#line 966 "term_constr_build.m"
            transform_hlds__term_constr_build__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 0)));
#line 966 "term_constr_build.m"
            transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 1)));
#line 967 "term_constr_build.m"
            {
#line 967 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(transform_hlds__term_constr_build__VarTypes_1, transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_13, &transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17, transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_15, &transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18);
            }
#line 966 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 966 "term_constr_build.m"
              {
#line 968 "term_constr_build.m"
                {
#line 968 "term_constr_build.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__VarTypes_1, transform_hlds__term_constr_build__Arg_8, &transform_hlds__term_constr_build__Type_12);
                }
#line 969 "term_constr_build.m"
                {
#line 969 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__term_constr_build__Type_12);
                }
#line 971 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 970 "term_constr_build.m"
                  {
#line 970 "term_constr_build.m"
                    *transform_hlds__term_constr_build__HeadVar__5_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18;
#line 970 "term_constr_build.m"
                    *transform_hlds__term_constr_build__HeadVar__3_3 = transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17;
#line 970 "term_constr_build.m"
                  }
#line 971 "term_constr_build.m"
                else
#line 972 "term_constr_build.m"
                  {
#line 972 "term_constr_build.m"
                    {
#line 972 "term_constr_build.m"
                      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_build__Arg_8)), transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17, transform_hlds__term_constr_build__HeadVar__3_3);
                    }
#line 973 "term_constr_build.m"
                    {
#line 973 "term_constr_build.m"
                      mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, ((MR_Box) (transform_hlds__term_constr_build__Mode_10)), transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18, transform_hlds__term_constr_build__HeadVar__5_5);
                    }
#line 972 "term_constr_build.m"
                  }
#line 971 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 966 "term_constr_build.m"
              }
#line 966 "term_constr_build.m"
          }
#line 966 "term_constr_build.m"
      }
#line 964 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 964 "term_constr_build.m"
  }
#line 960 "term_constr_build.m"
}

#line 949 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(
#line 949 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_6,
#line 949 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_9,
#line 949 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Args_10,
#line 949 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_11,
#line 949 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Modes_12)
#line 949 "term_constr_build.m"
{
#line 956 "term_constr_build.m"
  {
#line 956 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 956 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_13;
#line 956 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_14;

#line 954 "term_constr_build.m"
    {
#line 954 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(transform_hlds__term_constr_build__VarTypes_6, transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_9, &transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_13, transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_11, &transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_14);
    }
#line 956 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 955 "term_constr_build.m"
      {
#line 955 "term_constr_build.m"
        *transform_hlds__term_constr_build__STATE_VARIABLE_Modes_12 = transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_14;
#line 955 "term_constr_build.m"
        *transform_hlds__term_constr_build__STATE_VARIABLE_Args_10 = transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_13;
#line 955 "term_constr_build.m"
      }
#line 956 "term_constr_build.m"
    else
#line 957 "term_constr_build.m"
      {
#line 957 "term_constr_build.m"
        {
#line 957 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
#line 957 "term_constr_build.m"
          return;
        }
#line 957 "term_constr_build.m"
      }
#line 956 "term_constr_build.m"
  }
#line 949 "term_constr_build.m"
}

#line 938 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarMap_7,
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_8,
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Coeff_9,
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 938 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13,
#line 938 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14)
#line 938 "term_constr_build.m"
{
#line 941 "term_constr_build.m"
  {
#line 941 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 941 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVar_12;

#line 942 "term_constr_build.m"
    {
#line 942 "term_constr_build.m"
      transform_hlds__term_constr_build__SizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_7, transform_hlds__term_constr_build__Var_10);
    }
#line 943 "term_constr_build.m"
    {
#line 943 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__SizeVar_12)), transform_hlds__term_constr_build__Zeros_8);
    }
#line 945 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 945 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14 = transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13;
#line 945 "term_constr_build.m"
    else
#line 946 "term_constr_build.m"
      {
#line 946 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16;

#line 946 "term_constr_build.m"
        {
#line 946 "term_constr_build.m"
          transform_hlds__term_constr_build__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 946 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_16_16, 0) = ((MR_Box) (transform_hlds__term_constr_build__SizeVar_12));
#line 946 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_16_16, 1) = ((MR_Box) (transform_hlds__term_constr_build__Coeff_9));
#line 946 "term_constr_build.m"
        }
#line 946 "term_constr_build.m"
        {
#line 946 "term_constr_build.m"
          MR_Word base;
#line 946 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "term_constr_build.m"
          *transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14 = base;
#line 946 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 946 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13));
#line 946 "term_constr_build.m"
        }
#line 946 "term_constr_build.m"
      }
#line 941 "term_constr_build.m"
  }
#line 938 "term_constr_build.m"
}

#line 934 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4(
#line 934 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 934 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 934 "term_constr_build.m"
{
#line 934 "term_constr_build.m"
  {
#line 934 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 934 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 934 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv2_HeadVar__2_2;

#line 934 "term_constr_build.m"
    {
#line 934 "term_constr_build.m"
      transform_hlds__term_constr_build__conv2_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 934 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv2_HeadVar__2_2));
#line 934 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 934 "term_constr_build.m"
  }
#line 934 "term_constr_build.m"
}

#line 932 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3(
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 932 "term_constr_build.m"
{
#line 932 "term_constr_build.m"
  {
#line 932 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 932 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 932 "term_constr_build.m"
    {
#line 932 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__932__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 932 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 932 "term_constr_build.m"
  }
#line 932 "term_constr_build.m"
}

#line 932 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2(
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 932 "term_constr_build.m"
{
#line 932 "term_constr_build.m"
  {
#line 932 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 932 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 932 "term_constr_build.m"
    {
#line 932 "term_constr_build.m"
      return transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 932 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 932 "term_constr_build.m"
  }
#line 932 "term_constr_build.m"
}

#line 924 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1(
#line 924 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 924 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 924 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 924 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3)
#line 924 "term_constr_build.m"
{
#line 924 "term_constr_build.m"
  {
#line 924 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 924 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Terms_14;

#line 924 "term_constr_build.m"
    {
#line 924 "term_constr_build.m"
      transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Terms_14);
    }
#line 924 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Terms_14));
#line 924 "term_constr_build.m"
  }
#line 924 "term_constr_build.m"
}

#line 875 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_8,
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_9,
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgVars_10,
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Modes_11,
#line 875 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12,
#line 875 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35,
#line 875 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_36)
#line 875 "term_constr_build.m"
{
#line 880 "term_constr_build.m"
  {
#line 880 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 880 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Type_15;
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 8)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 9)));
#line 881 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 10)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 11)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 12)));
#line 881 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 13)));

#line 882 "term_constr_build.m"
    {
#line 882 "term_constr_build.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__VarTypes_14, transform_hlds__term_constr_build__Var_8, &transform_hlds__term_constr_build__Type_15);
    }
#line 889 "term_constr_build.m"
    {
#line 889 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_constr_build__Type_15);
    }
#line 890 "term_constr_build.m"
    if (!(transform_hlds__term_constr_build__succeeded))
#line 890 "term_constr_build.m"
      {
#line 890 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_16_16;

#line 890 "term_constr_build.m"
        {
#line 890 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(transform_hlds__term_constr_build__ConsId_9, &transform_hlds__term_constr_build__V_16_16);
        }
#line 890 "term_constr_build.m"
      }
#line 894 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 893 "term_constr_build.m"
      *transform_hlds__term_constr_build__Constraints_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 894 "term_constr_build.m"
    else
#line 901 "term_constr_build.m"
      {
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FixedArgVars_17;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FixedModes_18;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ModuleInfo_19;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Norm_20;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeCtor_21;
#line 901 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__Constant_22;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CountedVars_23;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVarMap_25;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Zeros_26;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVar_27;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FirstTerms_28;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Terms_29;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraint_30;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVars_33;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonNegConstraints_34;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_42_42;
#line 901 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_44_44;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_65_65;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_66_66;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_67_67;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_69_69;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_70_70;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_72_72;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_73_73;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_74_74;
#line 902 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_75_75;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_76_76;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_77_77;
#line 902 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_78_78;
#line 905 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_93_93;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_94_94;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_95_95;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_96_96;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_97_97;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_98_98;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_99_99;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_100_100;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_102_102;
#line 915 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_103_103;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_104_104;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_105_105;
#line 915 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_106_106;
#line 924 "term_constr_build.m"
        MR_Box transform_hlds__term_constr_build__conv1_Terms_29;

#line 900 "term_constr_build.m"
        {
#line 900 "term_constr_build.m"
          transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_constr_build__VarTypes_14, transform_hlds__term_constr_build__ArgVars_10, &transform_hlds__term_constr_build__FixedArgVars_17, transform_hlds__term_constr_build__Modes_11, &transform_hlds__term_constr_build__FixedModes_18);
        }
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__Norm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 8)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 9)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 10)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 11)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 12)));
#line 902 "term_constr_build.m"
        transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 13)));
#line 904 "term_constr_build.m"
        {
#line 904 "term_constr_build.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__Type_15, &transform_hlds__term_constr_build__TypeCtor_21);
        }
#line 905 "term_constr_build.m"
        {
#line 905 "term_constr_build.m"
          transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_constr_build__ModuleInfo_19, transform_hlds__term_constr_build__Norm_20, transform_hlds__term_constr_build__TypeCtor_21, transform_hlds__term_constr_build__ConsId_9, &transform_hlds__term_constr_build__Constant_22, transform_hlds__term_constr_build__FixedArgVars_17, &transform_hlds__term_constr_build__CountedVars_23, transform_hlds__term_constr_build__FixedModes_18, &transform_hlds__term_constr_build__V_24_24);
        }
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__Zeros_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__SizeVarMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 8)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 9)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 10)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 11)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 12)));
#line 915 "term_constr_build.m"
        transform_hlds__term_constr_build__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 13)));
#line 918 "term_constr_build.m"
        {
#line 918 "term_constr_build.m"
          transform_hlds__term_constr_build__SizeVar_27 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_25, transform_hlds__term_constr_build__Var_8);
        }
#line 919 "term_constr_build.m"
        {
#line 919 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__SizeVar_27)), transform_hlds__term_constr_build__Zeros_26);
        }
#line 921 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 920 "term_constr_build.m"
          transform_hlds__term_constr_build__FirstTerms_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 921 "term_constr_build.m"
        else
#line 922 "term_constr_build.m"
          {
#line 922 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_37_37;
#line 922 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_38_38;

#line 922 "term_constr_build.m"
            {
#line 922 "term_constr_build.m"
              transform_hlds__term_constr_build__V_38_38 = libs__rat__one_0_f_0();
            }
#line 922 "term_constr_build.m"
            {
#line 922 "term_constr_build.m"
              transform_hlds__term_constr_build__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 922 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_37_37, 0) = ((MR_Box) (transform_hlds__term_constr_build__SizeVar_27));
#line 922 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_37_37, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_38_38));
#line 922 "term_constr_build.m"
            }
#line 922 "term_constr_build.m"
            {
#line 922 "term_constr_build.m"
              transform_hlds__term_constr_build__FirstTerms_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__FirstTerms_28, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_37_37));
#line 922 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__FirstTerms_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 922 "term_constr_build.m"
            }
#line 922 "term_constr_build.m"
          }
#line 924 "term_constr_build.m"
        {
#line 924 "term_constr_build.m"
          transform_hlds__term_constr_build__V_42_42 = libs__rat__one_0_f_0();
        }
#line 924 "term_constr_build.m"
        {
#line 924 "term_constr_build.m"
          transform_hlds__term_constr_build__V_41_41 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_build__V_42_42);
        }
#line 924 "term_constr_build.m"
        {
#line 924 "term_constr_build.m"
          transform_hlds__term_constr_build__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 924 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[1]));
#line 924 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1));
#line 924 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 924 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 3) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarMap_25));
#line 924 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 4) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_26));
#line 924 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_41_41));
#line 924 "term_constr_build.m"
        }
#line 924 "term_constr_build.m"
        {
#line 924 "term_constr_build.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[5], transform_hlds__term_constr_build__V_40_40, transform_hlds__term_constr_build__CountedVars_23, ((MR_Box) (transform_hlds__term_constr_build__FirstTerms_28)), &transform_hlds__term_constr_build__conv1_Terms_29);
        }
#line 924 "term_constr_build.m"
        transform_hlds__term_constr_build__Terms_29 = ((MR_Word) transform_hlds__term_constr_build__conv1_Terms_29);
#line 926 "term_constr_build.m"
        {
#line 926 "term_constr_build.m"
          transform_hlds__term_constr_build__V_44_44 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__Constant_22);
        }
#line 926 "term_constr_build.m"
        {
#line 926 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraint_30 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__Terms_29, (MR_Integer) 1, transform_hlds__term_constr_build__V_44_44);
        }
#line 927 "term_constr_build.m"
        {
#line 927 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = libs__lp_rational__is_false_1_p_0(transform_hlds__term_constr_build__Constraint_30);
        }
#line 929 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 928 "term_constr_build.m"
          {
#line 928 "term_constr_build.m"
            {
#line 928 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_decon_or_con_unify\'/7", (MR_String) "false constraint from unification");
#line 928 "term_constr_build.m"
              return;
            }
#line 928 "term_constr_build.m"
          }
#line 929 "term_constr_build.m"
        else
#line 930 "term_constr_build.m"
          {
#line 930 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SizeVars0_31;
#line 930 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SizeVars1_32;
#line 930 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_48_48;
#line 930 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_49_49;

#line 930 "term_constr_build.m"
            {
#line 930 "term_constr_build.m"
              transform_hlds__term_constr_build__SizeVars0_31 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_25, transform_hlds__term_constr_build__ArgVars_10);
            }
#line 931 "term_constr_build.m"
            {
#line 931 "term_constr_build.m"
              transform_hlds__term_constr_build__SizeVars1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__SizeVars1_32, 0) = ((MR_Box) (transform_hlds__term_constr_build__SizeVar_27));
#line 931 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__SizeVars1_32, 1) = ((MR_Box) (transform_hlds__term_constr_build__SizeVars0_31));
#line 931 "term_constr_build.m"
            }
#line 932 "term_constr_build.m"
            {
#line 932 "term_constr_build.m"
              transform_hlds__term_constr_build__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 932 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1]));
#line 932 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2));
#line 932 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 932 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 3) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_26));
#line 932 "term_constr_build.m"
            }
#line 932 "term_constr_build.m"
            {
#line 932 "term_constr_build.m"
              transform_hlds__term_constr_build__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 932 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[2]));
#line 932 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3));
#line 932 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 932 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_49_49));
#line 932 "term_constr_build.m"
            }
#line 932 "term_constr_build.m"
            {
#line 932 "term_constr_build.m"
              transform_hlds__term_constr_build__SizeVars_33 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__V_48_48, transform_hlds__term_constr_build__SizeVars1_32);
            }
#line 930 "term_constr_build.m"
          }
#line 934 "term_constr_build.m"
        {
#line 934 "term_constr_build.m"
          transform_hlds__term_constr_build__NonNegConstraints_34 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[9], transform_hlds__term_constr_build__SizeVars_33);
        }
#line 935 "term_constr_build.m"
        {
#line 935 "term_constr_build.m"
          MR_Word base;
#line 935 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "term_constr_build.m"
          *transform_hlds__term_constr_build__Constraints_12 = base;
#line 935 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Constraint_30));
#line 935 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__NonNegConstraints_34));
#line 935 "term_constr_build.m"
        }
#line 901 "term_constr_build.m"
      }
#line 880 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_36 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35;
#line 880 "term_constr_build.m"
  }
#line 875 "term_constr_build.m"
}

#line 843 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_4_p_0(
#line 843 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Unification_5,
#line 843 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 843 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23,
#line 843 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_24)
#line 843 "term_constr_build.m"
{
#line 848 "term_constr_build.m"
  {
#line 848 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 848 "term_constr_build.m"
#line 848 "term_constr_build.m"
    switch (MR_tag((MR_Word) transform_hlds__term_constr_build__Unification_5)) {
#line 848 "term_constr_build.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 848 "term_constr_build.m"
      case (MR_Integer) 0:
#line 848 "term_constr_build.m"
        {
#line 848 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)));
#line 848 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 848 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 2)));
#line 848 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Modes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 3)));
#line 848 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Constraints_15;
#line 848 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Polyhedron_49;
#line 848 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 4)));
#line 848 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 5)));
#line 848 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 6)));

#line 849 "term_constr_build.m"
          {
#line 849 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(transform_hlds__term_constr_build__Var_8, transform_hlds__term_constr_build__ConsId_9, transform_hlds__term_constr_build__ArgVars_10, transform_hlds__term_constr_build__Modes_11, &transform_hlds__term_constr_build__Constraints_15, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
          }
#line 1015 "term_constr_build.m"
          {
#line 1015 "term_constr_build.m"
            transform_hlds__term_constr_build__Polyhedron_49 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_15);
          }
#line 1014 "term_constr_build.m"
          {
#line 1014 "term_constr_build.m"
            MR_Word base;
#line 1014 "term_constr_build.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "term_constr_build.m"
            *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1014 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_49));
#line 1014 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
          }
#line 1016 "term_constr_build.m"
          {
#line 1016 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_49);
          }
#line 1018 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 1017 "term_constr_build.m"
            {
#line 1017 "term_constr_build.m"
              {
#line 1017 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1017 "term_constr_build.m"
                return;
              }
#line 1017 "term_constr_build.m"
            }
#line 1018 "term_constr_build.m"
          else
#line 1019 "term_constr_build.m"
            {
#line 1019 "term_constr_build.m"
            }
#line 848 "term_constr_build.m"
        }
#line 848 "term_constr_build.m"
        break;
#line 848 "term_constr_build.m"
      case (MR_Integer) 1:
#line 853 "term_constr_build.m"
        {
#line 853 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)));
#line 853 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 853 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 2)));
#line 853 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Modes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 3)));
#line 853 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Constraints_36;
#line 853 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Polyhedron_56;
#line 853 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 4)));
#line 853 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 5)));

#line 854 "term_constr_build.m"
          {
#line 854 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(transform_hlds__term_constr_build__Var_32, transform_hlds__term_constr_build__ConsId_33, transform_hlds__term_constr_build__ArgVars_34, transform_hlds__term_constr_build__Modes_35, &transform_hlds__term_constr_build__Constraints_36, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
          }
#line 1015 "term_constr_build.m"
          {
#line 1015 "term_constr_build.m"
            transform_hlds__term_constr_build__Polyhedron_56 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_36);
          }
#line 1014 "term_constr_build.m"
          {
#line 1014 "term_constr_build.m"
            MR_Word base;
#line 1014 "term_constr_build.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "term_constr_build.m"
            *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1014 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_56));
#line 1014 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
          }
#line 1016 "term_constr_build.m"
          {
#line 1016 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_56);
          }
#line 1018 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 1017 "term_constr_build.m"
            {
#line 1017 "term_constr_build.m"
              {
#line 1017 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1017 "term_constr_build.m"
                return;
              }
#line 1017 "term_constr_build.m"
            }
#line 1018 "term_constr_build.m"
          else
#line 1019 "term_constr_build.m"
            {
#line 1019 "term_constr_build.m"
            }
#line 853 "term_constr_build.m"
        }
#line 848 "term_constr_build.m"
        break;
#line 848 "term_constr_build.m"
      case (MR_Integer) 2:
#line 858 "term_constr_build.m"
        {
#line 858 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__LVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)));
#line 858 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__RVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 858 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Constraints_37;
#line 858 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Polyhedron_42;

#line 859 "term_constr_build.m"
          {
#line 859 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(transform_hlds__term_constr_build__LVar_18, transform_hlds__term_constr_build__RVar_19, &transform_hlds__term_constr_build__Constraints_37, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
          }
#line 1015 "term_constr_build.m"
          {
#line 1015 "term_constr_build.m"
            transform_hlds__term_constr_build__Polyhedron_42 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_37);
          }
#line 1014 "term_constr_build.m"
          {
#line 1014 "term_constr_build.m"
            MR_Word base;
#line 1014 "term_constr_build.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "term_constr_build.m"
            *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1014 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_42));
#line 1014 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
          }
#line 1016 "term_constr_build.m"
          {
#line 1016 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_42);
          }
#line 1018 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 1017 "term_constr_build.m"
            {
#line 1017 "term_constr_build.m"
              {
#line 1017 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1017 "term_constr_build.m"
                return;
              }
#line 1017 "term_constr_build.m"
            }
#line 1018 "term_constr_build.m"
          else
#line 1019 "term_constr_build.m"
            {
#line 1019 "term_constr_build.m"
            }
#line 858 "term_constr_build.m"
        }
#line 848 "term_constr_build.m"
        break;
#line 848 "term_constr_build.m"
      case (MR_Integer) 3:
#line 848 "term_constr_build.m"
#line 848 "term_constr_build.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)))) {
#line 848 "term_constr_build.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 848 "term_constr_build.m"
          case (MR_Integer) 0:
#line 862 "term_constr_build.m"
            {
#line 862 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Constraints_38;
#line 862 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__LVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 862 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__RVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 2)));
#line 862 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Polyhedron_63;

#line 863 "term_constr_build.m"
              {
#line 863 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(transform_hlds__term_constr_build__LVar_39, transform_hlds__term_constr_build__RVar_40, &transform_hlds__term_constr_build__Constraints_38, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
              }
#line 1015 "term_constr_build.m"
              {
#line 1015 "term_constr_build.m"
                transform_hlds__term_constr_build__Polyhedron_63 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_38);
              }
#line 1014 "term_constr_build.m"
              {
#line 1014 "term_constr_build.m"
                MR_Word base;
#line 1014 "term_constr_build.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1014 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_63));
#line 1014 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "term_constr_build.m"
              }
#line 1016 "term_constr_build.m"
              {
#line 1016 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_63);
              }
#line 1018 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 1017 "term_constr_build.m"
                {
#line 1017 "term_constr_build.m"
                  {
#line 1017 "term_constr_build.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1017 "term_constr_build.m"
                    return;
                  }
#line 1017 "term_constr_build.m"
                }
#line 1018 "term_constr_build.m"
              else
#line 1019 "term_constr_build.m"
                {
#line 1019 "term_constr_build.m"
                }
#line 862 "term_constr_build.m"
            }
#line 848 "term_constr_build.m"
            break;
#line 848 "term_constr_build.m"
          case (MR_Integer) 1:
#line 866 "term_constr_build.m"
            {
#line 867 "term_constr_build.m"
              {
#line 867 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_unification\'/4", (MR_String) "complicated_unify");
#line 867 "term_constr_build.m"
                return;
              }
#line 866 "term_constr_build.m"
            }
#line 848 "term_constr_build.m"
            break;
#line 848 "term_constr_build.m"
        }
#line 848 "term_constr_build.m"
        break;
#line 848 "term_constr_build.m"
    }
#line 848 "term_constr_build.m"
  }
#line 843 "term_constr_build.m"
}

#line 831 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
#line 831 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 831 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2,
#line 831 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_3)
#line 831 "term_constr_build.m"
{
#line 833 "term_constr_build.m"
  while (MR_TRUE)
#line 833 "term_constr_build.m"
    {
#line 833 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 833 "term_constr_build.m"
      {
#line 833 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 833 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "term_constr_build.m"
          *transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_3 = transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2;
#line 833 "term_constr_build.m"
        else
#line 834 "term_constr_build.m"
          {
#line 834 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__Size_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 834 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Sizes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 834 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_12_12 = (transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2 + transform_hlds__term_constr_build__Size_7);

#line 836 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 836 "term_constr_build.m"
            {
#line 836 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__Sizes_8;
#line 836 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0__tmp_copy_2 = transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_12_12;

#line 836 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2 = transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0__tmp_copy_2;
#line 836 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 836 "term_constr_build.m"
            }
#line 836 "term_constr_build.m"
            continue;
#line 834 "term_constr_build.m"
          }
#line 833 "term_constr_build.m"
      }
#line 833 "term_constr_build.m"
      break;
#line 833 "term_constr_build.m"
    }
#line 831 "term_constr_build.m"
}

#line 823 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
#line 823 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 823 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 823 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 823 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 823 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4)
#line 823 "term_constr_build.m"
{
#line 823 "term_constr_build.m"
  {
#line 823 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 823 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv1_HeadVar__2_46;
#line 823 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__4_48;

#line 823 "term_constr_build.m"
    {
#line 823 "term_constr_build.m"
      transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__823__1_4_p_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), &transform_hlds__term_constr_build__conv1_HeadVar__2_46, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3), &transform_hlds__term_constr_build__conv0_HeadVar__4_48);
    }
#line 823 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv1_HeadVar__2_46));
#line 823 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__4_48));
#line 823 "term_constr_build.m"
  }
#line 823 "term_constr_build.m"
}

#line 789 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3,
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 789 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5,
#line 789 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_6)
#line 789 "term_constr_build.m"
{
#line 793 "term_constr_build.m"
  while (MR_TRUE)
#line 793 "term_constr_build.m"
    {
#line 793 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 793 "term_constr_build.m"
      {
#line 793 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 793 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "term_constr_build.m"
          *transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_6 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5;
#line 793 "term_constr_build.m"
        else
#line 796 "term_constr_build.m"
          {
#line 796 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 0)));
#line 796 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 1)));
#line 796 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_21_21;
#line 796 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__GoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_16, (MR_Integer) 0)));
#line 808 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build___GoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_16, (MR_Integer) 1)));
#line 827 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Var_37;
#line 827 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ConsId_38;
#line 827 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ArgVars_39;
#line 827 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Modes_40;
#line 810 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Unify_35;
#line 810 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_32_32;
#line 810 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_33_33;
#line 810 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_34_34;
#line 810 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_36_36;
#line 811 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_41_41;
#line 811 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_42_42;
#line 811 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_43_43;

#line 810 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_30)) == (MR_mktag((MR_Integer) 1)));
#line 810 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 810 "term_constr_build.m"
              {
#line 810 "term_constr_build.m"
                transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 0)));
#line 810 "term_constr_build.m"
                transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 1)));
#line 810 "term_constr_build.m"
                transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 2)));
#line 810 "term_constr_build.m"
                transform_hlds__term_constr_build__Unify_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 3)));
#line 810 "term_constr_build.m"
                transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 4)));
#line 811 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__Unify_35)) == (MR_mktag((MR_Integer) 0)));
#line 811 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 811 "term_constr_build.m"
                  {
#line 811 "term_constr_build.m"
                    transform_hlds__term_constr_build__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 0)));
#line 811 "term_constr_build.m"
                    transform_hlds__term_constr_build__ConsId_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 1)));
#line 811 "term_constr_build.m"
                    transform_hlds__term_constr_build__ArgVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 2)));
#line 811 "term_constr_build.m"
                    transform_hlds__term_constr_build__Modes_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 3)));
#line 811 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 4)));
#line 811 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 5)));
#line 811 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 6)));
#line 811 "term_constr_build.m"
                  }
#line 810 "term_constr_build.m"
              }
#line 827 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 814 "term_constr_build.m"
              {
#line 814 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeInfo_51_67;
#line 814 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeCtorInfo_52_68;
#line 814 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__FixedArgVars_44;
#line 814 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__FixedModes_45;
#line 814 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Type_46;
#line 814 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeCtor_47;
#line 814 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__ConsIdSize_48;
#line 814 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__CountedVars_49;
#line 814 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ArgSizes_51;
#line 814 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__TotalArgSize_52;
#line 814 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__Size_53;
#line 814 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_39_55;
#line 956 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_77;
#line 956 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_78;
#line 817 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_50_50;
#line 823 "term_constr_build.m"
                MR_Box transform_hlds__term_constr_build__conv2_STATE_VARIABLE_SizeMap_39_55;

#line 954 "term_constr_build.m"
                {
#line 954 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(transform_hlds__term_constr_build__HeadVar__3_3, transform_hlds__term_constr_build__ArgVars_39, &transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_77, transform_hlds__term_constr_build__Modes_40, &transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_78);
                }
#line 956 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 955 "term_constr_build.m"
                  {
#line 955 "term_constr_build.m"
                    transform_hlds__term_constr_build__FixedModes_45 = transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_78;
#line 955 "term_constr_build.m"
                    transform_hlds__term_constr_build__FixedArgVars_44 = transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_77;
#line 955 "term_constr_build.m"
                  }
#line 956 "term_constr_build.m"
                else
#line 957 "term_constr_build.m"
                  {
#line 957 "term_constr_build.m"
                    {
#line 957 "term_constr_build.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
#line 957 "term_constr_build.m"
                      return;
                    }
#line 957 "term_constr_build.m"
                  }
#line 815 "term_constr_build.m"
                {
#line 815 "term_constr_build.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__HeadVar__3_3, transform_hlds__term_constr_build__Var_37, &transform_hlds__term_constr_build__Type_46);
                }
#line 816 "term_constr_build.m"
                {
#line 816 "term_constr_build.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__Type_46, &transform_hlds__term_constr_build__TypeCtor_47);
                }
#line 817 "term_constr_build.m"
                {
#line 817 "term_constr_build.m"
                  transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_constr_build__HeadVar__1_1, transform_hlds__term_constr_build__HeadVar__2_2, transform_hlds__term_constr_build__TypeCtor_47, transform_hlds__term_constr_build__ConsId_38, &transform_hlds__term_constr_build__ConsIdSize_48, transform_hlds__term_constr_build__FixedArgVars_44, &transform_hlds__term_constr_build__CountedVars_49, transform_hlds__term_constr_build__FixedModes_45, &transform_hlds__term_constr_build__V_50_50);
                }
#line 8613 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_51_67 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3];
#line 8615 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeCtorInfo_52_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 823 "term_constr_build.m"
                {
#line 823 "term_constr_build.m"
                  mercury__list__map_foldl_5_p_0(transform_hlds__term_constr_build__TypeInfo_51_67, transform_hlds__term_constr_build__TypeCtorInfo_52_68, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[2], (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[8], transform_hlds__term_constr_build__CountedVars_49, &transform_hlds__term_constr_build__ArgSizes_51, ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5)), &transform_hlds__term_constr_build__conv2_STATE_VARIABLE_SizeMap_39_55);
                }
#line 823 "term_constr_build.m"
                transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_39_55 = ((MR_Word) transform_hlds__term_constr_build__conv2_STATE_VARIABLE_SizeMap_39_55);
#line 824 "term_constr_build.m"
                {
#line 824 "term_constr_build.m"
                  transform_hlds__term_constr_build__accumulate_sum_3_p_0(transform_hlds__term_constr_build__ArgSizes_51, (MR_Integer) 0, &transform_hlds__term_constr_build__TotalArgSize_52);
                }
#line 825 "term_constr_build.m"
                transform_hlds__term_constr_build__Size_53 = (transform_hlds__term_constr_build__ConsIdSize_48 + transform_hlds__term_constr_build__TotalArgSize_52);
#line 826 "term_constr_build.m"
                {
#line 826 "term_constr_build.m"
                  mercury__map__det_insert_4_p_0(transform_hlds__term_constr_build__TypeInfo_51_67, transform_hlds__term_constr_build__TypeCtorInfo_52_68, ((MR_Box) (transform_hlds__term_constr_build__Var_37)), ((MR_Box) (transform_hlds__term_constr_build__Size_53)), transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_39_55, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_21_21);
                }
#line 814 "term_constr_build.m"
              }
#line 827 "term_constr_build.m"
            else
#line 828 "term_constr_build.m"
              {
#line 828 "term_constr_build.m"
                {
#line 828 "term_constr_build.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.abstract_from_ground_term_conjunct\'/6", (MR_String) "malformed conjunct");
#line 828 "term_constr_build.m"
                  return;
                }
#line 828 "term_constr_build.m"
              }
#line 799 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 799 "term_constr_build.m"
            {
#line 799 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__4__tmp_copy_4 = transform_hlds__term_constr_build__Goals_17;
#line 799 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0__tmp_copy_5 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_21_21;

#line 799 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0__tmp_copy_5;
#line 799 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__4_4 = transform_hlds__term_constr_build__HeadVar__4__tmp_copy_4;
#line 799 "term_constr_build.m"
            }
#line 799 "term_constr_build.m"
            continue;
#line 796 "term_constr_build.m"
          }
#line 793 "term_constr_build.m"
      }
#line 793 "term_constr_build.m"
      break;
#line 793 "term_constr_build.m"
    }
#line 789 "term_constr_build.m"
}

#line 760 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(
#line 760 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TermVar_6,
#line 760 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SubGoal_7,
#line 760 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 760 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24,
#line 760 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_25)
#line 760 "term_constr_build.m"
{
#line 764 "term_constr_build.m"
  {
#line 764 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 764 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SubGoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__SubGoal_7, (MR_Integer) 0)));
#line 765 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build___SubGoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__SubGoal_7, (MR_Integer) 1)));
#line 785 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Conjuncts_12;
#line 766 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;

#line 766 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_build__SubGoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__SubGoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 766 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 766 "term_constr_build.m"
      {
#line 766 "term_constr_build.m"
        transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__SubGoalExpr_10, (MR_Integer) 1)));
#line 766 "term_constr_build.m"
        transform_hlds__term_constr_build__Conjuncts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__SubGoalExpr_10, (MR_Integer) 2)));
#line 766 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_26_26 == (MR_Integer) 0);
#line 766 "term_constr_build.m"
      }
#line 785 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 767 "term_constr_build.m"
      {
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVarMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Zeros_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TermSizeVar_15;
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraints_16;
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 9)));
#line 767 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 10)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 11)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 12)));
#line 767 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 13)));

#line 769 "term_constr_build.m"
        {
#line 769 "term_constr_build.m"
          transform_hlds__term_constr_build__TermSizeVar_15 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_13, transform_hlds__term_constr_build__TermVar_6);
        }
#line 770 "term_constr_build.m"
        {
#line 770 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__TermSizeVar_15)), transform_hlds__term_constr_build__Zeros_14);
        }
#line 772 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 771 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 772 "term_constr_build.m"
        else
#line 773 "term_constr_build.m"
          {
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__TypeInfo_108_108 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3];
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__TypeCtorInfo_109_109 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Norm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SizeMap_20;
#line 773 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__KnownTermVarSize_21;
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Terms_22;
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Constraint_23;
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_27_27;
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_28_28;
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_29_29;
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_32_32;
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 9)));
#line 773 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 10)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 11)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 12)));
#line 773 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 13)));
#line 778 "term_constr_build.m"
            MR_Box transform_hlds__term_constr_build__conv0_KnownTermVarSize_21;

#line 777 "term_constr_build.m"
            {
#line 777 "term_constr_build.m"
              transform_hlds__term_constr_build__V_27_27 = mercury__map__init_0_f_0(transform_hlds__term_constr_build__TypeInfo_108_108, transform_hlds__term_constr_build__TypeCtorInfo_109_109);
            }
#line 776 "term_constr_build.m"
            {
#line 776 "term_constr_build.m"
              transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(transform_hlds__term_constr_build__ModuleInfo_17, transform_hlds__term_constr_build__Norm_18, transform_hlds__term_constr_build__VarTypes_19, transform_hlds__term_constr_build__Conjuncts_12, transform_hlds__term_constr_build__V_27_27, &transform_hlds__term_constr_build__SizeMap_20);
            }
#line 778 "term_constr_build.m"
            {
#line 778 "term_constr_build.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_constr_build__TypeInfo_108_108, transform_hlds__term_constr_build__TypeCtorInfo_109_109, transform_hlds__term_constr_build__SizeMap_20, ((MR_Box) (transform_hlds__term_constr_build__TermVar_6)), &transform_hlds__term_constr_build__conv0_KnownTermVarSize_21);
            }
#line 778 "term_constr_build.m"
            transform_hlds__term_constr_build__KnownTermVarSize_21 = ((MR_Integer) transform_hlds__term_constr_build__conv0_KnownTermVarSize_21);
#line 779 "term_constr_build.m"
            {
#line 779 "term_constr_build.m"
              transform_hlds__term_constr_build__V_29_29 = libs__rat__one_0_f_0();
            }
#line 779 "term_constr_build.m"
            {
#line 779 "term_constr_build.m"
              transform_hlds__term_constr_build__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 779 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_28_28, 0) = ((MR_Box) (transform_hlds__term_constr_build__TermSizeVar_15));
#line 779 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_28_28, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_29_29));
#line 779 "term_constr_build.m"
            }
#line 779 "term_constr_build.m"
            {
#line 779 "term_constr_build.m"
              transform_hlds__term_constr_build__Terms_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_22, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_28_28));
#line 779 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "term_constr_build.m"
            }
#line 781 "term_constr_build.m"
            {
#line 781 "term_constr_build.m"
              transform_hlds__term_constr_build__V_32_32 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__KnownTermVarSize_21);
            }
#line 781 "term_constr_build.m"
            {
#line 781 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraint_23 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__Terms_22, (MR_Integer) 1, transform_hlds__term_constr_build__V_32_32);
            }
#line 782 "term_constr_build.m"
            {
#line 782 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraints_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_16, 0) = ((MR_Box) (transform_hlds__term_constr_build__Constraint_23));
#line 782 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "term_constr_build.m"
            }
#line 773 "term_constr_build.m"
          }
#line 784 "term_constr_build.m"
        {
#line 784 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_8 = transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(transform_hlds__term_constr_build__Constraints_16);
        }
#line 767 "term_constr_build.m"
      }
#line 785 "term_constr_build.m"
    else
#line 786 "term_constr_build.m"
      {
#line 786 "term_constr_build.m"
        {
#line 786 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_from_ground_term_goal\'/5", (MR_String) "not conj");
#line 786 "term_constr_build.m"
          return;
        }
#line 786 "term_constr_build.m"
      }
#line 764 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_25 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24;
#line 764 "term_constr_build.m"
  }
#line 760 "term_constr_build.m"
}

#line 736 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
#line 736 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 736 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchVar_2,
#line 736 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_3)
#line 736 "term_constr_build.m"
{
#line 738 "term_constr_build.m"
  {
#line 738 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 738 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 738 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));

#line 738 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__V_45_45)) == (MR_mktag((MR_Integer) 1))))
#line 738 "term_constr_build.m"
      {
#line 738 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 3)));
#line 738 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 0)));
#line 738 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 1)));
#line 738 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 2)));
#line 738 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 4)));

#line 741 "term_constr_build.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_build__Kind_7)) == (MR_mktag((MR_Integer) 1))))
#line 740 "term_constr_build.m"
          {
#line 740 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 0)));
#line 740 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 1)));
#line 740 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 2)));
#line 740 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 3)));
#line 740 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 4)));
#line 740 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 5)));

#line 740 "term_constr_build.m"
            {
#line 740 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_build__SwitchVar_2)), ((MR_Box) (transform_hlds__term_constr_build__V_42_42)));
            }
#line 740 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 740 "term_constr_build.m"
              {
#line 740 "term_constr_build.m"
                return transform_hlds__term_constr_build__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__term_constr_build__ConsId_3, transform_hlds__term_constr_build__V_43_43);
              }
#line 740 "term_constr_build.m"
          }
#line 741 "term_constr_build.m"
        else
#line 741 "term_constr_build.m"
        if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__Kind_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 742 "term_constr_build.m"
          {
#line 743 "term_constr_build.m"
            {
#line 743 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "complicated_unify");
            }
#line 742 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 742 "term_constr_build.m"
          }
#line 741 "term_constr_build.m"
        else
#line 741 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = MR_FALSE;
#line 738 "term_constr_build.m"
      }
#line 738 "term_constr_build.m"
    else
#line 738 "term_constr_build.m"
    if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__V_45_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 751 "term_constr_build.m"
      {
#line 752 "term_constr_build.m"
        {
#line 752 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "shorthand");
        }
#line 751 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 751 "term_constr_build.m"
      }
#line 738 "term_constr_build.m"
    else
#line 738 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_FALSE;
#line 738 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 738 "term_constr_build.m"
  }
#line 736 "term_constr_build.m"
}

#line 680 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
#line 680 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchProgVar_1,
#line 680 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 680 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3,
#line 680 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_4,
#line 680 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5,
#line 680 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_6)
#line 680 "term_constr_build.m"
{
#line 684 "term_constr_build.m"
  while (MR_TRUE)
#line 684 "term_constr_build.m"
    {
#line 684 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 684 "term_constr_build.m"
      {
#line 684 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 684 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "term_constr_build.m"
          {
#line 684 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_Info_6 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5;
#line 684 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_4 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3;
#line 684 "term_constr_build.m"
          }
#line 684 "term_constr_build.m"
        else
#line 686 "term_constr_build.m"
          {
#line 686 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 686 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 686 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Case_15, (MR_Integer) 0)));
#line 686 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Case_15, (MR_Integer) 1)));
#line 686 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Case_15, (MR_Integer) 2)));
#line 686 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AbstractGoal0_22;
#line 686 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AbstractGoal_23;
#line 686 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42;
#line 686 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_51_51;

#line 688 "term_constr_build.m"
            {
#line 688 "term_constr_build.m"
              transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Goal_21, &transform_hlds__term_constr_build__AbstractGoal0_22, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42);
            }
#line 700 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__OtherConsIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 701 "term_constr_build.m"
              {
#line 701 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__detect_switch_var_3_p_0(transform_hlds__term_constr_build__Goal_21, transform_hlds__term_constr_build__SwitchProgVar_1, transform_hlds__term_constr_build__MainConsId_19);
              }
#line 704 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 703 "term_constr_build.m"
              transform_hlds__term_constr_build__AbstractGoal_23 = transform_hlds__term_constr_build__AbstractGoal0_22;
#line 704 "term_constr_build.m"
            else
#line 705 "term_constr_build.m"
              {
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 6)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SizeVarMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 8)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SwitchVarType_26;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SwitchSizeVar_27;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeCtor_28;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ModuleInfo_29;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Norm_30;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Zeros_31;
#line 705 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__Size_32;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ExtraConstr_33;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ExtraPoly_36;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ExtraGoal_37;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_46_46;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_47_47;
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 2)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 3)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 4)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 5)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 7)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 9)));
#line 705 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 10)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 11)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 12)));
#line 705 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 13)));
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_82_82;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_83_83;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_84_84;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_86_86;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_87_87;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_88_88;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_90_90;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_91_91;
#line 710 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_92_92;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_93_93;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_94_94;
#line 710 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_95_95;

#line 707 "term_constr_build.m"
                {
#line 707 "term_constr_build.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__TypeMap_24, transform_hlds__term_constr_build__SwitchProgVar_1, &transform_hlds__term_constr_build__SwitchVarType_26);
                }
#line 708 "term_constr_build.m"
                {
#line 708 "term_constr_build.m"
                  transform_hlds__term_constr_build__SwitchSizeVar_27 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_25, transform_hlds__term_constr_build__SwitchProgVar_1);
                }
#line 709 "term_constr_build.m"
                {
#line 709 "term_constr_build.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__SwitchVarType_26, &transform_hlds__term_constr_build__TypeCtor_28);
                }
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_82_82 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__ModuleInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 2)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__Norm_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 3)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 4)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 5)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 6)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__Zeros_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 7)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 8)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 9)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 10)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 11)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 12)));
#line 710 "term_constr_build.m"
                transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 13)));
#line 713 "term_constr_build.m"
                {
#line 713 "term_constr_build.m"
                  transform_hlds__term_constr_build__Size_32 = transform_hlds__term_norm__functor_lower_bound_4_f_0(transform_hlds__term_constr_build__ModuleInfo_29, transform_hlds__term_constr_build__Norm_30, transform_hlds__term_constr_build__TypeCtor_28, transform_hlds__term_constr_build__MainConsId_19);
                }
#line 714 "term_constr_build.m"
                {
#line 714 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__SwitchSizeVar_27)), transform_hlds__term_constr_build__Zeros_31);
                }
#line 716 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 715 "term_constr_build.m"
                  transform_hlds__term_constr_build__ExtraConstr_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 716 "term_constr_build.m"
                else
#line 717 "term_constr_build.m"
                  {
#line 717 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__SwitchVarConst_34;
#line 717 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__SwitchVarConstr_35;

#line 717 "term_constr_build.m"
                    {
#line 717 "term_constr_build.m"
                      transform_hlds__term_constr_build__SwitchVarConst_34 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__Size_32);
                    }
#line 718 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__Size_32 == (MR_Integer) 0);
#line 722 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 719 "term_constr_build.m"
                      {
#line 719 "term_constr_build.m"
                        transform_hlds__term_constr_build__SwitchVarConstr_35 = libs__lp_rational__make_var_const_eq_constraint_2_f_0(transform_hlds__term_constr_build__SwitchSizeVar_27, transform_hlds__term_constr_build__SwitchVarConst_34);
                      }
#line 722 "term_constr_build.m"
                    else
#line 723 "term_constr_build.m"
                      {
#line 723 "term_constr_build.m"
                        transform_hlds__term_constr_build__SwitchVarConstr_35 = libs__lp_rational__make_var_const_gte_constraint_2_f_0(transform_hlds__term_constr_build__SwitchSizeVar_27, transform_hlds__term_constr_build__SwitchVarConst_34);
                      }
#line 727 "term_constr_build.m"
                    {
#line 727 "term_constr_build.m"
                      transform_hlds__term_constr_build__ExtraConstr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "term_constr_build.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__ExtraConstr_33, 0) = ((MR_Box) (transform_hlds__term_constr_build__SwitchVarConstr_35));
#line 727 "term_constr_build.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__ExtraConstr_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "term_constr_build.m"
                    }
#line 717 "term_constr_build.m"
                  }
#line 729 "term_constr_build.m"
                {
#line 729 "term_constr_build.m"
                  transform_hlds__term_constr_build__ExtraPoly_36 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__ExtraConstr_33);
                }
#line 730 "term_constr_build.m"
                {
#line 730 "term_constr_build.m"
                  transform_hlds__term_constr_build__ExtraGoal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ExtraGoal_37, 0) = ((MR_Box) (transform_hlds__term_constr_build__ExtraPoly_36));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ExtraGoal_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "term_constr_build.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ExtraGoal_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 730 "term_constr_build.m"
                }
#line 731 "term_constr_build.m"
                {
#line 731 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_47_47, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractGoal0_22));
#line 731 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "term_constr_build.m"
                }
#line 731 "term_constr_build.m"
                {
#line 731 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_46_46, 0) = ((MR_Box) (transform_hlds__term_constr_build__ExtraGoal_37));
#line 731 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_46_46, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_47_47));
#line 731 "term_constr_build.m"
                }
#line 731 "term_constr_build.m"
                {
#line 731 "term_constr_build.m"
                  transform_hlds__term_constr_build__AbstractGoal_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 731 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoal_23, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_46_46));
#line 731 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoal_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoal_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "term_constr_build.m"
                }
#line 705 "term_constr_build.m"
              }
#line 733 "term_constr_build.m"
            {
#line 733 "term_constr_build.m"
              mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, ((MR_Box) (transform_hlds__term_constr_build__AbstractGoal_23)), transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3, &transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_51_51);
            }
#line 734 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 734 "term_constr_build.m"
            {
#line 734 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__2__tmp_copy_2 = transform_hlds__term_constr_build__Cases_16;
#line 734 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_3 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_51_51;
#line 734 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42;

#line 734 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_5;
#line 734 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_3;
#line 734 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__2_2 = transform_hlds__term_constr_build__HeadVar__2__tmp_copy_2;
#line 734 "term_constr_build.m"
            }
#line 734 "term_constr_build.m"
            continue;
#line 686 "term_constr_build.m"
          }
#line 684 "term_constr_build.m"
      }
#line 684 "term_constr_build.m"
      break;
#line 684 "term_constr_build.m"
    }
#line 680 "term_constr_build.m"
}

#line 659 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
#line 659 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 659 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2,
#line 659 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_3,
#line 659 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 659 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5)
#line 659 "term_constr_build.m"
{
#line 663 "term_constr_build.m"
  while (MR_TRUE)
#line 663 "term_constr_build.m"
    {
#line 663 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 663 "term_constr_build.m"
      {
#line 663 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 663 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "term_constr_build.m"
          {
#line 663 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_Info_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4;
#line 663 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_3 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2;
#line 663 "term_constr_build.m"
          }
#line 663 "term_constr_build.m"
        else
#line 664 "term_constr_build.m"
          {
#line 664 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 664 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 664 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AbstractGoal_16;
#line 664 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_21_21;
#line 664 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_22_22;

#line 665 "term_constr_build.m"
            {
#line 665 "term_constr_build.m"
              transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Goal_12, &transform_hlds__term_constr_build__AbstractGoal_16, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_21_21);
            }
#line 666 "term_constr_build.m"
            {
#line 666 "term_constr_build.m"
              mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, ((MR_Box) (transform_hlds__term_constr_build__AbstractGoal_16)), transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2, &transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_22_22);
            }
#line 667 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 667 "term_constr_build.m"
            {
#line 667 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__Goals_13;
#line 667 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_2 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_22_22;
#line 667 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_21_21;

#line 667 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 667 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_2;
#line 667 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 667 "term_constr_build.m"
            }
#line 667 "term_constr_build.m"
            continue;
#line 664 "term_constr_build.m"
          }
#line 663 "term_constr_build.m"
      }
#line 663 "term_constr_build.m"
      break;
#line 663 "term_constr_build.m"
    }
#line 659 "term_constr_build.m"
}

#line 636 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
#line 636 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Type_5,
#line 636 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 636 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 636 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18)
#line 636 "term_constr_build.m"
{
#line 639 "term_constr_build.m"
  {
#line 639 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 639 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoals_9;

#line 643 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__Type_5)) == (MR_mktag((MR_Integer) 1))))
#line 641 "term_constr_build.m"
      {
#line 641 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Type_5, (MR_Integer) 0)));

#line 642 "term_constr_build.m"
        {
#line 642 "term_constr_build.m"
          transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(transform_hlds__term_constr_build__Goals_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_build__AbstractGoals_9, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);
        }
#line 641 "term_constr_build.m"
      }
#line 643 "term_constr_build.m"
    else
#line 644 "term_constr_build.m"
      {
#line 644 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SwitchVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Type_5, (MR_Integer) 0)));
#line 644 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Type_5, (MR_Integer) 1)));

#line 645 "term_constr_build.m"
        {
#line 645 "term_constr_build.m"
          transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(transform_hlds__term_constr_build__SwitchVar_10, transform_hlds__term_constr_build__Cases_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_build__AbstractGoals_9, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);
        }
#line 644 "term_constr_build.m"
      }
#line 650 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__AbstractGoals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 648 "term_constr_build.m"
      {
#line 648 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_27_27;

#line 649 "term_constr_build.m"
        {
#line 649 "term_constr_build.m"
          transform_hlds__term_constr_build__V_27_27 = libs__polyhedron__universe_0_f_0();
        }
#line 649 "term_constr_build.m"
        {
#line 649 "term_constr_build.m"
          MR_Word base;
#line 649 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 649 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 649 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_27_27));
#line 649 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "term_constr_build.m"
        }
#line 648 "term_constr_build.m"
      }
#line 650 "term_constr_build.m"
    else
#line 650 "term_constr_build.m"
      {
#line 650 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoals_9, (MR_Integer) 1)));
#line 650 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoals_9, (MR_Integer) 0)));

#line 650 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = transform_hlds__term_constr_build__V_32_32;
#line 650 "term_constr_build.m"
        else
#line 654 "term_constr_build.m"
          {
#line 654 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__DisjSize_16;

#line 655 "term_constr_build.m"
            {
#line 655 "term_constr_build.m"
              transform_hlds__term_constr_build__DisjSize_16 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, transform_hlds__term_constr_build__AbstractGoals_9);
            }
#line 656 "term_constr_build.m"
            {
#line 656 "term_constr_build.m"
              MR_Word base;
#line 656 "term_constr_build.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 656 "term_constr_build.m"
              *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 656 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractGoals_9));
#line 656 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__DisjSize_16));
#line 656 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "term_constr_build.m"
            }
#line 654 "term_constr_build.m"
          }
#line 650 "term_constr_build.m"
      }
#line 639 "term_constr_build.m"
  }
#line 636 "term_constr_build.m"
}

#line 558 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
#line 558 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 558 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 558 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 558 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 558 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34,
#line 558 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_35)
#line 558 "term_constr_build.m"
{
#line 563 "term_constr_build.m"
  {
#line 563 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerPPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ZeroVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 7)));
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CalleeProcInfo_16;
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CalleeTerm2Info_17;
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ArgAnalysisOnly_18;
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ArgSizeInfo_24;
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Constraints_27;
#line 563 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Polyhedron_33;
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 8)));
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 9)));
#line 564 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 10)));
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 11)));
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 12)));
#line 564 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 13)));
#line 567 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_88_88;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_89_89;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_90_90;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_91_91;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_92_92;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_93_93;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_94_94;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_95_95;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_96_96;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_97_97;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_98_98;
#line 572 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_99_99;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_100_100;
#line 572 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_101_101;

#line 567 "term_constr_build.m"
    {
#line 567 "term_constr_build.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_build__ModuleInfo_12, transform_hlds__term_constr_build__CalleePPId_7, &transform_hlds__term_constr_build__V_15_15, &transform_hlds__term_constr_build__CalleeProcInfo_16);
    }
#line 571 "term_constr_build.m"
    {
#line 571 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_build__CalleeProcInfo_16, &transform_hlds__term_constr_build__CalleeTerm2Info_17);
    }
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_88_88 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_89_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 7)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 8)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 9)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 10)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 11)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 12)));
#line 572 "term_constr_build.m"
    transform_hlds__term_constr_build__ArgAnalysisOnly_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 13)));
#line 590 "term_constr_build.m"
#line 590 "term_constr_build.m"
    switch (transform_hlds__term_constr_build__ArgAnalysisOnly_18) {
#line 590 "term_constr_build.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 590 "term_constr_build.m"
      case (MR_Integer) 0:
#line 574 "term_constr_build.m"
        {
#line 574 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__MaybeTermStatus_19;

#line 575 "term_constr_build.m"
          {
#line 575 "term_constr_build.m"
            transform_hlds__term_constr_build__MaybeTermStatus_19 = transform_hlds__term_constr_main__term_status_1_f_0(transform_hlds__term_constr_build__CalleeTerm2Info_17);
          }
#line 585 "term_constr_build.m"
          if ((transform_hlds__term_constr_build__MaybeTermStatus_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "term_constr_build.m"
            {
#line 587 "term_constr_build.m"
              {
#line 587 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "callee procedure has no termination status.");
#line 587 "term_constr_build.m"
                return;
              }
#line 586 "term_constr_build.m"
            }
#line 585 "term_constr_build.m"
          else
#line 577 "term_constr_build.m"
            {
#line 577 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__TermStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__MaybeTermStatus_19, (MR_Integer) 0)));

#line 582 "term_constr_build.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_build__TermStatus_20)) == (MR_mktag((MR_Integer) 1))))
#line 579 "term_constr_build.m"
                {
#line 579 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__Error_22;
#line 579 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_39_39;

#line 580 "term_constr_build.m"
                  {
#line 580 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "term_constr_build.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_39_39, 0) = ((MR_Box) (transform_hlds__term_constr_build__CallerPPId_13));
#line 580 "term_constr_build.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_build__CalleePPId_7));
#line 580 "term_constr_build.m"
                  }
#line 580 "term_constr_build.m"
                  {
#line 580 "term_constr_build.m"
                    transform_hlds__term_constr_build__Error_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 580 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_22, 0) = ((MR_Box) (transform_hlds__term_constr_build__Context_9));
#line 580 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_22, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 580 "term_constr_build.m"
                  }
#line 581 "term_constr_build.m"
                  {
#line 581 "term_constr_build.m"
                    transform_hlds__term_constr_build__info_update_errors_3_p_0(transform_hlds__term_constr_build__Error_22, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, transform_hlds__term_constr_build__STATE_VARIABLE_Info_35);
                  }
#line 579 "term_constr_build.m"
                }
#line 582 "term_constr_build.m"
              else
#line 583 "term_constr_build.m"
                *transform_hlds__term_constr_build__STATE_VARIABLE_Info_35 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34;
#line 577 "term_constr_build.m"
            }
#line 574 "term_constr_build.m"
        }
#line 590 "term_constr_build.m"
        break;
#line 590 "term_constr_build.m"
      case (MR_Integer) 1:
#line 591 "term_constr_build.m"
        *transform_hlds__term_constr_build__STATE_VARIABLE_Info_35 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34;
#line 590 "term_constr_build.m"
        break;
#line 590 "term_constr_build.m"
    }
#line 595 "term_constr_build.m"
    {
#line 595 "term_constr_build.m"
      transform_hlds__term_constr_build__ArgSizeInfo_24 = transform_hlds__term_constr_main__success_constrs_1_f_0(transform_hlds__term_constr_build__CalleeTerm2Info_17);
    }
#line 599 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__ArgSizeInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "term_constr_build.m"
      {
#line 598 "term_constr_build.m"
        {
#line 598 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "no argument size info for callee proc");
#line 598 "term_constr_build.m"
          return;
        }
#line 597 "term_constr_build.m"
      }
#line 599 "term_constr_build.m"
    else
#line 600 "term_constr_build.m"
      {
#line 600 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__ArgSizeInfo_24, (MR_Integer) 0)));
#line 600 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ArgSizeConstrs0_26;

#line 601 "term_constr_build.m"
        {
#line 601 "term_constr_build.m"
          transform_hlds__term_constr_build__ArgSizeConstrs0_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_build__SizeInfo_25);
        }
#line 605 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__ArgSizeConstrs0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "term_constr_build.m"
        else
#line 606 "term_constr_build.m"
          {
#line 606 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__CalleeHeadVars_30;
#line 606 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SubstMap_31;
#line 606 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Constraints0_32;

#line 607 "term_constr_build.m"
            {
#line 607 "term_constr_build.m"
              transform_hlds__term_constr_build__CalleeHeadVars_30 = transform_hlds__term_constr_main__head_vars_1_f_0(transform_hlds__term_constr_build__CalleeTerm2Info_17);
            }
#line 608 "term_constr_build.m"
            {
#line 608 "term_constr_build.m"
              transform_hlds__term_constr_build__SubstMap_31 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__CalleeHeadVars_30);
            }
#line 609 "term_constr_build.m"
            {
#line 609 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraints0_32 = libs__lp_rational__substitute_vars_2_f_0(transform_hlds__term_constr_build__SubstMap_31, transform_hlds__term_constr_build__ArgSizeConstrs0_26);
            }
#line 611 "term_constr_build.m"
            {
#line 611 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraints_27 = libs__lp_rational__set_vars_to_zero_2_f_0(transform_hlds__term_constr_build__ZeroVars_14, transform_hlds__term_constr_build__Constraints0_32);
            }
#line 606 "term_constr_build.m"
          }
#line 600 "term_constr_build.m"
      }
#line 614 "term_constr_build.m"
    {
#line 614 "term_constr_build.m"
      transform_hlds__term_constr_build__Polyhedron_33 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_27);
    }
#line 615 "term_constr_build.m"
    {
#line 615 "term_constr_build.m"
      MR_Word base;
#line 615 "term_constr_build.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 615 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_10 = base;
#line 615 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_33));
#line 615 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "term_constr_build.m"
    }
#line 563 "term_constr_build.m"
  }
#line 558 "term_constr_build.m"
}

#line 533 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_recursive_call_6_p_0(
#line 533 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 533 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 533 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 533 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 533 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 533 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17)
#line 533 "term_constr_build.m"
{
#line 537 "term_constr_build.m"
  {
#line 537 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerPPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerZeros_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerArgConstrs_14;
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerArgPoly_15;
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19;
#line 537 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23;
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 538 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 538 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));

#line 540 "term_constr_build.m"
    {
#line 540 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_build__CallerPPId_12, transform_hlds__term_constr_build__CalleePPId_7);
    }
#line 542 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 541 "term_constr_build.m"
      {
#line 541 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__UpdatedRecType_59;
#line 541 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 355 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 355 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_77_77;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_78_78;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_79_79;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_80_80;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_81_81;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_82_82;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_83_83;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_84_84;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_85_85;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_86_86;
#line 356 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_87_87;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_88_88;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_89_89;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_90_90;
#line 356 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_76_76;

#line 355 "term_constr_build.m"
        {
#line 355 "term_constr_build.m"
          transform_hlds__term_constr_build__UpdatedRecType_59 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(transform_hlds__term_constr_build__V_60_60, (MR_Integer) 1);
        }
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 356 "term_constr_build.m"
        transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 356 "term_constr_build.m"
        {
#line 356 "term_constr_build.m"
          transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 0) = ((MR_Box) ((transform_hlds__term_constr_build__UpdatedRecType_59 | ((transform_hlds__term_constr_build__V_77_77 << (MR_Integer) 2)))));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_78_78));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_79_79));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_80_80));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_81_81));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_82_82));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_83_83));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_84_84));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_85_85));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_86_86));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_87_87));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_88_88));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_89_89));
#line 356 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_90_90));
#line 356 "term_constr_build.m"
        }
#line 541 "term_constr_build.m"
      }
#line 542 "term_constr_build.m"
    else
#line 543 "term_constr_build.m"
      {
#line 543 "term_constr_build.m"
        {
#line 543 "term_constr_build.m"
          transform_hlds__term_constr_build__info_update_recursion_3_p_0((MR_Integer) 2, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19);
        }
#line 543 "term_constr_build.m"
      }
#line 545 "term_constr_build.m"
    {
#line 545 "term_constr_build.m"
      transform_hlds__term_constr_build__CallerArgConstrs_14 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__CallerZeros_13);
    }
#line 546 "term_constr_build.m"
    {
#line 546 "term_constr_build.m"
      transform_hlds__term_constr_build__CallerArgPoly_15 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__CallerArgConstrs_14);
    }
#line 547 "term_constr_build.m"
    {
#line 547 "term_constr_build.m"
      transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);
    }
#line 548 "term_constr_build.m"
    transform_hlds__term_constr_build__V_23_23 = (MR_Word) transform_hlds__term_constr_build__CalleePPId_7;
#line 548 "term_constr_build.m"
    {
#line 548 "term_constr_build.m"
      MR_Word base;
#line 548 "term_constr_build.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 548 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_10 = base;
#line 548 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 548 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__Context_9));
#line 548 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__CallerArgs_8));
#line 548 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__CallerZeros_13));
#line 548 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__CallerArgPoly_15));
#line 548 "term_constr_build.m"
    }
#line 537 "term_constr_build.m"
  }
#line 533 "term_constr_build.m"
}

#line 516 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
#line 516 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 516 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 516 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_9,
#line 516 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 516 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13,
#line 516 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_14)
#line 516 "term_constr_build.m"
{
#line 520 "term_constr_build.m"
  {
#line 520 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 520 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Context_12;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;
#line 522 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_28_28;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30;
#line 522 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31;

#line 521 "term_constr_build.m"
    {
#line 521 "term_constr_build.m"
      transform_hlds__term_constr_build__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_constr_build__GoalInfo_9);
    }
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 11)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 12)));
#line 522 "term_constr_build.m"
    transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 13)));
#line 522 "term_constr_build.m"
    {
#line 522 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_constr_build__CalleePPId_7)), transform_hlds__term_constr_build__V_15_15);
    }
#line 525 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 523 "term_constr_build.m"
      {
#line 523 "term_constr_build.m"
        transform_hlds__term_constr_build__build_recursive_call_6_p_0(transform_hlds__term_constr_build__CalleePPId_7, transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__Context_12, transform_hlds__term_constr_build__AbstractGoal_10, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, transform_hlds__term_constr_build__STATE_VARIABLE_Info_14);
#line 523 "term_constr_build.m"
        return;
      }
#line 525 "term_constr_build.m"
    else
#line 526 "term_constr_build.m"
      {
#line 526 "term_constr_build.m"
        transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(transform_hlds__term_constr_build__CalleePPId_7, transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__Context_12, transform_hlds__term_constr_build__AbstractGoal_10, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, transform_hlds__term_constr_build__STATE_VARIABLE_Info_14);
#line 526 "term_constr_build.m"
        return;
      }
#line 520 "term_constr_build.m"
  }
#line 516 "term_constr_build.m"
}

#line 507 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
#line 507 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 507 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 507 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 507 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 507 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4)
#line 507 "term_constr_build.m"
{
#line 507 "term_constr_build.m"
  {
#line 507 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 507 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv1_AbstractGoal_6;
#line 507 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Info_17;

#line 507 "term_constr_build.m"
    {
#line 507 "term_constr_build.m"
      transform_hlds__term_constr_build__build_abstract_goal_4_p_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), &transform_hlds__term_constr_build__conv1_AbstractGoal_6, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3), &transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Info_17);
    }
#line 507 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv1_AbstractGoal_6));
#line 507 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Info_17));
#line 507 "term_constr_build.m"
  }
#line 507 "term_constr_build.m"
}

#line 503 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
#line 503 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Conjuncts_5,
#line 503 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 503 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_10,
#line 503 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_11)
#line 503 "term_constr_build.m"
{
#line 506 "term_constr_build.m"
  {
#line 506 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 506 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoals0_8;
#line 506 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoals_9;
#line 507 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv2_STATE_VARIABLE_Info_11;

#line 507 "term_constr_build.m"
    {
#line 507 "term_constr_build.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[7], transform_hlds__term_constr_build__Conjuncts_5, &transform_hlds__term_constr_build__AbstractGoals0_8, ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_10)), &transform_hlds__term_constr_build__conv2_STATE_VARIABLE_Info_11);
    }
#line 507 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_11 = ((MR_Word) transform_hlds__term_constr_build__conv2_STATE_VARIABLE_Info_11);
#line 508 "term_constr_build.m"
    {
#line 508 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractGoals_9 = transform_hlds__term_constr_data__simplify_conjuncts_1_f_0(transform_hlds__term_constr_build__AbstractGoals0_8);
    }
#line 509 "term_constr_build.m"
    {
#line 509 "term_constr_build.m"
      MR_Word base;
#line 509 "term_constr_build.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 509 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 509 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractGoals_9));
#line 509 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "term_constr_build.m"
    }
#line 506 "term_constr_build.m"
  }
#line 503 "term_constr_build.m"
}

#line 461 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
#line 461 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 461 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 461 "term_constr_build.m"
{
#line 461 "term_constr_build.m"
  {
#line 461 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 461 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 461 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__2_71;

#line 461 "term_constr_build.m"
    {
#line 461 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_HeadVar__2_71 = transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__461__1_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 461 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__2_71));
#line 461 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 461 "term_constr_build.m"
  }
#line 461 "term_constr_build.m"
}

#line 392 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
#line 392 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalExpr_6,
#line 392 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_7,
#line 392 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 392 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61,
#line 392 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_62)
#line 392 "term_constr_build.m"
{
#line 398 "term_constr_build.m"
  {
#line 398 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 398 "term_constr_build.m"
#line 398 "term_constr_build.m"
    switch (MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) {
#line 398 "term_constr_build.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 398 "term_constr_build.m"
      case (MR_Integer) 0:
#line 443 "term_constr_build.m"
        {
#line 443 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__SubGoal_112 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_constr_build__GoalExpr_6), (MR_Integer) 0);
#line 446 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_39_39;

#line 446 "term_constr_build.m"
          {
#line 446 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__SubGoal_112, &transform_hlds__term_constr_build__V_39_39, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
          }
#line 452 "term_constr_build.m"
          {
#line 452 "term_constr_build.m"
            *transform_hlds__term_constr_build__AbstractGoal_8 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(*transform_hlds__term_constr_build__STATE_VARIABLE_Info_62, transform_hlds__term_constr_build__SubGoal_112);
          }
#line 443 "term_constr_build.m"
        }
#line 398 "term_constr_build.m"
        break;
#line 398 "term_constr_build.m"
      case (MR_Integer) 1:
#line 440 "term_constr_build.m"
        {
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Unification_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)));
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));

#line 441 "term_constr_build.m"
          {
#line 441 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_unification_4_p_0(transform_hlds__term_constr_build__Unification_37, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 441 "term_constr_build.m"
            return;
          }
#line 440 "term_constr_build.m"
        }
#line 398 "term_constr_build.m"
        break;
#line 398 "term_constr_build.m"
      case (MR_Integer) 2:
#line 434 "term_constr_build.m"
        {
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__CallPredId_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)));
#line 434 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__CallProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__CallArgs_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__CallSizeArgs_33;
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_86_86;
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));
#line 434 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 5)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_115_115 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
#line 435 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 11)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 12)));
#line 435 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 13)));

#line 435 "term_constr_build.m"
          {
#line 435 "term_constr_build.m"
            transform_hlds__term_constr_build__CallSizeArgs_33 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_85_85, transform_hlds__term_constr_build__CallArgs_29);
          }
#line 437 "term_constr_build.m"
          {
#line 437 "term_constr_build.m"
            transform_hlds__term_constr_build__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_86_86, 0) = ((MR_Box) (transform_hlds__term_constr_build__CallPredId_27));
#line 437 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_86_86, 1) = ((MR_Box) (transform_hlds__term_constr_build__CallProcId_28));
#line 437 "term_constr_build.m"
          }
#line 437 "term_constr_build.m"
          {
#line 437 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_call_6_p_0(transform_hlds__term_constr_build__V_86_86, transform_hlds__term_constr_build__CallSizeArgs_33, transform_hlds__term_constr_build__GoalInfo_7, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 437 "term_constr_build.m"
            return;
          }
#line 434 "term_constr_build.m"
        }
#line 398 "term_constr_build.m"
        break;
#line 398 "term_constr_build.m"
      case (MR_Integer) 3:
#line 398 "term_constr_build.m"
#line 398 "term_constr_build.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)))) {
#line 398 "term_constr_build.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 398 "term_constr_build.m"
          case (MR_Integer) 0:
#line 482 "term_constr_build.m"
            {
#line 482 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_66_66;
#line 482 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Context_114;

#line 489 "term_constr_build.m"
              {
#line 489 "term_constr_build.m"
                transform_hlds__term_constr_build__Context_114 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_constr_build__GoalInfo_7);
              }
#line 490 "term_constr_build.m"
              {
#line 490 "term_constr_build.m"
                transform_hlds__term_constr_build__V_66_66 = libs__polyhedron__universe_0_f_0();
              }
#line 490 "term_constr_build.m"
              {
#line 490 "term_constr_build.m"
                MR_Word base;
#line 490 "term_constr_build.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 490 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_8 = base;
#line 490 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_66_66));
#line 490 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 490 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 490 "term_constr_build.m"
              }
#line 491 "term_constr_build.m"
              {
#line 491 "term_constr_build.m"
                transform_hlds__term_constr_build__info_update_ho_info_3_p_0(transform_hlds__term_constr_build__Context_114, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 491 "term_constr_build.m"
                return;
              }
#line 482 "term_constr_build.m"
            }
#line 398 "term_constr_build.m"
            break;
#line 398 "term_constr_build.m"
          case (MR_Integer) 1:
#line 455 "term_constr_build.m"
            {
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__TypeCtorInfo_160_160 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Attrs_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__PredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 455 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__ExtraArgs_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 5)));
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__ProgVars_49;
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__SizeVars_50;
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Constraints_51;
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Polyhedron_54;
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_72_72;
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_73_73;
#line 455 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_74_74;
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 6)));
#line 454 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 7)));
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_132_132;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_133_133;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_134_134;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_135_135;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_136_136;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_137_137;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_138_138;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_139_139;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_140_140;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_141_141;
#line 463 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__V_142_142;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_143_143;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_144_144;
#line 463 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_145_145;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_146_146;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_147_147;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_148_148;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_149_149;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_150_150;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_151_151;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_152_152;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_153_153;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_154_154;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_155_155;
#line 464 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__V_156_156;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_157_157;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_158_158;
#line 464 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_159_159;

#line 462 "term_constr_build.m"
              {
#line 462 "term_constr_build.m"
                transform_hlds__term_constr_build__V_72_72 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_build__TypeCtorInfo_160_160, transform_hlds__term_constr_build__Args_43, transform_hlds__term_constr_build__ExtraArgs_44);
              }
#line 462 "term_constr_build.m"
              {
#line 462 "term_constr_build.m"
                transform_hlds__term_constr_build__ProgVars_49 = mercury__list__map_2_f_0(transform_hlds__term_constr_build__TypeCtorInfo_160_160, (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[6], transform_hlds__term_constr_build__V_72_72);
              }
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_132_132 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 11)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 12)));
#line 463 "term_constr_build.m"
              transform_hlds__term_constr_build__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 13)));
#line 463 "term_constr_build.m"
              {
#line 463 "term_constr_build.m"
                transform_hlds__term_constr_build__SizeVars_50 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_73_73, transform_hlds__term_constr_build__ProgVars_49);
              }
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_146_146 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 11)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 12)));
#line 464 "term_constr_build.m"
              transform_hlds__term_constr_build__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 13)));
#line 464 "term_constr_build.m"
              {
#line 464 "term_constr_build.m"
                transform_hlds__term_constr_build__Constraints_51 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_build__SizeVars_50, transform_hlds__term_constr_build__V_74_74);
              }
#line 467 "term_constr_build.m"
              {
#line 467 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_77_77;

#line 467 "term_constr_build.m"
                {
#line 467 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_77_77 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_constr_build__Attrs_40);
                }
#line 467 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_77_77 == (MR_Integer) 0);
#line 467 "term_constr_build.m"
              }
#line 468 "term_constr_build.m"
              if (!(transform_hlds__term_constr_build__succeeded))
#line 469 "term_constr_build.m"
                {
#line 469 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_75_75;
#line 469 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_76_76;

#line 469 "term_constr_build.m"
                  {
#line 469 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_75_75 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_constr_build__Attrs_40);
                  }
#line 469 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_75_75 == (MR_Integer) 2);
#line 469 "term_constr_build.m"
                  if (transform_hlds__term_constr_build__succeeded)
#line 469 "term_constr_build.m"
                    {
#line 470 "term_constr_build.m"
                      {
#line 470 "term_constr_build.m"
                        transform_hlds__term_constr_build__V_76_76 = parse_tree__prog_data__get_may_call_mercury_1_f_0(transform_hlds__term_constr_build__Attrs_40);
                      }
#line 470 "term_constr_build.m"
                      transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_76_76 == (MR_Integer) 1);
#line 469 "term_constr_build.m"
                    }
#line 469 "term_constr_build.m"
                }
#line 474 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 474 "term_constr_build.m"
                *transform_hlds__term_constr_build__STATE_VARIABLE_Info_62 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61;
#line 474 "term_constr_build.m"
              else
#line 475 "term_constr_build.m"
                {
#line 475 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__Context_52;
#line 475 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__Error_53;
#line 475 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_78_78;
#line 475 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_79_79;

#line 475 "term_constr_build.m"
                  {
#line 475 "term_constr_build.m"
                    transform_hlds__term_constr_build__Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_constr_build__GoalInfo_7);
                  }
#line 476 "term_constr_build.m"
                  {
#line 476 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_79_79, 0) = ((MR_Box) (transform_hlds__term_constr_build__PredId_41));
#line 476 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_79_79, 1) = ((MR_Box) (transform_hlds__term_constr_build__ProcId_42));
#line 476 "term_constr_build.m"
                  }
#line 476 "term_constr_build.m"
                  {
#line 476 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "term_constr_build.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__V_78_78, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_79_79));
#line 476 "term_constr_build.m"
                  }
#line 476 "term_constr_build.m"
                  {
#line 476 "term_constr_build.m"
                    transform_hlds__term_constr_build__Error_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_53, 0) = ((MR_Box) (transform_hlds__term_constr_build__Context_52));
#line 476 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_53, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_78_78));
#line 476 "term_constr_build.m"
                  }
#line 477 "term_constr_build.m"
                  {
#line 477 "term_constr_build.m"
                    transform_hlds__term_constr_build__info_update_errors_3_p_0(transform_hlds__term_constr_build__Error_53, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
                  }
#line 475 "term_constr_build.m"
                }
#line 479 "term_constr_build.m"
              {
#line 479 "term_constr_build.m"
                transform_hlds__term_constr_build__Polyhedron_54 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_51);
              }
#line 480 "term_constr_build.m"
              {
#line 480 "term_constr_build.m"
                MR_Word base;
#line 480 "term_constr_build.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 480 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_8 = base;
#line 480 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_54));
#line 480 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "term_constr_build.m"
              }
#line 455 "term_constr_build.m"
            }
#line 398 "term_constr_build.m"
            break;
#line 398 "term_constr_build.m"
          case (MR_Integer) 2:
#line 398 "term_constr_build.m"
            {
#line 398 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 398 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));

#line 401 "term_constr_build.m"
              {
#line 401 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_conj_4_p_0(transform_hlds__term_constr_build__Goals_11, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 401 "term_constr_build.m"
                return;
              }
#line 398 "term_constr_build.m"
            }
#line 398 "term_constr_build.m"
            break;
#line 398 "term_constr_build.m"
          case (MR_Integer) 3:
#line 403 "term_constr_build.m"
            {
#line 403 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_108_108;
#line 403 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Goals_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));

#line 404 "term_constr_build.m"
              {
#line 404 "term_constr_build.m"
                transform_hlds__term_constr_build__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_108_108, 0) = ((MR_Box) (transform_hlds__term_constr_build__Goals_111));
#line 404 "term_constr_build.m"
              }
#line 404 "term_constr_build.m"
              {
#line 404 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_disj_4_p_0(transform_hlds__term_constr_build__V_108_108, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 404 "term_constr_build.m"
                return;
              }
#line 403 "term_constr_build.m"
            }
#line 398 "term_constr_build.m"
            break;
#line 398 "term_constr_build.m"
          case (MR_Integer) 4:
#line 406 "term_constr_build.m"
            {
#line 406 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__SwitchVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 406 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 406 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_106_106;
#line 406 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));

#line 407 "term_constr_build.m"
              {
#line 407 "term_constr_build.m"
                transform_hlds__term_constr_build__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_106_106, 0) = ((MR_Box) (transform_hlds__term_constr_build__SwitchVar_12));
#line 407 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_106_106, 1) = ((MR_Box) (transform_hlds__term_constr_build__Cases_14));
#line 407 "term_constr_build.m"
              }
#line 407 "term_constr_build.m"
              {
#line 407 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_disj_4_p_0(transform_hlds__term_constr_build__V_106_106, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 407 "term_constr_build.m"
                return;
              }
#line 406 "term_constr_build.m"
            }
#line 398 "term_constr_build.m"
            break;
#line 398 "term_constr_build.m"
          case (MR_Integer) 5:
#line 426 "term_constr_build.m"
            {
#line 426 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 426 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__SubGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 430 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__TermVar_26;
#line 427 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_88_88;

#line 427 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_build__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 427 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 427 "term_constr_build.m"
                {
#line 427 "term_constr_build.m"
                  transform_hlds__term_constr_build__TermVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Reason_24, (MR_Integer) 1)));
#line 427 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Reason_24, (MR_Integer) 2)));
#line 427 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_88_88 == (MR_Integer) 1);
#line 427 "term_constr_build.m"
                }
#line 430 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 428 "term_constr_build.m"
                {
#line 428 "term_constr_build.m"
                  transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(transform_hlds__term_constr_build__TermVar_26, transform_hlds__term_constr_build__SubGoal_25, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 428 "term_constr_build.m"
                  return;
                }
#line 430 "term_constr_build.m"
              else
#line 431 "term_constr_build.m"
                {
#line 431 "term_constr_build.m"
                  transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__SubGoal_25, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
#line 431 "term_constr_build.m"
                  return;
                }
#line 426 "term_constr_build.m"
            }
#line 398 "term_constr_build.m"
            break;
#line 398 "term_constr_build.m"
          case (MR_Integer) 6:
#line 409 "term_constr_build.m"
            {
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Then_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Else_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__AbstractSuccessGoal_19;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__CondFail_20;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__AbstractElse_21;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__AbstractFailureGoal_22;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__AbstractDisjuncts_23;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_91_91;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_93_93;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_96_96;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_97_97;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_101_101;
#line 409 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));

#line 412 "term_constr_build.m"
              {
#line 412 "term_constr_build.m"
                transform_hlds__term_constr_build__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_93_93, 0) = ((MR_Box) (transform_hlds__term_constr_build__Then_17));
#line 412 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "term_constr_build.m"
              }
#line 412 "term_constr_build.m"
              {
#line 412 "term_constr_build.m"
                transform_hlds__term_constr_build__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_91_91, 0) = ((MR_Box) (transform_hlds__term_constr_build__Cond_16));
#line 412 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_91_91, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_93_93));
#line 412 "term_constr_build.m"
              }
#line 412 "term_constr_build.m"
              {
#line 412 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_conj_4_p_0(transform_hlds__term_constr_build__V_91_91, &transform_hlds__term_constr_build__AbstractSuccessGoal_19, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92);
              }
#line 417 "term_constr_build.m"
              {
#line 417 "term_constr_build.m"
                transform_hlds__term_constr_build__CondFail_20 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92, transform_hlds__term_constr_build__Cond_16);
              }
#line 421 "term_constr_build.m"
              {
#line 421 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Else_18, &transform_hlds__term_constr_build__AbstractElse_21, transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
              }
#line 422 "term_constr_build.m"
              {
#line 422 "term_constr_build.m"
                transform_hlds__term_constr_build__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_97_97, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractElse_21));
#line 422 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "term_constr_build.m"
              }
#line 422 "term_constr_build.m"
              {
#line 422 "term_constr_build.m"
                transform_hlds__term_constr_build__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_96_96, 0) = ((MR_Box) (transform_hlds__term_constr_build__CondFail_20));
#line 422 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_96_96, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_97_97));
#line 422 "term_constr_build.m"
              }
#line 422 "term_constr_build.m"
              {
#line 422 "term_constr_build.m"
                transform_hlds__term_constr_build__AbstractFailureGoal_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractFailureGoal_22, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_96_96));
#line 422 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractFailureGoal_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractFailureGoal_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "term_constr_build.m"
              }
#line 423 "term_constr_build.m"
              {
#line 423 "term_constr_build.m"
                transform_hlds__term_constr_build__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_101_101, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractFailureGoal_22));
#line 423 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "term_constr_build.m"
              }
#line 423 "term_constr_build.m"
              {
#line 423 "term_constr_build.m"
                transform_hlds__term_constr_build__AbstractDisjuncts_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractDisjuncts_23, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractSuccessGoal_19));
#line 423 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractDisjuncts_23, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_101_101));
#line 423 "term_constr_build.m"
              }
#line 424 "term_constr_build.m"
              {
#line 424 "term_constr_build.m"
                MR_Word base;
#line 424 "term_constr_build.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 424 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_8 = base;
#line 424 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractDisjuncts_23));
#line 424 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 2));
#line 424 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "term_constr_build.m"
              }
#line 409 "term_constr_build.m"
            }
#line 398 "term_constr_build.m"
            break;
#line 398 "term_constr_build.m"
          case (MR_Integer) 7:
#line 493 "term_constr_build.m"
            {
#line 495 "term_constr_build.m"
              {
#line 495 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_goal_2\'/5", (MR_String) "shorthand");
#line 495 "term_constr_build.m"
                return;
              }
#line 493 "term_constr_build.m"
            }
#line 398 "term_constr_build.m"
            break;
#line 398 "term_constr_build.m"
        }
#line 398 "term_constr_build.m"
        break;
#line 398 "term_constr_build.m"
    }
#line 398 "term_constr_build.m"
  }
#line 392 "term_constr_build.m"
}

#line 379 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
#line 379 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 379 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 379 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 379 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17)
#line 379 "term_constr_build.m"
{
#line 382 "term_constr_build.m"
  {
#line 382 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_12_41;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoal0_10;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Locals0_11;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonLocals0_12;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap_13;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Locals_14;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonLocals_15;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalInfo_36;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonLocals0_37;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__QuantVars_38;
#line 382 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1042 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalExpr_35;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28;
#line 386 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_29_29;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32;

#line 384 "term_constr_build.m"
    {
#line 384 "term_constr_build.m"
      transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(transform_hlds__term_constr_build__GoalExpr_8, transform_hlds__term_constr_build__GoalInfo_9, &transform_hlds__term_constr_build__AbstractGoal0_10, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);
    }
#line 1042 "term_constr_build.m"
    transform_hlds__term_constr_build__GoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 1042 "term_constr_build.m"
    transform_hlds__term_constr_build__GoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 1043 "term_constr_build.m"
    {
#line 1043 "term_constr_build.m"
      transform_hlds__term_constr_build__NonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__term_constr_build__GoalInfo_36);
    }
#line 1044 "term_constr_build.m"
    {
#line 1044 "term_constr_build.m"
      transform_hlds__term_constr_build__QuantVars_38 = hlds__quantification__free_goal_vars_1_f_0(transform_hlds__term_constr_build__Goal_5);
    }
#line 11333 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_12_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1046 "term_constr_build.m"
    {
#line 1046 "term_constr_build.m"
      transform_hlds__term_constr_build__V_40_40 = parse_tree__set_of_var__difference_2_f_0(transform_hlds__term_constr_build__TypeCtorInfo_12_41, transform_hlds__term_constr_build__QuantVars_38, transform_hlds__term_constr_build__NonLocals0_37);
    }
#line 1045 "term_constr_build.m"
    {
#line 1045 "term_constr_build.m"
      transform_hlds__term_constr_build__Locals0_11 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__term_constr_build__TypeCtorInfo_12_41, transform_hlds__term_constr_build__V_40_40);
    }
#line 1047 "term_constr_build.m"
    {
#line 1047 "term_constr_build.m"
      transform_hlds__term_constr_build__NonLocals0_12 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__term_constr_build__TypeCtorInfo_12_41, transform_hlds__term_constr_build__NonLocals0_37);
    }
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 1)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 2)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 3)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 4)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 5)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 6)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 7)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__SizeVarMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 8)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 9)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 10)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 11)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 12)));
#line 386 "term_constr_build.m"
    transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 13)));
#line 387 "term_constr_build.m"
    {
#line 387 "term_constr_build.m"
      transform_hlds__term_constr_build__Locals_14 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_13, transform_hlds__term_constr_build__Locals0_11);
    }
#line 388 "term_constr_build.m"
    {
#line 388 "term_constr_build.m"
      transform_hlds__term_constr_build__NonLocals_15 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_13, transform_hlds__term_constr_build__NonLocals0_12);
    }
#line 389 "term_constr_build.m"
    {
#line 389 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_6 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(transform_hlds__term_constr_build__AbstractGoal0_10, transform_hlds__term_constr_build__Locals_14, transform_hlds__term_constr_build__NonLocals_15);
    }
#line 382 "term_constr_build.m"
  }
#line 379 "term_constr_build.m"
}

#line 358 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
#line 358 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_4,
#line 358 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 358 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7)
#line 358 "term_constr_build.m"
{
#line 361 "term_constr_build.m"
  {
#line 361 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_9_9;
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_10_10 = (MR_Word) transform_hlds__term_constr_build__Context_4;
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 361 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
#line 361 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));

#line 362 "term_constr_build.m"
    {
#line 362 "term_constr_build.m"
      transform_hlds__term_constr_build__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_10_10));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_11_11));
#line 362 "term_constr_build.m"
    }
#line 362 "term_constr_build.m"
    {
#line 362 "term_constr_build.m"
      MR_Word base;
#line 362 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 362 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_7 = base;
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__V_12_12 | ((transform_hlds__term_constr_build__V_13_13 << (MR_Integer) 2)))));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_14_14));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_15_15));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_17_17));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_18_18));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_19_19));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_20_20));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_21_21));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_22_22));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_24_24));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_9_9));
#line 362 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_25_25));
#line 362 "term_constr_build.m"
    }
#line 361 "term_constr_build.m"
  }
#line 358 "term_constr_build.m"
}

#line 351 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
#line 351 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RecType_4,
#line 351 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7,
#line 351 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_8)
#line 351 "term_constr_build.m"
{
#line 354 "term_constr_build.m"
  {
#line 354 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__UpdatedRecType_6;
#line 354 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 9)));
#line 355 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 10)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 11)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 12)));
#line 355 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 13)));
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_33_33;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_34_34;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_35_35;
#line 356 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_36_36;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_37_37;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39;
#line 356 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25;

#line 355 "term_constr_build.m"
    {
#line 355 "term_constr_build.m"
      transform_hlds__term_constr_build__UpdatedRecType_6 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(transform_hlds__term_constr_build__V_9_9, transform_hlds__term_constr_build__RecType_4);
    }
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 9)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 10)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 11)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 12)));
#line 356 "term_constr_build.m"
    transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 13)));
#line 356 "term_constr_build.m"
    {
#line 356 "term_constr_build.m"
      MR_Word base;
#line 356 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 356 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_8 = base;
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__UpdatedRecType_6 | ((transform_hlds__term_constr_build__V_26_26 << (MR_Integer) 2)))));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_27_27));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_28_28));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_29_29));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_30_30));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_31_31));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_32_32));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_33_33));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_34_34));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_35_35));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_36_36));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_37_37));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_38_38));
#line 356 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 356 "term_constr_build.m"
    }
#line 354 "term_constr_build.m"
  }
#line 351 "term_constr_build.m"
}

#line 345 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_errors_3_p_0(
#line 345 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Error_4,
#line 345 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 345 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7)
#line 345 "term_constr_build.m"
{
#line 348 "term_constr_build.m"
  {
#line 348 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_9_9;
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 348 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
#line 348 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));

#line 349 "term_constr_build.m"
    {
#line 349 "term_constr_build.m"
      transform_hlds__term_constr_build__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 0) = ((MR_Box) (transform_hlds__term_constr_build__Error_4));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_10_10));
#line 349 "term_constr_build.m"
    }
#line 349 "term_constr_build.m"
    {
#line 349 "term_constr_build.m"
      MR_Word base;
#line 349 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 349 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_7 = base;
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__V_11_11 | ((transform_hlds__term_constr_build__V_12_12 << (MR_Integer) 2)))));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_9_9));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_13_13));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_14_14));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_15_15));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_17_17));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_18_18));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_19_19));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_20_20));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_21_21));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_22_22));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 349 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_24_24));
#line 349 "term_constr_build.m"
    }
#line 348 "term_constr_build.m"
  }
#line 345 "term_constr_build.m"
}

#line 339 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
#line 339 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 339 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5)
#line 339 "term_constr_build.m"
{
#line 342 "term_constr_build.m"
  {
#line 342 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 342 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_7_7;
#line 342 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 10)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 8)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 9)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 11)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 12)));
#line 342 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 13)));

#line 343 "term_constr_build.m"
    transform_hlds__term_constr_build__V_7_7 = (transform_hlds__term_constr_build__V_8_8 + (MR_Integer) 1);
#line 343 "term_constr_build.m"
    {
#line 343 "term_constr_build.m"
      MR_Word base;
#line 343 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 343 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_5 = base;
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__V_10_10 | ((transform_hlds__term_constr_build__V_11_11 << (MR_Integer) 2)))));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_12_12));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_13_13));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_14_14));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_15_15));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_17_17));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_18_18));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_19_19));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_20_20));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_7_7));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_21_21));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_22_22));
#line 343 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 343 "term_constr_build.m"
    }
#line 342 "term_constr_build.m"
  }
#line 339 "term_constr_build.m"
}

#line 329 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__init_traversal_info_10_f_0(
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_12,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_13,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_14,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_15,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Types_16,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_17,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarMap_18,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_19,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__FailConstrs_20,
#line 329 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgSizeOnly_21)
#line 329 "term_constr_build.m"
{
#line 335 "term_constr_build.m"
  {
#line 335 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 335 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__11_11;

#line 335 "term_constr_build.m"
    {
#line 335 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 0) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 2)))));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 2) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_12));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 3) = ((MR_Box) (transform_hlds__term_constr_build__Norm_13));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 4) = ((MR_Box) (transform_hlds__term_constr_build__PPId_14));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 5) = ((MR_Box) (transform_hlds__term_constr_build__Context_15));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 6) = ((MR_Box) (transform_hlds__term_constr_build__Types_16));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 7) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_17));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 8) = ((MR_Box) (transform_hlds__term_constr_build__VarMap_18));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 9) = ((MR_Box) (transform_hlds__term_constr_build__SCC_19));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 10) = ((MR_Box) ((MR_Integer) 0));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 11) = ((MR_Box) (transform_hlds__term_constr_build__FailConstrs_20));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 12) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 13) = ((MR_Box) (transform_hlds__term_constr_build__ArgSizeOnly_21));
#line 335 "term_constr_build.m"
    }
#line 335 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__11_11;
#line 335 "term_constr_build.m"
  }
#line 329 "term_constr_build.m"
}

#line 226 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0_1(
#line 226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 226 "term_constr_build.m"
{
#line 226 "term_constr_build.m"
  {
#line 226 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_3;
#line 226 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 226 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__5_64;

#line 226 "term_constr_build.m"
    {
#line 226 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_HeadVar__5_64 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__226__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 226 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__5_64));
#line 226 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_3;
#line 226 "term_constr_build.m"
  }
#line 226 "term_constr_build.m"
}

#line 184 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0(
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__EntryProcs_12,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Options_13,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_14,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_15,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_16,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_46,
#line 184 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_47,
#line 184 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_0_48,
#line 184 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_49)
#line 184 "term_constr_build.m"
{
#line 190 "term_constr_build.m"
  {
#line 190 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredInfo_21;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcInfo_22;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Context_23;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__VarTypes_24;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadProgVars_25;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ArgModes0_26;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Goal0_27;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Goal_28;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap_29;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Zeros_30;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Info0_31;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractBody0_32;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Info_33;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__IntermodStatus_34;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadSizeVars_35;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractBody_36;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ChooseArg_37;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Inputs_42;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__IsEntryPoint_43;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractProc_44;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ThisProcInfo_45;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_65_65;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_66_66;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_79_79;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_80_80;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_100_100;
#line 190 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_109_109;
#line 190 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_111_111;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_85_85;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_86_86;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_87_87;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_88_88;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_89_89;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_90_90;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_91_91;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_92_92;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_93_93;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_94_94;
#line 220 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_95_95;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_96_96;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_97_97;
#line 220 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_98_98;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_99_99;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_101_101;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_102_102;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_103_103;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_104_104;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_105_105;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_106_106;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_107_107;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_108_108;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_110_110;
#line 242 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_112_112;

#line 198 "term_constr_build.m"
    {
#line 198 "term_constr_build.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__PPId_16, &transform_hlds__term_constr_build__PredInfo_21, &transform_hlds__term_constr_build__ProcInfo_22);
    }
#line 199 "term_constr_build.m"
    {
#line 199 "term_constr_build.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_constr_build__PredInfo_21, &transform_hlds__term_constr_build__Context_23);
    }
#line 200 "term_constr_build.m"
    {
#line 200 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_constr_build__ProcInfo_22, &transform_hlds__term_constr_build__VarTypes_24);
    }
#line 201 "term_constr_build.m"
    {
#line 201 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_build__ProcInfo_22, &transform_hlds__term_constr_build__HeadProgVars_25);
    }
#line 202 "term_constr_build.m"
    {
#line 202 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_constr_build__ProcInfo_22, &transform_hlds__term_constr_build__ArgModes0_26);
    }
#line 203 "term_constr_build.m"
    {
#line 203 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_constr_build__ProcInfo_22, &transform_hlds__term_constr_build__Goal0_27);
    }
#line 208 "term_constr_build.m"
    {
#line 208 "term_constr_build.m"
      transform_hlds__term_constr_build__Goal_28 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_constr_build__Goal0_27);
    }
#line 212 "term_constr_build.m"
    {
#line 212 "term_constr_build.m"
      transform_hlds__term_constr_build__allocate_sizevars_5_p_0(transform_hlds__term_constr_build__HeadProgVars_25, transform_hlds__term_constr_build__Goal_28, &transform_hlds__term_constr_build__SizeVarMap_29, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_46, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_47);
    }
#line 213 "term_constr_build.m"
    {
#line 213 "term_constr_build.m"
      transform_hlds__term_constr_build__Zeros_30 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__SizeVarMap_29, transform_hlds__term_constr_build__VarTypes_24);
    }
#line 214 "term_constr_build.m"
    transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Options_13, (MR_Integer) 0)));
#line 214 "term_constr_build.m"
    transform_hlds__term_constr_build__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Options_13, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 214 "term_constr_build.m"
    transform_hlds__term_constr_build__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Options_13, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 214 "term_constr_build.m"
    {
#line 214 "term_constr_build.m"
      transform_hlds__term_constr_build__Info0_31 = transform_hlds__term_constr_build__init_traversal_info_10_f_0(transform_hlds__term_constr_build__ModuleInfo_15, transform_hlds__term_constr_build__V_59_59, transform_hlds__term_constr_build__PPId_16, transform_hlds__term_constr_build__Context_23, transform_hlds__term_constr_build__VarTypes_24, transform_hlds__term_constr_build__Zeros_30, transform_hlds__term_constr_build__SizeVarMap_29, transform_hlds__term_constr_build__SCC_14, transform_hlds__term_constr_build__V_79_79, transform_hlds__term_constr_build__V_80_80);
    }
#line 219 "term_constr_build.m"
    {
#line 219 "term_constr_build.m"
      transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Goal_28, &transform_hlds__term_constr_build__AbstractBody0_32, transform_hlds__term_constr_build__Info0_31, &transform_hlds__term_constr_build__Info_33);
    }
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_85_85 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__IntermodStatus_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 1)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 2)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 3)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 4)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 5)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 6)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 7)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 8)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 9)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 10)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 11)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 12)));
#line 220 "term_constr_build.m"
    transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 13)));
#line 221 "term_constr_build.m"
    {
#line 221 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadSizeVars_35 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_29, transform_hlds__term_constr_build__HeadProgVars_25);
    }
#line 222 "term_constr_build.m"
    {
#line 222 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractBody_36 = transform_hlds__term_constr_data__simplify_abstract_rep_1_f_0(transform_hlds__term_constr_build__AbstractBody0_32);
    }
#line 226 "term_constr_build.m"
    {
#line 226 "term_constr_build.m"
      transform_hlds__term_constr_build__ChooseArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_5[0]));
#line 226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0_1));
#line 226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 3) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_15));
#line 226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_37, 4) = ((MR_Box) (transform_hlds__term_constr_build__VarTypes_24));
#line 226 "term_constr_build.m"
    }
#line 237 "term_constr_build.m"
    {
#line 237 "term_constr_build.m"
      transform_hlds__term_constr_build__Inputs_42 = mercury__list__map_corresponding_3_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_constr_build__ChooseArg_37, transform_hlds__term_constr_build__HeadProgVars_25, transform_hlds__term_constr_build__ArgModes0_26);
    }
#line 241 "term_constr_build.m"
    {
#line 241 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_constr_build__PPId_16)), transform_hlds__term_constr_build__EntryProcs_12);
    }
#line 241 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 241 "term_constr_build.m"
      transform_hlds__term_constr_build__IsEntryPoint_43 = (MR_Integer) 1;
#line 241 "term_constr_build.m"
    else
#line 241 "term_constr_build.m"
      transform_hlds__term_constr_build__IsEntryPoint_43 = (MR_Integer) 0;
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_65_65 = (MR_Word) transform_hlds__term_constr_build__PPId_16;
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 1)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 2)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 3)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 4)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 5)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 6)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 7)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 8)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 9)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 10)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 11)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 12)));
#line 242 "term_constr_build.m"
    transform_hlds__term_constr_build__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_33, (MR_Integer) 13)));
#line 242 "term_constr_build.m"
    {
#line 242 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractProc_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_65_65));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 1) = ((MR_Box) (transform_hlds__term_constr_build__IsEntryPoint_43));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 2) = ((MR_Box) (transform_hlds__term_constr_build__Context_23));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 3) = ((MR_Box) (transform_hlds__term_constr_build__HeadSizeVars_35));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 4) = ((MR_Box) (transform_hlds__term_constr_build__Inputs_42));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 5) = ((MR_Box) (transform_hlds__term_constr_build__AbstractBody_36));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 6) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarMap_29));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 7) = ((MR_Box) (*transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_47));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 8) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_30));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_66_66));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_109_109));
#line 242 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_44, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_111_111));
#line 242 "term_constr_build.m"
    }
#line 246 "term_constr_build.m"
    {
#line 246 "term_constr_build.m"
      transform_hlds__term_constr_build__ThisProcInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 0) = ((MR_Box) (transform_hlds__term_constr_build__PPId_16));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 1) = ((MR_Box) (transform_hlds__term_constr_build__AbstractProc_44));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 2) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarMap_29));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 3) = ((MR_Box) (transform_hlds__term_constr_build__IntermodStatus_34));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_100_100));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_45, 5) = ((MR_Box) (transform_hlds__term_constr_build__HeadSizeVars_35));
#line 246 "term_constr_build.m"
    }
#line 249 "term_constr_build.m"
    {
#line 249 "term_constr_build.m"
      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0, ((MR_Box) (transform_hlds__term_constr_build__ThisProcInfo_45)), transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_0_48, transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_49);
#line 249 "term_constr_build.m"
      return;
    }
#line 190 "term_constr_build.m"
  }
#line 184 "term_constr_build.m"
}

#line 142 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_2(
#line 142 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 142 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 142 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 142 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 142 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 142 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5)
#line 142 "term_constr_build.m"
{
#line 142 "term_constr_build.m"
  {
#line 142 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv6_HeadVar__4_53;
#line 142 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv5_HeadVar__6_55;

#line 142 "term_constr_build.m"
    {
#line 142 "term_constr_build.m"
      transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__142__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv6_HeadVar__4_53, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_4), &transform_hlds__term_constr_build__conv5_HeadVar__6_55);
    }
#line 142 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv6_HeadVar__4_53));
#line 142 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_build__conv5_HeadVar__6_55));
#line 142 "term_constr_build.m"
  }
#line 142 "term_constr_build.m"
}

#line 138 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_1(
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 138 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 138 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5,
#line 138 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_6,
#line 138 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_7)
#line 138 "term_constr_build.m"
{
#line 138 "term_constr_build.m"
  {
#line 138 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 138 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv1_STATE_VARIABLE_SizeVarset_47;
#line 138 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_STATE_VARIABLE_AbstractInfo_49;

#line 138 "term_constr_build.m"
    {
#line 138 "term_constr_build.m"
      transform_hlds__term_constr_build__term_constr_build_abstract_proc_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv1_STATE_VARIABLE_SizeVarset_47, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_4), &transform_hlds__term_constr_build__conv0_STATE_VARIABLE_AbstractInfo_49);
    }
#line 138 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv1_STATE_VARIABLE_SizeVarset_47));
#line 138 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_build__conv0_STATE_VARIABLE_AbstractInfo_49));
#line 138 "term_constr_build.m"
  }
#line 138 "term_constr_build.m"
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
#line 134 "term_constr_build.m"
  {
#line 134 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 134 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__EntryProcs_15;
#line 134 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarset_16;
#line 134 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractSCC_17;
#line 134 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredTable0_18;
#line 134 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__RecordInfo_19;
#line 134 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredTable_21;
#line 134 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_43_43;
#line 134 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_44_44;
#line 137 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv4_SizeVarset_16;
#line 137 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv3_AbstractSCC_17;
#line 137 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv2_STATE_VARIABLE_IO_42;
#line 181 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv8_Errors_12;
#line 181 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv7_PredTable_21;

#line 135 "term_constr_build.m"
    {
#line 135 "term_constr_build.m"
      transform_hlds__dependency_graph__get_scc_entry_points_4_p_0(transform_hlds__term_constr_build__SCC_10, transform_hlds__term_constr_build__DepOrder_9, transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_39, &transform_hlds__term_constr_build__EntryProcs_15);
    }
#line 138 "term_constr_build.m"
    {
#line 138 "term_constr_build.m"
      transform_hlds__term_constr_build__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 138 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_3[0]));
#line 138 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_1));
#line 138 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 138 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 3) = ((MR_Box) (transform_hlds__term_constr_build__EntryProcs_15));
#line 138 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 4) = ((MR_Box) (transform_hlds__term_constr_build__Options_11));
#line 138 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 5) = ((MR_Box) (transform_hlds__term_constr_build__SCC_10));
#line 138 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_43_43, 6) = ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_39));
#line 138 "term_constr_build.m"
    }
#line 140 "term_constr_build.m"
    {
#line 140 "term_constr_build.m"
      transform_hlds__term_constr_build__V_44_44 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 137 "term_constr_build.m"
    {
#line 137 "term_constr_build.m"
      mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_constr_build__V_43_43, transform_hlds__term_constr_build__SCC_10, ((MR_Box) (transform_hlds__term_constr_build__V_44_44)), &transform_hlds__term_constr_build__conv4_SizeVarset_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_build__conv3_AbstractSCC_17, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_build__conv2_STATE_VARIABLE_IO_42);
    }
#line 137 "term_constr_build.m"
    transform_hlds__term_constr_build__SizeVarset_16 = ((MR_Word) transform_hlds__term_constr_build__conv4_SizeVarset_16);
#line 137 "term_constr_build.m"
    transform_hlds__term_constr_build__AbstractSCC_17 = ((MR_Word) transform_hlds__term_constr_build__conv3_AbstractSCC_17);
#line 141 "term_constr_build.m"
    {
#line 141 "term_constr_build.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_39, &transform_hlds__term_constr_build__PredTable0_18);
    }
#line 142 "term_constr_build.m"
    {
#line 142 "term_constr_build.m"
      transform_hlds__term_constr_build__RecordInfo_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 142 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_19, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[0]));
#line 142 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_19, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_8_p_0_2));
#line 142 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 142 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_19, 3) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarset_16));
#line 142 "term_constr_build.m"
    }
#line 181 "term_constr_build.m"
    {
#line 181 "term_constr_build.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2], (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[1], transform_hlds__term_constr_build__RecordInfo_19, transform_hlds__term_constr_build__AbstractSCC_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_build__conv8_Errors_12, ((MR_Box) (transform_hlds__term_constr_build__PredTable0_18)), &transform_hlds__term_constr_build__conv7_PredTable_21);
    }
#line 181 "term_constr_build.m"
    *transform_hlds__term_constr_build__Errors_12 = ((MR_Word) transform_hlds__term_constr_build__conv8_Errors_12);
#line 181 "term_constr_build.m"
    transform_hlds__term_constr_build__PredTable_21 = ((MR_Word) transform_hlds__term_constr_build__conv7_PredTable_21);
#line 182 "term_constr_build.m"
    {
#line 182 "term_constr_build.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_build__PredTable_21, transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_39, transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_40);
#line 182 "term_constr_build.m"
      return;
    }
#line 134 "term_constr_build.m"
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
#line 111 "term_constr_build.m"
  {
#line 111 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 111 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__4_4;

#line 111 "term_constr_build.m"
    {
#line 111 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_4, 0) = ((MR_Box) (transform_hlds__term_constr_build__Norm_5));
#line 111 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_4, 1) = ((MR_Box) ((transform_hlds__term_constr_build__Failure_6 | ((transform_hlds__term_constr_build__ArgSizeOnly_7 << (MR_Integer) 1)))));
#line 111 "term_constr_build.m"
    }
#line 111 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__4_4;
#line 111 "term_constr_build.m"
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
