/*
** Automatically generated from `term_constr_pass2.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 479 "term_constr_pass2.m"
struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s {
#line 479 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1;
#line 479 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2;
#line 482 "term_constr_pass2.m"
  MR_bool transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded;
#line 483 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10;
#line 483 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11;
#line 493 "term_constr_pass2.m"
  jmp_buf transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0;
#line 493 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21;
#line 494 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21;
#line 479 "term_constr_pass2.m"
};


#line 160 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 163 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

#line 166 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 169 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 172 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

#line 175 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

#line 178 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;

#line 181 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;

#line 184 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 187 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0;

#line 190 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

#line 193 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 196 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;

#line 199 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0[2];

#line 202 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0[2];

#line 205 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0;

#line 208 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[1];

#line 211 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[1];

#line 214 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0[1];

#line 217 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0[1];

#line 220 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[2];

#line 223 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[2];

#line 226 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0;

#line 229 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[1];

#line 232 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[1];

#line 235 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0[1];

#line 238 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0[1];

#line 241 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;

#line 244 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 247 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 250 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0[6];

#line 253 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0[6];

#line 256 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0;

#line 259 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[1];

#line 262 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[1];

#line 265 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0[1];

#line 268 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0[1];

#line 271 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[1];

#line 274 "transform_hlds.term_constr_pass2.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0;

#line 277 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
#line 280 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 282 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 285 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
#line 288 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 290 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 292 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 295 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
#line 298 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 300 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 303 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
#line 306 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 308 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 310 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 313 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
#line 316 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 318 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 321 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
#line 324 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 326 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 328 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 331 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
#line 334 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 336 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 339 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
#line 342 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 344 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 346 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 349 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
#line 352 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 354 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 357 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
#line 360 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 362 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 364 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 367 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
#line 370 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 372 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 375 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
#line 378 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 380 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 382 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 385 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____scc_0_0_10001(
#line 388 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 390 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 393 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____scc_0_0_10001(
#line 396 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 398 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 400 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 541 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_f_0(
#line 541 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5,
#line 541 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_8);

#line 515 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_f_0(
#line 515 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_22,
#line 515 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_23,
#line 515 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__3_24);

#line 414 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_p_0(
#line 414 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 414 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_26);

#line 381 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__381__1_2_p_0(
#line 381 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ProcId_5,
#line 381 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_13);

#line 176 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_p_0(
#line 176 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Procs_5,
#line 176 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
#line 176 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_7,
#line 176 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__4_17,
#line 176 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__5_18,
#line 176 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__6_19);

#line 149 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__149__1_1_f_0(
#line 149 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_30);

#line 90 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____scc_0_0(
#line 90 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 90 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 90 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 90 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____scc_0_0(
#line 90 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 90 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 118 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
#line 118 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 118 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 118 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 94 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
#line 94 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 94 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 94 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 94 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
#line 94 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 94 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 131 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
#line 131 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 131 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 131 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 131 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
#line 131 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 131 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 137 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
#line 137 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 137 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 137 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 137 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
#line 137 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 137 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 120 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
#line 120 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 120 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 120 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 120 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
#line 120 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 120 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 645 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
#line 645 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 645 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Old_5);

#line 640 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
#line 640 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 640 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 637 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
#line 637 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 637 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 632 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
#line 632 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 632 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Eqn0_5);

#line 626 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
#line 626 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1);

#line 614 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
#line 614 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_5,
#line 614 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__CurrPPId_6,
#line 614 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_7,
#line 614 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Edges_8);

#line 602 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
#line 602 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 602 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 597 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
#line 597 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 597 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 579 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
#line 579 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 579 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2,
#line 579 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3,
#line 579 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4,
#line 579 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5,
#line 579 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6,
#line 579 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7);

#line 552 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
#line 552 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_4,
#line 552 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycle_5);

#line 541 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
#line 541 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 541 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 539 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
#line 539 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Vars_4,
#line 539 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5);

#line 533 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
#line 533 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_3,
#line 533 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 541 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
#line 541 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 541 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 515 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
#line 515 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 515 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 515 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 515 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 502 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
#line 502 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
#line 502 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_6,
#line 502 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_7,
#line 502 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Loop_8);

#line 493 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
#line 493 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 494 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
#line 494 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 493 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
#line 493 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 493 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
#line 493 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 479 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
#line 479 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_1,
#line 479 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
#line 479 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 466 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_4_p_0(
#line 466 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycles_5,
#line 466 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_6,
#line 466 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_7,
#line 466 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Result_8);

#line 446 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
#line 446 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 446 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_2);

#line 437 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
#line 437 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 437 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 435 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
#line 435 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 435 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 431 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
#line 431 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 431 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycles0_2);

#line 418 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
#line 418 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 418 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 418 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 418 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 413 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
#line 413 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 413 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 403 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Start_8,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SoFar_9,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_10,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_12,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19,
#line 403 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20);

#line 400 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
#line 400 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 400 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 400 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 400 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 386 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
#line 386 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 386 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map0_2);

#line 381 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
#line 381 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 381 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 375 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
#line 375 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 375 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edges0_2);

#line 360 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
#line 360 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_3,
#line 360 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Cycle_4);

#line 330 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
#line 330 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Poly_4,
#line 330 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge0_5);

#line 306 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_1,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_2,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
#line 306 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_4,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__TopPoly_5,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__6_6,
#line 306 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7,
#line 306 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9,
#line 306 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11,
#line 306 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13,
#line 306 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14);

#line 216 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3(
#line 216 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 216 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 216 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 208 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
#line 208 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 208 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 230 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 230 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_4,
#line 230 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_5,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_6,
#line 230 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_7,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_8,
#line 230 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_9);

#line 190 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_14,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_15,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_16,
#line 190 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_17,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Goal_18,
#line 190 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60,
#line 190 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62,
#line 190 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64,
#line 190 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66,
#line 190 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67);

#line 351 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0_3(
#line 351 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 351 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 351 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 176 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0_2(
#line 176 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 176 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 176 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 176 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 149 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0_1(
#line 149 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 149 "term_constr_pass2.m"
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
    ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0_3)),
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



#line 1299 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 1307 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

#line 1315 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1323 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1331 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

#line 1339 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

#line 1348 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0
  }
};

#line 1356 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0
  }
};

#line 1364 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1372 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1380 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1389 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1398 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0
  }
};

#line 1406 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

#line 1412 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0[2] = {
  (MR_String) "tcgc_nodes",
  (MR_String) "tcgc_edges"
};

#line 1418 "transform_hlds.term_constr_pass2.c"
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

#line 1433 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

#line 1438 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0
  }
};

#line 1447 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

#line 1452 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0[1] = {
  (MR_Integer) 0
};

#line 1457 "transform_hlds.term_constr_pass2.c"
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

#line 1474 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

#line 1480 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[2] = {
  (MR_String) "tcgcs_start",
  (MR_String) "tcgcs_cycles"
};

#line 1486 "transform_hlds.term_constr_pass2.c"
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

#line 1501 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

#line 1506 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0
  }
};

#line 1515 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

#line 1520 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0[1] = {
  (MR_Integer) 0
};

#line 1525 "transform_hlds.term_constr_pass2.c"
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

#line 1542 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0
  }
};

#line 1550 "transform_hlds.term_constr_pass2.c"
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

#line 1567 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1575 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1583 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0[6] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
};

#line 1593 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0[6] = {
  (MR_String) "tcge_caller",
  (MR_String) "tcge_callee",
  (MR_String) "tcge_head_args",
  (MR_String) "tcge_call_args",
  (MR_String) "tcge_zeros",
  (MR_String) "tcge_label"
};

#line 1603 "transform_hlds.term_constr_pass2.c"
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

#line 1618 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

#line 1623 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0
  }
};

#line 1632 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

#line 1637 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0[1] = {
  (MR_Integer) 0
};

#line 1642 "transform_hlds.term_constr_pass2.c"
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

#line 1659 "transform_hlds.term_constr_pass2.c"
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

#line 1676 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[1] = {
  (MR_Integer) 0
};

#line 1681 "transform_hlds.term_constr_pass2.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 = {
  (MR_String) "pass2_options",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_String) "max_matrix_size"
};

#line 1688 "transform_hlds.term_constr_pass2.c"
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

#line 1705 "transform_hlds.term_constr_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_scc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_pass2____Unify____scc_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_pass2____Compare____scc_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_pass2",
  (MR_String) "scc",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1722 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
#line 1725 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1727 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1729 "transform_hlds.term_constr_pass2.c"
{
#line 1731 "transform_hlds.term_constr_pass2.c"
  {
#line 1733 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1736 "transform_hlds.term_constr_pass2.c"
    {
#line 1738 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycle_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1741 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1743 "transform_hlds.term_constr_pass2.c"
  }
#line 1745 "transform_hlds.term_constr_pass2.c"
}

#line 1748 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
#line 1751 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1753 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1755 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1757 "transform_hlds.term_constr_pass2.c"
{
#line 1759 "transform_hlds.term_constr_pass2.c"
  {
#line 1761 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1764 "transform_hlds.term_constr_pass2.c"
    {
#line 1766 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____cycle_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1769 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1771 "transform_hlds.term_constr_pass2.c"
  }
#line 1773 "transform_hlds.term_constr_pass2.c"
}

#line 1776 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
#line 1779 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1781 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1783 "transform_hlds.term_constr_pass2.c"
{
#line 1785 "transform_hlds.term_constr_pass2.c"
  {
#line 1787 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1790 "transform_hlds.term_constr_pass2.c"
    {
#line 1792 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1795 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1797 "transform_hlds.term_constr_pass2.c"
  }
#line 1799 "transform_hlds.term_constr_pass2.c"
}

#line 1802 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
#line 1805 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1807 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1809 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1811 "transform_hlds.term_constr_pass2.c"
{
#line 1813 "transform_hlds.term_constr_pass2.c"
  {
#line 1815 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1818 "transform_hlds.term_constr_pass2.c"
    {
#line 1820 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1823 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1825 "transform_hlds.term_constr_pass2.c"
  }
#line 1827 "transform_hlds.term_constr_pass2.c"
}

#line 1830 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
#line 1833 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1835 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1837 "transform_hlds.term_constr_pass2.c"
{
#line 1839 "transform_hlds.term_constr_pass2.c"
  {
#line 1841 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1844 "transform_hlds.term_constr_pass2.c"
    {
#line 1846 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycles_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1849 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1851 "transform_hlds.term_constr_pass2.c"
  }
#line 1853 "transform_hlds.term_constr_pass2.c"
}

#line 1856 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
#line 1859 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1861 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1863 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1865 "transform_hlds.term_constr_pass2.c"
{
#line 1867 "transform_hlds.term_constr_pass2.c"
  {
#line 1869 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1872 "transform_hlds.term_constr_pass2.c"
    {
#line 1874 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____cycles_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1877 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1879 "transform_hlds.term_constr_pass2.c"
  }
#line 1881 "transform_hlds.term_constr_pass2.c"
}

#line 1884 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
#line 1887 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1889 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1891 "transform_hlds.term_constr_pass2.c"
{
#line 1893 "transform_hlds.term_constr_pass2.c"
  {
#line 1895 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1898 "transform_hlds.term_constr_pass2.c"
    {
#line 1900 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____edge_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1903 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1905 "transform_hlds.term_constr_pass2.c"
  }
#line 1907 "transform_hlds.term_constr_pass2.c"
}

#line 1910 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
#line 1913 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1915 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1917 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1919 "transform_hlds.term_constr_pass2.c"
{
#line 1921 "transform_hlds.term_constr_pass2.c"
  {
#line 1923 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1926 "transform_hlds.term_constr_pass2.c"
    {
#line 1928 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____edge_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1931 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1933 "transform_hlds.term_constr_pass2.c"
  }
#line 1935 "transform_hlds.term_constr_pass2.c"
}

#line 1938 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
#line 1941 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1943 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1945 "transform_hlds.term_constr_pass2.c"
{
#line 1947 "transform_hlds.term_constr_pass2.c"
  {
#line 1949 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1952 "transform_hlds.term_constr_pass2.c"
    {
#line 1954 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____edges_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1957 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1959 "transform_hlds.term_constr_pass2.c"
  }
#line 1961 "transform_hlds.term_constr_pass2.c"
}

#line 1964 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
#line 1967 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1969 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1971 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1973 "transform_hlds.term_constr_pass2.c"
{
#line 1975 "transform_hlds.term_constr_pass2.c"
  {
#line 1977 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1980 "transform_hlds.term_constr_pass2.c"
    {
#line 1982 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____edges_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1985 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1987 "transform_hlds.term_constr_pass2.c"
  }
#line 1989 "transform_hlds.term_constr_pass2.c"
}

#line 1992 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
#line 1995 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1997 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1999 "transform_hlds.term_constr_pass2.c"
{
#line 2001 "transform_hlds.term_constr_pass2.c"
  {
#line 2003 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 2006 "transform_hlds.term_constr_pass2.c"
    {
#line 2008 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 2011 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 2013 "transform_hlds.term_constr_pass2.c"
  }
#line 2015 "transform_hlds.term_constr_pass2.c"
}

#line 2018 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
#line 2021 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 2023 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 2025 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 2027 "transform_hlds.term_constr_pass2.c"
{
#line 2029 "transform_hlds.term_constr_pass2.c"
  {
#line 2031 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 2034 "transform_hlds.term_constr_pass2.c"
    {
#line 2036 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 2039 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 2041 "transform_hlds.term_constr_pass2.c"
  }
#line 2043 "transform_hlds.term_constr_pass2.c"
}

#line 2046 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____scc_0_0_10001(
#line 2049 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 2051 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 2053 "transform_hlds.term_constr_pass2.c"
{
#line 2055 "transform_hlds.term_constr_pass2.c"
  {
#line 2057 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 2060 "transform_hlds.term_constr_pass2.c"
    {
#line 2062 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____scc_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 2065 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 2067 "transform_hlds.term_constr_pass2.c"
  }
#line 2069 "transform_hlds.term_constr_pass2.c"
}

#line 2072 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____scc_0_0_10001(
#line 2075 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 2077 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 2079 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 2081 "transform_hlds.term_constr_pass2.c"
{
#line 2083 "transform_hlds.term_constr_pass2.c"
  {
#line 2085 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 2088 "transform_hlds.term_constr_pass2.c"
    {
#line 2090 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____scc_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 2093 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 2095 "transform_hlds.term_constr_pass2.c"
  }
#line 2097 "transform_hlds.term_constr_pass2.c"
}

#line 541 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_f_0(
#line 541 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5,
#line 541 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_8)
#line 541 "term_constr_pass2.m"
{
#line 541 "term_constr_pass2.m"
  {
#line 541 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 541 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_9;

#line 541 "term_constr_pass2.m"
    {
#line 541 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_9, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__HeadVar__2_8));
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_9, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_5));
#line 541 "term_constr_pass2.m"
    }
#line 541 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_9;
#line 541 "term_constr_pass2.m"
  }
#line 541 "term_constr_pass2.m"
}

#line 515 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_f_0(
#line 515 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_22,
#line 515 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_23,
#line 515 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__3_24)
#line 515 "term_constr_pass2.m"
{
#line 515 "term_constr_pass2.m"
  {
#line 515 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__HeadVar__2_23 == (MR_Integer) 1);

#line 515 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 515 "term_constr_pass2.m"
      {
#line 515 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__HeadVar__3_24 = transform_hlds__term_constr_pass2__HeadVar__1_22;
#line 515 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 515 "term_constr_pass2.m"
      }
#line 515 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 515 "term_constr_pass2.m"
  }
#line 515 "term_constr_pass2.m"
}

#line 414 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_p_0(
#line 414 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 414 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_26)
#line 414 "term_constr_pass2.m"
{
#line 414 "term_constr_pass2.m"
  {
#line 414 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 414 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_26, (MR_Integer) 0)));
#line 414 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_26, (MR_Integer) 1)));
#line 414 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_26, (MR_Integer) 2)));
#line 414 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_26, (MR_Integer) 3)));
#line 414 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_26, (MR_Integer) 4)));
#line 414 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_26, (MR_Integer) 5)));

#line 414 "term_constr_pass2.m"
    {
#line 414 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, ((MR_Box) (transform_hlds__term_constr_pass2__V_27_27)), transform_hlds__term_constr_pass2__Visited_11);
    }
#line 414 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 414 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 414 "term_constr_pass2.m"
  }
#line 414 "term_constr_pass2.m"
}

#line 381 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__381__1_2_p_0(
#line 381 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ProcId_5,
#line 381 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_13)
#line 381 "term_constr_pass2.m"
{
#line 381 "term_constr_pass2.m"
  {
#line 381 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 381 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_13, (MR_Integer) 0)));
#line 382 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_13, (MR_Integer) 1)));
#line 382 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_13, (MR_Integer) 2)));
#line 382 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_13, (MR_Integer) 3)));
#line 382 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_13, (MR_Integer) 4)));
#line 382 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_13, (MR_Integer) 5)));

#line 382 "term_constr_pass2.m"
    {
#line 382 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__ProcId_5, transform_hlds__term_constr_pass2__V_25_25);
    }
#line 381 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 381 "term_constr_pass2.m"
  }
#line 381 "term_constr_pass2.m"
}

#line 176 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_p_0(
#line 176 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Procs_5,
#line 176 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
#line 176 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_7,
#line 176 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__4_17,
#line 176 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__5_18,
#line 176 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__6_19)
#line 176 "term_constr_pass2.m"
{
#line 176 "term_constr_pass2.m"
  {
#line 176 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 176 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__ProcEdges_13;
#line 176 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 5)));
#line 176 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_22_22;
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 0)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 1)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 2)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 3)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 4)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 6)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 7)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 8)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 9)));
#line 177 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 10)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__4_17, (MR_Integer) 11)));
#line 177 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__V_11_11;
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_12_12;
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_14_14;

#line 178 "term_constr_pass2.m"
    {
#line 178 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_22_22 = libs__polyhedron__universe_0_f_0();
    }
#line 177 "term_constr_pass2.m"
    {
#line 177 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(transform_hlds__term_constr_pass2__HeadVar__4_17, transform_hlds__term_constr_pass2__Procs_5, transform_hlds__term_constr_pass2__ModuleInfo_6, transform_hlds__term_constr_pass2__MaxMatrixSize_7, transform_hlds__term_constr_pass2__V_20_20, (MR_Integer) 1, &transform_hlds__term_constr_pass2__V_11_11, transform_hlds__term_constr_pass2__V_22_22, &transform_hlds__term_constr_pass2__V_12_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__ProcEdges_13, (MR_Integer) 1, &transform_hlds__term_constr_pass2__V_14_14);
    }
#line 180 "term_constr_pass2.m"
    {
#line 180 "term_constr_pass2.m"
      mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__ProcEdges_13, transform_hlds__term_constr_pass2__HeadVar__5_18, transform_hlds__term_constr_pass2__HeadVar__6_19);
#line 180 "term_constr_pass2.m"
      return;
    }
#line 176 "term_constr_pass2.m"
  }
#line 176 "term_constr_pass2.m"
}

#line 149 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__149__1_1_f_0(
#line 149 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_30)
#line 149 "term_constr_pass2.m"
{
#line 149 "term_constr_pass2.m"
  {
#line 149 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 149 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__2_31 = (MR_Word) transform_hlds__term_constr_pass2__HeadVar__1_30;

#line 149 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__2_31;
#line 149 "term_constr_pass2.m"
  }
#line 149 "term_constr_pass2.m"
}

#line 90 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____scc_0_0(
#line 90 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 90 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 90 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 90 "term_constr_pass2.m"
{
#line 90 "term_constr_pass2.m"
  {
#line 90 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 90 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 90 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 90 "term_constr_pass2.m"
    {
#line 90 "term_constr_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
#line 90 "term_constr_pass2.m"
      return;
    }
#line 90 "term_constr_pass2.m"
  }
#line 90 "term_constr_pass2.m"
}

#line 90 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____scc_0_0(
#line 90 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 90 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 90 "term_constr_pass2.m"
{
#line 90 "term_constr_pass2.m"
  {
#line 90 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 90 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 90 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 90 "term_constr_pass2.m"
    {
#line 90 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    }
#line 90 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 90 "term_constr_pass2.m"
  }
#line 90 "term_constr_pass2.m"
}

#line 81 "term_constr_pass2.m"
void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(
#line 81 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 81 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 81 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 81 "term_constr_pass2.m"
{
#line 81 "term_constr_pass2.m"
  {
#line 81 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 81 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_6 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 81 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 81 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_6 == transform_hlds__term_constr_pass2__CastY_7);
#line 81 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 2429 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "term_constr_pass2.m"
    else
#line 81 "term_constr_pass2.m"
      {
#line 81 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_4_4 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 81 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_5_5 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 81 "term_constr_pass2.m"
        {
#line 81 "term_constr_pass2.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_pass2__HeadVar__1_1, transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_5_5);
#line 81 "term_constr_pass2.m"
          return;
        }
#line 81 "term_constr_pass2.m"
      }
#line 81 "term_constr_pass2.m"
  }
#line 81 "term_constr_pass2.m"
}

#line 81 "term_constr_pass2.m"
MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(
#line 81 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 81 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 81 "term_constr_pass2.m"
{
#line 81 "term_constr_pass2.m"
  {
#line 81 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 81 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_5 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 81 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_6 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 81 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_5 == transform_hlds__term_constr_pass2__CastY_6);
#line 81 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 81 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 81 "term_constr_pass2.m"
    else
#line 81 "term_constr_pass2.m"
      {
#line 81 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_3_3 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 81 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_4_4 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 2487 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_3_3 == transform_hlds__term_constr_pass2__V_4_4);
#line 81 "term_constr_pass2.m"
      }
#line 81 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 81 "term_constr_pass2.m"
  }
#line 81 "term_constr_pass2.m"
}

#line 118 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
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
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 118 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 118 "term_constr_pass2.m"
    {
#line 118 "term_constr_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
#line 118 "term_constr_pass2.m"
      return;
    }
#line 118 "term_constr_pass2.m"
  }
#line 118 "term_constr_pass2.m"
}

#line 118 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
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
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 118 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 118 "term_constr_pass2.m"
    {
#line 118 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    }
#line 118 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 118 "term_constr_pass2.m"
  }
#line 118 "term_constr_pass2.m"
}

#line 94 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
#line 94 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 94 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 94 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 94 "term_constr_pass2.m"
{
#line 94 "term_constr_pass2.m"
  {
#line 94 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 94 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_21 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 94 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_22 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 94 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_21 == transform_hlds__term_constr_pass2__CastY_22);
#line 94 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 2584 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 94 "term_constr_pass2.m"
    else
#line 94 "term_constr_pass2.m"
      {
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 2)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 3)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 4)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 5)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 2)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 3)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 4)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 5)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_16_16;

#line 94 "term_constr_pass2.m"
        {
#line 94 "term_constr_pass2.m"
          transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__V_16_16, transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_10_10);
        }
#line 2622 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_16_16 == (MR_Integer) 0);
#line 94 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 94 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_16_16;
#line 94 "term_constr_pass2.m"
        else
#line 94 "term_constr_pass2.m"
          {
#line 94 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17;

#line 94 "term_constr_pass2.m"
            {
#line 94 "term_constr_pass2.m"
              transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__V_17_17, transform_hlds__term_constr_pass2__V_5_5, transform_hlds__term_constr_pass2__V_11_11);
            }
#line 2642 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_17_17 == (MR_Integer) 0);
#line 94 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 94 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_17_17;
#line 94 "term_constr_pass2.m"
            else
#line 94 "term_constr_pass2.m"
              {
#line 94 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_18_18;

#line 94 "term_constr_pass2.m"
                {
#line 94 "term_constr_pass2.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4], &transform_hlds__term_constr_pass2__V_18_18, ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)), ((MR_Box) (transform_hlds__term_constr_pass2__V_12_12)));
                }
#line 2662 "transform_hlds.term_constr_pass2.c"
                transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_18_18 == (MR_Integer) 0);
#line 94 "term_constr_pass2.m"
                transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 94 "term_constr_pass2.m"
                if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_18_18;
#line 94 "term_constr_pass2.m"
                else
#line 94 "term_constr_pass2.m"
                  {
#line 94 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__V_19_19;

#line 94 "term_constr_pass2.m"
                    {
#line 94 "term_constr_pass2.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4], &transform_hlds__term_constr_pass2__V_19_19, ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_constr_pass2__V_13_13)));
                    }
#line 2682 "transform_hlds.term_constr_pass2.c"
                    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_19_19 == (MR_Integer) 0);
#line 94 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 94 "term_constr_pass2.m"
                    if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
                      *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_19_19;
#line 94 "term_constr_pass2.m"
                    else
#line 94 "term_constr_pass2.m"
                      {
#line 94 "term_constr_pass2.m"
                        MR_Word transform_hlds__term_constr_pass2__V_20_20;

#line 94 "term_constr_pass2.m"
                        {
#line 94 "term_constr_pass2.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[5], &transform_hlds__term_constr_pass2__V_20_20, ((MR_Box) (transform_hlds__term_constr_pass2__V_8_8)), ((MR_Box) (transform_hlds__term_constr_pass2__V_14_14)));
                        }
#line 2702 "transform_hlds.term_constr_pass2.c"
                        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_20_20 == (MR_Integer) 0);
#line 94 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 94 "term_constr_pass2.m"
                        if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
                          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_20_20;
#line 94 "term_constr_pass2.m"
                        else
#line 94 "term_constr_pass2.m"
                          {
#line 94 "term_constr_pass2.m"
                            libs__polyhedron____Compare____polyhedron_0_0(transform_hlds__term_constr_pass2__HeadVar__1_1, transform_hlds__term_constr_pass2__V_9_9, transform_hlds__term_constr_pass2__V_15_15);
#line 94 "term_constr_pass2.m"
                            return;
                          }
#line 94 "term_constr_pass2.m"
                      }
#line 94 "term_constr_pass2.m"
                  }
#line 94 "term_constr_pass2.m"
              }
#line 94 "term_constr_pass2.m"
          }
#line 94 "term_constr_pass2.m"
      }
#line 94 "term_constr_pass2.m"
  }
#line 94 "term_constr_pass2.m"
}

#line 94 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
#line 94 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 94 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 94 "term_constr_pass2.m"
{
#line 94 "term_constr_pass2.m"
  {
#line 94 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 94 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_15 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 94 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_16 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 94 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_15 == transform_hlds__term_constr_pass2__CastY_16);
#line 94 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 94 "term_constr_pass2.m"
    else
#line 94 "term_constr_pass2.m"
      {
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_19_19;
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_20_20;
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_21_21;
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 2)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 3)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 4)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 5)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 2)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 3)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 4)));
#line 94 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 5)));

#line 2793 "transform_hlds.term_constr_pass2.c"
        {
#line 2795 "transform_hlds.term_constr_pass2.c"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_3_3, transform_hlds__term_constr_pass2__V_9_9);
        }
#line 94 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
          {
#line 2802 "transform_hlds.term_constr_pass2.c"
            {
#line 2804 "transform_hlds.term_constr_pass2.c"
              transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_10_10);
            }
#line 94 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
              {
#line 2811 "transform_hlds.term_constr_pass2.c"
                transform_hlds__term_constr_pass2__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4];
#line 2813 "transform_hlds.term_constr_pass2.c"
                {
#line 2815 "transform_hlds.term_constr_pass2.c"
                  transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_19_19, ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_constr_pass2__V_11_11)));
                }
#line 94 "term_constr_pass2.m"
                if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
                  {
#line 2822 "transform_hlds.term_constr_pass2.c"
                    transform_hlds__term_constr_pass2__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4];
#line 2824 "transform_hlds.term_constr_pass2.c"
                    {
#line 2826 "transform_hlds.term_constr_pass2.c"
                      transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)), ((MR_Box) (transform_hlds__term_constr_pass2__V_12_12)));
                    }
#line 94 "term_constr_pass2.m"
                    if (transform_hlds__term_constr_pass2__succeeded)
#line 94 "term_constr_pass2.m"
                      {
#line 2833 "transform_hlds.term_constr_pass2.c"
                        transform_hlds__term_constr_pass2__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[5];
#line 2835 "transform_hlds.term_constr_pass2.c"
                        {
#line 2837 "transform_hlds.term_constr_pass2.c"
                          transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_constr_pass2__V_13_13)));
                        }
#line 94 "term_constr_pass2.m"
                        if (transform_hlds__term_constr_pass2__succeeded)
#line 2842 "transform_hlds.term_constr_pass2.c"
                          {
#line 2844 "transform_hlds.term_constr_pass2.c"
                            return transform_hlds__term_constr_pass2__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_pass2__V_8_8, transform_hlds__term_constr_pass2__V_14_14);
                          }
#line 94 "term_constr_pass2.m"
                      }
#line 94 "term_constr_pass2.m"
                  }
#line 94 "term_constr_pass2.m"
              }
#line 94 "term_constr_pass2.m"
          }
#line 94 "term_constr_pass2.m"
      }
#line 94 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 94 "term_constr_pass2.m"
  }
#line 94 "term_constr_pass2.m"
}

#line 131 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
#line 131 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 131 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 131 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 131 "term_constr_pass2.m"
{
#line 131 "term_constr_pass2.m"
  {
#line 131 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 131 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 131 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 131 "term_constr_pass2.m"
    {
#line 131 "term_constr_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
#line 131 "term_constr_pass2.m"
      return;
    }
#line 131 "term_constr_pass2.m"
  }
#line 131 "term_constr_pass2.m"
}

#line 131 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
#line 131 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 131 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 131 "term_constr_pass2.m"
{
#line 131 "term_constr_pass2.m"
  {
#line 131 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 131 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 131 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 131 "term_constr_pass2.m"
    {
#line 131 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    }
#line 131 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 131 "term_constr_pass2.m"
  }
#line 131 "term_constr_pass2.m"
}

#line 137 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
#line 137 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 137 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 137 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 137 "term_constr_pass2.m"
{
#line 137 "term_constr_pass2.m"
  {
#line 137 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 137 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_9 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 137 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_10 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 137 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_9 == transform_hlds__term_constr_pass2__CastY_10);
#line 137 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 2950 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 137 "term_constr_pass2.m"
    else
#line 137 "term_constr_pass2.m"
      {
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8;

#line 137 "term_constr_pass2.m"
        {
#line 137 "term_constr_pass2.m"
          transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__V_8_8, transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_6_6);
        }
#line 2972 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_8_8 == (MR_Integer) 0);
#line 137 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 137 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 137 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_8_8;
#line 137 "term_constr_pass2.m"
        else
#line 137 "term_constr_pass2.m"
          {
#line 137 "term_constr_pass2.m"
            {
#line 137 "term_constr_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)));
#line 137 "term_constr_pass2.m"
              return;
            }
#line 137 "term_constr_pass2.m"
          }
#line 137 "term_constr_pass2.m"
      }
#line 137 "term_constr_pass2.m"
  }
#line 137 "term_constr_pass2.m"
}

#line 137 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
#line 137 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 137 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 137 "term_constr_pass2.m"
{
#line 137 "term_constr_pass2.m"
  {
#line 137 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 137 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 137 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_8 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 137 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_7 == transform_hlds__term_constr_pass2__CastY_8);
#line 137 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 137 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 137 "term_constr_pass2.m"
    else
#line 137 "term_constr_pass2.m"
      {
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_10_10;
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 3039 "transform_hlds.term_constr_pass2.c"
        {
#line 3041 "transform_hlds.term_constr_pass2.c"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_3_3, transform_hlds__term_constr_pass2__V_5_5);
        }
#line 137 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 137 "term_constr_pass2.m"
          {
#line 3048 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0];
#line 3050 "transform_hlds.term_constr_pass2.c"
            {
#line 3052 "transform_hlds.term_constr_pass2.c"
              return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_constr_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)));
            }
#line 137 "term_constr_pass2.m"
          }
#line 137 "term_constr_pass2.m"
      }
#line 137 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 137 "term_constr_pass2.m"
  }
#line 137 "term_constr_pass2.m"
}

#line 120 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
#line 120 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 120 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 120 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 120 "term_constr_pass2.m"
{
#line 120 "term_constr_pass2.m"
  {
#line 120 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 120 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_9 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 120 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_10 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 120 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_9 == transform_hlds__term_constr_pass2__CastY_10);
#line 120 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 3090 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 120 "term_constr_pass2.m"
    else
#line 120 "term_constr_pass2.m"
      {
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8;

#line 120 "term_constr_pass2.m"
        {
#line 120 "term_constr_pass2.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], &transform_hlds__term_constr_pass2__V_8_8, ((MR_Box) (transform_hlds__term_constr_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)));
        }
#line 3112 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_8_8 == (MR_Integer) 0);
#line 120 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 120 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 120 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_8_8;
#line 120 "term_constr_pass2.m"
        else
#line 120 "term_constr_pass2.m"
          {
#line 120 "term_constr_pass2.m"
            {
#line 120 "term_constr_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)));
#line 120 "term_constr_pass2.m"
              return;
            }
#line 120 "term_constr_pass2.m"
          }
#line 120 "term_constr_pass2.m"
      }
#line 120 "term_constr_pass2.m"
  }
#line 120 "term_constr_pass2.m"
}

#line 120 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
#line 120 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 120 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 120 "term_constr_pass2.m"
{
#line 120 "term_constr_pass2.m"
  {
#line 120 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 120 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 120 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_8 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 120 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_7 == transform_hlds__term_constr_pass2__CastY_8);
#line 120 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 120 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 120 "term_constr_pass2.m"
    else
#line 120 "term_constr_pass2.m"
      {
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_10_10;
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 120 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 3179 "transform_hlds.term_constr_pass2.c"
        {
#line 3181 "transform_hlds.term_constr_pass2.c"
          transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_pass2__V_3_3)), ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)));
        }
#line 120 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 120 "term_constr_pass2.m"
          {
#line 3188 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0];
#line 3190 "transform_hlds.term_constr_pass2.c"
            {
#line 3192 "transform_hlds.term_constr_pass2.c"
              return transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_constr_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)));
            }
#line 120 "term_constr_pass2.m"
          }
#line 120 "term_constr_pass2.m"
      }
#line 120 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 120 "term_constr_pass2.m"
  }
#line 120 "term_constr_pass2.m"
}

#line 645 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
#line 645 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 645 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Old_5)
#line 645 "term_constr_pass2.m"
{
#line 647 "term_constr_pass2.m"
  {
#line 647 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 647 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 647 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__New_6;
#line 647 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_7_7 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 647 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__conv0_New_6;

#line 647 "term_constr_pass2.m"
    {
#line 647 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__bimap__search_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_7_7, transform_hlds__term_constr_pass2__TypeInfo_7_7, transform_hlds__term_constr_pass2__Map_4, ((MR_Box) (transform_hlds__term_constr_pass2__Old_5)), &transform_hlds__term_constr_pass2__conv0_New_6);
    }
#line 647 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 647 "term_constr_pass2.m"
      {
#line 647 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__New_6 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_New_6);
#line 647 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 647 "term_constr_pass2.m"
      }
#line 647 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 647 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__New_6;
#line 647 "term_constr_pass2.m"
    else
#line 647 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__Old_5;
#line 647 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 647 "term_constr_pass2.m"
  }
#line 645 "term_constr_pass2.m"
}

#line 640 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
#line 640 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 640 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 640 "term_constr_pass2.m"
{
#line 642 "term_constr_pass2.m"
  {
#line 642 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 642 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 642 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Var0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 642 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Coeff_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 642 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Var_7;
#line 647 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__New_10;
#line 647 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_7_11 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 647 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__conv0_New_10;

#line 647 "term_constr_pass2.m"
    {
#line 647 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__bimap__search_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_7_11, transform_hlds__term_constr_pass2__TypeInfo_7_11, transform_hlds__term_constr_pass2__Map_4, ((MR_Box) (transform_hlds__term_constr_pass2__Var0_5)), &transform_hlds__term_constr_pass2__conv0_New_10);
    }
#line 647 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 647 "term_constr_pass2.m"
      {
#line 647 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__New_10 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_New_10);
#line 647 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 647 "term_constr_pass2.m"
      }
#line 647 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 647 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Var_7 = transform_hlds__term_constr_pass2__New_10;
#line 647 "term_constr_pass2.m"
    else
#line 647 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Var_7 = transform_hlds__term_constr_pass2__Var0_5;
#line 642 "term_constr_pass2.m"
    {
#line 642 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 642 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_7));
#line 642 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_6));
#line 642 "term_constr_pass2.m"
    }
#line 642 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 642 "term_constr_pass2.m"
  }
#line 640 "term_constr_pass2.m"
}

#line 637 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
#line 637 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 637 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 637 "term_constr_pass2.m"
{
#line 637 "term_constr_pass2.m"
  {
#line 637 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 637 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 637 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_3;

#line 637 "term_constr_pass2.m"
    {
#line 637 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 637 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_3));
#line 637 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 637 "term_constr_pass2.m"
  }
#line 637 "term_constr_pass2.m"
}

#line 632 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
#line 632 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 632 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Eqn0_5)
#line 632 "term_constr_pass2.m"
{
#line 635 "term_constr_pass2.m"
  {
#line 635 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 635 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Eqn_6;
#line 635 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_12_12;
#line 635 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Coeffs0_7;
#line 635 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Operator_8;
#line 635 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Constant_9;
#line 635 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Coeffs_10;
#line 635 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_11_11;

#line 636 "term_constr_pass2.m"
    {
#line 636 "term_constr_pass2.m"
      libs__lp_rational__deconstruct_constraint_4_p_0(transform_hlds__term_constr_pass2__Eqn0_5, &transform_hlds__term_constr_pass2__Coeffs0_7, &transform_hlds__term_constr_pass2__Operator_8, &transform_hlds__term_constr_pass2__Constant_9);
    }
#line 3391 "transform_hlds.term_constr_pass2.c"
    transform_hlds__term_constr_pass2__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0];
#line 637 "term_constr_pass2.m"
    {
#line 637 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 637 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[6]));
#line 637 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1));
#line 637 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 637 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Map_4));
#line 637 "term_constr_pass2.m"
    }
#line 637 "term_constr_pass2.m"
    {
#line 637 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Coeffs_10 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_12_12, transform_hlds__term_constr_pass2__TypeInfo_12_12, transform_hlds__term_constr_pass2__V_11_11, transform_hlds__term_constr_pass2__Coeffs0_7);
    }
#line 638 "term_constr_pass2.m"
    {
#line 638 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__Eqn_6 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_pass2__Coeffs_10, transform_hlds__term_constr_pass2__Operator_8, transform_hlds__term_constr_pass2__Constant_9);
    }
#line 635 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__Eqn_6;
#line 635 "term_constr_pass2.m"
  }
#line 632 "term_constr_pass2.m"
}

#line 626 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
#line 626 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1)
#line 626 "term_constr_pass2.m"
{
#line 628 "term_constr_pass2.m"
  {
#line 628 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 628 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 628 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "term_constr_pass2.m"
      {
#line 628 "term_constr_pass2.m"
        {
#line 628 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0);
        }
#line 628 "term_constr_pass2.m"
      }
#line 628 "term_constr_pass2.m"
    else
#line 629 "term_constr_pass2.m"
      {
#line 629 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edge_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 629 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edges_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 629 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5;
#line 629 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6;
#line 630 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7;
#line 630 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8;
#line 630 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_9_9;
#line 630 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_10_10;
#line 630 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11;

#line 630 "term_constr_pass2.m"
        {
#line 630 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_5_5 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(transform_hlds__term_constr_pass2__Edges_4);
        }
#line 630 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
#line 630 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
#line 630 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
#line 630 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
#line 630 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
#line 630 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
#line 630 "term_constr_pass2.m"
        {
#line 630 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_5_5, ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)), ((MR_Box) (transform_hlds__term_constr_pass2__Edge_3)));
        }
#line 629 "term_constr_pass2.m"
      }
#line 628 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 628 "term_constr_pass2.m"
  }
#line 626 "term_constr_pass2.m"
}

#line 614 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
#line 614 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_5,
#line 614 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__CurrPPId_6,
#line 614 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_7,
#line 614 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Edges_8)
#line 614 "term_constr_pass2.m"
{
#line 620 "term_constr_pass2.m"
  {
#line 620 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 618 "term_constr_pass2.m"
    {
#line 618 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__StartPPId_5, transform_hlds__term_constr_pass2__CurrPPId_6);
    }
#line 620 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 619 "term_constr_pass2.m"
      *transform_hlds__term_constr_pass2__Edges_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "term_constr_pass2.m"
    else
#line 621 "term_constr_pass2.m"
      {
#line 621 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edge_9;
#line 621 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edges0_10;
#line 621 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11;
#line 621 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv0_Edge_9;
#line 622 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12;
#line 622 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13;
#line 622 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_14_14;
#line 622 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_15_15;
#line 622 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_16_16;

#line 621 "term_constr_pass2.m"
        {
#line 621 "term_constr_pass2.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__Map_7, ((MR_Box) (transform_hlds__term_constr_pass2__CurrPPId_6)), &transform_hlds__term_constr_pass2__conv0_Edge_9);
        }
#line 621 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__Edge_9 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_Edge_9);
#line 622 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 0)));
#line 622 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 1)));
#line 622 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 2)));
#line 622 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 3)));
#line 622 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 4)));
#line 622 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 5)));
#line 622 "term_constr_pass2.m"
        {
#line 622 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(transform_hlds__term_constr_pass2__StartPPId_5, transform_hlds__term_constr_pass2__V_11_11, transform_hlds__term_constr_pass2__Map_7, &transform_hlds__term_constr_pass2__Edges0_10);
        }
#line 623 "term_constr_pass2.m"
        {
#line 623 "term_constr_pass2.m"
          MR_Word base;
#line 623 "term_constr_pass2.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__Edges_8 = base;
#line 623 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_9));
#line 623 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Edges0_10));
#line 623 "term_constr_pass2.m"
        }
#line 621 "term_constr_pass2.m"
      }
#line 620 "term_constr_pass2.m"
  }
#line 614 "term_constr_pass2.m"
}

#line 602 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
#line 602 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 602 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 602 "term_constr_pass2.m"
{
#line 602 "term_constr_pass2.m"
  {
#line 602 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 602 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 602 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_Eqn_6;

#line 602 "term_constr_pass2.m"
    {
#line 602 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv1_Eqn_6 = transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 602 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_Eqn_6));
#line 602 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 602 "term_constr_pass2.m"
  }
#line 602 "term_constr_pass2.m"
}

#line 597 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
#line 597 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 597 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 597 "term_constr_pass2.m"
{
#line 597 "term_constr_pass2.m"
  {
#line 597 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 597 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 597 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_3;

#line 597 "term_constr_pass2.m"
    {
#line 597 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 597 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_3));
#line 597 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 597 "term_constr_pass2.m"
  }
#line 597 "term_constr_pass2.m"
}

#line 579 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
#line 579 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 579 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2,
#line 579 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3,
#line 579 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4,
#line 579 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5,
#line 579 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6,
#line 579 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7)
#line 579 "term_constr_pass2.m"
{
#line 582 "term_constr_pass2.m"
  while (MR_TRUE)
#line 582 "term_constr_pass2.m"
    {
#line 582 "term_constr_pass2.m"
      /* tailcall optimized into a loop */
#line 582 "term_constr_pass2.m"
      {
#line 582 "term_constr_pass2.m"
        MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 582 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "term_constr_pass2.m"
          {
#line 582 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6;
#line 582 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4;
#line 582 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2;
#line 582 "term_constr_pass2.m"
          }
#line 582 "term_constr_pass2.m"
        else
#line 583 "term_constr_pass2.m"
          {
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeInfo_67_67 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_70_70;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edge_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edges_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__HeadVars_22;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Subst0_23;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Subst_24;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints0_25;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints1_26;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints2_27;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints3_28;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_37_37;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_39_39;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_40_40;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_41_41;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_42_42;
#line 583 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43;
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 584 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_52_52;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_53_53;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 597 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_57_57;
#line 597 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_58_58;
#line 597 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_59_59;
#line 597 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_60_60;
#line 597 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_61_61;
#line 601 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_62_62;
#line 601 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_63_63;
#line 601 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_64_64;
#line 601 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_65_65;
#line 601 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_66_66;

#line 584 "term_constr_pass2.m"
            {
#line 584 "term_constr_pass2.m"
              mercury__set__union_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__V_35_35, transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36);
            }
#line 585 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 585 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 585 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__HeadVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 585 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 585 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 585 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 586 "term_constr_pass2.m"
            {
#line 586 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Subst0_23 = mercury__assoc_list__from_corresponding_lists_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__HeadVars_22, transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4);
            }
#line 587 "term_constr_pass2.m"
            {
#line 587 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_37_37 = mercury__bimap__init_0_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67);
            }
#line 587 "term_constr_pass2.m"
            {
#line 587 "term_constr_pass2.m"
              mercury__bimap__set_from_assoc_list_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__Subst0_23, transform_hlds__term_constr_pass2__V_37_37, &transform_hlds__term_constr_pass2__Subst_24);
            }
#line 597 "term_constr_pass2.m"
            {
#line 597 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 597 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[4]));
#line 597 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1));
#line 597 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 597 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Subst_24));
#line 597 "term_constr_pass2.m"
            }
#line 597 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 597 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 597 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 597 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 597 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 597 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 597 "term_constr_pass2.m"
            {
#line 597 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__V_39_39, transform_hlds__term_constr_pass2__V_40_40);
            }
#line 600 "term_constr_pass2.m"
            {
#line 600 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints0_25 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6);
            }
#line 601 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 601 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 601 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 601 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 601 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 601 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 601 "term_constr_pass2.m"
            {
#line 601 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints1_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__V_41_41);
            }
#line 3874 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeCtorInfo_70_70 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 602 "term_constr_pass2.m"
            {
#line 602 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 602 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[5]));
#line 602 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2));
#line 602 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 602 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Subst_24));
#line 602 "term_constr_pass2.m"
            }
#line 602 "term_constr_pass2.m"
            {
#line 602 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints2_27 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__V_42_42, transform_hlds__term_constr_pass2__Constraints1_26);
            }
#line 603 "term_constr_pass2.m"
            {
#line 603 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints3_28 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__Constraints0_25, transform_hlds__term_constr_pass2__Constraints2_27);
            }
#line 604 "term_constr_pass2.m"
            {
#line 604 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_pass2__Constraints3_28);
            }
#line 605 "term_constr_pass2.m"
            /* direct tailcall eliminated */
#line 605 "term_constr_pass2.m"
            {
#line 605 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_pass2__Edges_18;
#line 605 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0__tmp_copy_2 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36;
#line 605 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0__tmp_copy_4 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38;
#line 605 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0__tmp_copy_6 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43;

#line 605 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0__tmp_copy_6;
#line 605 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0__tmp_copy_4;
#line 605 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0__tmp_copy_2;
#line 605 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1;
#line 605 "term_constr_pass2.m"
            }
#line 605 "term_constr_pass2.m"
            continue;
#line 583 "term_constr_pass2.m"
          }
#line 582 "term_constr_pass2.m"
      }
#line 582 "term_constr_pass2.m"
      break;
#line 582 "term_constr_pass2.m"
    }
#line 579 "term_constr_pass2.m"
}

#line 552 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
#line 552 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_4,
#line 552 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycle_5)
#line 552 "term_constr_pass2.m"
{
#line 554 "term_constr_pass2.m"
  {
#line 554 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 554 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__CollapsedCycle_6;
#line 554 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Edges0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_5, (MR_Integer) 1)));
#line 555 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_5, (MR_Integer) 0)));

#line 559 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__Edges0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "term_constr_pass2.m"
      {
#line 558 "term_constr_pass2.m"
        {
#line 558 "term_constr_pass2.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "function \140transform_hlds.term_constr_pass2.collapse_cycle\'/2", (MR_String) "trying to collapse a cycle with no edges");
        }
#line 557 "term_constr_pass2.m"
      }
#line 559 "term_constr_pass2.m"
    else
#line 559 "term_constr_pass2.m"
      {
#line 559 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Edges0_8, (MR_Integer) 1)));
#line 559 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Edges0_8, (MR_Integer) 0)));

#line 559 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__CollapsedCycle_6 = transform_hlds__term_constr_pass2__V_35_35;
#line 559 "term_constr_pass2.m"
        else
#line 563 "term_constr_pass2.m"
          {
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__StartEdge_14;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Rest_15;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__HeadVars_18;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CallVars0_19;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Zeros0_20;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Polyhedron0_21;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Zeros_22;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CallVars_23;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Polyhedron_24;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__EdgeMap_40;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_41_41;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_51_51;
#line 563 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_52_52;
#line 630 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_53_53;
#line 630 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 630 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 630 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 630 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_57_57;
#line 611 "term_constr_pass2.m"
            MR_Box transform_hlds__term_constr_pass2__conv0_StartEdge_14;
#line 612 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_42_42;
#line 612 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_43_43;
#line 612 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_44_44;
#line 612 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_45_45;
#line 612 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_46_46;
#line 567 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_16_16;
#line 567 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17;

#line 630 "term_constr_pass2.m"
            {
#line 630 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_51_51 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(transform_hlds__term_constr_pass2__V_34_34);
            }
#line 630 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 0)));
#line 630 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 1)));
#line 630 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 2)));
#line 630 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 3)));
#line 630 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 4)));
#line 630 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 5)));
#line 630 "term_constr_pass2.m"
            {
#line 630 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__EdgeMap_40 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_51_51, ((MR_Box) (transform_hlds__term_constr_pass2__V_52_52)), ((MR_Box) (transform_hlds__term_constr_pass2__V_35_35)));
            }
#line 611 "term_constr_pass2.m"
            {
#line 611 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__conv0_StartEdge_14 = mercury__map__det_elem_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4)), transform_hlds__term_constr_pass2__EdgeMap_40);
            }
#line 611 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__StartEdge_14 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_StartEdge_14);
#line 612 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 0)));
#line 612 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 1)));
#line 612 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 2)));
#line 612 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 3)));
#line 612 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 4)));
#line 612 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 5)));
#line 612 "term_constr_pass2.m"
            {
#line 612 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(transform_hlds__term_constr_pass2__StartPPId_4, transform_hlds__term_constr_pass2__V_41_41, transform_hlds__term_constr_pass2__EdgeMap_40, &transform_hlds__term_constr_pass2__Rest_15);
            }
#line 567 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 0)));
#line 567 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 1)));
#line 567 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__HeadVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 2)));
#line 567 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__CallVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 3)));
#line 567 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Zeros0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 4)));
#line 567 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Polyhedron0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 5)));
#line 569 "term_constr_pass2.m"
            {
#line 569 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(transform_hlds__term_constr_pass2__Rest_15, transform_hlds__term_constr_pass2__Zeros0_20, &transform_hlds__term_constr_pass2__Zeros_22, transform_hlds__term_constr_pass2__CallVars0_19, &transform_hlds__term_constr_pass2__CallVars_23, transform_hlds__term_constr_pass2__Polyhedron0_21, &transform_hlds__term_constr_pass2__Polyhedron_24);
            }
#line 571 "term_constr_pass2.m"
            {
#line 571 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__CollapsedCycle_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 571 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4));
#line 571 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4));
#line 571 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__HeadVars_18));
#line 571 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__CallVars_23));
#line 571 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__Zeros_22));
#line 571 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Polyhedron_24));
#line 571 "term_constr_pass2.m"
            }
#line 563 "term_constr_pass2.m"
          }
#line 559 "term_constr_pass2.m"
      }
#line 554 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__CollapsedCycle_6;
#line 554 "term_constr_pass2.m"
  }
#line 552 "term_constr_pass2.m"
}

#line 541 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
#line 541 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 541 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 541 "term_constr_pass2.m"
{
#line 541 "term_constr_pass2.m"
  {
#line 541 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 541 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 541 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_9;

#line 541 "term_constr_pass2.m"
    {
#line 541 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_HeadVar__3_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 541 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_9));
#line 541 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 541 "term_constr_pass2.m"
  }
#line 541 "term_constr_pass2.m"
}

#line 539 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
#line 539 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Vars_4,
#line 539 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5)
#line 539 "term_constr_pass2.m"
{
#line 541 "term_constr_pass2.m"
  {
#line 541 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 541 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 541 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_7_7;

#line 541 "term_constr_pass2.m"
    {
#line 541 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[3]));
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1));
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_5));
#line 541 "term_constr_pass2.m"
    }
#line 541 "term_constr_pass2.m"
    {
#line 541 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1], (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__V_7_7, transform_hlds__term_constr_pass2__Vars_4);
    }
#line 541 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 541 "term_constr_pass2.m"
  }
#line 539 "term_constr_pass2.m"
}

#line 533 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
#line 533 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_3,
#line 533 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 533 "term_constr_pass2.m"
{
#line 535 "term_constr_pass2.m"
  {
#line 535 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 535 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Nodes_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 535 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 535 "term_constr_pass2.m"
    {
#line 535 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, ((MR_Box) (transform_hlds__term_constr_pass2__PPId_3)), transform_hlds__term_constr_pass2__Nodes_4);
    }
#line 535 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 535 "term_constr_pass2.m"
  }
#line 533 "term_constr_pass2.m"
}

#line 541 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
#line 541 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 541 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 541 "term_constr_pass2.m"
{
#line 541 "term_constr_pass2.m"
  {
#line 541 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 541 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 541 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_HeadVar__3_9;

#line 541 "term_constr_pass2.m"
    {
#line 541 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv1_HeadVar__3_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__541__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 541 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_HeadVar__3_9));
#line 541 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 541 "term_constr_pass2.m"
  }
#line 541 "term_constr_pass2.m"
}

#line 515 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
#line 515 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 515 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 515 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 515 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 515 "term_constr_pass2.m"
{
#line 515 "term_constr_pass2.m"
  {
#line 515 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 515 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 515 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_24;

#line 515 "term_constr_pass2.m"
    {
#line 515 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__515__1_2_f_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv0_HeadVar__3_24);
    }
#line 515 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 515 "term_constr_pass2.m"
      {
#line 515 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_24));
#line 515 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 515 "term_constr_pass2.m"
      }
#line 515 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 515 "term_constr_pass2.m"
  }
#line 515 "term_constr_pass2.m"
}

#line 502 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
#line 502 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
#line 502 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_6,
#line 502 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_7,
#line 502 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Loop_8)
#line 502 "term_constr_pass2.m"
{
#line 505 "term_constr_pass2.m"
  {
#line 505 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_74_74;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_75_75;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__IsActive_9;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Proc_12;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Inputs_13;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadArgs_14;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__CallArgs_15;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Terms_16;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Condition_17;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Label_18;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_25_25;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_26_26;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_27_27;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_28_28;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_29_29;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_30_30;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_31_31;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_33_33;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_34_34;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_35_35;
#line 505 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_84_84;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_48_48;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_49_49;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_50_50;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_51_51;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_52_52;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_53_53;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 519 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__V_57_57;
#line 519 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_58_58;
#line 520 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_59_59;
#line 520 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_60_60;
#line 520 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_61_61;
#line 520 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_62_62;
#line 520 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_63_63;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_64_64;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_65_65;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_66_66;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_67_67;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_68_68;
#line 530 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_69_69;
#line 530 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_70_70;
#line 530 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_71_71;
#line 530 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_72_72;
#line 530 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_73_73;

#line 507 "term_constr_pass2.m"
    {
#line 507 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 507 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 507 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 507 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 507 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 507 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));

#line 507 "term_constr_pass2.m"
      {
#line 507 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_7, transform_hlds__term_constr_pass2__V_77_77);
      }
#line 507 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 507 "term_constr_pass2.m"
    }
#line 508 "term_constr_pass2.m"
    if (!(transform_hlds__term_constr_pass2__succeeded))
#line 508 "term_constr_pass2.m"
      {
#line 508 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 508 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 508 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 508 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 508 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 508 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));

#line 508 "term_constr_pass2.m"
        {
#line 508 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_7, transform_hlds__term_constr_pass2__V_78_78);
        }
#line 508 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 508 "term_constr_pass2.m"
      }
#line 512 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 511 "term_constr_pass2.m"
      {
#line 511 "term_constr_pass2.m"
        {
#line 511 "term_constr_pass2.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.strict_decrease_around_loop\'/4", (MR_String) "badly formed loop");
        }
#line 511 "term_constr_pass2.m"
      }
#line 512 "term_constr_pass2.m"
    else
#line 513 "term_constr_pass2.m"
      {
#line 513 "term_constr_pass2.m"
      }
#line 515 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__IsActive_9 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[3];
#line 518 "term_constr_pass2.m"
    {
#line 518 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Proc_12 = transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(transform_hlds__term_constr_pass2__AbstractSCC_5, transform_hlds__term_constr_pass2__PPId_7);
    }
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 0)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 1)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 2)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 3)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__Inputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 4)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 5)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 6)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 7)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 8)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 9)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 10)));
#line 519 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 11)));
#line 4526 "transform_hlds.term_constr_pass2.c"
    transform_hlds__term_constr_pass2__TypeInfo_74_74 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 4528 "transform_hlds.term_constr_pass2.c"
    transform_hlds__term_constr_pass2__TypeCtorInfo_75_75 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 520 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 520 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 520 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 520 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 520 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 520 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
#line 520 "term_constr_pass2.m"
    {
#line 520 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadArgs_14 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__TypeCtorInfo_75_75, transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__IsActive_9, transform_hlds__term_constr_pass2__V_25_25, transform_hlds__term_constr_pass2__Inputs_13);
    }
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
#line 522 "term_constr_pass2.m"
    {
#line 522 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__CallArgs_15 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__TypeCtorInfo_75_75, transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__IsActive_9, transform_hlds__term_constr_pass2__V_26_26, transform_hlds__term_constr_pass2__Inputs_13);
    }
#line 524 "term_constr_pass2.m"
    {
#line 524 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_29_29 = libs__rat__one_0_f_0();
    }
#line 524 "term_constr_pass2.m"
    {
#line 524 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_28_28 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_pass2__V_29_29);
    }
#line 541 "term_constr_pass2.m"
    {
#line 541 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[3]));
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2));
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 541 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__V_28_28));
#line 541 "term_constr_pass2.m"
    }
#line 541 "term_constr_pass2.m"
    {
#line 541 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_27_27 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1], (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__V_84_84, transform_hlds__term_constr_pass2__HeadArgs_14);
    }
#line 524 "term_constr_pass2.m"
    {
#line 524 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_31_31 = libs__rat__one_0_f_0();
    }
#line 524 "term_constr_pass2.m"
    {
#line 524 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_30_30 = transform_hlds__term_constr_pass2__make_coeffs_2_f_0(transform_hlds__term_constr_pass2__CallArgs_15, transform_hlds__term_constr_pass2__V_31_31);
    }
#line 524 "term_constr_pass2.m"
    {
#line 524 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Terms_16 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__V_27_27, transform_hlds__term_constr_pass2__V_30_30);
    }
#line 529 "term_constr_pass2.m"
    {
#line 529 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_34_34 = libs__rat__one_0_f_0();
    }
#line 529 "term_constr_pass2.m"
    {
#line 529 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_33_33 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_pass2__V_34_34);
    }
#line 529 "term_constr_pass2.m"
    {
#line 529 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Condition_17 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_pass2__Terms_16, (MR_Integer) 0, transform_hlds__term_constr_pass2__V_33_33);
    }
#line 530 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 530 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 530 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 530 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 530 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 530 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
#line 530 "term_constr_pass2.m"
    {
#line 530 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Label_18 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__V_35_35);
    }
#line 531 "term_constr_pass2.m"
    {
#line 531 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = libs__lp_rational__entailed_3_p_0(transform_hlds__term_constr_pass2__SizeVarSet_6, transform_hlds__term_constr_pass2__Label_18, transform_hlds__term_constr_pass2__Condition_17);
    }
#line 505 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 505 "term_constr_pass2.m"
  }
#line 502 "term_constr_pass2.m"
}

#line 493 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
#line 493 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 493 "term_constr_pass2.m"
{
#line 493 "term_constr_pass2.m"
  {
#line 493 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 493 "term_constr_pass2.m"
    MR_builtin_longjmp((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0, 1);
#line 493 "term_constr_pass2.m"
  }
#line 493 "term_constr_pass2.m"
}

#line 494 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
#line 494 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 494 "term_constr_pass2.m"
{
#line 494 "term_constr_pass2.m"
  {
#line 494 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 494 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21 = ((MR_Word) (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21);
#line 494 "term_constr_pass2.m"
    {
#line 494 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(transform_hlds__term_constr_pass2__env_ptr);
#line 494 "term_constr_pass2.m"
      return;
    }
#line 494 "term_constr_pass2.m"
  }
#line 494 "term_constr_pass2.m"
}

#line 493 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
#line 493 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 493 "term_constr_pass2.m"
{
#line 493 "term_constr_pass2.m"
  {
#line 493 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 496 "term_constr_pass2.m"
    {
#line 496 "term_constr_pass2.m"
      (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21);
    }
#line 495 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
#line 495 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
#line 495 "term_constr_pass2.m"
      {
#line 495 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(transform_hlds__term_constr_pass2__env_ptr);
#line 495 "term_constr_pass2.m"
        return;
      }
#line 493 "term_constr_pass2.m"
  }
#line 493 "term_constr_pass2.m"
}

#line 493 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
#line 493 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 493 "term_constr_pass2.m"
{
#line 493 "term_constr_pass2.m"
  {
#line 493 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 493 "term_constr_pass2.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0) == 0)
#line 493 "term_constr_pass2.m"
      {
#line 493 "term_constr_pass2.m"
        {
#line 494 "term_constr_pass2.m"
          {
#line 494 "term_constr_pass2.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, &(transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11, transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3, transform_hlds__term_constr_pass2__env_ptr);
          }
#line 493 "term_constr_pass2.m"
        }
#line 493 "term_constr_pass2.m"
        (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_FALSE;
#line 493 "term_constr_pass2.m"
      }
#line 493 "term_constr_pass2.m"
    else
#line 493 "term_constr_pass2.m"
      (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
#line 493 "term_constr_pass2.m"
  }
#line 493 "term_constr_pass2.m"
}

#line 479 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
#line 479 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_1,
#line 479 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
#line 479 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 479 "term_constr_pass2.m"
{
#line 479 "term_constr_pass2.m"
  {
#line 479 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s transform_hlds__term_constr_pass2__env;

#line 479 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1 = transform_hlds__term_constr_pass2__AbstractSCC_1;
#line 479 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2 = transform_hlds__term_constr_pass2__SizeVarSet_2;
#line 482 "term_constr_pass2.m"
    while (MR_TRUE)
#line 482 "term_constr_pass2.m"
      {
#line 482 "term_constr_pass2.m"
        /* tailcall optimized into a loop */
#line 482 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "term_constr_pass2.m"
          (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
#line 482 "term_constr_pass2.m"
        else
#line 483 "term_constr_pass2.m"
          {
#line 483 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CycleSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 483 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CycleSets_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));

#line 484 "term_constr_pass2.m"
            (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CycleSet_8, (MR_Integer) 0)));
#line 484 "term_constr_pass2.m"
            (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CycleSet_8, (MR_Integer) 1)));
#line 491 "term_constr_pass2.m"
            if (((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "term_constr_pass2.m"
              (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
#line 491 "term_constr_pass2.m"
            else
#line 493 "term_constr_pass2.m"
              {
#line 493 "term_constr_pass2.m"
                {
#line 493 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(&transform_hlds__term_constr_pass2__env);
                }
#line 493 "term_constr_pass2.m"
                (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
#line 493 "term_constr_pass2.m"
              }
#line 483 "term_constr_pass2.m"
            if ((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
#line 486 "term_constr_pass2.m"
              {
#line 486 "term_constr_pass2.m"
                /* direct tailcall eliminated */
#line 486 "term_constr_pass2.m"
                {
#line 486 "term_constr_pass2.m"
                  MR_Word transform_hlds__term_constr_pass2__HeadVar__3__tmp_copy_3 = transform_hlds__term_constr_pass2__CycleSets_9;

#line 486 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__HeadVar__3__tmp_copy_3;
#line 486 "term_constr_pass2.m"
                }
#line 486 "term_constr_pass2.m"
                continue;
#line 486 "term_constr_pass2.m"
              }
#line 483 "term_constr_pass2.m"
          }
#line 482 "term_constr_pass2.m"
        return (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded;
#line 482 "term_constr_pass2.m"
        break;
#line 482 "term_constr_pass2.m"
      }
#line 479 "term_constr_pass2.m"
  }
#line 479 "term_constr_pass2.m"
}

#line 466 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_4_p_0(
#line 466 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycles_5,
#line 466 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_6,
#line 466 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_7,
#line 466 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Result_8)
#line 466 "term_constr_pass2.m"
{
#line 472 "term_constr_pass2.m"
  {
#line 472 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 470 "term_constr_pass2.m"
    {
#line 470 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(transform_hlds__term_constr_pass2__AbstractSCC_6, transform_hlds__term_constr_pass2__SizeVarSet_7, transform_hlds__term_constr_pass2__Cycles_5);
    }
#line 472 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 471 "term_constr_pass2.m"
      {
#line 471 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__Result_8 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_3[0];
#line 471 "term_constr_pass2.m"
      }
#line 472 "term_constr_pass2.m"
    else
#line 475 "term_constr_pass2.m"
      {
#line 475 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Error_9;
#line 475 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11;
#line 475 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13;

#line 475 "term_constr_pass2.m"
        {
#line 475 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_11_11 = mercury__term__context_init_0_f_0();
        }
#line 475 "term_constr_pass2.m"
        {
#line 475 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Error_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Error_9, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_11_11));
#line 475 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Error_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 475 "term_constr_pass2.m"
        }
#line 476 "term_constr_pass2.m"
        {
#line 476 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_13_13, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Error_9));
#line 476 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "term_constr_pass2.m"
        }
#line 476 "term_constr_pass2.m"
        {
#line 476 "term_constr_pass2.m"
          MR_Word base;
#line 476 "term_constr_pass2.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__Result_8 = base;
#line 476 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_13_13));
#line 476 "term_constr_pass2.m"
        }
#line 475 "term_constr_pass2.m"
      }
#line 472 "term_constr_pass2.m"
  }
#line 466 "term_constr_pass2.m"
}

#line 446 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
#line 446 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 446 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_2)
#line 446 "term_constr_pass2.m"
{
#line 449 "term_constr_pass2.m"
  while (MR_TRUE)
#line 449 "term_constr_pass2.m"
    {
#line 449 "term_constr_pass2.m"
      /* tailcall optimized into a loop */
#line 449 "term_constr_pass2.m"
      {
#line 449 "term_constr_pass2.m"
        MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 449 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 449 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 449 "term_constr_pass2.m"
          {
#line 450 "term_constr_pass2.m"
            {
#line 450 "term_constr_pass2.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "function \140transform_hlds.term_constr_pass2.get_proc_from_abstract_scc\'/2", (MR_String) "cannot find proc");
            }
#line 449 "term_constr_pass2.m"
          }
#line 449 "term_constr_pass2.m"
        else
#line 451 "term_constr_pass2.m"
          {
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Proc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 451 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Procs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 0)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 1)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 2)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 3)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 4)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 5)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 6)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 7)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 8)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 9)));
#line 452 "term_constr_pass2.m"
            MR_Integer transform_hlds__term_constr_pass2__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 10)));
#line 452 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 11)));

#line 452 "term_constr_pass2.m"
            {
#line 452 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_2, transform_hlds__term_constr_pass2__V_23_23);
            }
#line 451 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 453 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__Proc_9;
#line 451 "term_constr_pass2.m"
            else
#line 455 "term_constr_pass2.m"
              {
#line 455 "term_constr_pass2.m"
                /* direct tailcall eliminated */
#line 455 "term_constr_pass2.m"
                {
#line 455 "term_constr_pass2.m"
                  MR_Word transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_pass2__Procs_10;

#line 455 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1;
#line 455 "term_constr_pass2.m"
                }
#line 455 "term_constr_pass2.m"
                continue;
#line 455 "term_constr_pass2.m"
              }
#line 451 "term_constr_pass2.m"
          }
#line 449 "term_constr_pass2.m"
        return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 449 "term_constr_pass2.m"
      }
#line 449 "term_constr_pass2.m"
      break;
#line 449 "term_constr_pass2.m"
    }
#line 446 "term_constr_pass2.m"
}

#line 437 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
#line 437 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 437 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 437 "term_constr_pass2.m"
{
#line 437 "term_constr_pass2.m"
  {
#line 437 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 437 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 437 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6;

#line 437 "term_constr_pass2.m"
    {
#line 437 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6 = transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 437 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6));
#line 437 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 437 "term_constr_pass2.m"
  }
#line 437 "term_constr_pass2.m"
}

#line 435 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
#line 435 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 435 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 435 "term_constr_pass2.m"
{
#line 435 "term_constr_pass2.m"
  {
#line 435 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 435 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

#line 435 "term_constr_pass2.m"
    {
#line 435 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 435 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 435 "term_constr_pass2.m"
  }
#line 435 "term_constr_pass2.m"
}

#line 431 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
#line 431 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 431 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycles0_2)
#line 431 "term_constr_pass2.m"
{
#line 433 "term_constr_pass2.m"
  {
#line 433 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 433 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 433 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 433 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 433 "term_constr_pass2.m"
    else
#line 434 "term_constr_pass2.m"
      {
#line 434 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_19_19;
#line 434 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 434 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 434 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__PCycles_9;
#line 434 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycles1_10;
#line 434 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__CycleSets0_11;
#line 434 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__PEdges_12;
#line 434 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_15_15;
#line 434 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_16_16;

#line 435 "term_constr_pass2.m"
        {
#line 435 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 435 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[4]));
#line 435 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1));
#line 435 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 435 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
#line 435 "term_constr_pass2.m"
        }
#line 5170 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;
#line 435 "term_constr_pass2.m"
        {
#line 435 "term_constr_pass2.m"
          mercury__list__filter_4_p_0(transform_hlds__term_constr_pass2__TypeCtorInfo_19_19, transform_hlds__term_constr_pass2__V_15_15, transform_hlds__term_constr_pass2__Cycles0_2, &transform_hlds__term_constr_pass2__PCycles_9, &transform_hlds__term_constr_pass2__Cycles1_10);
        }
#line 436 "term_constr_pass2.m"
        {
#line 436 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__CycleSets0_11 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(transform_hlds__term_constr_pass2__Procs_6, transform_hlds__term_constr_pass2__Cycles1_10);
        }
#line 437 "term_constr_pass2.m"
        {
#line 437 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 437 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[1]));
#line 437 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2));
#line 437 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 437 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
#line 437 "term_constr_pass2.m"
        }
#line 437 "term_constr_pass2.m"
        {
#line 437 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__PEdges_12 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_16_16, transform_hlds__term_constr_pass2__PCycles_9);
        }
#line 441 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__PEdges_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 440 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__CycleSets0_11;
#line 441 "term_constr_pass2.m"
        else
#line 442 "term_constr_pass2.m"
          {
#line 442 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17;

#line 443 "term_constr_pass2.m"
            {
#line 443 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 443 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_17_17, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
#line 443 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_17_17, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__PEdges_12));
#line 443 "term_constr_pass2.m"
            }
#line 443 "term_constr_pass2.m"
            {
#line 443 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_17_17));
#line 443 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__CycleSets0_11));
#line 443 "term_constr_pass2.m"
            }
#line 442 "term_constr_pass2.m"
          }
#line 434 "term_constr_pass2.m"
      }
#line 433 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 433 "term_constr_pass2.m"
  }
#line 431 "term_constr_pass2.m"
}

#line 418 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
#line 418 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 418 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 418 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 418 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 418 "term_constr_pass2.m"
{
#line 418 "term_constr_pass2.m"
  {
#line 418 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 418 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20;

#line 418 "term_constr_pass2.m"
    {
#line 418 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20);
    }
#line 418 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20));
#line 418 "term_constr_pass2.m"
  }
#line 418 "term_constr_pass2.m"
}

#line 413 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
#line 413 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 413 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 413 "term_constr_pass2.m"
{
#line 413 "term_constr_pass2.m"
  {
#line 413 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 413 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

#line 413 "term_constr_pass2.m"
    {
#line 413 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__414__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 413 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 413 "term_constr_pass2.m"
  }
#line 413 "term_constr_pass2.m"
}

#line 403 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Start_8,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SoFar_9,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_10,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_12,
#line 403 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19,
#line 403 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20)
#line 403 "term_constr_pass2.m"
{
#line 411 "term_constr_pass2.m"
  {
#line 411 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 408 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 408 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 408 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 408 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 408 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 408 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));

#line 408 "term_constr_pass2.m"
    {
#line 408 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__Start_8, transform_hlds__term_constr_pass2__V_68_68);
    }
#line 411 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 409 "term_constr_pass2.m"
      {
#line 409 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycle_14;
#line 409 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_21_21;
#line 409 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 409 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_23_23;
#line 409 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 409 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 409 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 409 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 409 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));

#line 409 "term_constr_pass2.m"
        {
#line 409 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_21_21, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_22_22));
#line 409 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_21_21, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
#line 409 "term_constr_pass2.m"
        }
#line 409 "term_constr_pass2.m"
        {
#line 409 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_23_23, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_12));
#line 409 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_23_23, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__SoFar_9));
#line 409 "term_constr_pass2.m"
        }
#line 409 "term_constr_pass2.m"
        {
#line 409 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Cycle_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 409 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_14, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_21_21));
#line 409 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_14, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_23_23));
#line 409 "term_constr_pass2.m"
        }
#line 410 "term_constr_pass2.m"
        {
#line 410 "term_constr_pass2.m"
          mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, ((MR_Box) (transform_hlds__term_constr_pass2__Cycle_14)), transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19, transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20);
#line 410 "term_constr_pass2.m"
          return;
        }
#line 409 "term_constr_pass2.m"
      }
#line 411 "term_constr_pass2.m"
    else
#line 421 "term_constr_pass2.m"
      {
#line 421 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__MoreEdges0_15;
#line 412 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 412 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 412 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 412 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 412 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 412 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));
#line 412 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv0_MoreEdges0_15;

#line 412 "term_constr_pass2.m"
        {
#line 412 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = mercury__map__elem_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_pass2__V_25_25)), transform_hlds__term_constr_pass2__Map_10, &transform_hlds__term_constr_pass2__conv0_MoreEdges0_15);
        }
#line 412 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 412 "term_constr_pass2.m"
          {
#line 412 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__MoreEdges0_15 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_MoreEdges0_15);
#line 412 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 412 "term_constr_pass2.m"
          }
#line 421 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 415 "term_constr_pass2.m"
          {
#line 415 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_63_63;
#line 415 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__NotVisited_16;
#line 415 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__MoreEdges_18;
#line 415 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_28_28;
#line 415 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_30_30;
#line 415 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_31_31;
#line 415 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_32_32;
#line 419 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 419 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 419 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 419 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_57_57;
#line 419 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_58_58;
#line 417 "term_constr_pass2.m"
            MR_Box transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20;

#line 413 "term_constr_pass2.m"
            {
#line 413 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__NotVisited_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 413 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[3]));
#line 413 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1));
#line 413 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 413 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
#line 413 "term_constr_pass2.m"
            }
#line 5487 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeCtorInfo_63_63 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
#line 416 "term_constr_pass2.m"
            {
#line 416 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__MoreEdges_18 = mercury__list__filter_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_63_63, transform_hlds__term_constr_pass2__NotVisited_16, transform_hlds__term_constr_pass2__MoreEdges0_15);
            }
#line 418 "term_constr_pass2.m"
            {
#line 418 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_30_30, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_12));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_30_30, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__SoFar_9));
#line 418 "term_constr_pass2.m"
            }
#line 419 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 419 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 419 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 419 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 419 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 419 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));
#line 419 "term_constr_pass2.m"
            {
#line 419 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_31_31, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_32_32));
#line 419 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_31_31, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
#line 419 "term_constr_pass2.m"
            }
#line 418 "term_constr_pass2.m"
            {
#line 418 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[0]));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Start_8));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_30_30));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Map_10));
#line 418 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 6) = ((MR_Box) (transform_hlds__term_constr_pass2__V_31_31));
#line 418 "term_constr_pass2.m"
            }
#line 417 "term_constr_pass2.m"
            {
#line 417 "term_constr_pass2.m"
              mercury__list__foldl_4_p_0(transform_hlds__term_constr_pass2__TypeCtorInfo_63_63, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__V_28_28, transform_hlds__term_constr_pass2__MoreEdges_18, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19)), &transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20);
            }
#line 417 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20);
#line 415 "term_constr_pass2.m"
          }
#line 421 "term_constr_pass2.m"
        else
#line 421 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19;
#line 421 "term_constr_pass2.m"
      }
#line 411 "term_constr_pass2.m"
  }
#line 403 "term_constr_pass2.m"
}

#line 400 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
#line 400 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 400 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 400 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 400 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 400 "term_constr_pass2.m"
{
#line 400 "term_constr_pass2.m"
  {
#line 400 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 400 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20;

#line 400 "term_constr_pass2.m"
    {
#line 400 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20);
    }
#line 400 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20));
#line 400 "term_constr_pass2.m"
  }
#line 400 "term_constr_pass2.m"
}

#line 386 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
#line 386 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 386 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map0_2)
#line 386 "term_constr_pass2.m"
{
#line 389 "term_constr_pass2.m"
  {
#line 389 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 389 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 389 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "term_constr_pass2.m"
    else
#line 390 "term_constr_pass2.m"
      {
#line 390 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Start_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 390 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 390 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycles0_9;
#line 390 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Map_10;
#line 390 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycles1_11;
#line 390 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__InitialEdges_18;
#line 390 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_19_19;
#line 399 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv0_InitialEdges_18;
#line 400 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv2_Cycles0_9;

#line 399 "term_constr_pass2.m"
        {
#line 399 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__conv0_InitialEdges_18 = mercury__map__det_elem_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_pass2__Start_5)), transform_hlds__term_constr_pass2__Map0_2);
        }
#line 399 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__InitialEdges_18 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_InitialEdges_18);
#line 400 "term_constr_pass2.m"
        {
#line 400 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 400 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[0]));
#line 400 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1));
#line 400 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 400 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Start_5));
#line 400 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Map0_2));
#line 400 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "term_constr_pass2.m"
        }
#line 400 "term_constr_pass2.m"
        {
#line 400 "term_constr_pass2.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__V_19_19, transform_hlds__term_constr_pass2__InitialEdges_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_pass2__conv2_Cycles0_9);
        }
#line 400 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__Cycles0_9 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_Cycles0_9);
#line 392 "term_constr_pass2.m"
        {
#line 392 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Map_10 = mercury__map__delete_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map0_2, ((MR_Box) (transform_hlds__term_constr_pass2__Start_5)));
        }
#line 393 "term_constr_pass2.m"
        {
#line 393 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Cycles1_11 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(transform_hlds__term_constr_pass2__Rest_6, transform_hlds__term_constr_pass2__Map_10);
        }
#line 394 "term_constr_pass2.m"
        {
#line 394 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, transform_hlds__term_constr_pass2__Cycles0_9, transform_hlds__term_constr_pass2__Cycles1_11);
        }
#line 390 "term_constr_pass2.m"
      }
#line 389 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 389 "term_constr_pass2.m"
  }
#line 386 "term_constr_pass2.m"
}

#line 381 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
#line 381 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 381 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 381 "term_constr_pass2.m"
{
#line 381 "term_constr_pass2.m"
  {
#line 381 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 381 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

#line 381 "term_constr_pass2.m"
    {
#line 381 "term_constr_pass2.m"
      return transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__381__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 381 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 381 "term_constr_pass2.m"
  }
#line 381 "term_constr_pass2.m"
}

#line 375 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
#line 375 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 375 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edges0_2)
#line 375 "term_constr_pass2.m"
{
#line 378 "term_constr_pass2.m"
  {
#line 378 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 378 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 378 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "term_constr_pass2.m"
      {
#line 378 "term_constr_pass2.m"
        {
#line 378 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0]);
        }
#line 378 "term_constr_pass2.m"
      }
#line 378 "term_constr_pass2.m"
    else
#line 379 "term_constr_pass2.m"
      {
#line 379 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__ProcId_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 379 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__SCC_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 379 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Map0_9;
#line 379 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edges_10;
#line 379 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12;

#line 380 "term_constr_pass2.m"
        {
#line 380 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Map0_9 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(transform_hlds__term_constr_pass2__SCC_6, transform_hlds__term_constr_pass2__Edges0_2);
        }
#line 381 "term_constr_pass2.m"
        {
#line 381 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 381 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[2]));
#line 381 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_edges_2_f_0_1));
#line 381 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 381 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__ProcId_5));
#line 381 "term_constr_pass2.m"
        }
#line 381 "term_constr_pass2.m"
        {
#line 381 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Edges_10 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_12_12, transform_hlds__term_constr_pass2__Edges0_2);
        }
#line 384 "term_constr_pass2.m"
        {
#line 384 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map0_9, ((MR_Box) (transform_hlds__term_constr_pass2__ProcId_5)), ((MR_Box) (transform_hlds__term_constr_pass2__Edges_10)));
        }
#line 379 "term_constr_pass2.m"
      }
#line 378 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 378 "term_constr_pass2.m"
  }
#line 375 "term_constr_pass2.m"
}

#line 360 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
#line 360 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_3,
#line 360 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Cycle_4)
#line 360 "term_constr_pass2.m"
{
#line 362 "term_constr_pass2.m"
  {
#line 362 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_6_6;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_7_7;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_8_8;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_9_9;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_10_10;
#line 362 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
#line 364 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_21_21;
#line 364 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_22_22;
#line 364 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_23_23;
#line 364 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_24_24;
#line 364 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_25_25;

#line 363 "term_constr_pass2.m"
    {
#line 363 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_5_5, transform_hlds__term_constr_pass2__V_11_11);
    }
#line 362 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 362 "term_constr_pass2.m"
      {
#line 364 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
#line 364 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
#line 364 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
#line 364 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
#line 364 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
#line 364 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
#line 364 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 364 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 364 "term_constr_pass2.m"
        {
#line 364 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_6_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7));
#line 364 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_6_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_8_8));
#line 364 "term_constr_pass2.m"
        }
#line 364 "term_constr_pass2.m"
        {
#line 364 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_9_9, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_3));
#line 364 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_10_10));
#line 364 "term_constr_pass2.m"
        }
#line 364 "term_constr_pass2.m"
        {
#line 364 "term_constr_pass2.m"
          MR_Word base;
#line 364 "term_constr_pass2.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__Cycle_4 = base;
#line 364 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6));
#line 364 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_9_9));
#line 364 "term_constr_pass2.m"
        }
#line 364 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 362 "term_constr_pass2.m"
      }
#line 362 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 362 "term_constr_pass2.m"
  }
#line 360 "term_constr_pass2.m"
}

#line 330 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
#line 330 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Poly_4,
#line 330 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge0_5)
#line 330 "term_constr_pass2.m"
{
#line 332 "term_constr_pass2.m"
  {
#line 332 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 332 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Edge_6;
#line 332 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Label0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 5)));
#line 332 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Label_8;
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 0)));
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 1)));
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 2)));
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 3)));
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 4)));
#line 335 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_14_14;
#line 335 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_15_15;
#line 335 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_16_16;
#line 335 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_17_17;
#line 335 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_18_18;
#line 335 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_19_19;

#line 334 "term_constr_pass2.m"
    {
#line 334 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Label_8 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_pass2__Poly_4, transform_hlds__term_constr_pass2__Label0_7);
    }
#line 335 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 0)));
#line 335 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 1)));
#line 335 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 2)));
#line 335 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 3)));
#line 335 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 4)));
#line 335 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 5)));
#line 335 "term_constr_pass2.m"
    {
#line 335 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Edge_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 335 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_14_14));
#line 335 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_15_15));
#line 335 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__V_16_16));
#line 335 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__V_17_17));
#line 335 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_18_18));
#line 335 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Label_8));
#line 335 "term_constr_pass2.m"
    }
#line 332 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__Edge_6;
#line 332 "term_constr_pass2.m"
  }
#line 330 "term_constr_pass2.m"
}

#line 306 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_1,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_2,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
#line 306 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_4,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__TopPoly_5,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__6_6,
#line 306 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7,
#line 306 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9,
#line 306 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11,
#line 306 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12,
#line 306 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13,
#line 306 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14)
#line 306 "term_constr_pass2.m"
{
#line 311 "term_constr_pass2.m"
  while (MR_TRUE)
#line 311 "term_constr_pass2.m"
    {
#line 311 "term_constr_pass2.m"
      /* tailcall optimized into a loop */
#line 311 "term_constr_pass2.m"
      {
#line 311 "term_constr_pass2.m"
        MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 311 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 311 "term_constr_pass2.m"
          {
#line 311 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13;
#line 311 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11;
#line 311 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9;
#line 311 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7;
#line 311 "term_constr_pass2.m"
          }
#line 311 "term_constr_pass2.m"
        else
#line 313 "term_constr_pass2.m"
          {
#line 313 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Disj_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__6_6, (MR_Integer) 0)));
#line 313 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Disjs_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__6_6, (MR_Integer) 1)));
#line 313 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constrs_43;
#line 313 "term_constr_pass2.m"
            MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
#line 313 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
#line 313 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;
#line 313 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;

#line 314 "term_constr_pass2.m"
            {
#line 314 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(transform_hlds__term_constr_pass2__Proc_1, transform_hlds__term_constr_pass2__AbstractSCC_2, transform_hlds__term_constr_pass2__ModuleInfo_3, transform_hlds__term_constr_pass2__MaxMatrixSize_4, transform_hlds__term_constr_pass2__Disj_37, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52, transform_hlds__term_constr_pass2__TopPoly_5, &transform_hlds__term_constr_pass2__Constrs_43, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54);
            }
#line 316 "term_constr_pass2.m"
            {
#line 316 "term_constr_pass2.m"
              mercury__list__cons_3_p_0((MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, ((MR_Box) (transform_hlds__term_constr_pass2__Constrs_43)), transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9, &transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55);
            }
#line 326 "term_constr_pass2.m"
#line 326 "term_constr_pass2.m"
            switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54) {
#line 326 "term_constr_pass2.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 326 "term_constr_pass2.m"
              case (MR_Integer) 0:
#line 327 "term_constr_pass2.m"
                {
#line 327 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
#line 327 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;
#line 327 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
#line 327 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;
#line 327 "term_constr_pass2.m"
                }
#line 326 "term_constr_pass2.m"
                break;
#line 326 "term_constr_pass2.m"
              case (MR_Integer) 1:
#line 323 "term_constr_pass2.m"
                {
#line 323 "term_constr_pass2.m"
                  /* direct tailcall eliminated */
#line 323 "term_constr_pass2.m"
                  {
#line 323 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__HeadVar__6__tmp_copy_6 = transform_hlds__term_constr_pass2__Disjs_38;
#line 323 "term_constr_pass2.m"
                    MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0__tmp_copy_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
#line 323 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0__tmp_copy_9 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;
#line 323 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0__tmp_copy_11 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
#line 323 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0__tmp_copy_13 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;

#line 323 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0__tmp_copy_13;
#line 323 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0__tmp_copy_11;
#line 323 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0__tmp_copy_9;
#line 323 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0__tmp_copy_7;
#line 323 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__HeadVar__6_6 = transform_hlds__term_constr_pass2__HeadVar__6__tmp_copy_6;
#line 323 "term_constr_pass2.m"
                  }
#line 323 "term_constr_pass2.m"
                  continue;
#line 323 "term_constr_pass2.m"
                }
#line 326 "term_constr_pass2.m"
                break;
#line 326 "term_constr_pass2.m"
            }
#line 313 "term_constr_pass2.m"
          }
#line 311 "term_constr_pass2.m"
      }
#line 311 "term_constr_pass2.m"
      break;
#line 311 "term_constr_pass2.m"
    }
#line 306 "term_constr_pass2.m"
}

#line 216 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3(
#line 216 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 216 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 216 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 216 "term_constr_pass2.m"
{
#line 216 "term_constr_pass2.m"
  {
#line 216 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3;
#line 216 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 216 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv9_HeadVar__5_5;

#line 216 "term_constr_pass2.m"
    {
#line 216 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv9_HeadVar__5_5 = libs__polyhedron__convex_union_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 216 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv9_HeadVar__5_5));
#line 216 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_3;
#line 216 "term_constr_pass2.m"
  }
#line 216 "term_constr_pass2.m"
}

#line 208 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
#line 208 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 208 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 208 "term_constr_pass2.m"
{
#line 208 "term_constr_pass2.m"
  {
#line 208 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 208 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 208 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv8_Edge_6;

#line 208 "term_constr_pass2.m"
    {
#line 208 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv8_Edge_6 = transform_hlds__term_constr_pass2__fix_edges_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 208 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv8_Edge_6));
#line 208 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 208 "term_constr_pass2.m"
  }
#line 208 "term_constr_pass2.m"
}

#line 230 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 230 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_4,
#line 230 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_5,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_6,
#line 230 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_7,
#line 230 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_8,
#line 230 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_9)
#line 230 "term_constr_pass2.m"
{
#line 230 "term_constr_pass2.m"
  {
#line 230 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 230 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61;
#line 230 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63;
#line 230 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65;
#line 230 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67;

#line 230 "term_constr_pass2.m"
    {
#line 230 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Integer) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_4), &transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_6), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_8), &transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67);
    }
#line 230 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61));
#line 230 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63));
#line 230 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_7 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65));
#line 230 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_9 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67));
#line 230 "term_constr_pass2.m"
  }
#line 230 "term_constr_pass2.m"
}

#line 190 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_14,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_15,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_16,
#line 190 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_17,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Goal_18,
#line 190 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60,
#line 190 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62,
#line 190 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64,
#line 190 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65,
#line 190 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66,
#line 190 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67)
#line 190 "term_constr_pass2.m"
{
#line 198 "term_constr_pass2.m"
  {
#line 198 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 198 "term_constr_pass2.m"
#line 198 "term_constr_pass2.m"
    switch (MR_tag((MR_Word) transform_hlds__term_constr_pass2__Goal_18)) {
#line 198 "term_constr_pass2.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 198 "term_constr_pass2.m"
      case (MR_Integer) 0:
#line 198 "term_constr_pass2.m"
        {
#line 198 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 198 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Locals_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));
#line 198 "term_constr_pass2.m"
          MR_Integer transform_hlds__term_constr_pass2__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 198 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 3)));

#line 222 "term_constr_pass2.m"
#line 222 "term_constr_pass2.m"
          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
#line 222 "term_constr_pass2.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 222 "term_constr_pass2.m"
            case (MR_Integer) 0:
#line 223 "term_constr_pass2.m"
              {
#line 223 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
#line 223 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 223 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
#line 223 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 223 "term_constr_pass2.m"
              }
#line 222 "term_constr_pass2.m"
              break;
#line 222 "term_constr_pass2.m"
            case (MR_Integer) 1:
#line 200 "term_constr_pass2.m"
              {
#line 200 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_181_181;
#line 200 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__DisjConstrs0_27;
#line 200 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__Edges1_28;
#line 200 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__Edges2_29;
#line 200 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_91_91;
#line 200 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_96_96;

#line 206 "term_constr_pass2.m"
                {
#line 206 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_91_91 = libs__polyhedron__universe_0_f_0();
                }
#line 205 "term_constr_pass2.m"
                {
#line 205 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(transform_hlds__term_constr_pass2__Proc_14, transform_hlds__term_constr_pass2__AbstractSCC_15, transform_hlds__term_constr_pass2__ModuleInfo_16, transform_hlds__term_constr_pass2__MaxMatrixSize_17, transform_hlds__term_constr_pass2__V_91_91, transform_hlds__term_constr_pass2__Goals_23, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__DisjConstrs0_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__Edges1_28, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67);
                }
#line 6389 "transform_hlds.term_constr_pass2.c"
                transform_hlds__term_constr_pass2__TypeCtorInfo_181_181 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
#line 208 "term_constr_pass2.m"
                {
#line 208 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 208 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[0]));
#line 208 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2));
#line 208 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 208 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62));
#line 208 "term_constr_pass2.m"
                }
#line 208 "term_constr_pass2.m"
                {
#line 208 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__Edges2_29 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__V_96_96, transform_hlds__term_constr_pass2__Edges1_28);
                }
#line 209 "term_constr_pass2.m"
                {
#line 209 "term_constr_pass2.m"
                  mercury__list__append_3_p_1(transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__Edges2_29, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65);
                }
#line 219 "term_constr_pass2.m"
#line 219 "term_constr_pass2.m"
                switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
#line 219 "term_constr_pass2.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 219 "term_constr_pass2.m"
                  case (MR_Integer) 0:
#line 220 "term_constr_pass2.m"
                    *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 219 "term_constr_pass2.m"
                    break;
#line 219 "term_constr_pass2.m"
                  case (MR_Integer) 1:
#line 211 "term_constr_pass2.m"
                    {
#line 211 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_184_184;
#line 211 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__SizeVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 211 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__DisjConstrs_31;
#line 211 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__Constrs2_32;
#line 211 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_98_98;
#line 211 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_99_99;
#line 211 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_100_100;
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 212 "term_constr_pass2.m"
                      MR_Integer transform_hlds__term_constr_pass2__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
#line 215 "term_constr_pass2.m"
                      MR_Box transform_hlds__term_constr_pass2__conv10_Constrs2_32;

#line 213 "term_constr_pass2.m"
                      {
#line 213 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__DisjConstrs_31 = libs__polyhedron__project_all_3_f_0(transform_hlds__term_constr_pass2__SizeVarSet_30, transform_hlds__term_constr_pass2__Locals_25, transform_hlds__term_constr_pass2__DisjConstrs0_27);
                      }
#line 6474 "transform_hlds.term_constr_pass2.c"
                      transform_hlds__term_constr_pass2__TypeCtorInfo_184_184 = (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0;
#line 216 "term_constr_pass2.m"
                      {
#line 216 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 216 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_99_99, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__MaxMatrixSize_17));
#line 216 "term_constr_pass2.m"
                      }
#line 216 "term_constr_pass2.m"
                      {
#line 216 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 216 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_8[0]));
#line 216 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3));
#line 216 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 216 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__SizeVarSet_30));
#line 216 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_99_99));
#line 216 "term_constr_pass2.m"
                      }
#line 217 "term_constr_pass2.m"
                      {
#line 217 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__V_100_100 = libs__polyhedron__empty_0_f_0();
                      }
#line 215 "term_constr_pass2.m"
                      {
#line 215 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__conv10_Constrs2_32 = mercury__list__foldl_3_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_184_184, transform_hlds__term_constr_pass2__TypeCtorInfo_184_184, transform_hlds__term_constr_pass2__V_98_98, transform_hlds__term_constr_pass2__DisjConstrs_31, ((MR_Box) (transform_hlds__term_constr_pass2__V_100_100)));
                      }
#line 215 "term_constr_pass2.m"
                      transform_hlds__term_constr_pass2__Constrs2_32 = ((MR_Word) transform_hlds__term_constr_pass2__conv10_Constrs2_32);
#line 218 "term_constr_pass2.m"
                      {
#line 218 "term_constr_pass2.m"
                        libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__Constrs2_32, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
#line 218 "term_constr_pass2.m"
                        return;
                      }
#line 211 "term_constr_pass2.m"
                    }
#line 219 "term_constr_pass2.m"
                    break;
#line 219 "term_constr_pass2.m"
                }
#line 200 "term_constr_pass2.m"
              }
#line 222 "term_constr_pass2.m"
              break;
#line 222 "term_constr_pass2.m"
          }
#line 198 "term_constr_pass2.m"
        }
#line 198 "term_constr_pass2.m"
        break;
#line 198 "term_constr_pass2.m"
      case (MR_Integer) 1:
#line 226 "term_constr_pass2.m"
        {
#line 226 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 226 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Locals_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 226 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));

#line 239 "term_constr_pass2.m"
#line 239 "term_constr_pass2.m"
          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
#line 239 "term_constr_pass2.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 239 "term_constr_pass2.m"
            case (MR_Integer) 0:
#line 240 "term_constr_pass2.m"
              {
#line 240 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
#line 240 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 240 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
#line 240 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 240 "term_constr_pass2.m"
              }
#line 239 "term_constr_pass2.m"
              break;
#line 239 "term_constr_pass2.m"
            case (MR_Integer) 1:
#line 228 "term_constr_pass2.m"
              {
#line 228 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_84_84;
#line 228 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86;
#line 229 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61;
#line 229 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86;
#line 229 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65;
#line 229 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67;

#line 230 "term_constr_pass2.m"
                {
#line 230 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 230 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_6[0]));
#line 230 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1));
#line 230 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 230 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_14));
#line 230 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__AbstractSCC_15));
#line 230 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__ModuleInfo_16));
#line 230 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 6) = ((MR_Box) (transform_hlds__term_constr_pass2__MaxMatrixSize_17));
#line 230 "term_constr_pass2.m"
                }
#line 229 "term_constr_pass2.m"
                {
#line 229 "term_constr_pass2.m"
                  mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_constr_pass2__V_84_84, transform_hlds__term_constr_pass2__Goals_102, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60)), &transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62)), &transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64)), &transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66)), &transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67);
                }
#line 229 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = ((MR_Integer) transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61);
#line 229 "term_constr_pass2.m"
                transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86 = ((MR_Word) transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86);
#line 229 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = ((MR_Word) transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65);
#line 229 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = ((MR_Word) transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67);
#line 236 "term_constr_pass2.m"
#line 236 "term_constr_pass2.m"
                switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
#line 236 "term_constr_pass2.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 236 "term_constr_pass2.m"
                  case (MR_Integer) 0:
#line 237 "term_constr_pass2.m"
                    *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86;
#line 236 "term_constr_pass2.m"
                    break;
#line 236 "term_constr_pass2.m"
                  case (MR_Integer) 1:
#line 234 "term_constr_pass2.m"
                    {
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 234 "term_constr_pass2.m"
                      MR_Integer transform_hlds__term_constr_pass2__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 234 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));

#line 234 "term_constr_pass2.m"
                      {
#line 234 "term_constr_pass2.m"
                        libs__polyhedron__project_4_p_0(transform_hlds__term_constr_pass2__Locals_103, transform_hlds__term_constr_pass2__V_89_89, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
#line 234 "term_constr_pass2.m"
                        return;
                      }
#line 234 "term_constr_pass2.m"
                    }
#line 236 "term_constr_pass2.m"
                    break;
#line 236 "term_constr_pass2.m"
                }
#line 228 "term_constr_pass2.m"
              }
#line 239 "term_constr_pass2.m"
              break;
#line 239 "term_constr_pass2.m"
          }
#line 226 "term_constr_pass2.m"
        }
#line 198 "term_constr_pass2.m"
        break;
#line 198 "term_constr_pass2.m"
      case (MR_Integer) 2:
#line 243 "term_constr_pass2.m"
        {
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__CallPPId0_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__CallVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__ZeroVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 3)));
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Edge_41;
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 4)));
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 5)));
#line 243 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 6)));
#line 246 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 246 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 246 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 246 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 246 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 246 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 246 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 246 "term_constr_pass2.m"
          MR_Integer transform_hlds__term_constr_pass2__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 246 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
#line 253 "term_constr_pass2.m"
          MR_Integer transform_hlds__term_constr_pass2__V_75_75;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_159_159;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_160_160;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_161_161;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_162_162;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_163_163;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_164_164;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_165_165;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_166_166;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_167_167;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_168_168;
#line 253 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_169_169;

#line 246 "term_constr_pass2.m"
          {
#line 246 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Edge_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 246 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_69_69));
#line 246 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__CallPPId0_34));
#line 246 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__V_128_128));
#line 246 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__CallVars_36));
#line 246 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_133_133));
#line 246 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62));
#line 246 "term_constr_pass2.m"
          }
#line 248 "term_constr_pass2.m"
          {
#line 248 "term_constr_pass2.m"
            mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, ((MR_Box) (transform_hlds__term_constr_pass2__Edge_41)), transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65);
          }
#line 252 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = (transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60 + (MR_Integer) 1);
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
#line 253 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 > transform_hlds__term_constr_pass2__V_75_75);
#line 6800 "transform_hlds.term_constr_pass2.c"
          if (transform_hlds__term_constr_pass2__succeeded)
#line 6802 "transform_hlds.term_constr_pass2.c"
            {
#line 254 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = (MR_Integer) 0;
#line 259 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 6808 "transform_hlds.term_constr_pass2.c"
            }
#line 6810 "transform_hlds.term_constr_pass2.c"
          else
#line 6812 "transform_hlds.term_constr_pass2.c"
            {
#line 255 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 260 "term_constr_pass2.m"
#line 260 "term_constr_pass2.m"
              switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
#line 260 "term_constr_pass2.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 260 "term_constr_pass2.m"
                case (MR_Integer) 0:
#line 259 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 260 "term_constr_pass2.m"
                  break;
#line 260 "term_constr_pass2.m"
                case (MR_Integer) 1:
#line 261 "term_constr_pass2.m"
                  {
#line 261 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__CallPPId_42 = (MR_Word) transform_hlds__term_constr_pass2__CallPPId0_34;
#line 261 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__CallProcInfo_44;
#line 261 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__CallTermInfo_45;
#line 261 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46;
#line 263 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__V_43_43;

#line 263 "term_constr_pass2.m"
                    {
#line 263 "term_constr_pass2.m"
                      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_pass2__ModuleInfo_16, transform_hlds__term_constr_pass2__CallPPId_42, &transform_hlds__term_constr_pass2__V_43_43, &transform_hlds__term_constr_pass2__CallProcInfo_44);
                    }
#line 264 "term_constr_pass2.m"
                    {
#line 264 "term_constr_pass2.m"
                      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_pass2__CallProcInfo_44, &transform_hlds__term_constr_pass2__CallTermInfo_45);
                    }
#line 265 "term_constr_pass2.m"
                    {
#line 265 "term_constr_pass2.m"
                      transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46 = transform_hlds__term_constr_main__success_constrs_1_f_0(transform_hlds__term_constr_pass2__CallTermInfo_45);
                    }
#line 270 "term_constr_pass2.m"
                    if ((transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 267 "term_constr_pass2.m"
                      {
#line 268 "term_constr_pass2.m"
                        {
#line 268 "term_constr_pass2.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "proc with no arg size info in pass 2");
#line 268 "term_constr_pass2.m"
                          return;
                        }
#line 267 "term_constr_pass2.m"
                      }
#line 270 "term_constr_pass2.m"
                    else
#line 271 "term_constr_pass2.m"
                      {
#line 271 "term_constr_pass2.m"
                        MR_Word transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46, (MR_Integer) 0)));

#line 272 "term_constr_pass2.m"
                        {
#line 272 "term_constr_pass2.m"
                          transform_hlds__term_constr_pass2__succeeded = libs__polyhedron__is_universe_1_p_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47);
                        }
#line 276 "term_constr_pass2.m"
                        if (transform_hlds__term_constr_pass2__succeeded)
#line 276 "term_constr_pass2.m"
                          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 276 "term_constr_pass2.m"
                        else
#line 277 "term_constr_pass2.m"
                          {
#line 277 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__TypeInfo_203_203;
#line 277 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__MaybeCallProc_48;
#line 277 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__CallProc_50;
#line 277 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__HeadVars_51;
#line 277 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Subst_52;
#line 277 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Eqns0_53;
#line 277 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Eqns1_54;
#line 277 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Eqns_55;
#line 277 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__ArgSizePolyhedron_56;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_170_170;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_171_171;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_172_172;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_173_173;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_174_174;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_175_175;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_176_176;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_177_177;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_178_178;
#line 286 "term_constr_pass2.m"
                            MR_Integer transform_hlds__term_constr_pass2__V_179_179;
#line 286 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_180_180;

#line 277 "term_constr_pass2.m"
                            {
#line 277 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__MaybeCallProc_48 = transform_hlds__term_constr_main__abstract_rep_1_f_0(transform_hlds__term_constr_pass2__CallTermInfo_45);
                            }
#line 281 "term_constr_pass2.m"
                            if ((transform_hlds__term_constr_pass2__MaybeCallProc_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "term_constr_pass2.m"
                              {
#line 283 "term_constr_pass2.m"
                                {
#line 283 "term_constr_pass2.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "no abstract representation for proc");
#line 283 "term_constr_pass2.m"
                                  return;
                                }
#line 282 "term_constr_pass2.m"
                              }
#line 281 "term_constr_pass2.m"
                            else
#line 279 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__CallProc_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__MaybeCallProc_48, (MR_Integer) 0)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 0)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 1)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 2)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__HeadVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 3)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 4)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 5)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 6)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 7)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 8)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 9)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 10)));
#line 286 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 11)));
#line 6977 "transform_hlds.term_constr_pass2.c"
                            transform_hlds__term_constr_pass2__TypeInfo_203_203 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 287 "term_constr_pass2.m"
                            {
#line 287 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Subst_52 = mercury__map__from_corresponding_lists_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_203_203, transform_hlds__term_constr_pass2__TypeInfo_203_203, transform_hlds__term_constr_pass2__HeadVars_51, transform_hlds__term_constr_pass2__CallVars_36);
                            }
#line 288 "term_constr_pass2.m"
                            {
#line 288 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Eqns0_53 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47);
                            }
#line 289 "term_constr_pass2.m"
                            {
#line 289 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Eqns1_54 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(transform_hlds__term_constr_pass2__Eqns0_53, transform_hlds__term_constr_pass2__Subst_52);
                            }
#line 290 "term_constr_pass2.m"
                            {
#line 290 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Eqns_55 = libs__lp_rational__set_vars_to_zero_2_f_0(transform_hlds__term_constr_pass2__ZeroVars_37, transform_hlds__term_constr_pass2__Eqns1_54);
                            }
#line 291 "term_constr_pass2.m"
                            {
#line 291 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__ArgSizePolyhedron_56 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_pass2__Eqns_55);
                            }
#line 292 "term_constr_pass2.m"
                            {
#line 292 "term_constr_pass2.m"
                              libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron_56, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
#line 292 "term_constr_pass2.m"
                              return;
                            }
#line 277 "term_constr_pass2.m"
                          }
#line 271 "term_constr_pass2.m"
                      }
#line 261 "term_constr_pass2.m"
                  }
#line 260 "term_constr_pass2.m"
                  break;
#line 260 "term_constr_pass2.m"
              }
#line 7021 "transform_hlds.term_constr_pass2.c"
            }
#line 243 "term_constr_pass2.m"
        }
#line 198 "term_constr_pass2.m"
        break;
#line 198 "term_constr_pass2.m"
      case (MR_Integer) 3:
#line 297 "term_constr_pass2.m"
        {
#line 297 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Primitive_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 297 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 297 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));

#line 301 "term_constr_pass2.m"
#line 301 "term_constr_pass2.m"
          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
#line 301 "term_constr_pass2.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 301 "term_constr_pass2.m"
            case (MR_Integer) 0:
#line 302 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 301 "term_constr_pass2.m"
              break;
#line 301 "term_constr_pass2.m"
            case (MR_Integer) 1:
#line 300 "term_constr_pass2.m"
              {
#line 300 "term_constr_pass2.m"
                libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__Primitive_57, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
              }
#line 301 "term_constr_pass2.m"
              break;
#line 301 "term_constr_pass2.m"
          }
#line 297 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
#line 297 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
#line 297 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 297 "term_constr_pass2.m"
        }
#line 198 "term_constr_pass2.m"
        break;
#line 198 "term_constr_pass2.m"
    }
#line 198 "term_constr_pass2.m"
  }
#line 190 "term_constr_pass2.m"
}

#line 351 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0_3(
#line 351 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 351 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 351 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 351 "term_constr_pass2.m"
{
#line 351 "term_constr_pass2.m"
  {
#line 351 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 351 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 351 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv3_Cycle_4;

#line 351 "term_constr_pass2.m"
    {
#line 351 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__direct_call_2_p_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), &transform_hlds__term_constr_pass2__conv3_Cycle_4);
    }
#line 351 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 351 "term_constr_pass2.m"
      {
#line 351 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv3_Cycle_4));
#line 351 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 351 "term_constr_pass2.m"
      }
#line 351 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 351 "term_constr_pass2.m"
  }
#line 351 "term_constr_pass2.m"
}

#line 176 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0_2(
#line 176 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 176 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 176 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 176 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 176 "term_constr_pass2.m"
{
#line 176 "term_constr_pass2.m"
  {
#line 176 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 176 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_HeadVar__6_19;

#line 176 "term_constr_pass2.m"
    {
#line 176 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__176__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_HeadVar__6_19);
    }
#line 176 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_HeadVar__6_19));
#line 176 "term_constr_pass2.m"
  }
#line 176 "term_constr_pass2.m"
}

#line 149 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0_1(
#line 149 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 149 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 149 "term_constr_pass2.m"
{
#line 149 "term_constr_pass2.m"
  {
#line 149 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 149 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 149 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__2_31;

#line 149 "term_constr_pass2.m"
    {
#line 149 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_HeadVar__2_31 = transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__149__1_1_f_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 149 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__2_31));
#line 149 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 149 "term_constr_pass2.m"
  }
#line 149 "term_constr_pass2.m"
}

#line 44 "term_constr_pass2.m"
void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0(
#line 44 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Options_1,
#line 44 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 44 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
#line 44 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__4_4)
#line 44 "term_constr_pass2.m"
{
#line 145 "term_constr_pass2.m"
  {
#line 145 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 145 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 145 "term_constr_pass2.m"
      {
#line 145 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__HeadVar__4_4 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_3[0];
#line 145 "term_constr_pass2.m"
      }
#line 145 "term_constr_pass2.m"
    else
#line 146 "term_constr_pass2.m"
      {
#line 146 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__AbstractSCC_20;
#line 146 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__SCC_21;

#line 147 "term_constr_pass2.m"
        {
#line 147 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__AbstractSCC_20 = transform_hlds__term_constr_util__get_abstract_scc_2_f_0(transform_hlds__term_constr_pass2__ModuleInfo_3, transform_hlds__term_constr_pass2__HeadVar__2_2);
        }
#line 149 "term_constr_pass2.m"
        {
#line 149 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__SCC_21 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[1], transform_hlds__term_constr_pass2__HeadVar__2_2);
        }
#line 150 "term_constr_pass2.m"
        {
#line 150 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data__scc_contains_recursion_1_p_0(transform_hlds__term_constr_pass2__AbstractSCC_20);
        }
#line 157 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 151 "term_constr_pass2.m"
          {
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_14_86;
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__SizeVarSet_23;
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edges_24;
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Cycles_25;
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CycleSets_26;
#line 151 "term_constr_pass2.m"
            MR_Integer transform_hlds__term_constr_pass2__V_32_32;
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__FindEdges_41;
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Cycles0_79;
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edges_80;
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Cycles1_81;
#line 151 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__EdgeMap_90;
#line 182 "term_constr_pass2.m"
            MR_Box transform_hlds__term_constr_pass2__conv2_Edges_24;

#line 151 "term_constr_pass2.m"
            {
#line 151 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__SizeVarSet_23 = transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_f_0(transform_hlds__term_constr_pass2__AbstractSCC_20);
            }
#line 152 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_32_32 = (MR_Integer) transform_hlds__term_constr_pass2__Options_1;
#line 176 "term_constr_pass2.m"
            {
#line 176 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__FindEdges_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 176 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_41, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[0]));
#line 176 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_41, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_6_p_0_2));
#line 176 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 176 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_41, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__AbstractSCC_20));
#line 176 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_41, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__ModuleInfo_3));
#line 176 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_41, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__V_32_32));
#line 176 "term_constr_pass2.m"
            }
#line 182 "term_constr_pass2.m"
            {
#line 182 "term_constr_pass2.m"
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__FindEdges_41, transform_hlds__term_constr_pass2__AbstractSCC_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_pass2__conv2_Edges_24);
            }
#line 182 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Edges_24 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_Edges_24);
#line 7294 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeCtorInfo_14_86 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;
#line 351 "term_constr_pass2.m"
            {
#line 351 "term_constr_pass2.m"
              mercury__list__filter_map_4_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__TypeCtorInfo_14_86, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[2], transform_hlds__term_constr_pass2__Edges_24, &transform_hlds__term_constr_pass2__Cycles0_79, &transform_hlds__term_constr_pass2__Edges_80);
            }
#line 369 "term_constr_pass2.m"
            {
#line 369 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__EdgeMap_90 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(transform_hlds__term_constr_pass2__SCC_21, transform_hlds__term_constr_pass2__Edges_80);
            }
#line 370 "term_constr_pass2.m"
            {
#line 370 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Cycles1_81 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(transform_hlds__term_constr_pass2__SCC_21, transform_hlds__term_constr_pass2__EdgeMap_90);
            }
#line 355 "term_constr_pass2.m"
            {
#line 355 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Cycles_25 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_14_86, transform_hlds__term_constr_pass2__Cycles0_79, transform_hlds__term_constr_pass2__Cycles1_81);
            }
#line 155 "term_constr_pass2.m"
            {
#line 155 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__CycleSets_26 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(transform_hlds__term_constr_pass2__SCC_21, transform_hlds__term_constr_pass2__Cycles_25);
            }
#line 156 "term_constr_pass2.m"
            {
#line 156 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__prove_termination_4_p_0(transform_hlds__term_constr_pass2__CycleSets_26, transform_hlds__term_constr_pass2__AbstractSCC_20, transform_hlds__term_constr_pass2__SizeVarSet_23, transform_hlds__term_constr_pass2__HeadVar__4_4);
#line 156 "term_constr_pass2.m"
              return;
            }
#line 151 "term_constr_pass2.m"
          }
#line 157 "term_constr_pass2.m"
        else
#line 158 "term_constr_pass2.m"
          {
#line 158 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__HeadVar__4_4 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_3[0];
#line 158 "term_constr_pass2.m"
          }
#line 146 "term_constr_pass2.m"
      }
#line 145 "term_constr_pass2.m"
  }
#line 44 "term_constr_pass2.m"
}

#line 42 "term_constr_pass2.m"
MR_Word MR_CALL 
transform_hlds__term_constr_pass2__pass2_options_init_1_f_0(
#line 42 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxSize_3)
#line 42 "term_constr_pass2.m"
{
#line 86 "term_constr_pass2.m"
  {
#line 86 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 86 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2 = (MR_Word) transform_hlds__term_constr_pass2__MaxSize_3;

#line 86 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 86 "term_constr_pass2.m"
  }
#line 42 "term_constr_pass2.m"
}

void mercury__transform_hlds__term_constr_pass2__init(void)
{
}

void mercury__transform_hlds__term_constr_pass2__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_set_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycles_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edges_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_pass2_options_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_scc_0);
}

void mercury__transform_hlds__term_constr_pass2__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_pass2. */
