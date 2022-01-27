/*
** Automatically generated from `term_constr_pass2.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module transform_hlds.term_constr_pass2. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_pass2__init
ENDINIT
*/

#include "transform_hlds.term_constr_pass2.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 478 "term_constr_pass2.m"
struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s {
#line 478 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1;
#line 478 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2;
#line 481 "term_constr_pass2.m"
  MR_bool transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded;
#line 482 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10;
#line 482 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11;
#line 492 "term_constr_pass2.m"
  jmp_buf transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0;
#line 492 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21;
#line 493 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21;
#line 478 "term_constr_pass2.m"
};


#line 166 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 169 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

#line 172 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 175 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 178 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

#line 181 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

#line 184 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;

#line 187 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;

#line 190 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 193 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0;

#line 196 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

#line 199 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 202 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;

#line 205 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0[2];

#line 208 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0[2];

#line 211 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0;

#line 214 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[1];

#line 217 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[1];

#line 220 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0[1];

#line 223 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0[1];

#line 226 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[2];

#line 229 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[2];

#line 232 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0;

#line 235 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[1];

#line 238 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[1];

#line 241 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0[1];

#line 244 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0[1];

#line 247 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;

#line 250 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 253 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 256 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0[6];

#line 259 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0[6];

#line 262 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0;

#line 265 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[1];

#line 268 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[1];

#line 271 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0[1];

#line 274 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0[1];

#line 277 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[1];

#line 280 "transform_hlds.term_constr_pass2.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0;

#line 283 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001(
#line 286 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 288 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 291 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001(
#line 294 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 296 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 298 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 301 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
#line 304 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 306 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 309 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
#line 312 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 314 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 316 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 319 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
#line 322 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 324 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 327 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
#line 330 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 332 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 334 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 337 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
#line 340 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 342 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 345 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
#line 348 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 350 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 352 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 355 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
#line 358 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 360 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 363 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
#line 366 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 368 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 370 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 373 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
#line 376 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 378 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 381 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
#line 384 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 386 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 388 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 391 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
#line 394 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 396 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 399 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
#line 402 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 404 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 406 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 540 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__540__1_2_f_0(
#line 540 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5,
#line 540 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_8);

#line 514 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__514__1_2_f_0(
#line 514 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22,
#line 514 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_23,
#line 514 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_24);

#line 413 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__413__1_2_p_0(
#line 413 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 413 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_26);

#line 379 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__379__1_2_p_0(
#line 379 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ProcId_5,
#line 379 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_13);

#line 174 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__174__1_6_p_0(
#line 174 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Procs_5,
#line 174 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
#line 174 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_7,
#line 174 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_17,
#line 174 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_18,
#line 174 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_19);

#line 147 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__147__1_1_f_0(
#line 147 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22);

#line 116 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
#line 116 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 116 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 116 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 116 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
#line 116 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 116 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 92 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
#line 92 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 92 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 92 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 92 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
#line 92 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 92 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 129 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
#line 129 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 129 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 129 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 129 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
#line 129 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 129 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 135 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
#line 135 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 135 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 135 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 135 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
#line 135 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 135 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 118 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
#line 118 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 118 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 88 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(
#line 88 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 88 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 88 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 88 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(
#line 88 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 88 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 644 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
#line 644 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 644 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Old_5);

#line 639 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
#line 639 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 639 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 636 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
#line 636 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 636 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 631 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
#line 631 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 631 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Eqn0_5);

#line 625 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
#line 625 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1);

#line 613 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
#line 613 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_5,
#line 613 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__CurrPPId_6,
#line 613 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_7,
#line 613 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Edges_8);

#line 601 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
#line 601 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 601 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 596 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
#line 596 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 596 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 578 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
#line 578 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 578 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2,
#line 578 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3,
#line 578 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4,
#line 578 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5,
#line 578 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6,
#line 578 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7);

#line 551 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
#line 551 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_4,
#line 551 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycle_5);

#line 540 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
#line 540 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 540 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 538 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
#line 538 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Vars_4,
#line 538 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5);

#line 532 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
#line 532 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_3,
#line 532 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 540 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
#line 540 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 540 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 514 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
#line 514 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 514 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 514 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 514 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 501 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
#line 501 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
#line 501 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_6,
#line 501 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_7,
#line 501 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Loop_8);

#line 492 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
#line 492 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 493 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
#line 493 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 492 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
#line 492 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 492 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
#line 492 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 478 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
#line 478 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_1,
#line 478 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
#line 478 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 445 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
#line 445 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 445 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_2);

#line 436 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
#line 436 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 436 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 434 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
#line 434 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 434 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 430 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
#line 430 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 430 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycles0_2);

#line 417 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
#line 417 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 417 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 417 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 417 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 412 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
#line 412 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 412 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 402 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Start_8,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SoFar_9,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_10,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_12,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19,
#line 402 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20);

#line 399 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
#line 399 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 399 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 399 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 399 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 385 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
#line 385 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 385 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map0_2);

#line 379 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
#line 379 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 379 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 373 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
#line 373 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 373 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edges0_2);

#line 358 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
#line 358 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_3,
#line 358 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Cycle_4);

#line 328 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
#line 328 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Poly_4,
#line 328 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge0_5);

#line 304 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_1,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_2,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
#line 304 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_4,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__TopPoly_5,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__6_6,
#line 304 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7,
#line 304 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9,
#line 304 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11,
#line 304 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13,
#line 304 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14);

#line 214 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3(
#line 214 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 214 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 214 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 206 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
#line 206 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 206 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 228 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 228 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_4,
#line 228 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_5,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_6,
#line 228 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_7,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_8,
#line 228 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_9);

#line 188 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_14,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_15,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_16,
#line 188 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_17,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Goal_18,
#line 188 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60,
#line 188 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62,
#line 188 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64,
#line 188 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66,
#line 188 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67);

#line 349 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3(
#line 349 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 349 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 349 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 174 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2(
#line 174 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 174 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 174 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 174 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 147 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1(
#line 147 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 147 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);


static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_1[6][2];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_2[4][3];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_4[5][5];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_5[1][9];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_6[1][16];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_7[7][6];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_8[1][8];

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_9[1][10];




static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_1[1])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[2])),
    ((MR_Box) (transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_6[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_7[7][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_pass2_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0)),
    ((MR_Box) (&transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1285 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 1293 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

#line 1301 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1309 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1317 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

#line 1325 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

#line 1334 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0
  }
};

#line 1342 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0
  }
};

#line 1350 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1358 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1366 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1375 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1384 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0
  }
};

#line 1392 "transform_hlds.term_constr_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_abstract_ppids_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "abstract_ppids",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1409 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

#line 1415 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0[2] = {
  (MR_String) "tcgc_nodes",
  (MR_String) "tcgc_edges"
};

#line 1421 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0 = {
  (MR_String) "term_cg_cycle",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0,
  NULL,
  NULL
};

#line 1436 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

#line 1441 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0
  }
};

#line 1450 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

#line 1455 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0[1] = {
  (MR_Integer) 0
};

#line 1460 "transform_hlds.term_constr_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "cycle",
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0 },
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0
};

#line 1477 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

#line 1483 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[2] = {
  (MR_String) "tcgcs_start",
  (MR_String) "tcgcs_cycles"
};

#line 1489 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0 = {
  (MR_String) "term_cg_cycle_set",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0,
  NULL,
  NULL
};

#line 1504 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

#line 1509 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0
  }
};

#line 1518 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

#line 1523 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0[1] = {
  (MR_Integer) 0
};

#line 1528 "transform_hlds.term_constr_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "cycle_set",
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0 },
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0
};

#line 1545 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0
  }
};

#line 1553 "transform_hlds.term_constr_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycles_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "cycles",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1570 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1578 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1586 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0[6] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
};

#line 1596 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0[6] = {
  (MR_String) "tcge_caller",
  (MR_String) "tcge_callee",
  (MR_String) "tcge_head_args",
  (MR_String) "tcge_call_args",
  (MR_String) "tcge_zeros",
  (MR_String) "tcge_label"
};

#line 1606 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0 = {
  (MR_String) "term_cg_edge",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0,
  NULL,
  NULL
};

#line 1621 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

#line 1626 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0
  }
};

#line 1635 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

#line 1640 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0[1] = {
  (MR_Integer) 0
};

#line 1645 "transform_hlds.term_constr_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____edge_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____edge_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "edge",
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0 },
  {     transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0
};

#line 1662 "transform_hlds.term_constr_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____edges_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____edges_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "edges",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1679 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[1] = {
  (MR_Integer) 0
};

#line 1684 "transform_hlds.term_constr_pass2.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 = {
  (MR_String) "pass2_options",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_String) "max_matrix_size"
};

#line 1691 "transform_hlds.term_constr_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "pass2_options",
  {     &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 },
  {     &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0
};

#line 1708 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001(
#line 1711 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1713 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1715 "transform_hlds.term_constr_pass2.c"
{
#line 1717 "transform_hlds.term_constr_pass2.c"
  {
#line 1719 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1722 "transform_hlds.term_constr_pass2.c"
    {
#line 1724 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1727 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1729 "transform_hlds.term_constr_pass2.c"
  }
#line 1731 "transform_hlds.term_constr_pass2.c"
}

#line 1734 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001(
#line 1737 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1739 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1741 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1743 "transform_hlds.term_constr_pass2.c"
{
#line 1745 "transform_hlds.term_constr_pass2.c"
  {
#line 1747 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1750 "transform_hlds.term_constr_pass2.c"
    {
#line 1752 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1755 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1757 "transform_hlds.term_constr_pass2.c"
  }
#line 1759 "transform_hlds.term_constr_pass2.c"
}

#line 1762 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
#line 1765 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1767 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1769 "transform_hlds.term_constr_pass2.c"
{
#line 1771 "transform_hlds.term_constr_pass2.c"
  {
#line 1773 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1776 "transform_hlds.term_constr_pass2.c"
    {
#line 1778 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycle_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1781 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1783 "transform_hlds.term_constr_pass2.c"
  }
#line 1785 "transform_hlds.term_constr_pass2.c"
}

#line 1788 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
#line 1791 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1793 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1795 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1797 "transform_hlds.term_constr_pass2.c"
{
#line 1799 "transform_hlds.term_constr_pass2.c"
  {
#line 1801 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1804 "transform_hlds.term_constr_pass2.c"
    {
#line 1806 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____cycle_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1809 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1811 "transform_hlds.term_constr_pass2.c"
  }
#line 1813 "transform_hlds.term_constr_pass2.c"
}

#line 1816 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
#line 1819 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1821 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1823 "transform_hlds.term_constr_pass2.c"
{
#line 1825 "transform_hlds.term_constr_pass2.c"
  {
#line 1827 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1830 "transform_hlds.term_constr_pass2.c"
    {
#line 1832 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1835 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1837 "transform_hlds.term_constr_pass2.c"
  }
#line 1839 "transform_hlds.term_constr_pass2.c"
}

#line 1842 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
#line 1845 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1847 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1849 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1851 "transform_hlds.term_constr_pass2.c"
{
#line 1853 "transform_hlds.term_constr_pass2.c"
  {
#line 1855 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1858 "transform_hlds.term_constr_pass2.c"
    {
#line 1860 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1863 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1865 "transform_hlds.term_constr_pass2.c"
  }
#line 1867 "transform_hlds.term_constr_pass2.c"
}

#line 1870 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
#line 1873 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1875 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1877 "transform_hlds.term_constr_pass2.c"
{
#line 1879 "transform_hlds.term_constr_pass2.c"
  {
#line 1881 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1884 "transform_hlds.term_constr_pass2.c"
    {
#line 1886 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycles_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1889 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1891 "transform_hlds.term_constr_pass2.c"
  }
#line 1893 "transform_hlds.term_constr_pass2.c"
}

#line 1896 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
#line 1899 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1901 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1903 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1905 "transform_hlds.term_constr_pass2.c"
{
#line 1907 "transform_hlds.term_constr_pass2.c"
  {
#line 1909 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1912 "transform_hlds.term_constr_pass2.c"
    {
#line 1914 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____cycles_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1917 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1919 "transform_hlds.term_constr_pass2.c"
  }
#line 1921 "transform_hlds.term_constr_pass2.c"
}

#line 1924 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
#line 1927 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1929 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1931 "transform_hlds.term_constr_pass2.c"
{
#line 1933 "transform_hlds.term_constr_pass2.c"
  {
#line 1935 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1938 "transform_hlds.term_constr_pass2.c"
    {
#line 1940 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____edge_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1943 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1945 "transform_hlds.term_constr_pass2.c"
  }
#line 1947 "transform_hlds.term_constr_pass2.c"
}

#line 1950 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
#line 1953 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1955 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1957 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1959 "transform_hlds.term_constr_pass2.c"
{
#line 1961 "transform_hlds.term_constr_pass2.c"
  {
#line 1963 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1966 "transform_hlds.term_constr_pass2.c"
    {
#line 1968 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____edge_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1971 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1973 "transform_hlds.term_constr_pass2.c"
  }
#line 1975 "transform_hlds.term_constr_pass2.c"
}

#line 1978 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
#line 1981 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1983 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1985 "transform_hlds.term_constr_pass2.c"
{
#line 1987 "transform_hlds.term_constr_pass2.c"
  {
#line 1989 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1992 "transform_hlds.term_constr_pass2.c"
    {
#line 1994 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____edges_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1997 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1999 "transform_hlds.term_constr_pass2.c"
  }
#line 2001 "transform_hlds.term_constr_pass2.c"
}

#line 2004 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
#line 2007 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 2009 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 2011 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 2013 "transform_hlds.term_constr_pass2.c"
{
#line 2015 "transform_hlds.term_constr_pass2.c"
  {
#line 2017 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 2020 "transform_hlds.term_constr_pass2.c"
    {
#line 2022 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____edges_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 2025 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 2027 "transform_hlds.term_constr_pass2.c"
  }
#line 2029 "transform_hlds.term_constr_pass2.c"
}

#line 2032 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
#line 2035 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 2037 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 2039 "transform_hlds.term_constr_pass2.c"
{
#line 2041 "transform_hlds.term_constr_pass2.c"
  {
#line 2043 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 2046 "transform_hlds.term_constr_pass2.c"
    {
#line 2048 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 2051 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 2053 "transform_hlds.term_constr_pass2.c"
  }
#line 2055 "transform_hlds.term_constr_pass2.c"
}

#line 2058 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
#line 2061 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 2063 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 2065 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 2067 "transform_hlds.term_constr_pass2.c"
{
#line 2069 "transform_hlds.term_constr_pass2.c"
  {
#line 2071 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 2074 "transform_hlds.term_constr_pass2.c"
    {
#line 2076 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 2079 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 2081 "transform_hlds.term_constr_pass2.c"
  }
#line 2083 "transform_hlds.term_constr_pass2.c"
}

#line 540 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__540__1_2_f_0(
#line 540 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5,
#line 540 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_8)
#line 540 "term_constr_pass2.m"
{
#line 540 "term_constr_pass2.m"
  {
#line 540 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 540 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_9;

#line 540 "term_constr_pass2.m"
    {
#line 540 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__2_9, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__LambdaHeadVar__1_8));
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__2_9, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_5));
#line 540 "term_constr_pass2.m"
    }
#line 540 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__LambdaHeadVar__2_9;
#line 540 "term_constr_pass2.m"
  }
#line 540 "term_constr_pass2.m"
}

#line 514 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__514__1_2_f_0(
#line 514 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22,
#line 514 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_23,
#line 514 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_24)
#line 514 "term_constr_pass2.m"
{
#line 514 "term_constr_pass2.m"
  {
#line 514 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__LambdaHeadVar__2_23 == (MR_Integer) 1);

#line 514 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 514 "term_constr_pass2.m"
      {
#line 514 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__LambdaHeadVar__3_24 = transform_hlds__term_constr_pass2__LambdaHeadVar__1_22;
#line 514 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 514 "term_constr_pass2.m"
      }
#line 514 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 514 "term_constr_pass2.m"
  }
#line 514 "term_constr_pass2.m"
}

#line 413 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__413__1_2_p_0(
#line 413 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 413 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_26)
#line 413 "term_constr_pass2.m"
{
#line 413 "term_constr_pass2.m"
  {
#line 413 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 413 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 0)));
#line 413 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 1)));
#line 413 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 2)));
#line 413 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 3)));
#line 413 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 4)));
#line 413 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 5)));

#line 413 "term_constr_pass2.m"
    {
#line 413 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, ((MR_Box) (transform_hlds__term_constr_pass2__V_27_27)), transform_hlds__term_constr_pass2__Visited_11);
    }
#line 413 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 413 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 413 "term_constr_pass2.m"
  }
#line 413 "term_constr_pass2.m"
}

#line 379 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__379__1_2_p_0(
#line 379 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ProcId_5,
#line 379 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_13)
#line 379 "term_constr_pass2.m"
{
#line 379 "term_constr_pass2.m"
  {
#line 379 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 379 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 0)));
#line 381 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 1)));
#line 381 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 2)));
#line 381 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 3)));
#line 381 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 4)));
#line 381 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 5)));

#line 381 "term_constr_pass2.m"
    {
#line 381 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__ProcId_5, transform_hlds__term_constr_pass2__V_25_25);
    }
#line 379 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 379 "term_constr_pass2.m"
  }
#line 379 "term_constr_pass2.m"
}

#line 174 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__174__1_6_p_0(
#line 174 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Procs_5,
#line 174 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
#line 174 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_7,
#line 174 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_17,
#line 174 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_18,
#line 174 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_19)
#line 174 "term_constr_pass2.m"
{
#line 174 "term_constr_pass2.m"
  {
#line 174 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 174 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__ProcEdges_13;
#line 174 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 5)));
#line 174 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_22_22;
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 0)));
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 1)));
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 2)));
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 3)));
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 4)));
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 6)));
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 7)));
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 8)));
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 9)));
#line 175 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 10)));
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 11)));
#line 175 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__V_11_11;
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_12_12;
#line 175 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_14_14;

#line 176 "term_constr_pass2.m"
    {
#line 176 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_22_22 = libs__polyhedron__universe_0_f_0();
    }
#line 175 "term_constr_pass2.m"
    {
#line 175 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, transform_hlds__term_constr_pass2__Procs_5, transform_hlds__term_constr_pass2__ModuleInfo_6, transform_hlds__term_constr_pass2__MaxMatrixSize_7, transform_hlds__term_constr_pass2__V_20_20, (MR_Integer) 1, &transform_hlds__term_constr_pass2__V_11_11, transform_hlds__term_constr_pass2__V_22_22, &transform_hlds__term_constr_pass2__V_12_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__ProcEdges_13, (MR_Integer) 1, &transform_hlds__term_constr_pass2__V_14_14);
    }
#line 178 "term_constr_pass2.m"
    {
#line 178 "term_constr_pass2.m"
      mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__ProcEdges_13, transform_hlds__term_constr_pass2__LambdaHeadVar__2_18, transform_hlds__term_constr_pass2__LambdaHeadVar__3_19);
#line 178 "term_constr_pass2.m"
      return;
    }
#line 174 "term_constr_pass2.m"
  }
#line 174 "term_constr_pass2.m"
}

#line 147 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__147__1_1_f_0(
#line 147 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22)
#line 147 "term_constr_pass2.m"
{
#line 147 "term_constr_pass2.m"
  {
#line 147 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 147 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_23 = (MR_Word) transform_hlds__term_constr_pass2__LambdaHeadVar__1_22;

#line 147 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__LambdaHeadVar__2_23;
#line 147 "term_constr_pass2.m"
  }
#line 147 "term_constr_pass2.m"
}

#line 79 "term_constr_pass2.m"
void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(
#line 79 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 79 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 79 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 79 "term_constr_pass2.m"
{
#line 79 "term_constr_pass2.m"
  {
#line 79 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 79 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_6 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 79 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 79 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_6 == transform_hlds__term_constr_pass2__CastY_7);
#line 79 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 2353 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "term_constr_pass2.m"
    else
#line 79 "term_constr_pass2.m"
      {
#line 79 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_4_4 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 79 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_5_5 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 79 "term_constr_pass2.m"
        {
#line 79 "term_constr_pass2.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_pass2__HeadVar__1_1, transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_5_5);
#line 79 "term_constr_pass2.m"
          return;
        }
#line 79 "term_constr_pass2.m"
      }
#line 79 "term_constr_pass2.m"
  }
#line 79 "term_constr_pass2.m"
}

#line 79 "term_constr_pass2.m"
MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(
#line 79 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 79 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 79 "term_constr_pass2.m"
{
#line 79 "term_constr_pass2.m"
  {
#line 79 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 79 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_5 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 79 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_6 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 79 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_5 == transform_hlds__term_constr_pass2__CastY_6);
#line 79 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 79 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 79 "term_constr_pass2.m"
    else
#line 79 "term_constr_pass2.m"
      {
#line 79 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_3_3 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 79 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_4_4 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 2411 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_3_3 == transform_hlds__term_constr_pass2__V_4_4);
#line 79 "term_constr_pass2.m"
      }
#line 79 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 79 "term_constr_pass2.m"
  }
#line 79 "term_constr_pass2.m"
}

#line 116 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
#line 116 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 116 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 116 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 116 "term_constr_pass2.m"
{
#line 116 "term_constr_pass2.m"
  {
#line 116 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 116 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 116 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 116 "term_constr_pass2.m"
    {
#line 116 "term_constr_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
#line 116 "term_constr_pass2.m"
      return;
    }
#line 116 "term_constr_pass2.m"
  }
#line 116 "term_constr_pass2.m"
}

#line 116 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
#line 116 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 116 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 116 "term_constr_pass2.m"
{
#line 116 "term_constr_pass2.m"
  {
#line 116 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 116 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 116 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 116 "term_constr_pass2.m"
    {
#line 116 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    }
#line 116 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 116 "term_constr_pass2.m"
  }
#line 116 "term_constr_pass2.m"
}

#line 92 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
#line 92 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 92 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 92 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 92 "term_constr_pass2.m"
{
#line 92 "term_constr_pass2.m"
  {
#line 92 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 92 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_21 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 92 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_22 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 92 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_21 == transform_hlds__term_constr_pass2__CastY_22);
#line 92 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 2508 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "term_constr_pass2.m"
    else
#line 92 "term_constr_pass2.m"
      {
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 2)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 3)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 4)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 5)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 2)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 3)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 4)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 5)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_16_16;

#line 92 "term_constr_pass2.m"
        {
#line 92 "term_constr_pass2.m"
          transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__V_16_16, transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_10_10);
        }
#line 2546 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_16_16 == (MR_Integer) 0);
#line 92 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 92 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_16_16;
#line 92 "term_constr_pass2.m"
        else
#line 92 "term_constr_pass2.m"
          {
#line 92 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17;

#line 92 "term_constr_pass2.m"
            {
#line 92 "term_constr_pass2.m"
              transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__V_17_17, transform_hlds__term_constr_pass2__V_5_5, transform_hlds__term_constr_pass2__V_11_11);
            }
#line 2566 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_17_17 == (MR_Integer) 0);
#line 92 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 92 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_17_17;
#line 92 "term_constr_pass2.m"
            else
#line 92 "term_constr_pass2.m"
              {
#line 92 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_18_18;

#line 92 "term_constr_pass2.m"
                {
#line 92 "term_constr_pass2.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4], &transform_hlds__term_constr_pass2__V_18_18, ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)), ((MR_Box) (transform_hlds__term_constr_pass2__V_12_12)));
                }
#line 2586 "transform_hlds.term_constr_pass2.c"
                transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_18_18 == (MR_Integer) 0);
#line 92 "term_constr_pass2.m"
                transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 92 "term_constr_pass2.m"
                if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_18_18;
#line 92 "term_constr_pass2.m"
                else
#line 92 "term_constr_pass2.m"
                  {
#line 92 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__V_19_19;

#line 92 "term_constr_pass2.m"
                    {
#line 92 "term_constr_pass2.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4], &transform_hlds__term_constr_pass2__V_19_19, ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_constr_pass2__V_13_13)));
                    }
#line 2606 "transform_hlds.term_constr_pass2.c"
                    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_19_19 == (MR_Integer) 0);
#line 92 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 92 "term_constr_pass2.m"
                    if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
                      *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_19_19;
#line 92 "term_constr_pass2.m"
                    else
#line 92 "term_constr_pass2.m"
                      {
#line 92 "term_constr_pass2.m"
                        MR_Word transform_hlds__term_constr_pass2__V_20_20;

#line 92 "term_constr_pass2.m"
                        {
#line 92 "term_constr_pass2.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[5], &transform_hlds__term_constr_pass2__V_20_20, ((MR_Box) (transform_hlds__term_constr_pass2__V_8_8)), ((MR_Box) (transform_hlds__term_constr_pass2__V_14_14)));
                        }
#line 2626 "transform_hlds.term_constr_pass2.c"
                        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_20_20 == (MR_Integer) 0);
#line 92 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 92 "term_constr_pass2.m"
                        if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
                          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_20_20;
#line 92 "term_constr_pass2.m"
                        else
#line 92 "term_constr_pass2.m"
                          {
#line 92 "term_constr_pass2.m"
                            libs__polyhedron____Compare____polyhedron_0_0(transform_hlds__term_constr_pass2__HeadVar__1_1, transform_hlds__term_constr_pass2__V_9_9, transform_hlds__term_constr_pass2__V_15_15);
#line 92 "term_constr_pass2.m"
                            return;
                          }
#line 92 "term_constr_pass2.m"
                      }
#line 92 "term_constr_pass2.m"
                  }
#line 92 "term_constr_pass2.m"
              }
#line 92 "term_constr_pass2.m"
          }
#line 92 "term_constr_pass2.m"
      }
#line 92 "term_constr_pass2.m"
  }
#line 92 "term_constr_pass2.m"
}

#line 92 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
#line 92 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 92 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 92 "term_constr_pass2.m"
{
#line 92 "term_constr_pass2.m"
  {
#line 92 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 92 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_15 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 92 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_16 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 92 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_15 == transform_hlds__term_constr_pass2__CastY_16);
#line 92 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 92 "term_constr_pass2.m"
    else
#line 92 "term_constr_pass2.m"
      {
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_19_19;
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_20_20;
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_21_21;
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 2)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 3)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 4)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 5)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 2)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 3)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 4)));
#line 92 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 5)));

#line 2717 "transform_hlds.term_constr_pass2.c"
        {
#line 2719 "transform_hlds.term_constr_pass2.c"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_3_3, transform_hlds__term_constr_pass2__V_9_9);
        }
#line 92 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
          {
#line 2726 "transform_hlds.term_constr_pass2.c"
            {
#line 2728 "transform_hlds.term_constr_pass2.c"
              transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_10_10);
            }
#line 92 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
              {
#line 2735 "transform_hlds.term_constr_pass2.c"
                transform_hlds__term_constr_pass2__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4];
#line 2737 "transform_hlds.term_constr_pass2.c"
                {
#line 2739 "transform_hlds.term_constr_pass2.c"
                  transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_19_19, ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_constr_pass2__V_11_11)));
                }
#line 92 "term_constr_pass2.m"
                if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
                  {
#line 2746 "transform_hlds.term_constr_pass2.c"
                    transform_hlds__term_constr_pass2__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4];
#line 2748 "transform_hlds.term_constr_pass2.c"
                    {
#line 2750 "transform_hlds.term_constr_pass2.c"
                      transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)), ((MR_Box) (transform_hlds__term_constr_pass2__V_12_12)));
                    }
#line 92 "term_constr_pass2.m"
                    if (transform_hlds__term_constr_pass2__succeeded)
#line 92 "term_constr_pass2.m"
                      {
#line 2757 "transform_hlds.term_constr_pass2.c"
                        transform_hlds__term_constr_pass2__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[5];
#line 2759 "transform_hlds.term_constr_pass2.c"
                        {
#line 2761 "transform_hlds.term_constr_pass2.c"
                          transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_constr_pass2__V_13_13)));
                        }
#line 92 "term_constr_pass2.m"
                        if (transform_hlds__term_constr_pass2__succeeded)
#line 2766 "transform_hlds.term_constr_pass2.c"
                          {
#line 2768 "transform_hlds.term_constr_pass2.c"
                            return transform_hlds__term_constr_pass2__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_pass2__V_8_8, transform_hlds__term_constr_pass2__V_14_14);
                          }
#line 92 "term_constr_pass2.m"
                      }
#line 92 "term_constr_pass2.m"
                  }
#line 92 "term_constr_pass2.m"
              }
#line 92 "term_constr_pass2.m"
          }
#line 92 "term_constr_pass2.m"
      }
#line 92 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 92 "term_constr_pass2.m"
  }
#line 92 "term_constr_pass2.m"
}

#line 129 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
#line 129 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 129 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 129 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 129 "term_constr_pass2.m"
{
#line 129 "term_constr_pass2.m"
  {
#line 129 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 129 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 129 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 129 "term_constr_pass2.m"
    {
#line 129 "term_constr_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
#line 129 "term_constr_pass2.m"
      return;
    }
#line 129 "term_constr_pass2.m"
  }
#line 129 "term_constr_pass2.m"
}

#line 129 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
#line 129 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 129 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 129 "term_constr_pass2.m"
{
#line 129 "term_constr_pass2.m"
  {
#line 129 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 129 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 129 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 129 "term_constr_pass2.m"
    {
#line 129 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    }
#line 129 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 129 "term_constr_pass2.m"
  }
#line 129 "term_constr_pass2.m"
}

#line 135 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
#line 135 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 135 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 135 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 135 "term_constr_pass2.m"
{
#line 135 "term_constr_pass2.m"
  {
#line 135 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 135 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_9 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 135 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_10 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 135 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_9 == transform_hlds__term_constr_pass2__CastY_10);
#line 135 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 2874 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "term_constr_pass2.m"
    else
#line 135 "term_constr_pass2.m"
      {
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8;

#line 135 "term_constr_pass2.m"
        {
#line 135 "term_constr_pass2.m"
          transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__V_8_8, transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_6_6);
        }
#line 2896 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_8_8 == (MR_Integer) 0);
#line 135 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 135 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 135 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_8_8;
#line 135 "term_constr_pass2.m"
        else
#line 135 "term_constr_pass2.m"
          {
#line 135 "term_constr_pass2.m"
            {
#line 135 "term_constr_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)));
#line 135 "term_constr_pass2.m"
              return;
            }
#line 135 "term_constr_pass2.m"
          }
#line 135 "term_constr_pass2.m"
      }
#line 135 "term_constr_pass2.m"
  }
#line 135 "term_constr_pass2.m"
}

#line 135 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
#line 135 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 135 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 135 "term_constr_pass2.m"
{
#line 135 "term_constr_pass2.m"
  {
#line 135 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 135 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 135 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_8 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 135 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_7 == transform_hlds__term_constr_pass2__CastY_8);
#line 135 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 135 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 135 "term_constr_pass2.m"
    else
#line 135 "term_constr_pass2.m"
      {
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_10_10;
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 135 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 2963 "transform_hlds.term_constr_pass2.c"
        {
#line 2965 "transform_hlds.term_constr_pass2.c"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_3_3, transform_hlds__term_constr_pass2__V_5_5);
        }
#line 135 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 135 "term_constr_pass2.m"
          {
#line 2972 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0];
#line 2974 "transform_hlds.term_constr_pass2.c"
            {
#line 2976 "transform_hlds.term_constr_pass2.c"
              return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_constr_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)));
            }
#line 135 "term_constr_pass2.m"
          }
#line 135 "term_constr_pass2.m"
      }
#line 135 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 135 "term_constr_pass2.m"
  }
#line 135 "term_constr_pass2.m"
}

#line 118 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
#line 118 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 118 "term_constr_pass2.m"
{
#line 118 "term_constr_pass2.m"
  {
#line 118 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 118 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_9 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 118 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_10 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 118 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_9 == transform_hlds__term_constr_pass2__CastY_10);
#line 118 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 3014 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 118 "term_constr_pass2.m"
    else
#line 118 "term_constr_pass2.m"
      {
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8;

#line 118 "term_constr_pass2.m"
        {
#line 118 "term_constr_pass2.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], &transform_hlds__term_constr_pass2__V_8_8, ((MR_Box) (transform_hlds__term_constr_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)));
        }
#line 3036 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_8_8 == (MR_Integer) 0);
#line 118 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 118 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 118 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_8_8;
#line 118 "term_constr_pass2.m"
        else
#line 118 "term_constr_pass2.m"
          {
#line 118 "term_constr_pass2.m"
            {
#line 118 "term_constr_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)));
#line 118 "term_constr_pass2.m"
              return;
            }
#line 118 "term_constr_pass2.m"
          }
#line 118 "term_constr_pass2.m"
      }
#line 118 "term_constr_pass2.m"
  }
#line 118 "term_constr_pass2.m"
}

#line 118 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 118 "term_constr_pass2.m"
{
#line 118 "term_constr_pass2.m"
  {
#line 118 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 118 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 118 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_8 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 118 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_7 == transform_hlds__term_constr_pass2__CastY_8);
#line 118 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 118 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 118 "term_constr_pass2.m"
    else
#line 118 "term_constr_pass2.m"
      {
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_10_10;
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 118 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 3103 "transform_hlds.term_constr_pass2.c"
        {
#line 3105 "transform_hlds.term_constr_pass2.c"
          transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_pass2__V_3_3)), ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)));
        }
#line 118 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 118 "term_constr_pass2.m"
          {
#line 3112 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0];
#line 3114 "transform_hlds.term_constr_pass2.c"
            {
#line 3116 "transform_hlds.term_constr_pass2.c"
              return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_constr_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)));
            }
#line 118 "term_constr_pass2.m"
          }
#line 118 "term_constr_pass2.m"
      }
#line 118 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 118 "term_constr_pass2.m"
  }
#line 118 "term_constr_pass2.m"
}

#line 88 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(
#line 88 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 88 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 88 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 88 "term_constr_pass2.m"
{
#line 88 "term_constr_pass2.m"
  {
#line 88 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 88 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 88 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 88 "term_constr_pass2.m"
    {
#line 88 "term_constr_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
#line 88 "term_constr_pass2.m"
      return;
    }
#line 88 "term_constr_pass2.m"
  }
#line 88 "term_constr_pass2.m"
}

#line 88 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(
#line 88 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 88 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 88 "term_constr_pass2.m"
{
#line 88 "term_constr_pass2.m"
  {
#line 88 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 88 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 88 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 88 "term_constr_pass2.m"
    {
#line 88 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    }
#line 88 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 88 "term_constr_pass2.m"
  }
#line 88 "term_constr_pass2.m"
}

#line 644 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
#line 644 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 644 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Old_5)
#line 644 "term_constr_pass2.m"
{
#line 646 "term_constr_pass2.m"
  {
#line 646 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 646 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 646 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__New_6;
#line 646 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_7_7 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 646 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__conv0_New_6;

#line 646 "term_constr_pass2.m"
    {
#line 646 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__bimap__search_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_7_7, transform_hlds__term_constr_pass2__TypeInfo_7_7, transform_hlds__term_constr_pass2__Map_4, ((MR_Box) (transform_hlds__term_constr_pass2__Old_5)), &transform_hlds__term_constr_pass2__conv0_New_6);
    }
#line 646 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 646 "term_constr_pass2.m"
      {
#line 646 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__New_6 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_New_6);
#line 646 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 646 "term_constr_pass2.m"
      }
#line 646 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 646 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__New_6;
#line 646 "term_constr_pass2.m"
    else
#line 646 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__Old_5;
#line 646 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 646 "term_constr_pass2.m"
  }
#line 644 "term_constr_pass2.m"
}

#line 639 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
#line 639 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 639 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 639 "term_constr_pass2.m"
{
#line 641 "term_constr_pass2.m"
  {
#line 641 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 641 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 641 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Var0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 641 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Coeff_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 641 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Var_7;
#line 646 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__New_10;
#line 646 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_7_11 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 646 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__conv0_New_10;

#line 646 "term_constr_pass2.m"
    {
#line 646 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__bimap__search_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_7_11, transform_hlds__term_constr_pass2__TypeInfo_7_11, transform_hlds__term_constr_pass2__Map_4, ((MR_Box) (transform_hlds__term_constr_pass2__Var0_5)), &transform_hlds__term_constr_pass2__conv0_New_10);
    }
#line 646 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 646 "term_constr_pass2.m"
      {
#line 646 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__New_10 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_New_10);
#line 646 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 646 "term_constr_pass2.m"
      }
#line 646 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 646 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Var_7 = transform_hlds__term_constr_pass2__New_10;
#line 646 "term_constr_pass2.m"
    else
#line 646 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Var_7 = transform_hlds__term_constr_pass2__Var0_5;
#line 641 "term_constr_pass2.m"
    {
#line 641 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_7));
#line 641 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_6));
#line 641 "term_constr_pass2.m"
    }
#line 641 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 641 "term_constr_pass2.m"
  }
#line 639 "term_constr_pass2.m"
}

#line 636 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
#line 636 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 636 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 636 "term_constr_pass2.m"
{
#line 636 "term_constr_pass2.m"
  {
#line 636 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 636 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 636 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_3;

#line 636 "term_constr_pass2.m"
    {
#line 636 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 636 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_3));
#line 636 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 636 "term_constr_pass2.m"
  }
#line 636 "term_constr_pass2.m"
}

#line 631 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
#line 631 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 631 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Eqn0_5)
#line 631 "term_constr_pass2.m"
{
#line 634 "term_constr_pass2.m"
  {
#line 634 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 634 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Eqn_6;
#line 634 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_12_12;
#line 634 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Coeffs0_7;
#line 634 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Operator_8;
#line 634 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Constant_9;
#line 634 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Coeffs_10;
#line 634 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_11_11;

#line 635 "term_constr_pass2.m"
    {
#line 635 "term_constr_pass2.m"
      libs__lp_rational__deconstruct_constraint_4_p_0(transform_hlds__term_constr_pass2__Eqn0_5, &transform_hlds__term_constr_pass2__Coeffs0_7, &transform_hlds__term_constr_pass2__Operator_8, &transform_hlds__term_constr_pass2__Constant_9);
    }
#line 3377 "transform_hlds.term_constr_pass2.c"
    transform_hlds__term_constr_pass2__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0];
#line 636 "term_constr_pass2.m"
    {
#line 636 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 636 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[6]));
#line 636 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1));
#line 636 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 636 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Map_4));
#line 636 "term_constr_pass2.m"
    }
#line 636 "term_constr_pass2.m"
    {
#line 636 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Coeffs_10 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_12_12, transform_hlds__term_constr_pass2__TypeInfo_12_12, transform_hlds__term_constr_pass2__V_11_11, transform_hlds__term_constr_pass2__Coeffs0_7);
    }
#line 637 "term_constr_pass2.m"
    {
#line 637 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__Eqn_6 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_pass2__Coeffs_10, transform_hlds__term_constr_pass2__Operator_8, transform_hlds__term_constr_pass2__Constant_9);
    }
#line 634 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__Eqn_6;
#line 634 "term_constr_pass2.m"
  }
#line 631 "term_constr_pass2.m"
}

#line 625 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
#line 625 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1)
#line 625 "term_constr_pass2.m"
{
#line 627 "term_constr_pass2.m"
  {
#line 627 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 627 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 627 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 627 "term_constr_pass2.m"
      {
#line 627 "term_constr_pass2.m"
        {
#line 627 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0);
        }
#line 627 "term_constr_pass2.m"
      }
#line 627 "term_constr_pass2.m"
    else
#line 628 "term_constr_pass2.m"
      {
#line 628 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edge_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 628 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edges_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 628 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5;
#line 628 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6;
#line 629 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7;
#line 629 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8;
#line 629 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_9_9;
#line 629 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_10_10;
#line 629 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11;

#line 629 "term_constr_pass2.m"
        {
#line 629 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_5_5 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(transform_hlds__term_constr_pass2__Edges_4);
        }
#line 629 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
#line 629 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
#line 629 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
#line 629 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
#line 629 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
#line 629 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
#line 629 "term_constr_pass2.m"
        {
#line 629 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_5_5, ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)), ((MR_Box) (transform_hlds__term_constr_pass2__Edge_3)));
        }
#line 628 "term_constr_pass2.m"
      }
#line 627 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 627 "term_constr_pass2.m"
  }
#line 625 "term_constr_pass2.m"
}

#line 613 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
#line 613 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_5,
#line 613 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__CurrPPId_6,
#line 613 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_7,
#line 613 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Edges_8)
#line 613 "term_constr_pass2.m"
{
#line 619 "term_constr_pass2.m"
  {
#line 619 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 617 "term_constr_pass2.m"
    {
#line 617 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__StartPPId_5, transform_hlds__term_constr_pass2__CurrPPId_6);
    }
#line 619 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 618 "term_constr_pass2.m"
      *transform_hlds__term_constr_pass2__Edges_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 619 "term_constr_pass2.m"
    else
#line 620 "term_constr_pass2.m"
      {
#line 620 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edge_9;
#line 620 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edges0_10;
#line 620 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11;
#line 620 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv0_Edge_9;
#line 621 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12;
#line 621 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13;
#line 621 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_14_14;
#line 621 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_15_15;
#line 621 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_16_16;

#line 620 "term_constr_pass2.m"
        {
#line 620 "term_constr_pass2.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__Map_7, ((MR_Box) (transform_hlds__term_constr_pass2__CurrPPId_6)), &transform_hlds__term_constr_pass2__conv0_Edge_9);
        }
#line 620 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__Edge_9 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_Edge_9);
#line 621 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 0)));
#line 621 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 1)));
#line 621 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 2)));
#line 621 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 3)));
#line 621 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 4)));
#line 621 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 5)));
#line 621 "term_constr_pass2.m"
        {
#line 621 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(transform_hlds__term_constr_pass2__StartPPId_5, transform_hlds__term_constr_pass2__V_11_11, transform_hlds__term_constr_pass2__Map_7, &transform_hlds__term_constr_pass2__Edges0_10);
        }
#line 622 "term_constr_pass2.m"
        {
#line 622 "term_constr_pass2.m"
          MR_Word base;
#line 622 "term_constr_pass2.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__Edges_8 = base;
#line 622 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_9));
#line 622 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Edges0_10));
#line 622 "term_constr_pass2.m"
        }
#line 620 "term_constr_pass2.m"
      }
#line 619 "term_constr_pass2.m"
  }
#line 613 "term_constr_pass2.m"
}

#line 601 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
#line 601 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 601 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 601 "term_constr_pass2.m"
{
#line 601 "term_constr_pass2.m"
  {
#line 601 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 601 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 601 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_Eqn_6;

#line 601 "term_constr_pass2.m"
    {
#line 601 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv1_Eqn_6 = transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 601 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_Eqn_6));
#line 601 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 601 "term_constr_pass2.m"
  }
#line 601 "term_constr_pass2.m"
}

#line 596 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
#line 596 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 596 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 596 "term_constr_pass2.m"
{
#line 596 "term_constr_pass2.m"
  {
#line 596 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 596 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 596 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_3;

#line 596 "term_constr_pass2.m"
    {
#line 596 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 596 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_3));
#line 596 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 596 "term_constr_pass2.m"
  }
#line 596 "term_constr_pass2.m"
}

#line 578 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
#line 578 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 578 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2,
#line 578 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3,
#line 578 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4,
#line 578 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5,
#line 578 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6,
#line 578 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7)
#line 578 "term_constr_pass2.m"
{
#line 581 "term_constr_pass2.m"
  while (MR_TRUE)
#line 581 "term_constr_pass2.m"
    {
#line 581 "term_constr_pass2.m"
      /* tailcall optimized into a loop */
#line 581 "term_constr_pass2.m"
      {
#line 581 "term_constr_pass2.m"
        MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 581 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "term_constr_pass2.m"
          {
#line 581 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6;
#line 581 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4;
#line 581 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2;
#line 581 "term_constr_pass2.m"
          }
#line 581 "term_constr_pass2.m"
        else
#line 582 "term_constr_pass2.m"
          {
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeInfo_67_67 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_70_70;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edge_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edges_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__HeadVars_22;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Subst0_23;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Subst_24;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints0_25;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints1_26;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints2_27;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints3_28;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_37_37;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_39_39;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_40_40;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_41_41;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_42_42;
#line 582 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_52_52;
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_53_53;
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 596 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_57_57;
#line 596 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_58_58;
#line 596 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_59_59;
#line 596 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_60_60;
#line 596 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_61_61;
#line 600 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_62_62;
#line 600 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_63_63;
#line 600 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_64_64;
#line 600 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_65_65;
#line 600 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_66_66;

#line 583 "term_constr_pass2.m"
            {
#line 583 "term_constr_pass2.m"
              mercury__set__union_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__V_35_35, transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36);
            }
#line 584 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 584 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 584 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__HeadVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 584 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 584 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 584 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 585 "term_constr_pass2.m"
            {
#line 585 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Subst0_23 = mercury__assoc_list__from_corresponding_lists_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__HeadVars_22, transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4);
            }
#line 586 "term_constr_pass2.m"
            {
#line 586 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_37_37 = mercury__bimap__init_0_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67);
            }
#line 586 "term_constr_pass2.m"
            {
#line 586 "term_constr_pass2.m"
              mercury__bimap__set_from_assoc_list_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__Subst0_23, transform_hlds__term_constr_pass2__V_37_37, &transform_hlds__term_constr_pass2__Subst_24);
            }
#line 596 "term_constr_pass2.m"
            {
#line 596 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 596 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[4]));
#line 596 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1));
#line 596 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 596 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Subst_24));
#line 596 "term_constr_pass2.m"
            }
#line 596 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 596 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 596 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 596 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 596 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 596 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 596 "term_constr_pass2.m"
            {
#line 596 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__V_39_39, transform_hlds__term_constr_pass2__V_40_40);
            }
#line 599 "term_constr_pass2.m"
            {
#line 599 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints0_25 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6);
            }
#line 600 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 600 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 600 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 600 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 600 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 600 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 600 "term_constr_pass2.m"
            {
#line 600 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints1_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__V_41_41);
            }
#line 3860 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeCtorInfo_70_70 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 601 "term_constr_pass2.m"
            {
#line 601 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 601 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[5]));
#line 601 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2));
#line 601 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 601 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Subst_24));
#line 601 "term_constr_pass2.m"
            }
#line 601 "term_constr_pass2.m"
            {
#line 601 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints2_27 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__V_42_42, transform_hlds__term_constr_pass2__Constraints1_26);
            }
#line 602 "term_constr_pass2.m"
            {
#line 602 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints3_28 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__Constraints0_25, transform_hlds__term_constr_pass2__Constraints2_27);
            }
#line 603 "term_constr_pass2.m"
            {
#line 603 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_pass2__Constraints3_28);
            }
#line 604 "term_constr_pass2.m"
            /* direct tailcall eliminated */
#line 604 "term_constr_pass2.m"
            {
#line 604 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_pass2__Edges_18;
#line 604 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0__tmp_copy_2 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36;
#line 604 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0__tmp_copy_4 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38;
#line 604 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0__tmp_copy_6 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43;

#line 604 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0__tmp_copy_6;
#line 604 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0__tmp_copy_4;
#line 604 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0__tmp_copy_2;
#line 604 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1;
#line 604 "term_constr_pass2.m"
            }
#line 604 "term_constr_pass2.m"
            continue;
#line 582 "term_constr_pass2.m"
          }
#line 581 "term_constr_pass2.m"
      }
#line 581 "term_constr_pass2.m"
      break;
#line 581 "term_constr_pass2.m"
    }
#line 578 "term_constr_pass2.m"
}

#line 551 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
#line 551 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_4,
#line 551 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycle_5)
#line 551 "term_constr_pass2.m"
{
#line 553 "term_constr_pass2.m"
  {
#line 553 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 553 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__CollapsedCycle_6;
#line 553 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Edges0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_5, (MR_Integer) 1)));
#line 554 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_5, (MR_Integer) 0)));

#line 558 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__Edges0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "term_constr_pass2.m"
      {
#line 557 "term_constr_pass2.m"
        {
#line 557 "term_constr_pass2.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "function \140transform_hlds.term_constr_pass2.collapse_cycle\'/2", (MR_String) "trying to collapse a cycle with no edges");
        }
#line 556 "term_constr_pass2.m"
      }
#line 558 "term_constr_pass2.m"
    else
#line 558 "term_constr_pass2.m"
      {
#line 558 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Edges0_8, (MR_Integer) 1)));
#line 558 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Edges0_8, (MR_Integer) 0)));

#line 558 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__CollapsedCycle_6 = transform_hlds__term_constr_pass2__V_35_35;
#line 558 "term_constr_pass2.m"
        else
#line 562 "term_constr_pass2.m"
          {
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__StartEdge_14;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Rest_15;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__HeadVars_18;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CallVars0_19;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Zeros0_20;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Polyhedron0_21;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Zeros_22;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CallVars_23;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Polyhedron_24;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__EdgeMap_40;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_41_41;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_51_51;
#line 562 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_52_52;
#line 629 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_53_53;
#line 629 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 629 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 629 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 629 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_57_57;
#line 610 "term_constr_pass2.m"
            MR_Box transform_hlds__term_constr_pass2__conv0_StartEdge_14;
#line 611 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_42_42;
#line 611 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_43_43;
#line 611 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_44_44;
#line 611 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_45_45;
#line 611 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_46_46;
#line 566 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_16_16;
#line 566 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17;

#line 629 "term_constr_pass2.m"
            {
#line 629 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_51_51 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(transform_hlds__term_constr_pass2__V_34_34);
            }
#line 629 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 0)));
#line 629 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 1)));
#line 629 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 2)));
#line 629 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 3)));
#line 629 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 4)));
#line 629 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 5)));
#line 629 "term_constr_pass2.m"
            {
#line 629 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__EdgeMap_40 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_51_51, ((MR_Box) (transform_hlds__term_constr_pass2__V_52_52)), ((MR_Box) (transform_hlds__term_constr_pass2__V_35_35)));
            }
#line 610 "term_constr_pass2.m"
            {
#line 610 "term_constr_pass2.m"
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__EdgeMap_40, ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4)), &transform_hlds__term_constr_pass2__conv0_StartEdge_14);
            }
#line 610 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__StartEdge_14 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_StartEdge_14);
#line 611 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 0)));
#line 611 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 1)));
#line 611 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 2)));
#line 611 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 3)));
#line 611 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 4)));
#line 611 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 5)));
#line 611 "term_constr_pass2.m"
            {
#line 611 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(transform_hlds__term_constr_pass2__StartPPId_4, transform_hlds__term_constr_pass2__V_41_41, transform_hlds__term_constr_pass2__EdgeMap_40, &transform_hlds__term_constr_pass2__Rest_15);
            }
#line 566 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 0)));
#line 566 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 1)));
#line 566 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__HeadVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 2)));
#line 566 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__CallVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 3)));
#line 566 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Zeros0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 4)));
#line 566 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Polyhedron0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 5)));
#line 568 "term_constr_pass2.m"
            {
#line 568 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(transform_hlds__term_constr_pass2__Rest_15, transform_hlds__term_constr_pass2__Zeros0_20, &transform_hlds__term_constr_pass2__Zeros_22, transform_hlds__term_constr_pass2__CallVars0_19, &transform_hlds__term_constr_pass2__CallVars_23, transform_hlds__term_constr_pass2__Polyhedron0_21, &transform_hlds__term_constr_pass2__Polyhedron_24);
            }
#line 570 "term_constr_pass2.m"
            {
#line 570 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__CollapsedCycle_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 570 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4));
#line 570 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4));
#line 570 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__HeadVars_18));
#line 570 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__CallVars_23));
#line 570 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__Zeros_22));
#line 570 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Polyhedron_24));
#line 570 "term_constr_pass2.m"
            }
#line 562 "term_constr_pass2.m"
          }
#line 558 "term_constr_pass2.m"
      }
#line 553 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__CollapsedCycle_6;
#line 553 "term_constr_pass2.m"
  }
#line 551 "term_constr_pass2.m"
}

#line 540 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
#line 540 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 540 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 540 "term_constr_pass2.m"
{
#line 540 "term_constr_pass2.m"
  {
#line 540 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 540 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 540 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_9;

#line 540 "term_constr_pass2.m"
    {
#line 540 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__540__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 540 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_9));
#line 540 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 540 "term_constr_pass2.m"
  }
#line 540 "term_constr_pass2.m"
}

#line 538 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
#line 538 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Vars_4,
#line 538 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5)
#line 538 "term_constr_pass2.m"
{
#line 540 "term_constr_pass2.m"
  {
#line 540 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 540 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 540 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_7_7;

#line 540 "term_constr_pass2.m"
    {
#line 540 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[3]));
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1));
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_5));
#line 540 "term_constr_pass2.m"
    }
#line 540 "term_constr_pass2.m"
    {
#line 540 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1], (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__V_7_7, transform_hlds__term_constr_pass2__Vars_4);
    }
#line 540 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 540 "term_constr_pass2.m"
  }
#line 538 "term_constr_pass2.m"
}

#line 532 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
#line 532 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_3,
#line 532 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 532 "term_constr_pass2.m"
{
#line 534 "term_constr_pass2.m"
  {
#line 534 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 534 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Nodes_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 534 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 534 "term_constr_pass2.m"
    {
#line 534 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, ((MR_Box) (transform_hlds__term_constr_pass2__PPId_3)), transform_hlds__term_constr_pass2__Nodes_4);
    }
#line 534 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 534 "term_constr_pass2.m"
  }
#line 532 "term_constr_pass2.m"
}

#line 540 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
#line 540 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 540 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 540 "term_constr_pass2.m"
{
#line 540 "term_constr_pass2.m"
  {
#line 540 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 540 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 540 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__2_9;

#line 540 "term_constr_pass2.m"
    {
#line 540 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__2_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__540__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 540 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__2_9));
#line 540 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 540 "term_constr_pass2.m"
  }
#line 540 "term_constr_pass2.m"
}

#line 514 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
#line 514 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 514 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 514 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 514 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 514 "term_constr_pass2.m"
{
#line 514 "term_constr_pass2.m"
  {
#line 514 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 514 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 514 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__3_24;

#line 514 "term_constr_pass2.m"
    {
#line 514 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__514__1_2_f_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__3_24);
    }
#line 514 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 514 "term_constr_pass2.m"
      {
#line 514 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__3_24));
#line 514 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 514 "term_constr_pass2.m"
      }
#line 514 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 514 "term_constr_pass2.m"
  }
#line 514 "term_constr_pass2.m"
}

#line 501 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
#line 501 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
#line 501 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_6,
#line 501 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_7,
#line 501 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Loop_8)
#line 501 "term_constr_pass2.m"
{
#line 504 "term_constr_pass2.m"
  {
#line 504 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_74_74;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_75_75;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__IsActive_9;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Proc_12;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Inputs_13;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadArgs_14;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__CallArgs_15;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Terms_16;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Condition_17;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Label_18;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_25_25;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_26_26;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_27_27;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_28_28;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_29_29;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_30_30;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_31_31;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_33_33;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_34_34;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_35_35;
#line 504 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_84_84;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_48_48;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_49_49;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_50_50;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_51_51;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_52_52;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_53_53;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 518 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__V_57_57;
#line 518 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_58_58;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_59_59;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_60_60;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_61_61;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_62_62;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_63_63;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_64_64;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_65_65;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_66_66;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_67_67;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_68_68;
#line 529 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_69_69;
#line 529 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_70_70;
#line 529 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_71_71;
#line 529 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_72_72;
#line 529 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_73_73;

#line 506 "term_constr_pass2.m"
    {
#line 506 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 506 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 506 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 506 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 506 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 506 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));

#line 506 "term_constr_pass2.m"
      {
#line 506 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_7, transform_hlds__term_constr_pass2__V_77_77);
      }
#line 506 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 506 "term_constr_pass2.m"
    }
#line 507 "term_constr_pass2.m"
    if (!(transform_hlds__term_constr_pass2__succeeded))
#line 507 "term_constr_pass2.m"
      {
#line 507 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 507 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 507 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 507 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 507 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 507 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));

#line 507 "term_constr_pass2.m"
        {
#line 507 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_7, transform_hlds__term_constr_pass2__V_78_78);
        }
#line 507 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 507 "term_constr_pass2.m"
      }
#line 511 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 510 "term_constr_pass2.m"
      {
#line 510 "term_constr_pass2.m"
        {
#line 510 "term_constr_pass2.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.strict_decrease_around_loop\'/4", (MR_String) "badly formed loop");
        }
#line 510 "term_constr_pass2.m"
      }
#line 511 "term_constr_pass2.m"
    else
#line 512 "term_constr_pass2.m"
      {
#line 512 "term_constr_pass2.m"
      }
#line 514 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__IsActive_9 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[3];
#line 517 "term_constr_pass2.m"
    {
#line 517 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Proc_12 = transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(transform_hlds__term_constr_pass2__AbstractSCC_5, transform_hlds__term_constr_pass2__PPId_7);
    }
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 0)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 1)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 2)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 3)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__Inputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 4)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 5)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 6)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 7)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 8)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 9)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 10)));
#line 518 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 11)));
#line 4512 "transform_hlds.term_constr_pass2.c"
    transform_hlds__term_constr_pass2__TypeInfo_74_74 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 4514 "transform_hlds.term_constr_pass2.c"
    transform_hlds__term_constr_pass2__TypeCtorInfo_75_75 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
#line 519 "term_constr_pass2.m"
    {
#line 519 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadArgs_14 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__TypeCtorInfo_75_75, transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__IsActive_9, transform_hlds__term_constr_pass2__V_25_25, transform_hlds__term_constr_pass2__Inputs_13);
    }
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
#line 521 "term_constr_pass2.m"
    {
#line 521 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__CallArgs_15 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__TypeCtorInfo_75_75, transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__IsActive_9, transform_hlds__term_constr_pass2__V_26_26, transform_hlds__term_constr_pass2__Inputs_13);
    }
#line 523 "term_constr_pass2.m"
    {
#line 523 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_29_29 = libs__rat__one_0_f_0();
    }
#line 523 "term_constr_pass2.m"
    {
#line 523 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_28_28 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_pass2__V_29_29);
    }
#line 540 "term_constr_pass2.m"
    {
#line 540 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[3]));
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2));
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 540 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__V_28_28));
#line 540 "term_constr_pass2.m"
    }
#line 540 "term_constr_pass2.m"
    {
#line 540 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_27_27 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1], (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__V_84_84, transform_hlds__term_constr_pass2__HeadArgs_14);
    }
#line 523 "term_constr_pass2.m"
    {
#line 523 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_31_31 = libs__rat__one_0_f_0();
    }
#line 523 "term_constr_pass2.m"
    {
#line 523 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_30_30 = transform_hlds__term_constr_pass2__make_coeffs_2_f_0(transform_hlds__term_constr_pass2__CallArgs_15, transform_hlds__term_constr_pass2__V_31_31);
    }
#line 523 "term_constr_pass2.m"
    {
#line 523 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Terms_16 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__V_27_27, transform_hlds__term_constr_pass2__V_30_30);
    }
#line 528 "term_constr_pass2.m"
    {
#line 528 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_34_34 = libs__rat__one_0_f_0();
    }
#line 528 "term_constr_pass2.m"
    {
#line 528 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_33_33 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_pass2__V_34_34);
    }
#line 528 "term_constr_pass2.m"
    {
#line 528 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Condition_17 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_pass2__Terms_16, (MR_Integer) 0, transform_hlds__term_constr_pass2__V_33_33);
    }
#line 529 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 529 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 529 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 529 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 529 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 529 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
#line 529 "term_constr_pass2.m"
    {
#line 529 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Label_18 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__V_35_35);
    }
#line 530 "term_constr_pass2.m"
    {
#line 530 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = libs__lp_rational__entailed_3_p_0(transform_hlds__term_constr_pass2__SizeVarSet_6, transform_hlds__term_constr_pass2__Label_18, transform_hlds__term_constr_pass2__Condition_17);
    }
#line 504 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 504 "term_constr_pass2.m"
  }
#line 501 "term_constr_pass2.m"
}

#line 492 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
#line 492 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 492 "term_constr_pass2.m"
{
#line 492 "term_constr_pass2.m"
  {
#line 492 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 492 "term_constr_pass2.m"
    MR_builtin_longjmp((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0, 1);
#line 492 "term_constr_pass2.m"
  }
#line 492 "term_constr_pass2.m"
}

#line 493 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
#line 493 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 493 "term_constr_pass2.m"
{
#line 493 "term_constr_pass2.m"
  {
#line 493 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 493 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21 = ((MR_Word) (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21);
#line 493 "term_constr_pass2.m"
    {
#line 493 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(transform_hlds__term_constr_pass2__env_ptr);
#line 493 "term_constr_pass2.m"
      return;
    }
#line 493 "term_constr_pass2.m"
  }
#line 493 "term_constr_pass2.m"
}

#line 492 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
#line 492 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 492 "term_constr_pass2.m"
{
#line 492 "term_constr_pass2.m"
  {
#line 492 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 495 "term_constr_pass2.m"
    {
#line 495 "term_constr_pass2.m"
      (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21);
    }
#line 494 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
#line 494 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
#line 494 "term_constr_pass2.m"
      {
#line 494 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(transform_hlds__term_constr_pass2__env_ptr);
#line 494 "term_constr_pass2.m"
        return;
      }
#line 492 "term_constr_pass2.m"
  }
#line 492 "term_constr_pass2.m"
}

#line 492 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
#line 492 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 492 "term_constr_pass2.m"
{
#line 492 "term_constr_pass2.m"
  {
#line 492 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 492 "term_constr_pass2.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0) == 0)
#line 492 "term_constr_pass2.m"
      {
#line 492 "term_constr_pass2.m"
        {
#line 493 "term_constr_pass2.m"
          {
#line 493 "term_constr_pass2.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, &(transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11, transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3, transform_hlds__term_constr_pass2__env_ptr);
          }
#line 492 "term_constr_pass2.m"
        }
#line 492 "term_constr_pass2.m"
        (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_FALSE;
#line 492 "term_constr_pass2.m"
      }
#line 492 "term_constr_pass2.m"
    else
#line 492 "term_constr_pass2.m"
      (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
#line 492 "term_constr_pass2.m"
  }
#line 492 "term_constr_pass2.m"
}

#line 478 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
#line 478 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_1,
#line 478 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
#line 478 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 478 "term_constr_pass2.m"
{
#line 478 "term_constr_pass2.m"
  {
#line 478 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s transform_hlds__term_constr_pass2__env;

#line 478 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1 = transform_hlds__term_constr_pass2__AbstractSCC_1;
#line 478 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2 = transform_hlds__term_constr_pass2__SizeVarSet_2;
#line 481 "term_constr_pass2.m"
    while (MR_TRUE)
#line 481 "term_constr_pass2.m"
      {
#line 481 "term_constr_pass2.m"
        /* tailcall optimized into a loop */
#line 481 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "term_constr_pass2.m"
          (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
#line 481 "term_constr_pass2.m"
        else
#line 482 "term_constr_pass2.m"
          {
#line 482 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CycleSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 482 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CycleSets_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));

#line 483 "term_constr_pass2.m"
            (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CycleSet_8, (MR_Integer) 0)));
#line 483 "term_constr_pass2.m"
            (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CycleSet_8, (MR_Integer) 1)));
#line 490 "term_constr_pass2.m"
            if (((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "term_constr_pass2.m"
              (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
#line 490 "term_constr_pass2.m"
            else
#line 492 "term_constr_pass2.m"
              {
#line 492 "term_constr_pass2.m"
                {
#line 492 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(&transform_hlds__term_constr_pass2__env);
                }
#line 492 "term_constr_pass2.m"
                (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
#line 492 "term_constr_pass2.m"
              }
#line 482 "term_constr_pass2.m"
            if ((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
#line 485 "term_constr_pass2.m"
              {
#line 485 "term_constr_pass2.m"
                /* direct tailcall eliminated */
#line 485 "term_constr_pass2.m"
                {
#line 485 "term_constr_pass2.m"
                  MR_Word transform_hlds__term_constr_pass2__HeadVar__3__tmp_copy_3 = transform_hlds__term_constr_pass2__CycleSets_9;

#line 485 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__HeadVar__3__tmp_copy_3;
#line 485 "term_constr_pass2.m"
                }
#line 485 "term_constr_pass2.m"
                continue;
#line 485 "term_constr_pass2.m"
              }
#line 482 "term_constr_pass2.m"
          }
#line 481 "term_constr_pass2.m"
        return (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded;
#line 481 "term_constr_pass2.m"
        break;
#line 481 "term_constr_pass2.m"
      }
#line 478 "term_constr_pass2.m"
  }
#line 478 "term_constr_pass2.m"
}

#line 445 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
#line 445 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 445 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_2)
#line 445 "term_constr_pass2.m"
{
#line 448 "term_constr_pass2.m"
  while (MR_TRUE)
#line 448 "term_constr_pass2.m"
    {
#line 448 "term_constr_pass2.m"
      /* tailcall optimized into a loop */
#line 448 "term_constr_pass2.m"
      {
#line 448 "term_constr_pass2.m"
        MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 448 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 448 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "term_constr_pass2.m"
          {
#line 449 "term_constr_pass2.m"
            {
#line 449 "term_constr_pass2.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "function \140transform_hlds.term_constr_pass2.get_proc_from_abstract_scc\'/2", (MR_String) "cannot find proc");
            }
#line 448 "term_constr_pass2.m"
          }
#line 448 "term_constr_pass2.m"
        else
#line 450 "term_constr_pass2.m"
          {
#line 450 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Proc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 450 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Procs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 0)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 1)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 2)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 3)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 4)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 5)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 6)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 7)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 8)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 9)));
#line 451 "term_constr_pass2.m"
            MR_Integer transform_hlds__term_constr_pass2__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 10)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 11)));

#line 451 "term_constr_pass2.m"
            {
#line 451 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_2, transform_hlds__term_constr_pass2__V_23_23);
            }
#line 450 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 452 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__Proc_9;
#line 450 "term_constr_pass2.m"
            else
#line 454 "term_constr_pass2.m"
              {
#line 454 "term_constr_pass2.m"
                /* direct tailcall eliminated */
#line 454 "term_constr_pass2.m"
                {
#line 454 "term_constr_pass2.m"
                  MR_Word transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_pass2__Procs_10;

#line 454 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1;
#line 454 "term_constr_pass2.m"
                }
#line 454 "term_constr_pass2.m"
                continue;
#line 454 "term_constr_pass2.m"
              }
#line 450 "term_constr_pass2.m"
          }
#line 448 "term_constr_pass2.m"
        return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 448 "term_constr_pass2.m"
      }
#line 448 "term_constr_pass2.m"
      break;
#line 448 "term_constr_pass2.m"
    }
#line 445 "term_constr_pass2.m"
}

#line 436 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
#line 436 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 436 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 436 "term_constr_pass2.m"
{
#line 436 "term_constr_pass2.m"
  {
#line 436 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 436 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 436 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6;

#line 436 "term_constr_pass2.m"
    {
#line 436 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6 = transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 436 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6));
#line 436 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 436 "term_constr_pass2.m"
  }
#line 436 "term_constr_pass2.m"
}

#line 434 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
#line 434 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 434 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 434 "term_constr_pass2.m"
{
#line 434 "term_constr_pass2.m"
  {
#line 434 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 434 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

#line 434 "term_constr_pass2.m"
    {
#line 434 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 434 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 434 "term_constr_pass2.m"
  }
#line 434 "term_constr_pass2.m"
}

#line 430 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
#line 430 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 430 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycles0_2)
#line 430 "term_constr_pass2.m"
{
#line 432 "term_constr_pass2.m"
  {
#line 432 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 432 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 432 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 432 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 432 "term_constr_pass2.m"
    else
#line 433 "term_constr_pass2.m"
      {
#line 433 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_19_19;
#line 433 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 433 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__PCycles_9;
#line 433 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycles1_10;
#line 433 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__CycleSets0_11;
#line 433 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__PEdges_12;
#line 433 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_15_15;
#line 433 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_16_16;

#line 434 "term_constr_pass2.m"
        {
#line 434 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[4]));
#line 434 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1));
#line 434 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 434 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
#line 434 "term_constr_pass2.m"
        }
#line 5070 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;
#line 434 "term_constr_pass2.m"
        {
#line 434 "term_constr_pass2.m"
          mercury__list__filter_4_p_0(transform_hlds__term_constr_pass2__TypeCtorInfo_19_19, transform_hlds__term_constr_pass2__V_15_15, transform_hlds__term_constr_pass2__Cycles0_2, &transform_hlds__term_constr_pass2__PCycles_9, &transform_hlds__term_constr_pass2__Cycles1_10);
        }
#line 435 "term_constr_pass2.m"
        {
#line 435 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__CycleSets0_11 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(transform_hlds__term_constr_pass2__Procs_6, transform_hlds__term_constr_pass2__Cycles1_10);
        }
#line 436 "term_constr_pass2.m"
        {
#line 436 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 436 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[1]));
#line 436 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2));
#line 436 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 436 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
#line 436 "term_constr_pass2.m"
        }
#line 436 "term_constr_pass2.m"
        {
#line 436 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__PEdges_12 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_16_16, transform_hlds__term_constr_pass2__PCycles_9);
        }
#line 440 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__PEdges_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__CycleSets0_11;
#line 440 "term_constr_pass2.m"
        else
#line 441 "term_constr_pass2.m"
          {
#line 441 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17;

#line 442 "term_constr_pass2.m"
            {
#line 442 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_17_17, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
#line 442 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_17_17, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__PEdges_12));
#line 442 "term_constr_pass2.m"
            }
#line 442 "term_constr_pass2.m"
            {
#line 442 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_17_17));
#line 442 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__CycleSets0_11));
#line 442 "term_constr_pass2.m"
            }
#line 441 "term_constr_pass2.m"
          }
#line 433 "term_constr_pass2.m"
      }
#line 432 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 432 "term_constr_pass2.m"
  }
#line 430 "term_constr_pass2.m"
}

#line 417 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
#line 417 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 417 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 417 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 417 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 417 "term_constr_pass2.m"
{
#line 417 "term_constr_pass2.m"
  {
#line 417 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 417 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20;

#line 417 "term_constr_pass2.m"
    {
#line 417 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20);
    }
#line 417 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20));
#line 417 "term_constr_pass2.m"
  }
#line 417 "term_constr_pass2.m"
}

#line 412 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
#line 412 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 412 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 412 "term_constr_pass2.m"
{
#line 412 "term_constr_pass2.m"
  {
#line 412 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 412 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

#line 412 "term_constr_pass2.m"
    {
#line 412 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__413__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 412 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 412 "term_constr_pass2.m"
  }
#line 412 "term_constr_pass2.m"
}

#line 402 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Start_8,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SoFar_9,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_10,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_12,
#line 402 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19,
#line 402 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20)
#line 402 "term_constr_pass2.m"
{
#line 410 "term_constr_pass2.m"
  {
#line 410 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 407 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 407 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 407 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 407 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 407 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 407 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));

#line 407 "term_constr_pass2.m"
    {
#line 407 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__Start_8, transform_hlds__term_constr_pass2__V_68_68);
    }
#line 410 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 408 "term_constr_pass2.m"
      {
#line 408 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycle_14;
#line 408 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_21_21;
#line 408 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 408 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_23_23;
#line 408 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 408 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 408 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 408 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 408 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));

#line 408 "term_constr_pass2.m"
        {
#line 408 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_21_21, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_22_22));
#line 408 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_21_21, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
#line 408 "term_constr_pass2.m"
        }
#line 408 "term_constr_pass2.m"
        {
#line 408 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_23_23, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_12));
#line 408 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_23_23, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__SoFar_9));
#line 408 "term_constr_pass2.m"
        }
#line 408 "term_constr_pass2.m"
        {
#line 408 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Cycle_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_14, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_21_21));
#line 408 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_14, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_23_23));
#line 408 "term_constr_pass2.m"
        }
#line 409 "term_constr_pass2.m"
        {
#line 409 "term_constr_pass2.m"
          mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, ((MR_Box) (transform_hlds__term_constr_pass2__Cycle_14)), transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19, transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20);
#line 409 "term_constr_pass2.m"
          return;
        }
#line 408 "term_constr_pass2.m"
      }
#line 410 "term_constr_pass2.m"
    else
#line 420 "term_constr_pass2.m"
      {
#line 420 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__MoreEdges0_15;
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));
#line 411 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv0_MoreEdges0_15;

#line 411 "term_constr_pass2.m"
        {
#line 411 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map_10, ((MR_Box) (transform_hlds__term_constr_pass2__V_25_25)), &transform_hlds__term_constr_pass2__conv0_MoreEdges0_15);
        }
#line 411 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 411 "term_constr_pass2.m"
          {
#line 411 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__MoreEdges0_15 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_MoreEdges0_15);
#line 411 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 411 "term_constr_pass2.m"
          }
#line 420 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 414 "term_constr_pass2.m"
          {
#line 414 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_63_63;
#line 414 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__NotVisited_16;
#line 414 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__MoreEdges_18;
#line 414 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_28_28;
#line 414 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_30_30;
#line 414 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_31_31;
#line 414 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_32_32;
#line 418 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 418 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 418 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 418 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_57_57;
#line 418 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_58_58;
#line 416 "term_constr_pass2.m"
            MR_Box transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20;

#line 412 "term_constr_pass2.m"
            {
#line 412 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__NotVisited_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 412 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[3]));
#line 412 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1));
#line 412 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 412 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
#line 412 "term_constr_pass2.m"
            }
#line 5387 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeCtorInfo_63_63 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
#line 415 "term_constr_pass2.m"
            {
#line 415 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__MoreEdges_18 = mercury__list__filter_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_63_63, transform_hlds__term_constr_pass2__NotVisited_16, transform_hlds__term_constr_pass2__MoreEdges0_15);
            }
#line 417 "term_constr_pass2.m"
            {
#line 417 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_30_30, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_12));
#line 417 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_30_30, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__SoFar_9));
#line 417 "term_constr_pass2.m"
            }
#line 418 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 418 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 418 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 418 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 418 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 418 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));
#line 418 "term_constr_pass2.m"
            {
#line 418 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_31_31, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_32_32));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_31_31, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
#line 418 "term_constr_pass2.m"
            }
#line 417 "term_constr_pass2.m"
            {
#line 417 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 417 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[0]));
#line 417 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2));
#line 417 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 417 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Start_8));
#line 417 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_30_30));
#line 417 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Map_10));
#line 417 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 6) = ((MR_Box) (transform_hlds__term_constr_pass2__V_31_31));
#line 417 "term_constr_pass2.m"
            }
#line 416 "term_constr_pass2.m"
            {
#line 416 "term_constr_pass2.m"
              mercury__list__foldl_4_p_0(transform_hlds__term_constr_pass2__TypeCtorInfo_63_63, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__V_28_28, transform_hlds__term_constr_pass2__MoreEdges_18, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19)), &transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20);
            }
#line 416 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20);
#line 414 "term_constr_pass2.m"
          }
#line 420 "term_constr_pass2.m"
        else
#line 420 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19;
#line 420 "term_constr_pass2.m"
      }
#line 410 "term_constr_pass2.m"
  }
#line 402 "term_constr_pass2.m"
}

#line 399 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
#line 399 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 399 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 399 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 399 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 399 "term_constr_pass2.m"
{
#line 399 "term_constr_pass2.m"
  {
#line 399 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 399 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20;

#line 399 "term_constr_pass2.m"
    {
#line 399 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20);
    }
#line 399 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20));
#line 399 "term_constr_pass2.m"
  }
#line 399 "term_constr_pass2.m"
}

#line 385 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
#line 385 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 385 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map0_2)
#line 385 "term_constr_pass2.m"
{
#line 388 "term_constr_pass2.m"
  {
#line 388 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 388 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 388 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "term_constr_pass2.m"
    else
#line 389 "term_constr_pass2.m"
      {
#line 389 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Start_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 389 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 389 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycles0_9;
#line 389 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Map_10;
#line 389 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycles1_11;
#line 389 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__InitialEdges_18;
#line 389 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_19_19;
#line 398 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv0_InitialEdges_18;
#line 399 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv2_Cycles0_9;

#line 398 "term_constr_pass2.m"
        {
#line 398 "term_constr_pass2.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map0_2, ((MR_Box) (transform_hlds__term_constr_pass2__Start_5)), &transform_hlds__term_constr_pass2__conv0_InitialEdges_18);
        }
#line 398 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__InitialEdges_18 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_InitialEdges_18);
#line 399 "term_constr_pass2.m"
        {
#line 399 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 399 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[0]));
#line 399 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1));
#line 399 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 399 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Start_5));
#line 399 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 399 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Map0_2));
#line 399 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 399 "term_constr_pass2.m"
        }
#line 399 "term_constr_pass2.m"
        {
#line 399 "term_constr_pass2.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__V_19_19, transform_hlds__term_constr_pass2__InitialEdges_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_pass2__conv2_Cycles0_9);
        }
#line 399 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__Cycles0_9 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_Cycles0_9);
#line 391 "term_constr_pass2.m"
        {
#line 391 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Map_10 = mercury__map__delete_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map0_2, ((MR_Box) (transform_hlds__term_constr_pass2__Start_5)));
        }
#line 392 "term_constr_pass2.m"
        {
#line 392 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Cycles1_11 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(transform_hlds__term_constr_pass2__Rest_6, transform_hlds__term_constr_pass2__Map_10);
        }
#line 393 "term_constr_pass2.m"
        {
#line 393 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, transform_hlds__term_constr_pass2__Cycles0_9, transform_hlds__term_constr_pass2__Cycles1_11);
        }
#line 389 "term_constr_pass2.m"
      }
#line 388 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 388 "term_constr_pass2.m"
  }
#line 385 "term_constr_pass2.m"
}

#line 379 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
#line 379 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 379 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 379 "term_constr_pass2.m"
{
#line 379 "term_constr_pass2.m"
  {
#line 379 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 379 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

#line 379 "term_constr_pass2.m"
    {
#line 379 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__379__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 379 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 379 "term_constr_pass2.m"
  }
#line 379 "term_constr_pass2.m"
}

#line 373 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
#line 373 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 373 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edges0_2)
#line 373 "term_constr_pass2.m"
{
#line 376 "term_constr_pass2.m"
  {
#line 376 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 376 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 376 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "term_constr_pass2.m"
      {
#line 376 "term_constr_pass2.m"
        {
#line 376 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0]);
        }
#line 376 "term_constr_pass2.m"
      }
#line 376 "term_constr_pass2.m"
    else
#line 377 "term_constr_pass2.m"
      {
#line 377 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__ProcId_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__SCC_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 377 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Map0_9;
#line 377 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edges_10;
#line 377 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12;

#line 378 "term_constr_pass2.m"
        {
#line 378 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Map0_9 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(transform_hlds__term_constr_pass2__SCC_6, transform_hlds__term_constr_pass2__Edges0_2);
        }
#line 379 "term_constr_pass2.m"
        {
#line 379 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 379 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[2]));
#line 379 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_edges_2_f_0_1));
#line 379 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 379 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__ProcId_5));
#line 379 "term_constr_pass2.m"
        }
#line 379 "term_constr_pass2.m"
        {
#line 379 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Edges_10 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_12_12, transform_hlds__term_constr_pass2__Edges0_2);
        }
#line 383 "term_constr_pass2.m"
        {
#line 383 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map0_9, ((MR_Box) (transform_hlds__term_constr_pass2__ProcId_5)), ((MR_Box) (transform_hlds__term_constr_pass2__Edges_10)));
        }
#line 377 "term_constr_pass2.m"
      }
#line 376 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 376 "term_constr_pass2.m"
  }
#line 373 "term_constr_pass2.m"
}

#line 358 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
#line 358 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_3,
#line 358 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Cycle_4)
#line 358 "term_constr_pass2.m"
{
#line 360 "term_constr_pass2.m"
  {
#line 360 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 360 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
#line 360 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_6_6;
#line 360 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_7_7;
#line 360 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_8_8;
#line 360 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_9_9;
#line 360 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_10_10;
#line 360 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
#line 361 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
#line 361 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
#line 361 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
#line 361 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_21_21;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_22_22;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_23_23;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_24_24;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_25_25;

#line 361 "term_constr_pass2.m"
    {
#line 361 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_5_5, transform_hlds__term_constr_pass2__V_11_11);
    }
#line 360 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 360 "term_constr_pass2.m"
      {
#line 362 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
#line 362 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
#line 362 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
#line 362 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
#line 362 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
#line 362 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
#line 362 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "term_constr_pass2.m"
        {
#line 362 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_6_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7));
#line 362 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_6_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_8_8));
#line 362 "term_constr_pass2.m"
        }
#line 362 "term_constr_pass2.m"
        {
#line 362 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_9_9, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_3));
#line 362 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_10_10));
#line 362 "term_constr_pass2.m"
        }
#line 362 "term_constr_pass2.m"
        {
#line 362 "term_constr_pass2.m"
          MR_Word base;
#line 362 "term_constr_pass2.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 362 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__Cycle_4 = base;
#line 362 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6));
#line 362 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_9_9));
#line 362 "term_constr_pass2.m"
        }
#line 362 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 360 "term_constr_pass2.m"
      }
#line 360 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 360 "term_constr_pass2.m"
  }
#line 358 "term_constr_pass2.m"
}

#line 328 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
#line 328 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Poly_4,
#line 328 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge0_5)
#line 328 "term_constr_pass2.m"
{
#line 330 "term_constr_pass2.m"
  {
#line 330 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 330 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Edge_6;
#line 330 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Label0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 5)));
#line 330 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Label_8;
#line 331 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 0)));
#line 331 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 1)));
#line 331 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 2)));
#line 331 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 3)));
#line 331 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 4)));
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_14_14;
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_15_15;
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_16_16;
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_17_17;
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_18_18;
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_19_19;

#line 332 "term_constr_pass2.m"
    {
#line 332 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Label_8 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_pass2__Poly_4, transform_hlds__term_constr_pass2__Label0_7);
    }
#line 333 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 0)));
#line 333 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 1)));
#line 333 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 2)));
#line 333 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 3)));
#line 333 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 4)));
#line 333 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 5)));
#line 333 "term_constr_pass2.m"
    {
#line 333 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Edge_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 333 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_14_14));
#line 333 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_15_15));
#line 333 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__V_16_16));
#line 333 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__V_17_17));
#line 333 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_18_18));
#line 333 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Label_8));
#line 333 "term_constr_pass2.m"
    }
#line 330 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__Edge_6;
#line 330 "term_constr_pass2.m"
  }
#line 328 "term_constr_pass2.m"
}

#line 304 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_1,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_2,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
#line 304 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_4,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__TopPoly_5,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__6_6,
#line 304 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7,
#line 304 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9,
#line 304 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11,
#line 304 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12,
#line 304 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13,
#line 304 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14)
#line 304 "term_constr_pass2.m"
{
#line 309 "term_constr_pass2.m"
  while (MR_TRUE)
#line 309 "term_constr_pass2.m"
    {
#line 309 "term_constr_pass2.m"
      /* tailcall optimized into a loop */
#line 309 "term_constr_pass2.m"
      {
#line 309 "term_constr_pass2.m"
        MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 309 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "term_constr_pass2.m"
          {
#line 309 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13;
#line 309 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11;
#line 309 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9;
#line 309 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7;
#line 309 "term_constr_pass2.m"
          }
#line 309 "term_constr_pass2.m"
        else
#line 311 "term_constr_pass2.m"
          {
#line 311 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Disj_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__6_6, (MR_Integer) 0)));
#line 311 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Disjs_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__6_6, (MR_Integer) 1)));
#line 311 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constrs_43;
#line 311 "term_constr_pass2.m"
            MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
#line 311 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
#line 311 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;
#line 311 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;

#line 312 "term_constr_pass2.m"
            {
#line 312 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(transform_hlds__term_constr_pass2__Proc_1, transform_hlds__term_constr_pass2__AbstractSCC_2, transform_hlds__term_constr_pass2__ModuleInfo_3, transform_hlds__term_constr_pass2__MaxMatrixSize_4, transform_hlds__term_constr_pass2__Disj_37, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52, transform_hlds__term_constr_pass2__TopPoly_5, &transform_hlds__term_constr_pass2__Constrs_43, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54);
            }
#line 314 "term_constr_pass2.m"
            {
#line 314 "term_constr_pass2.m"
              mercury__list__cons_3_p_0((MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, ((MR_Box) (transform_hlds__term_constr_pass2__Constrs_43)), transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9, &transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55);
            }
#line 324 "term_constr_pass2.m"
#line 324 "term_constr_pass2.m"
            switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54) {
#line 324 "term_constr_pass2.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 324 "term_constr_pass2.m"
              case (MR_Integer) 0:
#line 325 "term_constr_pass2.m"
                {
#line 325 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
#line 325 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;
#line 325 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
#line 325 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;
#line 325 "term_constr_pass2.m"
                }
#line 324 "term_constr_pass2.m"
                break;
#line 324 "term_constr_pass2.m"
              case (MR_Integer) 1:
#line 321 "term_constr_pass2.m"
                {
#line 321 "term_constr_pass2.m"
                  /* direct tailcall eliminated */
#line 321 "term_constr_pass2.m"
                  {
#line 321 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__HeadVar__6__tmp_copy_6 = transform_hlds__term_constr_pass2__Disjs_38;
#line 321 "term_constr_pass2.m"
                    MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0__tmp_copy_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
#line 321 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0__tmp_copy_9 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;
#line 321 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0__tmp_copy_11 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
#line 321 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0__tmp_copy_13 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;

#line 321 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0__tmp_copy_13;
#line 321 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0__tmp_copy_11;
#line 321 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0__tmp_copy_9;
#line 321 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0__tmp_copy_7;
#line 321 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__HeadVar__6_6 = transform_hlds__term_constr_pass2__HeadVar__6__tmp_copy_6;
#line 321 "term_constr_pass2.m"
                  }
#line 321 "term_constr_pass2.m"
                  continue;
#line 321 "term_constr_pass2.m"
                }
#line 324 "term_constr_pass2.m"
                break;
#line 324 "term_constr_pass2.m"
            }
#line 311 "term_constr_pass2.m"
          }
#line 309 "term_constr_pass2.m"
      }
#line 309 "term_constr_pass2.m"
      break;
#line 309 "term_constr_pass2.m"
    }
#line 304 "term_constr_pass2.m"
}

#line 214 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3(
#line 214 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 214 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 214 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 214 "term_constr_pass2.m"
{
#line 214 "term_constr_pass2.m"
  {
#line 214 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3;
#line 214 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 214 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv9_HeadVar__5_5;

#line 214 "term_constr_pass2.m"
    {
#line 214 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv9_HeadVar__5_5 = libs__polyhedron__convex_union_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 214 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv9_HeadVar__5_5));
#line 214 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_3;
#line 214 "term_constr_pass2.m"
  }
#line 214 "term_constr_pass2.m"
}

#line 206 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
#line 206 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 206 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 206 "term_constr_pass2.m"
{
#line 206 "term_constr_pass2.m"
  {
#line 206 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 206 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 206 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv8_Edge_6;

#line 206 "term_constr_pass2.m"
    {
#line 206 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv8_Edge_6 = transform_hlds__term_constr_pass2__fix_edges_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 206 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv8_Edge_6));
#line 206 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 206 "term_constr_pass2.m"
  }
#line 206 "term_constr_pass2.m"
}

#line 228 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 228 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_4,
#line 228 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_5,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_6,
#line 228 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_7,
#line 228 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_8,
#line 228 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_9)
#line 228 "term_constr_pass2.m"
{
#line 228 "term_constr_pass2.m"
  {
#line 228 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 228 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61;
#line 228 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63;
#line 228 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65;
#line 228 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67;

#line 228 "term_constr_pass2.m"
    {
#line 228 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Integer) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_4), &transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_6), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_8), &transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67);
    }
#line 228 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61));
#line 228 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63));
#line 228 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_7 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65));
#line 228 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_9 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67));
#line 228 "term_constr_pass2.m"
  }
#line 228 "term_constr_pass2.m"
}

#line 188 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_14,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_15,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_16,
#line 188 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_17,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Goal_18,
#line 188 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60,
#line 188 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62,
#line 188 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64,
#line 188 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65,
#line 188 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66,
#line 188 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67)
#line 188 "term_constr_pass2.m"
{
#line 196 "term_constr_pass2.m"
  {
#line 196 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 196 "term_constr_pass2.m"
#line 196 "term_constr_pass2.m"
    switch (MR_tag((MR_Word) transform_hlds__term_constr_pass2__Goal_18)) {
#line 196 "term_constr_pass2.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 196 "term_constr_pass2.m"
      case (MR_Integer) 0:
#line 196 "term_constr_pass2.m"
        {
#line 196 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 196 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Locals_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));
#line 196 "term_constr_pass2.m"
          MR_Integer transform_hlds__term_constr_pass2__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 196 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 3)));

#line 220 "term_constr_pass2.m"
#line 220 "term_constr_pass2.m"
          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
#line 220 "term_constr_pass2.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 220 "term_constr_pass2.m"
            case (MR_Integer) 0:
#line 221 "term_constr_pass2.m"
              {
#line 221 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
#line 221 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 221 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
#line 221 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 221 "term_constr_pass2.m"
              }
#line 220 "term_constr_pass2.m"
              break;
#line 220 "term_constr_pass2.m"
            case (MR_Integer) 1:
#line 198 "term_constr_pass2.m"
              {
#line 198 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_181_181;
#line 198 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__DisjConstrs0_27;
#line 198 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__Edges1_28;
#line 198 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__Edges2_29;
#line 198 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_91_91;
#line 198 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_96_96;

#line 204 "term_constr_pass2.m"
                {
#line 204 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_91_91 = libs__polyhedron__universe_0_f_0();
                }
#line 203 "term_constr_pass2.m"
                {
#line 203 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(transform_hlds__term_constr_pass2__Proc_14, transform_hlds__term_constr_pass2__AbstractSCC_15, transform_hlds__term_constr_pass2__ModuleInfo_16, transform_hlds__term_constr_pass2__MaxMatrixSize_17, transform_hlds__term_constr_pass2__V_91_91, transform_hlds__term_constr_pass2__Goals_23, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__DisjConstrs0_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__Edges1_28, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67);
                }
#line 6289 "transform_hlds.term_constr_pass2.c"
                transform_hlds__term_constr_pass2__TypeCtorInfo_181_181 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
#line 206 "term_constr_pass2.m"
                {
#line 206 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 206 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[0]));
#line 206 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2));
#line 206 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 206 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62));
#line 206 "term_constr_pass2.m"
                }
#line 206 "term_constr_pass2.m"
                {
#line 206 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__Edges2_29 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__V_96_96, transform_hlds__term_constr_pass2__Edges1_28);
                }
#line 207 "term_constr_pass2.m"
                {
#line 207 "term_constr_pass2.m"
                  mercury__list__append_3_p_1(transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__Edges2_29, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65);
                }
#line 217 "term_constr_pass2.m"
#line 217 "term_constr_pass2.m"
                switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
#line 217 "term_constr_pass2.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 217 "term_constr_pass2.m"
                  case (MR_Integer) 0:
#line 218 "term_constr_pass2.m"
                    *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 217 "term_constr_pass2.m"
                    break;
#line 217 "term_constr_pass2.m"
                  case (MR_Integer) 1:
#line 209 "term_constr_pass2.m"
                    {
#line 209 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_184_184;
#line 209 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__SizeVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 209 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__DisjConstrs_31;
#line 209 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__Constrs2_32;
#line 209 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_98_98;
#line 209 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_99_99;
#line 209 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_100_100;
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 210 "term_constr_pass2.m"
                      MR_Integer transform_hlds__term_constr_pass2__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 210 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
#line 213 "term_constr_pass2.m"
                      MR_Box transform_hlds__term_constr_pass2__conv10_Constrs2_32;

#line 211 "term_constr_pass2.m"
                      {
#line 211 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__DisjConstrs_31 = libs__polyhedron__project_all_3_f_0(transform_hlds__term_constr_pass2__SizeVarSet_30, transform_hlds__term_constr_pass2__Locals_25, transform_hlds__term_constr_pass2__DisjConstrs0_27);
                      }
#line 6374 "transform_hlds.term_constr_pass2.c"
                      transform_hlds__term_constr_pass2__TypeCtorInfo_184_184 = (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0;
#line 214 "term_constr_pass2.m"
                      {
#line 214 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_99_99, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__MaxMatrixSize_17));
#line 214 "term_constr_pass2.m"
                      }
#line 214 "term_constr_pass2.m"
                      {
#line 214 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 214 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_8[0]));
#line 214 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3));
#line 214 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 214 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__SizeVarSet_30));
#line 214 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_99_99));
#line 214 "term_constr_pass2.m"
                      }
#line 215 "term_constr_pass2.m"
                      {
#line 215 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__V_100_100 = libs__polyhedron__empty_0_f_0();
                      }
#line 213 "term_constr_pass2.m"
                      {
#line 213 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__conv10_Constrs2_32 = mercury__list__foldl_3_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_184_184, transform_hlds__term_constr_pass2__TypeCtorInfo_184_184, transform_hlds__term_constr_pass2__V_98_98, transform_hlds__term_constr_pass2__DisjConstrs_31, ((MR_Box) (transform_hlds__term_constr_pass2__V_100_100)));
                      }
#line 213 "term_constr_pass2.m"
                      transform_hlds__term_constr_pass2__Constrs2_32 = ((MR_Word) transform_hlds__term_constr_pass2__conv10_Constrs2_32);
#line 216 "term_constr_pass2.m"
                      {
#line 216 "term_constr_pass2.m"
                        libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__Constrs2_32, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
#line 216 "term_constr_pass2.m"
                        return;
                      }
#line 209 "term_constr_pass2.m"
                    }
#line 217 "term_constr_pass2.m"
                    break;
#line 217 "term_constr_pass2.m"
                }
#line 198 "term_constr_pass2.m"
              }
#line 220 "term_constr_pass2.m"
              break;
#line 220 "term_constr_pass2.m"
          }
#line 196 "term_constr_pass2.m"
        }
#line 196 "term_constr_pass2.m"
        break;
#line 196 "term_constr_pass2.m"
      case (MR_Integer) 1:
#line 224 "term_constr_pass2.m"
        {
#line 224 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 224 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Locals_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 224 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));

#line 237 "term_constr_pass2.m"
#line 237 "term_constr_pass2.m"
          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
#line 237 "term_constr_pass2.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 237 "term_constr_pass2.m"
            case (MR_Integer) 0:
#line 238 "term_constr_pass2.m"
              {
#line 238 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
#line 238 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 238 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
#line 238 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 238 "term_constr_pass2.m"
              }
#line 237 "term_constr_pass2.m"
              break;
#line 237 "term_constr_pass2.m"
            case (MR_Integer) 1:
#line 226 "term_constr_pass2.m"
              {
#line 226 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_84_84;
#line 226 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86;
#line 227 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61;
#line 227 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86;
#line 227 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65;
#line 227 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67;

#line 228 "term_constr_pass2.m"
                {
#line 228 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 228 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_6[0]));
#line 228 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1));
#line 228 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 228 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_14));
#line 228 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__AbstractSCC_15));
#line 228 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__ModuleInfo_16));
#line 228 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 6) = ((MR_Box) (transform_hlds__term_constr_pass2__MaxMatrixSize_17));
#line 228 "term_constr_pass2.m"
                }
#line 227 "term_constr_pass2.m"
                {
#line 227 "term_constr_pass2.m"
                  mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_constr_pass2__V_84_84, transform_hlds__term_constr_pass2__Goals_102, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60)), &transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62)), &transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64)), &transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66)), &transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67);
                }
#line 227 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = ((MR_Integer) transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61);
#line 227 "term_constr_pass2.m"
                transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86 = ((MR_Word) transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86);
#line 227 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = ((MR_Word) transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65);
#line 227 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = ((MR_Word) transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67);
#line 234 "term_constr_pass2.m"
#line 234 "term_constr_pass2.m"
                switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
#line 234 "term_constr_pass2.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 234 "term_constr_pass2.m"
                  case (MR_Integer) 0:
#line 235 "term_constr_pass2.m"
                    *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86;
#line 234 "term_constr_pass2.m"
                    break;
#line 234 "term_constr_pass2.m"
                  case (MR_Integer) 1:
#line 232 "term_constr_pass2.m"
                    {
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 232 "term_constr_pass2.m"
                      MR_Integer transform_hlds__term_constr_pass2__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 232 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));

#line 232 "term_constr_pass2.m"
                      {
#line 232 "term_constr_pass2.m"
                        libs__polyhedron__project_4_p_0(transform_hlds__term_constr_pass2__Locals_103, transform_hlds__term_constr_pass2__V_89_89, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
#line 232 "term_constr_pass2.m"
                        return;
                      }
#line 232 "term_constr_pass2.m"
                    }
#line 234 "term_constr_pass2.m"
                    break;
#line 234 "term_constr_pass2.m"
                }
#line 226 "term_constr_pass2.m"
              }
#line 237 "term_constr_pass2.m"
              break;
#line 237 "term_constr_pass2.m"
          }
#line 224 "term_constr_pass2.m"
        }
#line 196 "term_constr_pass2.m"
        break;
#line 196 "term_constr_pass2.m"
      case (MR_Integer) 2:
#line 241 "term_constr_pass2.m"
        {
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__CallPPId0_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__CallVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__ZeroVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 3)));
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Edge_41;
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 4)));
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 5)));
#line 241 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 6)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 244 "term_constr_pass2.m"
          MR_Integer transform_hlds__term_constr_pass2__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
#line 251 "term_constr_pass2.m"
          MR_Integer transform_hlds__term_constr_pass2__V_75_75;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_159_159;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_160_160;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_161_161;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_162_162;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_163_163;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_164_164;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_165_165;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_166_166;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_167_167;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_168_168;
#line 251 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_169_169;

#line 244 "term_constr_pass2.m"
          {
#line 244 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Edge_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 244 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_69_69));
#line 244 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__CallPPId0_34));
#line 244 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__V_128_128));
#line 244 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__CallVars_36));
#line 244 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_133_133));
#line 244 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62));
#line 244 "term_constr_pass2.m"
          }
#line 246 "term_constr_pass2.m"
          {
#line 246 "term_constr_pass2.m"
            mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, ((MR_Box) (transform_hlds__term_constr_pass2__Edge_41)), transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65);
          }
#line 250 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = (transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60 + (MR_Integer) 1);
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
#line 251 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 > transform_hlds__term_constr_pass2__V_75_75);
#line 6700 "transform_hlds.term_constr_pass2.c"
          if (transform_hlds__term_constr_pass2__succeeded)
#line 6702 "transform_hlds.term_constr_pass2.c"
            {
#line 252 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = (MR_Integer) 0;
#line 257 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 6708 "transform_hlds.term_constr_pass2.c"
            }
#line 6710 "transform_hlds.term_constr_pass2.c"
          else
#line 6712 "transform_hlds.term_constr_pass2.c"
            {
#line 253 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 258 "term_constr_pass2.m"
#line 258 "term_constr_pass2.m"
              switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
#line 258 "term_constr_pass2.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 258 "term_constr_pass2.m"
                case (MR_Integer) 0:
#line 257 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 258 "term_constr_pass2.m"
                  break;
#line 258 "term_constr_pass2.m"
                case (MR_Integer) 1:
#line 259 "term_constr_pass2.m"
                  {
#line 259 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__CallPPId_42 = (MR_Word) transform_hlds__term_constr_pass2__CallPPId0_34;
#line 259 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__CallProcInfo_44;
#line 259 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__CallTerm2Info_45;
#line 259 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46;
#line 261 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__V_43_43;

#line 261 "term_constr_pass2.m"
                    {
#line 261 "term_constr_pass2.m"
                      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_pass2__ModuleInfo_16, transform_hlds__term_constr_pass2__CallPPId_42, &transform_hlds__term_constr_pass2__V_43_43, &transform_hlds__term_constr_pass2__CallProcInfo_44);
                    }
#line 262 "term_constr_pass2.m"
                    {
#line 262 "term_constr_pass2.m"
                      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_pass2__CallProcInfo_44, &transform_hlds__term_constr_pass2__CallTerm2Info_45);
                    }
#line 263 "term_constr_pass2.m"
                    {
#line 263 "term_constr_pass2.m"
                      transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_pass2__CallTerm2Info_45);
                    }
#line 268 "term_constr_pass2.m"
                    if ((transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "term_constr_pass2.m"
                      {
#line 266 "term_constr_pass2.m"
                        {
#line 266 "term_constr_pass2.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "proc with no arg size info in pass 2");
#line 266 "term_constr_pass2.m"
                          return;
                        }
#line 265 "term_constr_pass2.m"
                      }
#line 268 "term_constr_pass2.m"
                    else
#line 269 "term_constr_pass2.m"
                      {
#line 269 "term_constr_pass2.m"
                        MR_Word transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46, (MR_Integer) 0)));

#line 270 "term_constr_pass2.m"
                        {
#line 270 "term_constr_pass2.m"
                          transform_hlds__term_constr_pass2__succeeded = libs__polyhedron__is_universe_1_p_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47);
                        }
#line 274 "term_constr_pass2.m"
                        if (transform_hlds__term_constr_pass2__succeeded)
#line 274 "term_constr_pass2.m"
                          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 274 "term_constr_pass2.m"
                        else
#line 275 "term_constr_pass2.m"
                          {
#line 275 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__TypeInfo_203_203;
#line 275 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__MaybeCallProc_48;
#line 275 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__CallProc_50;
#line 275 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__HeadVars_51;
#line 275 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Subst_52;
#line 275 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Eqns0_53;
#line 275 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Eqns1_54;
#line 275 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Eqns_55;
#line 275 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__ArgSizePolyhedron_56;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_170_170;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_171_171;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_172_172;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_173_173;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_174_174;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_175_175;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_176_176;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_177_177;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_178_178;
#line 284 "term_constr_pass2.m"
                            MR_Integer transform_hlds__term_constr_pass2__V_179_179;
#line 284 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_180_180;

#line 275 "term_constr_pass2.m"
                            {
#line 275 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__MaybeCallProc_48 = transform_hlds__term_constr_main_types__term2_info_get_abstract_rep_1_f_0(transform_hlds__term_constr_pass2__CallTerm2Info_45);
                            }
#line 279 "term_constr_pass2.m"
                            if ((transform_hlds__term_constr_pass2__MaybeCallProc_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "term_constr_pass2.m"
                              {
#line 281 "term_constr_pass2.m"
                                {
#line 281 "term_constr_pass2.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "no abstract representation for proc");
#line 281 "term_constr_pass2.m"
                                  return;
                                }
#line 280 "term_constr_pass2.m"
                              }
#line 279 "term_constr_pass2.m"
                            else
#line 277 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__CallProc_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__MaybeCallProc_48, (MR_Integer) 0)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 0)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 1)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 2)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__HeadVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 3)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 4)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 5)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 6)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 7)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 8)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 9)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 10)));
#line 284 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 11)));
#line 6877 "transform_hlds.term_constr_pass2.c"
                            transform_hlds__term_constr_pass2__TypeInfo_203_203 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 285 "term_constr_pass2.m"
                            {
#line 285 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Subst_52 = mercury__map__from_corresponding_lists_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_203_203, transform_hlds__term_constr_pass2__TypeInfo_203_203, transform_hlds__term_constr_pass2__HeadVars_51, transform_hlds__term_constr_pass2__CallVars_36);
                            }
#line 286 "term_constr_pass2.m"
                            {
#line 286 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Eqns0_53 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47);
                            }
#line 287 "term_constr_pass2.m"
                            {
#line 287 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Eqns1_54 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(transform_hlds__term_constr_pass2__Eqns0_53, transform_hlds__term_constr_pass2__Subst_52);
                            }
#line 288 "term_constr_pass2.m"
                            {
#line 288 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Eqns_55 = libs__lp_rational__set_vars_to_zero_2_f_0(transform_hlds__term_constr_pass2__ZeroVars_37, transform_hlds__term_constr_pass2__Eqns1_54);
                            }
#line 289 "term_constr_pass2.m"
                            {
#line 289 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__ArgSizePolyhedron_56 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_pass2__Eqns_55);
                            }
#line 290 "term_constr_pass2.m"
                            {
#line 290 "term_constr_pass2.m"
                              libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron_56, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
#line 290 "term_constr_pass2.m"
                              return;
                            }
#line 275 "term_constr_pass2.m"
                          }
#line 269 "term_constr_pass2.m"
                      }
#line 259 "term_constr_pass2.m"
                  }
#line 258 "term_constr_pass2.m"
                  break;
#line 258 "term_constr_pass2.m"
              }
#line 6921 "transform_hlds.term_constr_pass2.c"
            }
#line 241 "term_constr_pass2.m"
        }
#line 196 "term_constr_pass2.m"
        break;
#line 196 "term_constr_pass2.m"
      case (MR_Integer) 3:
#line 295 "term_constr_pass2.m"
        {
#line 295 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Primitive_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 295 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 295 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));

#line 299 "term_constr_pass2.m"
#line 299 "term_constr_pass2.m"
          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
#line 299 "term_constr_pass2.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 299 "term_constr_pass2.m"
            case (MR_Integer) 0:
#line 300 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 299 "term_constr_pass2.m"
              break;
#line 299 "term_constr_pass2.m"
            case (MR_Integer) 1:
#line 298 "term_constr_pass2.m"
              {
#line 298 "term_constr_pass2.m"
                libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__Primitive_57, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
              }
#line 299 "term_constr_pass2.m"
              break;
#line 299 "term_constr_pass2.m"
          }
#line 295 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
#line 295 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
#line 295 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 295 "term_constr_pass2.m"
        }
#line 196 "term_constr_pass2.m"
        break;
#line 196 "term_constr_pass2.m"
    }
#line 196 "term_constr_pass2.m"
  }
#line 188 "term_constr_pass2.m"
}

#line 349 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3(
#line 349 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 349 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 349 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 349 "term_constr_pass2.m"
{
#line 349 "term_constr_pass2.m"
  {
#line 349 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 349 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 349 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv3_Cycle_4;

#line 349 "term_constr_pass2.m"
    {
#line 349 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__direct_call_2_p_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), &transform_hlds__term_constr_pass2__conv3_Cycle_4);
    }
#line 349 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 349 "term_constr_pass2.m"
      {
#line 349 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv3_Cycle_4));
#line 349 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 349 "term_constr_pass2.m"
      }
#line 349 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 349 "term_constr_pass2.m"
  }
#line 349 "term_constr_pass2.m"
}

#line 174 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2(
#line 174 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 174 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 174 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 174 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 174 "term_constr_pass2.m"
{
#line 174 "term_constr_pass2.m"
  {
#line 174 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 174 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__3_19;

#line 174 "term_constr_pass2.m"
    {
#line 174 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__174__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__3_19);
    }
#line 174 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__3_19));
#line 174 "term_constr_pass2.m"
  }
#line 174 "term_constr_pass2.m"
}

#line 147 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1(
#line 147 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 147 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 147 "term_constr_pass2.m"
{
#line 147 "term_constr_pass2.m"
  {
#line 147 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 147 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 147 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_23;

#line 147 "term_constr_pass2.m"
    {
#line 147 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_23 = transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__147__1_1_f_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 147 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_23));
#line 147 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 147 "term_constr_pass2.m"
  }
#line 147 "term_constr_pass2.m"
}

#line 43 "term_constr_pass2.m"
void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0(
#line 43 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Options_1,
#line 43 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 43 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
#line 43 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__4_4)
#line 43 "term_constr_pass2.m"
{
#line 143 "term_constr_pass2.m"
  {
#line 143 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 143 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 143 "term_constr_pass2.m"
      {
#line 143 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__HeadVar__4_4 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_3[0];
#line 143 "term_constr_pass2.m"
      }
#line 143 "term_constr_pass2.m"
    else
#line 144 "term_constr_pass2.m"
      {
#line 144 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__AbstractSCC_14;
#line 144 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__SCC_15;

#line 145 "term_constr_pass2.m"
        {
#line 145 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__AbstractSCC_14 = transform_hlds__term_constr_util__get_abstract_scc_2_f_0(transform_hlds__term_constr_pass2__ModuleInfo_3, transform_hlds__term_constr_pass2__HeadVar__2_2);
        }
#line 147 "term_constr_pass2.m"
        {
#line 147 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__SCC_15 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[1], transform_hlds__term_constr_pass2__HeadVar__2_2);
        }
#line 148 "term_constr_pass2.m"
        {
#line 148 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data__scc_contains_recursion_1_p_0(transform_hlds__term_constr_pass2__AbstractSCC_14);
        }
#line 155 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 149 "term_constr_pass2.m"
          {
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_14_78;
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__SizeVarSet_17;
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edges_18;
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Cycles_19;
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CycleSets_20;
#line 149 "term_constr_pass2.m"
            MR_Integer transform_hlds__term_constr_pass2__V_24_24;
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__FindEdges_33;
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Cycles0_71;
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edges_72;
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Cycles1_73;
#line 149 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__EdgeMap_82;
#line 180 "term_constr_pass2.m"
            MR_Box transform_hlds__term_constr_pass2__conv2_Edges_18;

#line 149 "term_constr_pass2.m"
            {
#line 149 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__SizeVarSet_17 = transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_f_0(transform_hlds__term_constr_pass2__AbstractSCC_14);
            }
#line 150 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_24_24 = (MR_Integer) transform_hlds__term_constr_pass2__Options_1;
#line 174 "term_constr_pass2.m"
            {
#line 174 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__FindEdges_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 174 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[0]));
#line 174 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2));
#line 174 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 174 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__AbstractSCC_14));
#line 174 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__ModuleInfo_3));
#line 174 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__V_24_24));
#line 174 "term_constr_pass2.m"
            }
#line 180 "term_constr_pass2.m"
            {
#line 180 "term_constr_pass2.m"
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__FindEdges_33, transform_hlds__term_constr_pass2__AbstractSCC_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_pass2__conv2_Edges_18);
            }
#line 180 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Edges_18 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_Edges_18);
#line 7194 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeCtorInfo_14_78 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;
#line 349 "term_constr_pass2.m"
            {
#line 349 "term_constr_pass2.m"
              mercury__list__filter_map_4_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__TypeCtorInfo_14_78, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[2], transform_hlds__term_constr_pass2__Edges_18, &transform_hlds__term_constr_pass2__Cycles0_71, &transform_hlds__term_constr_pass2__Edges_72);
            }
#line 367 "term_constr_pass2.m"
            {
#line 367 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__EdgeMap_82 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(transform_hlds__term_constr_pass2__SCC_15, transform_hlds__term_constr_pass2__Edges_72);
            }
#line 368 "term_constr_pass2.m"
            {
#line 368 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Cycles1_73 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(transform_hlds__term_constr_pass2__SCC_15, transform_hlds__term_constr_pass2__EdgeMap_82);
            }
#line 353 "term_constr_pass2.m"
            {
#line 353 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Cycles_19 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_14_78, transform_hlds__term_constr_pass2__Cycles0_71, transform_hlds__term_constr_pass2__Cycles1_73);
            }
#line 153 "term_constr_pass2.m"
            {
#line 153 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__CycleSets_20 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(transform_hlds__term_constr_pass2__SCC_15, transform_hlds__term_constr_pass2__Cycles_19);
            }
#line 469 "term_constr_pass2.m"
            {
#line 469 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(transform_hlds__term_constr_pass2__AbstractSCC_14, transform_hlds__term_constr_pass2__SizeVarSet_17, transform_hlds__term_constr_pass2__CycleSets_20);
            }
#line 471 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 470 "term_constr_pass2.m"
              {
#line 470 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__HeadVar__4_4 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_3[0];
#line 470 "term_constr_pass2.m"
              }
#line 471 "term_constr_pass2.m"
            else
#line 474 "term_constr_pass2.m"
              {
#line 474 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__Error_87;
#line 474 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_89_89;
#line 474 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_91_91;

#line 474 "term_constr_pass2.m"
                {
#line 474 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_89_89 = mercury__term__context_init_0_f_0();
                }
#line 474 "term_constr_pass2.m"
                {
#line 474 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__Error_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Error_87, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_89_89));
#line 474 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Error_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 474 "term_constr_pass2.m"
                }
#line 475 "term_constr_pass2.m"
                {
#line 475 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_91_91, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Error_87));
#line 475 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "term_constr_pass2.m"
                }
#line 475 "term_constr_pass2.m"
                {
#line 475 "term_constr_pass2.m"
                  MR_Word base;
#line 475 "term_constr_pass2.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 475 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__HeadVar__4_4 = base;
#line 475 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_91_91));
#line 475 "term_constr_pass2.m"
                }
#line 474 "term_constr_pass2.m"
              }
#line 149 "term_constr_pass2.m"
          }
#line 155 "term_constr_pass2.m"
        else
#line 156 "term_constr_pass2.m"
          {
#line 156 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__HeadVar__4_4 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_3[0];
#line 156 "term_constr_pass2.m"
          }
#line 144 "term_constr_pass2.m"
      }
#line 143 "term_constr_pass2.m"
  }
#line 43 "term_constr_pass2.m"
}

#line 41 "term_constr_pass2.m"
MR_Word MR_CALL 
transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(
#line 41 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxSize_3)
#line 41 "term_constr_pass2.m"
{
#line 84 "term_constr_pass2.m"
  {
#line 84 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 84 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2 = (MR_Word) transform_hlds__term_constr_pass2__MaxSize_3;

#line 84 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 84 "term_constr_pass2.m"
  }
#line 41 "term_constr_pass2.m"
}

void mercury__transform_hlds__term_constr_pass2__init(void)
{
}

void mercury__transform_hlds__term_constr_pass2__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_abstract_ppids_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_set_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycles_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edges_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0);
}

void mercury__transform_hlds__term_constr_pass2__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_pass2. */
