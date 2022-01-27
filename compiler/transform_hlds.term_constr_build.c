/*
** Automatically generated from `term_constr_build.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "std_util.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1284 "term_constr_build.m"
struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s {
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__ModuleInfo_8;
#line 1284 "term_constr_build.m"
  MR_bool transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded;
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__Args_19;
#line 1286 "term_constr_build.m"
  jmp_buf transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__commit_0;
#line 1286 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__Arg_22;
#line 1287 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__conv0_Arg_22;
#line 1284 "term_constr_build.m"
};


#line 170 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 173 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 176 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0;

#line 179 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

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
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 221 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2];

#line 224 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0;

#line 227 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 230 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1];

#line 233 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1;

#line 236 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1];

#line 239 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1];

#line 242 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_disj_info_0[2];

#line 245 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2];

#line 248 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2];

#line 251 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3];

#line 254 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3];

#line 257 "transform_hlds.term_constr_build.c"
static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_term_build_options_0_0[3];

#line 260 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0;

#line 263 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1];

#line 266 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1];

#line 269 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1];

#line 272 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1];

#line 275 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0;

#line 278 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;

#line 281 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 284 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6];

#line 287 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6];

#line 290 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0;

#line 293 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1];

#line 296 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1];

#line 299 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1];

#line 302 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1];

#line 305 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 308 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 311 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 314 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0;

#line 317 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[15];

#line 320 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_tti_traversal_info_0_0[15];

#line 323 "transform_hlds.term_constr_build.c"
static const MR_DuArgLocn transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_locns_tti_traversal_info_0_0[15];

#line 326 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0;

#line 329 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1];

#line 332 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1];

#line 335 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1];

#line 338 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1];

#line 341 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
#line 344 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 346 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 349 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
#line 352 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 354 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 356 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 359 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
#line 362 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 364 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 367 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
#line 370 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 372 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 374 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 377 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
#line 380 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 382 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 385 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
#line 388 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 390 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 392 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 395 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
#line 398 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 400 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 403 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
#line 406 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 408 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 410 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3);

#line 1286 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_1(
#line 1286 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1287 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_3(
#line 1287 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1286 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_2(
#line 1286 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1286 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_4(
#line 1286 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg);

#line 1284 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0(
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_28,
#line 1284 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__LambdaHeadVar__2_29,
#line 1284 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__LambdaHeadVar__3_30);

#line 1231 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1231__1_1_p_0(
#line 1231 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__LambdaHeadVar__1_29);

#line 1199 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1199__1_3_p_0(
#line 1199 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsName_45,
#line 1199 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__ConsArity_46,
#line 1199 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_66);

#line 1197 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1197__1_2_p_0(
#line 1197 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_43,
#line 1197 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsTypeCtor_47);

#line 1159 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1159__1_2_p_0(
#line 1159 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_73,
#line 1159 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_178);

#line 940 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__940__1_2_p_0(
#line 940 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_49,
#line 940 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_128);

#line 831 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__831__1_4_p_0(
#line 831 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_45,
#line 831 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__2_46,
#line 831 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_47,
#line 831 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_48);

#line 467 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__467__1_1_f_0(
#line 467 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_70);

#line 230 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__230__1_4_f_0(
#line 230 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_13,
#line 230 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_21,
#line 230 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_57,
#line 230 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__2_58);

#line 170 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__143__1_6_p_0_1(
#line 170 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 170 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 143 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__143__1_6_p_0(
#line 143 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarset_13,
#line 143 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_45,
#line 143 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__2_46,
#line 143 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__LambdaHeadVar__3_47,
#line 143 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__4_48,
#line 143 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__LambdaHeadVar__5_49);

#line 170 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__170__1_1_f_0(
#line 170 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_62);

#line 278 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
#line 278 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 278 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 278 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3);

#line 278 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
#line 278 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 278 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2);

#line 123 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
#line 123 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 123 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 123 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3);

#line 123 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
#line 123 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 123 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2);

#line 640 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
#line 640 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 640 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 640 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3);

#line 640 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
#line 640 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 640 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2);

#line 1284 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1(
#line 1284 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1284 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1284 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 1284 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3);

#line 1272 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_9,
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Ctors_11,
#line 1272 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12);

#line 1260 "term_constr_build.m"
static MR_Integer MR_CALL 
transform_hlds__term_constr_build__lower_bound_4_f_0(
#line 1260 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_6,
#line 1260 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_7,
#line 1260 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_8,
#line 1260 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constructor_9);

#line 1248 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_3(
#line 1248 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1248 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1248 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 1231 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_2(
#line 1231 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1231 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1226 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_1(
#line 1226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1222 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0(
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_9,
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constructors_11,
#line 1222 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Polyhedron_12);

#line 1199 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4(
#line 1199 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1199 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1197 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
#line 1197 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg);

#line 1159 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
#line 1159 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1159 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1159 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
#line 1159 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1159 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 1146 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
#line 1146 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1146 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 1146 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6);

#line 1126 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
#line 1126 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1126 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5);

#line 1089 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
#line 1089 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 1089 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2,
#line 1089 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_3,
#line 1089 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4,
#line 1089 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_5);

#line 1070 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__allocate_sizevars_5_p_0(
#line 1070 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadProgVars_6,
#line 1070 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_7,
#line 1070 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__SizeVarMap_8,
#line 1070 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_11,
#line 1070 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_12);

#line 1020 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
#line 1020 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constraints_3);

#line 1009 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1(
#line 1009 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1009 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 987 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(
#line 987 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LeftProgVar_6,
#line 987 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RightProgVar_7,
#line 987 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_8,
#line 987 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 987 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);

#line 968 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
#line 968 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_1,
#line 968 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 968 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__3_3,
#line 968 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 968 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__5_5);

#line 957 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(
#line 957 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_6,
#line 957 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_9,
#line 957 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Args_10,
#line 957 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_11,
#line 957 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Modes_12);

#line 946 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarMap_7,
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_8,
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Coeff_9,
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13,
#line 946 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14);

#line 942 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4(
#line 942 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 942 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 940 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3(
#line 940 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 940 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 940 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2(
#line 940 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 940 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 932 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1(
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 932 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3);

#line 883 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_8,
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_9,
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgVars_10,
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Modes_11,
#line 883 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12,
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35,
#line 883 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_36);

#line 851 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_4_p_0(
#line 851 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Unification_5,
#line 851 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 851 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23,
#line 851 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);

#line 839 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
#line 839 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 839 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2,
#line 839 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_3);

#line 831 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
#line 831 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 831 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 831 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 831 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 831 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4);

#line 797 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3,
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5,
#line 797 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_6);

#line 768 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(
#line 768 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TermVar_6,
#line 768 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SubGoal_7,
#line 768 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 768 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24,
#line 768 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_25);

#line 744 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
#line 744 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 744 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchVar_2,
#line 744 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_3);

#line 688 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
#line 688 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchProgVar_1,
#line 688 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 688 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3,
#line 688 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_4,
#line 688 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5,
#line 688 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_6);

#line 667 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
#line 667 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 667 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2,
#line 667 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_3,
#line 667 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 667 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5);

#line 644 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
#line 644 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Type_5,
#line 644 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 644 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 644 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);

#line 565 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
#line 565 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 565 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 565 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 565 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 565 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34,
#line 565 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_35);

#line 540 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_recursive_call_6_p_0(
#line 540 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 540 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 540 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 540 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 540 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 540 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);

#line 523 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
#line 523 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 523 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 523 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_9,
#line 523 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 523 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13,
#line 523 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_14);

#line 514 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
#line 514 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 514 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 514 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 514 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 514 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4);

#line 510 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
#line 510 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Conjuncts_5,
#line 510 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 510 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_10,
#line 510 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_11);

#line 467 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
#line 467 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 467 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1);

#line 396 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
#line 396 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalExpr_6,
#line 396 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_7,
#line 396 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 396 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61,
#line 396 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);

#line 383 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
#line 383 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 383 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 383 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 383 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);

#line 362 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
#line 362 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_4,
#line 362 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 362 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7);

#line 355 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
#line 355 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RecType_4,
#line 355 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7,
#line 355 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_8);

#line 349 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__tti_info_add_error_3_p_0(
#line 349 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Error_4,
#line 349 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 349 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7);

#line 343 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
#line 343 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 343 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5);

#line 333 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__init_traversal_info_10_f_0(
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_12,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_13,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_14,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_15,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Types_16,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_17,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarMap_18,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_19,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__FailConstrs_20,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgSizeOnly_21);

#line 230 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0_1(
#line 230 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 230 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 230 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2);

#line 188 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0(
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__EntryProcs_10,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Options_11,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_12,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_13,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_14,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_43,
#line 188 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_44,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_0_45,
#line 188 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_46);

#line 143 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_6_p_0_2(
#line 143 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 143 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 143 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 143 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 143 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 143 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5);

#line 139 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_6_p_0_1(
#line 139 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 139 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 139 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 139 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 139 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 139 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5);


static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_1[12][2];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_3[1][12];

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
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
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
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_2[2]))
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[4]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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
    ((MR_Box) (transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__143__1_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_build_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_build_options_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0))
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
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)),
    ((MR_Box) (&transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0)),
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
    ((MR_Box) (&transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0))
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1605 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1613 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1621 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0
  }
};

#line 1629 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 1637 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1646 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1654 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1663 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1671 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1680 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1688 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_build__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1697 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1705 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1714 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__pair__ti_pair_2term__ti_var_1term__type_ctor_info_generic_0libs__rat__type_ctor_info_rat_0
  }
};

#line 1722 "transform_hlds.term_constr_build.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1730 "transform_hlds.term_constr_build.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_build____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1739 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1747 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1753 "transform_hlds.term_constr_build.c"
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

#line 1768 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1776 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_disj_info_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1781 "transform_hlds.term_constr_build.c"
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

#line 1796 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

#line 1801 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_disj_info_0_1[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1
};

#line 1806 "transform_hlds.term_constr_build.c"
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

#line 1820 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_disj_info_0[2] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_1,
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_disj_info_0_0
};

#line 1826 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_disj_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1832 "transform_hlds.term_constr_build.c"
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

#line 1849 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_build_options_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1856 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_build_options_0_0[3] = {
  (MR_String) "tbo_functor_info",
  (MR_String) "tbo_failure_constrs",
  (MR_String) "tbo_arg_size_only"
};

#line 1863 "transform_hlds.term_constr_build.c"
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

#line 1882 "transform_hlds.term_constr_build.c"
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

#line 1897 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0
};

#line 1902 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_build_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_build_options_0_0
  }
};

#line 1911 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_build_options_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_build_options_0_0
};

#line 1916 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_build_options_0[1] = {
  (MR_Integer) 0
};

#line 1921 "transform_hlds.term_constr_build.c"
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

#line 1938 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1947 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0
  }
};

#line 1955 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1963 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_term_scc_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1973 "transform_hlds.term_constr_build.c"
static const MR_ConstString transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_names_term_scc_info_0_0[6] = {
  (MR_String) "tsi_scc_ppid",
  (MR_String) "tsi_proc",
  (MR_String) "tsi_size_var_map",
  (MR_String) "tsi_intermod",
  (MR_String) "tsi_accum_errors",
  (MR_String) "tsi_non_zero_heads"
};

#line 1983 "transform_hlds.term_constr_build.c"
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

#line 1998 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0
};

#line 2003 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_term_scc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_term_scc_info_0_0
  }
};

#line 2012 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_term_scc_info_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_term_scc_info_0_0
};

#line 2017 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_term_scc_info_0[1] = {
  (MR_Integer) 0
};

#line 2022 "transform_hlds.term_constr_build.c"
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

#line 2039 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_constr_build__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2048 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_build__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 2056 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 2064 "transform_hlds.term_constr_build.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0
  }
};

#line 2072 "transform_hlds.term_constr_build.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_build__transform_hlds__term_constr_build__field_types_tti_traversal_info_0_0[15] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_main_types__transform_hlds__term_constr_main_types__type_ctor_info_intermod_status_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_build__list__ti_list_1transform_hlds__term_constr_errors__type_ctor_info_term2_error_0,
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

#line 2091 "transform_hlds.term_constr_build.c"
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

#line 2110 "transform_hlds.term_constr_build.c"
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

#line 2189 "transform_hlds.term_constr_build.c"
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

#line 2204 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0
};

#line 2209 "transform_hlds.term_constr_build.c"
static const MR_DuPtagLayout transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_ptag_ordered_tti_traversal_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_stag_ordered_tti_traversal_info_0_0
  }
};

#line 2218 "transform_hlds.term_constr_build.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_name_ordered_tti_traversal_info_0[1] = {
  &transform_hlds__term_constr_build__transform_hlds__term_constr_build__du_functor_desc_tti_traversal_info_0_0
};

#line 2223 "transform_hlds.term_constr_build.c"
static const MR_Integer transform_hlds__term_constr_build__transform_hlds__term_constr_build__functor_number_map_tti_traversal_info_0[1] = {
  (MR_Integer) 0
};

#line 2228 "transform_hlds.term_constr_build.c"
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

#line 2245 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0_10001(
#line 2248 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2250 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2252 "transform_hlds.term_constr_build.c"
{
#line 2254 "transform_hlds.term_constr_build.c"
  {
#line 2256 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2259 "transform_hlds.term_constr_build.c"
    {
#line 2261 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____disj_info_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2264 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2266 "transform_hlds.term_constr_build.c"
  }
#line 2268 "transform_hlds.term_constr_build.c"
}

#line 2271 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0_10001(
#line 2274 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2276 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2278 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2280 "transform_hlds.term_constr_build.c"
{
#line 2282 "transform_hlds.term_constr_build.c"
  {
#line 2284 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2287 "transform_hlds.term_constr_build.c"
    {
#line 2289 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____disj_info_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2292 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2294 "transform_hlds.term_constr_build.c"
  }
#line 2296 "transform_hlds.term_constr_build.c"
}

#line 2299 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0_10001(
#line 2302 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2304 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2306 "transform_hlds.term_constr_build.c"
{
#line 2308 "transform_hlds.term_constr_build.c"
  {
#line 2310 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2313 "transform_hlds.term_constr_build.c"
    {
#line 2315 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____term_build_options_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2318 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2320 "transform_hlds.term_constr_build.c"
  }
#line 2322 "transform_hlds.term_constr_build.c"
}

#line 2325 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0_10001(
#line 2328 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2330 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2332 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2334 "transform_hlds.term_constr_build.c"
{
#line 2336 "transform_hlds.term_constr_build.c"
  {
#line 2338 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2341 "transform_hlds.term_constr_build.c"
    {
#line 2343 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____term_build_options_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2346 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2348 "transform_hlds.term_constr_build.c"
  }
#line 2350 "transform_hlds.term_constr_build.c"
}

#line 2353 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0_10001(
#line 2356 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2358 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2360 "transform_hlds.term_constr_build.c"
{
#line 2362 "transform_hlds.term_constr_build.c"
  {
#line 2364 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2367 "transform_hlds.term_constr_build.c"
    {
#line 2369 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____term_scc_info_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2372 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2374 "transform_hlds.term_constr_build.c"
  }
#line 2376 "transform_hlds.term_constr_build.c"
}

#line 2379 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0_10001(
#line 2382 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2384 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2386 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2388 "transform_hlds.term_constr_build.c"
{
#line 2390 "transform_hlds.term_constr_build.c"
  {
#line 2392 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2395 "transform_hlds.term_constr_build.c"
    {
#line 2397 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____term_scc_info_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2400 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2402 "transform_hlds.term_constr_build.c"
  }
#line 2404 "transform_hlds.term_constr_build.c"
}

#line 2407 "transform_hlds.term_constr_build.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0_10001(
#line 2410 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 2412 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 2414 "transform_hlds.term_constr_build.c"
{
#line 2416 "transform_hlds.term_constr_build.c"
  {
#line 2418 "transform_hlds.term_constr_build.c"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 2421 "transform_hlds.term_constr_build.c"
    {
#line 2423 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 2426 "transform_hlds.term_constr_build.c"
    return transform_hlds__term_constr_build__succeeded;
#line 2428 "transform_hlds.term_constr_build.c"
  }
#line 2430 "transform_hlds.term_constr_build.c"
}

#line 2433 "transform_hlds.term_constr_build.c"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0_10001(
#line 2436 "transform_hlds.term_constr_build.c"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_1,
#line 2438 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 2440 "transform_hlds.term_constr_build.c"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3)
#line 2442 "transform_hlds.term_constr_build.c"
{
#line 2444 "transform_hlds.term_constr_build.c"
  {
#line 2446 "transform_hlds.term_constr_build.c"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__1_1;

#line 2449 "transform_hlds.term_constr_build.c"
    {
#line 2451 "transform_hlds.term_constr_build.c"
      transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(&transform_hlds__term_constr_build__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3));
    }
#line 2454 "transform_hlds.term_constr_build.c"
    *transform_hlds__term_constr_build__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__1_1));
#line 2456 "transform_hlds.term_constr_build.c"
  }
#line 2458 "transform_hlds.term_constr_build.c"
}

#line 1286 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_1(
#line 1286 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1286 "term_constr_build.m"
{
#line 1286 "term_constr_build.m"
  {
#line 1286 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1286 "term_constr_build.m"
    MR_builtin_longjmp((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__commit_0, 1);
#line 1286 "term_constr_build.m"
  }
#line 1286 "term_constr_build.m"
}

#line 1287 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_3(
#line 1287 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1287 "term_constr_build.m"
{
#line 1287 "term_constr_build.m"
  {
#line 1287 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1287 "term_constr_build.m"
    (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__Arg_22 = ((MR_Word) (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__conv0_Arg_22);
#line 1287 "term_constr_build.m"
    {
#line 1287 "term_constr_build.m"
      transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_2(transform_hlds__term_constr_build__env_ptr);
    }
#line 1287 "term_constr_build.m"
  }
#line 1287 "term_constr_build.m"
}

#line 1286 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_2(
#line 1286 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1286 "term_constr_build.m"
{
#line 1286 "term_constr_build.m"
  {
#line 1286 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1286 "term_constr_build.m"
    {
#line 1289 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__Arg_22, (MR_Integer) 1)));
#line 1289 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__Arg_22, (MR_Integer) 0)));
#line 1289 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__Arg_22, (MR_Integer) 2)));
#line 1289 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__Arg_22, (MR_Integer) 3)));

#line 1289 "term_constr_build.m"
      {
#line 1289 "term_constr_build.m"
        (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__ModuleInfo_8, transform_hlds__term_constr_build__V_31_31);
      }
#line 1288 "term_constr_build.m"
      (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded = !((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded);
#line 1288 "term_constr_build.m"
      if ((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded)
#line 1288 "term_constr_build.m"
        {
#line 1288 "term_constr_build.m"
          transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_1(transform_hlds__term_constr_build__env_ptr);
        }
#line 1286 "term_constr_build.m"
    }
#line 1286 "term_constr_build.m"
  }
#line 1286 "term_constr_build.m"
}

#line 1286 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_4(
#line 1286 "term_constr_build.m"
  void * transform_hlds__term_constr_build__env_ptr_arg)
#line 1286 "term_constr_build.m"
{
#line 1286 "term_constr_build.m"
  {
#line 1286 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s * transform_hlds__term_constr_build__env_ptr = (struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s *) transform_hlds__term_constr_build__env_ptr_arg;

#line 1286 "term_constr_build.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__commit_0) == 0)
#line 1286 "term_constr_build.m"
      {
#line 1286 "term_constr_build.m"
        {
#line 1287 "term_constr_build.m"
          {
#line 1287 "term_constr_build.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, &(transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__conv0_Arg_22, (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__Args_19, transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_3, transform_hlds__term_constr_build__env_ptr);
          }
#line 1286 "term_constr_build.m"
        }
#line 1286 "term_constr_build.m"
        (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded = MR_FALSE;
#line 1286 "term_constr_build.m"
      }
#line 1286 "term_constr_build.m"
    else
#line 1286 "term_constr_build.m"
      (transform_hlds__term_constr_build__env_ptr)->transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded = MR_TRUE;
#line 1286 "term_constr_build.m"
  }
#line 1286 "term_constr_build.m"
}

#line 1284 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0(
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1284 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_28,
#line 1284 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__LambdaHeadVar__2_29,
#line 1284 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__LambdaHeadVar__3_30)
#line 1284 "term_constr_build.m"
{
#line 1284 "term_constr_build.m"
  {
#line 1284 "term_constr_build.m"
    struct transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0_s transform_hlds__term_constr_build__env;

#line 1284 "term_constr_build.m"
    (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__ModuleInfo_8 = transform_hlds__term_constr_build__ModuleInfo_8;
#line 1284 "term_constr_build.m"
    {
#line 1284 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_28, (MR_Integer) 2)));
#line 1284 "term_constr_build.m"
      MR_Integer transform_hlds__term_constr_build__Arity_20;
#line 1284 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__ConsId_23;
#line 1284 "term_constr_build.m"
      MR_Integer transform_hlds__term_constr_build__Bound_24;
#line 1285 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_28, (MR_Integer) 0)));
#line 1285 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_28, (MR_Integer) 1)));
#line 1285 "term_constr_build.m"
      MR_Word transform_hlds__term_constr_build__V_21_21;

#line 1285 "term_constr_build.m"
      (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_28, (MR_Integer) 3)));
#line 1285 "term_constr_build.m"
      transform_hlds__term_constr_build__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_28, (MR_Integer) 4)));
#line 1285 "term_constr_build.m"
      transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_28, (MR_Integer) 5)));
#line 1286 "term_constr_build.m"
      {
#line 1286 "term_constr_build.m"
        transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_4(&transform_hlds__term_constr_build__env);
      }
#line 1286 "term_constr_build.m"
      (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded = !((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded);
#line 1284 "term_constr_build.m"
      if ((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded)
#line 1284 "term_constr_build.m"
        {
#line 1291 "term_constr_build.m"
          {
#line 1291 "term_constr_build.m"
            transform_hlds__term_constr_build__ConsId_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1291 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 1) = ((MR_Box) (transform_hlds__term_constr_build__SymName_18));
#line 1291 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 2) = ((MR_Box) (transform_hlds__term_constr_build__Arity_20));
#line 1291 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_23, 3) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_10));
#line 1291 "term_constr_build.m"
          }
#line 1292 "term_constr_build.m"
          {
#line 1292 "term_constr_build.m"
            transform_hlds__term_constr_build__Bound_24 = transform_hlds__term_norm__functor_lower_bound_4_f_0((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__ModuleInfo_8, transform_hlds__term_constr_build__Norm_7, transform_hlds__term_constr_build__TypeCtor_10, transform_hlds__term_constr_build__ConsId_23);
          }
#line 1293 "term_constr_build.m"
          (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded = (transform_hlds__term_constr_build__Bound_24 > transform_hlds__term_constr_build__LambdaHeadVar__2_29);
#line 1293 "term_constr_build.m"
          if ((transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded)
#line 1293 "term_constr_build.m"
            *transform_hlds__term_constr_build__LambdaHeadVar__3_30 = transform_hlds__term_constr_build__Bound_24;
#line 1293 "term_constr_build.m"
          else
#line 1293 "term_constr_build.m"
            *transform_hlds__term_constr_build__LambdaHeadVar__3_30 = transform_hlds__term_constr_build__LambdaHeadVar__2_29;
#line 1293 "term_constr_build.m"
          (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded = MR_TRUE;
#line 1284 "term_constr_build.m"
        }
#line 1284 "term_constr_build.m"
      return (transform_hlds__term_constr_build__env).transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0_env_0__succeeded;
#line 1284 "term_constr_build.m"
    }
#line 1284 "term_constr_build.m"
  }
#line 1284 "term_constr_build.m"
}

#line 1231 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1231__1_1_p_0(
#line 1231 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__LambdaHeadVar__1_29)
#line 1231 "term_constr_build.m"
{
#line 1231 "term_constr_build.m"
  {
#line 1231 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__LambdaHeadVar__1_29 == (MR_Integer) 0);

#line 1231 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1231 "term_constr_build.m"
  }
#line 1231 "term_constr_build.m"
}

#line 1199 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1199__1_3_p_0(
#line 1199 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsName_45,
#line 1199 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__ConsArity_46,
#line 1199 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_66)
#line 1199 "term_constr_build.m"
{
#line 1199 "term_constr_build.m"
  {
#line 1199 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1199 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SymName_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_66, (MR_Integer) 2)));
#line 1199 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__Arity_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_66, (MR_Integer) 4)));
#line 1200 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_66, (MR_Integer) 0)));
#line 1200 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_66, (MR_Integer) 1)));
#line 1200 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build___Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_66, (MR_Integer) 3)));
#line 1200 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_66, (MR_Integer) 5)));

#line 1202 "term_constr_build.m"
    {
#line 1202 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__term_constr_build__SymName_52, transform_hlds__term_constr_build__ConsName_45);
    }
#line 1202 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1203 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__Arity_54 == transform_hlds__term_constr_build__ConsArity_46);
#line 1201 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 1199 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1199 "term_constr_build.m"
  }
#line 1199 "term_constr_build.m"
}

#line 1197 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1197__1_2_p_0(
#line 1197 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_43,
#line 1197 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsTypeCtor_47)
#line 1197 "term_constr_build.m"
{
#line 1197 "term_constr_build.m"
  {
#line 1197 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 1197 "term_constr_build.m"
    {
#line 1197 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(transform_hlds__term_constr_build__TypeCtor_43, transform_hlds__term_constr_build__ConsTypeCtor_47);
    }
#line 1197 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1197 "term_constr_build.m"
  }
#line 1197 "term_constr_build.m"
}

#line 1159 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1159__1_2_p_0(
#line 1159 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_73,
#line 1159 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_178)
#line 1159 "term_constr_build.m"
{
#line 1159 "term_constr_build.m"
  {
#line 1159 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 1159 "term_constr_build.m"
    {
#line 1159 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__HeadVar__1_73, ((MR_Box) (transform_hlds__term_constr_build__HeadVar__2_178)));
    }
#line 1159 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1159 "term_constr_build.m"
  }
#line 1159 "term_constr_build.m"
}

#line 940 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__940__1_2_p_0(
#line 940 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_49,
#line 940 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_128)
#line 940 "term_constr_build.m"
{
#line 940 "term_constr_build.m"
  {
#line 940 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 940 "term_constr_build.m"
    {
#line 940 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__HeadVar__1_49, ((MR_Box) (transform_hlds__term_constr_build__HeadVar__2_128)));
    }
#line 940 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 940 "term_constr_build.m"
  }
#line 940 "term_constr_build.m"
}

#line 831 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__831__1_4_p_0(
#line 831 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_45,
#line 831 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__HeadVar__2_46,
#line 831 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_47,
#line 831 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__4_48)
#line 831 "term_constr_build.m"
{
#line 831 "term_constr_build.m"
  {
#line 831 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 831 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv0_HeadVar__2_46;

#line 831 "term_constr_build.m"
    {
#line 831 "term_constr_build.m"
      mercury__map__det_remove_4_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__term_constr_build__HeadVar__1_45)), &transform_hlds__term_constr_build__conv0_HeadVar__2_46, transform_hlds__term_constr_build__HeadVar__3_47, transform_hlds__term_constr_build__HeadVar__4_48);
    }
#line 831 "term_constr_build.m"
    *transform_hlds__term_constr_build__HeadVar__2_46 = ((MR_Integer) transform_hlds__term_constr_build__conv0_HeadVar__2_46);
#line 831 "term_constr_build.m"
  }
#line 831 "term_constr_build.m"
}

#line 467 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__467__1_1_f_0(
#line 467 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_70)
#line 467 "term_constr_build.m"
{
#line 467 "term_constr_build.m"
  {
#line 467 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 467 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__LambdaHeadVar__2_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_70, (MR_Integer) 0)));
#line 467 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_70, (MR_Integer) 1)));
#line 467 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_70, (MR_Integer) 2)));
#line 467 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_70, (MR_Integer) 3)));

#line 467 "term_constr_build.m"
    return transform_hlds__term_constr_build__LambdaHeadVar__2_71;
#line 467 "term_constr_build.m"
  }
#line 467 "term_constr_build.m"
}

#line 230 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__230__1_4_f_0(
#line 230 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_13,
#line 230 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_21,
#line 230 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_57,
#line 230 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__2_58)
#line 230 "term_constr_build.m"
{
#line 230 "term_constr_build.m"
  {
#line 230 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 230 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__LambdaHeadVar__3_59;
#line 230 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Type_38;

#line 231 "term_constr_build.m"
    {
#line 231 "term_constr_build.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__VarTypes_21, transform_hlds__term_constr_build__LambdaHeadVar__1_57, &transform_hlds__term_constr_build__Type_38);
    }
#line 233 "term_constr_build.m"
    {
#line 233 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_constr_build__ModuleInfo_13, transform_hlds__term_constr_build__Type_38);
    }
#line 233 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 233 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 234 "term_constr_build.m"
      {
#line 234 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_constr_build__ModuleInfo_13, transform_hlds__term_constr_build__LambdaHeadVar__2_58);
      }
#line 232 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 236 "term_constr_build.m"
      transform_hlds__term_constr_build__LambdaHeadVar__3_59 = (MR_Integer) 1;
#line 232 "term_constr_build.m"
    else
#line 238 "term_constr_build.m"
      transform_hlds__term_constr_build__LambdaHeadVar__3_59 = (MR_Integer) 0;
#line 230 "term_constr_build.m"
    return transform_hlds__term_constr_build__LambdaHeadVar__3_59;
#line 230 "term_constr_build.m"
  }
#line 230 "term_constr_build.m"
}

#line 170 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__143__1_6_p_0_1(
#line 170 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 170 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 170 "term_constr_build.m"
{
#line 170 "term_constr_build.m"
  {
#line 170 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 170 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 170 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv2_LambdaHeadVar__2_63;

#line 170 "term_constr_build.m"
    {
#line 170 "term_constr_build.m"
      transform_hlds__term_constr_build__conv2_LambdaHeadVar__2_63 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__170__1_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 170 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv2_LambdaHeadVar__2_63));
#line 170 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 170 "term_constr_build.m"
  }
#line 170 "term_constr_build.m"
}

#line 143 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__143__1_6_p_0(
#line 143 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarset_13,
#line 143 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_45,
#line 143 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__2_46,
#line 143 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__LambdaHeadVar__3_47,
#line 143 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__4_48,
#line 143 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__LambdaHeadVar__5_49)
#line 143 "term_constr_build.m"
{
#line 143 "term_constr_build.m"
  {
#line 143 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_109_109;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_110_110;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_112_112;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredId_19;
#line 143 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__ProcId_20;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AR0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_45, (MR_Integer) 1)));
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__VarMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_45, (MR_Integer) 2)));
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Status_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_45, (MR_Integer) 3)));
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcErrors_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_45, (MR_Integer) 4)));
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadSizeVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_45, (MR_Integer) 5)));
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AR_26;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredInfo0_27;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcTable0_28;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcInfo0_29;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcInfo_33;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcTable_34;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredInfo_35;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__1_45, (MR_Integer) 0)));
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_51_51;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_52_52;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_53_53;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_54_54;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_55_55;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_56_56;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_57_57;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_59_59;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Errors_66_66;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_77_77;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_78_78;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_79_79;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_80_80;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_81_81;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_82_82;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_83_83;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_85_85;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_86_86;
#line 154 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_87_87;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_88_88;
#line 154 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_84_84;
#line 155 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv0_PredInfo0_27;
#line 157 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv1_ProcInfo0_29;

#line 145 "term_constr_build.m"
    transform_hlds__term_constr_build__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_50_50, (MR_Integer) 0)));
#line 145 "term_constr_build.m"
    transform_hlds__term_constr_build__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_50_50, (MR_Integer) 1)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 0)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 1)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 2)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 3)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 4)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 5)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 6)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 7)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 8)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 9)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 10)));
#line 154 "term_constr_build.m"
    transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR0_21, (MR_Integer) 11)));
#line 154 "term_constr_build.m"
    {
#line 154 "term_constr_build.m"
      transform_hlds__term_constr_build__AR_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_77_77));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_78_78));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_79_79));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_80_80));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_81_81));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_82_82));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_83_83));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 7) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarset_13));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_85_85));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_86_86));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_87_87));
#line 154 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_88_88));
#line 154 "term_constr_build.m"
    }
#line 3138 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_109_109 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3140 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_110_110 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 155 "term_constr_build.m"
    {
#line 155 "term_constr_build.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_constr_build__TypeCtorInfo_109_109, transform_hlds__term_constr_build__TypeCtorInfo_110_110, transform_hlds__term_constr_build__LambdaHeadVar__4_48, ((MR_Box) (transform_hlds__term_constr_build__PredId_19)), &transform_hlds__term_constr_build__conv0_PredInfo0_27);
    }
#line 155 "term_constr_build.m"
    transform_hlds__term_constr_build__PredInfo0_27 = ((MR_Word) transform_hlds__term_constr_build__conv0_PredInfo0_27);
#line 156 "term_constr_build.m"
    {
#line 156 "term_constr_build.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_build__PredInfo0_27, &transform_hlds__term_constr_build__ProcTable0_28);
    }
#line 3154 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_112_112 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 157 "term_constr_build.m"
    {
#line 157 "term_constr_build.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_build__TypeCtorInfo_112_112, transform_hlds__term_constr_build__ProcTable0_28, transform_hlds__term_constr_build__ProcId_20, &transform_hlds__term_constr_build__conv1_ProcInfo0_29);
    }
#line 157 "term_constr_build.m"
    transform_hlds__term_constr_build__ProcInfo0_29 = ((MR_Word) transform_hlds__term_constr_build__conv1_ProcInfo0_29);
#line 159 "term_constr_build.m"
    {
#line 159 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_build__ProcInfo0_29, &transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_51_51);
    }
#line 160 "term_constr_build.m"
    {
#line 160 "term_constr_build.m"
      transform_hlds__term_constr_build__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 160 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_52_52, 0) = ((MR_Box) (transform_hlds__term_constr_build__Status_23));
#line 160 "term_constr_build.m"
    }
#line 160 "term_constr_build.m"
    {
#line 160 "term_constr_build.m"
      transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0(transform_hlds__term_constr_build__V_52_52, transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_51_51, &transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_53_53);
    }
#line 161 "term_constr_build.m"
    {
#line 161 "term_constr_build.m"
      transform_hlds__term_constr_build__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_54_54, 0) = ((MR_Box) (transform_hlds__term_constr_build__AR_26));
#line 161 "term_constr_build.m"
    }
#line 161 "term_constr_build.m"
    {
#line 161 "term_constr_build.m"
      transform_hlds__term_constr_main_types__term2_info_set_abstract_rep_3_p_0(transform_hlds__term_constr_build__V_54_54, transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_53_53, &transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_55_55);
    }
#line 162 "term_constr_build.m"
    {
#line 162 "term_constr_build.m"
      transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(transform_hlds__term_constr_build__VarMap_22, transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_55_55, &transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_56_56);
    }
#line 163 "term_constr_build.m"
    {
#line 163 "term_constr_build.m"
      transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(transform_hlds__term_constr_build__HeadSizeVars_25, transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_56_56, &transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_57_57);
    }
#line 167 "term_constr_build.m"
    {
#line 167 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_data__analysis_depends_on_ho_1_p_0(transform_hlds__term_constr_build__AR_26);
    }
#line 167 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 169 "term_constr_build.m"
      {
#line 169 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeCtorInfo_114_114;
#line 169 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__HorderErrors_31;
#line 169 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_58_58;
#line 169 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_60_60;
#line 169 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_65_65;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_89_89;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_90_90;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_91_91;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_92_92;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_93_93;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_94_94;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_95_95;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_96_96;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_97_97;
#line 170 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_98_98;
#line 170 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_99_99;

#line 168 "term_constr_build.m"
        {
#line 168 "term_constr_build.m"
          transform_hlds__term_constr_build__V_60_60 = libs__polyhedron__universe_0_f_0();
        }
#line 168 "term_constr_build.m"
        {
#line 168 "term_constr_build.m"
          transform_hlds__term_constr_build__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 168 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_58_58, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_60_60));
#line 168 "term_constr_build.m"
        }
#line 168 "term_constr_build.m"
        {
#line 168 "term_constr_build.m"
          transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_build__V_58_58, transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_57_57, &transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_59_59);
        }
#line 3264 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__TypeCtorInfo_114_114 = (MR_Word) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0;
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 0)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 1)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 2)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 3)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 4)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 5)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 6)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 7)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 8)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 9)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 10)));
#line 170 "term_constr_build.m"
        transform_hlds__term_constr_build__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AR_26, (MR_Integer) 11)));
#line 170 "term_constr_build.m"
        {
#line 170 "term_constr_build.m"
          transform_hlds__term_constr_build__HorderErrors_31 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ho_call_0, transform_hlds__term_constr_build__TypeCtorInfo_114_114, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[12], transform_hlds__term_constr_build__V_65_65);
        }
#line 174 "term_constr_build.m"
        {
#line 174 "term_constr_build.m"
          mercury__list__append_3_p_1(transform_hlds__term_constr_build__TypeCtorInfo_114_114, transform_hlds__term_constr_build__HorderErrors_31, transform_hlds__term_constr_build__LambdaHeadVar__2_46, &transform_hlds__term_constr_build__STATE_VARIABLE_Errors_66_66);
        }
#line 169 "term_constr_build.m"
      }
#line 167 "term_constr_build.m"
    else
#line 176 "term_constr_build.m"
      {
#line 176 "term_constr_build.m"
        transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_59_59 = transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_57_57;
#line 176 "term_constr_build.m"
        transform_hlds__term_constr_build__STATE_VARIABLE_Errors_66_66 = transform_hlds__term_constr_build__LambdaHeadVar__2_46;
#line 176 "term_constr_build.m"
      }
#line 178 "term_constr_build.m"
    {
#line 178 "term_constr_build.m"
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_build__STATE_VARIABLE_Term2Info_59_59, transform_hlds__term_constr_build__ProcInfo0_29, &transform_hlds__term_constr_build__ProcInfo_33);
    }
#line 180 "term_constr_build.m"
    {
#line 180 "term_constr_build.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_build__TypeCtorInfo_112_112, transform_hlds__term_constr_build__ProcId_20, ((MR_Box) (transform_hlds__term_constr_build__ProcInfo_33)), transform_hlds__term_constr_build__ProcTable0_28, &transform_hlds__term_constr_build__ProcTable_34);
    }
#line 181 "term_constr_build.m"
    {
#line 181 "term_constr_build.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_constr_build__ProcTable_34, transform_hlds__term_constr_build__PredInfo0_27, &transform_hlds__term_constr_build__PredInfo_35);
    }
#line 182 "term_constr_build.m"
    {
#line 182 "term_constr_build.m"
      mercury__map__det_update_4_p_0(transform_hlds__term_constr_build__TypeCtorInfo_109_109, transform_hlds__term_constr_build__TypeCtorInfo_110_110, ((MR_Box) (transform_hlds__term_constr_build__PredId_19)), ((MR_Box) (transform_hlds__term_constr_build__PredInfo_35)), transform_hlds__term_constr_build__LambdaHeadVar__4_48, transform_hlds__term_constr_build__LambdaHeadVar__5_49);
    }
#line 183 "term_constr_build.m"
    {
#line 183 "term_constr_build.m"
      mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_constr_errors__transform_hlds__term_constr_errors__type_ctor_info_term2_error_0, transform_hlds__term_constr_build__ProcErrors_24, transform_hlds__term_constr_build__STATE_VARIABLE_Errors_66_66, transform_hlds__term_constr_build__LambdaHeadVar__3_47);
    }
#line 143 "term_constr_build.m"
  }
#line 143 "term_constr_build.m"
}

#line 170 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_scc__170__1_1_f_0(
#line 170 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LambdaHeadVar__1_62)
#line 170 "term_constr_build.m"
{
#line 170 "term_constr_build.m"
  {
#line 170 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 170 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__LambdaHeadVar__2_63;
#line 170 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Context_71 = (MR_Word) transform_hlds__term_constr_build__LambdaHeadVar__1_62;

#line 172 "term_constr_build.m"
    {
#line 172 "term_constr_build.m"
      transform_hlds__term_constr_build__LambdaHeadVar__2_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__2_63, 0) = ((MR_Box) (transform_hlds__term_constr_build__Context_71));
#line 172 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__LambdaHeadVar__2_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 172 "term_constr_build.m"
    }
#line 170 "term_constr_build.m"
    return transform_hlds__term_constr_build__LambdaHeadVar__2_63;
#line 170 "term_constr_build.m"
  }
#line 170 "term_constr_build.m"
}

#line 278 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____tti_traversal_info_0_0(
#line 278 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 278 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 278 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 278 "term_constr_build.m"
{
#line 278 "term_constr_build.m"
  {
#line 278 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 278 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_48 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 278 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_49 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 278 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_48 == transform_hlds__term_constr_build__CastY_49);
#line 278 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 3399 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "term_constr_build.m"
    else
#line 278 "term_constr_build.m"
      {
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 6)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 7)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 8)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 9)));
#line 278 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 10)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 11)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 12)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 13)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 2)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 3)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 4)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 5)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 6)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 7)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 8)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 9)));
#line 278 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 10)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 11)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 12)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 13)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_34_34;
#line 278 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_65_65 = (MR_Integer) transform_hlds__term_constr_build__V_4_4;
#line 278 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_66_66 = (MR_Integer) transform_hlds__term_constr_build__V_19_19;

#line 278 "term_constr_build.m"
        {
#line 278 "term_constr_build.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_34_34, transform_hlds__term_constr_build__V_65_65, transform_hlds__term_constr_build__V_66_66);
        }
#line 3477 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_34_34 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_34_34;
#line 278 "term_constr_build.m"
        else
#line 278 "term_constr_build.m"
          {
#line 278 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_35_35;
#line 278 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_67_67 = (MR_Integer) transform_hlds__term_constr_build__V_5_5;
#line 278 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_68_68 = (MR_Integer) transform_hlds__term_constr_build__V_20_20;

#line 278 "term_constr_build.m"
            {
#line 278 "term_constr_build.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_35_35, transform_hlds__term_constr_build__V_67_67, transform_hlds__term_constr_build__V_68_68);
            }
#line 3501 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_35_35 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_35_35;
#line 278 "term_constr_build.m"
            else
#line 278 "term_constr_build.m"
              {
#line 278 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_36_36;

#line 278 "term_constr_build.m"
                {
#line 278 "term_constr_build.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2], &transform_hlds__term_constr_build__V_36_36, ((MR_Box) (transform_hlds__term_constr_build__V_6_6)), ((MR_Box) (transform_hlds__term_constr_build__V_21_21)));
                }
#line 3521 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_36_36 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_36_36;
#line 278 "term_constr_build.m"
                else
#line 278 "term_constr_build.m"
                  {
#line 278 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__V_37_37;

#line 278 "term_constr_build.m"
                    {
#line 278 "term_constr_build.m"
                      hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__term_constr_build__V_37_37, transform_hlds__term_constr_build__V_7_7, transform_hlds__term_constr_build__V_22_22);
                    }
#line 3541 "transform_hlds.term_constr_build.c"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_37_37 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_37_37;
#line 278 "term_constr_build.m"
                    else
#line 278 "term_constr_build.m"
                      {
#line 278 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__V_38_38;

#line 278 "term_constr_build.m"
                        {
#line 278 "term_constr_build.m"
                          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_constr_build__V_38_38, transform_hlds__term_constr_build__V_8_8, transform_hlds__term_constr_build__V_23_23);
                        }
#line 3561 "transform_hlds.term_constr_build.c"
                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_38_38 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_38_38;
#line 278 "term_constr_build.m"
                        else
#line 278 "term_constr_build.m"
                          {
#line 278 "term_constr_build.m"
                            MR_Word transform_hlds__term_constr_build__V_39_39;

#line 278 "term_constr_build.m"
                            {
#line 278 "term_constr_build.m"
                              hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_build__V_39_39, transform_hlds__term_constr_build__V_9_9, transform_hlds__term_constr_build__V_24_24);
                            }
#line 3581 "transform_hlds.term_constr_build.c"
                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_39_39 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                            if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_39_39;
#line 278 "term_constr_build.m"
                            else
#line 278 "term_constr_build.m"
                              {
#line 278 "term_constr_build.m"
                                MR_Word transform_hlds__term_constr_build__V_40_40;

#line 278 "term_constr_build.m"
                                {
#line 278 "term_constr_build.m"
                                  mercury__term____Compare____context_0_0(&transform_hlds__term_constr_build__V_40_40, transform_hlds__term_constr_build__V_10_10, transform_hlds__term_constr_build__V_25_25);
                                }
#line 3601 "transform_hlds.term_constr_build.c"
                                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_40_40 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                                if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_40_40;
#line 278 "term_constr_build.m"
                                else
#line 278 "term_constr_build.m"
                                  {
#line 278 "term_constr_build.m"
                                    MR_Word transform_hlds__term_constr_build__V_41_41;

#line 278 "term_constr_build.m"
                                    {
#line 278 "term_constr_build.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4], &transform_hlds__term_constr_build__V_41_41, ((MR_Box) (transform_hlds__term_constr_build__V_11_11)), ((MR_Box) (transform_hlds__term_constr_build__V_26_26)));
                                    }
#line 3621 "transform_hlds.term_constr_build.c"
                                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_41_41 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                                    if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_41_41;
#line 278 "term_constr_build.m"
                                    else
#line 278 "term_constr_build.m"
                                      {
#line 278 "term_constr_build.m"
                                        MR_Word transform_hlds__term_constr_build__V_42_42;

#line 278 "term_constr_build.m"
                                        {
#line 278 "term_constr_build.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[9], &transform_hlds__term_constr_build__V_42_42, ((MR_Box) (transform_hlds__term_constr_build__V_12_12)), ((MR_Box) (transform_hlds__term_constr_build__V_27_27)));
                                        }
#line 3641 "transform_hlds.term_constr_build.c"
                                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_42_42 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                                        if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_42_42;
#line 278 "term_constr_build.m"
                                        else
#line 278 "term_constr_build.m"
                                          {
#line 278 "term_constr_build.m"
                                            MR_Word transform_hlds__term_constr_build__V_43_43;

#line 278 "term_constr_build.m"
                                            {
#line 278 "term_constr_build.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[3], &transform_hlds__term_constr_build__V_43_43, ((MR_Box) (transform_hlds__term_constr_build__V_13_13)), ((MR_Box) (transform_hlds__term_constr_build__V_28_28)));
                                            }
#line 3661 "transform_hlds.term_constr_build.c"
                                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_43_43 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                                            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                                            if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_43_43;
#line 278 "term_constr_build.m"
                                            else
#line 278 "term_constr_build.m"
                                              {
#line 278 "term_constr_build.m"
                                                MR_Word transform_hlds__term_constr_build__V_44_44;

#line 278 "term_constr_build.m"
                                                {
#line 278 "term_constr_build.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[10], &transform_hlds__term_constr_build__V_44_44, ((MR_Box) (transform_hlds__term_constr_build__V_14_14)), ((MR_Box) (transform_hlds__term_constr_build__V_29_29)));
                                                }
#line 3681 "transform_hlds.term_constr_build.c"
                                                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_44_44 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                                                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                                                if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_44_44;
#line 278 "term_constr_build.m"
                                                else
#line 278 "term_constr_build.m"
                                                  {
#line 278 "term_constr_build.m"
                                                    MR_Word transform_hlds__term_constr_build__V_45_45;

#line 278 "term_constr_build.m"
                                                    {
#line 278 "term_constr_build.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_45_45, transform_hlds__term_constr_build__V_15_15, transform_hlds__term_constr_build__V_30_30);
                                                    }
#line 3701 "transform_hlds.term_constr_build.c"
                                                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_45_45 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                                                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                                                    if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_45_45;
#line 278 "term_constr_build.m"
                                                    else
#line 278 "term_constr_build.m"
                                                      {
#line 278 "term_constr_build.m"
                                                        MR_Word transform_hlds__term_constr_build__V_46_46;
#line 278 "term_constr_build.m"
                                                        MR_Integer transform_hlds__term_constr_build__V_69_69 = (MR_Integer) transform_hlds__term_constr_build__V_16_16;
#line 278 "term_constr_build.m"
                                                        MR_Integer transform_hlds__term_constr_build__V_70_70 = (MR_Integer) transform_hlds__term_constr_build__V_31_31;

#line 278 "term_constr_build.m"
                                                        {
#line 278 "term_constr_build.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_46_46, transform_hlds__term_constr_build__V_69_69, transform_hlds__term_constr_build__V_70_70);
                                                        }
#line 3725 "transform_hlds.term_constr_build.c"
                                                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_46_46 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                                                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                                                        if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_46_46;
#line 278 "term_constr_build.m"
                                                        else
#line 278 "term_constr_build.m"
                                                          {
#line 278 "term_constr_build.m"
                                                            MR_Word transform_hlds__term_constr_build__V_47_47;

#line 278 "term_constr_build.m"
                                                            {
#line 278 "term_constr_build.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[11], &transform_hlds__term_constr_build__V_47_47, ((MR_Box) (transform_hlds__term_constr_build__V_17_17)), ((MR_Box) (transform_hlds__term_constr_build__V_32_32)));
                                                            }
#line 3745 "transform_hlds.term_constr_build.c"
                                                            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_47_47 == (MR_Integer) 0);
#line 278 "term_constr_build.m"
                                                            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 278 "term_constr_build.m"
                                                            if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                                              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_47_47;
#line 278 "term_constr_build.m"
                                                            else
#line 278 "term_constr_build.m"
                                                              {
#line 278 "term_constr_build.m"
                                                                MR_Integer transform_hlds__term_constr_build__V_71_71 = (MR_Integer) transform_hlds__term_constr_build__V_18_18;
#line 278 "term_constr_build.m"
                                                                MR_Integer transform_hlds__term_constr_build__V_72_72 = (MR_Integer) transform_hlds__term_constr_build__V_33_33;

#line 278 "term_constr_build.m"
                                                                {
#line 278 "term_constr_build.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_build__HeadVar__1_1, transform_hlds__term_constr_build__V_71_71, transform_hlds__term_constr_build__V_72_72);
                                                                }
#line 278 "term_constr_build.m"
                                                              }
#line 278 "term_constr_build.m"
                                                          }
#line 278 "term_constr_build.m"
                                                      }
#line 278 "term_constr_build.m"
                                                  }
#line 278 "term_constr_build.m"
                                              }
#line 278 "term_constr_build.m"
                                          }
#line 278 "term_constr_build.m"
                                      }
#line 278 "term_constr_build.m"
                                  }
#line 278 "term_constr_build.m"
                              }
#line 278 "term_constr_build.m"
                          }
#line 278 "term_constr_build.m"
                      }
#line 278 "term_constr_build.m"
                  }
#line 278 "term_constr_build.m"
              }
#line 278 "term_constr_build.m"
          }
#line 278 "term_constr_build.m"
      }
#line 278 "term_constr_build.m"
  }
#line 278 "term_constr_build.m"
}

#line 278 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____tti_traversal_info_0_0(
#line 278 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 278 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 278 "term_constr_build.m"
{
#line 278 "term_constr_build.m"
  {
#line 278 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 278 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_33 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 278 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_34 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 278 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_33 == transform_hlds__term_constr_build__CastY_34);
#line 278 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 278 "term_constr_build.m"
    else
#line 278 "term_constr_build.m"
      {
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_35_35;
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_40_40;
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_41_41;
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_42_42;
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_43_43;
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_44_44;
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 2)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 3)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 4)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 5)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 6)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 7)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 8)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 9)));
#line 278 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 10)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 11)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 12)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 13)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 6)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 7)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 8)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 9)));
#line 278 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 10)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 11)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 12)));
#line 278 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 13)));

#line 3903 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_3_3 == transform_hlds__term_constr_build__V_18_18);
#line 278 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
          {
#line 3909 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_4_4 == transform_hlds__term_constr_build__V_19_19);
#line 278 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
              {
#line 3915 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_35_35 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2];
#line 3917 "transform_hlds.term_constr_build.c"
                {
#line 3919 "transform_hlds.term_constr_build.c"
                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_35_35, ((MR_Box) (transform_hlds__term_constr_build__V_5_5)), ((MR_Box) (transform_hlds__term_constr_build__V_20_20)));
                }
#line 278 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                  {
#line 3926 "transform_hlds.term_constr_build.c"
                    {
#line 3928 "transform_hlds.term_constr_build.c"
                      transform_hlds__term_constr_build__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__term_constr_build__V_6_6, transform_hlds__term_constr_build__V_21_21);
                    }
#line 278 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                      {
#line 3935 "transform_hlds.term_constr_build.c"
                        {
#line 3937 "transform_hlds.term_constr_build.c"
                          transform_hlds__term_constr_build__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_constr_build__V_7_7, transform_hlds__term_constr_build__V_22_22);
                        }
#line 278 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                          {
#line 3944 "transform_hlds.term_constr_build.c"
                            {
#line 3946 "transform_hlds.term_constr_build.c"
                              transform_hlds__term_constr_build__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_build__V_8_8, transform_hlds__term_constr_build__V_23_23);
                            }
#line 278 "term_constr_build.m"
                            if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                              {
#line 3953 "transform_hlds.term_constr_build.c"
                                {
#line 3955 "transform_hlds.term_constr_build.c"
                                  transform_hlds__term_constr_build__succeeded = mercury__term____Unify____context_0_0(transform_hlds__term_constr_build__V_9_9, transform_hlds__term_constr_build__V_24_24);
                                }
#line 278 "term_constr_build.m"
                                if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                  {
#line 3962 "transform_hlds.term_constr_build.c"
                                    transform_hlds__term_constr_build__TypeInfo_40_40 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[4];
#line 3964 "transform_hlds.term_constr_build.c"
                                    {
#line 3966 "transform_hlds.term_constr_build.c"
                                      transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_40_40, ((MR_Box) (transform_hlds__term_constr_build__V_10_10)), ((MR_Box) (transform_hlds__term_constr_build__V_25_25)));
                                    }
#line 278 "term_constr_build.m"
                                    if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                      {
#line 3973 "transform_hlds.term_constr_build.c"
                                        transform_hlds__term_constr_build__TypeInfo_41_41 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[9];
#line 3975 "transform_hlds.term_constr_build.c"
                                        {
#line 3977 "transform_hlds.term_constr_build.c"
                                          transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_41_41, ((MR_Box) (transform_hlds__term_constr_build__V_11_11)), ((MR_Box) (transform_hlds__term_constr_build__V_26_26)));
                                        }
#line 278 "term_constr_build.m"
                                        if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                          {
#line 3984 "transform_hlds.term_constr_build.c"
                                            transform_hlds__term_constr_build__TypeInfo_42_42 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[3];
#line 3986 "transform_hlds.term_constr_build.c"
                                            {
#line 3988 "transform_hlds.term_constr_build.c"
                                              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_42_42, ((MR_Box) (transform_hlds__term_constr_build__V_12_12)), ((MR_Box) (transform_hlds__term_constr_build__V_27_27)));
                                            }
#line 278 "term_constr_build.m"
                                            if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                              {
#line 3995 "transform_hlds.term_constr_build.c"
                                                transform_hlds__term_constr_build__TypeInfo_43_43 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[10];
#line 3997 "transform_hlds.term_constr_build.c"
                                                {
#line 3999 "transform_hlds.term_constr_build.c"
                                                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_43_43, ((MR_Box) (transform_hlds__term_constr_build__V_13_13)), ((MR_Box) (transform_hlds__term_constr_build__V_28_28)));
                                                }
#line 278 "term_constr_build.m"
                                                if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                                  {
#line 4006 "transform_hlds.term_constr_build.c"
                                                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_14_14 == transform_hlds__term_constr_build__V_29_29);
#line 278 "term_constr_build.m"
                                                    if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                                      {
#line 4012 "transform_hlds.term_constr_build.c"
                                                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_15_15 == transform_hlds__term_constr_build__V_30_30);
#line 278 "term_constr_build.m"
                                                        if (transform_hlds__term_constr_build__succeeded)
#line 278 "term_constr_build.m"
                                                          {
#line 4018 "transform_hlds.term_constr_build.c"
                                                            transform_hlds__term_constr_build__TypeInfo_44_44 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[11];
#line 4020 "transform_hlds.term_constr_build.c"
                                                            {
#line 4022 "transform_hlds.term_constr_build.c"
                                                              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_44_44, ((MR_Box) (transform_hlds__term_constr_build__V_16_16)), ((MR_Box) (transform_hlds__term_constr_build__V_31_31)));
                                                            }
#line 278 "term_constr_build.m"
                                                            if (transform_hlds__term_constr_build__succeeded)
#line 4027 "transform_hlds.term_constr_build.c"
                                                              transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_17_17 == transform_hlds__term_constr_build__V_32_32);
#line 278 "term_constr_build.m"
                                                          }
#line 278 "term_constr_build.m"
                                                      }
#line 278 "term_constr_build.m"
                                                  }
#line 278 "term_constr_build.m"
                                              }
#line 278 "term_constr_build.m"
                                          }
#line 278 "term_constr_build.m"
                                      }
#line 278 "term_constr_build.m"
                                  }
#line 278 "term_constr_build.m"
                              }
#line 278 "term_constr_build.m"
                          }
#line 278 "term_constr_build.m"
                      }
#line 278 "term_constr_build.m"
                  }
#line 278 "term_constr_build.m"
              }
#line 278 "term_constr_build.m"
          }
#line 278 "term_constr_build.m"
      }
#line 278 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 278 "term_constr_build.m"
  }
#line 278 "term_constr_build.m"
}

#line 123 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____term_scc_info_0_0(
#line 123 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 123 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 123 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 123 "term_constr_build.m"
{
#line 123 "term_constr_build.m"
  {
#line 123 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 123 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_21 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 123 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_22 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 123 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_21 == transform_hlds__term_constr_build__CastY_22);
#line 123 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 4088 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 123 "term_constr_build.m"
    else
#line 123 "term_constr_build.m"
      {
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 2)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 3)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 4)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 5)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16;

#line 123 "term_constr_build.m"
        {
#line 123 "term_constr_build.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_build__V_16_16, transform_hlds__term_constr_build__V_4_4, transform_hlds__term_constr_build__V_10_10);
        }
#line 4126 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_16_16 == (MR_Integer) 0);
#line 123 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 123 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_16_16;
#line 123 "term_constr_build.m"
        else
#line 123 "term_constr_build.m"
          {
#line 123 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_17_17;

#line 123 "term_constr_build.m"
            {
#line 123 "term_constr_build.m"
              transform_hlds__term_constr_data____Compare____abstract_proc_0_0(&transform_hlds__term_constr_build__V_17_17, transform_hlds__term_constr_build__V_5_5, transform_hlds__term_constr_build__V_11_11);
            }
#line 4146 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_17_17 == (MR_Integer) 0);
#line 123 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 123 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_17_17;
#line 123 "term_constr_build.m"
            else
#line 123 "term_constr_build.m"
              {
#line 123 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_18_18;

#line 123 "term_constr_build.m"
                {
#line 123 "term_constr_build.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_2[3], &transform_hlds__term_constr_build__V_18_18, ((MR_Box) (transform_hlds__term_constr_build__V_6_6)), ((MR_Box) (transform_hlds__term_constr_build__V_12_12)));
                }
#line 4166 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_18_18 == (MR_Integer) 0);
#line 123 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 123 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
                  *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_18_18;
#line 123 "term_constr_build.m"
                else
#line 123 "term_constr_build.m"
                  {
#line 123 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__V_19_19;
#line 123 "term_constr_build.m"
                    MR_Integer transform_hlds__term_constr_build__V_29_29 = (MR_Integer) transform_hlds__term_constr_build__V_7_7;
#line 123 "term_constr_build.m"
                    MR_Integer transform_hlds__term_constr_build__V_30_30 = (MR_Integer) transform_hlds__term_constr_build__V_13_13;

#line 123 "term_constr_build.m"
                    {
#line 123 "term_constr_build.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_19_19, transform_hlds__term_constr_build__V_29_29, transform_hlds__term_constr_build__V_30_30);
                    }
#line 4190 "transform_hlds.term_constr_build.c"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_19_19 == (MR_Integer) 0);
#line 123 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 123 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
                      *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_19_19;
#line 123 "term_constr_build.m"
                    else
#line 123 "term_constr_build.m"
                      {
#line 123 "term_constr_build.m"
                        MR_Word transform_hlds__term_constr_build__V_20_20;

#line 123 "term_constr_build.m"
                        {
#line 123 "term_constr_build.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2], &transform_hlds__term_constr_build__V_20_20, ((MR_Box) (transform_hlds__term_constr_build__V_8_8)), ((MR_Box) (transform_hlds__term_constr_build__V_14_14)));
                        }
#line 4210 "transform_hlds.term_constr_build.c"
                        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_20_20 == (MR_Integer) 0);
#line 123 "term_constr_build.m"
                        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 123 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
                          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_20_20;
#line 123 "term_constr_build.m"
                        else
#line 123 "term_constr_build.m"
                          {
#line 123 "term_constr_build.m"
                            {
#line 123 "term_constr_build.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[8], transform_hlds__term_constr_build__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_build__V_9_9)), ((MR_Box) (transform_hlds__term_constr_build__V_15_15)));
                            }
#line 123 "term_constr_build.m"
                          }
#line 123 "term_constr_build.m"
                      }
#line 123 "term_constr_build.m"
                  }
#line 123 "term_constr_build.m"
              }
#line 123 "term_constr_build.m"
          }
#line 123 "term_constr_build.m"
      }
#line 123 "term_constr_build.m"
  }
#line 123 "term_constr_build.m"
}

#line 123 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_scc_info_0_0(
#line 123 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 123 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 123 "term_constr_build.m"
{
#line 123 "term_constr_build.m"
  {
#line 123 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 123 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_15 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 123 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_16 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 123 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_15 == transform_hlds__term_constr_build__CastY_16);
#line 123 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 123 "term_constr_build.m"
    else
#line 123 "term_constr_build.m"
      {
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_19_19;
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_20_20;
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_21_21;
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 2)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 3)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 4)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 5)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 2)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 3)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 4)));
#line 123 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 5)));

#line 4303 "transform_hlds.term_constr_build.c"
        {
#line 4305 "transform_hlds.term_constr_build.c"
          transform_hlds__term_constr_build__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_build__V_3_3, transform_hlds__term_constr_build__V_9_9);
        }
#line 123 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
          {
#line 4312 "transform_hlds.term_constr_build.c"
            {
#line 4314 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_data____Unify____abstract_proc_0_0(transform_hlds__term_constr_build__V_4_4, transform_hlds__term_constr_build__V_10_10);
            }
#line 123 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
              {
#line 4321 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[3];
#line 4323 "transform_hlds.term_constr_build.c"
                {
#line 4325 "transform_hlds.term_constr_build.c"
                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_19_19, ((MR_Box) (transform_hlds__term_constr_build__V_5_5)), ((MR_Box) (transform_hlds__term_constr_build__V_11_11)));
                }
#line 123 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
                  {
#line 4332 "transform_hlds.term_constr_build.c"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_6_6 == transform_hlds__term_constr_build__V_12_12);
#line 123 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
                      {
#line 4338 "transform_hlds.term_constr_build.c"
                        transform_hlds__term_constr_build__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2];
#line 4340 "transform_hlds.term_constr_build.c"
                        {
#line 4342 "transform_hlds.term_constr_build.c"
                          transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_build__V_7_7)), ((MR_Box) (transform_hlds__term_constr_build__V_13_13)));
                        }
#line 123 "term_constr_build.m"
                        if (transform_hlds__term_constr_build__succeeded)
#line 123 "term_constr_build.m"
                          {
#line 4349 "transform_hlds.term_constr_build.c"
                            transform_hlds__term_constr_build__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[8];
#line 4351 "transform_hlds.term_constr_build.c"
                            {
#line 4353 "transform_hlds.term_constr_build.c"
                              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_build__V_8_8)), ((MR_Box) (transform_hlds__term_constr_build__V_14_14)));
                            }
#line 123 "term_constr_build.m"
                          }
#line 123 "term_constr_build.m"
                      }
#line 123 "term_constr_build.m"
                  }
#line 123 "term_constr_build.m"
              }
#line 123 "term_constr_build.m"
          }
#line 123 "term_constr_build.m"
      }
#line 123 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 123 "term_constr_build.m"
  }
#line 123 "term_constr_build.m"
}

#line 100 "term_constr_build.m"
void MR_CALL 
transform_hlds__term_constr_build____Compare____term_build_options_0_0(
#line 100 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 100 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 100 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 100 "term_constr_build.m"
{
#line 100 "term_constr_build.m"
  {
#line 100 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 100 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_12 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 100 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_13 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 100 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_12 == transform_hlds__term_constr_build__CastY_13);
#line 100 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 4399 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "term_constr_build.m"
    else
#line 100 "term_constr_build.m"
      {
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_10_10;

#line 100 "term_constr_build.m"
        {
#line 100 "term_constr_build.m"
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_constr_build__V_10_10, transform_hlds__term_constr_build__V_4_4, transform_hlds__term_constr_build__V_7_7);
        }
#line 4425 "transform_hlds.term_constr_build.c"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_10_10 == (MR_Integer) 0);
#line 100 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 100 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 100 "term_constr_build.m"
          *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_10_10;
#line 100 "term_constr_build.m"
        else
#line 100 "term_constr_build.m"
          {
#line 100 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_11_11;
#line 100 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_17_17 = (MR_Integer) transform_hlds__term_constr_build__V_5_5;
#line 100 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_18_18 = (MR_Integer) transform_hlds__term_constr_build__V_8_8;

#line 100 "term_constr_build.m"
            {
#line 100 "term_constr_build.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_build__V_11_11, transform_hlds__term_constr_build__V_17_17, transform_hlds__term_constr_build__V_18_18);
            }
#line 4449 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_11_11 == (MR_Integer) 0);
#line 100 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 100 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 100 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_11_11;
#line 100 "term_constr_build.m"
            else
#line 100 "term_constr_build.m"
              {
#line 100 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_19_19 = (MR_Integer) transform_hlds__term_constr_build__V_6_6;
#line 100 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_20_20 = (MR_Integer) transform_hlds__term_constr_build__V_9_9;

#line 100 "term_constr_build.m"
                {
#line 100 "term_constr_build.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_build__HeadVar__1_1, transform_hlds__term_constr_build__V_19_19, transform_hlds__term_constr_build__V_20_20);
                }
#line 100 "term_constr_build.m"
              }
#line 100 "term_constr_build.m"
          }
#line 100 "term_constr_build.m"
      }
#line 100 "term_constr_build.m"
  }
#line 100 "term_constr_build.m"
}

#line 100 "term_constr_build.m"
MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____term_build_options_0_0(
#line 100 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 100 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 100 "term_constr_build.m"
{
#line 100 "term_constr_build.m"
  {
#line 100 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 100 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_9 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 100 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_10 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 100 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_9 == transform_hlds__term_constr_build__CastY_10);
#line 100 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 100 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 100 "term_constr_build.m"
    else
#line 100 "term_constr_build.m"
      {
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 100 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4523 "transform_hlds.term_constr_build.c"
        {
#line 4525 "transform_hlds.term_constr_build.c"
          transform_hlds__term_constr_build__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_constr_build__V_3_3, transform_hlds__term_constr_build__V_6_6);
        }
#line 100 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 100 "term_constr_build.m"
          {
#line 4532 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_4_4 == transform_hlds__term_constr_build__V_7_7);
#line 100 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 4536 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_5_5 == transform_hlds__term_constr_build__V_8_8);
#line 100 "term_constr_build.m"
          }
#line 100 "term_constr_build.m"
      }
#line 100 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 100 "term_constr_build.m"
  }
#line 100 "term_constr_build.m"
}

#line 640 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build____Compare____disj_info_0_0(
#line 640 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__1_1,
#line 640 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 640 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3)
#line 640 "term_constr_build.m"
{
#line 640 "term_constr_build.m"
  {
#line 640 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 640 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_17 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;
#line 640 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_18 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__3_3;

#line 640 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_17 == transform_hlds__term_constr_build__CastY_18);
#line 640 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 4573 "transform_hlds.term_constr_build.c"
      *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 0;
#line 640 "term_constr_build.m"
    else
#line 640 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 640 "term_constr_build.m"
      {
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));

#line 640 "term_constr_build.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 640 "term_constr_build.m"
          {
#line 640 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));

#line 640 "term_constr_build.m"
            {
#line 640 "term_constr_build.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[6], transform_hlds__term_constr_build__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_build__V_22_22)), ((MR_Box) (transform_hlds__term_constr_build__V_16_16)));
            }
#line 640 "term_constr_build.m"
          }
#line 640 "term_constr_build.m"
        else
#line 4600 "transform_hlds.term_constr_build.c"
          *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 2;
#line 640 "term_constr_build.m"
      }
#line 640 "term_constr_build.m"
    else
#line 640 "term_constr_build.m"
      {
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));

#line 640 "term_constr_build.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4615 "transform_hlds.term_constr_build.c"
          *transform_hlds__term_constr_build__HeadVar__1_1 = (MR_Integer) 1;
#line 640 "term_constr_build.m"
        else
#line 640 "term_constr_build.m"
          {
#line 640 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 0)));
#line 640 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__3_3, (MR_Integer) 1)));
#line 640 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_8_8;

#line 640 "term_constr_build.m"
            {
#line 640 "term_constr_build.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], &transform_hlds__term_constr_build__V_8_8, ((MR_Box) (transform_hlds__term_constr_build__V_24_24)), ((MR_Box) (transform_hlds__term_constr_build__V_6_6)));
            }
#line 4633 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_8_8 == (MR_Integer) 0);
#line 640 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = !(transform_hlds__term_constr_build__succeeded);
#line 640 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 640 "term_constr_build.m"
              *transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__V_8_8;
#line 640 "term_constr_build.m"
            else
#line 640 "term_constr_build.m"
              {
#line 640 "term_constr_build.m"
                {
#line 640 "term_constr_build.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[7], transform_hlds__term_constr_build__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_build__V_23_23)), ((MR_Box) (transform_hlds__term_constr_build__V_7_7)));
                }
#line 640 "term_constr_build.m"
              }
#line 640 "term_constr_build.m"
          }
#line 640 "term_constr_build.m"
      }
#line 640 "term_constr_build.m"
  }
#line 640 "term_constr_build.m"
}

#line 640 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build____Unify____disj_info_0_0(
#line 640 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 640 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2)
#line 640 "term_constr_build.m"
{
#line 640 "term_constr_build.m"
  {
#line 640 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 640 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastX_9 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__1_1;
#line 640 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__CastY_10 = (MR_Integer) transform_hlds__term_constr_build__HeadVar__2_2;

#line 640 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__CastX_9 == transform_hlds__term_constr_build__CastY_10);
#line 640 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 640 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 640 "term_constr_build.m"
    else
#line 640 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 640 "term_constr_build.m"
      {
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_11_11;
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8;

#line 640 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 640 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 640 "term_constr_build.m"
          {
#line 640 "term_constr_build.m"
            transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 4706 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[6];
#line 4708 "transform_hlds.term_constr_build.c"
            {
#line 4710 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_constr_build__V_7_7)), ((MR_Box) (transform_hlds__term_constr_build__V_8_8)));
            }
#line 640 "term_constr_build.m"
          }
#line 640 "term_constr_build.m"
      }
#line 640 "term_constr_build.m"
    else
#line 640 "term_constr_build.m"
      {
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_12_12;
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeInfo_13_13;
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5;
#line 640 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6;

#line 640 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 640 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 640 "term_constr_build.m"
          {
#line 640 "term_constr_build.m"
            transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 640 "term_constr_build.m"
            transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 4744 "transform_hlds.term_constr_build.c"
            transform_hlds__term_constr_build__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3];
#line 4746 "transform_hlds.term_constr_build.c"
            {
#line 4748 "transform_hlds.term_constr_build.c"
              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_constr_build__V_3_3)), ((MR_Box) (transform_hlds__term_constr_build__V_5_5)));
            }
#line 640 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 640 "term_constr_build.m"
              {
#line 4755 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[7];
#line 4757 "transform_hlds.term_constr_build.c"
                {
#line 4759 "transform_hlds.term_constr_build.c"
                  transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_build__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_constr_build__V_4_4)), ((MR_Box) (transform_hlds__term_constr_build__V_6_6)));
                }
#line 640 "term_constr_build.m"
              }
#line 640 "term_constr_build.m"
          }
#line 640 "term_constr_build.m"
      }
#line 640 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 640 "term_constr_build.m"
  }
#line 640 "term_constr_build.m"
}

#line 1284 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1(
#line 1284 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1284 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1284 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 1284 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3)
#line 1284 "term_constr_build.m"
{
#line 1284 "term_constr_build.m"
  {
#line 1284 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1284 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1284 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv0_LambdaHeadVar__3_30;

#line 1284 "term_constr_build.m"
    {
#line 1284 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__upper_bound_constraints__1284__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Integer) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv0_LambdaHeadVar__3_30);
    }
#line 1284 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1284 "term_constr_build.m"
      {
#line 1284 "term_constr_build.m"
        *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv0_LambdaHeadVar__3_30));
#line 1284 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1284 "term_constr_build.m"
      }
#line 1284 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1284 "term_constr_build.m"
  }
#line 1284 "term_constr_build.m"
}

#line 1272 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_9,
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_10,
#line 1272 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Ctors_11,
#line 1272 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12)
#line 1272 "term_constr_build.m"
{
#line 1276 "term_constr_build.m"
  {
#line 1276 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1276 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__FindUpperBound_13;
#line 1295 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__Bound0_25;
#line 1295 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv1_Bound0_25;

#line 1284 "term_constr_build.m"
    {
#line 1284 "term_constr_build.m"
      transform_hlds__term_constr_build__FindUpperBound_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1284 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[2]));
#line 1284 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 1) = ((MR_Box) (transform_hlds__term_constr_build__upper_bound_constraints_6_p_0_1));
#line 1284 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1284 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 3) = ((MR_Box) (transform_hlds__term_constr_build__Norm_7));
#line 1284 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 4) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_8));
#line 1284 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindUpperBound_13, 5) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_10));
#line 1284 "term_constr_build.m"
    }
#line 1295 "term_constr_build.m"
    {
#line 1295 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__term_constr_build__FindUpperBound_13, transform_hlds__term_constr_build__Ctors_11, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_constr_build__conv1_Bound0_25);
    }
#line 1295 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1295 "term_constr_build.m"
      {
#line 1295 "term_constr_build.m"
        transform_hlds__term_constr_build__Bound0_25 = ((MR_Integer) transform_hlds__term_constr_build__conv1_Bound0_25);
#line 1295 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1295 "term_constr_build.m"
      }
#line 1295 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1296 "term_constr_build.m"
      {
#line 1296 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__Bound0_25 == (MR_Integer) 0);
#line 1296 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 1297 "term_constr_build.m"
          {
#line 1297 "term_constr_build.m"
            {
#line 1297 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.upper_bound_constraints\'/6", (MR_String) "zero upper bound");
#line 1297 "term_constr_build.m"
              return;
            }
#line 1297 "term_constr_build.m"
          }
#line 1296 "term_constr_build.m"
        else
#line 1299 "term_constr_build.m"
          {
#line 1299 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_37_37;
#line 1299 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_38_38;
#line 1299 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1299 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1299 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_43_43;

#line 1300 "term_constr_build.m"
            {
#line 1300 "term_constr_build.m"
              transform_hlds__term_constr_build__V_40_40 = libs__rat__one_0_f_0();
            }
#line 1300 "term_constr_build.m"
            {
#line 1300 "term_constr_build.m"
              transform_hlds__term_constr_build__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_39_39, 0) = ((MR_Box) (transform_hlds__term_constr_build__Var_9));
#line 1300 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_40_40));
#line 1300 "term_constr_build.m"
            }
#line 1300 "term_constr_build.m"
            {
#line 1300 "term_constr_build.m"
              transform_hlds__term_constr_build__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_38_38, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 1300 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "term_constr_build.m"
            }
#line 1300 "term_constr_build.m"
            {
#line 1300 "term_constr_build.m"
              transform_hlds__term_constr_build__V_43_43 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__Bound0_25);
            }
#line 1300 "term_constr_build.m"
            {
#line 1300 "term_constr_build.m"
              transform_hlds__term_constr_build__V_37_37 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__V_38_38, (MR_Integer) 0, transform_hlds__term_constr_build__V_43_43);
            }
#line 1300 "term_constr_build.m"
            {
#line 1300 "term_constr_build.m"
              MR_Word base;
#line 1300 "term_constr_build.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "term_constr_build.m"
              *transform_hlds__term_constr_build__Constraints_12 = base;
#line 1300 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_37_37));
#line 1300 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "term_constr_build.m"
            }
#line 1299 "term_constr_build.m"
          }
#line 1296 "term_constr_build.m"
      }
#line 1295 "term_constr_build.m"
    else
#line 1303 "term_constr_build.m"
      *transform_hlds__term_constr_build__Constraints_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1276 "term_constr_build.m"
  }
#line 1272 "term_constr_build.m"
}

#line 1260 "term_constr_build.m"
static MR_Integer MR_CALL 
transform_hlds__term_constr_build__lower_bound_4_f_0(
#line 1260 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_6,
#line 1260 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_7,
#line 1260 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_8,
#line 1260 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constructor_9)
#line 1260 "term_constr_build.m"
{
#line 1262 "term_constr_build.m"
  {
#line 1262 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1262 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__LowerBound_10;
#line 1262 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 2)));
#line 1262 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__Arity_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 4)));
#line 1262 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ConsId_17;
#line 1263 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 0)));
#line 1263 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 1)));
#line 1263 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build___Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 3)));
#line 1263 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Constructor_9, (MR_Integer) 5)));

#line 1264 "term_constr_build.m"
    {
#line 1264 "term_constr_build.m"
      transform_hlds__term_constr_build__ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1264 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 1) = ((MR_Box) (transform_hlds__term_constr_build__SymName_13));
#line 1264 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 2) = ((MR_Box) (transform_hlds__term_constr_build__Arity_15));
#line 1264 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_17, 3) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_8));
#line 1264 "term_constr_build.m"
    }
#line 1265 "term_constr_build.m"
    {
#line 1265 "term_constr_build.m"
      transform_hlds__term_constr_build__LowerBound_10 = transform_hlds__term_norm__functor_lower_bound_4_f_0(transform_hlds__term_constr_build__ModuleInfo_7, transform_hlds__term_constr_build__Norm_6, transform_hlds__term_constr_build__TypeCtor_8, transform_hlds__term_constr_build__ConsId_17);
    }
#line 1262 "term_constr_build.m"
    return transform_hlds__term_constr_build__LowerBound_10;
#line 1262 "term_constr_build.m"
  }
#line 1260 "term_constr_build.m"
}

#line 1248 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_3(
#line 1248 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1248 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 1248 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 1248 "term_constr_build.m"
{
#line 1248 "term_constr_build.m"
  {
#line 1248 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_3;
#line 1248 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1248 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv1_HeadVar__3_3;

#line 1248 "term_constr_build.m"
    {
#line 1248 "term_constr_build.m"
      transform_hlds__term_constr_build__conv1_HeadVar__3_3 = mercury__int__min_2_f_0(((MR_Integer) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Integer) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 1248 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv1_HeadVar__3_3));
#line 1248 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_3;
#line 1248 "term_constr_build.m"
  }
#line 1248 "term_constr_build.m"
}

#line 1231 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_2(
#line 1231 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1231 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1231 "term_constr_build.m"
{
#line 1231 "term_constr_build.m"
  {
#line 1231 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1231 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1231 "term_constr_build.m"
    {
#line 1231 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__bounds_on_var__1231__1_1_p_0(((MR_Integer) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1231 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1231 "term_constr_build.m"
  }
#line 1231 "term_constr_build.m"
}

#line 1226 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0_1(
#line 1226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1226 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1226 "term_constr_build.m"
{
#line 1226 "term_constr_build.m"
  {
#line 1226 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 1226 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1226 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv0_LowerBound_10;

#line 1226 "term_constr_build.m"
    {
#line 1226 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_LowerBound_10 = transform_hlds__term_constr_build__lower_bound_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1226 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv0_LowerBound_10));
#line 1226 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 1226 "term_constr_build.m"
  }
#line 1226 "term_constr_build.m"
}

#line 1222 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__bounds_on_var_6_p_0(
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_7,
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_8,
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TypeCtor_9,
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 1222 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constructors_11,
#line 1222 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Polyhedron_12)
#line 1222 "term_constr_build.m"
{
#line 1225 "term_constr_build.m"
  {
#line 1225 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1225 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1225 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CtorSizes_13;
#line 1225 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ZeroSizeCtors_15;
#line 1225 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonZeroSizeCtors_16;
#line 1225 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Constraints_19;
#line 1225 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;

#line 1226 "term_constr_build.m"
    {
#line 1226 "term_constr_build.m"
      transform_hlds__term_constr_build__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_5[1]));
#line 1226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 1) = ((MR_Box) (transform_hlds__term_constr_build__bounds_on_var_6_p_0_1));
#line 1226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 3) = ((MR_Box) (transform_hlds__term_constr_build__Norm_7));
#line 1226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 4) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_8));
#line 1226 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_27_27, 5) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_9));
#line 1226 "term_constr_build.m"
    }
#line 1226 "term_constr_build.m"
    {
#line 1226 "term_constr_build.m"
      transform_hlds__term_constr_build__CtorSizes_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, transform_hlds__term_constr_build__TypeCtorInfo_60_60, transform_hlds__term_constr_build__V_27_27, transform_hlds__term_constr_build__Constructors_11);
    }
#line 1231 "term_constr_build.m"
    {
#line 1231 "term_constr_build.m"
      mercury__list__filter_4_p_0(transform_hlds__term_constr_build__TypeCtorInfo_60_60, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[10], transform_hlds__term_constr_build__CtorSizes_13, &transform_hlds__term_constr_build__ZeroSizeCtors_15, &transform_hlds__term_constr_build__NonZeroSizeCtors_16);
    }
#line 1242 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__NonZeroSizeCtors_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1238 "term_constr_build.m"
      if ((transform_hlds__term_constr_build__ZeroSizeCtors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1236 "term_constr_build.m"
        {
#line 1237 "term_constr_build.m"
          {
#line 1237 "term_constr_build.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.bounds_on_var\'/6", (MR_String) "no other constructors for type");
#line 1237 "term_constr_build.m"
            return;
          }
#line 1236 "term_constr_build.m"
        }
#line 1238 "term_constr_build.m"
      else
#line 1239 "term_constr_build.m"
        {
#line 1239 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_47_47;
#line 1239 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_48_48;
#line 1239 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_49_49;
#line 1239 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_50_50;
#line 1239 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_53_53;

#line 1240 "term_constr_build.m"
          {
#line 1240 "term_constr_build.m"
            transform_hlds__term_constr_build__V_50_50 = libs__rat__one_0_f_0();
          }
#line 1240 "term_constr_build.m"
          {
#line 1240 "term_constr_build.m"
            transform_hlds__term_constr_build__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 0) = ((MR_Box) (transform_hlds__term_constr_build__Var_10));
#line 1240 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_50_50));
#line 1240 "term_constr_build.m"
          }
#line 1240 "term_constr_build.m"
          {
#line 1240 "term_constr_build.m"
            transform_hlds__term_constr_build__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "term_constr_build.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_48_48, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_49_49));
#line 1240 "term_constr_build.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1240 "term_constr_build.m"
          }
#line 1240 "term_constr_build.m"
          {
#line 1240 "term_constr_build.m"
            transform_hlds__term_constr_build__V_53_53 = libs__rat__zero_0_f_0();
          }
#line 1240 "term_constr_build.m"
          {
#line 1240 "term_constr_build.m"
            transform_hlds__term_constr_build__V_47_47 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__V_48_48, (MR_Integer) 1, transform_hlds__term_constr_build__V_53_53);
          }
#line 1240 "term_constr_build.m"
          {
#line 1240 "term_constr_build.m"
            transform_hlds__term_constr_build__Constraints_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "term_constr_build.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_19, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_47_47));
#line 1240 "term_constr_build.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1240 "term_constr_build.m"
          }
#line 1239 "term_constr_build.m"
        }
#line 1242 "term_constr_build.m"
    else
#line 1243 "term_constr_build.m"
      {
#line 1243 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__C_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__NonZeroSizeCtors_16, (MR_Integer) 0)));
#line 1243 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Cs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__NonZeroSizeCtors_16, (MR_Integer) 1)));
#line 1243 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__UpperBoundConstr_22;
#line 1243 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__LowerBoundConstr_24;

#line 1244 "term_constr_build.m"
        {
#line 1244 "term_constr_build.m"
          transform_hlds__term_constr_build__upper_bound_constraints_6_p_0(transform_hlds__term_constr_build__Norm_7, transform_hlds__term_constr_build__ModuleInfo_8, transform_hlds__term_constr_build__Var_10, transform_hlds__term_constr_build__TypeCtor_9, transform_hlds__term_constr_build__Constructors_11, &transform_hlds__term_constr_build__UpperBoundConstr_22);
        }
#line 1251 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__ZeroSizeCtors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1247 "term_constr_build.m"
          {
#line 1247 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__LowerBound_23;
#line 1247 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1247 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1247 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_41_41;
#line 1247 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_42_42;
#line 1247 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_45_45;
#line 1248 "term_constr_build.m"
            MR_Box transform_hlds__term_constr_build__conv2_LowerBound_23;

#line 1248 "term_constr_build.m"
            {
#line 1248 "term_constr_build.m"
              transform_hlds__term_constr_build__conv2_LowerBound_23 = mercury__list__foldl_3_f_0(transform_hlds__term_constr_build__TypeCtorInfo_60_60, transform_hlds__term_constr_build__TypeCtorInfo_60_60, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[11], transform_hlds__term_constr_build__Cs_21, ((MR_Box) (transform_hlds__term_constr_build__C_20)));
            }
#line 1248 "term_constr_build.m"
            transform_hlds__term_constr_build__LowerBound_23 = ((MR_Integer) transform_hlds__term_constr_build__conv2_LowerBound_23);
#line 1250 "term_constr_build.m"
            {
#line 1250 "term_constr_build.m"
              transform_hlds__term_constr_build__V_42_42 = libs__rat__one_0_f_0();
            }
#line 1250 "term_constr_build.m"
            {
#line 1250 "term_constr_build.m"
              transform_hlds__term_constr_build__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_41_41, 0) = ((MR_Box) (transform_hlds__term_constr_build__Var_10));
#line 1250 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_41_41, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_42_42));
#line 1250 "term_constr_build.m"
            }
#line 1250 "term_constr_build.m"
            {
#line 1250 "term_constr_build.m"
              transform_hlds__term_constr_build__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_40_40, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_41_41));
#line 1250 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1250 "term_constr_build.m"
            }
#line 1250 "term_constr_build.m"
            {
#line 1250 "term_constr_build.m"
              transform_hlds__term_constr_build__V_45_45 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__LowerBound_23);
            }
#line 1250 "term_constr_build.m"
            {
#line 1250 "term_constr_build.m"
              transform_hlds__term_constr_build__V_39_39 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__V_40_40, (MR_Integer) 2, transform_hlds__term_constr_build__V_45_45);
            }
#line 1250 "term_constr_build.m"
            {
#line 1250 "term_constr_build.m"
              transform_hlds__term_constr_build__LowerBoundConstr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__LowerBoundConstr_24, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 1250 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__LowerBoundConstr_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1250 "term_constr_build.m"
            }
#line 1247 "term_constr_build.m"
          }
#line 1251 "term_constr_build.m"
        else
#line 1252 "term_constr_build.m"
          {
#line 1252 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_30_30;
#line 1252 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_31_31;
#line 1252 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_32_32;
#line 1252 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_33_33;
#line 1252 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_36_36;

#line 1254 "term_constr_build.m"
            {
#line 1254 "term_constr_build.m"
              transform_hlds__term_constr_build__V_33_33 = libs__rat__one_0_f_0();
            }
#line 1254 "term_constr_build.m"
            {
#line 1254 "term_constr_build.m"
              transform_hlds__term_constr_build__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_32_32, 0) = ((MR_Box) (transform_hlds__term_constr_build__Var_10));
#line 1254 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_32_32, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_33_33));
#line 1254 "term_constr_build.m"
            }
#line 1254 "term_constr_build.m"
            {
#line 1254 "term_constr_build.m"
              transform_hlds__term_constr_build__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_31_31, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_32_32));
#line 1254 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1254 "term_constr_build.m"
            }
#line 1254 "term_constr_build.m"
            {
#line 1254 "term_constr_build.m"
              transform_hlds__term_constr_build__V_36_36 = libs__rat__zero_0_f_0();
            }
#line 1254 "term_constr_build.m"
            {
#line 1254 "term_constr_build.m"
              transform_hlds__term_constr_build__V_30_30 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__V_31_31, (MR_Integer) 2, transform_hlds__term_constr_build__V_36_36);
            }
#line 1254 "term_constr_build.m"
            {
#line 1254 "term_constr_build.m"
              transform_hlds__term_constr_build__LowerBoundConstr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__LowerBoundConstr_24, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_30_30));
#line 1254 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__LowerBoundConstr_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1254 "term_constr_build.m"
            }
#line 1252 "term_constr_build.m"
          }
#line 1256 "term_constr_build.m"
        {
#line 1256 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_19 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, transform_hlds__term_constr_build__LowerBoundConstr_24, transform_hlds__term_constr_build__UpperBoundConstr_22);
        }
#line 1243 "term_constr_build.m"
      }
#line 1258 "term_constr_build.m"
    {
#line 1258 "term_constr_build.m"
      *transform_hlds__term_constr_build__Polyhedron_12 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_19);
    }
#line 1225 "term_constr_build.m"
  }
#line 1222 "term_constr_build.m"
}

#line 1199 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4(
#line 1199 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1199 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1199 "term_constr_build.m"
{
#line 1199 "term_constr_build.m"
  {
#line 1199 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1199 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1199 "term_constr_build.m"
    {
#line 1199 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1199__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1199 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1199 "term_constr_build.m"
  }
#line 1199 "term_constr_build.m"
}

#line 1197 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3(
#line 1197 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg)
#line 1197 "term_constr_build.m"
{
#line 1197 "term_constr_build.m"
  {
#line 1197 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1197 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1197 "term_constr_build.m"
    {
#line 1197 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1197__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))));
    }
#line 1197 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1197 "term_constr_build.m"
  }
#line 1197 "term_constr_build.m"
}

#line 1159 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2(
#line 1159 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1159 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1159 "term_constr_build.m"
{
#line 1159 "term_constr_build.m"
  {
#line 1159 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1159 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1159 "term_constr_build.m"
    {
#line 1159 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__find_failure_constraint_for_goal_2__1159__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1159 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1159 "term_constr_build.m"
  }
#line 1159 "term_constr_build.m"
}

#line 1159 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1(
#line 1159 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1159 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1159 "term_constr_build.m"
{
#line 1159 "term_constr_build.m"
  {
#line 1159 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1159 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 1159 "term_constr_build.m"
    {
#line 1159 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1159 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1159 "term_constr_build.m"
  }
#line 1159 "term_constr_build.m"
}

#line 1146 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(
#line 1146 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1146 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 1146 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6)
#line 1146 "term_constr_build.m"
{
#line 1149 "term_constr_build.m"
  {
#line 1149 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1149 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 1149 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1149 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1153 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1156 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_186_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_196_196 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1156 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_197_197 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);

#line 1186 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 1155 "term_constr_build.m"
      {
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 0)));
#line 1155 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__ProcId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 1)));
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CallArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 2)));
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CallSizeArgs0_16;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Zeros_17;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CallSizeArgs_18;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ModuleInfo_19;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ProcInfo_21;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Term2Info_22;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__MaybeFailureConstrs_23;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FailureConstraints_24;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FailurePolyhedron_31;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_72_72;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_73_73;
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 3)));
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 4)));
#line 1155 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 5)));
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_93_93;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_94_94;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_95_95;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_96_96;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_97_97;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_98_98;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_99_99;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_100_100;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_101_101;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_102_102;
#line 1158 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_103_103;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_104_104;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_105_105;
#line 1158 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_106_106;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_107_107;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_108_108;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_109_109;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_110_110;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_111_111;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_112_112;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_113_113;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_114_114;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_115_115;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_116_116;
#line 1161 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_117_117;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_118_118;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_119_119;
#line 1161 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_120_120;
#line 1162 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_20_20;

#line 1157 "term_constr_build.m"
        {
#line 1157 "term_constr_build.m"
          transform_hlds__term_constr_build__CallSizeArgs0_16 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_188_188, transform_hlds__term_constr_build__CallArgs_11);
        }
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__Zeros_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1158 "term_constr_build.m"
        transform_hlds__term_constr_build__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1159 "term_constr_build.m"
        {
#line 1159 "term_constr_build.m"
          transform_hlds__term_constr_build__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1]));
#line 1159 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_1));
#line 1159 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1159 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_73_73, 3) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_17));
#line 1159 "term_constr_build.m"
        }
#line 1159 "term_constr_build.m"
        {
#line 1159 "term_constr_build.m"
          transform_hlds__term_constr_build__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[2]));
#line 1159 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_2));
#line 1159 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1159 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_72_72, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_73_73));
#line 1159 "term_constr_build.m"
        }
#line 1159 "term_constr_build.m"
        {
#line 1159 "term_constr_build.m"
          transform_hlds__term_constr_build__CallSizeArgs_18 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__V_72_72, transform_hlds__term_constr_build__CallSizeArgs0_16);
        }
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_107_107 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1161 "term_constr_build.m"
        transform_hlds__term_constr_build__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1162 "term_constr_build.m"
        {
#line 1162 "term_constr_build.m"
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__term_constr_build__ModuleInfo_19, transform_hlds__term_constr_build__PredId_9, transform_hlds__term_constr_build__ProcId_10, &transform_hlds__term_constr_build__V_20_20, &transform_hlds__term_constr_build__ProcInfo_21);
        }
#line 1163 "term_constr_build.m"
        {
#line 1163 "term_constr_build.m"
          hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_build__ProcInfo_21, &transform_hlds__term_constr_build__Term2Info_22);
        }
#line 1164 "term_constr_build.m"
        {
#line 1164 "term_constr_build.m"
          transform_hlds__term_constr_build__MaybeFailureConstrs_23 = transform_hlds__term_constr_main_types__term2_info_get_failure_constrs_1_f_0(transform_hlds__term_constr_build__Term2Info_22);
        }
#line 1168 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__MaybeFailureConstrs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "term_constr_build.m"
          transform_hlds__term_constr_build__FailureConstraints_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1168 "term_constr_build.m"
        else
#line 1169 "term_constr_build.m"
          {
#line 1169 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__CalleeFailurePolyhedron_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__MaybeFailureConstrs_23, (MR_Integer) 0)));
#line 1169 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__CalleeFailureConstraints_26;

#line 1170 "term_constr_build.m"
            {
#line 1170 "term_constr_build.m"
              transform_hlds__term_constr_build__CalleeFailureConstraints_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_build__CalleeFailurePolyhedron_25);
            }
#line 1175 "term_constr_build.m"
            if ((transform_hlds__term_constr_build__CalleeFailureConstraints_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "term_constr_build.m"
              transform_hlds__term_constr_build__FailureConstraints_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1175 "term_constr_build.m"
            else
#line 1176 "term_constr_build.m"
              {
#line 1176 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__CalleeHeadVars_29;
#line 1176 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SubstMap_30;

#line 1177 "term_constr_build.m"
                {
#line 1177 "term_constr_build.m"
                  transform_hlds__term_constr_build__CalleeHeadVars_29 = transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(transform_hlds__term_constr_build__Term2Info_22);
                }
#line 1178 "term_constr_build.m"
                {
#line 1178 "term_constr_build.m"
                  transform_hlds__term_constr_build__SubstMap_30 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(transform_hlds__term_constr_build__CallSizeArgs_18, transform_hlds__term_constr_build__CalleeHeadVars_29);
                }
#line 1180 "term_constr_build.m"
                {
#line 1180 "term_constr_build.m"
                  transform_hlds__term_constr_build__FailureConstraints_24 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(transform_hlds__term_constr_build__CalleeFailureConstraints_26, transform_hlds__term_constr_build__SubstMap_30);
                }
#line 1176 "term_constr_build.m"
              }
#line 1169 "term_constr_build.m"
          }
#line 1184 "term_constr_build.m"
        {
#line 1184 "term_constr_build.m"
          transform_hlds__term_constr_build__FailurePolyhedron_31 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__FailureConstraints_24);
        }
#line 1185 "term_constr_build.m"
        {
#line 1185 "term_constr_build.m"
          MR_Word base;
#line 1185 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1185 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__FailurePolyhedron_31));
#line 1185 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1185 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1185 "term_constr_build.m"
        }
#line 1155 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1155 "term_constr_build.m"
      }
#line 1186 "term_constr_build.m"
    else
#line 1186 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 1190 "term_constr_build.m"
      {
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Unification_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 3)));
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Var_37;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ConsId_38;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Type_42;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeCtor_43;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constructors0_44;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constructors_56;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVar_57;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Norm_58;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Polyhedron_59;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_60_60;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_70_70;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVarMap_77;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ModuleInfo_78;
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 0)));
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 1)));
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 2)));
#line 1190 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_7, (MR_Integer) 4)));
#line 1191 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1191 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1191 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_135_135;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_136_136;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_137_137;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_138_138;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_139_139;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_140_140;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_141_141;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_142_142;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_143_143;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_144_144;
#line 1194 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_145_145;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_146_146;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_147_147;
#line 1194 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_148_148;
#line 1196 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ConsName_45;
#line 1196 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__ConsArity_46;
#line 1196 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ConsTypeCtor_47;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_149_149;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_150_150;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_151_151;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_152_152;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_153_153;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_154_154;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_155_155;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_156_156;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_157_157;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_158_158;
#line 1210 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_159_159;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_160_160;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_161_161;
#line 1210 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_162_162;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_163_163;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_164_164;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_165_165;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_166_166;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_167_167;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_168_168;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_169_169;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_170_170;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_171_171;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_172_172;
#line 1212 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_173_173;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_174_174;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_175_175;
#line 1212 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_176_176;

#line 1191 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__Unification_35)) == (MR_mktag((MR_Integer) 1)));
#line 1191 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 1191 "term_constr_build.m"
          {
#line 1191 "term_constr_build.m"
            transform_hlds__term_constr_build__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 0)));
#line 1191 "term_constr_build.m"
            transform_hlds__term_constr_build__ConsId_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 1)));
#line 1191 "term_constr_build.m"
            transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 2)));
#line 1191 "term_constr_build.m"
            transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 3)));
#line 1191 "term_constr_build.m"
            transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 4)));
#line 1191 "term_constr_build.m"
            transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_35, (MR_Integer) 5)));
#line 1191 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_60_60 == (MR_Integer) 0);
#line 1190 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 1190 "term_constr_build.m"
              {
#line 1192 "term_constr_build.m"
                {
#line 1192 "term_constr_build.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__V_190_190, transform_hlds__term_constr_build__Var_37, &transform_hlds__term_constr_build__Type_42);
                }
#line 1193 "term_constr_build.m"
                {
#line 1193 "term_constr_build.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__Type_42, &transform_hlds__term_constr_build__TypeCtor_43);
                }
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_135_135 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__ModuleInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1194 "term_constr_build.m"
                transform_hlds__term_constr_build__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1195 "term_constr_build.m"
                {
#line 1195 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = check_hlds__type_util__type_constructors_3_p_0(transform_hlds__term_constr_build__ModuleInfo_78, transform_hlds__term_constr_build__Type_42, &transform_hlds__term_constr_build__Constructors0_44);
                }
#line 1190 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 1190 "term_constr_build.m"
                  {
#line 1196 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_build__ConsId_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1196 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 1196 "term_constr_build.m"
                      {
#line 1196 "term_constr_build.m"
                        transform_hlds__term_constr_build__ConsName_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 1)));
#line 1196 "term_constr_build.m"
                        transform_hlds__term_constr_build__ConsArity_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 2)));
#line 1196 "term_constr_build.m"
                        transform_hlds__term_constr_build__ConsTypeCtor_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ConsId_38, (MR_Integer) 3)));
#line 1198 "term_constr_build.m"
                        {
#line 1198 "term_constr_build.m"
                          MR_Word transform_hlds__term_constr_build__FindComplement_48;
#line 1198 "term_constr_build.m"
                          MR_Word transform_hlds__term_constr_build__V_62_62;

#line 1197 "term_constr_build.m"
                          {
#line 1197 "term_constr_build.m"
                            transform_hlds__term_constr_build__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1197 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[4]));
#line 1197 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_3));
#line 1197 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1197 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 3) = ((MR_Box) (transform_hlds__term_constr_build__TypeCtor_43));
#line 1197 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_62_62, 4) = ((MR_Box) (transform_hlds__term_constr_build__ConsTypeCtor_47));
#line 1197 "term_constr_build.m"
                          }
#line 1197 "term_constr_build.m"
                          {
#line 1197 "term_constr_build.m"
                            mercury__require__expect_4_p_0(transform_hlds__term_constr_build__V_62_62, (MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", (MR_String) "mismatched type_ctors");
                          }
#line 1199 "term_constr_build.m"
                          {
#line 1199 "term_constr_build.m"
                            transform_hlds__term_constr_build__FindComplement_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_8[0]));
#line 1199 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 1) = ((MR_Box) (transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0_4));
#line 1199 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1199 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 3) = ((MR_Box) (transform_hlds__term_constr_build__ConsName_45));
#line 1199 "term_constr_build.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__FindComplement_48, 4) = ((MR_Box) (transform_hlds__term_constr_build__ConsArity_46));
#line 1199 "term_constr_build.m"
                          }
#line 1206 "term_constr_build.m"
                          {
#line 1206 "term_constr_build.m"
                            mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, transform_hlds__term_constr_build__FindComplement_48, transform_hlds__term_constr_build__Constructors0_44, &transform_hlds__term_constr_build__Constructors_56);
                          }
#line 1198 "term_constr_build.m"
                        }
#line 1196 "term_constr_build.m"
                      }
#line 1196 "term_constr_build.m"
                    else
#line 1208 "term_constr_build.m"
                      {
#line 1208 "term_constr_build.m"
                        {
#line 1208 "term_constr_build.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.find_failure_constraint_for_goal_2\'/3", (MR_String) "non cons cons_id.");
                        }
#line 1208 "term_constr_build.m"
                      }
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_149_149 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__SizeVarMap_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1210 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1211 "term_constr_build.m"
                    {
#line 1211 "term_constr_build.m"
                      transform_hlds__term_constr_build__SizeVar_57 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_77, transform_hlds__term_constr_build__Var_37);
                    }
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_163_163 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_164_164 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__Norm_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1212 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1213 "term_constr_build.m"
                    {
#line 1213 "term_constr_build.m"
                      transform_hlds__term_constr_build__bounds_on_var_6_p_0(transform_hlds__term_constr_build__Norm_58, transform_hlds__term_constr_build__ModuleInfo_78, transform_hlds__term_constr_build__TypeCtor_43, transform_hlds__term_constr_build__SizeVar_57, transform_hlds__term_constr_build__Constructors_56, &transform_hlds__term_constr_build__Polyhedron_59);
                    }
#line 1215 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1215 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1215 "term_constr_build.m"
                    {
#line 1215 "term_constr_build.m"
                      MR_Word base;
#line 1215 "term_constr_build.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "term_constr_build.m"
                      *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1215 "term_constr_build.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_59));
#line 1215 "term_constr_build.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_70_70));
#line 1215 "term_constr_build.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_71_71));
#line 1215 "term_constr_build.m"
                    }
#line 1215 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1190 "term_constr_build.m"
                  }
#line 1190 "term_constr_build.m"
              }
#line 1191 "term_constr_build.m"
          }
#line 1190 "term_constr_build.m"
      }
#line 1186 "term_constr_build.m"
    else
#line 1186 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_FALSE;
#line 1149 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 1149 "term_constr_build.m"
  }
#line 1146 "term_constr_build.m"
}

#line 1126 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(
#line 1126 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Info_4,
#line 1126 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5)
#line 1126 "term_constr_build.m"
{
#line 1130 "term_constr_build.m"
  {
#line 1130 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1130 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoal_6;
#line 1130 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoal0_7;
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1131 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1131 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));

#line 1131 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_13_13 == (MR_Integer) 1);
#line 1131 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1132 "term_constr_build.m"
      {
#line 1132 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_3_p_0(transform_hlds__term_constr_build__Info_4, transform_hlds__term_constr_build__Goal_5, &transform_hlds__term_constr_build__AbstractGoal0_7);
      }
#line 1130 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1134 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractGoal_6 = transform_hlds__term_constr_build__AbstractGoal0_7;
#line 1130 "term_constr_build.m"
    else
#line 1136 "term_constr_build.m"
      {
#line 1136 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonLocalProgVars0_8;
#line 1136 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonLocalProgVars_9;
#line 1136 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonLocalSizeVars_10;
#line 1136 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraints_11;
#line 1136 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FailPoly_12;
#line 1136 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 1136 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_15_15;
#line 1136 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16;
#line 1136 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_34_34;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_35_35;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_36_36;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_37_37;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_38_38;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_39_39;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_42_42;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_43_43;
#line 1138 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_44_44;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_45_45;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_46_46;
#line 1138 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_47_47;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_48_48;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_49_49;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_50_50;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_51_51;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_52_52;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_53_53;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_54_54;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_55_55;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_56_56;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_57_57;
#line 1140 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_58_58;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_59_59;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_60_60;
#line 1140 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_61_61;

#line 1136 "term_constr_build.m"
        {
#line 1136 "term_constr_build.m"
          transform_hlds__term_constr_build__NonLocalProgVars0_8 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__term_constr_build__V_14_14);
        }
#line 1137 "term_constr_build.m"
        {
#line 1137 "term_constr_build.m"
          transform_hlds__term_constr_build__NonLocalProgVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_constr_build__NonLocalProgVars0_8);
        }
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1138 "term_constr_build.m"
        transform_hlds__term_constr_build__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1138 "term_constr_build.m"
        {
#line 1138 "term_constr_build.m"
          transform_hlds__term_constr_build__NonLocalSizeVars_10 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_15_15, transform_hlds__term_constr_build__NonLocalProgVars_9);
        }
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 1)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 2)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 3)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 4)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 5)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 6)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 7)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 8)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 9)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 10)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 11)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 12)));
#line 1140 "term_constr_build.m"
        transform_hlds__term_constr_build__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_4, (MR_Integer) 13)));
#line 1140 "term_constr_build.m"
        {
#line 1140 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_11 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_build__NonLocalSizeVars_10, transform_hlds__term_constr_build__V_16_16);
        }
#line 1142 "term_constr_build.m"
        {
#line 1142 "term_constr_build.m"
          transform_hlds__term_constr_build__FailPoly_12 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_11);
        }
#line 1143 "term_constr_build.m"
        {
#line 1143 "term_constr_build.m"
          transform_hlds__term_constr_build__AbstractGoal_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__AbstractGoal_6, 0) = ((MR_Box) (transform_hlds__term_constr_build__FailPoly_12));
#line 1143 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__AbstractGoal_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__AbstractGoal_6, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "term_constr_build.m"
        }
#line 1136 "term_constr_build.m"
      }
#line 1130 "term_constr_build.m"
    return transform_hlds__term_constr_build__AbstractGoal_6;
#line 1130 "term_constr_build.m"
  }
#line 1126 "term_constr_build.m"
}

#line 1089 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(
#line 1089 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 1089 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2,
#line 1089 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_3,
#line 1089 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4,
#line 1089 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_5)
#line 1089 "term_constr_build.m"
{
#line 1092 "term_constr_build.m"
  while (MR_TRUE)
#line 1092 "term_constr_build.m"
    {
#line 1092 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 1092 "term_constr_build.m"
      {
#line 1092 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 1092 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1092 "term_constr_build.m"
          {
#line 1092 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_5 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4;
#line 1092 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_3 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2;
#line 1092 "term_constr_build.m"
          }
#line 1092 "term_constr_build.m"
        else
#line 1093 "term_constr_build.m"
          {
#line 1093 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ProgVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 1093 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ProgVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 1094 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_16_16;
#line 1094 "term_constr_build.m"
            MR_Box transform_hlds__term_constr_build__conv0_V_16_16;

#line 1094 "term_constr_build.m"
            {
#line 1094 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4, ((MR_Box) (transform_hlds__term_constr_build__ProgVar_12)), &transform_hlds__term_constr_build__conv0_V_16_16);
            }
#line 1094 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 1094 "term_constr_build.m"
              {
#line 1094 "term_constr_build.m"
                transform_hlds__term_constr_build__V_16_16 = ((MR_Word) transform_hlds__term_constr_build__conv0_V_16_16);
#line 1094 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 1094 "term_constr_build.m"
              }
#line 1094 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 1095 "term_constr_build.m"
              {
#line 1095 "term_constr_build.m"
                /* direct tailcall eliminated */
#line 1095 "term_constr_build.m"
                {
#line 1095 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__ProgVars_13;

#line 1095 "term_constr_build.m"
                  transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 1095 "term_constr_build.m"
                }
#line 1095 "term_constr_build.m"
                continue;
#line 1095 "term_constr_build.m"
              }
#line 1094 "term_constr_build.m"
            else
#line 1097 "term_constr_build.m"
              {
#line 1097 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SizeVar_17;
#line 1097 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_24_24;
#line 1097 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_25_25;

#line 1097 "term_constr_build.m"
                {
#line 1097 "term_constr_build.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_constr_build__SizeVar_17, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_24_24);
                }
#line 1098 "term_constr_build.m"
                {
#line 1098 "term_constr_build.m"
                  mercury__map__set_4_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__ProgVar_12)), ((MR_Box) (transform_hlds__term_constr_build__SizeVar_17)), transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_25_25);
                }
#line 1099 "term_constr_build.m"
                /* direct tailcall eliminated */
#line 1099 "term_constr_build.m"
                {
#line 1099 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__ProgVars_13;
#line 1099 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0__tmp_copy_2 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_24_24;
#line 1099 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0__tmp_copy_4 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_25_25;

#line 1099 "term_constr_build.m"
                  transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0_4 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarMap_0__tmp_copy_4;
#line 1099 "term_constr_build.m"
                  transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_2 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0__tmp_copy_2;
#line 1099 "term_constr_build.m"
                  transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 1099 "term_constr_build.m"
                }
#line 1099 "term_constr_build.m"
                continue;
#line 1097 "term_constr_build.m"
              }
#line 1093 "term_constr_build.m"
          }
#line 1092 "term_constr_build.m"
      }
#line 1092 "term_constr_build.m"
      break;
#line 1092 "term_constr_build.m"
    }
#line 1089 "term_constr_build.m"
}

#line 1070 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__allocate_sizevars_5_p_0(
#line 1070 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadProgVars_6,
#line 1070 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_7,
#line 1070 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__SizeVarMap_8,
#line 1070 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_11,
#line 1070 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_12)
#line 1070 "term_constr_build.m"
{
#line 1073 "term_constr_build.m"
  {
#line 1073 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1073 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap0_10;
#line 1073 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_13_13;
#line 1073 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProgVarsInGoal_20;
#line 1073 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProgVars_21;

#line 1082 "term_constr_build.m"
    {
#line 1082 "term_constr_build.m"
      transform_hlds__term_constr_build__ProgVarsInGoal_20 = hlds__quantification__free_goal_vars_1_f_0(transform_hlds__term_constr_build__Goal_7);
    }
#line 1083 "term_constr_build.m"
    {
#line 1083 "term_constr_build.m"
      transform_hlds__term_constr_build__ProgVars_21 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__term_constr_build__ProgVarsInGoal_20);
    }
#line 1084 "term_constr_build.m"
    {
#line 1084 "term_constr_build.m"
      transform_hlds__term_constr_util__make_size_var_map_4_p_0(transform_hlds__term_constr_build__ProgVars_21, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_11, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_13_13, &transform_hlds__term_constr_build__SizeVarMap0_10);
    }
#line 1075 "term_constr_build.m"
    {
#line 1075 "term_constr_build.m"
      transform_hlds__term_constr_build__possibly_fix_sizevar_map_5_p_0(transform_hlds__term_constr_build__HeadProgVars_6, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_13_13, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_12, transform_hlds__term_constr_build__SizeVarMap0_10, transform_hlds__term_constr_build__SizeVarMap_8);
    }
#line 1073 "term_constr_build.m"
  }
#line 1070 "term_constr_build.m"
}

#line 1020 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(
#line 1020 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Constraints_3)
#line 1020 "term_constr_build.m"
{
#line 1022 "term_constr_build.m"
  {
#line 1022 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 1022 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__2_2;
#line 1022 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Polyhedron_4;

#line 1023 "term_constr_build.m"
    {
#line 1023 "term_constr_build.m"
      transform_hlds__term_constr_build__Polyhedron_4 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_3);
    }
#line 1022 "term_constr_build.m"
    {
#line 1022 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_4));
#line 1022 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
    }
#line 1024 "term_constr_build.m"
    {
#line 1024 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_4);
    }
#line 1024 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1025 "term_constr_build.m"
      {
#line 1025 "term_constr_build.m"
        {
#line 1025 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
        }
#line 1025 "term_constr_build.m"
      }
#line 1024 "term_constr_build.m"
    else
#line 1027 "term_constr_build.m"
      {
#line 1027 "term_constr_build.m"
      }
#line 1022 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__2_2;
#line 1022 "term_constr_build.m"
  }
#line 1020 "term_constr_build.m"
}

#line 1009 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0_1(
#line 1009 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 1009 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 1009 "term_constr_build.m"
{
#line 1009 "term_constr_build.m"
  {
#line 1009 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 1009 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 1009 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__2_2;

#line 1009 "term_constr_build.m"
    {
#line 1009 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 1009 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__2_2));
#line 1009 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 1009 "term_constr_build.m"
  }
#line 1009 "term_constr_build.m"
}

#line 987 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(
#line 987 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__LeftProgVar_6,
#line 987 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RightProgVar_7,
#line 987 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_8,
#line 987 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 987 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18)
#line 987 "term_constr_build.m"
{
#line 991 "term_constr_build.m"
  {
#line 991 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 991 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
#line 991 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Zeros_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 991 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__LeftSizeVar_12;
#line 991 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__RightSizeVar_13;
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
#line 992 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 11)));
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 12)));
#line 992 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, (MR_Integer) 13)));
#line 997 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeInfo_64_64;

#line 994 "term_constr_build.m"
    {
#line 994 "term_constr_build.m"
      transform_hlds__term_constr_build__LeftSizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_10, transform_hlds__term_constr_build__LeftProgVar_6);
    }
#line 995 "term_constr_build.m"
    {
#line 995 "term_constr_build.m"
      transform_hlds__term_constr_build__RightSizeVar_13 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_10, transform_hlds__term_constr_build__RightProgVar_7);
    }
#line 6882 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeInfo_64_64 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4];
#line 997 "term_constr_build.m"
    {
#line 997 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0(transform_hlds__term_constr_build__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12)), transform_hlds__term_constr_build__Zeros_11);
    }
#line 997 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 998 "term_constr_build.m"
      {
#line 998 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0(transform_hlds__term_constr_build__TypeInfo_64_64, ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13)), transform_hlds__term_constr_build__Zeros_11);
      }
#line 996 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 1000 "term_constr_build.m"
      *transform_hlds__term_constr_build__Constraints_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 996 "term_constr_build.m"
    else
#line 1001 "term_constr_build.m"
      {
#line 1002 "term_constr_build.m"
        {
#line 1002 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12)), transform_hlds__term_constr_build__Zeros_11);
        }
#line 1003 "term_constr_build.m"
        if (!(transform_hlds__term_constr_build__succeeded))
#line 1003 "term_constr_build.m"
          {
#line 1003 "term_constr_build.m"
            {
#line 1003 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13)), transform_hlds__term_constr_build__Zeros_11);
            }
#line 1003 "term_constr_build.m"
          }
#line 1001 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 1006 "term_constr_build.m"
          {
#line 1006 "term_constr_build.m"
            {
#line 1006 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_simple_or_assign_unify\'/5", (MR_String) "zero unified with non-zero");
#line 1006 "term_constr_build.m"
              return;
            }
#line 1006 "term_constr_build.m"
          }
#line 1001 "term_constr_build.m"
        else
#line 1010 "term_constr_build.m"
          {
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__NonNegConstrs_14;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Terms_15;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AssignConstr_16;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_23_23;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_24_24;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_26_26;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_27_27;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_28_28;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_29_29;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_30_30;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_31_31;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_34_34;
#line 1010 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_35_35;

#line 1010 "term_constr_build.m"
            {
#line 1010 "term_constr_build.m"
              transform_hlds__term_constr_build__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_24_24, 0) = ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13));
#line 1010 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "term_constr_build.m"
            }
#line 1010 "term_constr_build.m"
            {
#line 1010 "term_constr_build.m"
              transform_hlds__term_constr_build__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_23_23, 0) = ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12));
#line 1010 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_23_23, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_24_24));
#line 1010 "term_constr_build.m"
            }
#line 1009 "term_constr_build.m"
            {
#line 1009 "term_constr_build.m"
              transform_hlds__term_constr_build__NonNegConstrs_14 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[9], transform_hlds__term_constr_build__V_23_23);
            }
#line 1011 "term_constr_build.m"
            {
#line 1011 "term_constr_build.m"
              transform_hlds__term_constr_build__V_27_27 = libs__rat__one_0_f_0();
            }
#line 1011 "term_constr_build.m"
            {
#line 1011 "term_constr_build.m"
              transform_hlds__term_constr_build__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1011 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_26_26, 0) = ((MR_Box) (transform_hlds__term_constr_build__LeftSizeVar_12));
#line 1011 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_26_26, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_27_27));
#line 1011 "term_constr_build.m"
            }
#line 1011 "term_constr_build.m"
            {
#line 1011 "term_constr_build.m"
              transform_hlds__term_constr_build__V_31_31 = libs__rat__one_0_f_0();
            }
#line 1011 "term_constr_build.m"
            {
#line 1011 "term_constr_build.m"
              transform_hlds__term_constr_build__V_30_30 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_build__V_31_31);
            }
#line 1011 "term_constr_build.m"
            {
#line 1011 "term_constr_build.m"
              transform_hlds__term_constr_build__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1011 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_29_29, 0) = ((MR_Box) (transform_hlds__term_constr_build__RightSizeVar_13));
#line 1011 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_29_29, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_30_30));
#line 1011 "term_constr_build.m"
            }
#line 1011 "term_constr_build.m"
            {
#line 1011 "term_constr_build.m"
              transform_hlds__term_constr_build__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_28_28, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_29_29));
#line 1011 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "term_constr_build.m"
            }
#line 1011 "term_constr_build.m"
            {
#line 1011 "term_constr_build.m"
              transform_hlds__term_constr_build__Terms_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_15, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_26_26));
#line 1011 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_15, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_28_28));
#line 1011 "term_constr_build.m"
            }
#line 1012 "term_constr_build.m"
            {
#line 1012 "term_constr_build.m"
              transform_hlds__term_constr_build__V_34_34 = libs__rat__zero_0_f_0();
            }
#line 1012 "term_constr_build.m"
            {
#line 1012 "term_constr_build.m"
              transform_hlds__term_constr_build__AssignConstr_16 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__Terms_15, (MR_Integer) 1, transform_hlds__term_constr_build__V_34_34);
            }
#line 1014 "term_constr_build.m"
            {
#line 1014 "term_constr_build.m"
              transform_hlds__term_constr_build__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_35_35, 0) = ((MR_Box) (transform_hlds__term_constr_build__AssignConstr_16));
#line 1014 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_build__NonNegConstrs_14));
#line 1014 "term_constr_build.m"
            }
#line 1014 "term_constr_build.m"
            {
#line 1014 "term_constr_build.m"
              *transform_hlds__term_constr_build__Constraints_8 = libs__lp_rational__simplify_constraints_1_f_0(transform_hlds__term_constr_build__V_35_35);
            }
#line 1010 "term_constr_build.m"
          }
#line 1001 "term_constr_build.m"
      }
#line 991 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_18 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17;
#line 991 "term_constr_build.m"
  }
#line 987 "term_constr_build.m"
}

#line 968 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(
#line 968 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_1,
#line 968 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 968 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__3_3,
#line 968 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 968 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__HeadVar__5_5)
#line 968 "term_constr_build.m"
{
#line 972 "term_constr_build.m"
  {
#line 972 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 972 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "term_constr_build.m"
      {
#line 972 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 972 "term_constr_build.m"
          {
#line 972 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 972 "term_constr_build.m"
            *transform_hlds__term_constr_build__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 972 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 972 "term_constr_build.m"
          }
#line 972 "term_constr_build.m"
      }
#line 972 "term_constr_build.m"
    else
#line 974 "term_constr_build.m"
      {
#line 974 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Arg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 974 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Mode_10;
#line 974 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Type_12;
#line 974 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 974 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_15;
#line 974 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17;
#line 974 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18;

#line 974 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 974 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 974 "term_constr_build.m"
          {
#line 974 "term_constr_build.m"
            transform_hlds__term_constr_build__Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 0)));
#line 974 "term_constr_build.m"
            transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 1)));
#line 975 "term_constr_build.m"
            {
#line 975 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(transform_hlds__term_constr_build__VarTypes_1, transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_13, &transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17, transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_15, &transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18);
            }
#line 974 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 974 "term_constr_build.m"
              {
#line 976 "term_constr_build.m"
                {
#line 976 "term_constr_build.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__VarTypes_1, transform_hlds__term_constr_build__Arg_8, &transform_hlds__term_constr_build__Type_12);
                }
#line 977 "term_constr_build.m"
                {
#line 977 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(transform_hlds__term_constr_build__Type_12);
                }
#line 977 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 978 "term_constr_build.m"
                  {
#line 978 "term_constr_build.m"
                    *transform_hlds__term_constr_build__HeadVar__5_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18;
#line 978 "term_constr_build.m"
                    *transform_hlds__term_constr_build__HeadVar__3_3 = transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17;
#line 978 "term_constr_build.m"
                  }
#line 977 "term_constr_build.m"
                else
#line 980 "term_constr_build.m"
                  {
#line 980 "term_constr_build.m"
                    {
#line 980 "term_constr_build.m"
                      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_build__Arg_8)), transform_hlds__term_constr_build__STATE_VARIABLE_Args_17_17, transform_hlds__term_constr_build__HeadVar__3_3);
                    }
#line 981 "term_constr_build.m"
                    {
#line 981 "term_constr_build.m"
                      mercury__list__cons_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, ((MR_Box) (transform_hlds__term_constr_build__Mode_10)), transform_hlds__term_constr_build__STATE_VARIABLE_Modes_18_18, transform_hlds__term_constr_build__HeadVar__5_5);
                    }
#line 980 "term_constr_build.m"
                  }
#line 977 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 974 "term_constr_build.m"
              }
#line 974 "term_constr_build.m"
          }
#line 974 "term_constr_build.m"
      }
#line 972 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 972 "term_constr_build.m"
  }
#line 968 "term_constr_build.m"
}

#line 957 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(
#line 957 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarTypes_6,
#line 957 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_9,
#line 957 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Args_10,
#line 957 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_11,
#line 957 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Modes_12)
#line 957 "term_constr_build.m"
{
#line 962 "term_constr_build.m"
  {
#line 962 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 962 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_13;
#line 962 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_14;

#line 962 "term_constr_build.m"
    {
#line 962 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(transform_hlds__term_constr_build__VarTypes_6, transform_hlds__term_constr_build__STATE_VARIABLE_Args_0_9, &transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_13, transform_hlds__term_constr_build__STATE_VARIABLE_Modes_0_11, &transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_14);
    }
#line 962 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 963 "term_constr_build.m"
      {
#line 963 "term_constr_build.m"
        *transform_hlds__term_constr_build__STATE_VARIABLE_Modes_12 = transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_14;
#line 963 "term_constr_build.m"
        *transform_hlds__term_constr_build__STATE_VARIABLE_Args_10 = transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_13;
#line 963 "term_constr_build.m"
      }
#line 962 "term_constr_build.m"
    else
#line 965 "term_constr_build.m"
      {
#line 965 "term_constr_build.m"
        {
#line 965 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
#line 965 "term_constr_build.m"
          return;
        }
#line 965 "term_constr_build.m"
      }
#line 962 "term_constr_build.m"
  }
#line 957 "term_constr_build.m"
}

#line 946 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SizeVarMap_7,
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_8,
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Coeff_9,
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_10,
#line 946 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13,
#line 946 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14)
#line 946 "term_constr_build.m"
{
#line 949 "term_constr_build.m"
  {
#line 949 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 949 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVar_12;

#line 950 "term_constr_build.m"
    {
#line 950 "term_constr_build.m"
      transform_hlds__term_constr_build__SizeVar_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_7, transform_hlds__term_constr_build__Var_10);
    }
#line 951 "term_constr_build.m"
    {
#line 951 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__SizeVar_12)), transform_hlds__term_constr_build__Zeros_8);
    }
#line 951 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 951 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14 = transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13;
#line 951 "term_constr_build.m"
    else
#line 954 "term_constr_build.m"
      {
#line 954 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_16_16;

#line 954 "term_constr_build.m"
        {
#line 954 "term_constr_build.m"
          transform_hlds__term_constr_build__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 954 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_16_16, 0) = ((MR_Box) (transform_hlds__term_constr_build__SizeVar_12));
#line 954 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_16_16, 1) = ((MR_Box) (transform_hlds__term_constr_build__Coeff_9));
#line 954 "term_constr_build.m"
        }
#line 954 "term_constr_build.m"
        {
#line 954 "term_constr_build.m"
          MR_Word base;
#line 954 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "term_constr_build.m"
          *transform_hlds__term_constr_build__STATE_VARIABLE_Terms_14 = base;
#line 954 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 954 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_Terms_0_13));
#line 954 "term_constr_build.m"
        }
#line 954 "term_constr_build.m"
      }
#line 949 "term_constr_build.m"
  }
#line 946 "term_constr_build.m"
}

#line 942 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_4(
#line 942 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 942 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 942 "term_constr_build.m"
{
#line 942 "term_constr_build.m"
  {
#line 942 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 942 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 942 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv2_HeadVar__2_2;

#line 942 "term_constr_build.m"
    {
#line 942 "term_constr_build.m"
      transform_hlds__term_constr_build__conv2_HeadVar__2_2 = libs__lp_rational__make_nonneg_constr_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 942 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv2_HeadVar__2_2));
#line 942 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 942 "term_constr_build.m"
  }
#line 942 "term_constr_build.m"
}

#line 940 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3(
#line 940 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 940 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 940 "term_constr_build.m"
{
#line 940 "term_constr_build.m"
  {
#line 940 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 940 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 940 "term_constr_build.m"
    {
#line 940 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__IntroducedFrom__pred__build_abstract_decon_or_con_unify__940__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 940 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 940 "term_constr_build.m"
  }
#line 940 "term_constr_build.m"
}

#line 940 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2(
#line 940 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 940 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 940 "term_constr_build.m"
{
#line 940 "term_constr_build.m"
  {
#line 940 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 940 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;

#line 940 "term_constr_build.m"
    {
#line 940 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 940 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 940 "term_constr_build.m"
  }
#line 940 "term_constr_build.m"
}

#line 932 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1(
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 932 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 932 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3)
#line 932 "term_constr_build.m"
{
#line 932 "term_constr_build.m"
  {
#line 932 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 932 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Terms_14;

#line 932 "term_constr_build.m"
    {
#line 932 "term_constr_build.m"
      transform_hlds__term_constr_build__accumulate_nonzero_arg_coeffs_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Terms_14);
    }
#line 932 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Terms_14));
#line 932 "term_constr_build.m"
  }
#line 932 "term_constr_build.m"
}

#line 883 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Var_8,
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_9,
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgVars_10,
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Modes_11,
#line 883 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Constraints_12,
#line 883 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35,
#line 883 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_36)
#line 883 "term_constr_build.m"
{
#line 888 "term_constr_build.m"
  {
#line 888 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 888 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 888 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Type_15;
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 8)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 9)));
#line 889 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 10)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 11)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 12)));
#line 889 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 13)));

#line 890 "term_constr_build.m"
    {
#line 890 "term_constr_build.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__VarTypes_14, transform_hlds__term_constr_build__Var_8, &transform_hlds__term_constr_build__Type_15);
    }
#line 897 "term_constr_build.m"
    {
#line 897 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_constr_build__Type_15);
    }
#line 898 "term_constr_build.m"
    if (!(transform_hlds__term_constr_build__succeeded))
#line 898 "term_constr_build.m"
      {
#line 898 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_16_16;

#line 898 "term_constr_build.m"
        {
#line 898 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(transform_hlds__term_constr_build__ConsId_9, &transform_hlds__term_constr_build__V_16_16);
        }
#line 898 "term_constr_build.m"
      }
#line 891 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 901 "term_constr_build.m"
      *transform_hlds__term_constr_build__Constraints_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 891 "term_constr_build.m"
    else
#line 909 "term_constr_build.m"
      {
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FixedArgVars_17;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FixedModes_18;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ModuleInfo_19;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Norm_20;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TypeCtor_21;
#line 909 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__Constant_22;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__CountedVars_23;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVarMap_25;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Zeros_26;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVar_27;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__FirstTerms_28;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Terms_29;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraint_30;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVars_33;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__NonNegConstraints_34;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_42_42;
#line 909 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_44_44;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_65_65;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_66_66;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_67_67;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_69_69;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_70_70;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_72_72;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_73_73;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_74_74;
#line 910 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_75_75;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_76_76;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_77_77;
#line 910 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_78_78;
#line 913 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_24_24;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_93_93;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_94_94;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_95_95;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_96_96;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_97_97;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_98_98;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_99_99;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_100_100;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_102_102;
#line 923 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_103_103;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_104_104;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_105_105;
#line 923 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_106_106;
#line 932 "term_constr_build.m"
        MR_Box transform_hlds__term_constr_build__conv1_Terms_29;

#line 908 "term_constr_build.m"
        {
#line 908 "term_constr_build.m"
          transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_5_p_0(transform_hlds__term_constr_build__VarTypes_14, transform_hlds__term_constr_build__ArgVars_10, &transform_hlds__term_constr_build__FixedArgVars_17, transform_hlds__term_constr_build__Modes_11, &transform_hlds__term_constr_build__FixedModes_18);
        }
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__Norm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 8)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 9)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 10)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 11)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 12)));
#line 910 "term_constr_build.m"
        transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 13)));
#line 912 "term_constr_build.m"
        {
#line 912 "term_constr_build.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__Type_15, &transform_hlds__term_constr_build__TypeCtor_21);
        }
#line 913 "term_constr_build.m"
        {
#line 913 "term_constr_build.m"
          transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_constr_build__ModuleInfo_19, transform_hlds__term_constr_build__Norm_20, transform_hlds__term_constr_build__TypeCtor_21, transform_hlds__term_constr_build__ConsId_9, &transform_hlds__term_constr_build__Constant_22, transform_hlds__term_constr_build__FixedArgVars_17, &transform_hlds__term_constr_build__CountedVars_23, transform_hlds__term_constr_build__FixedModes_18, &transform_hlds__term_constr_build__V_24_24);
        }
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__Zeros_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__SizeVarMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 8)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 9)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 10)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 11)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 12)));
#line 923 "term_constr_build.m"
        transform_hlds__term_constr_build__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35, (MR_Integer) 13)));
#line 926 "term_constr_build.m"
        {
#line 926 "term_constr_build.m"
          transform_hlds__term_constr_build__SizeVar_27 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_25, transform_hlds__term_constr_build__Var_8);
        }
#line 927 "term_constr_build.m"
        {
#line 927 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__SizeVar_27)), transform_hlds__term_constr_build__Zeros_26);
        }
#line 927 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 928 "term_constr_build.m"
          transform_hlds__term_constr_build__FirstTerms_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "term_constr_build.m"
        else
#line 930 "term_constr_build.m"
          {
#line 930 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_37_37;
#line 930 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_38_38;

#line 930 "term_constr_build.m"
            {
#line 930 "term_constr_build.m"
              transform_hlds__term_constr_build__V_38_38 = libs__rat__one_0_f_0();
            }
#line 930 "term_constr_build.m"
            {
#line 930 "term_constr_build.m"
              transform_hlds__term_constr_build__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 930 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_37_37, 0) = ((MR_Box) (transform_hlds__term_constr_build__SizeVar_27));
#line 930 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_37_37, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_38_38));
#line 930 "term_constr_build.m"
            }
#line 930 "term_constr_build.m"
            {
#line 930 "term_constr_build.m"
              transform_hlds__term_constr_build__FirstTerms_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__FirstTerms_28, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_37_37));
#line 930 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__FirstTerms_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 930 "term_constr_build.m"
            }
#line 930 "term_constr_build.m"
          }
#line 932 "term_constr_build.m"
        {
#line 932 "term_constr_build.m"
          transform_hlds__term_constr_build__V_42_42 = libs__rat__one_0_f_0();
        }
#line 932 "term_constr_build.m"
        {
#line 932 "term_constr_build.m"
          transform_hlds__term_constr_build__V_41_41 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_build__V_42_42);
        }
#line 932 "term_constr_build.m"
        {
#line 932 "term_constr_build.m"
          transform_hlds__term_constr_build__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 932 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[1]));
#line 932 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_1));
#line 932 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 932 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 3) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarMap_25));
#line 932 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 4) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_26));
#line 932 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_40_40, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_41_41));
#line 932 "term_constr_build.m"
        }
#line 932 "term_constr_build.m"
        {
#line 932 "term_constr_build.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[5], transform_hlds__term_constr_build__V_40_40, transform_hlds__term_constr_build__CountedVars_23, ((MR_Box) (transform_hlds__term_constr_build__FirstTerms_28)), &transform_hlds__term_constr_build__conv1_Terms_29);
        }
#line 932 "term_constr_build.m"
        transform_hlds__term_constr_build__Terms_29 = ((MR_Word) transform_hlds__term_constr_build__conv1_Terms_29);
#line 934 "term_constr_build.m"
        {
#line 934 "term_constr_build.m"
          transform_hlds__term_constr_build__V_44_44 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__Constant_22);
        }
#line 934 "term_constr_build.m"
        {
#line 934 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraint_30 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__Terms_29, (MR_Integer) 1, transform_hlds__term_constr_build__V_44_44);
        }
#line 935 "term_constr_build.m"
        {
#line 935 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = libs__lp_rational__is_false_1_p_0(transform_hlds__term_constr_build__Constraint_30);
        }
#line 935 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 936 "term_constr_build.m"
          {
#line 936 "term_constr_build.m"
            {
#line 936 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_decon_or_con_unify\'/7", (MR_String) "false constraint from unification");
#line 936 "term_constr_build.m"
              return;
            }
#line 936 "term_constr_build.m"
          }
#line 935 "term_constr_build.m"
        else
#line 938 "term_constr_build.m"
          {
#line 938 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SizeVars0_31;
#line 938 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SizeVars1_32;
#line 938 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_48_48;
#line 938 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_49_49;

#line 938 "term_constr_build.m"
            {
#line 938 "term_constr_build.m"
              transform_hlds__term_constr_build__SizeVars0_31 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_25, transform_hlds__term_constr_build__ArgVars_10);
            }
#line 939 "term_constr_build.m"
            {
#line 939 "term_constr_build.m"
              transform_hlds__term_constr_build__SizeVars1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__SizeVars1_32, 0) = ((MR_Box) (transform_hlds__term_constr_build__SizeVar_27));
#line 939 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__SizeVars1_32, 1) = ((MR_Box) (transform_hlds__term_constr_build__SizeVars0_31));
#line 939 "term_constr_build.m"
            }
#line 940 "term_constr_build.m"
            {
#line 940 "term_constr_build.m"
              transform_hlds__term_constr_build__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 940 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[1]));
#line 940 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_2));
#line 940 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 940 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_49_49, 3) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_26));
#line 940 "term_constr_build.m"
            }
#line 940 "term_constr_build.m"
            {
#line 940 "term_constr_build.m"
              transform_hlds__term_constr_build__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 940 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_6[2]));
#line 940 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 1) = ((MR_Box) (transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0_3));
#line 940 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 940 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_48_48, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_49_49));
#line 940 "term_constr_build.m"
            }
#line 940 "term_constr_build.m"
            {
#line 940 "term_constr_build.m"
              transform_hlds__term_constr_build__SizeVars_33 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], transform_hlds__term_constr_build__V_48_48, transform_hlds__term_constr_build__SizeVars1_32);
            }
#line 938 "term_constr_build.m"
          }
#line 942 "term_constr_build.m"
        {
#line 942 "term_constr_build.m"
          transform_hlds__term_constr_build__NonNegConstraints_34 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[8], transform_hlds__term_constr_build__SizeVars_33);
        }
#line 943 "term_constr_build.m"
        {
#line 943 "term_constr_build.m"
          MR_Word base;
#line 943 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "term_constr_build.m"
          *transform_hlds__term_constr_build__Constraints_12 = base;
#line 943 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Constraint_30));
#line 943 "term_constr_build.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__NonNegConstraints_34));
#line 943 "term_constr_build.m"
        }
#line 909 "term_constr_build.m"
      }
#line 888 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_36 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_35;
#line 888 "term_constr_build.m"
  }
#line 883 "term_constr_build.m"
}

#line 851 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_unification_4_p_0(
#line 851 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Unification_5,
#line 851 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 851 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23,
#line 851 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_24)
#line 851 "term_constr_build.m"
{
#line 856 "term_constr_build.m"
  {
#line 856 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 856 "term_constr_build.m"
#line 856 "term_constr_build.m"
    switch (MR_tag((MR_Word) transform_hlds__term_constr_build__Unification_5)) {
#line 856 "term_constr_build.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 856 "term_constr_build.m"
      case (MR_Integer) 0:
#line 856 "term_constr_build.m"
        {
#line 856 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)));
#line 856 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 856 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 2)));
#line 856 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Modes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 3)));
#line 856 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Constraints_15;
#line 856 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Polyhedron_49;
#line 856 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 4)));
#line 856 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 5)));
#line 856 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 6)));

#line 857 "term_constr_build.m"
          {
#line 857 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(transform_hlds__term_constr_build__Var_8, transform_hlds__term_constr_build__ConsId_9, transform_hlds__term_constr_build__ArgVars_10, transform_hlds__term_constr_build__Modes_11, &transform_hlds__term_constr_build__Constraints_15, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
          }
#line 1023 "term_constr_build.m"
          {
#line 1023 "term_constr_build.m"
            transform_hlds__term_constr_build__Polyhedron_49 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_15);
          }
#line 1022 "term_constr_build.m"
          {
#line 1022 "term_constr_build.m"
            MR_Word base;
#line 1022 "term_constr_build.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "term_constr_build.m"
            *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1022 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_49));
#line 1022 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
          }
#line 1024 "term_constr_build.m"
          {
#line 1024 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_49);
          }
#line 1024 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 1025 "term_constr_build.m"
            {
#line 1025 "term_constr_build.m"
              {
#line 1025 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1025 "term_constr_build.m"
                return;
              }
#line 1025 "term_constr_build.m"
            }
#line 1024 "term_constr_build.m"
          else
#line 1027 "term_constr_build.m"
            {
#line 1027 "term_constr_build.m"
            }
#line 856 "term_constr_build.m"
        }
#line 856 "term_constr_build.m"
        break;
#line 856 "term_constr_build.m"
      case (MR_Integer) 1:
#line 861 "term_constr_build.m"
        {
#line 861 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)));
#line 861 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 861 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 2)));
#line 861 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Modes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 3)));
#line 861 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Constraints_36;
#line 861 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Polyhedron_56;
#line 861 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 4)));
#line 861 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 5)));

#line 862 "term_constr_build.m"
          {
#line 862 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_decon_or_con_unify_7_p_0(transform_hlds__term_constr_build__Var_32, transform_hlds__term_constr_build__ConsId_33, transform_hlds__term_constr_build__ArgVars_34, transform_hlds__term_constr_build__Modes_35, &transform_hlds__term_constr_build__Constraints_36, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
          }
#line 1023 "term_constr_build.m"
          {
#line 1023 "term_constr_build.m"
            transform_hlds__term_constr_build__Polyhedron_56 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_36);
          }
#line 1022 "term_constr_build.m"
          {
#line 1022 "term_constr_build.m"
            MR_Word base;
#line 1022 "term_constr_build.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "term_constr_build.m"
            *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1022 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_56));
#line 1022 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
          }
#line 1024 "term_constr_build.m"
          {
#line 1024 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_56);
          }
#line 1024 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 1025 "term_constr_build.m"
            {
#line 1025 "term_constr_build.m"
              {
#line 1025 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1025 "term_constr_build.m"
                return;
              }
#line 1025 "term_constr_build.m"
            }
#line 1024 "term_constr_build.m"
          else
#line 1027 "term_constr_build.m"
            {
#line 1027 "term_constr_build.m"
            }
#line 861 "term_constr_build.m"
        }
#line 856 "term_constr_build.m"
        break;
#line 856 "term_constr_build.m"
      case (MR_Integer) 2:
#line 866 "term_constr_build.m"
        {
#line 866 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__LVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)));
#line 866 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__RVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 866 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Constraints_37;
#line 866 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Polyhedron_42;

#line 867 "term_constr_build.m"
          {
#line 867 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(transform_hlds__term_constr_build__LVar_18, transform_hlds__term_constr_build__RVar_19, &transform_hlds__term_constr_build__Constraints_37, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
          }
#line 1023 "term_constr_build.m"
          {
#line 1023 "term_constr_build.m"
            transform_hlds__term_constr_build__Polyhedron_42 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_37);
          }
#line 1022 "term_constr_build.m"
          {
#line 1022 "term_constr_build.m"
            MR_Word base;
#line 1022 "term_constr_build.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "term_constr_build.m"
            *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1022 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_42));
#line 1022 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
          }
#line 1024 "term_constr_build.m"
          {
#line 1024 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_42);
          }
#line 1024 "term_constr_build.m"
          if (transform_hlds__term_constr_build__succeeded)
#line 1025 "term_constr_build.m"
            {
#line 1025 "term_constr_build.m"
              {
#line 1025 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1025 "term_constr_build.m"
                return;
              }
#line 1025 "term_constr_build.m"
            }
#line 1024 "term_constr_build.m"
          else
#line 1027 "term_constr_build.m"
            {
#line 1027 "term_constr_build.m"
            }
#line 866 "term_constr_build.m"
        }
#line 856 "term_constr_build.m"
        break;
#line 856 "term_constr_build.m"
      case (MR_Integer) 3:
#line 856 "term_constr_build.m"
#line 856 "term_constr_build.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 0)))) {
#line 856 "term_constr_build.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 856 "term_constr_build.m"
          case (MR_Integer) 0:
#line 870 "term_constr_build.m"
            {
#line 870 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Constraints_38;
#line 870 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__LVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 1)));
#line 870 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__RVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Unification_5, (MR_Integer) 2)));
#line 870 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Polyhedron_63;

#line 871 "term_constr_build.m"
              {
#line 871 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_simple_or_assign_unify_5_p_0(transform_hlds__term_constr_build__LVar_39, transform_hlds__term_constr_build__RVar_40, &transform_hlds__term_constr_build__Constraints_38, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_23, transform_hlds__term_constr_build__STATE_VARIABLE_Info_24);
              }
#line 1023 "term_constr_build.m"
              {
#line 1023 "term_constr_build.m"
                transform_hlds__term_constr_build__Polyhedron_63 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_38);
              }
#line 1022 "term_constr_build.m"
              {
#line 1022 "term_constr_build.m"
                MR_Word base;
#line 1022 "term_constr_build.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 1022 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_63));
#line 1022 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1022 "term_constr_build.m"
              }
#line 1024 "term_constr_build.m"
              {
#line 1024 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_build__Polyhedron_63);
              }
#line 1024 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 1025 "term_constr_build.m"
                {
#line 1025 "term_constr_build.m"
                  {
#line 1025 "term_constr_build.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "function \140transform_hlds.term_constr_build.build_goal_from_unify\'/1", (MR_String) "empty polyhedron from unification");
#line 1025 "term_constr_build.m"
                    return;
                  }
#line 1025 "term_constr_build.m"
                }
#line 1024 "term_constr_build.m"
              else
#line 1027 "term_constr_build.m"
                {
#line 1027 "term_constr_build.m"
                }
#line 870 "term_constr_build.m"
            }
#line 856 "term_constr_build.m"
            break;
#line 856 "term_constr_build.m"
          case (MR_Integer) 1:
#line 874 "term_constr_build.m"
            {
#line 875 "term_constr_build.m"
              {
#line 875 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_unification\'/4", (MR_String) "complicated_unify");
#line 875 "term_constr_build.m"
                return;
              }
#line 874 "term_constr_build.m"
            }
#line 856 "term_constr_build.m"
            break;
#line 856 "term_constr_build.m"
        }
#line 856 "term_constr_build.m"
        break;
#line 856 "term_constr_build.m"
    }
#line 856 "term_constr_build.m"
  }
#line 851 "term_constr_build.m"
}

#line 839 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__accumulate_sum_3_p_0(
#line 839 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 839 "term_constr_build.m"
  MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2,
#line 839 "term_constr_build.m"
  MR_Integer * transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_3)
#line 839 "term_constr_build.m"
{
#line 841 "term_constr_build.m"
  while (MR_TRUE)
#line 841 "term_constr_build.m"
    {
#line 841 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 841 "term_constr_build.m"
      {
#line 841 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 841 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 841 "term_constr_build.m"
          *transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_3 = transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2;
#line 841 "term_constr_build.m"
        else
#line 842 "term_constr_build.m"
          {
#line 842 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__Size_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 842 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Sizes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 842 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_12_12 = (transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2 + transform_hlds__term_constr_build__Size_7);

#line 844 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 844 "term_constr_build.m"
            {
#line 844 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__Sizes_8;
#line 844 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0__tmp_copy_2 = transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_12_12;

#line 844 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0_2 = transform_hlds__term_constr_build__STATE_VARIABLE_TotalSize_0__tmp_copy_2;
#line 844 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 844 "term_constr_build.m"
            }
#line 844 "term_constr_build.m"
            continue;
#line 842 "term_constr_build.m"
          }
#line 841 "term_constr_build.m"
      }
#line 841 "term_constr_build.m"
      break;
#line 841 "term_constr_build.m"
    }
#line 839 "term_constr_build.m"
}

#line 831 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0_1(
#line 831 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 831 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 831 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 831 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 831 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4)
#line 831 "term_constr_build.m"
{
#line 831 "term_constr_build.m"
  {
#line 831 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 831 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__conv1_HeadVar__2_46;
#line 831 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_HeadVar__4_48;

#line 831 "term_constr_build.m"
    {
#line 831 "term_constr_build.m"
      transform_hlds__term_constr_build__IntroducedFrom__pred__abstract_from_ground_term_conjunct__831__1_4_p_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), &transform_hlds__term_constr_build__conv1_HeadVar__2_46, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3), &transform_hlds__term_constr_build__conv0_HeadVar__4_48);
    }
#line 831 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv1_HeadVar__2_46));
#line 831 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_constr_build__conv0_HeadVar__4_48));
#line 831 "term_constr_build.m"
  }
#line 831 "term_constr_build.m"
}

#line 797 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__3_3,
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__4_4,
#line 797 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5,
#line 797 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_6)
#line 797 "term_constr_build.m"
{
#line 801 "term_constr_build.m"
  while (MR_TRUE)
#line 801 "term_constr_build.m"
    {
#line 801 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 801 "term_constr_build.m"
      {
#line 801 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 801 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "term_constr_build.m"
          *transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_6 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5;
#line 801 "term_constr_build.m"
        else
#line 804 "term_constr_build.m"
          {
#line 804 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goal_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 0)));
#line 804 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goals_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__4_4, (MR_Integer) 1)));
#line 804 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_21_21;
#line 804 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__GoalExpr_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_16, (MR_Integer) 0)));
#line 816 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build___GoalInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_16, (MR_Integer) 1)));
#line 817 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Var_37;
#line 817 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ConsId_38;
#line 817 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ArgVars_39;
#line 817 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Modes_40;
#line 818 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Unify_35;
#line 818 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_32_32;
#line 818 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_33_33;
#line 818 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_34_34;
#line 818 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_36_36;
#line 819 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_41_41;
#line 819 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_42_42;
#line 819 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_43_43;

#line 818 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_30)) == (MR_mktag((MR_Integer) 1)));
#line 818 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 818 "term_constr_build.m"
              {
#line 818 "term_constr_build.m"
                transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 0)));
#line 818 "term_constr_build.m"
                transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 1)));
#line 818 "term_constr_build.m"
                transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 2)));
#line 818 "term_constr_build.m"
                transform_hlds__term_constr_build__Unify_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 3)));
#line 818 "term_constr_build.m"
                transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_30, (MR_Integer) 4)));
#line 819 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_build__Unify_35)) == (MR_mktag((MR_Integer) 0)));
#line 819 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 819 "term_constr_build.m"
                  {
#line 819 "term_constr_build.m"
                    transform_hlds__term_constr_build__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 0)));
#line 819 "term_constr_build.m"
                    transform_hlds__term_constr_build__ConsId_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 1)));
#line 819 "term_constr_build.m"
                    transform_hlds__term_constr_build__ArgVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 2)));
#line 819 "term_constr_build.m"
                    transform_hlds__term_constr_build__Modes_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 3)));
#line 819 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 4)));
#line 819 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 5)));
#line 819 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Unify_35, (MR_Integer) 6)));
#line 819 "term_constr_build.m"
                  }
#line 818 "term_constr_build.m"
              }
#line 817 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 822 "term_constr_build.m"
              {
#line 822 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeInfo_51_67;
#line 822 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeCtorInfo_52_68;
#line 822 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__FixedArgVars_44;
#line 822 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__FixedModes_45;
#line 822 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Type_46;
#line 822 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeCtor_47;
#line 822 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__ConsIdSize_48;
#line 822 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__CountedVars_49;
#line 822 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ArgSizes_51;
#line 822 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__TotalArgSize_52;
#line 822 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__Size_53;
#line 822 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_39_55;
#line 962 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_77;
#line 962 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_78;
#line 825 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_50_50;
#line 831 "term_constr_build.m"
                MR_Box transform_hlds__term_constr_build__conv2_STATE_VARIABLE_SizeMap_39_55;

#line 962 "term_constr_build.m"
                {
#line 962 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__strip_typeinfos_from_args_and_modes_2_5_p_0(transform_hlds__term_constr_build__HeadVar__3_3, transform_hlds__term_constr_build__ArgVars_39, &transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_77, transform_hlds__term_constr_build__Modes_40, &transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_78);
                }
#line 962 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 963 "term_constr_build.m"
                  {
#line 963 "term_constr_build.m"
                    transform_hlds__term_constr_build__FixedModes_45 = transform_hlds__term_constr_build__STATE_VARIABLE_Modes_14_78;
#line 963 "term_constr_build.m"
                    transform_hlds__term_constr_build__FixedArgVars_44 = transform_hlds__term_constr_build__STATE_VARIABLE_Args_13_77;
#line 963 "term_constr_build.m"
                  }
#line 962 "term_constr_build.m"
                else
#line 965 "term_constr_build.m"
                  {
#line 965 "term_constr_build.m"
                    {
#line 965 "term_constr_build.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.strip_typeinfos_from_args_and_modes\'/5", (MR_String) "unequal length lists");
#line 965 "term_constr_build.m"
                      return;
                    }
#line 965 "term_constr_build.m"
                  }
#line 823 "term_constr_build.m"
                {
#line 823 "term_constr_build.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__HeadVar__3_3, transform_hlds__term_constr_build__Var_37, &transform_hlds__term_constr_build__Type_46);
                }
#line 824 "term_constr_build.m"
                {
#line 824 "term_constr_build.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__Type_46, &transform_hlds__term_constr_build__TypeCtor_47);
                }
#line 825 "term_constr_build.m"
                {
#line 825 "term_constr_build.m"
                  transform_hlds__term_norm__functor_norm_9_p_0(transform_hlds__term_constr_build__HeadVar__1_1, transform_hlds__term_constr_build__HeadVar__2_2, transform_hlds__term_constr_build__TypeCtor_47, transform_hlds__term_constr_build__ConsId_38, &transform_hlds__term_constr_build__ConsIdSize_48, transform_hlds__term_constr_build__FixedArgVars_44, &transform_hlds__term_constr_build__CountedVars_49, transform_hlds__term_constr_build__FixedModes_45, &transform_hlds__term_constr_build__V_50_50);
                }
#line 8560 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeInfo_51_67 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3];
#line 8562 "transform_hlds.term_constr_build.c"
                transform_hlds__term_constr_build__TypeCtorInfo_52_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 831 "term_constr_build.m"
                {
#line 831 "term_constr_build.m"
                  mercury__list__map_foldl_5_p_0(transform_hlds__term_constr_build__TypeInfo_51_67, transform_hlds__term_constr_build__TypeCtorInfo_52_68, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[1], (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[7], transform_hlds__term_constr_build__CountedVars_49, &transform_hlds__term_constr_build__ArgSizes_51, ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5)), &transform_hlds__term_constr_build__conv2_STATE_VARIABLE_SizeMap_39_55);
                }
#line 831 "term_constr_build.m"
                transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_39_55 = ((MR_Word) transform_hlds__term_constr_build__conv2_STATE_VARIABLE_SizeMap_39_55);
#line 832 "term_constr_build.m"
                {
#line 832 "term_constr_build.m"
                  transform_hlds__term_constr_build__accumulate_sum_3_p_0(transform_hlds__term_constr_build__ArgSizes_51, (MR_Integer) 0, &transform_hlds__term_constr_build__TotalArgSize_52);
                }
#line 833 "term_constr_build.m"
                transform_hlds__term_constr_build__Size_53 = (transform_hlds__term_constr_build__ConsIdSize_48 + transform_hlds__term_constr_build__TotalArgSize_52);
#line 834 "term_constr_build.m"
                {
#line 834 "term_constr_build.m"
                  mercury__map__det_insert_4_p_0(transform_hlds__term_constr_build__TypeInfo_51_67, transform_hlds__term_constr_build__TypeCtorInfo_52_68, ((MR_Box) (transform_hlds__term_constr_build__Var_37)), ((MR_Box) (transform_hlds__term_constr_build__Size_53)), transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_39_55, &transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_21_21);
                }
#line 822 "term_constr_build.m"
              }
#line 817 "term_constr_build.m"
            else
#line 836 "term_constr_build.m"
              {
#line 836 "term_constr_build.m"
                {
#line 836 "term_constr_build.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.abstract_from_ground_term_conjunct\'/6", (MR_String) "malformed conjunct");
#line 836 "term_constr_build.m"
                  return;
                }
#line 836 "term_constr_build.m"
              }
#line 807 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 807 "term_constr_build.m"
            {
#line 807 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__4__tmp_copy_4 = transform_hlds__term_constr_build__Goals_17;
#line 807 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0__tmp_copy_5 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_21_21;

#line 807 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0_5 = transform_hlds__term_constr_build__STATE_VARIABLE_SizeMap_0__tmp_copy_5;
#line 807 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__4_4 = transform_hlds__term_constr_build__HeadVar__4__tmp_copy_4;
#line 807 "term_constr_build.m"
            }
#line 807 "term_constr_build.m"
            continue;
#line 804 "term_constr_build.m"
          }
#line 801 "term_constr_build.m"
      }
#line 801 "term_constr_build.m"
      break;
#line 801 "term_constr_build.m"
    }
#line 797 "term_constr_build.m"
}

#line 768 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(
#line 768 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__TermVar_6,
#line 768 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SubGoal_7,
#line 768 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 768 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24,
#line 768 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_25)
#line 768 "term_constr_build.m"
{
#line 772 "term_constr_build.m"
  {
#line 772 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 772 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SubGoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__SubGoal_7, (MR_Integer) 0)));
#line 773 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build___SubGoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__SubGoal_7, (MR_Integer) 1)));
#line 774 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Conjuncts_12;
#line 774 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;

#line 774 "term_constr_build.m"
    transform_hlds__term_constr_build__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_build__SubGoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__SubGoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 774 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 774 "term_constr_build.m"
      {
#line 774 "term_constr_build.m"
        transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__SubGoalExpr_10, (MR_Integer) 1)));
#line 774 "term_constr_build.m"
        transform_hlds__term_constr_build__Conjuncts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__SubGoalExpr_10, (MR_Integer) 2)));
#line 774 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_26_26 == (MR_Integer) 0);
#line 774 "term_constr_build.m"
      }
#line 774 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 775 "term_constr_build.m"
      {
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeVarMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Zeros_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__TermSizeVar_15;
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Constraints_16;
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 9)));
#line 775 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 10)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 11)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 12)));
#line 775 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 13)));

#line 777 "term_constr_build.m"
        {
#line 777 "term_constr_build.m"
          transform_hlds__term_constr_build__TermSizeVar_15 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_13, transform_hlds__term_constr_build__TermVar_6);
        }
#line 778 "term_constr_build.m"
        {
#line 778 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__TermSizeVar_15)), transform_hlds__term_constr_build__Zeros_14);
        }
#line 778 "term_constr_build.m"
        if (transform_hlds__term_constr_build__succeeded)
#line 779 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 778 "term_constr_build.m"
        else
#line 781 "term_constr_build.m"
          {
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__TypeInfo_108_108 = (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3];
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__TypeCtorInfo_109_109 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Norm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SizeMap_20;
#line 781 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__KnownTermVarSize_21;
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Terms_22;
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Constraint_23;
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_27_27;
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_28_28;
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_29_29;
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_32_32;
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 9)));
#line 781 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 10)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 11)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 12)));
#line 781 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24, (MR_Integer) 13)));
#line 786 "term_constr_build.m"
            MR_Box transform_hlds__term_constr_build__conv0_KnownTermVarSize_21;

#line 785 "term_constr_build.m"
            {
#line 785 "term_constr_build.m"
              transform_hlds__term_constr_build__V_27_27 = mercury__map__init_0_f_0(transform_hlds__term_constr_build__TypeInfo_108_108, transform_hlds__term_constr_build__TypeCtorInfo_109_109);
            }
#line 784 "term_constr_build.m"
            {
#line 784 "term_constr_build.m"
              transform_hlds__term_constr_build__abstract_from_ground_term_conjuncts_6_p_0(transform_hlds__term_constr_build__ModuleInfo_17, transform_hlds__term_constr_build__Norm_18, transform_hlds__term_constr_build__VarTypes_19, transform_hlds__term_constr_build__Conjuncts_12, transform_hlds__term_constr_build__V_27_27, &transform_hlds__term_constr_build__SizeMap_20);
            }
#line 786 "term_constr_build.m"
            {
#line 786 "term_constr_build.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_constr_build__TypeInfo_108_108, transform_hlds__term_constr_build__TypeCtorInfo_109_109, transform_hlds__term_constr_build__SizeMap_20, ((MR_Box) (transform_hlds__term_constr_build__TermVar_6)), &transform_hlds__term_constr_build__conv0_KnownTermVarSize_21);
            }
#line 786 "term_constr_build.m"
            transform_hlds__term_constr_build__KnownTermVarSize_21 = ((MR_Integer) transform_hlds__term_constr_build__conv0_KnownTermVarSize_21);
#line 787 "term_constr_build.m"
            {
#line 787 "term_constr_build.m"
              transform_hlds__term_constr_build__V_29_29 = libs__rat__one_0_f_0();
            }
#line 787 "term_constr_build.m"
            {
#line 787 "term_constr_build.m"
              transform_hlds__term_constr_build__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 787 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_28_28, 0) = ((MR_Box) (transform_hlds__term_constr_build__TermSizeVar_15));
#line 787 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_28_28, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_29_29));
#line 787 "term_constr_build.m"
            }
#line 787 "term_constr_build.m"
            {
#line 787 "term_constr_build.m"
              transform_hlds__term_constr_build__Terms_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_22, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_28_28));
#line 787 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Terms_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "term_constr_build.m"
            }
#line 789 "term_constr_build.m"
            {
#line 789 "term_constr_build.m"
              transform_hlds__term_constr_build__V_32_32 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__KnownTermVarSize_21);
            }
#line 789 "term_constr_build.m"
            {
#line 789 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraint_23 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_build__Terms_22, (MR_Integer) 1, transform_hlds__term_constr_build__V_32_32);
            }
#line 790 "term_constr_build.m"
            {
#line 790 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraints_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_16, 0) = ((MR_Box) (transform_hlds__term_constr_build__Constraint_23));
#line 790 "term_constr_build.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Constraints_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "term_constr_build.m"
            }
#line 781 "term_constr_build.m"
          }
#line 792 "term_constr_build.m"
        {
#line 792 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_8 = transform_hlds__term_constr_build__build_goal_from_unify_1_f_0(transform_hlds__term_constr_build__Constraints_16);
        }
#line 775 "term_constr_build.m"
      }
#line 774 "term_constr_build.m"
    else
#line 794 "term_constr_build.m"
      {
#line 794 "term_constr_build.m"
        {
#line 794 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_from_ground_term_goal\'/5", (MR_String) "not conj");
#line 794 "term_constr_build.m"
          return;
        }
#line 794 "term_constr_build.m"
      }
#line 772 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_25 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_24;
#line 772 "term_constr_build.m"
  }
#line 768 "term_constr_build.m"
}

#line 744 "term_constr_build.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_build__detect_switch_var_3_p_0(
#line 744 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 744 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchVar_2,
#line 744 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ConsId_3)
#line 744 "term_constr_build.m"
{
#line 746 "term_constr_build.m"
  {
#line 746 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 746 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 746 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));

#line 746 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__V_45_45)) == (MR_mktag((MR_Integer) 1))))
#line 746 "term_constr_build.m"
      {
#line 746 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Kind_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 3)));
#line 746 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 0)));
#line 746 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 1)));
#line 746 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 2)));
#line 746 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 4)));

#line 749 "term_constr_build.m"
        if (((MR_tag((MR_Word) transform_hlds__term_constr_build__Kind_7)) == (MR_mktag((MR_Integer) 1))))
#line 748 "term_constr_build.m"
          {
#line 748 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 0)));
#line 748 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 1)));
#line 748 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 2)));
#line 748 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 3)));
#line 748 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 4)));
#line 748 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 5)));

#line 748 "term_constr_build.m"
            {
#line 748 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_build__SwitchVar_2)), ((MR_Box) (transform_hlds__term_constr_build__V_42_42)));
            }
#line 748 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 748 "term_constr_build.m"
              {
#line 748 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__term_constr_build__ConsId_3, transform_hlds__term_constr_build__V_43_43);
              }
#line 748 "term_constr_build.m"
          }
#line 749 "term_constr_build.m"
        else
#line 749 "term_constr_build.m"
        if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__Kind_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Kind_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 750 "term_constr_build.m"
          {
#line 751 "term_constr_build.m"
            {
#line 751 "term_constr_build.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "complicated_unify");
            }
#line 750 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 750 "term_constr_build.m"
          }
#line 749 "term_constr_build.m"
        else
#line 749 "term_constr_build.m"
          transform_hlds__term_constr_build__succeeded = MR_FALSE;
#line 746 "term_constr_build.m"
      }
#line 746 "term_constr_build.m"
    else
#line 746 "term_constr_build.m"
    if (((((MR_tag((MR_Word) transform_hlds__term_constr_build__V_45_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__V_45_45, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 759 "term_constr_build.m"
      {
#line 760 "term_constr_build.m"
        {
#line 760 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.detect_switch_var\'/3", (MR_String) "shorthand");
        }
#line 759 "term_constr_build.m"
        transform_hlds__term_constr_build__succeeded = MR_TRUE;
#line 759 "term_constr_build.m"
      }
#line 746 "term_constr_build.m"
    else
#line 746 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = MR_FALSE;
#line 746 "term_constr_build.m"
    return transform_hlds__term_constr_build__succeeded;
#line 746 "term_constr_build.m"
  }
#line 744 "term_constr_build.m"
}

#line 688 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(
#line 688 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SwitchProgVar_1,
#line 688 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__2_2,
#line 688 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3,
#line 688 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_4,
#line 688 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5,
#line 688 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_6)
#line 688 "term_constr_build.m"
{
#line 692 "term_constr_build.m"
  while (MR_TRUE)
#line 692 "term_constr_build.m"
    {
#line 692 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 692 "term_constr_build.m"
      {
#line 692 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 692 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "term_constr_build.m"
          {
#line 692 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_Info_6 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5;
#line 692 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_4 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3;
#line 692 "term_constr_build.m"
          }
#line 692 "term_constr_build.m"
        else
#line 694 "term_constr_build.m"
          {
#line 694 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 0)));
#line 694 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__2_2, (MR_Integer) 1)));
#line 694 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Case_15, (MR_Integer) 0)));
#line 694 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Case_15, (MR_Integer) 1)));
#line 694 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Case_15, (MR_Integer) 2)));
#line 694 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AbstractGoal0_22;
#line 694 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AbstractGoal_23;
#line 694 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42;
#line 694 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_51_51;

#line 696 "term_constr_build.m"
            {
#line 696 "term_constr_build.m"
              transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Goal_21, &transform_hlds__term_constr_build__AbstractGoal0_22, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42);
            }
#line 708 "term_constr_build.m"
            transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__OtherConsIds_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 709 "term_constr_build.m"
              {
#line 709 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = transform_hlds__term_constr_build__detect_switch_var_3_p_0(transform_hlds__term_constr_build__Goal_21, transform_hlds__term_constr_build__SwitchProgVar_1, transform_hlds__term_constr_build__MainConsId_19);
              }
#line 707 "term_constr_build.m"
            if (transform_hlds__term_constr_build__succeeded)
#line 711 "term_constr_build.m"
              transform_hlds__term_constr_build__AbstractGoal_23 = transform_hlds__term_constr_build__AbstractGoal0_22;
#line 707 "term_constr_build.m"
            else
#line 713 "term_constr_build.m"
              {
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 6)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SizeVarMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 8)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SwitchVarType_26;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__SwitchSizeVar_27;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__TypeCtor_28;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ModuleInfo_29;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Norm_30;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__Zeros_31;
#line 713 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__Size_32;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ExtraConstr_33;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ExtraPoly_36;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__ExtraGoal_37;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_46_46;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_47_47;
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 2)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 3)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 4)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 5)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 7)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 9)));
#line 713 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 10)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 11)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 12)));
#line 713 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 13)));
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_82_82;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_83_83;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_84_84;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_86_86;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_87_87;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_88_88;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_90_90;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_91_91;
#line 718 "term_constr_build.m"
                MR_Integer transform_hlds__term_constr_build__V_92_92;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_93_93;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_94_94;
#line 718 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_95_95;

#line 715 "term_constr_build.m"
                {
#line 715 "term_constr_build.m"
                  hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_constr_build__TypeMap_24, transform_hlds__term_constr_build__SwitchProgVar_1, &transform_hlds__term_constr_build__SwitchVarType_26);
                }
#line 716 "term_constr_build.m"
                {
#line 716 "term_constr_build.m"
                  transform_hlds__term_constr_build__SwitchSizeVar_27 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_build__SizeVarMap_25, transform_hlds__term_constr_build__SwitchProgVar_1);
                }
#line 717 "term_constr_build.m"
                {
#line 717 "term_constr_build.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__term_constr_build__SwitchVarType_26, &transform_hlds__term_constr_build__TypeCtor_28);
                }
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_82_82 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__ModuleInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 2)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__Norm_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 3)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 4)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 5)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 6)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__Zeros_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 7)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 8)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 9)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 10)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 11)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 12)));
#line 718 "term_constr_build.m"
                transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42, (MR_Integer) 13)));
#line 721 "term_constr_build.m"
                {
#line 721 "term_constr_build.m"
                  transform_hlds__term_constr_build__Size_32 = transform_hlds__term_norm__functor_lower_bound_4_f_0(transform_hlds__term_constr_build__ModuleInfo_29, transform_hlds__term_constr_build__Norm_30, transform_hlds__term_constr_build__TypeCtor_28, transform_hlds__term_constr_build__MainConsId_19);
                }
#line 722 "term_constr_build.m"
                {
#line 722 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = mercury__set__member_2_p_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[4], ((MR_Box) (transform_hlds__term_constr_build__SwitchSizeVar_27)), transform_hlds__term_constr_build__Zeros_31);
                }
#line 722 "term_constr_build.m"
                if (transform_hlds__term_constr_build__succeeded)
#line 723 "term_constr_build.m"
                  transform_hlds__term_constr_build__ExtraConstr_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 722 "term_constr_build.m"
                else
#line 725 "term_constr_build.m"
                  {
#line 725 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__SwitchVarConst_34;
#line 725 "term_constr_build.m"
                    MR_Word transform_hlds__term_constr_build__SwitchVarConstr_35;

#line 725 "term_constr_build.m"
                    {
#line 725 "term_constr_build.m"
                      transform_hlds__term_constr_build__SwitchVarConst_34 = libs__rat__rat_1_f_0(transform_hlds__term_constr_build__Size_32);
                    }
#line 726 "term_constr_build.m"
                    transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__Size_32 == (MR_Integer) 0);
#line 726 "term_constr_build.m"
                    if (transform_hlds__term_constr_build__succeeded)
#line 727 "term_constr_build.m"
                      {
#line 727 "term_constr_build.m"
                        transform_hlds__term_constr_build__SwitchVarConstr_35 = libs__lp_rational__make_var_const_eq_constraint_2_f_0(transform_hlds__term_constr_build__SwitchSizeVar_27, transform_hlds__term_constr_build__SwitchVarConst_34);
                      }
#line 726 "term_constr_build.m"
                    else
#line 731 "term_constr_build.m"
                      {
#line 731 "term_constr_build.m"
                        transform_hlds__term_constr_build__SwitchVarConstr_35 = libs__lp_rational__make_var_const_gte_constraint_2_f_0(transform_hlds__term_constr_build__SwitchSizeVar_27, transform_hlds__term_constr_build__SwitchVarConst_34);
                      }
#line 735 "term_constr_build.m"
                    {
#line 735 "term_constr_build.m"
                      transform_hlds__term_constr_build__ExtraConstr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "term_constr_build.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__ExtraConstr_33, 0) = ((MR_Box) (transform_hlds__term_constr_build__SwitchVarConstr_35));
#line 735 "term_constr_build.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__ExtraConstr_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "term_constr_build.m"
                    }
#line 725 "term_constr_build.m"
                  }
#line 737 "term_constr_build.m"
                {
#line 737 "term_constr_build.m"
                  transform_hlds__term_constr_build__ExtraPoly_36 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__ExtraConstr_33);
                }
#line 738 "term_constr_build.m"
                {
#line 738 "term_constr_build.m"
                  transform_hlds__term_constr_build__ExtraGoal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 738 "term_constr_build.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ExtraGoal_37, 0) = ((MR_Box) (transform_hlds__term_constr_build__ExtraPoly_36));
#line 738 "term_constr_build.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ExtraGoal_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 738 "term_constr_build.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__ExtraGoal_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 738 "term_constr_build.m"
                }
#line 739 "term_constr_build.m"
                {
#line 739 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_47_47, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractGoal0_22));
#line 739 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 739 "term_constr_build.m"
                }
#line 739 "term_constr_build.m"
                {
#line 739 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_46_46, 0) = ((MR_Box) (transform_hlds__term_constr_build__ExtraGoal_37));
#line 739 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_46_46, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_47_47));
#line 739 "term_constr_build.m"
                }
#line 739 "term_constr_build.m"
                {
#line 739 "term_constr_build.m"
                  transform_hlds__term_constr_build__AbstractGoal_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 739 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoal_23, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_46_46));
#line 739 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoal_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 739 "term_constr_build.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoal_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 739 "term_constr_build.m"
                }
#line 713 "term_constr_build.m"
              }
#line 741 "term_constr_build.m"
            {
#line 741 "term_constr_build.m"
              mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, ((MR_Box) (transform_hlds__term_constr_build__AbstractGoal_23)), transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3, &transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_51_51);
            }
#line 742 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 742 "term_constr_build.m"
            {
#line 742 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__2__tmp_copy_2 = transform_hlds__term_constr_build__Cases_16;
#line 742 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_3 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_51_51;
#line 742 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_42_42;

#line 742 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_5;
#line 742 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_3 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_3;
#line 742 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__2_2 = transform_hlds__term_constr_build__HeadVar__2__tmp_copy_2;
#line 742 "term_constr_build.m"
            }
#line 742 "term_constr_build.m"
            continue;
#line 694 "term_constr_build.m"
          }
#line 692 "term_constr_build.m"
      }
#line 692 "term_constr_build.m"
      break;
#line 692 "term_constr_build.m"
    }
#line 688 "term_constr_build.m"
}

#line 667 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(
#line 667 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__HeadVar__1_1,
#line 667 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2,
#line 667 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_3,
#line 667 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 667 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5)
#line 667 "term_constr_build.m"
{
#line 671 "term_constr_build.m"
  while (MR_TRUE)
#line 671 "term_constr_build.m"
    {
#line 671 "term_constr_build.m"
      /* tailcall optimized into a loop */
#line 671 "term_constr_build.m"
      {
#line 671 "term_constr_build.m"
        MR_bool transform_hlds__term_constr_build__succeeded;

#line 671 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "term_constr_build.m"
          {
#line 671 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_Info_5 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4;
#line 671 "term_constr_build.m"
            *transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_3 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2;
#line 671 "term_constr_build.m"
          }
#line 671 "term_constr_build.m"
        else
#line 672 "term_constr_build.m"
          {
#line 672 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 0)));
#line 672 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__HeadVar__1_1, (MR_Integer) 1)));
#line 672 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__AbstractGoal_16;
#line 672 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_21_21;
#line 672 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_22_22;

#line 673 "term_constr_build.m"
            {
#line 673 "term_constr_build.m"
              transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Goal_12, &transform_hlds__term_constr_build__AbstractGoal_16, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_21_21);
            }
#line 674 "term_constr_build.m"
            {
#line 674 "term_constr_build.m"
              mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, ((MR_Box) (transform_hlds__term_constr_build__AbstractGoal_16)), transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2, &transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_22_22);
            }
#line 675 "term_constr_build.m"
            /* direct tailcall eliminated */
#line 675 "term_constr_build.m"
            {
#line 675 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_build__Goals_13;
#line 675 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_2 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_22_22;
#line 675 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_21_21;

#line 675 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 675 "term_constr_build.m"
              transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0_2 = transform_hlds__term_constr_build__STATE_VARIABLE_AbstractGoals_0__tmp_copy_2;
#line 675 "term_constr_build.m"
              transform_hlds__term_constr_build__HeadVar__1_1 = transform_hlds__term_constr_build__HeadVar__1__tmp_copy_1;
#line 675 "term_constr_build.m"
            }
#line 675 "term_constr_build.m"
            continue;
#line 672 "term_constr_build.m"
          }
#line 671 "term_constr_build.m"
      }
#line 671 "term_constr_build.m"
      break;
#line 671 "term_constr_build.m"
    }
#line 667 "term_constr_build.m"
}

#line 644 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_disj_4_p_0(
#line 644 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Type_5,
#line 644 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 644 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17,
#line 644 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_18)
#line 644 "term_constr_build.m"
{
#line 647 "term_constr_build.m"
  {
#line 647 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 647 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoals_9;

#line 651 "term_constr_build.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_build__Type_5)) == (MR_mktag((MR_Integer) 1))))
#line 649 "term_constr_build.m"
      {
#line 649 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__Type_5, (MR_Integer) 0)));

#line 650 "term_constr_build.m"
        {
#line 650 "term_constr_build.m"
          transform_hlds__term_constr_build__build_abstract_disj_acc_5_p_0(transform_hlds__term_constr_build__Goals_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_build__AbstractGoals_9, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);
        }
#line 649 "term_constr_build.m"
      }
#line 651 "term_constr_build.m"
    else
#line 652 "term_constr_build.m"
      {
#line 652 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SwitchVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Type_5, (MR_Integer) 0)));
#line 652 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Type_5, (MR_Integer) 1)));

#line 653 "term_constr_build.m"
        {
#line 653 "term_constr_build.m"
          transform_hlds__term_constr_build__build_abstract_switch_acc_6_p_0(transform_hlds__term_constr_build__SwitchVar_10, transform_hlds__term_constr_build__Cases_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_build__AbstractGoals_9, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_17, transform_hlds__term_constr_build__STATE_VARIABLE_Info_18);
        }
#line 652 "term_constr_build.m"
      }
#line 658 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__AbstractGoals_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "term_constr_build.m"
      {
#line 656 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_27_27;

#line 657 "term_constr_build.m"
        {
#line 657 "term_constr_build.m"
          transform_hlds__term_constr_build__V_27_27 = libs__polyhedron__universe_0_f_0();
        }
#line 657 "term_constr_build.m"
        {
#line 657 "term_constr_build.m"
          MR_Word base;
#line 657 "term_constr_build.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 657 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 657 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_27_27));
#line 657 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "term_constr_build.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "term_constr_build.m"
        }
#line 656 "term_constr_build.m"
      }
#line 658 "term_constr_build.m"
    else
#line 658 "term_constr_build.m"
      {
#line 658 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoals_9, (MR_Integer) 1)));
#line 658 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractGoals_9, (MR_Integer) 0)));

#line 658 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "term_constr_build.m"
          *transform_hlds__term_constr_build__AbstractGoal_6 = transform_hlds__term_constr_build__V_32_32;
#line 658 "term_constr_build.m"
        else
#line 662 "term_constr_build.m"
          {
#line 662 "term_constr_build.m"
            MR_Integer transform_hlds__term_constr_build__DisjSize_16;

#line 663 "term_constr_build.m"
            {
#line 663 "term_constr_build.m"
              transform_hlds__term_constr_build__DisjSize_16 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, transform_hlds__term_constr_build__AbstractGoals_9);
            }
#line 664 "term_constr_build.m"
            {
#line 664 "term_constr_build.m"
              MR_Word base;
#line 664 "term_constr_build.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 664 "term_constr_build.m"
              *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 664 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractGoals_9));
#line 664 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__DisjSize_16));
#line 664 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "term_constr_build.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "term_constr_build.m"
            }
#line 662 "term_constr_build.m"
          }
#line 658 "term_constr_build.m"
      }
#line 647 "term_constr_build.m"
  }
#line 644 "term_constr_build.m"
}

#line 565 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(
#line 565 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 565 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 565 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 565 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 565 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34,
#line 565 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_35)
#line 565 "term_constr_build.m"
{
#line 570 "term_constr_build.m"
  {
#line 570 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 570 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 570 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerPPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 570 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ZeroVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 7)));
#line 570 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CalleeProcInfo_16;
#line 570 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CalleeTerm2Info_17;
#line 570 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ArgAnalysisOnly_18;
#line 570 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ArgSizeInfo_24;
#line 570 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Constraints_27;
#line 570 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Polyhedron_33;
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 8)));
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 9)));
#line 571 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 10)));
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 11)));
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 12)));
#line 571 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 13)));
#line 574 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_88_88;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_89_89;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_90_90;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_91_91;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_92_92;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_93_93;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_94_94;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_95_95;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_96_96;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_97_97;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_98_98;
#line 579 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_99_99;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_100_100;
#line 579 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_101_101;

#line 574 "term_constr_build.m"
    {
#line 574 "term_constr_build.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_build__ModuleInfo_12, transform_hlds__term_constr_build__CalleePPId_7, &transform_hlds__term_constr_build__V_15_15, &transform_hlds__term_constr_build__CalleeProcInfo_16);
    }
#line 578 "term_constr_build.m"
    {
#line 578 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_build__CalleeProcInfo_16, &transform_hlds__term_constr_build__CalleeTerm2Info_17);
    }
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_88_88 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_89_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 4)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 5)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 6)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 7)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 8)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 9)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 10)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 11)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 12)));
#line 579 "term_constr_build.m"
    transform_hlds__term_constr_build__ArgAnalysisOnly_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, (MR_Integer) 13)));
#line 598 "term_constr_build.m"
#line 598 "term_constr_build.m"
    switch (transform_hlds__term_constr_build__ArgAnalysisOnly_18) {
#line 598 "term_constr_build.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 598 "term_constr_build.m"
      case (MR_Integer) 0:
#line 581 "term_constr_build.m"
        {
#line 581 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__MaybeTermStatus_19;

#line 582 "term_constr_build.m"
          {
#line 582 "term_constr_build.m"
            transform_hlds__term_constr_build__MaybeTermStatus_19 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(transform_hlds__term_constr_build__CalleeTerm2Info_17);
          }
#line 593 "term_constr_build.m"
          if ((transform_hlds__term_constr_build__MaybeTermStatus_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 594 "term_constr_build.m"
            {
#line 595 "term_constr_build.m"
              {
#line 595 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "callee procedure has no termination status.");
#line 595 "term_constr_build.m"
                return;
              }
#line 594 "term_constr_build.m"
            }
#line 593 "term_constr_build.m"
          else
#line 584 "term_constr_build.m"
            {
#line 584 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__TermStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__MaybeTermStatus_19, (MR_Integer) 0)));

#line 590 "term_constr_build.m"
              if (((MR_tag((MR_Word) transform_hlds__term_constr_build__TermStatus_20)) == (MR_mktag((MR_Integer) 1))))
#line 586 "term_constr_build.m"
                {
#line 586 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__Error_22;
#line 586 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_39_39;

#line 588 "term_constr_build.m"
                  {
#line 588 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "term_constr_build.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_39_39, 0) = ((MR_Box) (transform_hlds__term_constr_build__CallerPPId_13));
#line 588 "term_constr_build.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_build__CalleePPId_7));
#line 588 "term_constr_build.m"
                  }
#line 587 "term_constr_build.m"
                  {
#line 587 "term_constr_build.m"
                    transform_hlds__term_constr_build__Error_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_22, 0) = ((MR_Box) (transform_hlds__term_constr_build__Context_9));
#line 587 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_22, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 587 "term_constr_build.m"
                  }
#line 589 "term_constr_build.m"
                  {
#line 589 "term_constr_build.m"
                    transform_hlds__term_constr_build__tti_info_add_error_3_p_0(transform_hlds__term_constr_build__Error_22, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34, transform_hlds__term_constr_build__STATE_VARIABLE_Info_35);
                  }
#line 586 "term_constr_build.m"
                }
#line 590 "term_constr_build.m"
              else
#line 591 "term_constr_build.m"
                *transform_hlds__term_constr_build__STATE_VARIABLE_Info_35 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34;
#line 584 "term_constr_build.m"
            }
#line 581 "term_constr_build.m"
        }
#line 598 "term_constr_build.m"
        break;
#line 598 "term_constr_build.m"
      case (MR_Integer) 1:
#line 599 "term_constr_build.m"
        *transform_hlds__term_constr_build__STATE_VARIABLE_Info_35 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_34;
#line 598 "term_constr_build.m"
        break;
#line 598 "term_constr_build.m"
    }
#line 603 "term_constr_build.m"
    {
#line 603 "term_constr_build.m"
      transform_hlds__term_constr_build__ArgSizeInfo_24 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_build__CalleeTerm2Info_17);
    }
#line 607 "term_constr_build.m"
    if ((transform_hlds__term_constr_build__ArgSizeInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "term_constr_build.m"
      {
#line 606 "term_constr_build.m"
        {
#line 606 "term_constr_build.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_non_recursive_call\'/6", (MR_String) "no argument size info for callee proc");
#line 606 "term_constr_build.m"
          return;
        }
#line 605 "term_constr_build.m"
      }
#line 607 "term_constr_build.m"
    else
#line 608 "term_constr_build.m"
      {
#line 608 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__SizeInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__ArgSizeInfo_24, (MR_Integer) 0)));
#line 608 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__ArgSizeConstrs0_26;

#line 609 "term_constr_build.m"
        {
#line 609 "term_constr_build.m"
          transform_hlds__term_constr_build__ArgSizeConstrs0_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_build__SizeInfo_25);
        }
#line 613 "term_constr_build.m"
        if ((transform_hlds__term_constr_build__ArgSizeConstrs0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "term_constr_build.m"
          transform_hlds__term_constr_build__Constraints_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 613 "term_constr_build.m"
        else
#line 614 "term_constr_build.m"
          {
#line 614 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__CalleeHeadVars_30;
#line 614 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__SubstMap_31;
#line 614 "term_constr_build.m"
            MR_Word transform_hlds__term_constr_build__Constraints0_32;

#line 615 "term_constr_build.m"
            {
#line 615 "term_constr_build.m"
              transform_hlds__term_constr_build__CalleeHeadVars_30 = transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(transform_hlds__term_constr_build__CalleeTerm2Info_17);
            }
#line 616 "term_constr_build.m"
            {
#line 616 "term_constr_build.m"
              transform_hlds__term_constr_build__SubstMap_31 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__CalleeHeadVars_30);
            }
#line 617 "term_constr_build.m"
            {
#line 617 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraints0_32 = libs__lp_rational__substitute_vars_2_f_0(transform_hlds__term_constr_build__SubstMap_31, transform_hlds__term_constr_build__ArgSizeConstrs0_26);
            }
#line 619 "term_constr_build.m"
            {
#line 619 "term_constr_build.m"
              transform_hlds__term_constr_build__Constraints_27 = libs__lp_rational__set_vars_to_zero_2_f_0(transform_hlds__term_constr_build__ZeroVars_14, transform_hlds__term_constr_build__Constraints0_32);
            }
#line 614 "term_constr_build.m"
          }
#line 608 "term_constr_build.m"
      }
#line 622 "term_constr_build.m"
    {
#line 622 "term_constr_build.m"
      transform_hlds__term_constr_build__Polyhedron_33 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_27);
    }
#line 623 "term_constr_build.m"
    {
#line 623 "term_constr_build.m"
      MR_Word base;
#line 623 "term_constr_build.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 623 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_10 = base;
#line 623 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_33));
#line 623 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "term_constr_build.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "term_constr_build.m"
    }
#line 570 "term_constr_build.m"
  }
#line 565 "term_constr_build.m"
}

#line 540 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_recursive_call_6_p_0(
#line 540 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 540 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 540 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_9,
#line 540 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 540 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 540 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17)
#line 540 "term_constr_build.m"
{
#line 544 "term_constr_build.m"
  {
#line 544 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 544 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerPPId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 544 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerZeros_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 544 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerArgConstrs_14;
#line 544 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__CallerArgPoly_15;
#line 544 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19;
#line 544 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23;
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 545 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 545 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));

#line 547 "term_constr_build.m"
    {
#line 547 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_build__CallerPPId_12, transform_hlds__term_constr_build__CalleePPId_7);
    }
#line 547 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 548 "term_constr_build.m"
      {
#line 548 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__UpdatedRecType_59;
#line 548 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 359 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 359 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_77_77;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_78_78;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_79_79;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_80_80;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_81_81;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_82_82;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_83_83;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_84_84;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_85_85;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_86_86;
#line 360 "term_constr_build.m"
        MR_Integer transform_hlds__term_constr_build__V_87_87;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_88_88;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_89_89;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_90_90;
#line 360 "term_constr_build.m"
        MR_Word transform_hlds__term_constr_build__V_76_76;

#line 359 "term_constr_build.m"
        {
#line 359 "term_constr_build.m"
          transform_hlds__term_constr_build__UpdatedRecType_59 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(transform_hlds__term_constr_build__V_60_60, (MR_Integer) 1);
        }
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 360 "term_constr_build.m"
        transform_hlds__term_constr_build__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 360 "term_constr_build.m"
        {
#line 360 "term_constr_build.m"
          transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 0) = ((MR_Box) ((transform_hlds__term_constr_build__UpdatedRecType_59 | ((transform_hlds__term_constr_build__V_77_77 << (MR_Integer) 2)))));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_78_78));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_79_79));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_80_80));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_81_81));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_82_82));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_83_83));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_84_84));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_85_85));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_86_86));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_87_87));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_88_88));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_89_89));
#line 360 "term_constr_build.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_90_90));
#line 360 "term_constr_build.m"
        }
#line 548 "term_constr_build.m"
      }
#line 547 "term_constr_build.m"
    else
#line 550 "term_constr_build.m"
      {
#line 550 "term_constr_build.m"
        {
#line 550 "term_constr_build.m"
          transform_hlds__term_constr_build__info_update_recursion_3_p_0((MR_Integer) 2, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19);
        }
#line 550 "term_constr_build.m"
      }
#line 552 "term_constr_build.m"
    {
#line 552 "term_constr_build.m"
      transform_hlds__term_constr_build__CallerArgConstrs_14 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__CallerZeros_13);
    }
#line 553 "term_constr_build.m"
    {
#line 553 "term_constr_build.m"
      transform_hlds__term_constr_build__CallerArgPoly_15 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__CallerArgConstrs_14);
    }
#line 554 "term_constr_build.m"
    {
#line 554 "term_constr_build.m"
      transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(transform_hlds__term_constr_build__STATE_VARIABLE_Info_19_19, transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);
    }
#line 555 "term_constr_build.m"
    transform_hlds__term_constr_build__V_23_23 = (MR_Word) transform_hlds__term_constr_build__CalleePPId_7;
#line 555 "term_constr_build.m"
    {
#line 555 "term_constr_build.m"
      MR_Word base;
#line 555 "term_constr_build.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 555 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_10 = base;
#line 555 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 555 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__Context_9));
#line 555 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__CallerArgs_8));
#line 555 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__CallerZeros_13));
#line 555 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "term_constr_build.m"
      MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__CallerArgPoly_15));
#line 555 "term_constr_build.m"
    }
#line 544 "term_constr_build.m"
  }
#line 540 "term_constr_build.m"
}

#line 523 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_call_6_p_0(
#line 523 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CalleePPId_7,
#line 523 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__CallerArgs_8,
#line 523 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_9,
#line 523 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_10,
#line 523 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13,
#line 523 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_14)
#line 523 "term_constr_build.m"
{
#line 527 "term_constr_build.m"
  {
#line 527 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 527 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Context_12;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;
#line 529 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_28_28;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30;
#line 529 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31;

#line 528 "term_constr_build.m"
    {
#line 528 "term_constr_build.m"
      transform_hlds__term_constr_build__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_constr_build__GoalInfo_9);
    }
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 11)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 12)));
#line 529 "term_constr_build.m"
    transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, (MR_Integer) 13)));
#line 529 "term_constr_build.m"
    {
#line 529 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_constr_build__CalleePPId_7)), transform_hlds__term_constr_build__V_15_15);
    }
#line 529 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 530 "term_constr_build.m"
      {
#line 530 "term_constr_build.m"
        transform_hlds__term_constr_build__build_recursive_call_6_p_0(transform_hlds__term_constr_build__CalleePPId_7, transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__Context_12, transform_hlds__term_constr_build__AbstractGoal_10, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, transform_hlds__term_constr_build__STATE_VARIABLE_Info_14);
      }
#line 529 "term_constr_build.m"
    else
#line 533 "term_constr_build.m"
      {
#line 533 "term_constr_build.m"
        transform_hlds__term_constr_build__build_non_recursive_call_6_p_0(transform_hlds__term_constr_build__CalleePPId_7, transform_hlds__term_constr_build__CallerArgs_8, transform_hlds__term_constr_build__Context_12, transform_hlds__term_constr_build__AbstractGoal_10, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_13, transform_hlds__term_constr_build__STATE_VARIABLE_Info_14);
      }
#line 527 "term_constr_build.m"
  }
#line 523 "term_constr_build.m"
}

#line 514 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0_1(
#line 514 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 514 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 514 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_2,
#line 514 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_3,
#line 514 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_4)
#line 514 "term_constr_build.m"
{
#line 514 "term_constr_build.m"
  {
#line 514 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 514 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv1_AbstractGoal_6;
#line 514 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Info_17;

#line 514 "term_constr_build.m"
    {
#line 514 "term_constr_build.m"
      transform_hlds__term_constr_build__build_abstract_goal_4_p_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), &transform_hlds__term_constr_build__conv1_AbstractGoal_6, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_3), &transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Info_17);
    }
#line 514 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv1_AbstractGoal_6));
#line 514 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_constr_build__conv0_STATE_VARIABLE_Info_17));
#line 514 "term_constr_build.m"
  }
#line 514 "term_constr_build.m"
}

#line 510 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_conj_4_p_0(
#line 510 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Conjuncts_5,
#line 510 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 510 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_10,
#line 510 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_11)
#line 510 "term_constr_build.m"
{
#line 513 "term_constr_build.m"
  {
#line 513 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 513 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoals0_8;
#line 513 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoals_9;
#line 514 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv2_STATE_VARIABLE_Info_11;

#line 514 "term_constr_build.m"
    {
#line 514 "term_constr_build.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_tti_traversal_info_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[6], transform_hlds__term_constr_build__Conjuncts_5, &transform_hlds__term_constr_build__AbstractGoals0_8, ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_10)), &transform_hlds__term_constr_build__conv2_STATE_VARIABLE_Info_11);
    }
#line 514 "term_constr_build.m"
    *transform_hlds__term_constr_build__STATE_VARIABLE_Info_11 = ((MR_Word) transform_hlds__term_constr_build__conv2_STATE_VARIABLE_Info_11);
#line 515 "term_constr_build.m"
    {
#line 515 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractGoals_9 = transform_hlds__term_constr_data__simplify_conjuncts_1_f_0(transform_hlds__term_constr_build__AbstractGoals0_8);
    }
#line 516 "term_constr_build.m"
    {
#line 516 "term_constr_build.m"
      MR_Word base;
#line 516 "term_constr_build.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 516 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_6 = base;
#line 516 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractGoals_9));
#line 516 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "term_constr_build.m"
    }
#line 513 "term_constr_build.m"
  }
#line 510 "term_constr_build.m"
}

#line 467 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0_1(
#line 467 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 467 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1)
#line 467 "term_constr_build.m"
{
#line 467 "term_constr_build.m"
  {
#line 467 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_2;
#line 467 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 467 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_LambdaHeadVar__2_71;

#line 467 "term_constr_build.m"
    {
#line 467 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_LambdaHeadVar__2_71 = transform_hlds__term_constr_build__IntroducedFrom__func__build_abstract_goal_2__467__1_1_f_0(((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1));
    }
#line 467 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_build__conv0_LambdaHeadVar__2_71));
#line 467 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_2;
#line 467 "term_constr_build.m"
  }
#line 467 "term_constr_build.m"
}

#line 396 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(
#line 396 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalExpr_6,
#line 396 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__GoalInfo_7,
#line 396 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_8,
#line 396 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61,
#line 396 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_62)
#line 396 "term_constr_build.m"
{
#line 402 "term_constr_build.m"
  {
#line 402 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;

#line 402 "term_constr_build.m"
#line 402 "term_constr_build.m"
    switch (MR_tag((MR_Word) transform_hlds__term_constr_build__GoalExpr_6)) {
#line 402 "term_constr_build.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 402 "term_constr_build.m"
      case (MR_Integer) 0:
#line 449 "term_constr_build.m"
        {
#line 449 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__SubGoal_112 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_constr_build__GoalExpr_6), (MR_Integer) 0);
#line 452 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_39_39;

#line 452 "term_constr_build.m"
          {
#line 452 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__SubGoal_112, &transform_hlds__term_constr_build__V_39_39, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
          }
#line 458 "term_constr_build.m"
          {
#line 458 "term_constr_build.m"
            *transform_hlds__term_constr_build__AbstractGoal_8 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(*transform_hlds__term_constr_build__STATE_VARIABLE_Info_62, transform_hlds__term_constr_build__SubGoal_112);
          }
#line 449 "term_constr_build.m"
        }
#line 402 "term_constr_build.m"
        break;
#line 402 "term_constr_build.m"
      case (MR_Integer) 1:
#line 446 "term_constr_build.m"
        {
#line 446 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__Unification_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 446 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)));
#line 446 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 446 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 446 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));

#line 447 "term_constr_build.m"
          {
#line 447 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_unification_4_p_0(transform_hlds__term_constr_build__Unification_37, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
          }
#line 446 "term_constr_build.m"
        }
#line 402 "term_constr_build.m"
        break;
#line 402 "term_constr_build.m"
      case (MR_Integer) 2:
#line 440 "term_constr_build.m"
        {
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__CallPredId_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)));
#line 440 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__CallProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__CallArgs_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__CallSizeArgs_33;
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_86_86;
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));
#line 440 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 5)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_115_115 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
#line 441 "term_constr_build.m"
          MR_Integer transform_hlds__term_constr_build__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 11)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 12)));
#line 441 "term_constr_build.m"
          MR_Word transform_hlds__term_constr_build__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 13)));

#line 441 "term_constr_build.m"
          {
#line 441 "term_constr_build.m"
            transform_hlds__term_constr_build__CallSizeArgs_33 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_85_85, transform_hlds__term_constr_build__CallArgs_29);
          }
#line 443 "term_constr_build.m"
          {
#line 443 "term_constr_build.m"
            transform_hlds__term_constr_build__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 443 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_86_86, 0) = ((MR_Box) (transform_hlds__term_constr_build__CallPredId_27));
#line 443 "term_constr_build.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_86_86, 1) = ((MR_Box) (transform_hlds__term_constr_build__CallProcId_28));
#line 443 "term_constr_build.m"
          }
#line 443 "term_constr_build.m"
          {
#line 443 "term_constr_build.m"
            transform_hlds__term_constr_build__build_abstract_call_6_p_0(transform_hlds__term_constr_build__V_86_86, transform_hlds__term_constr_build__CallSizeArgs_33, transform_hlds__term_constr_build__GoalInfo_7, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
          }
#line 440 "term_constr_build.m"
        }
#line 402 "term_constr_build.m"
        break;
#line 402 "term_constr_build.m"
      case (MR_Integer) 3:
#line 402 "term_constr_build.m"
#line 402 "term_constr_build.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 0)))) {
#line 402 "term_constr_build.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 402 "term_constr_build.m"
          case (MR_Integer) 0:
#line 489 "term_constr_build.m"
            {
#line 489 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_66_66;
#line 489 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Context_114;

#line 496 "term_constr_build.m"
              {
#line 496 "term_constr_build.m"
                transform_hlds__term_constr_build__Context_114 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_constr_build__GoalInfo_7);
              }
#line 497 "term_constr_build.m"
              {
#line 497 "term_constr_build.m"
                transform_hlds__term_constr_build__V_66_66 = libs__polyhedron__universe_0_f_0();
              }
#line 497 "term_constr_build.m"
              {
#line 497 "term_constr_build.m"
                MR_Word base;
#line 497 "term_constr_build.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 497 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_8 = base;
#line 497 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_66_66));
#line 497 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "term_constr_build.m"
              }
#line 498 "term_constr_build.m"
              {
#line 498 "term_constr_build.m"
                transform_hlds__term_constr_build__info_update_ho_info_3_p_0(transform_hlds__term_constr_build__Context_114, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
              }
#line 489 "term_constr_build.m"
            }
#line 402 "term_constr_build.m"
            break;
#line 402 "term_constr_build.m"
          case (MR_Integer) 1:
#line 461 "term_constr_build.m"
            {
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__TypeCtorInfo_160_160 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Attrs_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__PredId_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 461 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__ExtraArgs_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 5)));
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__ProgVars_49;
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__SizeVars_50;
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Constraints_51;
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Polyhedron_54;
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_72_72;
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_73_73;
#line 461 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_74_74;
#line 460 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 6)));
#line 460 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 7)));
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_132_132;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_133_133;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_134_134;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_135_135;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_136_136;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_137_137;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_138_138;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_139_139;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_140_140;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_141_141;
#line 469 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__V_142_142;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_143_143;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_144_144;
#line 469 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_145_145;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_146_146;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_147_147;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_148_148;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_149_149;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_150_150;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_151_151;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_152_152;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_153_153;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_154_154;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_155_155;
#line 470 "term_constr_build.m"
              MR_Integer transform_hlds__term_constr_build__V_156_156;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_157_157;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_158_158;
#line 470 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_159_159;

#line 468 "term_constr_build.m"
              {
#line 468 "term_constr_build.m"
                transform_hlds__term_constr_build__V_72_72 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_build__TypeCtorInfo_160_160, transform_hlds__term_constr_build__Args_43, transform_hlds__term_constr_build__ExtraArgs_44);
              }
#line 468 "term_constr_build.m"
              {
#line 468 "term_constr_build.m"
                transform_hlds__term_constr_build__ProgVars_49 = mercury__list__map_2_f_0(transform_hlds__term_constr_build__TypeCtorInfo_160_160, (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[5], transform_hlds__term_constr_build__V_72_72);
              }
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_132_132 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 11)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 12)));
#line 469 "term_constr_build.m"
              transform_hlds__term_constr_build__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 13)));
#line 469 "term_constr_build.m"
              {
#line 469 "term_constr_build.m"
                transform_hlds__term_constr_build__SizeVars_50 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__V_73_73, transform_hlds__term_constr_build__ProgVars_49);
              }
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_146_146 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 11)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 12)));
#line 470 "term_constr_build.m"
              transform_hlds__term_constr_build__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, (MR_Integer) 13)));
#line 470 "term_constr_build.m"
              {
#line 470 "term_constr_build.m"
                transform_hlds__term_constr_build__Constraints_51 = transform_hlds__term_constr_util__make_arg_constraints_2_f_0(transform_hlds__term_constr_build__SizeVars_50, transform_hlds__term_constr_build__V_74_74);
              }
#line 473 "term_constr_build.m"
              {
#line 473 "term_constr_build.m"
                MR_Word transform_hlds__term_constr_build__V_77_77;

#line 473 "term_constr_build.m"
                {
#line 473 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_77_77 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_constr_build__Attrs_40);
                }
#line 473 "term_constr_build.m"
                transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_77_77 == (MR_Integer) 0);
#line 473 "term_constr_build.m"
              }
#line 474 "term_constr_build.m"
              if (!(transform_hlds__term_constr_build__succeeded))
#line 475 "term_constr_build.m"
                {
#line 475 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_75_75;
#line 475 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_76_76;

#line 475 "term_constr_build.m"
                  {
#line 475 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_75_75 = parse_tree__prog_data__get_terminates_1_f_0(transform_hlds__term_constr_build__Attrs_40);
                  }
#line 475 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_75_75 == (MR_Integer) 2);
#line 475 "term_constr_build.m"
                  if (transform_hlds__term_constr_build__succeeded)
#line 475 "term_constr_build.m"
                    {
#line 476 "term_constr_build.m"
                      {
#line 476 "term_constr_build.m"
                        transform_hlds__term_constr_build__V_76_76 = parse_tree__prog_data__get_may_call_mercury_1_f_0(transform_hlds__term_constr_build__Attrs_40);
                      }
#line 476 "term_constr_build.m"
                      transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_76_76 == (MR_Integer) 1);
#line 475 "term_constr_build.m"
                    }
#line 475 "term_constr_build.m"
                }
#line 471 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 471 "term_constr_build.m"
                *transform_hlds__term_constr_build__STATE_VARIABLE_Info_62 = transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61;
#line 471 "term_constr_build.m"
              else
#line 481 "term_constr_build.m"
                {
#line 481 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__Context_52;
#line 481 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__Error_53;
#line 481 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_78_78;
#line 481 "term_constr_build.m"
                  MR_Word transform_hlds__term_constr_build__V_79_79;

#line 481 "term_constr_build.m"
                  {
#line 481 "term_constr_build.m"
                    transform_hlds__term_constr_build__Context_52 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_constr_build__GoalInfo_7);
                  }
#line 483 "term_constr_build.m"
                  {
#line 483 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_79_79, 0) = ((MR_Box) (transform_hlds__term_constr_build__PredId_41));
#line 483 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_79_79, 1) = ((MR_Box) (transform_hlds__term_constr_build__ProcId_42));
#line 483 "term_constr_build.m"
                  }
#line 483 "term_constr_build.m"
                  {
#line 483 "term_constr_build.m"
                    transform_hlds__term_constr_build__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "term_constr_build.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__V_78_78, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_79_79));
#line 483 "term_constr_build.m"
                  }
#line 482 "term_constr_build.m"
                  {
#line 482 "term_constr_build.m"
                    transform_hlds__term_constr_build__Error_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 482 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_53, 0) = ((MR_Box) (transform_hlds__term_constr_build__Context_52));
#line 482 "term_constr_build.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Error_53, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_78_78));
#line 482 "term_constr_build.m"
                  }
#line 484 "term_constr_build.m"
                  {
#line 484 "term_constr_build.m"
                    transform_hlds__term_constr_build__tti_info_add_error_3_p_0(transform_hlds__term_constr_build__Error_53, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
                  }
#line 481 "term_constr_build.m"
                }
#line 486 "term_constr_build.m"
              {
#line 486 "term_constr_build.m"
                transform_hlds__term_constr_build__Polyhedron_54 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_build__Constraints_51);
              }
#line 487 "term_constr_build.m"
              {
#line 487 "term_constr_build.m"
                MR_Word base;
#line 487 "term_constr_build.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 487 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_8 = base;
#line 487 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__Polyhedron_54));
#line 487 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "term_constr_build.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "term_constr_build.m"
              }
#line 461 "term_constr_build.m"
            }
#line 402 "term_constr_build.m"
            break;
#line 402 "term_constr_build.m"
          case (MR_Integer) 2:
#line 402 "term_constr_build.m"
            {
#line 402 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 402 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));

#line 405 "term_constr_build.m"
              {
#line 405 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_conj_4_p_0(transform_hlds__term_constr_build__Goals_11, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
              }
#line 402 "term_constr_build.m"
            }
#line 402 "term_constr_build.m"
            break;
#line 402 "term_constr_build.m"
          case (MR_Integer) 3:
#line 407 "term_constr_build.m"
            {
#line 407 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_108_108;
#line 407 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Goals_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));

#line 408 "term_constr_build.m"
              {
#line 408 "term_constr_build.m"
                transform_hlds__term_constr_build__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_108_108, 0) = ((MR_Box) (transform_hlds__term_constr_build__Goals_111));
#line 408 "term_constr_build.m"
              }
#line 408 "term_constr_build.m"
              {
#line 408 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_disj_4_p_0(transform_hlds__term_constr_build__V_108_108, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
              }
#line 407 "term_constr_build.m"
            }
#line 402 "term_constr_build.m"
            break;
#line 402 "term_constr_build.m"
          case (MR_Integer) 4:
#line 410 "term_constr_build.m"
            {
#line 410 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__SwitchVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 410 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 410 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_106_106;
#line 410 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));

#line 411 "term_constr_build.m"
              {
#line 411 "term_constr_build.m"
                transform_hlds__term_constr_build__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 411 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_106_106, 0) = ((MR_Box) (transform_hlds__term_constr_build__SwitchVar_12));
#line 411 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_106_106, 1) = ((MR_Box) (transform_hlds__term_constr_build__Cases_14));
#line 411 "term_constr_build.m"
              }
#line 411 "term_constr_build.m"
              {
#line 411 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_disj_4_p_0(transform_hlds__term_constr_build__V_106_106, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
              }
#line 410 "term_constr_build.m"
            }
#line 402 "term_constr_build.m"
            break;
#line 402 "term_constr_build.m"
          case (MR_Integer) 5:
#line 430 "term_constr_build.m"
            {
#line 430 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Reason_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));
#line 430 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__SubGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 431 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__TermVar_26;
#line 432 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_88_88;

#line 432 "term_constr_build.m"
              transform_hlds__term_constr_build__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_build__Reason_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Reason_24, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 432 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 432 "term_constr_build.m"
                {
#line 432 "term_constr_build.m"
                  transform_hlds__term_constr_build__TermVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Reason_24, (MR_Integer) 1)));
#line 432 "term_constr_build.m"
                  transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__Reason_24, (MR_Integer) 2)));
#line 432 "term_constr_build.m"
                  transform_hlds__term_constr_build__succeeded = (transform_hlds__term_constr_build__V_88_88 == (MR_Integer) 1);
#line 432 "term_constr_build.m"
                }
#line 431 "term_constr_build.m"
              if (transform_hlds__term_constr_build__succeeded)
#line 434 "term_constr_build.m"
                {
#line 434 "term_constr_build.m"
                  transform_hlds__term_constr_build__build_abstract_from_ground_term_goal_5_p_0(transform_hlds__term_constr_build__TermVar_26, transform_hlds__term_constr_build__SubGoal_25, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
                }
#line 431 "term_constr_build.m"
              else
#line 437 "term_constr_build.m"
                {
#line 437 "term_constr_build.m"
                  transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__SubGoal_25, transform_hlds__term_constr_build__AbstractGoal_8, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
                }
#line 430 "term_constr_build.m"
            }
#line 402 "term_constr_build.m"
            break;
#line 402 "term_constr_build.m"
          case (MR_Integer) 6:
#line 413 "term_constr_build.m"
            {
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 2)));
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Then_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 3)));
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__Else_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 4)));
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__AbstractSuccessGoal_19;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__CondFail_20;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__AbstractElse_21;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__AbstractFailureGoal_22;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__AbstractDisjuncts_23;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_91_91;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_93_93;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_96_96;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_97_97;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_101_101;
#line 413 "term_constr_build.m"
              MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_build__GoalExpr_6, (MR_Integer) 1)));

#line 416 "term_constr_build.m"
              {
#line 416 "term_constr_build.m"
                transform_hlds__term_constr_build__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_93_93, 0) = ((MR_Box) (transform_hlds__term_constr_build__Then_17));
#line 416 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "term_constr_build.m"
              }
#line 416 "term_constr_build.m"
              {
#line 416 "term_constr_build.m"
                transform_hlds__term_constr_build__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_91_91, 0) = ((MR_Box) (transform_hlds__term_constr_build__Cond_16));
#line 416 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_91_91, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_93_93));
#line 416 "term_constr_build.m"
              }
#line 416 "term_constr_build.m"
              {
#line 416 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_conj_4_p_0(transform_hlds__term_constr_build__V_91_91, &transform_hlds__term_constr_build__AbstractSuccessGoal_19, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_61, &transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92);
              }
#line 421 "term_constr_build.m"
              {
#line 421 "term_constr_build.m"
                transform_hlds__term_constr_build__CondFail_20 = transform_hlds__term_constr_build__find_failure_constraint_for_goal_2_f_0(transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92, transform_hlds__term_constr_build__Cond_16);
              }
#line 425 "term_constr_build.m"
              {
#line 425 "term_constr_build.m"
                transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Else_18, &transform_hlds__term_constr_build__AbstractElse_21, transform_hlds__term_constr_build__STATE_VARIABLE_Info_92_92, transform_hlds__term_constr_build__STATE_VARIABLE_Info_62);
              }
#line 426 "term_constr_build.m"
              {
#line 426 "term_constr_build.m"
                transform_hlds__term_constr_build__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_97_97, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractElse_21));
#line 426 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "term_constr_build.m"
              }
#line 426 "term_constr_build.m"
              {
#line 426 "term_constr_build.m"
                transform_hlds__term_constr_build__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_96_96, 0) = ((MR_Box) (transform_hlds__term_constr_build__CondFail_20));
#line 426 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_96_96, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_97_97));
#line 426 "term_constr_build.m"
              }
#line 426 "term_constr_build.m"
              {
#line 426 "term_constr_build.m"
                transform_hlds__term_constr_build__AbstractFailureGoal_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 426 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractFailureGoal_22, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_96_96));
#line 426 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractFailureGoal_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractFailureGoal_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "term_constr_build.m"
              }
#line 427 "term_constr_build.m"
              {
#line 427 "term_constr_build.m"
                transform_hlds__term_constr_build__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_101_101, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractFailureGoal_22));
#line 427 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "term_constr_build.m"
              }
#line 427 "term_constr_build.m"
              {
#line 427 "term_constr_build.m"
                transform_hlds__term_constr_build__AbstractDisjuncts_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractDisjuncts_23, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractSuccessGoal_19));
#line 427 "term_constr_build.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__AbstractDisjuncts_23, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_101_101));
#line 427 "term_constr_build.m"
              }
#line 428 "term_constr_build.m"
              {
#line 428 "term_constr_build.m"
                MR_Word base;
#line 428 "term_constr_build.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 428 "term_constr_build.m"
                *transform_hlds__term_constr_build__AbstractGoal_8 = base;
#line 428 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_build__AbstractDisjuncts_23));
#line 428 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 2));
#line 428 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "term_constr_build.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "term_constr_build.m"
              }
#line 413 "term_constr_build.m"
            }
#line 402 "term_constr_build.m"
            break;
#line 402 "term_constr_build.m"
          case (MR_Integer) 7:
#line 500 "term_constr_build.m"
            {
#line 502 "term_constr_build.m"
              {
#line 502 "term_constr_build.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_build", (MR_String) "predicate \140transform_hlds.term_constr_build.build_abstract_goal_2\'/5", (MR_String) "shorthand");
#line 502 "term_constr_build.m"
                return;
              }
#line 500 "term_constr_build.m"
            }
#line 402 "term_constr_build.m"
            break;
#line 402 "term_constr_build.m"
        }
#line 402 "term_constr_build.m"
        break;
#line 402 "term_constr_build.m"
    }
#line 402 "term_constr_build.m"
  }
#line 396 "term_constr_build.m"
}

#line 383 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__build_abstract_goal_4_p_0(
#line 383 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Goal_5,
#line 383 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__AbstractGoal_6,
#line 383 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16,
#line 383 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_17)
#line 383 "term_constr_build.m"
{
#line 386 "term_constr_build.m"
  {
#line 386 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__TypeCtorInfo_12_41;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractGoal0_10;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Locals0_11;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonLocals0_12;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap_13;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Locals_14;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonLocals_15;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalInfo_36;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__NonLocals0_37;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__QuantVars_38;
#line 386 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_40_40;
#line 1050 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__GoalExpr_35;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28;
#line 390 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_29_29;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31;
#line 390 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32;

#line 388 "term_constr_build.m"
    {
#line 388 "term_constr_build.m"
      transform_hlds__term_constr_build__build_abstract_goal_2_5_p_0(transform_hlds__term_constr_build__GoalExpr_8, transform_hlds__term_constr_build__GoalInfo_9, &transform_hlds__term_constr_build__AbstractGoal0_10, transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_16, transform_hlds__term_constr_build__STATE_VARIABLE_Info_17);
    }
#line 1050 "term_constr_build.m"
    transform_hlds__term_constr_build__GoalExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 0)));
#line 1050 "term_constr_build.m"
    transform_hlds__term_constr_build__GoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Goal_5, (MR_Integer) 1)));
#line 1051 "term_constr_build.m"
    {
#line 1051 "term_constr_build.m"
      transform_hlds__term_constr_build__NonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__term_constr_build__GoalInfo_36);
    }
#line 1052 "term_constr_build.m"
    {
#line 1052 "term_constr_build.m"
      transform_hlds__term_constr_build__QuantVars_38 = hlds__quantification__free_goal_vars_1_f_0(transform_hlds__term_constr_build__Goal_5);
    }
#line 11260 "transform_hlds.term_constr_build.c"
    transform_hlds__term_constr_build__TypeCtorInfo_12_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1054 "term_constr_build.m"
    {
#line 1054 "term_constr_build.m"
      transform_hlds__term_constr_build__V_40_40 = parse_tree__set_of_var__difference_2_f_0(transform_hlds__term_constr_build__TypeCtorInfo_12_41, transform_hlds__term_constr_build__QuantVars_38, transform_hlds__term_constr_build__NonLocals0_37);
    }
#line 1053 "term_constr_build.m"
    {
#line 1053 "term_constr_build.m"
      transform_hlds__term_constr_build__Locals0_11 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__term_constr_build__TypeCtorInfo_12_41, transform_hlds__term_constr_build__V_40_40);
    }
#line 1055 "term_constr_build.m"
    {
#line 1055 "term_constr_build.m"
      transform_hlds__term_constr_build__NonLocals0_12 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__term_constr_build__TypeCtorInfo_12_41, transform_hlds__term_constr_build__NonLocals0_37);
    }
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 1)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 2)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 3)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 4)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 5)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 6)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 7)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__SizeVarMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 8)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 9)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 10)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 11)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 12)));
#line 390 "term_constr_build.m"
    transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__term_constr_build__STATE_VARIABLE_Info_17, (MR_Integer) 13)));
#line 391 "term_constr_build.m"
    {
#line 391 "term_constr_build.m"
      transform_hlds__term_constr_build__Locals_14 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_13, transform_hlds__term_constr_build__Locals0_11);
    }
#line 392 "term_constr_build.m"
    {
#line 392 "term_constr_build.m"
      transform_hlds__term_constr_build__NonLocals_15 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_13, transform_hlds__term_constr_build__NonLocals0_12);
    }
#line 393 "term_constr_build.m"
    {
#line 393 "term_constr_build.m"
      *transform_hlds__term_constr_build__AbstractGoal_6 = transform_hlds__term_constr_data__update_local_and_nonlocal_vars_3_f_0(transform_hlds__term_constr_build__AbstractGoal0_10, transform_hlds__term_constr_build__Locals_14, transform_hlds__term_constr_build__NonLocals_15);
    }
#line 386 "term_constr_build.m"
  }
#line 383 "term_constr_build.m"
}

#line 362 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_ho_info_3_p_0(
#line 362 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_4,
#line 362 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 362 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7)
#line 362 "term_constr_build.m"
{
#line 365 "term_constr_build.m"
  {
#line 365 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_9_9;
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_10_10 = (MR_Word) transform_hlds__term_constr_build__Context_4;
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 365 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
#line 365 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));

#line 366 "term_constr_build.m"
    {
#line 366 "term_constr_build.m"
      transform_hlds__term_constr_build__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_10_10));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_11_11));
#line 366 "term_constr_build.m"
    }
#line 366 "term_constr_build.m"
    {
#line 366 "term_constr_build.m"
      MR_Word base;
#line 366 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 366 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_7 = base;
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__V_12_12 | ((transform_hlds__term_constr_build__V_13_13 << (MR_Integer) 2)))));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_14_14));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_15_15));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_17_17));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_18_18));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_19_19));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_20_20));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_21_21));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_22_22));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_24_24));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_9_9));
#line 366 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_25_25));
#line 366 "term_constr_build.m"
    }
#line 365 "term_constr_build.m"
  }
#line 362 "term_constr_build.m"
}

#line 355 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_update_recursion_3_p_0(
#line 355 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__RecType_4,
#line 355 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7,
#line 355 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_8)
#line 355 "term_constr_build.m"
{
#line 358 "term_constr_build.m"
  {
#line 358 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 358 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__UpdatedRecType_6;
#line 358 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 9)));
#line 359 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 10)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 11)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 12)));
#line 359 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 13)));
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_26_26;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_27_27;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_28_28;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_29_29;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_30_30;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_31_31;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_32_32;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_33_33;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_34_34;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_35_35;
#line 360 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_36_36;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_37_37;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39;
#line 360 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_25_25;

#line 359 "term_constr_build.m"
    {
#line 359 "term_constr_build.m"
      transform_hlds__term_constr_build__UpdatedRecType_6 = transform_hlds__term_constr_data__combine_recursion_types_2_f_0(transform_hlds__term_constr_build__V_9_9, transform_hlds__term_constr_build__RecType_4);
    }
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 9)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 10)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 11)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 12)));
#line 360 "term_constr_build.m"
    transform_hlds__term_constr_build__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_7, (MR_Integer) 13)));
#line 360 "term_constr_build.m"
    {
#line 360 "term_constr_build.m"
      MR_Word base;
#line 360 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 360 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_8 = base;
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__UpdatedRecType_6 | ((transform_hlds__term_constr_build__V_26_26 << (MR_Integer) 2)))));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_27_27));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_28_28));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_29_29));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_30_30));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_31_31));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_32_32));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_33_33));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_34_34));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_35_35));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_36_36));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_37_37));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_38_38));
#line 360 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_39_39));
#line 360 "term_constr_build.m"
    }
#line 358 "term_constr_build.m"
  }
#line 355 "term_constr_build.m"
}

#line 349 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__tti_info_add_error_3_p_0(
#line 349 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Error_4,
#line 349 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6,
#line 349 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_7)
#line 349 "term_constr_build.m"
{
#line 352 "term_constr_build.m"
  {
#line 352 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_9_9;
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 352 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
#line 352 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));

#line 353 "term_constr_build.m"
    {
#line 353 "term_constr_build.m"
      transform_hlds__term_constr_build__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 0) = ((MR_Box) (transform_hlds__term_constr_build__Error_4));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_build__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_10_10));
#line 353 "term_constr_build.m"
    }
#line 353 "term_constr_build.m"
    {
#line 353 "term_constr_build.m"
      MR_Word base;
#line 353 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 353 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_7 = base;
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__V_11_11 | ((transform_hlds__term_constr_build__V_12_12 << (MR_Integer) 2)))));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_9_9));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_13_13));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_14_14));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_15_15));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_17_17));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_18_18));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_19_19));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_20_20));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_21_21));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_22_22));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 353 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_24_24));
#line 353 "term_constr_build.m"
    }
#line 352 "term_constr_build.m"
  }
#line 349 "term_constr_build.m"
}

#line 343 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__info_increment_maxcalls_2_p_0(
#line 343 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4,
#line 343 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_Info_5)
#line 343 "term_constr_build.m"
{
#line 346 "term_constr_build.m"
  {
#line 346 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 346 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_7_7;
#line 346 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 10)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 8)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 9)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 11)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 12)));
#line 346 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__STATE_VARIABLE_Info_0_4, (MR_Integer) 13)));

#line 347 "term_constr_build.m"
    transform_hlds__term_constr_build__V_7_7 = (transform_hlds__term_constr_build__V_8_8 + (MR_Integer) 1);
#line 347 "term_constr_build.m"
    {
#line 347 "term_constr_build.m"
      MR_Word base;
#line 347 "term_constr_build.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 347 "term_constr_build.m"
      *transform_hlds__term_constr_build__STATE_VARIABLE_Info_5 = base;
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((transform_hlds__term_constr_build__V_10_10 | ((transform_hlds__term_constr_build__V_11_11 << (MR_Integer) 2)))));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_build__V_12_12));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_constr_build__V_13_13));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__term_constr_build__V_14_14));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_15_15));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__term_constr_build__V_16_16));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__term_constr_build__V_17_17));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__term_constr_build__V_18_18));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__term_constr_build__V_19_19));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_20_20));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_7_7));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_21_21));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (transform_hlds__term_constr_build__V_22_22));
#line 347 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (transform_hlds__term_constr_build__V_23_23));
#line 347 "term_constr_build.m"
    }
#line 346 "term_constr_build.m"
  }
#line 343 "term_constr_build.m"
}

#line 333 "term_constr_build.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_build__init_traversal_info_10_f_0(
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_12,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Norm_13,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_14,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Context_15,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Types_16,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Zeros_17,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__VarMap_18,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_19,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__FailConstrs_20,
#line 333 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ArgSizeOnly_21)
#line 333 "term_constr_build.m"
{
#line 339 "term_constr_build.m"
  {
#line 339 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 339 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__11_11;

#line 339 "term_constr_build.m"
    {
#line 339 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 0) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 2)))));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 2) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_12));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 3) = ((MR_Box) (transform_hlds__term_constr_build__Norm_13));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 4) = ((MR_Box) (transform_hlds__term_constr_build__PPId_14));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 5) = ((MR_Box) (transform_hlds__term_constr_build__Context_15));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 6) = ((MR_Box) (transform_hlds__term_constr_build__Types_16));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 7) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_17));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 8) = ((MR_Box) (transform_hlds__term_constr_build__VarMap_18));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 9) = ((MR_Box) (transform_hlds__term_constr_build__SCC_19));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 10) = ((MR_Box) ((MR_Integer) 0));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 11) = ((MR_Box) (transform_hlds__term_constr_build__FailConstrs_20));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 12) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__11_11, 13) = ((MR_Box) (transform_hlds__term_constr_build__ArgSizeOnly_21));
#line 339 "term_constr_build.m"
    }
#line 339 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__11_11;
#line 339 "term_constr_build.m"
  }
#line 333 "term_constr_build.m"
}

#line 230 "term_constr_build.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0_1(
#line 230 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 230 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 230 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2)
#line 230 "term_constr_build.m"
{
#line 230 "term_constr_build.m"
  {
#line 230 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__wrapper_arg_3;
#line 230 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 230 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_LambdaHeadVar__3_59;

#line 230 "term_constr_build.m"
    {
#line 230 "term_constr_build.m"
      transform_hlds__term_constr_build__conv0_LambdaHeadVar__3_59 = transform_hlds__term_constr_build__IntroducedFrom__func__term_constr_build_abstract_proc__230__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2));
    }
#line 230 "term_constr_build.m"
    transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv0_LambdaHeadVar__3_59));
#line 230 "term_constr_build.m"
    return transform_hlds__term_constr_build__wrapper_arg_3;
#line 230 "term_constr_build.m"
  }
#line 230 "term_constr_build.m"
}

#line 188 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0(
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__EntryProcs_10,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Options_11,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_12,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__ModuleInfo_13,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__PPId_14,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_43,
#line 188 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_44,
#line 188 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_0_45,
#line 188 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_46)
#line 188 "term_constr_build.m"
{
#line 194 "term_constr_build.m"
  {
#line 194 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredInfo_18;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ProcInfo_19;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Context_20;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__VarTypes_21;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadProgVars_22;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ArgModes0_23;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Goal0_24;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Goal_25;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarMap_26;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Zeros_27;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Info0_28;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractBody0_29;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Info_30;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__IntermodStatus_31;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadSizeVars_32;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractBody_33;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ChooseArg_34;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__Inputs_39;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__IsEntryPoint_40;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractProc_41;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__ThisProcInfo_42;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_54_54;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_60_60;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_61_61;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_74_74;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_75_75;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_95_95;
#line 194 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_104_104;
#line 194 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_106_106;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_80_80;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_81_81;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_82_82;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_83_83;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_84_84;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_85_85;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_86_86;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_87_87;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_88_88;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_89_89;
#line 224 "term_constr_build.m"
    MR_Integer transform_hlds__term_constr_build__V_90_90;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_91_91;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_92_92;
#line 224 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_93_93;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_94_94;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_96_96;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_97_97;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_98_98;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_99_99;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_100_100;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_101_101;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_102_102;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_103_103;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_105_105;
#line 246 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_107_107;

#line 202 "term_constr_build.m"
    {
#line 202 "term_constr_build.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_build__ModuleInfo_13, transform_hlds__term_constr_build__PPId_14, &transform_hlds__term_constr_build__PredInfo_18, &transform_hlds__term_constr_build__ProcInfo_19);
    }
#line 203 "term_constr_build.m"
    {
#line 203 "term_constr_build.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_constr_build__PredInfo_18, &transform_hlds__term_constr_build__Context_20);
    }
#line 204 "term_constr_build.m"
    {
#line 204 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_constr_build__ProcInfo_19, &transform_hlds__term_constr_build__VarTypes_21);
    }
#line 205 "term_constr_build.m"
    {
#line 205 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_build__ProcInfo_19, &transform_hlds__term_constr_build__HeadProgVars_22);
    }
#line 206 "term_constr_build.m"
    {
#line 206 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_constr_build__ProcInfo_19, &transform_hlds__term_constr_build__ArgModes0_23);
    }
#line 207 "term_constr_build.m"
    {
#line 207 "term_constr_build.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_constr_build__ProcInfo_19, &transform_hlds__term_constr_build__Goal0_24);
    }
#line 212 "term_constr_build.m"
    {
#line 212 "term_constr_build.m"
      transform_hlds__term_constr_build__Goal_25 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_constr_build__Goal0_24);
    }
#line 216 "term_constr_build.m"
    {
#line 216 "term_constr_build.m"
      transform_hlds__term_constr_build__allocate_sizevars_5_p_0(transform_hlds__term_constr_build__HeadProgVars_22, transform_hlds__term_constr_build__Goal_25, &transform_hlds__term_constr_build__SizeVarMap_26, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_0_43, transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_44);
    }
#line 217 "term_constr_build.m"
    {
#line 217 "term_constr_build.m"
      transform_hlds__term_constr_build__Zeros_27 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(transform_hlds__term_constr_build__ModuleInfo_13, transform_hlds__term_constr_build__SizeVarMap_26, transform_hlds__term_constr_build__VarTypes_21);
    }
#line 218 "term_constr_build.m"
    transform_hlds__term_constr_build__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Options_11, (MR_Integer) 0)));
#line 218 "term_constr_build.m"
    transform_hlds__term_constr_build__V_74_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Options_11, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 218 "term_constr_build.m"
    transform_hlds__term_constr_build__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Options_11, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 218 "term_constr_build.m"
    {
#line 218 "term_constr_build.m"
      transform_hlds__term_constr_build__Info0_28 = transform_hlds__term_constr_build__init_traversal_info_10_f_0(transform_hlds__term_constr_build__ModuleInfo_13, transform_hlds__term_constr_build__V_54_54, transform_hlds__term_constr_build__PPId_14, transform_hlds__term_constr_build__Context_20, transform_hlds__term_constr_build__VarTypes_21, transform_hlds__term_constr_build__Zeros_27, transform_hlds__term_constr_build__SizeVarMap_26, transform_hlds__term_constr_build__SCC_12, transform_hlds__term_constr_build__V_74_74, transform_hlds__term_constr_build__V_75_75);
    }
#line 223 "term_constr_build.m"
    {
#line 223 "term_constr_build.m"
      transform_hlds__term_constr_build__build_abstract_goal_4_p_0(transform_hlds__term_constr_build__Goal_25, &transform_hlds__term_constr_build__AbstractBody0_29, transform_hlds__term_constr_build__Info0_28, &transform_hlds__term_constr_build__Info_30);
    }
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__IntermodStatus_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 1)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 2)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 3)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 4)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 5)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 6)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 7)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 8)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 9)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 10)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 11)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 12)));
#line 224 "term_constr_build.m"
    transform_hlds__term_constr_build__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 13)));
#line 225 "term_constr_build.m"
    {
#line 225 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadSizeVars_32 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_build__SizeVarMap_26, transform_hlds__term_constr_build__HeadProgVars_22);
    }
#line 226 "term_constr_build.m"
    {
#line 226 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractBody_33 = transform_hlds__term_constr_data__simplify_abstract_rep_1_f_0(transform_hlds__term_constr_build__AbstractBody0_29);
    }
#line 230 "term_constr_build.m"
    {
#line 230 "term_constr_build.m"
      transform_hlds__term_constr_build__ChooseArg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 230 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_34, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_5[0]));
#line 230 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_34, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0_1));
#line 230 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 230 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_34, 3) = ((MR_Box) (transform_hlds__term_constr_build__ModuleInfo_13));
#line 230 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ChooseArg_34, 4) = ((MR_Box) (transform_hlds__term_constr_build__VarTypes_21));
#line 230 "term_constr_build.m"
    }
#line 241 "term_constr_build.m"
    {
#line 241 "term_constr_build.m"
      transform_hlds__term_constr_build__Inputs_39 = mercury__list__map_corresponding_3_f_0((MR_Word) &transform_hlds__term_constr_build_scalar_common_1[3], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_constr_build__ChooseArg_34, transform_hlds__term_constr_build__HeadProgVars_22, transform_hlds__term_constr_build__ArgModes0_23);
    }
#line 245 "term_constr_build.m"
    {
#line 245 "term_constr_build.m"
      transform_hlds__term_constr_build__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_constr_build__PPId_14)), transform_hlds__term_constr_build__EntryProcs_10);
    }
#line 245 "term_constr_build.m"
    if (transform_hlds__term_constr_build__succeeded)
#line 245 "term_constr_build.m"
      transform_hlds__term_constr_build__IsEntryPoint_40 = (MR_Integer) 1;
#line 245 "term_constr_build.m"
    else
#line 245 "term_constr_build.m"
      transform_hlds__term_constr_build__IsEntryPoint_40 = (MR_Integer) 0;
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_60_60 = (MR_Word) transform_hlds__term_constr_build__PPId_14;
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_61_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 1)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 2)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 3)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 4)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 5)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 6)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 7)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 8)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 9)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 10)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 11)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 12)));
#line 246 "term_constr_build.m"
    transform_hlds__term_constr_build__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__Info_30, (MR_Integer) 13)));
#line 246 "term_constr_build.m"
    {
#line 246 "term_constr_build.m"
      transform_hlds__term_constr_build__AbstractProc_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 0) = ((MR_Box) (transform_hlds__term_constr_build__V_60_60));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 1) = ((MR_Box) (transform_hlds__term_constr_build__IsEntryPoint_40));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 2) = ((MR_Box) (transform_hlds__term_constr_build__Context_20));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 3) = ((MR_Box) (transform_hlds__term_constr_build__HeadSizeVars_32));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 4) = ((MR_Box) (transform_hlds__term_constr_build__Inputs_39));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 5) = ((MR_Box) (transform_hlds__term_constr_build__AbstractBody_33));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 6) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarMap_26));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 7) = ((MR_Box) (*transform_hlds__term_constr_build__STATE_VARIABLE_SizeVarset_44));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 8) = ((MR_Box) (transform_hlds__term_constr_build__Zeros_27));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 9) = ((MR_Box) (transform_hlds__term_constr_build__V_61_61));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 10) = ((MR_Box) (transform_hlds__term_constr_build__V_104_104));
#line 246 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__AbstractProc_41, 11) = ((MR_Box) (transform_hlds__term_constr_build__V_106_106));
#line 246 "term_constr_build.m"
    }
#line 250 "term_constr_build.m"
    {
#line 250 "term_constr_build.m"
      transform_hlds__term_constr_build__ThisProcInfo_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 250 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_42, 0) = ((MR_Box) (transform_hlds__term_constr_build__PPId_14));
#line 250 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_42, 1) = ((MR_Box) (transform_hlds__term_constr_build__AbstractProc_41));
#line 250 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_42, 2) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarMap_26));
#line 250 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_42, 3) = ((MR_Box) (transform_hlds__term_constr_build__IntermodStatus_31));
#line 250 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_42, 4) = ((MR_Box) (transform_hlds__term_constr_build__V_95_95));
#line 250 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__ThisProcInfo_42, 5) = ((MR_Box) (transform_hlds__term_constr_build__HeadSizeVars_32));
#line 250 "term_constr_build.m"
    }
#line 253 "term_constr_build.m"
    {
#line 253 "term_constr_build.m"
      mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0, ((MR_Box) (transform_hlds__term_constr_build__ThisProcInfo_42)), transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_0_45, transform_hlds__term_constr_build__STATE_VARIABLE_AbstractInfo_46);
    }
#line 194 "term_constr_build.m"
  }
#line 188 "term_constr_build.m"
}

#line 143 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_6_p_0_2(
#line 143 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 143 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 143 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 143 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 143 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 143 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5)
#line 143 "term_constr_build.m"
{
#line 143 "term_constr_build.m"
  {
#line 143 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv5_LambdaHeadVar__3_47;
#line 143 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv4_LambdaHeadVar__5_49;

#line 143 "term_constr_build.m"
    {
#line 143 "term_constr_build.m"
      transform_hlds__term_constr_build__IntroducedFrom__pred__term_constr_build_abstract_scc__143__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv5_LambdaHeadVar__3_47, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_4), &transform_hlds__term_constr_build__conv4_LambdaHeadVar__5_49);
    }
#line 143 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv5_LambdaHeadVar__3_47));
#line 143 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_build__conv4_LambdaHeadVar__5_49));
#line 143 "term_constr_build.m"
  }
#line 143 "term_constr_build.m"
}

#line 139 "term_constr_build.m"
static void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_6_p_0_1(
#line 139 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__closure_arg,
#line 139 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_1,
#line 139 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_2,
#line 139 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_3,
#line 139 "term_constr_build.m"
  MR_Box transform_hlds__term_constr_build__wrapper_arg_4,
#line 139 "term_constr_build.m"
  MR_Box * transform_hlds__term_constr_build__wrapper_arg_5)
#line 139 "term_constr_build.m"
{
#line 139 "term_constr_build.m"
  {
#line 139 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__closure = transform_hlds__term_constr_build__closure_arg;
#line 139 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv1_STATE_VARIABLE_SizeVarset_44;
#line 139 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__conv0_STATE_VARIABLE_AbstractInfo_46;

#line 139 "term_constr_build.m"
    {
#line 139 "term_constr_build.m"
      transform_hlds__term_constr_build__term_constr_build_abstract_proc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_2), &transform_hlds__term_constr_build__conv1_STATE_VARIABLE_SizeVarset_44, ((MR_Word) transform_hlds__term_constr_build__wrapper_arg_4), &transform_hlds__term_constr_build__conv0_STATE_VARIABLE_AbstractInfo_46);
    }
#line 139 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_build__conv1_STATE_VARIABLE_SizeVarset_44));
#line 139 "term_constr_build.m"
    *transform_hlds__term_constr_build__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_build__conv0_STATE_VARIABLE_AbstractInfo_46));
#line 139 "term_constr_build.m"
  }
#line 139 "term_constr_build.m"
}

#line 54 "term_constr_build.m"
void MR_CALL 
transform_hlds__term_constr_build__term_constr_build_abstract_scc_6_p_0(
#line 54 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__DepOrder_7,
#line 54 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__SCC_8,
#line 54 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__Options_9,
#line 54 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__Errors_10,
#line 54 "term_constr_build.m"
  MR_Word transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_36,
#line 54 "term_constr_build.m"
  MR_Word * transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_37)
#line 54 "term_constr_build.m"
{
#line 135 "term_constr_build.m"
  {
#line 135 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 135 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__EntryProcs_12;
#line 135 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__SizeVarset_13;
#line 135 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__AbstractSCC_14;
#line 135 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredTable0_15;
#line 135 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__RecordInfo_16;
#line 135 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__PredTable_18;
#line 135 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_38_38;
#line 135 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__V_39_39;
#line 138 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv3_SizeVarset_13;
#line 138 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv2_AbstractSCC_14;
#line 185 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv7_Errors_10;
#line 185 "term_constr_build.m"
    MR_Box transform_hlds__term_constr_build__conv6_PredTable_18;

#line 136 "term_constr_build.m"
    {
#line 136 "term_constr_build.m"
      transform_hlds__dependency_graph__get_scc_entry_points_4_p_0(transform_hlds__term_constr_build__SCC_8, transform_hlds__term_constr_build__DepOrder_7, transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_36, &transform_hlds__term_constr_build__EntryProcs_12);
    }
#line 139 "term_constr_build.m"
    {
#line 139 "term_constr_build.m"
      transform_hlds__term_constr_build__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 139 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_38_38, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_3[0]));
#line 139 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_38_38, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_6_p_0_1));
#line 139 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 139 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_38_38, 3) = ((MR_Box) (transform_hlds__term_constr_build__EntryProcs_12));
#line 139 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_38_38, 4) = ((MR_Box) (transform_hlds__term_constr_build__Options_9));
#line 139 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_38_38, 5) = ((MR_Box) (transform_hlds__term_constr_build__SCC_8));
#line 139 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__V_38_38, 6) = ((MR_Box) (transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_36));
#line 139 "term_constr_build.m"
    }
#line 141 "term_constr_build.m"
    {
#line 141 "term_constr_build.m"
      transform_hlds__term_constr_build__V_39_39 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 138 "term_constr_build.m"
    {
#line 138 "term_constr_build.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[1], transform_hlds__term_constr_build__V_38_38, transform_hlds__term_constr_build__SCC_8, ((MR_Box) (transform_hlds__term_constr_build__V_39_39)), &transform_hlds__term_constr_build__conv3_SizeVarset_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_build__conv2_AbstractSCC_14);
    }
#line 138 "term_constr_build.m"
    transform_hlds__term_constr_build__SizeVarset_13 = ((MR_Word) transform_hlds__term_constr_build__conv3_SizeVarset_13);
#line 138 "term_constr_build.m"
    transform_hlds__term_constr_build__AbstractSCC_14 = ((MR_Word) transform_hlds__term_constr_build__conv2_AbstractSCC_14);
#line 142 "term_constr_build.m"
    {
#line 142 "term_constr_build.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_36, &transform_hlds__term_constr_build__PredTable0_15);
    }
#line 143 "term_constr_build.m"
    {
#line 143 "term_constr_build.m"
      transform_hlds__term_constr_build__RecordInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 143 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_16, 0) = ((MR_Box) (&transform_hlds__term_constr_build_scalar_common_4[0]));
#line 143 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_16, 1) = ((MR_Box) (transform_hlds__term_constr_build__term_constr_build_abstract_scc_6_p_0_2));
#line 143 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 143 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__RecordInfo_16, 3) = ((MR_Box) (transform_hlds__term_constr_build__SizeVarset_13));
#line 143 "term_constr_build.m"
    }
#line 185 "term_constr_build.m"
    {
#line 185 "term_constr_build.m"
      mercury__list__foldl2_6_p_0((MR_Word) &transform_hlds__term_constr_build__transform_hlds__term_constr_build__type_ctor_info_term_scc_info_0, (MR_Word) &transform_hlds__term_constr_build_scalar_common_1[2], (MR_Word) &transform_hlds__term_constr_build_scalar_common_2[0], transform_hlds__term_constr_build__RecordInfo_16, transform_hlds__term_constr_build__AbstractSCC_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_build__conv7_Errors_10, ((MR_Box) (transform_hlds__term_constr_build__PredTable0_15)), &transform_hlds__term_constr_build__conv6_PredTable_18);
    }
#line 185 "term_constr_build.m"
    *transform_hlds__term_constr_build__Errors_10 = ((MR_Word) transform_hlds__term_constr_build__conv7_Errors_10);
#line 185 "term_constr_build.m"
    transform_hlds__term_constr_build__PredTable_18 = ((MR_Word) transform_hlds__term_constr_build__conv6_PredTable_18);
#line 186 "term_constr_build.m"
    {
#line 186 "term_constr_build.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_build__PredTable_18, transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_0_36, transform_hlds__term_constr_build__STATE_VARIABLE_ModuleInfo_37);
    }
#line 135 "term_constr_build.m"
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
#line 113 "term_constr_build.m"
  {
#line 113 "term_constr_build.m"
    MR_bool transform_hlds__term_constr_build__succeeded;
#line 113 "term_constr_build.m"
    MR_Word transform_hlds__term_constr_build__HeadVar__4_4;

#line 113 "term_constr_build.m"
    {
#line 113 "term_constr_build.m"
      transform_hlds__term_constr_build__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_4, 0) = ((MR_Box) (transform_hlds__term_constr_build__Norm_5));
#line 113 "term_constr_build.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_build__HeadVar__4_4, 1) = ((MR_Box) ((transform_hlds__term_constr_build__Failure_6 | ((transform_hlds__term_constr_build__ArgSizeOnly_7 << (MR_Integer) 1)))));
#line 113 "term_constr_build.m"
    }
#line 113 "term_constr_build.m"
    return transform_hlds__term_constr_build__HeadVar__4_4;
#line 113 "term_constr_build.m"
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
