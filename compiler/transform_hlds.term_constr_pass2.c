/*
** Automatically generated from `term_constr_pass2.m'
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
#include "parse_tree.maybe_error.mih"
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



#line 481 "term_constr_pass2.m"
struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s {
#line 481 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1;
#line 481 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2;
#line 484 "term_constr_pass2.m"
  MR_bool transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded;
#line 485 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10;
#line 485 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11;
#line 495 "term_constr_pass2.m"
  jmp_buf transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0;
#line 495 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21;
#line 496 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21;
#line 481 "term_constr_pass2.m"
};


#line 167 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0;

#line 170 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

#line 173 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 176 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 179 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

#line 182 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0;

#line 185 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;

#line 188 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;

#line 191 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 194 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0;

#line 197 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

#line 200 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 203 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0;

#line 206 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0[2];

#line 209 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0[2];

#line 212 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0;

#line 215 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[1];

#line 218 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[1];

#line 221 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0[1];

#line 224 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0[1];

#line 227 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[2];

#line 230 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[2];

#line 233 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0;

#line 236 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[1];

#line 239 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[1];

#line 242 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0[1];

#line 245 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0[1];

#line 248 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;

#line 251 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 254 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 257 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0[6];

#line 260 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0[6];

#line 263 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0;

#line 266 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[1];

#line 269 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[1];

#line 272 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0[1];

#line 275 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0[1];

#line 278 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[1];

#line 281 "transform_hlds.term_constr_pass2.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0;

#line 284 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001(
#line 287 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 289 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 292 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001(
#line 295 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 297 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 299 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 302 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
#line 305 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 307 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 310 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
#line 313 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 315 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 317 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 320 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
#line 323 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 325 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 328 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
#line 331 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 333 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 335 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 338 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
#line 341 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 343 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 346 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
#line 349 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 351 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 353 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 356 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
#line 359 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 361 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 364 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
#line 367 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 369 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 371 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 374 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
#line 377 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 379 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 382 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
#line 385 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 387 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 389 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 392 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
#line 395 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 397 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 400 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
#line 403 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 405 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 407 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 543 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__543__1_2_f_0(
#line 543 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5,
#line 543 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_8);

#line 517 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__517__1_2_f_0(
#line 517 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22,
#line 517 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_23,
#line 517 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_24);

#line 416 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__416__1_2_p_0(
#line 416 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 416 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_26);

#line 382 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__382__1_2_p_0(
#line 382 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ProcId_5,
#line 382 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_13);

#line 177 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__177__1_6_p_0(
#line 177 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Procs_5,
#line 177 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
#line 177 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_7,
#line 177 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_17,
#line 177 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_18,
#line 177 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_19);

#line 150 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__150__1_1_f_0(
#line 150 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22);

#line 119 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
#line 119 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 119 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 119 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 119 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
#line 119 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 119 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 95 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
#line 95 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 95 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 95 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 95 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
#line 95 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 95 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 132 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
#line 132 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 132 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 132 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 132 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
#line 132 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 132 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 138 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
#line 138 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 138 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 138 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 138 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
#line 138 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 138 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 121 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
#line 121 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 121 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 121 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 121 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
#line 121 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 121 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 91 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(
#line 91 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 91 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 91 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 91 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(
#line 91 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 91 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 647 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
#line 647 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 647 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Old_5);

#line 642 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
#line 642 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 642 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 639 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
#line 639 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 639 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 634 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
#line 634 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 634 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Eqn0_5);

#line 628 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
#line 628 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1);

#line 616 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
#line 616 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_5,
#line 616 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__CurrPPId_6,
#line 616 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_7,
#line 616 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Edges_8);

#line 604 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
#line 604 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 604 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 599 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
#line 599 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 599 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 581 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
#line 581 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 581 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2,
#line 581 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3,
#line 581 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4,
#line 581 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5,
#line 581 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6,
#line 581 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7);

#line 554 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
#line 554 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_4,
#line 554 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycle_5);

#line 543 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
#line 543 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 543 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 541 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
#line 541 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Vars_4,
#line 541 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5);

#line 535 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
#line 535 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_3,
#line 535 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2);

#line 543 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
#line 543 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 543 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 517 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
#line 517 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 517 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 517 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 517 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 504 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
#line 504 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
#line 504 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_6,
#line 504 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_7,
#line 504 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Loop_8);

#line 495 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
#line 495 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 496 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
#line 496 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 495 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
#line 495 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 495 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
#line 495 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg);

#line 481 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
#line 481 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_1,
#line 481 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
#line 481 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3);

#line 448 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
#line 448 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 448 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_2);

#line 439 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
#line 439 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 439 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 437 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
#line 437 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 437 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 433 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
#line 433 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 433 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycles0_2);

#line 420 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
#line 420 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 420 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 420 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 420 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 415 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
#line 415 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 415 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 405 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Start_8,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SoFar_9,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_10,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_12,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19,
#line 405 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20);

#line 402 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
#line 402 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 402 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 402 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 402 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 388 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
#line 388 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 388 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map0_2);

#line 382 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
#line 382 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 382 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 376 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
#line 376 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 376 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edges0_2);

#line 361 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
#line 361 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_3,
#line 361 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Cycle_4);

#line 331 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
#line 331 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Poly_4,
#line 331 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge0_5);

#line 307 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_1,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_2,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
#line 307 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_4,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__TopPoly_5,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__6_6,
#line 307 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7,
#line 307 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9,
#line 307 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11,
#line 307 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13,
#line 307 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14);

#line 217 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3(
#line 217 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 217 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 217 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 209 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
#line 209 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 209 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1);

#line 231 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 231 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_4,
#line 231 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_5,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_6,
#line 231 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_7,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_8,
#line 231 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_9);

#line 191 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_14,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_15,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_16,
#line 191 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_17,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Goal_18,
#line 191 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60,
#line 191 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62,
#line 191 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64,
#line 191 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66,
#line 191 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67);

#line 352 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3(
#line 352 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 352 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 352 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_2);

#line 177 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2(
#line 177 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 177 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 177 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 177 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3);

#line 150 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1(
#line 150 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 150 "term_constr_pass2.m"
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



#line 1286 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0
  }
};

#line 1294 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

#line 1302 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1310 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1318 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

#line 1326 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__tree234__pti_tree234_2__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0__plain_list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
  }
};

#line 1335 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0
  }
};

#line 1343 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__list__pti_list_1__plain_transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0
  }
};

#line 1351 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_pass2__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1359 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1367 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 1376 "transform_hlds.term_constr_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_pass2__bimap__pti_bimap_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1385 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0
  }
};

#line 1393 "transform_hlds.term_constr_pass2.c"
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

#line 1410 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

#line 1416 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_0_0[2] = {
  (MR_String) "tcgc_nodes",
  (MR_String) "tcgc_edges"
};

#line 1422 "transform_hlds.term_constr_pass2.c"
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

#line 1437 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

#line 1442 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_0_0
  }
};

#line 1451 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_0_0
};

#line 1456 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_0[1] = {
  (MR_Integer) 0
};

#line 1461 "transform_hlds.term_constr_pass2.c"
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

#line 1478 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_cycle_set_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_edge_0
};

#line 1484 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_cycle_set_0_0[2] = {
  (MR_String) "tcgcs_start",
  (MR_String) "tcgcs_cycles"
};

#line 1490 "transform_hlds.term_constr_pass2.c"
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

#line 1505 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

#line 1510 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_cycle_set_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_cycle_set_0_0
  }
};

#line 1519 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_cycle_set_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_cycle_set_0_0
};

#line 1524 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_cycle_set_0[1] = {
  (MR_Integer) 0
};

#line 1529 "transform_hlds.term_constr_pass2.c"
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

#line 1546 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1transform_hlds__term_constr_pass2__type_ctor_info_cycle_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0
  }
};

#line 1554 "transform_hlds.term_constr_pass2.c"
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

#line 1571 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1579 "transform_hlds.term_constr_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_pass2__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1587 "transform_hlds.term_constr_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_types_edge_0_0[6] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_pass2__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0
};

#line 1597 "transform_hlds.term_constr_pass2.c"
static const MR_ConstString transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__field_names_edge_0_0[6] = {
  (MR_String) "tcge_caller",
  (MR_String) "tcge_callee",
  (MR_String) "tcge_head_args",
  (MR_String) "tcge_call_args",
  (MR_String) "tcge_zeros",
  (MR_String) "tcge_label"
};

#line 1607 "transform_hlds.term_constr_pass2.c"
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

#line 1622 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

#line 1627 "transform_hlds.term_constr_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_ptag_ordered_edge_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_stag_ordered_edge_0_0
  }
};

#line 1636 "transform_hlds.term_constr_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_name_ordered_edge_0[1] = {
  &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__du_functor_desc_edge_0_0
};

#line 1641 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_edge_0[1] = {
  (MR_Integer) 0
};

#line 1646 "transform_hlds.term_constr_pass2.c"
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

#line 1663 "transform_hlds.term_constr_pass2.c"
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

#line 1680 "transform_hlds.term_constr_pass2.c"
static const MR_Integer transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__functor_number_map_pass2_options_0[1] = {
  (MR_Integer) 0
};

#line 1685 "transform_hlds.term_constr_pass2.c"
static const MR_NotagFunctorDesc transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__notag_functor_desc_pass2_options_0 = {
  (MR_String) "pass2_options",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_String) "max_matrix_size"
};

#line 1692 "transform_hlds.term_constr_pass2.c"
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

#line 1709 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0_10001(
#line 1712 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1714 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1716 "transform_hlds.term_constr_pass2.c"
{
#line 1718 "transform_hlds.term_constr_pass2.c"
  {
#line 1720 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1723 "transform_hlds.term_constr_pass2.c"
    {
#line 1725 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1728 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1730 "transform_hlds.term_constr_pass2.c"
  }
#line 1732 "transform_hlds.term_constr_pass2.c"
}

#line 1735 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0_10001(
#line 1738 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1740 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1742 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1744 "transform_hlds.term_constr_pass2.c"
{
#line 1746 "transform_hlds.term_constr_pass2.c"
  {
#line 1748 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1751 "transform_hlds.term_constr_pass2.c"
    {
#line 1753 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1756 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1758 "transform_hlds.term_constr_pass2.c"
  }
#line 1760 "transform_hlds.term_constr_pass2.c"
}

#line 1763 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0_10001(
#line 1766 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1768 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1770 "transform_hlds.term_constr_pass2.c"
{
#line 1772 "transform_hlds.term_constr_pass2.c"
  {
#line 1774 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1777 "transform_hlds.term_constr_pass2.c"
    {
#line 1779 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycle_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1782 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1784 "transform_hlds.term_constr_pass2.c"
  }
#line 1786 "transform_hlds.term_constr_pass2.c"
}

#line 1789 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0_10001(
#line 1792 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1794 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1796 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1798 "transform_hlds.term_constr_pass2.c"
{
#line 1800 "transform_hlds.term_constr_pass2.c"
  {
#line 1802 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1805 "transform_hlds.term_constr_pass2.c"
    {
#line 1807 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____cycle_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1810 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1812 "transform_hlds.term_constr_pass2.c"
  }
#line 1814 "transform_hlds.term_constr_pass2.c"
}

#line 1817 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0_10001(
#line 1820 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1822 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1824 "transform_hlds.term_constr_pass2.c"
{
#line 1826 "transform_hlds.term_constr_pass2.c"
  {
#line 1828 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1831 "transform_hlds.term_constr_pass2.c"
    {
#line 1833 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1836 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1838 "transform_hlds.term_constr_pass2.c"
  }
#line 1840 "transform_hlds.term_constr_pass2.c"
}

#line 1843 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0_10001(
#line 1846 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1848 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1850 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1852 "transform_hlds.term_constr_pass2.c"
{
#line 1854 "transform_hlds.term_constr_pass2.c"
  {
#line 1856 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1859 "transform_hlds.term_constr_pass2.c"
    {
#line 1861 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1864 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1866 "transform_hlds.term_constr_pass2.c"
  }
#line 1868 "transform_hlds.term_constr_pass2.c"
}

#line 1871 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0_10001(
#line 1874 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1876 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1878 "transform_hlds.term_constr_pass2.c"
{
#line 1880 "transform_hlds.term_constr_pass2.c"
  {
#line 1882 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1885 "transform_hlds.term_constr_pass2.c"
    {
#line 1887 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____cycles_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1890 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1892 "transform_hlds.term_constr_pass2.c"
  }
#line 1894 "transform_hlds.term_constr_pass2.c"
}

#line 1897 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0_10001(
#line 1900 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1902 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1904 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1906 "transform_hlds.term_constr_pass2.c"
{
#line 1908 "transform_hlds.term_constr_pass2.c"
  {
#line 1910 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1913 "transform_hlds.term_constr_pass2.c"
    {
#line 1915 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____cycles_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1918 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1920 "transform_hlds.term_constr_pass2.c"
  }
#line 1922 "transform_hlds.term_constr_pass2.c"
}

#line 1925 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0_10001(
#line 1928 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1930 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1932 "transform_hlds.term_constr_pass2.c"
{
#line 1934 "transform_hlds.term_constr_pass2.c"
  {
#line 1936 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1939 "transform_hlds.term_constr_pass2.c"
    {
#line 1941 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____edge_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1944 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 1946 "transform_hlds.term_constr_pass2.c"
  }
#line 1948 "transform_hlds.term_constr_pass2.c"
}

#line 1951 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0_10001(
#line 1954 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1956 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 1958 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 1960 "transform_hlds.term_constr_pass2.c"
{
#line 1962 "transform_hlds.term_constr_pass2.c"
  {
#line 1964 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 1967 "transform_hlds.term_constr_pass2.c"
    {
#line 1969 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____edge_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 1972 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 1974 "transform_hlds.term_constr_pass2.c"
  }
#line 1976 "transform_hlds.term_constr_pass2.c"
}

#line 1979 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0_10001(
#line 1982 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 1984 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 1986 "transform_hlds.term_constr_pass2.c"
{
#line 1988 "transform_hlds.term_constr_pass2.c"
  {
#line 1990 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 1993 "transform_hlds.term_constr_pass2.c"
    {
#line 1995 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____edges_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 1998 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 2000 "transform_hlds.term_constr_pass2.c"
  }
#line 2002 "transform_hlds.term_constr_pass2.c"
}

#line 2005 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0_10001(
#line 2008 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 2010 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 2012 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 2014 "transform_hlds.term_constr_pass2.c"
{
#line 2016 "transform_hlds.term_constr_pass2.c"
  {
#line 2018 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 2021 "transform_hlds.term_constr_pass2.c"
    {
#line 2023 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____edges_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 2026 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 2028 "transform_hlds.term_constr_pass2.c"
  }
#line 2030 "transform_hlds.term_constr_pass2.c"
}

#line 2033 "transform_hlds.term_constr_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0_10001(
#line 2036 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 2038 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 2040 "transform_hlds.term_constr_pass2.c"
{
#line 2042 "transform_hlds.term_constr_pass2.c"
  {
#line 2044 "transform_hlds.term_constr_pass2.c"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 2047 "transform_hlds.term_constr_pass2.c"
    {
#line 2049 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 2052 "transform_hlds.term_constr_pass2.c"
    return transform_hlds__term_constr_pass2__succeeded;
#line 2054 "transform_hlds.term_constr_pass2.c"
  }
#line 2056 "transform_hlds.term_constr_pass2.c"
}

#line 2059 "transform_hlds.term_constr_pass2.c"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0_10001(
#line 2062 "transform_hlds.term_constr_pass2.c"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 2064 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 2066 "transform_hlds.term_constr_pass2.c"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 2068 "transform_hlds.term_constr_pass2.c"
{
#line 2070 "transform_hlds.term_constr_pass2.c"
  {
#line 2072 "transform_hlds.term_constr_pass2.c"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__1_1;

#line 2075 "transform_hlds.term_constr_pass2.c"
    {
#line 2077 "transform_hlds.term_constr_pass2.c"
      transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(&transform_hlds__term_constr_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_3));
    }
#line 2080 "transform_hlds.term_constr_pass2.c"
    *transform_hlds__term_constr_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__1_1));
#line 2082 "transform_hlds.term_constr_pass2.c"
  }
#line 2084 "transform_hlds.term_constr_pass2.c"
}

#line 543 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__543__1_2_f_0(
#line 543 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5,
#line 543 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_8)
#line 543 "term_constr_pass2.m"
{
#line 543 "term_constr_pass2.m"
  {
#line 543 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 543 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_9;

#line 543 "term_constr_pass2.m"
    {
#line 543 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__LambdaHeadVar__2_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__2_9, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__LambdaHeadVar__1_8));
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__2_9, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_5));
#line 543 "term_constr_pass2.m"
    }
#line 543 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__LambdaHeadVar__2_9;
#line 543 "term_constr_pass2.m"
  }
#line 543 "term_constr_pass2.m"
}

#line 517 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__517__1_2_f_0(
#line 517 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22,
#line 517 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_23,
#line 517 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_24)
#line 517 "term_constr_pass2.m"
{
#line 517 "term_constr_pass2.m"
  {
#line 517 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__LambdaHeadVar__2_23 == (MR_Integer) 1);

#line 517 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 517 "term_constr_pass2.m"
      {
#line 517 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__LambdaHeadVar__3_24 = transform_hlds__term_constr_pass2__LambdaHeadVar__1_22;
#line 517 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 517 "term_constr_pass2.m"
      }
#line 517 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 517 "term_constr_pass2.m"
  }
#line 517 "term_constr_pass2.m"
}

#line 416 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__416__1_2_p_0(
#line 416 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 416 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_26)
#line 416 "term_constr_pass2.m"
{
#line 416 "term_constr_pass2.m"
  {
#line 416 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 416 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 0)));
#line 416 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 1)));
#line 416 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 2)));
#line 416 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 3)));
#line 416 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 4)));
#line 416 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_26, (MR_Integer) 5)));

#line 416 "term_constr_pass2.m"
    {
#line 416 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, ((MR_Box) (transform_hlds__term_constr_pass2__V_27_27)), transform_hlds__term_constr_pass2__Visited_11);
    }
#line 416 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 416 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 416 "term_constr_pass2.m"
  }
#line 416 "term_constr_pass2.m"
}

#line 382 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__382__1_2_p_0(
#line 382 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ProcId_5,
#line 382 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_13)
#line 382 "term_constr_pass2.m"
{
#line 382 "term_constr_pass2.m"
  {
#line 382 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 382 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 0)));
#line 384 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 1)));
#line 384 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 2)));
#line 384 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 3)));
#line 384 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 4)));
#line 384 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_13, (MR_Integer) 5)));

#line 384 "term_constr_pass2.m"
    {
#line 384 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__ProcId_5, transform_hlds__term_constr_pass2__V_25_25);
    }
#line 382 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 382 "term_constr_pass2.m"
  }
#line 382 "term_constr_pass2.m"
}

#line 177 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__177__1_6_p_0(
#line 177 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Procs_5,
#line 177 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_6,
#line 177 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_7,
#line 177 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_17,
#line 177 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_18,
#line 177 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__LambdaHeadVar__3_19)
#line 177 "term_constr_pass2.m"
{
#line 177 "term_constr_pass2.m"
  {
#line 177 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__ProcEdges_13;
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 5)));
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_22_22;
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 0)));
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 1)));
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 2)));
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 3)));
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 4)));
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 6)));
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 7)));
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 8)));
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 9)));
#line 178 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 10)));
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, (MR_Integer) 11)));
#line 178 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__V_11_11;
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_12_12;
#line 178 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_14_14;

#line 179 "term_constr_pass2.m"
    {
#line 179 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_22_22 = libs__polyhedron__universe_0_f_0();
    }
#line 178 "term_constr_pass2.m"
    {
#line 178 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(transform_hlds__term_constr_pass2__LambdaHeadVar__1_17, transform_hlds__term_constr_pass2__Procs_5, transform_hlds__term_constr_pass2__ModuleInfo_6, transform_hlds__term_constr_pass2__MaxMatrixSize_7, transform_hlds__term_constr_pass2__V_20_20, (MR_Integer) 1, &transform_hlds__term_constr_pass2__V_11_11, transform_hlds__term_constr_pass2__V_22_22, &transform_hlds__term_constr_pass2__V_12_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__ProcEdges_13, (MR_Integer) 1, &transform_hlds__term_constr_pass2__V_14_14);
    }
#line 181 "term_constr_pass2.m"
    {
#line 181 "term_constr_pass2.m"
      mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__ProcEdges_13, transform_hlds__term_constr_pass2__LambdaHeadVar__2_18, transform_hlds__term_constr_pass2__LambdaHeadVar__3_19);
    }
#line 177 "term_constr_pass2.m"
  }
#line 177 "term_constr_pass2.m"
}

#line 150 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__150__1_1_f_0(
#line 150 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__1_22)
#line 150 "term_constr_pass2.m"
{
#line 150 "term_constr_pass2.m"
  {
#line 150 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 150 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__LambdaHeadVar__2_23 = (MR_Word) transform_hlds__term_constr_pass2__LambdaHeadVar__1_22;

#line 150 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__LambdaHeadVar__2_23;
#line 150 "term_constr_pass2.m"
  }
#line 150 "term_constr_pass2.m"
}

#line 82 "term_constr_pass2.m"
void MR_CALL 
transform_hlds__term_constr_pass2____Compare____pass2_options_0_0(
#line 82 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 82 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 82 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 82 "term_constr_pass2.m"
{
#line 82 "term_constr_pass2.m"
  {
#line 82 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 82 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_6 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 82 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 82 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_6 == transform_hlds__term_constr_pass2__CastY_7);
#line 82 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 2352 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 82 "term_constr_pass2.m"
    else
#line 82 "term_constr_pass2.m"
      {
#line 82 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_4_4 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 82 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_5_5 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 82 "term_constr_pass2.m"
        {
#line 82 "term_constr_pass2.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_pass2__HeadVar__1_1, transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_5_5);
        }
#line 82 "term_constr_pass2.m"
      }
#line 82 "term_constr_pass2.m"
  }
#line 82 "term_constr_pass2.m"
}

#line 82 "term_constr_pass2.m"
MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____pass2_options_0_0(
#line 82 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 82 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 82 "term_constr_pass2.m"
{
#line 82 "term_constr_pass2.m"
  {
#line 82 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 82 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_5 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 82 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_6 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 82 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_5 == transform_hlds__term_constr_pass2__CastY_6);
#line 82 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 82 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 82 "term_constr_pass2.m"
    else
#line 82 "term_constr_pass2.m"
      {
#line 82 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_3_3 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 82 "term_constr_pass2.m"
        MR_Integer transform_hlds__term_constr_pass2__V_4_4 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 2408 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_3_3 == transform_hlds__term_constr_pass2__V_4_4);
#line 82 "term_constr_pass2.m"
      }
#line 82 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 82 "term_constr_pass2.m"
  }
#line 82 "term_constr_pass2.m"
}

#line 119 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edges_0_0(
#line 119 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 119 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 119 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 119 "term_constr_pass2.m"
{
#line 119 "term_constr_pass2.m"
  {
#line 119 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 119 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 119 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 119 "term_constr_pass2.m"
    {
#line 119 "term_constr_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
    }
#line 119 "term_constr_pass2.m"
  }
#line 119 "term_constr_pass2.m"
}

#line 119 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edges_0_0(
#line 119 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 119 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 119 "term_constr_pass2.m"
{
#line 119 "term_constr_pass2.m"
  {
#line 119 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 119 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 119 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 119 "term_constr_pass2.m"
    {
#line 119 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    }
#line 119 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 119 "term_constr_pass2.m"
  }
#line 119 "term_constr_pass2.m"
}

#line 95 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____edge_0_0(
#line 95 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 95 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 95 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 95 "term_constr_pass2.m"
{
#line 95 "term_constr_pass2.m"
  {
#line 95 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 95 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_21 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 95 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_22 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 95 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_21 == transform_hlds__term_constr_pass2__CastY_22);
#line 95 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 2503 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "term_constr_pass2.m"
    else
#line 95 "term_constr_pass2.m"
      {
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 2)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 3)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 4)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 5)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 2)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 3)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 4)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 5)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_16_16;

#line 95 "term_constr_pass2.m"
        {
#line 95 "term_constr_pass2.m"
          transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__V_16_16, transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_10_10);
        }
#line 2541 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_16_16 == (MR_Integer) 0);
#line 95 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 95 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_16_16;
#line 95 "term_constr_pass2.m"
        else
#line 95 "term_constr_pass2.m"
          {
#line 95 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17;

#line 95 "term_constr_pass2.m"
            {
#line 95 "term_constr_pass2.m"
              transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__V_17_17, transform_hlds__term_constr_pass2__V_5_5, transform_hlds__term_constr_pass2__V_11_11);
            }
#line 2561 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_17_17 == (MR_Integer) 0);
#line 95 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 95 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_17_17;
#line 95 "term_constr_pass2.m"
            else
#line 95 "term_constr_pass2.m"
              {
#line 95 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_18_18;

#line 95 "term_constr_pass2.m"
                {
#line 95 "term_constr_pass2.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4], &transform_hlds__term_constr_pass2__V_18_18, ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)), ((MR_Box) (transform_hlds__term_constr_pass2__V_12_12)));
                }
#line 2581 "transform_hlds.term_constr_pass2.c"
                transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_18_18 == (MR_Integer) 0);
#line 95 "term_constr_pass2.m"
                transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 95 "term_constr_pass2.m"
                if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_18_18;
#line 95 "term_constr_pass2.m"
                else
#line 95 "term_constr_pass2.m"
                  {
#line 95 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__V_19_19;

#line 95 "term_constr_pass2.m"
                    {
#line 95 "term_constr_pass2.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4], &transform_hlds__term_constr_pass2__V_19_19, ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_constr_pass2__V_13_13)));
                    }
#line 2601 "transform_hlds.term_constr_pass2.c"
                    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_19_19 == (MR_Integer) 0);
#line 95 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 95 "term_constr_pass2.m"
                    if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
                      *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_19_19;
#line 95 "term_constr_pass2.m"
                    else
#line 95 "term_constr_pass2.m"
                      {
#line 95 "term_constr_pass2.m"
                        MR_Word transform_hlds__term_constr_pass2__V_20_20;

#line 95 "term_constr_pass2.m"
                        {
#line 95 "term_constr_pass2.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[5], &transform_hlds__term_constr_pass2__V_20_20, ((MR_Box) (transform_hlds__term_constr_pass2__V_8_8)), ((MR_Box) (transform_hlds__term_constr_pass2__V_14_14)));
                        }
#line 2621 "transform_hlds.term_constr_pass2.c"
                        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_20_20 == (MR_Integer) 0);
#line 95 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 95 "term_constr_pass2.m"
                        if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
                          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_20_20;
#line 95 "term_constr_pass2.m"
                        else
#line 95 "term_constr_pass2.m"
                          {
#line 95 "term_constr_pass2.m"
                            libs__polyhedron____Compare____polyhedron_0_0(transform_hlds__term_constr_pass2__HeadVar__1_1, transform_hlds__term_constr_pass2__V_9_9, transform_hlds__term_constr_pass2__V_15_15);
                          }
#line 95 "term_constr_pass2.m"
                      }
#line 95 "term_constr_pass2.m"
                  }
#line 95 "term_constr_pass2.m"
              }
#line 95 "term_constr_pass2.m"
          }
#line 95 "term_constr_pass2.m"
      }
#line 95 "term_constr_pass2.m"
  }
#line 95 "term_constr_pass2.m"
}

#line 95 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____edge_0_0(
#line 95 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 95 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 95 "term_constr_pass2.m"
{
#line 95 "term_constr_pass2.m"
  {
#line 95 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 95 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_15 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 95 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_16 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 95 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_15 == transform_hlds__term_constr_pass2__CastY_16);
#line 95 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 95 "term_constr_pass2.m"
    else
#line 95 "term_constr_pass2.m"
      {
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_19_19;
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_20_20;
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_21_21;
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 2)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 3)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 4)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 5)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 2)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 3)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 4)));
#line 95 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 5)));

#line 2710 "transform_hlds.term_constr_pass2.c"
        {
#line 2712 "transform_hlds.term_constr_pass2.c"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_3_3, transform_hlds__term_constr_pass2__V_9_9);
        }
#line 95 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
          {
#line 2719 "transform_hlds.term_constr_pass2.c"
            {
#line 2721 "transform_hlds.term_constr_pass2.c"
              transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_10_10);
            }
#line 95 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
              {
#line 2728 "transform_hlds.term_constr_pass2.c"
                transform_hlds__term_constr_pass2__TypeInfo_19_19 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4];
#line 2730 "transform_hlds.term_constr_pass2.c"
                {
#line 2732 "transform_hlds.term_constr_pass2.c"
                  transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_19_19, ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_constr_pass2__V_11_11)));
                }
#line 95 "term_constr_pass2.m"
                if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
                  {
#line 2739 "transform_hlds.term_constr_pass2.c"
                    transform_hlds__term_constr_pass2__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[4];
#line 2741 "transform_hlds.term_constr_pass2.c"
                    {
#line 2743 "transform_hlds.term_constr_pass2.c"
                      transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)), ((MR_Box) (transform_hlds__term_constr_pass2__V_12_12)));
                    }
#line 95 "term_constr_pass2.m"
                    if (transform_hlds__term_constr_pass2__succeeded)
#line 95 "term_constr_pass2.m"
                      {
#line 2750 "transform_hlds.term_constr_pass2.c"
                        transform_hlds__term_constr_pass2__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[5];
#line 2752 "transform_hlds.term_constr_pass2.c"
                        {
#line 2754 "transform_hlds.term_constr_pass2.c"
                          transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_constr_pass2__V_13_13)));
                        }
#line 95 "term_constr_pass2.m"
                        if (transform_hlds__term_constr_pass2__succeeded)
#line 2759 "transform_hlds.term_constr_pass2.c"
                          {
#line 2761 "transform_hlds.term_constr_pass2.c"
                            transform_hlds__term_constr_pass2__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_pass2__V_8_8, transform_hlds__term_constr_pass2__V_14_14);
                          }
#line 95 "term_constr_pass2.m"
                      }
#line 95 "term_constr_pass2.m"
                  }
#line 95 "term_constr_pass2.m"
              }
#line 95 "term_constr_pass2.m"
          }
#line 95 "term_constr_pass2.m"
      }
#line 95 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 95 "term_constr_pass2.m"
  }
#line 95 "term_constr_pass2.m"
}

#line 132 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycles_0_0(
#line 132 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 132 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 132 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 132 "term_constr_pass2.m"
{
#line 132 "term_constr_pass2.m"
  {
#line 132 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 132 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 132 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 132 "term_constr_pass2.m"
    {
#line 132 "term_constr_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
    }
#line 132 "term_constr_pass2.m"
  }
#line 132 "term_constr_pass2.m"
}

#line 132 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycles_0_0(
#line 132 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 132 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 132 "term_constr_pass2.m"
{
#line 132 "term_constr_pass2.m"
  {
#line 132 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 132 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 132 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 132 "term_constr_pass2.m"
    {
#line 132 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    }
#line 132 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 132 "term_constr_pass2.m"
  }
#line 132 "term_constr_pass2.m"
}

#line 138 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_set_0_0(
#line 138 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 138 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 138 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 138 "term_constr_pass2.m"
{
#line 138 "term_constr_pass2.m"
  {
#line 138 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 138 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_9 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 138 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_10 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 138 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_9 == transform_hlds__term_constr_pass2__CastY_10);
#line 138 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 2865 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 138 "term_constr_pass2.m"
    else
#line 138 "term_constr_pass2.m"
      {
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8;

#line 138 "term_constr_pass2.m"
        {
#line 138 "term_constr_pass2.m"
          transform_hlds__term_constr_data____Compare____abstract_ppid_0_0(&transform_hlds__term_constr_pass2__V_8_8, transform_hlds__term_constr_pass2__V_4_4, transform_hlds__term_constr_pass2__V_6_6);
        }
#line 2887 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_8_8 == (MR_Integer) 0);
#line 138 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 138 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 138 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_8_8;
#line 138 "term_constr_pass2.m"
        else
#line 138 "term_constr_pass2.m"
          {
#line 138 "term_constr_pass2.m"
            {
#line 138 "term_constr_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)));
            }
#line 138 "term_constr_pass2.m"
          }
#line 138 "term_constr_pass2.m"
      }
#line 138 "term_constr_pass2.m"
  }
#line 138 "term_constr_pass2.m"
}

#line 138 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_set_0_0(
#line 138 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 138 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 138 "term_constr_pass2.m"
{
#line 138 "term_constr_pass2.m"
  {
#line 138 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 138 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 138 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_8 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 138 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_7 == transform_hlds__term_constr_pass2__CastY_8);
#line 138 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 138 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 138 "term_constr_pass2.m"
    else
#line 138 "term_constr_pass2.m"
      {
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_10_10;
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 138 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 2952 "transform_hlds.term_constr_pass2.c"
        {
#line 2954 "transform_hlds.term_constr_pass2.c"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_3_3, transform_hlds__term_constr_pass2__V_5_5);
        }
#line 138 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 138 "term_constr_pass2.m"
          {
#line 2961 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0];
#line 2963 "transform_hlds.term_constr_pass2.c"
            {
#line 2965 "transform_hlds.term_constr_pass2.c"
              transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_constr_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)));
            }
#line 138 "term_constr_pass2.m"
          }
#line 138 "term_constr_pass2.m"
      }
#line 138 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 138 "term_constr_pass2.m"
  }
#line 138 "term_constr_pass2.m"
}

#line 121 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____cycle_0_0(
#line 121 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 121 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 121 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 121 "term_constr_pass2.m"
{
#line 121 "term_constr_pass2.m"
  {
#line 121 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 121 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_9 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 121 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_10 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 121 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_9 == transform_hlds__term_constr_pass2__CastY_10);
#line 121 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 3003 "transform_hlds.term_constr_pass2.c"
      *transform_hlds__term_constr_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "term_constr_pass2.m"
    else
#line 121 "term_constr_pass2.m"
      {
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8;

#line 121 "term_constr_pass2.m"
        {
#line 121 "term_constr_pass2.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], &transform_hlds__term_constr_pass2__V_8_8, ((MR_Box) (transform_hlds__term_constr_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)));
        }
#line 3025 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__V_8_8 == (MR_Integer) 0);
#line 121 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 121 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 121 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__V_8_8;
#line 121 "term_constr_pass2.m"
        else
#line 121 "term_constr_pass2.m"
          {
#line 121 "term_constr_pass2.m"
            {
#line 121 "term_constr_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7)));
            }
#line 121 "term_constr_pass2.m"
          }
#line 121 "term_constr_pass2.m"
      }
#line 121 "term_constr_pass2.m"
  }
#line 121 "term_constr_pass2.m"
}

#line 121 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____cycle_0_0(
#line 121 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 121 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 121 "term_constr_pass2.m"
{
#line 121 "term_constr_pass2.m"
  {
#line 121 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 121 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastX_7 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 121 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__CastY_8 = (MR_Integer) transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 121 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__succeeded = (transform_hlds__term_constr_pass2__CastX_7 == transform_hlds__term_constr_pass2__CastY_8);
#line 121 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 121 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 121 "term_constr_pass2.m"
    else
#line 121 "term_constr_pass2.m"
      {
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeInfo_10_10;
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 3090 "transform_hlds.term_constr_pass2.c"
        {
#line 3092 "transform_hlds.term_constr_pass2.c"
          transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_pass2__V_3_3)), ((MR_Box) (transform_hlds__term_constr_pass2__V_5_5)));
        }
#line 121 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 121 "term_constr_pass2.m"
          {
#line 3099 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0];
#line 3101 "transform_hlds.term_constr_pass2.c"
            {
#line 3103 "transform_hlds.term_constr_pass2.c"
              transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_constr_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)));
            }
#line 121 "term_constr_pass2.m"
          }
#line 121 "term_constr_pass2.m"
      }
#line 121 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 121 "term_constr_pass2.m"
  }
#line 121 "term_constr_pass2.m"
}

#line 91 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2____Compare____abstract_ppids_0_0(
#line 91 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 91 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2,
#line 91 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 91 "term_constr_pass2.m"
{
#line 91 "term_constr_pass2.m"
  {
#line 91 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 91 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 91 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_5 = transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 91 "term_constr_pass2.m"
    {
#line 91 "term_constr_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], transform_hlds__term_constr_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_5)));
    }
#line 91 "term_constr_pass2.m"
  }
#line 91 "term_constr_pass2.m"
}

#line 91 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2____Unify____abstract_ppids_0_0(
#line 91 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 91 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 91 "term_constr_pass2.m"
{
#line 91 "term_constr_pass2.m"
  {
#line 91 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 91 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar1_3 = transform_hlds__term_constr_pass2__HeadVar__1_1;
#line 91 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Cast_HeadVar2_4 = transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 91 "term_constr_pass2.m"
    {
#line 91 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[3], ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_pass2__Cast_HeadVar2_4)));
    }
#line 91 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 91 "term_constr_pass2.m"
  }
#line 91 "term_constr_pass2.m"
}

#line 647 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_2_f_0(
#line 647 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 647 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Old_5)
#line 647 "term_constr_pass2.m"
{
#line 649 "term_constr_pass2.m"
  {
#line 649 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 649 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 649 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__New_6;
#line 649 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_7_7 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 649 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__conv0_New_6;

#line 649 "term_constr_pass2.m"
    {
#line 649 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__bimap__search_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_7_7, transform_hlds__term_constr_pass2__TypeInfo_7_7, transform_hlds__term_constr_pass2__Map_4, ((MR_Box) (transform_hlds__term_constr_pass2__Old_5)), &transform_hlds__term_constr_pass2__conv0_New_6);
    }
#line 649 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 649 "term_constr_pass2.m"
      {
#line 649 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__New_6 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_New_6);
#line 649 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 649 "term_constr_pass2.m"
      }
#line 649 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 649 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__New_6;
#line 649 "term_constr_pass2.m"
    else
#line 649 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__Old_5;
#line 649 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 649 "term_constr_pass2.m"
  }
#line 647 "term_constr_pass2.m"
}

#line 642 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(
#line 642 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 642 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 642 "term_constr_pass2.m"
{
#line 644 "term_constr_pass2.m"
  {
#line 644 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 644 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 644 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Var0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 644 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Coeff_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 644 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Var_7;
#line 649 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__New_10;
#line 649 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_7_11 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 649 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__conv0_New_10;

#line 649 "term_constr_pass2.m"
    {
#line 649 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__bimap__search_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_7_11, transform_hlds__term_constr_pass2__TypeInfo_7_11, transform_hlds__term_constr_pass2__Map_4, ((MR_Box) (transform_hlds__term_constr_pass2__Var0_5)), &transform_hlds__term_constr_pass2__conv0_New_10);
    }
#line 649 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 649 "term_constr_pass2.m"
      {
#line 649 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__New_10 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_New_10);
#line 649 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 649 "term_constr_pass2.m"
      }
#line 649 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 649 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Var_7 = transform_hlds__term_constr_pass2__New_10;
#line 649 "term_constr_pass2.m"
    else
#line 649 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Var_7 = transform_hlds__term_constr_pass2__Var0_5;
#line 644 "term_constr_pass2.m"
    {
#line 644 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Var_7));
#line 644 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_6));
#line 644 "term_constr_pass2.m"
    }
#line 644 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 644 "term_constr_pass2.m"
  }
#line 642 "term_constr_pass2.m"
}

#line 639 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1(
#line 639 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 639 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 639 "term_constr_pass2.m"
{
#line 639 "term_constr_pass2.m"
  {
#line 639 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 639 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 639 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_3;

#line 639 "term_constr_pass2.m"
    {
#line 639 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_coeff_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 639 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_3));
#line 639 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 639 "term_constr_pass2.m"
  }
#line 639 "term_constr_pass2.m"
}

#line 634 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(
#line 634 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_4,
#line 634 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Eqn0_5)
#line 634 "term_constr_pass2.m"
{
#line 637 "term_constr_pass2.m"
  {
#line 637 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 637 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Eqn_6;
#line 637 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_12_12;
#line 637 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Coeffs0_7;
#line 637 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Operator_8;
#line 637 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Constant_9;
#line 637 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Coeffs_10;
#line 637 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_11_11;

#line 638 "term_constr_pass2.m"
    {
#line 638 "term_constr_pass2.m"
      libs__lp_rational__deconstruct_constraint_4_p_0(transform_hlds__term_constr_pass2__Eqn0_5, &transform_hlds__term_constr_pass2__Coeffs0_7, &transform_hlds__term_constr_pass2__Operator_8, &transform_hlds__term_constr_pass2__Constant_9);
    }
#line 3362 "transform_hlds.term_constr_pass2.c"
    transform_hlds__term_constr_pass2__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0];
#line 639 "term_constr_pass2.m"
    {
#line 639 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 639 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[6]));
#line 639 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0_1));
#line 639 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 639 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_11_11, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Map_4));
#line 639 "term_constr_pass2.m"
    }
#line 639 "term_constr_pass2.m"
    {
#line 639 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Coeffs_10 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_12_12, transform_hlds__term_constr_pass2__TypeInfo_12_12, transform_hlds__term_constr_pass2__V_11_11, transform_hlds__term_constr_pass2__Coeffs0_7);
    }
#line 640 "term_constr_pass2.m"
    {
#line 640 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Eqn_6 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_pass2__Coeffs_10, transform_hlds__term_constr_pass2__Operator_8, transform_hlds__term_constr_pass2__Constant_9);
    }
#line 637 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__Eqn_6;
#line 637 "term_constr_pass2.m"
  }
#line 634 "term_constr_pass2.m"
}

#line 628 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__build_edge_map_1_f_0(
#line 628 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1)
#line 628 "term_constr_pass2.m"
{
#line 630 "term_constr_pass2.m"
  {
#line 630 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 630 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2;

#line 630 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "term_constr_pass2.m"
      {
#line 630 "term_constr_pass2.m"
        {
#line 630 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__2_2 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0);
        }
#line 630 "term_constr_pass2.m"
      }
#line 630 "term_constr_pass2.m"
    else
#line 631 "term_constr_pass2.m"
      {
#line 631 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edge_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 631 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edges_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 631 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_5_5;
#line 631 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_6_6;
#line 632 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_7_7;
#line 632 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_8_8;
#line 632 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_9_9;
#line 632 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_10_10;
#line 632 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11;

#line 632 "term_constr_pass2.m"
        {
#line 632 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_5_5 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(transform_hlds__term_constr_pass2__Edges_4);
        }
#line 632 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
#line 632 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
#line 632 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
#line 632 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
#line 632 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
#line 632 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
#line 632 "term_constr_pass2.m"
        {
#line 632 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__2_2 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_5_5, ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6)), ((MR_Box) (transform_hlds__term_constr_pass2__Edge_3)));
        }
#line 631 "term_constr_pass2.m"
      }
#line 630 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 630 "term_constr_pass2.m"
  }
#line 628 "term_constr_pass2.m"
}

#line 616 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(
#line 616 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_5,
#line 616 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__CurrPPId_6,
#line 616 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_7,
#line 616 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Edges_8)
#line 616 "term_constr_pass2.m"
{
#line 620 "term_constr_pass2.m"
  {
#line 620 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 620 "term_constr_pass2.m"
    {
#line 620 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__StartPPId_5, transform_hlds__term_constr_pass2__CurrPPId_6);
    }
#line 620 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 621 "term_constr_pass2.m"
      *transform_hlds__term_constr_pass2__Edges_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "term_constr_pass2.m"
    else
#line 623 "term_constr_pass2.m"
      {
#line 623 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edge_9;
#line 623 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edges0_10;
#line 623 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_11_11;
#line 623 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv0_Edge_9;
#line 624 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12;
#line 624 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_13_13;
#line 624 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_14_14;
#line 624 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_15_15;
#line 624 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_16_16;

#line 623 "term_constr_pass2.m"
        {
#line 623 "term_constr_pass2.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__Map_7, ((MR_Box) (transform_hlds__term_constr_pass2__CurrPPId_6)), &transform_hlds__term_constr_pass2__conv0_Edge_9);
        }
#line 623 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__Edge_9 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_Edge_9);
#line 624 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 0)));
#line 624 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 1)));
#line 624 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 2)));
#line 624 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 3)));
#line 624 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 4)));
#line 624 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_9, (MR_Integer) 5)));
#line 624 "term_constr_pass2.m"
        {
#line 624 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(transform_hlds__term_constr_pass2__StartPPId_5, transform_hlds__term_constr_pass2__V_11_11, transform_hlds__term_constr_pass2__Map_7, &transform_hlds__term_constr_pass2__Edges0_10);
        }
#line 625 "term_constr_pass2.m"
        {
#line 625 "term_constr_pass2.m"
          MR_Word base;
#line 625 "term_constr_pass2.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__Edges_8 = base;
#line 625 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_9));
#line 625 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Edges0_10));
#line 625 "term_constr_pass2.m"
        }
#line 623 "term_constr_pass2.m"
      }
#line 620 "term_constr_pass2.m"
  }
#line 616 "term_constr_pass2.m"
}

#line 604 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2(
#line 604 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 604 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 604 "term_constr_pass2.m"
{
#line 604 "term_constr_pass2.m"
  {
#line 604 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 604 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 604 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_Eqn_6;

#line 604 "term_constr_pass2.m"
    {
#line 604 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv1_Eqn_6 = transform_hlds__term_constr_pass2__subst_size_var_eqn_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 604 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_Eqn_6));
#line 604 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 604 "term_constr_pass2.m"
  }
#line 604 "term_constr_pass2.m"
}

#line 599 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1(
#line 599 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 599 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 599 "term_constr_pass2.m"
{
#line 599 "term_constr_pass2.m"
  {
#line 599 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 599 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 599 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_HeadVar__3_3;

#line 599 "term_constr_pass2.m"
    {
#line 599 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_HeadVar__3_3 = transform_hlds__term_constr_pass2__subst_size_var_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 599 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_HeadVar__3_3));
#line 599 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 599 "term_constr_pass2.m"
  }
#line 599 "term_constr_pass2.m"
}

#line 581 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(
#line 581 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 581 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2,
#line 581 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3,
#line 581 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4,
#line 581 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5,
#line 581 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6,
#line 581 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7)
#line 581 "term_constr_pass2.m"
{
#line 584 "term_constr_pass2.m"
  while (MR_TRUE)
#line 584 "term_constr_pass2.m"
    {
#line 584 "term_constr_pass2.m"
      /* tailcall optimized into a loop */
#line 584 "term_constr_pass2.m"
      {
#line 584 "term_constr_pass2.m"
        MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 584 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "term_constr_pass2.m"
          {
#line 584 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6;
#line 584 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_5 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4;
#line 584 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_3 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2;
#line 584 "term_constr_pass2.m"
          }
#line 584 "term_constr_pass2.m"
        else
#line 585 "term_constr_pass2.m"
          {
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeInfo_67_67 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_70_70;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edge_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edges_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__HeadVars_22;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Subst0_23;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Subst_24;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints0_25;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints1_26;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints2_27;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constraints3_28;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_37_37;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_39_39;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_40_40;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_41_41;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_42_42;
#line 585 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43;
#line 586 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 586 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 586 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 586 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 586 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 587 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_52_52;
#line 587 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_53_53;
#line 587 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 587 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 587 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 599 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_57_57;
#line 599 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_58_58;
#line 599 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_59_59;
#line 599 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_60_60;
#line 599 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_61_61;
#line 603 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_62_62;
#line 603 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_63_63;
#line 603 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_64_64;
#line 603 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_65_65;
#line 603 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_66_66;

#line 586 "term_constr_pass2.m"
            {
#line 586 "term_constr_pass2.m"
              mercury__set__union_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__V_35_35, transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36);
            }
#line 587 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 587 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 587 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__HeadVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 587 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 587 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 587 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 588 "term_constr_pass2.m"
            {
#line 588 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Subst0_23 = mercury__assoc_list__from_corresponding_lists_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__HeadVars_22, transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4);
            }
#line 589 "term_constr_pass2.m"
            {
#line 589 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_37_37 = mercury__bimap__init_0_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67);
            }
#line 589 "term_constr_pass2.m"
            {
#line 589 "term_constr_pass2.m"
              mercury__bimap__set_from_assoc_list_3_p_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__Subst0_23, transform_hlds__term_constr_pass2__V_37_37, &transform_hlds__term_constr_pass2__Subst_24);
            }
#line 599 "term_constr_pass2.m"
            {
#line 599 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 599 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[4]));
#line 599 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_1));
#line 599 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 599 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_39_39, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Subst_24));
#line 599 "term_constr_pass2.m"
            }
#line 599 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 599 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 599 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 599 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 599 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 599 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 599 "term_constr_pass2.m"
            {
#line 599 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__TypeInfo_67_67, transform_hlds__term_constr_pass2__V_39_39, transform_hlds__term_constr_pass2__V_40_40);
            }
#line 602 "term_constr_pass2.m"
            {
#line 602 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints0_25 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6);
            }
#line 603 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 0)));
#line 603 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 1)));
#line 603 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 2)));
#line 603 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 3)));
#line 603 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 4)));
#line 603 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_17, (MR_Integer) 5)));
#line 603 "term_constr_pass2.m"
            {
#line 603 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints1_26 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__V_41_41);
            }
#line 3845 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeCtorInfo_70_70 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
#line 604 "term_constr_pass2.m"
            {
#line 604 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 604 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[5]));
#line 604 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0_2));
#line 604 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 604 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_42_42, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Subst_24));
#line 604 "term_constr_pass2.m"
            }
#line 604 "term_constr_pass2.m"
            {
#line 604 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints2_27 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__V_42_42, transform_hlds__term_constr_pass2__Constraints1_26);
            }
#line 605 "term_constr_pass2.m"
            {
#line 605 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Constraints3_28 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_70_70, transform_hlds__term_constr_pass2__Constraints0_25, transform_hlds__term_constr_pass2__Constraints2_27);
            }
#line 606 "term_constr_pass2.m"
            {
#line 606 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_pass2__Constraints3_28);
            }
#line 607 "term_constr_pass2.m"
            /* direct tailcall eliminated */
#line 607 "term_constr_pass2.m"
            {
#line 607 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_pass2__Edges_18;
#line 607 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0__tmp_copy_2 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_36_36;
#line 607 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0__tmp_copy_4 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_38_38;
#line 607 "term_constr_pass2.m"
              MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0__tmp_copy_6 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_43_43;

#line 607 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_6 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0__tmp_copy_6;
#line 607 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0_4 = transform_hlds__term_constr_pass2__STATE_VARIABLE_CallVars_0__tmp_copy_4;
#line 607 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0_2 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Zeros_0__tmp_copy_2;
#line 607 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1;
#line 607 "term_constr_pass2.m"
            }
#line 607 "term_constr_pass2.m"
            continue;
#line 585 "term_constr_pass2.m"
          }
#line 584 "term_constr_pass2.m"
      }
#line 584 "term_constr_pass2.m"
      break;
#line 584 "term_constr_pass2.m"
    }
#line 581 "term_constr_pass2.m"
}

#line 554 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(
#line 554 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__StartPPId_4,
#line 554 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycle_5)
#line 554 "term_constr_pass2.m"
{
#line 556 "term_constr_pass2.m"
  {
#line 556 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 556 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__CollapsedCycle_6;
#line 556 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Edges0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_5, (MR_Integer) 1)));
#line 557 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_5, (MR_Integer) 0)));

#line 561 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__Edges0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "term_constr_pass2.m"
      {
#line 560 "term_constr_pass2.m"
        {
#line 560 "term_constr_pass2.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "function \140transform_hlds.term_constr_pass2.collapse_cycle\'/2", (MR_String) "trying to collapse a cycle with no edges");
        }
#line 559 "term_constr_pass2.m"
      }
#line 561 "term_constr_pass2.m"
    else
#line 561 "term_constr_pass2.m"
      {
#line 561 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Edges0_8, (MR_Integer) 1)));
#line 561 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Edges0_8, (MR_Integer) 0)));

#line 561 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 563 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__CollapsedCycle_6 = transform_hlds__term_constr_pass2__V_35_35;
#line 561 "term_constr_pass2.m"
        else
#line 565 "term_constr_pass2.m"
          {
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__StartEdge_14;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Rest_15;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__HeadVars_18;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CallVars0_19;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Zeros0_20;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Polyhedron0_21;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Zeros_22;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CallVars_23;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Polyhedron_24;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__EdgeMap_40;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_41_41;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_51_51;
#line 565 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_52_52;
#line 632 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_53_53;
#line 632 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 632 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 632 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 632 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_57_57;
#line 613 "term_constr_pass2.m"
            MR_Box transform_hlds__term_constr_pass2__conv0_StartEdge_14;
#line 614 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_42_42;
#line 614 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_43_43;
#line 614 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_44_44;
#line 614 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_45_45;
#line 614 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_46_46;
#line 569 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_16_16;
#line 569 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17;

#line 632 "term_constr_pass2.m"
            {
#line 632 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_51_51 = transform_hlds__term_constr_pass2__build_edge_map_1_f_0(transform_hlds__term_constr_pass2__V_34_34);
            }
#line 632 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 0)));
#line 632 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 1)));
#line 632 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 2)));
#line 632 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 3)));
#line 632 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 4)));
#line 632 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_35_35, (MR_Integer) 5)));
#line 632 "term_constr_pass2.m"
            {
#line 632 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__EdgeMap_40 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_51_51, ((MR_Box) (transform_hlds__term_constr_pass2__V_52_52)), ((MR_Box) (transform_hlds__term_constr_pass2__V_35_35)));
            }
#line 613 "term_constr_pass2.m"
            {
#line 613 "term_constr_pass2.m"
              mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__EdgeMap_40, ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4)), &transform_hlds__term_constr_pass2__conv0_StartEdge_14);
            }
#line 613 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__StartEdge_14 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_StartEdge_14);
#line 614 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 0)));
#line 614 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 1)));
#line 614 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 2)));
#line 614 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 3)));
#line 614 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 4)));
#line 614 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 5)));
#line 614 "term_constr_pass2.m"
            {
#line 614 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__order_nodes_2_4_p_0(transform_hlds__term_constr_pass2__StartPPId_4, transform_hlds__term_constr_pass2__V_41_41, transform_hlds__term_constr_pass2__EdgeMap_40, &transform_hlds__term_constr_pass2__Rest_15);
            }
#line 569 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 0)));
#line 569 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 1)));
#line 569 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__HeadVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 2)));
#line 569 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__CallVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 3)));
#line 569 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Zeros0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 4)));
#line 569 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Polyhedron0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__StartEdge_14, (MR_Integer) 5)));
#line 571 "term_constr_pass2.m"
            {
#line 571 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__collapse_cycle_2_7_p_0(transform_hlds__term_constr_pass2__Rest_15, transform_hlds__term_constr_pass2__Zeros0_20, &transform_hlds__term_constr_pass2__Zeros_22, transform_hlds__term_constr_pass2__CallVars0_19, &transform_hlds__term_constr_pass2__CallVars_23, transform_hlds__term_constr_pass2__Polyhedron0_21, &transform_hlds__term_constr_pass2__Polyhedron_24);
            }
#line 573 "term_constr_pass2.m"
            {
#line 573 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__CollapsedCycle_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 573 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4));
#line 573 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__StartPPId_4));
#line 573 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__HeadVars_18));
#line 573 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__CallVars_23));
#line 573 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__Zeros_22));
#line 573 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CollapsedCycle_6, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Polyhedron_24));
#line 573 "term_constr_pass2.m"
            }
#line 565 "term_constr_pass2.m"
          }
#line 561 "term_constr_pass2.m"
      }
#line 556 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__CollapsedCycle_6;
#line 556 "term_constr_pass2.m"
  }
#line 554 "term_constr_pass2.m"
}

#line 543 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1(
#line 543 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 543 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 543 "term_constr_pass2.m"
{
#line 543 "term_constr_pass2.m"
  {
#line 543 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 543 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 543 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_9;

#line 543 "term_constr_pass2.m"
    {
#line 543 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__543__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 543 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_9));
#line 543 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 543 "term_constr_pass2.m"
  }
#line 543 "term_constr_pass2.m"
}

#line 541 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__make_coeffs_2_f_0(
#line 541 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Vars_4,
#line 541 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Coeff_5)
#line 541 "term_constr_pass2.m"
{
#line 543 "term_constr_pass2.m"
  {
#line 543 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 543 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 543 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_7_7;

#line 543 "term_constr_pass2.m"
    {
#line 543 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[3]));
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__make_coeffs_2_f_0_1));
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_7_7, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Coeff_5));
#line 543 "term_constr_pass2.m"
    }
#line 543 "term_constr_pass2.m"
    {
#line 543 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1], (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__V_7_7, transform_hlds__term_constr_pass2__Vars_4);
    }
#line 543 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 543 "term_constr_pass2.m"
  }
#line 541 "term_constr_pass2.m"
}

#line 535 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(
#line 535 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_3,
#line 535 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2)
#line 535 "term_constr_pass2.m"
{
#line 537 "term_constr_pass2.m"
  {
#line 537 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 537 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Nodes_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 537 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 537 "term_constr_pass2.m"
    {
#line 537 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, ((MR_Box) (transform_hlds__term_constr_pass2__PPId_3)), transform_hlds__term_constr_pass2__Nodes_4);
    }
#line 537 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 537 "term_constr_pass2.m"
  }
#line 535 "term_constr_pass2.m"
}

#line 543 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2(
#line 543 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 543 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 543 "term_constr_pass2.m"
{
#line 543 "term_constr_pass2.m"
  {
#line 543 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 543 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 543 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__2_9;

#line 543 "term_constr_pass2.m"
    {
#line 543 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__2_9 = transform_hlds__term_constr_pass2__IntroducedFrom__func__make_coeffs__543__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 543 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__2_9));
#line 543 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 543 "term_constr_pass2.m"
  }
#line 543 "term_constr_pass2.m"
}

#line 517 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_1(
#line 517 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 517 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 517 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 517 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 517 "term_constr_pass2.m"
{
#line 517 "term_constr_pass2.m"
  {
#line 517 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 517 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 517 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__3_24;

#line 517 "term_constr_pass2.m"
    {
#line 517 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__func__strict_decrease_around_loop__517__1_2_f_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__3_24);
    }
#line 517 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 517 "term_constr_pass2.m"
      {
#line 517 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__3_24));
#line 517 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 517 "term_constr_pass2.m"
      }
#line 517 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 517 "term_constr_pass2.m"
  }
#line 517 "term_constr_pass2.m"
}

#line 504 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0(
#line 504 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_5,
#line 504 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_6,
#line 504 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_7,
#line 504 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Loop_8)
#line 504 "term_constr_pass2.m"
{
#line 507 "term_constr_pass2.m"
  {
#line 507 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeInfo_74_74;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_75_75;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__IsActive_9;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Proc_12;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Inputs_13;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadArgs_14;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__CallArgs_15;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Terms_16;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Condition_17;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Label_18;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_25_25;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_26_26;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_27_27;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_28_28;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_29_29;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_30_30;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_31_31;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_33_33;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_34_34;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_35_35;
#line 507 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_84_84;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_48_48;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_49_49;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_50_50;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_51_51;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_52_52;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_53_53;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 521 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__V_57_57;
#line 521 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_58_58;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_59_59;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_60_60;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_61_61;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_62_62;
#line 522 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_63_63;
#line 524 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_64_64;
#line 524 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_65_65;
#line 524 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_66_66;
#line 524 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_67_67;
#line 524 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_68_68;
#line 532 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_69_69;
#line 532 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_70_70;
#line 532 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_71_71;
#line 532 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_72_72;
#line 532 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_73_73;

#line 509 "term_constr_pass2.m"
    {
#line 509 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 509 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 509 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 509 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 509 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 509 "term_constr_pass2.m"
      MR_Word transform_hlds__term_constr_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));

#line 509 "term_constr_pass2.m"
      {
#line 509 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_7, transform_hlds__term_constr_pass2__V_77_77);
      }
#line 509 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 509 "term_constr_pass2.m"
    }
#line 510 "term_constr_pass2.m"
    if (!(transform_hlds__term_constr_pass2__succeeded))
#line 510 "term_constr_pass2.m"
      {
#line 510 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 510 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 510 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 510 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 510 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 510 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));

#line 510 "term_constr_pass2.m"
        {
#line 510 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_7, transform_hlds__term_constr_pass2__V_78_78);
        }
#line 510 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = !(transform_hlds__term_constr_pass2__succeeded);
#line 510 "term_constr_pass2.m"
      }
#line 508 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 513 "term_constr_pass2.m"
      {
#line 513 "term_constr_pass2.m"
        {
#line 513 "term_constr_pass2.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.strict_decrease_around_loop\'/4", (MR_String) "badly formed loop");
        }
#line 513 "term_constr_pass2.m"
      }
#line 508 "term_constr_pass2.m"
    else
#line 515 "term_constr_pass2.m"
      {
#line 515 "term_constr_pass2.m"
      }
#line 517 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__IsActive_9 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[3];
#line 520 "term_constr_pass2.m"
    {
#line 520 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Proc_12 = transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(transform_hlds__term_constr_pass2__AbstractSCC_5, transform_hlds__term_constr_pass2__PPId_7);
    }
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 0)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 1)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 2)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 3)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__Inputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 4)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 5)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 6)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 7)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 8)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 9)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 10)));
#line 521 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_12, (MR_Integer) 11)));
#line 4497 "transform_hlds.term_constr_pass2.c"
    transform_hlds__term_constr_pass2__TypeInfo_74_74 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 4499 "transform_hlds.term_constr_pass2.c"
    transform_hlds__term_constr_pass2__TypeCtorInfo_75_75 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 522 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
#line 522 "term_constr_pass2.m"
    {
#line 522 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadArgs_14 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__TypeCtorInfo_75_75, transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__IsActive_9, transform_hlds__term_constr_pass2__V_25_25, transform_hlds__term_constr_pass2__Inputs_13);
    }
#line 524 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 524 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 524 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 524 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 524 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 524 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
#line 524 "term_constr_pass2.m"
    {
#line 524 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__CallArgs_15 = mercury__list__filter_map_corresponding_3_f_0(transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__TypeCtorInfo_75_75, transform_hlds__term_constr_pass2__TypeInfo_74_74, transform_hlds__term_constr_pass2__IsActive_9, transform_hlds__term_constr_pass2__V_26_26, transform_hlds__term_constr_pass2__Inputs_13);
    }
#line 526 "term_constr_pass2.m"
    {
#line 526 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_29_29 = libs__rat__one_0_f_0();
    }
#line 526 "term_constr_pass2.m"
    {
#line 526 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_28_28 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_pass2__V_29_29);
    }
#line 543 "term_constr_pass2.m"
    {
#line 543 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[3]));
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0_2));
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 543 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__V_28_28));
#line 543 "term_constr_pass2.m"
    }
#line 543 "term_constr_pass2.m"
    {
#line 543 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_27_27 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1], (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__V_84_84, transform_hlds__term_constr_pass2__HeadArgs_14);
    }
#line 526 "term_constr_pass2.m"
    {
#line 526 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_31_31 = libs__rat__one_0_f_0();
    }
#line 526 "term_constr_pass2.m"
    {
#line 526 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_30_30 = transform_hlds__term_constr_pass2__make_coeffs_2_f_0(transform_hlds__term_constr_pass2__CallArgs_15, transform_hlds__term_constr_pass2__V_31_31);
    }
#line 526 "term_constr_pass2.m"
    {
#line 526 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Terms_16 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[0], transform_hlds__term_constr_pass2__V_27_27, transform_hlds__term_constr_pass2__V_30_30);
    }
#line 531 "term_constr_pass2.m"
    {
#line 531 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_34_34 = libs__rat__one_0_f_0();
    }
#line 531 "term_constr_pass2.m"
    {
#line 531 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__V_33_33 = libs__rat__f_minus_1_f_0(transform_hlds__term_constr_pass2__V_34_34);
    }
#line 531 "term_constr_pass2.m"
    {
#line 531 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Condition_17 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_pass2__Terms_16, (MR_Integer) 0, transform_hlds__term_constr_pass2__V_33_33);
    }
#line 532 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 0)));
#line 532 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 1)));
#line 532 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 2)));
#line 532 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 3)));
#line 532 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 4)));
#line 532 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Loop_8, (MR_Integer) 5)));
#line 532 "term_constr_pass2.m"
    {
#line 532 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Label_18 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__V_35_35);
    }
#line 533 "term_constr_pass2.m"
    {
#line 533 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = libs__lp_rational__entailed_3_p_0(transform_hlds__term_constr_pass2__SizeVarSet_6, transform_hlds__term_constr_pass2__Label_18, transform_hlds__term_constr_pass2__Condition_17);
    }
#line 507 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 507 "term_constr_pass2.m"
  }
#line 504 "term_constr_pass2.m"
}

#line 495 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(
#line 495 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 495 "term_constr_pass2.m"
{
#line 495 "term_constr_pass2.m"
  {
#line 495 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 495 "term_constr_pass2.m"
    MR_builtin_longjmp((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0, 1);
#line 495 "term_constr_pass2.m"
  }
#line 495 "term_constr_pass2.m"
}

#line 496 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3(
#line 496 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 496 "term_constr_pass2.m"
{
#line 496 "term_constr_pass2.m"
  {
#line 496 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 496 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21 = ((MR_Word) (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21);
#line 496 "term_constr_pass2.m"
    {
#line 496 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(transform_hlds__term_constr_pass2__env_ptr);
    }
#line 496 "term_constr_pass2.m"
  }
#line 496 "term_constr_pass2.m"
}

#line 495 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_2(
#line 495 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 495 "term_constr_pass2.m"
{
#line 495 "term_constr_pass2.m"
  {
#line 495 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 498 "term_constr_pass2.m"
    {
#line 498 "term_constr_pass2.m"
      (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = transform_hlds__term_constr_pass2__strict_decrease_around_loop_4_p_0((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loop_21);
    }
#line 497 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
#line 497 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
#line 497 "term_constr_pass2.m"
      {
#line 497 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_1(transform_hlds__term_constr_pass2__env_ptr);
      }
#line 495 "term_constr_pass2.m"
  }
#line 495 "term_constr_pass2.m"
}

#line 495 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(
#line 495 "term_constr_pass2.m"
  void * transform_hlds__term_constr_pass2__env_ptr_arg)
#line 495 "term_constr_pass2.m"
{
#line 495 "term_constr_pass2.m"
  {
#line 495 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s * transform_hlds__term_constr_pass2__env_ptr = (struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s *) transform_hlds__term_constr_pass2__env_ptr_arg;

#line 495 "term_constr_pass2.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__commit_0) == 0)
#line 495 "term_constr_pass2.m"
      {
#line 495 "term_constr_pass2.m"
        {
#line 496 "term_constr_pass2.m"
          {
#line 496 "term_constr_pass2.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, &(transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__conv0_Loop_21, (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11, transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_3, transform_hlds__term_constr_pass2__env_ptr);
          }
#line 495 "term_constr_pass2.m"
        }
#line 495 "term_constr_pass2.m"
        (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_FALSE;
#line 495 "term_constr_pass2.m"
      }
#line 495 "term_constr_pass2.m"
    else
#line 495 "term_constr_pass2.m"
      (transform_hlds__term_constr_pass2__env_ptr)->transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
#line 495 "term_constr_pass2.m"
  }
#line 495 "term_constr_pass2.m"
}

#line 481 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(
#line 481 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_1,
#line 481 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SizeVarSet_2,
#line 481 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3)
#line 481 "term_constr_pass2.m"
{
#line 481 "term_constr_pass2.m"
  {
#line 481 "term_constr_pass2.m"
    struct transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0_s transform_hlds__term_constr_pass2__env;

#line 481 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__AbstractSCC_1 = transform_hlds__term_constr_pass2__AbstractSCC_1;
#line 481 "term_constr_pass2.m"
    (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__SizeVarSet_2 = transform_hlds__term_constr_pass2__SizeVarSet_2;
#line 484 "term_constr_pass2.m"
    while (MR_TRUE)
#line 484 "term_constr_pass2.m"
      {
#line 484 "term_constr_pass2.m"
        /* tailcall optimized into a loop */
#line 484 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "term_constr_pass2.m"
          (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
#line 484 "term_constr_pass2.m"
        else
#line 485 "term_constr_pass2.m"
          {
#line 485 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CycleSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 485 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CycleSets_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, (MR_Integer) 1)));

#line 486 "term_constr_pass2.m"
            (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Start_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CycleSet_8, (MR_Integer) 0)));
#line 486 "term_constr_pass2.m"
            (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CycleSet_8, (MR_Integer) 1)));
#line 493 "term_constr_pass2.m"
            if (((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__Loops_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "term_constr_pass2.m"
              (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = MR_TRUE;
#line 493 "term_constr_pass2.m"
            else
#line 495 "term_constr_pass2.m"
              {
#line 495 "term_constr_pass2.m"
                {
#line 495 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_4(&transform_hlds__term_constr_pass2__env);
                }
#line 495 "term_constr_pass2.m"
                (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded = !((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded);
#line 495 "term_constr_pass2.m"
              }
#line 485 "term_constr_pass2.m"
            if ((transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded)
#line 488 "term_constr_pass2.m"
              {
#line 488 "term_constr_pass2.m"
                /* direct tailcall eliminated */
#line 488 "term_constr_pass2.m"
                {
#line 488 "term_constr_pass2.m"
                  MR_Word transform_hlds__term_constr_pass2__HeadVar__3__tmp_copy_3 = transform_hlds__term_constr_pass2__CycleSets_9;

#line 488 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__HeadVar__3__tmp_copy_3;
#line 488 "term_constr_pass2.m"
                }
#line 488 "term_constr_pass2.m"
                continue;
#line 488 "term_constr_pass2.m"
              }
#line 485 "term_constr_pass2.m"
          }
#line 484 "term_constr_pass2.m"
        return (transform_hlds__term_constr_pass2__env).transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0_env_0__succeeded;
#line 484 "term_constr_pass2.m"
        break;
#line 484 "term_constr_pass2.m"
      }
#line 481 "term_constr_pass2.m"
  }
#line 481 "term_constr_pass2.m"
}

#line 448 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__get_proc_from_abstract_scc_2_f_0(
#line 448 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 448 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__PPId_2)
#line 448 "term_constr_pass2.m"
{
#line 451 "term_constr_pass2.m"
  while (MR_TRUE)
#line 451 "term_constr_pass2.m"
    {
#line 451 "term_constr_pass2.m"
      /* tailcall optimized into a loop */
#line 451 "term_constr_pass2.m"
      {
#line 451 "term_constr_pass2.m"
        MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 451 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 451 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "term_constr_pass2.m"
          {
#line 452 "term_constr_pass2.m"
            {
#line 452 "term_constr_pass2.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "function \140transform_hlds.term_constr_pass2.get_proc_from_abstract_scc\'/2", (MR_String) "cannot find proc");
            }
#line 451 "term_constr_pass2.m"
          }
#line 451 "term_constr_pass2.m"
        else
#line 453 "term_constr_pass2.m"
          {
#line 453 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Proc_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 453 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Procs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 0)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 1)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 2)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 3)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 4)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 5)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 6)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 7)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 8)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 9)));
#line 454 "term_constr_pass2.m"
            MR_Integer transform_hlds__term_constr_pass2__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 10)));
#line 454 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_9, (MR_Integer) 11)));

#line 454 "term_constr_pass2.m"
            {
#line 454 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__PPId_2, transform_hlds__term_constr_pass2__V_23_23);
            }
#line 453 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 455 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__Proc_9;
#line 453 "term_constr_pass2.m"
            else
#line 457 "term_constr_pass2.m"
              {
#line 457 "term_constr_pass2.m"
                /* direct tailcall eliminated */
#line 457 "term_constr_pass2.m"
                {
#line 457 "term_constr_pass2.m"
                  MR_Word transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_pass2__Procs_10;

#line 457 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__HeadVar__1_1 = transform_hlds__term_constr_pass2__HeadVar__1__tmp_copy_1;
#line 457 "term_constr_pass2.m"
                }
#line 457 "term_constr_pass2.m"
                continue;
#line 457 "term_constr_pass2.m"
              }
#line 453 "term_constr_pass2.m"
          }
#line 451 "term_constr_pass2.m"
        return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 451 "term_constr_pass2.m"
      }
#line 451 "term_constr_pass2.m"
      break;
#line 451 "term_constr_pass2.m"
    }
#line 448 "term_constr_pass2.m"
}

#line 439 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2(
#line 439 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 439 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 439 "term_constr_pass2.m"
{
#line 439 "term_constr_pass2.m"
  {
#line 439 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 439 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 439 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6;

#line 439 "term_constr_pass2.m"
    {
#line 439 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6 = transform_hlds__term_constr_pass2__collapse_cycle_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 439 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_CollapsedCycle_6));
#line 439 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 439 "term_constr_pass2.m"
  }
#line 439 "term_constr_pass2.m"
}

#line 437 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1(
#line 437 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 437 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 437 "term_constr_pass2.m"
{
#line 437 "term_constr_pass2.m"
  {
#line 437 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 437 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

#line 437 "term_constr_pass2.m"
    {
#line 437 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__cycle_contains_proc_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 437 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 437 "term_constr_pass2.m"
  }
#line 437 "term_constr_pass2.m"
}

#line 433 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_cycles_2_f_0(
#line 433 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 433 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Cycles0_2)
#line 433 "term_constr_pass2.m"
{
#line 435 "term_constr_pass2.m"
  {
#line 435 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 435 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 435 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "term_constr_pass2.m"
    else
#line 436 "term_constr_pass2.m"
      {
#line 436 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_19_19;
#line 436 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Proc_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Procs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__PCycles_9;
#line 436 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycles1_10;
#line 436 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__CycleSets0_11;
#line 436 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__PEdges_12;
#line 436 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_15_15;
#line 436 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_16_16;

#line 437 "term_constr_pass2.m"
        {
#line 437 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 437 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[4]));
#line 437 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_1));
#line 437 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 437 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_15_15, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
#line 437 "term_constr_pass2.m"
        }
#line 5051 "transform_hlds.term_constr_pass2.c"
        transform_hlds__term_constr_pass2__TypeCtorInfo_19_19 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;
#line 437 "term_constr_pass2.m"
        {
#line 437 "term_constr_pass2.m"
          mercury__list__filter_4_p_0(transform_hlds__term_constr_pass2__TypeCtorInfo_19_19, transform_hlds__term_constr_pass2__V_15_15, transform_hlds__term_constr_pass2__Cycles0_2, &transform_hlds__term_constr_pass2__PCycles_9, &transform_hlds__term_constr_pass2__Cycles1_10);
        }
#line 438 "term_constr_pass2.m"
        {
#line 438 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__CycleSets0_11 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(transform_hlds__term_constr_pass2__Procs_6, transform_hlds__term_constr_pass2__Cycles1_10);
        }
#line 439 "term_constr_pass2.m"
        {
#line 439 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 439 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[1]));
#line 439 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_cycles_2_f_0_2));
#line 439 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 439 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_16_16, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
#line 439 "term_constr_pass2.m"
        }
#line 439 "term_constr_pass2.m"
        {
#line 439 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__PEdges_12 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_19_19, (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_16_16, transform_hlds__term_constr_pass2__PCycles_9);
        }
#line 443 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__PEdges_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = transform_hlds__term_constr_pass2__CycleSets0_11;
#line 443 "term_constr_pass2.m"
        else
#line 444 "term_constr_pass2.m"
          {
#line 444 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_17_17;

#line 445 "term_constr_pass2.m"
            {
#line 445 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_17_17, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_5));
#line 445 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_17_17, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__PEdges_12));
#line 445 "term_constr_pass2.m"
            }
#line 445 "term_constr_pass2.m"
            {
#line 445 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_17_17));
#line 445 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__CycleSets0_11));
#line 445 "term_constr_pass2.m"
            }
#line 444 "term_constr_pass2.m"
          }
#line 436 "term_constr_pass2.m"
      }
#line 435 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 435 "term_constr_pass2.m"
  }
#line 433 "term_constr_pass2.m"
}

#line 420 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2(
#line 420 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 420 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 420 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 420 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 420 "term_constr_pass2.m"
{
#line 420 "term_constr_pass2.m"
  {
#line 420 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 420 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20;

#line 420 "term_constr_pass2.m"
    {
#line 420 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20);
    }
#line 420 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20));
#line 420 "term_constr_pass2.m"
  }
#line 420 "term_constr_pass2.m"
}

#line 415 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1(
#line 415 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 415 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 415 "term_constr_pass2.m"
{
#line 415 "term_constr_pass2.m"
  {
#line 415 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 415 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

#line 415 "term_constr_pass2.m"
    {
#line 415 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__search_for_cycles_3__416__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 415 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 415 "term_constr_pass2.m"
  }
#line 415 "term_constr_pass2.m"
}

#line 405 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Start_8,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__SoFar_9,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map_10,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Visited_11,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_12,
#line 405 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19,
#line 405 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20)
#line 405 "term_constr_pass2.m"
{
#line 410 "term_constr_pass2.m"
  {
#line 410 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 410 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 410 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 410 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 410 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 410 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 410 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));

#line 410 "term_constr_pass2.m"
    {
#line 410 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__Start_8, transform_hlds__term_constr_pass2__V_68_68);
    }
#line 410 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 411 "term_constr_pass2.m"
      {
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycle_14;
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_21_21;
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_23_23;
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 411 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));

#line 411 "term_constr_pass2.m"
        {
#line 411 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_21_21, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_22_22));
#line 411 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_21_21, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
#line 411 "term_constr_pass2.m"
        }
#line 411 "term_constr_pass2.m"
        {
#line 411 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_23_23, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_12));
#line 411 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_23_23, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__SoFar_9));
#line 411 "term_constr_pass2.m"
        }
#line 411 "term_constr_pass2.m"
        {
#line 411 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Cycle_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 411 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_14, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_21_21));
#line 411 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Cycle_14, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_23_23));
#line 411 "term_constr_pass2.m"
        }
#line 412 "term_constr_pass2.m"
        {
#line 412 "term_constr_pass2.m"
          mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, ((MR_Box) (transform_hlds__term_constr_pass2__Cycle_14)), transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19, transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20);
        }
#line 411 "term_constr_pass2.m"
      }
#line 410 "term_constr_pass2.m"
    else
#line 414 "term_constr_pass2.m"
      {
#line 414 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__MoreEdges0_15;
#line 414 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 414 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 414 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 414 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 414 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 414 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));
#line 414 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv0_MoreEdges0_15;

#line 414 "term_constr_pass2.m"
        {
#line 414 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map_10, ((MR_Box) (transform_hlds__term_constr_pass2__V_25_25)), &transform_hlds__term_constr_pass2__conv0_MoreEdges0_15);
        }
#line 414 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 414 "term_constr_pass2.m"
          {
#line 414 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__MoreEdges0_15 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_MoreEdges0_15);
#line 414 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 414 "term_constr_pass2.m"
          }
#line 414 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 417 "term_constr_pass2.m"
          {
#line 417 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_63_63;
#line 417 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__NotVisited_16;
#line 417 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__MoreEdges_18;
#line 417 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_28_28;
#line 417 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_30_30;
#line 417 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_31_31;
#line 417 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_32_32;
#line 421 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_54_54;
#line 421 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_55_55;
#line 421 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_56_56;
#line 421 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_57_57;
#line 421 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__V_58_58;
#line 419 "term_constr_pass2.m"
            MR_Box transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20;

#line 415 "term_constr_pass2.m"
            {
#line 415 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__NotVisited_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 415 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[3]));
#line 415 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_1));
#line 415 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 415 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__NotVisited_16, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
#line 415 "term_constr_pass2.m"
            }
#line 5366 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeCtorInfo_63_63 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
#line 418 "term_constr_pass2.m"
            {
#line 418 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__MoreEdges_18 = mercury__list__filter_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_63_63, transform_hlds__term_constr_pass2__NotVisited_16, transform_hlds__term_constr_pass2__MoreEdges0_15);
            }
#line 420 "term_constr_pass2.m"
            {
#line 420 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_30_30, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_12));
#line 420 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_30_30, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__SoFar_9));
#line 420 "term_constr_pass2.m"
            }
#line 421 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 0)));
#line 421 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 1)));
#line 421 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 2)));
#line 421 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 3)));
#line 421 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 4)));
#line 421 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_12, (MR_Integer) 5)));
#line 421 "term_constr_pass2.m"
            {
#line 421 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_31_31, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_32_32));
#line 421 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_31_31, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__Visited_11));
#line 421 "term_constr_pass2.m"
            }
#line 420 "term_constr_pass2.m"
            {
#line 420 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 420 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[0]));
#line 420 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0_2));
#line 420 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 420 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Start_8));
#line 420 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_30_30));
#line 420 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Map_10));
#line 420 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_28_28, 6) = ((MR_Box) (transform_hlds__term_constr_pass2__V_31_31));
#line 420 "term_constr_pass2.m"
            }
#line 419 "term_constr_pass2.m"
            {
#line 419 "term_constr_pass2.m"
              mercury__list__foldl_4_p_0(transform_hlds__term_constr_pass2__TypeCtorInfo_63_63, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__V_28_28, transform_hlds__term_constr_pass2__MoreEdges_18, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19)), &transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20);
            }
#line 419 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Cycles_20);
#line 417 "term_constr_pass2.m"
          }
#line 414 "term_constr_pass2.m"
        else
#line 414 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_20 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Cycles_0_19;
#line 414 "term_constr_pass2.m"
      }
#line 410 "term_constr_pass2.m"
  }
#line 405 "term_constr_pass2.m"
}

#line 402 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1(
#line 402 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 402 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 402 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 402 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 402 "term_constr_pass2.m"
{
#line 402 "term_constr_pass2.m"
  {
#line 402 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 402 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20;

#line 402 "term_constr_pass2.m"
    {
#line 402 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__search_for_cycles_3_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20);
    }
#line 402 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Cycles_20));
#line 402 "term_constr_pass2.m"
  }
#line 402 "term_constr_pass2.m"
}

#line 388 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(
#line 388 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 388 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Map0_2)
#line 388 "term_constr_pass2.m"
{
#line 391 "term_constr_pass2.m"
  {
#line 391 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 391 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 391 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 391 "term_constr_pass2.m"
    else
#line 392 "term_constr_pass2.m"
      {
#line 392 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Start_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 392 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 392 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycles0_9;
#line 392 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Map_10;
#line 392 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Cycles1_11;
#line 392 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__InitialEdges_18;
#line 392 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_19_19;
#line 401 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv0_InitialEdges_18;
#line 402 "term_constr_pass2.m"
        MR_Box transform_hlds__term_constr_pass2__conv2_Cycles0_9;

#line 401 "term_constr_pass2.m"
        {
#line 401 "term_constr_pass2.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map0_2, ((MR_Box) (transform_hlds__term_constr_pass2__Start_5)), &transform_hlds__term_constr_pass2__conv0_InitialEdges_18);
        }
#line 401 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__InitialEdges_18 = ((MR_Word) transform_hlds__term_constr_pass2__conv0_InitialEdges_18);
#line 402 "term_constr_pass2.m"
        {
#line 402 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 402 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_9[0]));
#line 402 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__search_for_cycles_2_f_0_1));
#line 402 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 402 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Start_5));
#line 402 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Map0_2));
#line 402 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_19_19, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "term_constr_pass2.m"
        }
#line 402 "term_constr_pass2.m"
        {
#line 402 "term_constr_pass2.m"
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[2], transform_hlds__term_constr_pass2__V_19_19, transform_hlds__term_constr_pass2__InitialEdges_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_pass2__conv2_Cycles0_9);
        }
#line 402 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__Cycles0_9 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_Cycles0_9);
#line 394 "term_constr_pass2.m"
        {
#line 394 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Map_10 = mercury__map__delete_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map0_2, ((MR_Box) (transform_hlds__term_constr_pass2__Start_5)));
        }
#line 395 "term_constr_pass2.m"
        {
#line 395 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Cycles1_11 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(transform_hlds__term_constr_pass2__Rest_6, transform_hlds__term_constr_pass2__Map_10);
        }
#line 396 "term_constr_pass2.m"
        {
#line 396 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0, transform_hlds__term_constr_pass2__Cycles0_9, transform_hlds__term_constr_pass2__Cycles1_11);
        }
#line 392 "term_constr_pass2.m"
      }
#line 391 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 391 "term_constr_pass2.m"
  }
#line 388 "term_constr_pass2.m"
}

#line 382 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0_1(
#line 382 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 382 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 382 "term_constr_pass2.m"
{
#line 382 "term_constr_pass2.m"
  {
#line 382 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 382 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;

#line 382 "term_constr_pass2.m"
    {
#line 382 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__IntroducedFrom__pred__partition_edges__382__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 382 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 382 "term_constr_pass2.m"
  }
#line 382 "term_constr_pass2.m"
}

#line 376 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__partition_edges_2_f_0(
#line 376 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__1_1,
#line 376 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edges0_2)
#line 376 "term_constr_pass2.m"
{
#line 379 "term_constr_pass2.m"
  {
#line 379 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 379 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__3_3;

#line 379 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "term_constr_pass2.m"
      {
#line 379 "term_constr_pass2.m"
        {
#line 379 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0]);
        }
#line 379 "term_constr_pass2.m"
      }
#line 379 "term_constr_pass2.m"
    else
#line 380 "term_constr_pass2.m"
      {
#line 380 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__ProcId_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 380 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__SCC_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 380 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Map0_9;
#line 380 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__Edges_10;
#line 380 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__V_12_12;

#line 381 "term_constr_pass2.m"
        {
#line 381 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Map0_9 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(transform_hlds__term_constr_pass2__SCC_6, transform_hlds__term_constr_pass2__Edges0_2);
        }
#line 382 "term_constr_pass2.m"
        {
#line 382 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 382 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_4[2]));
#line 382 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__partition_edges_2_f_0_1));
#line 382 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 382 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_12_12, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__ProcId_5));
#line 382 "term_constr_pass2.m"
        }
#line 382 "term_constr_pass2.m"
        {
#line 382 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__Edges_10 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__V_12_12, transform_hlds__term_constr_pass2__Edges0_2);
        }
#line 386 "term_constr_pass2.m"
        {
#line 386 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__HeadVar__3_3 = mercury__map__det_insert_3_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__Map0_9, ((MR_Box) (transform_hlds__term_constr_pass2__ProcId_5)), ((MR_Box) (transform_hlds__term_constr_pass2__Edges_10)));
        }
#line 380 "term_constr_pass2.m"
      }
#line 379 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__3_3;
#line 379 "term_constr_pass2.m"
  }
#line 376 "term_constr_pass2.m"
}

#line 361 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__direct_call_2_p_0(
#line 361 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge_3,
#line 361 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__Cycle_4)
#line 361 "term_constr_pass2.m"
{
#line 363 "term_constr_pass2.m"
  {
#line 363 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_6_6;
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_7_7;
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_8_8;
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_9_9;
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_10_10;
#line 363 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
#line 364 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
#line 364 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
#line 364 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
#line 364 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
#line 365 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_21_21;
#line 365 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_22_22;
#line 365 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_23_23;
#line 365 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_24_24;
#line 365 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_25_25;

#line 364 "term_constr_pass2.m"
    {
#line 364 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data____Unify____abstract_ppid_0_0(transform_hlds__term_constr_pass2__V_5_5, transform_hlds__term_constr_pass2__V_11_11);
    }
#line 363 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 363 "term_constr_pass2.m"
      {
#line 365 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 0)));
#line 365 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 1)));
#line 365 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 2)));
#line 365 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 3)));
#line 365 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 4)));
#line 365 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_3, (MR_Integer) 5)));
#line 365 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 365 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 365 "term_constr_pass2.m"
        {
#line 365 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_6_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_7_7));
#line 365 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_6_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_8_8));
#line 365 "term_constr_pass2.m"
        }
#line 365 "term_constr_pass2.m"
        {
#line 365 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_9_9, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Edge_3));
#line 365 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_10_10));
#line 365 "term_constr_pass2.m"
        }
#line 365 "term_constr_pass2.m"
        {
#line 365 "term_constr_pass2.m"
          MR_Word base;
#line 365 "term_constr_pass2.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__Cycle_4 = base;
#line 365 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_6_6));
#line 365 "term_constr_pass2.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_9_9));
#line 365 "term_constr_pass2.m"
        }
#line 365 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 363 "term_constr_pass2.m"
      }
#line 363 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 363 "term_constr_pass2.m"
  }
#line 361 "term_constr_pass2.m"
}

#line 331 "term_constr_pass2.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_pass2__fix_edges_2_f_0(
#line 331 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Poly_4,
#line 331 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Edge0_5)
#line 331 "term_constr_pass2.m"
{
#line 333 "term_constr_pass2.m"
  {
#line 333 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Edge_6;
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Label0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 5)));
#line 333 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__Label_8;
#line 334 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 0)));
#line 334 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 1)));
#line 334 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 2)));
#line 334 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 3)));
#line 334 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 4)));
#line 336 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_14_14;
#line 336 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_15_15;
#line 336 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_16_16;
#line 336 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_17_17;
#line 336 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_18_18;
#line 336 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__V_19_19;

#line 335 "term_constr_pass2.m"
    {
#line 335 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Label_8 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_pass2__Poly_4, transform_hlds__term_constr_pass2__Label0_7);
    }
#line 336 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 0)));
#line 336 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 1)));
#line 336 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 2)));
#line 336 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 3)));
#line 336 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 4)));
#line 336 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge0_5, (MR_Integer) 5)));
#line 336 "term_constr_pass2.m"
    {
#line 336 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__Edge_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 336 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_14_14));
#line 336 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__V_15_15));
#line 336 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__V_16_16));
#line 336 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__V_17_17));
#line 336 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_18_18));
#line 336 "term_constr_pass2.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_6, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__Label_8));
#line 336 "term_constr_pass2.m"
    }
#line 333 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__Edge_6;
#line 333 "term_constr_pass2.m"
  }
#line 331 "term_constr_pass2.m"
}

#line 307 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_1,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_2,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_3,
#line 307 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_4,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__TopPoly_5,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__HeadVar__6_6,
#line 307 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7,
#line 307 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9,
#line 307 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11,
#line 307 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12,
#line 307 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13,
#line 307 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14)
#line 307 "term_constr_pass2.m"
{
#line 312 "term_constr_pass2.m"
  while (MR_TRUE)
#line 312 "term_constr_pass2.m"
    {
#line 312 "term_constr_pass2.m"
      /* tailcall optimized into a loop */
#line 312 "term_constr_pass2.m"
      {
#line 312 "term_constr_pass2.m"
        MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 312 "term_constr_pass2.m"
        if ((transform_hlds__term_constr_pass2__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "term_constr_pass2.m"
          {
#line 312 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13;
#line 312 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11;
#line 312 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9;
#line 312 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7;
#line 312 "term_constr_pass2.m"
          }
#line 312 "term_constr_pass2.m"
        else
#line 314 "term_constr_pass2.m"
          {
#line 314 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Disj_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__6_6, (MR_Integer) 0)));
#line 314 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Disjs_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__HeadVar__6_6, (MR_Integer) 1)));
#line 314 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Constrs_43;
#line 314 "term_constr_pass2.m"
            MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
#line 314 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
#line 314 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;
#line 314 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;

#line 315 "term_constr_pass2.m"
            {
#line 315 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(transform_hlds__term_constr_pass2__Proc_1, transform_hlds__term_constr_pass2__AbstractSCC_2, transform_hlds__term_constr_pass2__ModuleInfo_3, transform_hlds__term_constr_pass2__MaxMatrixSize_4, transform_hlds__term_constr_pass2__Disj_37, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52, transform_hlds__term_constr_pass2__TopPoly_5, &transform_hlds__term_constr_pass2__Constrs_43, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13, &transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54);
            }
#line 317 "term_constr_pass2.m"
            {
#line 317 "term_constr_pass2.m"
              mercury__list__cons_3_p_0((MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, ((MR_Box) (transform_hlds__term_constr_pass2__Constrs_43)), transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9, &transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55);
            }
#line 327 "term_constr_pass2.m"
#line 327 "term_constr_pass2.m"
            switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54) {
#line 327 "term_constr_pass2.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 327 "term_constr_pass2.m"
              case (MR_Integer) 0:
#line 328 "term_constr_pass2.m"
                {
#line 328 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_8 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
#line 328 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_10 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;
#line 328 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_12 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
#line 328 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_14 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;
#line 328 "term_constr_pass2.m"
                }
#line 327 "term_constr_pass2.m"
                break;
#line 327 "term_constr_pass2.m"
              case (MR_Integer) 1:
#line 324 "term_constr_pass2.m"
                {
#line 324 "term_constr_pass2.m"
                  /* direct tailcall eliminated */
#line 324 "term_constr_pass2.m"
                  {
#line 324 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__HeadVar__6__tmp_copy_6 = transform_hlds__term_constr_pass2__Disjs_38;
#line 324 "term_constr_pass2.m"
                    MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0__tmp_copy_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_52_52;
#line 324 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0__tmp_copy_9 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_55_55;
#line 324 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0__tmp_copy_11 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_53_53;
#line 324 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0__tmp_copy_13 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_54_54;

#line 324 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_13 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0__tmp_copy_13;
#line 324 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_11 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0__tmp_copy_11;
#line 324 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0_9 = transform_hlds__term_constr_pass2__STATE_VARIABLE_DisjConstrs_0__tmp_copy_9;
#line 324 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_7 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0__tmp_copy_7;
#line 324 "term_constr_pass2.m"
                    transform_hlds__term_constr_pass2__HeadVar__6_6 = transform_hlds__term_constr_pass2__HeadVar__6__tmp_copy_6;
#line 324 "term_constr_pass2.m"
                  }
#line 324 "term_constr_pass2.m"
                  continue;
#line 324 "term_constr_pass2.m"
                }
#line 327 "term_constr_pass2.m"
                break;
#line 327 "term_constr_pass2.m"
            }
#line 314 "term_constr_pass2.m"
          }
#line 312 "term_constr_pass2.m"
      }
#line 312 "term_constr_pass2.m"
      break;
#line 312 "term_constr_pass2.m"
    }
#line 307 "term_constr_pass2.m"
}

#line 217 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3(
#line 217 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 217 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 217 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 217 "term_constr_pass2.m"
{
#line 217 "term_constr_pass2.m"
  {
#line 217 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_3;
#line 217 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 217 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv9_HeadVar__5_5;

#line 217 "term_constr_pass2.m"
    {
#line 217 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv9_HeadVar__5_5 = libs__polyhedron__convex_union_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2));
    }
#line 217 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv9_HeadVar__5_5));
#line 217 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_3;
#line 217 "term_constr_pass2.m"
  }
#line 217 "term_constr_pass2.m"
}

#line 209 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2(
#line 209 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 209 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 209 "term_constr_pass2.m"
{
#line 209 "term_constr_pass2.m"
  {
#line 209 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 209 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 209 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv8_Edge_6;

#line 209 "term_constr_pass2.m"
    {
#line 209 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv8_Edge_6 = transform_hlds__term_constr_pass2__fix_edges_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 209 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv8_Edge_6));
#line 209 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 209 "term_constr_pass2.m"
  }
#line 209 "term_constr_pass2.m"
}

#line 231 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1(
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 231 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_4,
#line 231 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_5,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_6,
#line 231 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_7,
#line 231 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_8,
#line 231 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_9)
#line 231 "term_constr_pass2.m"
{
#line 231 "term_constr_pass2.m"
  {
#line 231 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 231 "term_constr_pass2.m"
    MR_Integer transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61;
#line 231 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63;
#line 231 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65;
#line 231 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67;

#line 231 "term_constr_pass2.m"
    {
#line 231 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Integer) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_4), &transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_6), &transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65, ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_8), &transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67);
    }
#line 231 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv3_STATE_VARIABLE_Calls_61));
#line 231 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_constr_pass2__conv2_STATE_VARIABLE_Polyhedron_63));
#line 231 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_7 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_STATE_VARIABLE_Edges_65));
#line 231 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_9 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_STATE_VARIABLE_Continue_67));
#line 231 "term_constr_pass2.m"
  }
#line 231 "term_constr_pass2.m"
}

#line 191 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0(
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Proc_14,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__AbstractSCC_15,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__ModuleInfo_16,
#line 191 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__MaxMatrixSize_17,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__Goal_18,
#line 191 "term_constr_pass2.m"
  MR_Integer transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60,
#line 191 "term_constr_pass2.m"
  MR_Integer * transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62,
#line 191 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64,
#line 191 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65,
#line 191 "term_constr_pass2.m"
  MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66,
#line 191 "term_constr_pass2.m"
  MR_Word * transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67)
#line 191 "term_constr_pass2.m"
{
#line 199 "term_constr_pass2.m"
  {
#line 199 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 199 "term_constr_pass2.m"
#line 199 "term_constr_pass2.m"
    switch (MR_tag((MR_Word) transform_hlds__term_constr_pass2__Goal_18)) {
#line 199 "term_constr_pass2.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 199 "term_constr_pass2.m"
      case (MR_Integer) 0:
#line 199 "term_constr_pass2.m"
        {
#line 199 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 199 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Locals_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));
#line 199 "term_constr_pass2.m"
          MR_Integer transform_hlds__term_constr_pass2__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 199 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 3)));

#line 223 "term_constr_pass2.m"
#line 223 "term_constr_pass2.m"
          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
#line 223 "term_constr_pass2.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 223 "term_constr_pass2.m"
            case (MR_Integer) 0:
#line 224 "term_constr_pass2.m"
              {
#line 224 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
#line 224 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 224 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
#line 224 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 224 "term_constr_pass2.m"
              }
#line 223 "term_constr_pass2.m"
              break;
#line 223 "term_constr_pass2.m"
            case (MR_Integer) 1:
#line 201 "term_constr_pass2.m"
              {
#line 201 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_181_181;
#line 201 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__DisjConstrs0_27;
#line 201 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__Edges1_28;
#line 201 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__Edges2_29;
#line 201 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_91_91;
#line 201 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_96_96;

#line 207 "term_constr_pass2.m"
                {
#line 207 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_91_91 = libs__polyhedron__universe_0_f_0();
                }
#line 206 "term_constr_pass2.m"
                {
#line 206 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__find_edges_in_disj_14_p_0(transform_hlds__term_constr_pass2__Proc_14, transform_hlds__term_constr_pass2__AbstractSCC_15, transform_hlds__term_constr_pass2__ModuleInfo_16, transform_hlds__term_constr_pass2__MaxMatrixSize_17, transform_hlds__term_constr_pass2__V_91_91, transform_hlds__term_constr_pass2__Goals_23, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60, transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__DisjConstrs0_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_constr_pass2__Edges1_28, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66, transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67);
                }
#line 6268 "transform_hlds.term_constr_pass2.c"
                transform_hlds__term_constr_pass2__TypeCtorInfo_181_181 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0;
#line 209 "term_constr_pass2.m"
                {
#line 209 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 209 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_7[0]));
#line 209 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_2));
#line 209 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 209 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_96_96, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62));
#line 209 "term_constr_pass2.m"
                }
#line 209 "term_constr_pass2.m"
                {
#line 209 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__Edges2_29 = mercury__list__map_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__V_96_96, transform_hlds__term_constr_pass2__Edges1_28);
                }
#line 210 "term_constr_pass2.m"
                {
#line 210 "term_constr_pass2.m"
                  mercury__list__append_3_p_1(transform_hlds__term_constr_pass2__TypeCtorInfo_181_181, transform_hlds__term_constr_pass2__Edges2_29, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65);
                }
#line 220 "term_constr_pass2.m"
#line 220 "term_constr_pass2.m"
                switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
#line 220 "term_constr_pass2.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 220 "term_constr_pass2.m"
                  case (MR_Integer) 0:
#line 221 "term_constr_pass2.m"
                    *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 220 "term_constr_pass2.m"
                    break;
#line 220 "term_constr_pass2.m"
                  case (MR_Integer) 1:
#line 212 "term_constr_pass2.m"
                    {
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_184_184;
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__SizeVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__DisjConstrs_31;
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__Constrs2_32;
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_98_98;
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_99_99;
#line 212 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_100_100;
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 213 "term_constr_pass2.m"
                      MR_Integer transform_hlds__term_constr_pass2__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 213 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
#line 216 "term_constr_pass2.m"
                      MR_Box transform_hlds__term_constr_pass2__conv10_Constrs2_32;

#line 214 "term_constr_pass2.m"
                      {
#line 214 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__DisjConstrs_31 = libs__polyhedron__project_all_3_f_0(transform_hlds__term_constr_pass2__SizeVarSet_30, transform_hlds__term_constr_pass2__Locals_25, transform_hlds__term_constr_pass2__DisjConstrs0_27);
                      }
#line 6353 "transform_hlds.term_constr_pass2.c"
                      transform_hlds__term_constr_pass2__TypeCtorInfo_184_184 = (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0;
#line 217 "term_constr_pass2.m"
                      {
#line 217 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 217 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_99_99, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__MaxMatrixSize_17));
#line 217 "term_constr_pass2.m"
                      }
#line 217 "term_constr_pass2.m"
                      {
#line 217 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 217 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_8[0]));
#line 217 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_3));
#line 217 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 217 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__SizeVarSet_30));
#line 217 "term_constr_pass2.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_98_98, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_99_99));
#line 217 "term_constr_pass2.m"
                      }
#line 218 "term_constr_pass2.m"
                      {
#line 218 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__V_100_100 = libs__polyhedron__empty_0_f_0();
                      }
#line 216 "term_constr_pass2.m"
                      {
#line 216 "term_constr_pass2.m"
                        transform_hlds__term_constr_pass2__conv10_Constrs2_32 = mercury__list__foldl_3_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_184_184, transform_hlds__term_constr_pass2__TypeCtorInfo_184_184, transform_hlds__term_constr_pass2__V_98_98, transform_hlds__term_constr_pass2__DisjConstrs_31, ((MR_Box) (transform_hlds__term_constr_pass2__V_100_100)));
                      }
#line 216 "term_constr_pass2.m"
                      transform_hlds__term_constr_pass2__Constrs2_32 = ((MR_Word) transform_hlds__term_constr_pass2__conv10_Constrs2_32);
#line 219 "term_constr_pass2.m"
                      {
#line 219 "term_constr_pass2.m"
                        libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__Constrs2_32, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
                      }
#line 212 "term_constr_pass2.m"
                    }
#line 220 "term_constr_pass2.m"
                    break;
#line 220 "term_constr_pass2.m"
                }
#line 201 "term_constr_pass2.m"
              }
#line 223 "term_constr_pass2.m"
              break;
#line 223 "term_constr_pass2.m"
          }
#line 199 "term_constr_pass2.m"
        }
#line 199 "term_constr_pass2.m"
        break;
#line 199 "term_constr_pass2.m"
      case (MR_Integer) 1:
#line 227 "term_constr_pass2.m"
        {
#line 227 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 227 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Locals_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 227 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));

#line 240 "term_constr_pass2.m"
#line 240 "term_constr_pass2.m"
          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
#line 240 "term_constr_pass2.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 240 "term_constr_pass2.m"
            case (MR_Integer) 0:
#line 241 "term_constr_pass2.m"
              {
#line 241 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
#line 241 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 241 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
#line 241 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 241 "term_constr_pass2.m"
              }
#line 240 "term_constr_pass2.m"
              break;
#line 240 "term_constr_pass2.m"
            case (MR_Integer) 1:
#line 229 "term_constr_pass2.m"
              {
#line 229 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_84_84;
#line 229 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86;
#line 230 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61;
#line 230 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86;
#line 230 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65;
#line 230 "term_constr_pass2.m"
                MR_Box transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67;

#line 231 "term_constr_pass2.m"
                {
#line 231 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 231 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_6[0]));
#line 231 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__find_edges_in_goal_13_p_0_1));
#line 231 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 231 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__Proc_14));
#line 231 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__AbstractSCC_15));
#line 231 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__ModuleInfo_16));
#line 231 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__V_84_84, 6) = ((MR_Box) (transform_hlds__term_constr_pass2__MaxMatrixSize_17));
#line 231 "term_constr_pass2.m"
                }
#line 230 "term_constr_pass2.m"
                {
#line 230 "term_constr_pass2.m"
                  mercury__list__foldl4_10_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_constr_pass2__V_84_84, transform_hlds__term_constr_pass2__Goals_102, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60)), &transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62)), &transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64)), &transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65, ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66)), &transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67);
                }
#line 230 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = ((MR_Integer) transform_hlds__term_constr_pass2__conv7_STATE_VARIABLE_Calls_61);
#line 230 "term_constr_pass2.m"
                transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86 = ((MR_Word) transform_hlds__term_constr_pass2__conv6_STATE_VARIABLE_Polyhedron_86_86);
#line 230 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = ((MR_Word) transform_hlds__term_constr_pass2__conv5_STATE_VARIABLE_Edges_65);
#line 230 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = ((MR_Word) transform_hlds__term_constr_pass2__conv4_STATE_VARIABLE_Continue_67);
#line 237 "term_constr_pass2.m"
#line 237 "term_constr_pass2.m"
                switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
#line 237 "term_constr_pass2.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 237 "term_constr_pass2.m"
                  case (MR_Integer) 0:
#line 238 "term_constr_pass2.m"
                    *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86;
#line 237 "term_constr_pass2.m"
                    break;
#line 237 "term_constr_pass2.m"
                  case (MR_Integer) 1:
#line 235 "term_constr_pass2.m"
                    {
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 235 "term_constr_pass2.m"
                      MR_Integer transform_hlds__term_constr_pass2__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 235 "term_constr_pass2.m"
                      MR_Word transform_hlds__term_constr_pass2__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));

#line 235 "term_constr_pass2.m"
                      {
#line 235 "term_constr_pass2.m"
                        libs__polyhedron__project_4_p_0(transform_hlds__term_constr_pass2__Locals_103, transform_hlds__term_constr_pass2__V_89_89, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_86_86, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
                      }
#line 235 "term_constr_pass2.m"
                    }
#line 237 "term_constr_pass2.m"
                    break;
#line 237 "term_constr_pass2.m"
                }
#line 229 "term_constr_pass2.m"
              }
#line 240 "term_constr_pass2.m"
              break;
#line 240 "term_constr_pass2.m"
          }
#line 227 "term_constr_pass2.m"
        }
#line 199 "term_constr_pass2.m"
        break;
#line 199 "term_constr_pass2.m"
      case (MR_Integer) 2:
#line 244 "term_constr_pass2.m"
        {
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__CallPPId0_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__CallVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__ZeroVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 3)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Edge_41;
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 4)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 5)));
#line 244 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 6)));
#line 247 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 247 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 247 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 247 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 247 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 247 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 247 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 247 "term_constr_pass2.m"
          MR_Integer transform_hlds__term_constr_pass2__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 247 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
#line 254 "term_constr_pass2.m"
          MR_Integer transform_hlds__term_constr_pass2__V_75_75;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_159_159;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_160_160;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_161_161;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_162_162;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_163_163;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_164_164;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_165_165;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_166_166;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_167_167;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_168_168;
#line 254 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_169_169;

#line 247 "term_constr_pass2.m"
          {
#line 247 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Edge_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 247 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_69_69));
#line 247 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__CallPPId0_34));
#line 247 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 2) = ((MR_Box) (transform_hlds__term_constr_pass2__V_128_128));
#line 247 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__CallVars_36));
#line 247 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__V_133_133));
#line 247 "term_constr_pass2.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Edge_41, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62));
#line 247 "term_constr_pass2.m"
          }
#line 249 "term_constr_pass2.m"
          {
#line 249 "term_constr_pass2.m"
            mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, ((MR_Box) (transform_hlds__term_constr_pass2__Edge_41)), transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64, transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65);
          }
#line 253 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = (transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60 + (MR_Integer) 1);
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 0)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 1)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 2)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 3)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 4)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 5)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 6)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 7)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 8)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 9)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 10)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Proc_14, (MR_Integer) 11)));
#line 254 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 > transform_hlds__term_constr_pass2__V_75_75);
#line 6675 "transform_hlds.term_constr_pass2.c"
          if (transform_hlds__term_constr_pass2__succeeded)
#line 6677 "transform_hlds.term_constr_pass2.c"
            {
#line 255 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = (MR_Integer) 0;
#line 260 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 6683 "transform_hlds.term_constr_pass2.c"
            }
#line 6685 "transform_hlds.term_constr_pass2.c"
          else
#line 6687 "transform_hlds.term_constr_pass2.c"
            {
#line 254 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 261 "term_constr_pass2.m"
#line 261 "term_constr_pass2.m"
              switch (*transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67) {
#line 261 "term_constr_pass2.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "term_constr_pass2.m"
                case (MR_Integer) 0:
#line 260 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 261 "term_constr_pass2.m"
                  break;
#line 261 "term_constr_pass2.m"
                case (MR_Integer) 1:
#line 262 "term_constr_pass2.m"
                  {
#line 262 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__CallPPId_42 = (MR_Word) transform_hlds__term_constr_pass2__CallPPId0_34;
#line 262 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__CallProcInfo_44;
#line 262 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__CallTerm2Info_45;
#line 262 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46;
#line 264 "term_constr_pass2.m"
                    MR_Word transform_hlds__term_constr_pass2__V_43_43;

#line 264 "term_constr_pass2.m"
                    {
#line 264 "term_constr_pass2.m"
                      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_pass2__ModuleInfo_16, transform_hlds__term_constr_pass2__CallPPId_42, &transform_hlds__term_constr_pass2__V_43_43, &transform_hlds__term_constr_pass2__CallProcInfo_44);
                    }
#line 265 "term_constr_pass2.m"
                    {
#line 265 "term_constr_pass2.m"
                      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_pass2__CallProcInfo_44, &transform_hlds__term_constr_pass2__CallTerm2Info_45);
                    }
#line 266 "term_constr_pass2.m"
                    {
#line 266 "term_constr_pass2.m"
                      transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_pass2__CallTerm2Info_45);
                    }
#line 271 "term_constr_pass2.m"
                    if ((transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "term_constr_pass2.m"
                      {
#line 269 "term_constr_pass2.m"
                        {
#line 269 "term_constr_pass2.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "proc with no arg size info in pass 2");
#line 269 "term_constr_pass2.m"
                          return;
                        }
#line 268 "term_constr_pass2.m"
                      }
#line 271 "term_constr_pass2.m"
                    else
#line 272 "term_constr_pass2.m"
                      {
#line 272 "term_constr_pass2.m"
                        MR_Word transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__MaybeArgSizeInfo_46, (MR_Integer) 0)));

#line 273 "term_constr_pass2.m"
                        {
#line 273 "term_constr_pass2.m"
                          transform_hlds__term_constr_pass2__succeeded = libs__polyhedron__is_universe_1_p_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47);
                        }
#line 273 "term_constr_pass2.m"
                        if (transform_hlds__term_constr_pass2__succeeded)
#line 273 "term_constr_pass2.m"
                          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 273 "term_constr_pass2.m"
                        else
#line 278 "term_constr_pass2.m"
                          {
#line 278 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__TypeInfo_203_203;
#line 278 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__MaybeCallProc_48;
#line 278 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__CallProc_50;
#line 278 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__HeadVars_51;
#line 278 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Subst_52;
#line 278 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Eqns0_53;
#line 278 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Eqns1_54;
#line 278 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__Eqns_55;
#line 278 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__ArgSizePolyhedron_56;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_170_170;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_171_171;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_172_172;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_173_173;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_174_174;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_175_175;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_176_176;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_177_177;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_178_178;
#line 287 "term_constr_pass2.m"
                            MR_Integer transform_hlds__term_constr_pass2__V_179_179;
#line 287 "term_constr_pass2.m"
                            MR_Word transform_hlds__term_constr_pass2__V_180_180;

#line 278 "term_constr_pass2.m"
                            {
#line 278 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__MaybeCallProc_48 = transform_hlds__term_constr_main_types__term2_info_get_abstract_rep_1_f_0(transform_hlds__term_constr_pass2__CallTerm2Info_45);
                            }
#line 282 "term_constr_pass2.m"
                            if ((transform_hlds__term_constr_pass2__MaybeCallProc_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "term_constr_pass2.m"
                              {
#line 284 "term_constr_pass2.m"
                                {
#line 284 "term_constr_pass2.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_pass2", (MR_String) "predicate \140transform_hlds.term_constr_pass2.find_edges_in_goal\'/13", (MR_String) "no abstract representation for proc");
#line 284 "term_constr_pass2.m"
                                  return;
                                }
#line 283 "term_constr_pass2.m"
                              }
#line 282 "term_constr_pass2.m"
                            else
#line 280 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__CallProc_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__MaybeCallProc_48, (MR_Integer) 0)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 0)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 1)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 2)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__HeadVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 3)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 4)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 5)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 6)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 7)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 8)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 9)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_179_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 10)));
#line 287 "term_constr_pass2.m"
                            transform_hlds__term_constr_pass2__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__CallProc_50, (MR_Integer) 11)));
#line 6852 "transform_hlds.term_constr_pass2.c"
                            transform_hlds__term_constr_pass2__TypeInfo_203_203 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[1];
#line 288 "term_constr_pass2.m"
                            {
#line 288 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Subst_52 = mercury__map__from_corresponding_lists_2_f_0(transform_hlds__term_constr_pass2__TypeInfo_203_203, transform_hlds__term_constr_pass2__TypeInfo_203_203, transform_hlds__term_constr_pass2__HeadVars_51, transform_hlds__term_constr_pass2__CallVars_36);
                            }
#line 289 "term_constr_pass2.m"
                            {
#line 289 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Eqns0_53 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron0_47);
                            }
#line 290 "term_constr_pass2.m"
                            {
#line 290 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Eqns1_54 = transform_hlds__term_constr_util__substitute_size_vars_2_f_0(transform_hlds__term_constr_pass2__Eqns0_53, transform_hlds__term_constr_pass2__Subst_52);
                            }
#line 291 "term_constr_pass2.m"
                            {
#line 291 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__Eqns_55 = libs__lp_rational__set_vars_to_zero_2_f_0(transform_hlds__term_constr_pass2__ZeroVars_37, transform_hlds__term_constr_pass2__Eqns1_54);
                            }
#line 292 "term_constr_pass2.m"
                            {
#line 292 "term_constr_pass2.m"
                              transform_hlds__term_constr_pass2__ArgSizePolyhedron_56 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_pass2__Eqns_55);
                            }
#line 293 "term_constr_pass2.m"
                            {
#line 293 "term_constr_pass2.m"
                              libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__ArgSizePolyhedron_56, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
                            }
#line 278 "term_constr_pass2.m"
                          }
#line 272 "term_constr_pass2.m"
                      }
#line 262 "term_constr_pass2.m"
                  }
#line 261 "term_constr_pass2.m"
                  break;
#line 261 "term_constr_pass2.m"
              }
#line 6894 "transform_hlds.term_constr_pass2.c"
            }
#line 244 "term_constr_pass2.m"
        }
#line 199 "term_constr_pass2.m"
        break;
#line 199 "term_constr_pass2.m"
      case (MR_Integer) 3:
#line 298 "term_constr_pass2.m"
        {
#line 298 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__Primitive_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 0)));
#line 298 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 1)));
#line 298 "term_constr_pass2.m"
          MR_Word transform_hlds__term_constr_pass2__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_pass2__Goal_18, (MR_Integer) 2)));

#line 302 "term_constr_pass2.m"
#line 302 "term_constr_pass2.m"
          switch (transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66) {
#line 302 "term_constr_pass2.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 302 "term_constr_pass2.m"
            case (MR_Integer) 0:
#line 303 "term_constr_pass2.m"
              *transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62;
#line 302 "term_constr_pass2.m"
              break;
#line 302 "term_constr_pass2.m"
            case (MR_Integer) 1:
#line 301 "term_constr_pass2.m"
              {
#line 301 "term_constr_pass2.m"
                libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_pass2__Primitive_57, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_0_62, transform_hlds__term_constr_pass2__STATE_VARIABLE_Polyhedron_63);
              }
#line 302 "term_constr_pass2.m"
              break;
#line 302 "term_constr_pass2.m"
          }
#line 298 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_61 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Calls_0_60;
#line 298 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_65 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Edges_0_64;
#line 298 "term_constr_pass2.m"
          *transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_67 = transform_hlds__term_constr_pass2__STATE_VARIABLE_Continue_0_66;
#line 298 "term_constr_pass2.m"
        }
#line 199 "term_constr_pass2.m"
        break;
#line 199 "term_constr_pass2.m"
    }
#line 199 "term_constr_pass2.m"
  }
#line 191 "term_constr_pass2.m"
}

#line 352 "term_constr_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_3(
#line 352 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 352 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 352 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_2)
#line 352 "term_constr_pass2.m"
{
#line 352 "term_constr_pass2.m"
  {
#line 352 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 352 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 352 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv3_Cycle_4;

#line 352 "term_constr_pass2.m"
    {
#line 352 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__direct_call_2_p_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), &transform_hlds__term_constr_pass2__conv3_Cycle_4);
    }
#line 352 "term_constr_pass2.m"
    if (transform_hlds__term_constr_pass2__succeeded)
#line 352 "term_constr_pass2.m"
      {
#line 352 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv3_Cycle_4));
#line 352 "term_constr_pass2.m"
        transform_hlds__term_constr_pass2__succeeded = MR_TRUE;
#line 352 "term_constr_pass2.m"
      }
#line 352 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__succeeded;
#line 352 "term_constr_pass2.m"
  }
#line 352 "term_constr_pass2.m"
}

#line 177 "term_constr_pass2.m"
static void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2(
#line 177 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 177 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1,
#line 177 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2,
#line 177 "term_constr_pass2.m"
  MR_Box * transform_hlds__term_constr_pass2__wrapper_arg_3)
#line 177 "term_constr_pass2.m"
{
#line 177 "term_constr_pass2.m"
  {
#line 177 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 177 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__3_19;

#line 177 "term_constr_pass2.m"
    {
#line 177 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__IntroducedFrom__pred__label_edges_in_scc__177__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_2), &transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__3_19);
    }
#line 177 "term_constr_pass2.m"
    *transform_hlds__term_constr_pass2__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_pass2__conv1_LambdaHeadVar__3_19));
#line 177 "term_constr_pass2.m"
  }
#line 177 "term_constr_pass2.m"
}

#line 150 "term_constr_pass2.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_1(
#line 150 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__closure_arg,
#line 150 "term_constr_pass2.m"
  MR_Box transform_hlds__term_constr_pass2__wrapper_arg_1)
#line 150 "term_constr_pass2.m"
{
#line 150 "term_constr_pass2.m"
  {
#line 150 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 150 "term_constr_pass2.m"
    MR_Box transform_hlds__term_constr_pass2__closure = transform_hlds__term_constr_pass2__closure_arg;
#line 150 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_23;

#line 150 "term_constr_pass2.m"
    {
#line 150 "term_constr_pass2.m"
      transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_23 = transform_hlds__term_constr_pass2__IntroducedFrom__func__prove_termination_in_scc__150__1_1_f_0(((MR_Word) transform_hlds__term_constr_pass2__wrapper_arg_1));
    }
#line 150 "term_constr_pass2.m"
    transform_hlds__term_constr_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_pass2__conv0_LambdaHeadVar__2_23));
#line 150 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__wrapper_arg_2;
#line 150 "term_constr_pass2.m"
  }
#line 150 "term_constr_pass2.m"
}

#line 44 "term_constr_pass2.m"
void MR_CALL 
transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0(
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
#line 146 "term_constr_pass2.m"
  {
#line 146 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;

#line 146 "term_constr_pass2.m"
    if ((transform_hlds__term_constr_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 146 "term_constr_pass2.m"
      {
#line 146 "term_constr_pass2.m"
        *transform_hlds__term_constr_pass2__HeadVar__4_4 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_3[0];
#line 146 "term_constr_pass2.m"
      }
#line 146 "term_constr_pass2.m"
    else
#line 147 "term_constr_pass2.m"
      {
#line 147 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__AbstractSCC_14;
#line 147 "term_constr_pass2.m"
        MR_Word transform_hlds__term_constr_pass2__SCC_15;

#line 148 "term_constr_pass2.m"
        {
#line 148 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__AbstractSCC_14 = transform_hlds__term_constr_util__get_abstract_scc_2_f_0(transform_hlds__term_constr_pass2__ModuleInfo_3, transform_hlds__term_constr_pass2__HeadVar__2_2);
        }
#line 150 "term_constr_pass2.m"
        {
#line 150 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__SCC_15 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_ppid_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[1], transform_hlds__term_constr_pass2__HeadVar__2_2);
        }
#line 151 "term_constr_pass2.m"
        {
#line 151 "term_constr_pass2.m"
          transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_data__scc_contains_recursion_1_p_0(transform_hlds__term_constr_pass2__AbstractSCC_14);
        }
#line 151 "term_constr_pass2.m"
        if (transform_hlds__term_constr_pass2__succeeded)
#line 152 "term_constr_pass2.m"
          {
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__TypeCtorInfo_14_78;
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__SizeVarSet_17;
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edges_18;
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Cycles_19;
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__CycleSets_20;
#line 152 "term_constr_pass2.m"
            MR_Integer transform_hlds__term_constr_pass2__V_24_24;
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__FindEdges_33;
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Cycles0_71;
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Edges_72;
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__Cycles1_73;
#line 152 "term_constr_pass2.m"
            MR_Word transform_hlds__term_constr_pass2__EdgeMap_82;
#line 183 "term_constr_pass2.m"
            MR_Box transform_hlds__term_constr_pass2__conv2_Edges_18;

#line 152 "term_constr_pass2.m"
            {
#line 152 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__SizeVarSet_17 = transform_hlds__term_constr_data__size_varset_from_abstract_scc_1_f_0(transform_hlds__term_constr_pass2__AbstractSCC_14);
            }
#line 153 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__V_24_24 = (MR_Integer) transform_hlds__term_constr_pass2__Options_1;
#line 177 "term_constr_pass2.m"
            {
#line 177 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__FindEdges_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 177 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 0) = ((MR_Box) (&transform_hlds__term_constr_pass2_scalar_common_5[0]));
#line 177 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 1) = ((MR_Box) (transform_hlds__term_constr_pass2__prove_termination_in_scc_4_p_0_2));
#line 177 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 177 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 3) = ((MR_Box) (transform_hlds__term_constr_pass2__AbstractSCC_14));
#line 177 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 4) = ((MR_Box) (transform_hlds__term_constr_pass2__ModuleInfo_3));
#line 177 "term_constr_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__FindEdges_33, 5) = ((MR_Box) (transform_hlds__term_constr_pass2__V_24_24));
#line 177 "term_constr_pass2.m"
            }
#line 183 "term_constr_pass2.m"
            {
#line 183 "term_constr_pass2.m"
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_1[0], transform_hlds__term_constr_pass2__FindEdges_33, transform_hlds__term_constr_pass2__AbstractSCC_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_pass2__conv2_Edges_18);
            }
#line 183 "term_constr_pass2.m"
            transform_hlds__term_constr_pass2__Edges_18 = ((MR_Word) transform_hlds__term_constr_pass2__conv2_Edges_18);
#line 7167 "transform_hlds.term_constr_pass2.c"
            transform_hlds__term_constr_pass2__TypeCtorInfo_14_78 = (MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_cycle_0;
#line 352 "term_constr_pass2.m"
            {
#line 352 "term_constr_pass2.m"
              mercury__list__filter_map_4_p_0((MR_Word) &transform_hlds__term_constr_pass2__transform_hlds__term_constr_pass2__type_ctor_info_edge_0, transform_hlds__term_constr_pass2__TypeCtorInfo_14_78, (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_2[2], transform_hlds__term_constr_pass2__Edges_18, &transform_hlds__term_constr_pass2__Cycles0_71, &transform_hlds__term_constr_pass2__Edges_72);
            }
#line 370 "term_constr_pass2.m"
            {
#line 370 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__EdgeMap_82 = transform_hlds__term_constr_pass2__partition_edges_2_f_0(transform_hlds__term_constr_pass2__SCC_15, transform_hlds__term_constr_pass2__Edges_72);
            }
#line 371 "term_constr_pass2.m"
            {
#line 371 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Cycles1_73 = transform_hlds__term_constr_pass2__search_for_cycles_2_f_0(transform_hlds__term_constr_pass2__SCC_15, transform_hlds__term_constr_pass2__EdgeMap_82);
            }
#line 356 "term_constr_pass2.m"
            {
#line 356 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__Cycles_19 = mercury__list__f_43_43_2_f_0(transform_hlds__term_constr_pass2__TypeCtorInfo_14_78, transform_hlds__term_constr_pass2__Cycles0_71, transform_hlds__term_constr_pass2__Cycles1_73);
            }
#line 156 "term_constr_pass2.m"
            {
#line 156 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__CycleSets_20 = transform_hlds__term_constr_pass2__partition_cycles_2_f_0(transform_hlds__term_constr_pass2__SCC_15, transform_hlds__term_constr_pass2__Cycles_19);
            }
#line 472 "term_constr_pass2.m"
            {
#line 472 "term_constr_pass2.m"
              transform_hlds__term_constr_pass2__succeeded = transform_hlds__term_constr_pass2__total_sum_decrease_3_p_0(transform_hlds__term_constr_pass2__AbstractSCC_14, transform_hlds__term_constr_pass2__SizeVarSet_17, transform_hlds__term_constr_pass2__CycleSets_20);
            }
#line 472 "term_constr_pass2.m"
            if (transform_hlds__term_constr_pass2__succeeded)
#line 473 "term_constr_pass2.m"
              {
#line 473 "term_constr_pass2.m"
                *transform_hlds__term_constr_pass2__HeadVar__4_4 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_3[0];
#line 473 "term_constr_pass2.m"
              }
#line 472 "term_constr_pass2.m"
            else
#line 477 "term_constr_pass2.m"
              {
#line 477 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__Error_87;
#line 477 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_89_89;
#line 477 "term_constr_pass2.m"
                MR_Word transform_hlds__term_constr_pass2__V_91_91;

#line 477 "term_constr_pass2.m"
                {
#line 477 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_89_89 = mercury__term__context_init_0_f_0();
                }
#line 477 "term_constr_pass2.m"
                {
#line 477 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__Error_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Error_87, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_89_89));
#line 477 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_pass2__Error_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 477 "term_constr_pass2.m"
                }
#line 478 "term_constr_pass2.m"
                {
#line 478 "term_constr_pass2.m"
                  transform_hlds__term_constr_pass2__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_91_91, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__Error_87));
#line 478 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_pass2__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "term_constr_pass2.m"
                }
#line 478 "term_constr_pass2.m"
                {
#line 478 "term_constr_pass2.m"
                  MR_Word base;
#line 478 "term_constr_pass2.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 478 "term_constr_pass2.m"
                  *transform_hlds__term_constr_pass2__HeadVar__4_4 = base;
#line 478 "term_constr_pass2.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_pass2__V_91_91));
#line 478 "term_constr_pass2.m"
                }
#line 477 "term_constr_pass2.m"
              }
#line 152 "term_constr_pass2.m"
          }
#line 151 "term_constr_pass2.m"
        else
#line 159 "term_constr_pass2.m"
          {
#line 159 "term_constr_pass2.m"
            *transform_hlds__term_constr_pass2__HeadVar__4_4 = (MR_Word) &transform_hlds__term_constr_pass2_scalar_common_3[0];
#line 159 "term_constr_pass2.m"
          }
#line 147 "term_constr_pass2.m"
      }
#line 146 "term_constr_pass2.m"
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
#line 87 "term_constr_pass2.m"
  {
#line 87 "term_constr_pass2.m"
    MR_bool transform_hlds__term_constr_pass2__succeeded;
#line 87 "term_constr_pass2.m"
    MR_Word transform_hlds__term_constr_pass2__HeadVar__2_2 = (MR_Word) transform_hlds__term_constr_pass2__MaxSize_3;

#line 87 "term_constr_pass2.m"
    return transform_hlds__term_constr_pass2__HeadVar__2_2;
#line 87 "term_constr_pass2.m"
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
