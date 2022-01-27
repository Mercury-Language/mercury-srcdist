/*
** Automatically generated from `term_constr_fixpoint.m'
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


/* :- module transform_hlds.term_constr_fixpoint. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_fixpoint__init
ENDINIT
*/

#include "transform_hlds.term_constr_fixpoint.mih"


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
#include "string.format.mih"
#include "string.parse_util.mih"



#line 449 "term_constr_fixpoint.m"
struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s {
#line 449 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9;
#line 453 "term_constr_fixpoint.m"
  MR_bool transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded;
#line 453 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19;
#line 453 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20;
#line 470 "term_constr_fixpoint.m"
  jmp_buf transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0;
#line 470 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22;
#line 470 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22;
#line 449 "term_constr_fixpoint.m"
};

#line 35 "term_constr_fixpoint.m"
struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s {
#line 104 "term_constr_fixpoint.m"
  MR_bool transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded;
#line 104 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12;
#line 131 "term_constr_fixpoint.m"
  jmp_buf transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0;
#line 131 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15;
#line 131 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__V_24_24;
#line 131 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15;
#line 35 "term_constr_fixpoint.m"
};


#line 183 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;

#line 186 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0;

#line 189 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 192 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 195 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 198 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 201 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0[6];

#line 204 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0[6];

#line 207 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0;

#line 210 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0[1];

#line 213 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0[1];

#line 216 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0[1];

#line 219 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0[1];

#line 222 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0[2];

#line 225 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0[2];

#line 228 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0;

#line 231 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0[1];

#line 234 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0[1];

#line 237 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0[1];

#line 240 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0[1];

#line 243 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0[3];

#line 246 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0[3];

#line 249 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0;

#line 252 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0[1];

#line 255 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0[1];

#line 258 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0[1];

#line 261 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0[1];

#line 264 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;

#line 267 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001(
#line 270 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 272 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

#line 275 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001(
#line 278 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 280 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 282 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 285 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001(
#line 288 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 290 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

#line 293 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001(
#line 296 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 298 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 300 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 303 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001(
#line 306 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 308 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

#line 311 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001(
#line 314 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 316 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 318 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 321 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001(
#line 324 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 326 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

#line 329 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001(
#line 332 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 334 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 336 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 134 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__134__1_1_f_0(
#line 134 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25);

#line 102 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(
#line 102 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 102 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 102 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3);

#line 102 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(
#line 102 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 102 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

#line 95 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(
#line 95 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 95 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 95 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3);

#line 95 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(
#line 95 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 95 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

#line 267 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(
#line 267 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 267 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 267 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3);

#line 267 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(
#line 267 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 267 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

#line 470 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(
#line 470 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 470 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3(
#line 470 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 470 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(
#line 470 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 470 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(
#line 470 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 449 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(
#line 449 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 449 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
#line 449 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_10,
#line 449 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__OldPoly_11,
#line 449 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__NewPoly_12,
#line 449 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__ResultPoly_13,
#line 449 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__ChangeFlag_14);

#line 385 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(
#line 385 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_6,
#line 385 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
#line 385 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goal_8,
#line 385 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_13,
#line 385 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_14);

#line 381 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1(
#line 381 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 381 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 381 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 381 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 377 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(
#line 377 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goals_6,
#line 377 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
#line 377 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
#line 377 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
#line 377 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);

#line 355 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(
#line 355 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_6,
#line 355 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_7,
#line 355 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8,
#line 355 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
#line 355 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);

#line 313 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1(
#line 313 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 313 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 313 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 313 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 287 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(
#line 287 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_5,
#line 287 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goal_6,
#line 287 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33,
#line 287 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);

#line 277 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_8,
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__PPId_10,
#line 277 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_11,
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVars_12,
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Zeros_13);

#line 159 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(
#line 159 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_7,
#line 159 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Options_8,
#line 159 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_9,
#line 159 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Proc_10,
#line 159 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_0_34,
#line 159 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_35);

#line 150 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(
#line 150 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_4,
#line 150 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_9,
#line 150 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_10);

#line 145 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__or_flags_1_f_0(
#line 145 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1);

#line 119 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9(
#line 119 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 119 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 119 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 119 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 141 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8(
#line 141 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 141 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 141 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 141 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 138 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7(
#line 138 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 138 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 138 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 138 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 134 "term_constr_fixpoint.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6(
#line 134 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 134 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1);

#line 114 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1(
#line 114 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 114 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 114 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 114 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 131 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(
#line 131 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 131 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4(
#line 131 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 131 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(
#line 131 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 131 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(
#line 131 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);


static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_2[1][9];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_4[4][3];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_5[1][6];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_6[1][7];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_7[1][8];




static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_2[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 794 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0
  }
};

#line 802 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 810 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 818 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 826 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 834 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 842 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 852 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0[6] = {
  (MR_String) "tcfi_module_info",
  (MR_String) "tcfi_varset",
  (MR_String) "tcfi_ppid",
  (MR_String) "tcfi_max_matrix_size",
  (MR_String) "tcfi_curr_head_vars",
  (MR_String) "tcfi_zeros"
};

#line 862 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0 = {
  (MR_String) "fixpoint_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0,
  NULL,
  NULL
};

#line 877 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0
};

#line 882 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0
  }
};

#line 891 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0
};

#line 896 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0[1] = {
  (MR_Integer) 0
};

#line 901 "transform_hlds.term_constr_fixpoint.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_fixpoint",
  (MR_String) "fixpoint_info",
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0 },
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0
};

#line 918 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_widening_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 924 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0[2] = {
  (MR_String) "fo_widening",
  (MR_String) "fo_max_size"
};

#line 930 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0 = {
  (MR_String) "fixpoint_options",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0,
  NULL,
  NULL
};

#line 945 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0
};

#line 950 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0
  }
};

#line 959 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0
};

#line 964 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0[1] = {
  (MR_Integer) 0
};

#line 969 "transform_hlds.term_constr_fixpoint.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_fixpoint",
  (MR_String) "fixpoint_options",
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0 },
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0
};

#line 986 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 993 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0[3] = {
  (MR_String) "ii_ppid",
  (MR_String) "ii_arg_size_poly",
  (MR_String) "ii_change_flag"
};

#line 1000 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0 = {
  (MR_String) "iteration_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0,
  NULL,
  NULL
};

#line 1015 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0
};

#line 1020 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0
  }
};

#line 1029 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0
};

#line 1034 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0[1] = {
  (MR_Integer) 0
};

#line 1039 "transform_hlds.term_constr_fixpoint.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_fixpoint",
  (MR_String) "iteration_info",
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0 },
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0
};

#line 1056 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0
  }
};

#line 1064 "transform_hlds.term_constr_fixpoint.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_infos_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_fixpoint",
  (MR_String) "iteration_infos",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1081 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001(
#line 1084 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1086 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
#line 1088 "transform_hlds.term_constr_fixpoint.c"
{
#line 1090 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1092 "transform_hlds.term_constr_fixpoint.c"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 1095 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1097 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
#line 1100 "transform_hlds.term_constr_fixpoint.c"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 1102 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1104 "transform_hlds.term_constr_fixpoint.c"
}

#line 1107 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001(
#line 1110 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1112 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 1114 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 1116 "transform_hlds.term_constr_fixpoint.c"
{
#line 1118 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1120 "transform_hlds.term_constr_fixpoint.c"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

#line 1123 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1125 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
#line 1128 "transform_hlds.term_constr_fixpoint.c"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
#line 1130 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1132 "transform_hlds.term_constr_fixpoint.c"
}

#line 1135 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001(
#line 1138 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1140 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
#line 1142 "transform_hlds.term_constr_fixpoint.c"
{
#line 1144 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1146 "transform_hlds.term_constr_fixpoint.c"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 1149 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1151 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
#line 1154 "transform_hlds.term_constr_fixpoint.c"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 1156 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1158 "transform_hlds.term_constr_fixpoint.c"
}

#line 1161 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001(
#line 1164 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1166 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 1168 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 1170 "transform_hlds.term_constr_fixpoint.c"
{
#line 1172 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1174 "transform_hlds.term_constr_fixpoint.c"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

#line 1177 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1179 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
#line 1182 "transform_hlds.term_constr_fixpoint.c"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
#line 1184 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1186 "transform_hlds.term_constr_fixpoint.c"
}

#line 1189 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001(
#line 1192 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1194 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
#line 1196 "transform_hlds.term_constr_fixpoint.c"
{
#line 1198 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1200 "transform_hlds.term_constr_fixpoint.c"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 1203 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1205 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
#line 1208 "transform_hlds.term_constr_fixpoint.c"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 1210 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1212 "transform_hlds.term_constr_fixpoint.c"
}

#line 1215 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001(
#line 1218 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1220 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 1222 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 1224 "transform_hlds.term_constr_fixpoint.c"
{
#line 1226 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1228 "transform_hlds.term_constr_fixpoint.c"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

#line 1231 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1233 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
#line 1236 "transform_hlds.term_constr_fixpoint.c"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
#line 1238 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1240 "transform_hlds.term_constr_fixpoint.c"
}

#line 1243 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001(
#line 1246 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1248 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
#line 1250 "transform_hlds.term_constr_fixpoint.c"
{
#line 1252 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1254 "transform_hlds.term_constr_fixpoint.c"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 1257 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1259 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
#line 1262 "transform_hlds.term_constr_fixpoint.c"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 1264 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1266 "transform_hlds.term_constr_fixpoint.c"
}

#line 1269 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001(
#line 1272 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1274 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 1276 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 1278 "transform_hlds.term_constr_fixpoint.c"
{
#line 1280 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1282 "transform_hlds.term_constr_fixpoint.c"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

#line 1285 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1287 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
#line 1290 "transform_hlds.term_constr_fixpoint.c"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
#line 1292 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1294 "transform_hlds.term_constr_fixpoint.c"
}

#line 134 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__134__1_1_f_0(
#line 134 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25)
#line 134 "term_constr_fixpoint.m"
{
#line 134 "term_constr_fixpoint.m"
  {
#line 134 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 134 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26;
#line 134 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Identity_19;
#line 136 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_40_40;
#line 136 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_42_42;
#line 136 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_41_41;

#line 135 "term_constr_fixpoint.m"
    {
#line 135 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__Identity_19 = libs__polyhedron__universe_0_f_0();
    }
#line 136 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25, (MR_Integer) 0)));
#line 136 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25, (MR_Integer) 1)));
#line 136 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25, (MR_Integer) 2)));
#line 136 "term_constr_fixpoint.m"
    {
#line 136 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 136 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_40_40));
#line 136 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Identity_19));
#line 136 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26, 2) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_42_42));
#line 136 "term_constr_fixpoint.m"
    }
#line 134 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26;
#line 134 "term_constr_fixpoint.m"
  }
#line 134 "term_constr_fixpoint.m"
}

#line 102 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(
#line 102 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 102 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 102 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
#line 102 "term_constr_fixpoint.m"
{
#line 102 "term_constr_fixpoint.m"
  {
#line 102 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 102 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar1_4 = transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 102 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar2_5 = transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 102 "term_constr_fixpoint.m"
    {
#line 102 "term_constr_fixpoint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], transform_hlds__term_constr_fixpoint__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar2_5)));
#line 102 "term_constr_fixpoint.m"
      return;
    }
#line 102 "term_constr_fixpoint.m"
  }
#line 102 "term_constr_fixpoint.m"
}

#line 102 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(
#line 102 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 102 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
#line 102 "term_constr_fixpoint.m"
{
#line 102 "term_constr_fixpoint.m"
  {
#line 102 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 102 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar1_3 = transform_hlds__term_constr_fixpoint__HeadVar__1_1;
#line 102 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar2_4 = transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 102 "term_constr_fixpoint.m"
    {
#line 102 "term_constr_fixpoint.m"
      return transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar2_4)));
    }
#line 102 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 102 "term_constr_fixpoint.m"
  }
#line 102 "term_constr_fixpoint.m"
}

#line 95 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(
#line 95 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 95 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 95 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
#line 95 "term_constr_fixpoint.m"
{
#line 95 "term_constr_fixpoint.m"
  {
#line 95 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 95 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_12 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 95 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_13 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 95 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_12 == transform_hlds__term_constr_fixpoint__CastY_13);
#line 95 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1435 "transform_hlds.term_constr_fixpoint.c"
      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "term_constr_fixpoint.m"
    else
#line 95 "term_constr_fixpoint.m"
      {
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 0)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 1)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 2)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_10_10;

#line 95 "term_constr_fixpoint.m"
        {
#line 95 "term_constr_fixpoint.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_fixpoint__V_10_10, transform_hlds__term_constr_fixpoint__V_4_4, transform_hlds__term_constr_fixpoint__V_7_7);
        }
#line 1461 "transform_hlds.term_constr_fixpoint.c"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_10_10 == (MR_Integer) 0);
#line 95 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 95 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 95 "term_constr_fixpoint.m"
          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_10_10;
#line 95 "term_constr_fixpoint.m"
        else
#line 95 "term_constr_fixpoint.m"
          {
#line 95 "term_constr_fixpoint.m"
            MR_Word transform_hlds__term_constr_fixpoint__V_11_11;

#line 95 "term_constr_fixpoint.m"
            {
#line 95 "term_constr_fixpoint.m"
              libs__polyhedron____Compare____polyhedron_0_0(&transform_hlds__term_constr_fixpoint__V_11_11, transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_8_8);
            }
#line 1481 "transform_hlds.term_constr_fixpoint.c"
            transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_11_11 == (MR_Integer) 0);
#line 95 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 95 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 95 "term_constr_fixpoint.m"
              *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_11_11;
#line 95 "term_constr_fixpoint.m"
            else
#line 95 "term_constr_fixpoint.m"
              {
#line 95 "term_constr_fixpoint.m"
                MR_Integer transform_hlds__term_constr_fixpoint__V_17_17 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_6_6;
#line 95 "term_constr_fixpoint.m"
                MR_Integer transform_hlds__term_constr_fixpoint__V_18_18 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_9_9;

#line 95 "term_constr_fixpoint.m"
                {
#line 95 "term_constr_fixpoint.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_fixpoint__HeadVar__1_1, transform_hlds__term_constr_fixpoint__V_17_17, transform_hlds__term_constr_fixpoint__V_18_18);
#line 95 "term_constr_fixpoint.m"
                  return;
                }
#line 95 "term_constr_fixpoint.m"
              }
#line 95 "term_constr_fixpoint.m"
          }
#line 95 "term_constr_fixpoint.m"
      }
#line 95 "term_constr_fixpoint.m"
  }
#line 95 "term_constr_fixpoint.m"
}

#line 95 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(
#line 95 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 95 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
#line 95 "term_constr_fixpoint.m"
{
#line 95 "term_constr_fixpoint.m"
  {
#line 95 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 95 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_9 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;
#line 95 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_10 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 95 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_9 == transform_hlds__term_constr_fixpoint__CastY_10);
#line 95 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 95 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = MR_TRUE;
#line 95 "term_constr_fixpoint.m"
    else
#line 95 "term_constr_fixpoint.m"
      {
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 2)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 95 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));

#line 1557 "transform_hlds.term_constr_fixpoint.c"
        {
#line 1559 "transform_hlds.term_constr_fixpoint.c"
          transform_hlds__term_constr_fixpoint__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_fixpoint__V_3_3, transform_hlds__term_constr_fixpoint__V_6_6);
        }
#line 95 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 95 "term_constr_fixpoint.m"
          {
#line 1566 "transform_hlds.term_constr_fixpoint.c"
            {
#line 1568 "transform_hlds.term_constr_fixpoint.c"
              transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_fixpoint__V_4_4, transform_hlds__term_constr_fixpoint__V_7_7);
            }
#line 95 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1573 "transform_hlds.term_constr_fixpoint.c"
              transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_5_5 == transform_hlds__term_constr_fixpoint__V_8_8);
#line 95 "term_constr_fixpoint.m"
          }
#line 95 "term_constr_fixpoint.m"
      }
#line 95 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 95 "term_constr_fixpoint.m"
  }
#line 95 "term_constr_fixpoint.m"
}

#line 78 "term_constr_fixpoint.m"
void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0(
#line 78 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 78 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 78 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
#line 78 "term_constr_fixpoint.m"
{
#line 78 "term_constr_fixpoint.m"
  {
#line 78 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 78 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_9 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 78 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_10 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 78 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_9 == transform_hlds__term_constr_fixpoint__CastY_10);
#line 78 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1610 "transform_hlds.term_constr_fixpoint.c"
      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "term_constr_fixpoint.m"
    else
#line 78 "term_constr_fixpoint.m"
      {
#line 78 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 0)));
#line 78 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8;
#line 78 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_13_13 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_4_4;
#line 78 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_14_14 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_6_6;

#line 78 "term_constr_fixpoint.m"
        {
#line 78 "term_constr_fixpoint.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_fixpoint__V_8_8, transform_hlds__term_constr_fixpoint__V_13_13, transform_hlds__term_constr_fixpoint__V_14_14);
        }
#line 1636 "transform_hlds.term_constr_fixpoint.c"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_8_8 == (MR_Integer) 0);
#line 78 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 78 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 78 "term_constr_fixpoint.m"
          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_8_8;
#line 78 "term_constr_fixpoint.m"
        else
#line 78 "term_constr_fixpoint.m"
          {
#line 78 "term_constr_fixpoint.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_fixpoint__HeadVar__1_1, transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_7_7);
#line 78 "term_constr_fixpoint.m"
            return;
          }
#line 78 "term_constr_fixpoint.m"
      }
#line 78 "term_constr_fixpoint.m"
  }
#line 78 "term_constr_fixpoint.m"
}

#line 78 "term_constr_fixpoint.m"
MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0(
#line 78 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 78 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
#line 78 "term_constr_fixpoint.m"
{
#line 78 "term_constr_fixpoint.m"
  {
#line 78 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 78 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_7 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;
#line 78 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_8 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 78 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_7 == transform_hlds__term_constr_fixpoint__CastY_8);
#line 78 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 78 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = MR_TRUE;
#line 78 "term_constr_fixpoint.m"
    else
#line 78 "term_constr_fixpoint.m"
      {
#line 78 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_10_10 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_3_3;
#line 78 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_11_11 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_5_5;

#line 1701 "transform_hlds.term_constr_fixpoint.c"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_10_10 == transform_hlds__term_constr_fixpoint__V_11_11);
#line 78 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1705 "transform_hlds.term_constr_fixpoint.c"
          transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_4_4 == transform_hlds__term_constr_fixpoint__V_6_6);
#line 78 "term_constr_fixpoint.m"
      }
#line 78 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 78 "term_constr_fixpoint.m"
  }
#line 78 "term_constr_fixpoint.m"
}

#line 267 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(
#line 267 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 267 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 267 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
#line 267 "term_constr_fixpoint.m"
{
#line 267 "term_constr_fixpoint.m"
  {
#line 267 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 267 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_21 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 267 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_22 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 267 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_21 == transform_hlds__term_constr_fixpoint__CastY_22);
#line 267 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1740 "transform_hlds.term_constr_fixpoint.c"
      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = (MR_Integer) 0;
#line 267 "term_constr_fixpoint.m"
    else
#line 267 "term_constr_fixpoint.m"
      {
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));
#line 267 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 3)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 4)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 5)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 0)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 1)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 2)));
#line 267 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 3)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 4)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 5)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_16_16;

#line 267 "term_constr_fixpoint.m"
        {
#line 267 "term_constr_fixpoint.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__term_constr_fixpoint__V_16_16, transform_hlds__term_constr_fixpoint__V_4_4, transform_hlds__term_constr_fixpoint__V_10_10);
        }
#line 1778 "transform_hlds.term_constr_fixpoint.c"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_16_16 == (MR_Integer) 0);
#line 267 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 267 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_16_16;
#line 267 "term_constr_fixpoint.m"
        else
#line 267 "term_constr_fixpoint.m"
          {
#line 267 "term_constr_fixpoint.m"
            MR_Word transform_hlds__term_constr_fixpoint__V_17_17;

#line 267 "term_constr_fixpoint.m"
            {
#line 267 "term_constr_fixpoint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[2], &transform_hlds__term_constr_fixpoint__V_17_17, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_5_5)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_11_11)));
            }
#line 1798 "transform_hlds.term_constr_fixpoint.c"
            transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_17_17 == (MR_Integer) 0);
#line 267 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 267 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
              *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_17_17;
#line 267 "term_constr_fixpoint.m"
            else
#line 267 "term_constr_fixpoint.m"
              {
#line 267 "term_constr_fixpoint.m"
                MR_Word transform_hlds__term_constr_fixpoint__V_18_18;

#line 267 "term_constr_fixpoint.m"
                {
#line 267 "term_constr_fixpoint.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_fixpoint__V_18_18, transform_hlds__term_constr_fixpoint__V_6_6, transform_hlds__term_constr_fixpoint__V_12_12);
                }
#line 1818 "transform_hlds.term_constr_fixpoint.c"
                transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_18_18 == (MR_Integer) 0);
#line 267 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 267 "term_constr_fixpoint.m"
                if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
                  *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_18_18;
#line 267 "term_constr_fixpoint.m"
                else
#line 267 "term_constr_fixpoint.m"
                  {
#line 267 "term_constr_fixpoint.m"
                    MR_Word transform_hlds__term_constr_fixpoint__V_19_19;

#line 267 "term_constr_fixpoint.m"
                    {
#line 267 "term_constr_fixpoint.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_fixpoint__V_19_19, transform_hlds__term_constr_fixpoint__V_7_7, transform_hlds__term_constr_fixpoint__V_13_13);
                    }
#line 1838 "transform_hlds.term_constr_fixpoint.c"
                    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_19_19 == (MR_Integer) 0);
#line 267 "term_constr_fixpoint.m"
                    transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 267 "term_constr_fixpoint.m"
                    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
                      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_19_19;
#line 267 "term_constr_fixpoint.m"
                    else
#line 267 "term_constr_fixpoint.m"
                      {
#line 267 "term_constr_fixpoint.m"
                        MR_Word transform_hlds__term_constr_fixpoint__V_20_20;

#line 267 "term_constr_fixpoint.m"
                        {
#line 267 "term_constr_fixpoint.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[3], &transform_hlds__term_constr_fixpoint__V_20_20, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_8_8)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_14_14)));
                        }
#line 1858 "transform_hlds.term_constr_fixpoint.c"
                        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_20_20 == (MR_Integer) 0);
#line 267 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 267 "term_constr_fixpoint.m"
                        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
                          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_20_20;
#line 267 "term_constr_fixpoint.m"
                        else
#line 267 "term_constr_fixpoint.m"
                          {
#line 267 "term_constr_fixpoint.m"
                            {
#line 267 "term_constr_fixpoint.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[4], transform_hlds__term_constr_fixpoint__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_9_9)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_15_15)));
#line 267 "term_constr_fixpoint.m"
                              return;
                            }
#line 267 "term_constr_fixpoint.m"
                          }
#line 267 "term_constr_fixpoint.m"
                      }
#line 267 "term_constr_fixpoint.m"
                  }
#line 267 "term_constr_fixpoint.m"
              }
#line 267 "term_constr_fixpoint.m"
          }
#line 267 "term_constr_fixpoint.m"
      }
#line 267 "term_constr_fixpoint.m"
  }
#line 267 "term_constr_fixpoint.m"
}

#line 267 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(
#line 267 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 267 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
#line 267 "term_constr_fixpoint.m"
{
#line 267 "term_constr_fixpoint.m"
  {
#line 267 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 267 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_15 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;
#line 267 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_16 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 267 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_15 == transform_hlds__term_constr_fixpoint__CastY_16);
#line 267 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = MR_TRUE;
#line 267 "term_constr_fixpoint.m"
    else
#line 267 "term_constr_fixpoint.m"
      {
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_18_18;
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_20_20;
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_21_21;
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 2)));
#line 267 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 3)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 4)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 5)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));
#line 267 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 3)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 4)));
#line 267 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 5)));

#line 1953 "transform_hlds.term_constr_fixpoint.c"
        {
#line 1955 "transform_hlds.term_constr_fixpoint.c"
          transform_hlds__term_constr_fixpoint__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__term_constr_fixpoint__V_3_3, transform_hlds__term_constr_fixpoint__V_9_9);
        }
#line 267 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
          {
#line 1962 "transform_hlds.term_constr_fixpoint.c"
            transform_hlds__term_constr_fixpoint__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[2];
#line 1964 "transform_hlds.term_constr_fixpoint.c"
            {
#line 1966 "transform_hlds.term_constr_fixpoint.c"
              transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_fixpoint__TypeInfo_18_18, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_4_4)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_10_10)));
            }
#line 267 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
              {
#line 1973 "transform_hlds.term_constr_fixpoint.c"
                {
#line 1975 "transform_hlds.term_constr_fixpoint.c"
                  transform_hlds__term_constr_fixpoint__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_11_11);
                }
#line 267 "term_constr_fixpoint.m"
                if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
                  {
#line 1982 "transform_hlds.term_constr_fixpoint.c"
                    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_6_6 == transform_hlds__term_constr_fixpoint__V_12_12);
#line 267 "term_constr_fixpoint.m"
                    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
                      {
#line 1988 "transform_hlds.term_constr_fixpoint.c"
                        transform_hlds__term_constr_fixpoint__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[3];
#line 1990 "transform_hlds.term_constr_fixpoint.c"
                        {
#line 1992 "transform_hlds.term_constr_fixpoint.c"
                          transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_fixpoint__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_7_7)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_13_13)));
                        }
#line 267 "term_constr_fixpoint.m"
                        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 267 "term_constr_fixpoint.m"
                          {
#line 1999 "transform_hlds.term_constr_fixpoint.c"
                            transform_hlds__term_constr_fixpoint__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[4];
#line 2001 "transform_hlds.term_constr_fixpoint.c"
                            {
#line 2003 "transform_hlds.term_constr_fixpoint.c"
                              return transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_fixpoint__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_8_8)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_14_14)));
                            }
#line 267 "term_constr_fixpoint.m"
                          }
#line 267 "term_constr_fixpoint.m"
                      }
#line 267 "term_constr_fixpoint.m"
                  }
#line 267 "term_constr_fixpoint.m"
              }
#line 267 "term_constr_fixpoint.m"
          }
#line 267 "term_constr_fixpoint.m"
      }
#line 267 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 267 "term_constr_fixpoint.m"
  }
#line 267 "term_constr_fixpoint.m"
}

#line 470 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(
#line 470 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 470 "term_constr_fixpoint.m"
{
#line 470 "term_constr_fixpoint.m"
  {
#line 470 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 470 "term_constr_fixpoint.m"
    MR_builtin_longjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0, 1);
#line 470 "term_constr_fixpoint.m"
  }
#line 470 "term_constr_fixpoint.m"
}

#line 470 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3(
#line 470 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 470 "term_constr_fixpoint.m"
{
#line 470 "term_constr_fixpoint.m"
  {
#line 470 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 470 "term_constr_fixpoint.m"
    (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22 = ((MR_Word) (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22);
#line 470 "term_constr_fixpoint.m"
    {
#line 470 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(transform_hlds__term_constr_fixpoint__env_ptr);
#line 470 "term_constr_fixpoint.m"
      return;
    }
#line 470 "term_constr_fixpoint.m"
  }
#line 470 "term_constr_fixpoint.m"
}

#line 470 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(
#line 470 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 470 "term_constr_fixpoint.m"
{
#line 470 "term_constr_fixpoint.m"
  {
#line 470 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 471 "term_constr_fixpoint.m"
    {
#line 471 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = libs__lp_rational__entailed_3_p_0((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22);
    }
#line 471 "term_constr_fixpoint.m"
    (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = !((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded);
#line 471 "term_constr_fixpoint.m"
    if ((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
#line 471 "term_constr_fixpoint.m"
      {
#line 471 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(transform_hlds__term_constr_fixpoint__env_ptr);
#line 471 "term_constr_fixpoint.m"
        return;
      }
#line 470 "term_constr_fixpoint.m"
  }
#line 470 "term_constr_fixpoint.m"
}

#line 470 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(
#line 470 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 470 "term_constr_fixpoint.m"
{
#line 470 "term_constr_fixpoint.m"
  {
#line 470 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 470 "term_constr_fixpoint.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0) == 0)
#line 470 "term_constr_fixpoint.m"
      {
#line 470 "term_constr_fixpoint.m"
        {
#line 470 "term_constr_fixpoint.m"
          {
#line 470 "term_constr_fixpoint.m"
            mercury__list__member_2_p_1((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, &(transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20, transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3, transform_hlds__term_constr_fixpoint__env_ptr);
          }
#line 470 "term_constr_fixpoint.m"
        }
#line 470 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = MR_FALSE;
#line 470 "term_constr_fixpoint.m"
      }
#line 470 "term_constr_fixpoint.m"
    else
#line 470 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = MR_TRUE;
#line 470 "term_constr_fixpoint.m"
  }
#line 470 "term_constr_fixpoint.m"
}

#line 449 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(
#line 449 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 449 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
#line 449 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_10,
#line 449 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__OldPoly_11,
#line 449 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__NewPoly_12,
#line 449 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__ResultPoly_13,
#line 449 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__ChangeFlag_14)
#line 449 "term_constr_fixpoint.m"
{
#line 449 "term_constr_fixpoint.m"
  {
#line 449 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s transform_hlds__term_constr_fixpoint__env;

#line 449 "term_constr_fixpoint.m"
    (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9 = transform_hlds__term_constr_fixpoint__SizeVarSet_9;
#line 453 "term_constr_fixpoint.m"
    {
#line 453 "term_constr_fixpoint.m"
      MR_Integer transform_hlds__term_constr_fixpoint__Threshold_8 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;

#line 454 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = (transform_hlds__term_constr_fixpoint__Iteration_10 > transform_hlds__term_constr_fixpoint__Threshold_8);
#line 456 "term_constr_fixpoint.m"
      if ((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
#line 455 "term_constr_fixpoint.m"
        {
#line 455 "term_constr_fixpoint.m"
          *transform_hlds__term_constr_fixpoint__ResultPoly_13 = libs__polyhedron__widen_3_f_0(transform_hlds__term_constr_fixpoint__OldPoly_11, transform_hlds__term_constr_fixpoint__NewPoly_12, (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9);
        }
#line 456 "term_constr_fixpoint.m"
      else
#line 457 "term_constr_fixpoint.m"
        *transform_hlds__term_constr_fixpoint__ResultPoly_13 = transform_hlds__term_constr_fixpoint__NewPoly_12;
#line 465 "term_constr_fixpoint.m"
      {
#line 465 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_fixpoint__NewPoly_12);
      }
#line 467 "term_constr_fixpoint.m"
      {
#line 467 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_fixpoint__OldPoly_11);
      }
#line 470 "term_constr_fixpoint.m"
      {
#line 470 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(&transform_hlds__term_constr_fixpoint__env);
      }
#line 475 "term_constr_fixpoint.m"
      if ((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
#line 474 "term_constr_fixpoint.m"
        *transform_hlds__term_constr_fixpoint__ChangeFlag_14 = (MR_Integer) 1;
#line 475 "term_constr_fixpoint.m"
      else
#line 476 "term_constr_fixpoint.m"
        *transform_hlds__term_constr_fixpoint__ChangeFlag_14 = (MR_Integer) 0;
#line 453 "term_constr_fixpoint.m"
    }
#line 449 "term_constr_fixpoint.m"
  }
#line 449 "term_constr_fixpoint.m"
}

#line 385 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(
#line 385 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_6,
#line 385 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
#line 385 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goal_8,
#line 385 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_13,
#line 385 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_14)
#line 385 "term_constr_fixpoint.m"
{
#line 388 "term_constr_fixpoint.m"
  {
#line 388 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 388 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 1)));
#line 388 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_11;
#line 388 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Polyhedron1_12;
#line 388 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_15_15;
#line 388 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_16_16;
#line 388 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__V_18_18;
#line 389 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 0)));
#line 389 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 2)));
#line 389 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 3)));
#line 389 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 4)));
#line 389 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 5)));
#line 392 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_24_24;
#line 392 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_25_25;
#line 392 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_26_26;
#line 392 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_27_27;
#line 392 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_28_28;

#line 390 "term_constr_fixpoint.m"
    {
#line 390 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_15_15 = libs__polyhedron__universe_0_f_0();
    }
#line 390 "term_constr_fixpoint.m"
    {
#line 390 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(transform_hlds__term_constr_fixpoint__Info_6, transform_hlds__term_constr_fixpoint__Goal_8, transform_hlds__term_constr_fixpoint__V_15_15, &transform_hlds__term_constr_fixpoint__Polyhedron0_11);
    }
#line 391 "term_constr_fixpoint.m"
    {
#line 391 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__Polyhedron1_12 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_7, transform_hlds__term_constr_fixpoint__SizeVarSet_10, transform_hlds__term_constr_fixpoint__Polyhedron0_11);
    }
#line 392 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 0)));
#line 392 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 1)));
#line 392 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 2)));
#line 392 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 3)));
#line 392 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 4)));
#line 392 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 5)));
#line 392 "term_constr_fixpoint.m"
    {
#line 392 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 392 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_16_16, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_18_18));
#line 392 "term_constr_fixpoint.m"
    }
#line 392 "term_constr_fixpoint.m"
    {
#line 392 "term_constr_fixpoint.m"
      libs__polyhedron__convex_union_5_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_10, transform_hlds__term_constr_fixpoint__V_16_16, transform_hlds__term_constr_fixpoint__Polyhedron1_12, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_13, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_14);
#line 392 "term_constr_fixpoint.m"
      return;
    }
#line 388 "term_constr_fixpoint.m"
  }
#line 385 "term_constr_fixpoint.m"
}

#line 381 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1(
#line 381 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 381 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 381 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 381 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 381 "term_constr_fixpoint.m"
{
#line 381 "term_constr_fixpoint.m"
  {
#line 381 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 381 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_14;

#line 381 "term_constr_fixpoint.m"
    {
#line 381 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_14);
    }
#line 381 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_14));
#line 381 "term_constr_fixpoint.m"
  }
#line 381 "term_constr_fixpoint.m"
}

#line 377 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(
#line 377 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goals_6,
#line 377 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
#line 377 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
#line 377 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
#line 377 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12)
#line 377 "term_constr_fixpoint.m"
{
#line 380 "term_constr_fixpoint.m"
  {
#line 380 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 380 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ConvexUnion_10;
#line 380 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_13_13;
#line 380 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_14_14;
#line 381 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__conv1_ConvexUnion_10;

#line 381 "term_constr_fixpoint.m"
    {
#line 381 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 381 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_7[0]));
#line 381 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1));
#line 381 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 381 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Info_8));
#line 381 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Locals_7));
#line 381 "term_constr_fixpoint.m"
    }
#line 382 "term_constr_fixpoint.m"
    {
#line 382 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_14_14 = libs__polyhedron__empty_0_f_0();
    }
#line 381 "term_constr_fixpoint.m"
    {
#line 381 "term_constr_fixpoint.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, transform_hlds__term_constr_fixpoint__V_13_13, transform_hlds__term_constr_fixpoint__Goals_6, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_14_14)), &transform_hlds__term_constr_fixpoint__conv1_ConvexUnion_10);
    }
#line 381 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__ConvexUnion_10 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv1_ConvexUnion_10);
#line 383 "term_constr_fixpoint.m"
    {
#line 383 "term_constr_fixpoint.m"
      libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__ConvexUnion_10, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);
#line 383 "term_constr_fixpoint.m"
      return;
    }
#line 380 "term_constr_fixpoint.m"
  }
#line 377 "term_constr_fixpoint.m"
}

#line 355 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(
#line 355 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_6,
#line 355 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_7,
#line 355 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8,
#line 355 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
#line 355 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12)
#line 355 "term_constr_fixpoint.m"
{
#line 358 "term_constr_fixpoint.m"
  {
#line 358 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 358 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron_10;

#line 359 "term_constr_fixpoint.m"
    {
#line 359 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8);
    }
#line 361 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 360 "term_constr_fixpoint.m"
      {
#line 360 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__GoalPolyhedron_10 = libs__polyhedron__empty_0_f_0();
      }
#line 361 "term_constr_fixpoint.m"
    else
#line 362 "term_constr_fixpoint.m"
      {
#line 362 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 1)));
#line 362 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 0)));
#line 362 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 2)));
#line 362 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 3)));
#line 362 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 4)));
#line 362 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 5)));

#line 362 "term_constr_fixpoint.m"
        {
#line 362 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__GoalPolyhedron_10 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_6, transform_hlds__term_constr_fixpoint__V_13_13, transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8);
        }
#line 362 "term_constr_fixpoint.m"
      }
#line 365 "term_constr_fixpoint.m"
    {
#line 365 "term_constr_fixpoint.m"
      libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron_10, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);
#line 365 "term_constr_fixpoint.m"
      return;
    }
#line 358 "term_constr_fixpoint.m"
  }
#line 355 "term_constr_fixpoint.m"
}

#line 313 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1(
#line 313 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 313 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 313 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 313 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 313 "term_constr_fixpoint.m"
{
#line 313 "term_constr_fixpoint.m"
  {
#line 313 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 313 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_34;

#line 313 "term_constr_fixpoint.m"
    {
#line 313 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_34);
    }
#line 313 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_34));
#line 313 "term_constr_fixpoint.m"
  }
#line 313 "term_constr_fixpoint.m"
}

#line 287 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(
#line 287 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_5,
#line 287 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goal_6,
#line 287 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33,
#line 287 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34)
#line 287 "term_constr_fixpoint.m"
{
#line 292 "term_constr_fixpoint.m"
  {
#line 292 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 292 "term_constr_fixpoint.m"
#line 292 "term_constr_fixpoint.m"
    switch (MR_tag((MR_Word) transform_hlds__term_constr_fixpoint__Goal_6)) {
#line 292 "term_constr_fixpoint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 292 "term_constr_fixpoint.m"
      case (MR_Integer) 0:
#line 292 "term_constr_fixpoint.m"
        {
#line 292 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
#line 292 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Locals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));
#line 292 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__PriorConstraints_12;
#line 292 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_13;
#line 292 "term_constr_fixpoint.m"
          MR_Integer transform_hlds__term_constr_fixpoint___Size_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
#line 292 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 3)));

#line 306 "term_constr_fixpoint.m"
          {
#line 306 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__PriorConstraints_12 = libs__polyhedron__universe_0_f_0();
          }
#line 307 "term_constr_fixpoint.m"
          {
#line 307 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(transform_hlds__term_constr_fixpoint__Goals_8, transform_hlds__term_constr_fixpoint__Locals_10, transform_hlds__term_constr_fixpoint__Info_5, transform_hlds__term_constr_fixpoint__PriorConstraints_12, &transform_hlds__term_constr_fixpoint__Polyhedron0_13);
          }
#line 309 "term_constr_fixpoint.m"
          {
#line 309 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(transform_hlds__term_constr_fixpoint__Locals_10, transform_hlds__term_constr_fixpoint__Info_5, transform_hlds__term_constr_fixpoint__Polyhedron0_13, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
#line 309 "term_constr_fixpoint.m"
            return;
          }
#line 292 "term_constr_fixpoint.m"
        }
#line 292 "term_constr_fixpoint.m"
        break;
#line 292 "term_constr_fixpoint.m"
      case (MR_Integer) 1:
#line 311 "term_constr_fixpoint.m"
        {
#line 311 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_40_40;
#line 311 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_41_41;
#line 311 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Goals_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
#line 311 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Locals_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
#line 311 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_46;
#line 311 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron_85;
#line 311 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));
#line 312 "term_constr_fixpoint.m"
          MR_Box transform_hlds__term_constr_fixpoint__conv1_Polyhedron0_46;

#line 313 "term_constr_fixpoint.m"
          {
#line 313 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 313 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_6[0]));
#line 313 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1));
#line 313 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 313 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Info_5));
#line 313 "term_constr_fixpoint.m"
          }
#line 313 "term_constr_fixpoint.m"
          {
#line 313 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_41_41 = libs__polyhedron__universe_0_f_0();
          }
#line 312 "term_constr_fixpoint.m"
          {
#line 312 "term_constr_fixpoint.m"
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, transform_hlds__term_constr_fixpoint__V_40_40, transform_hlds__term_constr_fixpoint__Goals_44, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_41_41)), &transform_hlds__term_constr_fixpoint__conv1_Polyhedron0_46);
          }
#line 312 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__Polyhedron0_46 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv1_Polyhedron0_46);
#line 359 "term_constr_fixpoint.m"
          {
#line 359 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__Polyhedron0_46);
          }
#line 361 "term_constr_fixpoint.m"
          if (transform_hlds__term_constr_fixpoint__succeeded)
#line 360 "term_constr_fixpoint.m"
            {
#line 360 "term_constr_fixpoint.m"
              transform_hlds__term_constr_fixpoint__GoalPolyhedron_85 = libs__polyhedron__empty_0_f_0();
            }
#line 361 "term_constr_fixpoint.m"
          else
#line 362 "term_constr_fixpoint.m"
            {
#line 362 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 1)));
#line 362 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 0)));
#line 362 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 2)));
#line 362 "term_constr_fixpoint.m"
              MR_Integer transform_hlds__term_constr_fixpoint__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 3)));
#line 362 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 4)));
#line 362 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 5)));

#line 362 "term_constr_fixpoint.m"
              {
#line 362 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__GoalPolyhedron_85 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_45, transform_hlds__term_constr_fixpoint__V_86_86, transform_hlds__term_constr_fixpoint__Polyhedron0_46);
              }
#line 362 "term_constr_fixpoint.m"
            }
#line 365 "term_constr_fixpoint.m"
          {
#line 365 "term_constr_fixpoint.m"
            libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron_85, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
#line 365 "term_constr_fixpoint.m"
            return;
          }
#line 311 "term_constr_fixpoint.m"
        }
#line 292 "term_constr_fixpoint.m"
        break;
#line 292 "term_constr_fixpoint.m"
      case (MR_Integer) 2:
#line 318 "term_constr_fixpoint.m"
        {
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallPPId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallZeros_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 3)));
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallArgsPoly_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 6)));
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallPPId_21 = (MR_Word) transform_hlds__term_constr_fixpoint__CallPPId0_15;
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallProcInfo_23;
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallTerm2Info_24;
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25;
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 0)));
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Locals_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 4)));
#line 317 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
#line 317 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 5)));
#line 320 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 1)));
#line 320 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 2)));
#line 320 "term_constr_fixpoint.m"
          MR_Integer transform_hlds__term_constr_fixpoint__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 3)));
#line 320 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 4)));
#line 320 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 5)));
#line 320 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_22_22;

#line 320 "term_constr_fixpoint.m"
          {
#line 320 "term_constr_fixpoint.m"
            hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_fixpoint__V_36_36, transform_hlds__term_constr_fixpoint__CallPPId_21, &transform_hlds__term_constr_fixpoint__V_22_22, &transform_hlds__term_constr_fixpoint__CallProcInfo_23);
          }
#line 322 "term_constr_fixpoint.m"
          {
#line 322 "term_constr_fixpoint.m"
            hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_fixpoint__CallProcInfo_23, &transform_hlds__term_constr_fixpoint__CallTerm2Info_24);
          }
#line 323 "term_constr_fixpoint.m"
          {
#line 323 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_fixpoint__CallTerm2Info_24);
          }
#line 327 "term_constr_fixpoint.m"
          if ((transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "term_constr_fixpoint.m"
            {
#line 326 "term_constr_fixpoint.m"
              *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34 = libs__polyhedron__empty_0_f_0();
            }
#line 327 "term_constr_fixpoint.m"
          else
#line 328 "term_constr_fixpoint.m"
            {
#line 328 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__SizeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25, (MR_Integer) 0)));

#line 329 "term_constr_fixpoint.m"
              {
#line 329 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__SizeInfo_26);
              }
#line 331 "term_constr_fixpoint.m"
              if (transform_hlds__term_constr_fixpoint__succeeded)
#line 330 "term_constr_fixpoint.m"
                {
#line 330 "term_constr_fixpoint.m"
                  *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34 = libs__polyhedron__empty_0_f_0();
                }
#line 331 "term_constr_fixpoint.m"
              else
#line 334 "term_constr_fixpoint.m"
                {
#line 331 "term_constr_fixpoint.m"
                  {
#line 331 "term_constr_fixpoint.m"
                    transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_universe_1_p_0(transform_hlds__term_constr_fixpoint__SizeInfo_26);
                  }
#line 334 "term_constr_fixpoint.m"
                  if (transform_hlds__term_constr_fixpoint__succeeded)
#line 334 "term_constr_fixpoint.m"
                    *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33;
#line 334 "term_constr_fixpoint.m"
                  else
#line 335 "term_constr_fixpoint.m"
                    {
#line 335 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__HeadVars_27;
#line 335 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__SubstMap_28;
#line 335 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__Polyhedron1_29;
#line 335 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__Polyhedron2_30;
#line 335 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_47;
#line 335 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron_71;

#line 335 "term_constr_fixpoint.m"
                      {
#line 335 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__HeadVars_27 = transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(transform_hlds__term_constr_fixpoint__CallTerm2Info_24);
                      }
#line 336 "term_constr_fixpoint.m"
                      {
#line 336 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__SubstMap_28 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(transform_hlds__term_constr_fixpoint__CallVars_17, transform_hlds__term_constr_fixpoint__HeadVars_27);
                      }
#line 337 "term_constr_fixpoint.m"
                      {
#line 337 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__Polyhedron0_47 = libs__polyhedron__substitute_vars_2_f_0(transform_hlds__term_constr_fixpoint__SubstMap_28, transform_hlds__term_constr_fixpoint__SizeInfo_26);
                      }
#line 339 "term_constr_fixpoint.m"
                      {
#line 339 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__Polyhedron1_29 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_fixpoint__Polyhedron0_47, transform_hlds__term_constr_fixpoint__CallArgsPoly_20);
                      }
#line 343 "term_constr_fixpoint.m"
                      {
#line 343 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__Polyhedron2_30 = libs__polyhedron__zero_vars_2_f_0(transform_hlds__term_constr_fixpoint__CallZeros_18, transform_hlds__term_constr_fixpoint__Polyhedron1_29);
                      }
#line 359 "term_constr_fixpoint.m"
                      {
#line 359 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__Polyhedron2_30);
                      }
#line 361 "term_constr_fixpoint.m"
                      if (transform_hlds__term_constr_fixpoint__succeeded)
#line 360 "term_constr_fixpoint.m"
                        {
#line 360 "term_constr_fixpoint.m"
                          transform_hlds__term_constr_fixpoint__GoalPolyhedron_71 = libs__polyhedron__empty_0_f_0();
                        }
#line 361 "term_constr_fixpoint.m"
                      else
#line 362 "term_constr_fixpoint.m"
                        {
#line 362 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 1)));
#line 362 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 0)));
#line 362 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 2)));
#line 362 "term_constr_fixpoint.m"
                          MR_Integer transform_hlds__term_constr_fixpoint__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 3)));
#line 362 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 4)));
#line 362 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 5)));

#line 362 "term_constr_fixpoint.m"
                          {
#line 362 "term_constr_fixpoint.m"
                            transform_hlds__term_constr_fixpoint__GoalPolyhedron_71 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_52, transform_hlds__term_constr_fixpoint__V_72_72, transform_hlds__term_constr_fixpoint__Polyhedron2_30);
                          }
#line 362 "term_constr_fixpoint.m"
                        }
#line 365 "term_constr_fixpoint.m"
                      {
#line 365 "term_constr_fixpoint.m"
                        libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron_71, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
#line 365 "term_constr_fixpoint.m"
                        return;
                      }
#line 335 "term_constr_fixpoint.m"
                    }
#line 334 "term_constr_fixpoint.m"
                }
#line 328 "term_constr_fixpoint.m"
            }
#line 318 "term_constr_fixpoint.m"
        }
#line 292 "term_constr_fixpoint.m"
        break;
#line 292 "term_constr_fixpoint.m"
      case (MR_Integer) 3:
#line 349 "term_constr_fixpoint.m"
        {
#line 349 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Poly_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
#line 349 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Locals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
#line 349 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));

#line 350 "term_constr_fixpoint.m"
          {
#line 350 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(transform_hlds__term_constr_fixpoint__Locals_54, transform_hlds__term_constr_fixpoint__Info_5, transform_hlds__term_constr_fixpoint__Poly_31, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
#line 350 "term_constr_fixpoint.m"
            return;
          }
#line 349 "term_constr_fixpoint.m"
        }
#line 292 "term_constr_fixpoint.m"
        break;
#line 292 "term_constr_fixpoint.m"
    }
#line 292 "term_constr_fixpoint.m"
  }
#line 287 "term_constr_fixpoint.m"
}

#line 277 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_8,
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__PPId_10,
#line 277 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_11,
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVars_12,
#line 277 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Zeros_13)
#line 277 "term_constr_fixpoint.m"
{
#line 282 "term_constr_fixpoint.m"
  {
#line 282 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 282 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__7_7;

#line 282 "term_constr_fixpoint.m"
    {
#line 282 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 282 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__ModuleInfo_8));
#line 282 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__SizeVarSet_9));
#line 282 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 2) = ((MR_Box) (transform_hlds__term_constr_fixpoint__PPId_10));
#line 282 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__MaxMatrixSize_11));
#line 282 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__HeadVars_12));
#line 282 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 5) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Zeros_13));
#line 282 "term_constr_fixpoint.m"
    }
#line 282 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__HeadVar__7_7;
#line 282 "term_constr_fixpoint.m"
  }
#line 277 "term_constr_fixpoint.m"
}

#line 159 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(
#line 159 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_7,
#line 159 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Options_8,
#line 159 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_9,
#line 159 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Proc_10,
#line 159 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_0_34,
#line 159 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_35)
#line 159 "term_constr_fixpoint.m"
{
#line 164 "term_constr_fixpoint.m"
  {
#line 164 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_136_136;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__WideningInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Options_8, (MR_Integer) 0)));
#line 164 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Options_8, (MR_Integer) 1)));
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__AbstractPPId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 0)));
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__PPId_15 = (MR_Word) transform_hlds__term_constr_fixpoint__AbstractPPId_14;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 7)));
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Zeros_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 8)));
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 3)));
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Globals_19;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__DebugTerm_20;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Info_22;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__BugConstrs0_24;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ConstrVarsSet_25;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVarSet_26;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__BadVarsSet_27;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__BadVars_28;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ArgSizeInfo_29;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__OldPolyhedron_30;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ChangeFlag_32;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ThisIterationInfo_33;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_51_51;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_52_52;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_53_53;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_55_55;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
#line 164 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65;
#line 167 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 1)));
#line 167 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 2)));
#line 167 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 4)));
#line 167 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 5)));
#line 167 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 6)));
#line 167 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 9)));
#line 167 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 10)));
#line 167 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 11)));
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_113_113;
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_114_114;
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_115_115;
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_116_116;
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_117_117;
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_118_118;
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_119_119;
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_120_120;
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_121_121;
#line 198 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__V_122_122;
#line 198 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_123_123;

#line 174 "term_constr_fixpoint.m"
    {
#line 174 "term_constr_fixpoint.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, &transform_hlds__term_constr_fixpoint__Globals_19);
    }
#line 175 "term_constr_fixpoint.m"
    {
#line 175 "term_constr_fixpoint.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_fixpoint__Globals_19, (MR_Integer) 69, &transform_hlds__term_constr_fixpoint__DebugTerm_20);
    }
#line 187 "term_constr_fixpoint.m"
#line 187 "term_constr_fixpoint.m"
    switch (transform_hlds__term_constr_fixpoint__DebugTerm_20) {
#line 187 "term_constr_fixpoint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 187 "term_constr_fixpoint.m"
      case (MR_Integer) 0:
#line 188 "term_constr_fixpoint.m"
        {
#line 188 "term_constr_fixpoint.m"
        }
#line 187 "term_constr_fixpoint.m"
        break;
#line 187 "term_constr_fixpoint.m"
      case (MR_Integer) 1:
#line 178 "term_constr_fixpoint.m"
        {
#line 178 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_46_46;
#line 178 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_48_48;

#line 179 "term_constr_fixpoint.m"
          {
#line 179 "term_constr_fixpoint.m"
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_constr_fixpoint__PPId_15)));
          }
#line 180 "term_constr_fixpoint.m"
          {
#line 180 "term_constr_fixpoint.m"
            mercury__io__write_string_3_p_0((MR_String) ": ");
          }
#line 181 "term_constr_fixpoint.m"
          {
#line 181 "term_constr_fixpoint.m"
            hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, transform_hlds__term_constr_fixpoint__PPId_15);
          }
#line 182 "term_constr_fixpoint.m"
          {
#line 182 "term_constr_fixpoint.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 183 "term_constr_fixpoint.m"
          {
#line 183 "term_constr_fixpoint.m"
            transform_hlds__term_constr_util__write_size_vars_4_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__HeadVars_18);
          }
#line 184 "term_constr_fixpoint.m"
          {
#line 184 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 184 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_48_48, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Iteration_7));
#line 184 "term_constr_fixpoint.m"
          }
#line 184 "term_constr_fixpoint.m"
          {
#line 184 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_46_46, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_48_48));
#line 184 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "term_constr_fixpoint.m"
          }
#line 184 "term_constr_fixpoint.m"
          {
#line 184 "term_constr_fixpoint.m"
            mercury__io__format_4_p_0((MR_String) "\nIteration %d:\n", transform_hlds__term_constr_fixpoint__V_46_46);
          }
#line 185 "term_constr_fixpoint.m"
          {
#line 185 "term_constr_fixpoint.m"
            mercury__io__flush_output_2_p_0();
          }
#line 178 "term_constr_fixpoint.m"
        }
#line 187 "term_constr_fixpoint.m"
        break;
#line 187 "term_constr_fixpoint.m"
    }
#line 194 "term_constr_fixpoint.m"
    {
#line 194 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__Info_22 = transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__PPId_15, transform_hlds__term_constr_fixpoint__MaxMatrixSize_13, transform_hlds__term_constr_fixpoint__HeadVars_18, transform_hlds__term_constr_fixpoint__Zeros_17);
    }
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 0)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 1)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 2)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 3)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 4)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 5)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 6)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 7)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 8)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 9)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 10)));
#line 198 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 11)));
#line 198 "term_constr_fixpoint.m"
    {
#line 198 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_52_52 = libs__polyhedron__universe_0_f_0();
    }
#line 198 "term_constr_fixpoint.m"
    {
#line 198 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(transform_hlds__term_constr_fixpoint__Info_22, transform_hlds__term_constr_fixpoint__V_51_51, transform_hlds__term_constr_fixpoint__V_52_52, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_53_53);
    }
#line 200 "term_constr_fixpoint.m"
    {
#line 200 "term_constr_fixpoint.m"
      libs__polyhedron__optimize_3_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_53_53, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54);
    }
#line 205 "term_constr_fixpoint.m"
    {
#line 205 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__BugConstrs0_24 = libs__polyhedron__constraints_1_f_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54);
    }
#line 206 "term_constr_fixpoint.m"
    {
#line 206 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__ConstrVarsSet_25 = libs__lp_rational__get_vars_from_constraints_1_f_0(transform_hlds__term_constr_fixpoint__BugConstrs0_24);
    }
#line 3198 "transform_hlds.term_constr_fixpoint.c"
    transform_hlds__term_constr_fixpoint__TypeInfo_136_136 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[1];
#line 207 "term_constr_fixpoint.m"
    {
#line 207 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__HeadVarSet_26 = mercury__set__from_list_1_f_0(transform_hlds__term_constr_fixpoint__TypeInfo_136_136, transform_hlds__term_constr_fixpoint__HeadVars_18);
    }
#line 208 "term_constr_fixpoint.m"
    {
#line 208 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__BadVarsSet_27 = mercury__set__difference_2_f_0(transform_hlds__term_constr_fixpoint__TypeInfo_136_136, transform_hlds__term_constr_fixpoint__ConstrVarsSet_25, transform_hlds__term_constr_fixpoint__HeadVarSet_26);
    }
#line 209 "term_constr_fixpoint.m"
    {
#line 209 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__BadVars_28 = mercury__set__to_sorted_list_1_f_0(transform_hlds__term_constr_fixpoint__TypeInfo_136_136, transform_hlds__term_constr_fixpoint__BadVarsSet_27);
    }
#line 210 "term_constr_fixpoint.m"
    {
#line 210 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_55_55 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__BadVars_28, transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54);
    }
#line 211 "term_constr_fixpoint.m"
    {
#line 211 "term_constr_fixpoint.m"
      libs__polyhedron__optimize_3_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_55_55, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56);
    }
#line 222 "term_constr_fixpoint.m"
#line 222 "term_constr_fixpoint.m"
    switch (transform_hlds__term_constr_fixpoint__DebugTerm_20) {
#line 222 "term_constr_fixpoint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 222 "term_constr_fixpoint.m"
      case (MR_Integer) 0:
#line 223 "term_constr_fixpoint.m"
        {
#line 223 "term_constr_fixpoint.m"
        }
#line 222 "term_constr_fixpoint.m"
        break;
#line 222 "term_constr_fixpoint.m"
      case (MR_Integer) 1:
#line 217 "term_constr_fixpoint.m"
        {
#line 218 "term_constr_fixpoint.m"
          {
#line 218 "term_constr_fixpoint.m"
            libs__polyhedron__write_polyhedron_4_p_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56, transform_hlds__term_constr_fixpoint__SizeVarSet_16);
          }
#line 219 "term_constr_fixpoint.m"
          {
#line 219 "term_constr_fixpoint.m"
            mercury__io__nl_2_p_0();
          }
#line 220 "term_constr_fixpoint.m"
          {
#line 220 "term_constr_fixpoint.m"
            mercury__io__flush_output_2_p_0();
          }
#line 217 "term_constr_fixpoint.m"
        }
#line 222 "term_constr_fixpoint.m"
        break;
#line 222 "term_constr_fixpoint.m"
    }
#line 227 "term_constr_fixpoint.m"
    {
#line 227 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__ArgSizeInfo_29 = transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_f_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, transform_hlds__term_constr_fixpoint__PPId_15);
    }
#line 238 "term_constr_fixpoint.m"
    if ((transform_hlds__term_constr_fixpoint__ArgSizeInfo_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "term_constr_fixpoint.m"
      {
#line 237 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__OldPolyhedron_30 = libs__polyhedron__empty_0_f_0();
      }
#line 238 "term_constr_fixpoint.m"
    else
#line 239 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__OldPolyhedron_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__ArgSizeInfo_29, (MR_Integer) 0)));
#line 242 "term_constr_fixpoint.m"
    {
#line 242 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56);
    }
#line 248 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 245 "term_constr_fixpoint.m"
      {
#line 243 "term_constr_fixpoint.m"
        {
#line 243 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__OldPolyhedron_30);
        }
#line 245 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 244 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__ChangeFlag_32 = (MR_Integer) 0;
#line 245 "term_constr_fixpoint.m"
        else
#line 246 "term_constr_fixpoint.m"
          {
#line 246 "term_constr_fixpoint.m"
            {
#line 246 "term_constr_fixpoint.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_fixpoint", (MR_String) "predicate \140transform_hlds.term_constr_fixpoint.term_iterate_over_abstract_proc\'/6", (MR_String) "old polyhedron is empty");
#line 246 "term_constr_fixpoint.m"
              return;
            }
#line 246 "term_constr_fixpoint.m"
          }
#line 245 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
#line 245 "term_constr_fixpoint.m"
      }
#line 248 "term_constr_fixpoint.m"
    else
#line 254 "term_constr_fixpoint.m"
      {
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 9)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 0)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 1)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 2)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 3)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 4)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 5)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 6)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 7)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 8)));
#line 252 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 10)));
#line 252 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 11)));

#line 252 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_64_64 == (MR_Integer) 0);
#line 254 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 253 "term_constr_fixpoint.m"
          {
#line 253 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__ChangeFlag_32 = (MR_Integer) 0;
#line 253 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
#line 253 "term_constr_fixpoint.m"
          }
#line 254 "term_constr_fixpoint.m"
        else
#line 256 "term_constr_fixpoint.m"
          {
#line 254 "term_constr_fixpoint.m"
            {
#line 254 "term_constr_fixpoint.m"
              transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__OldPolyhedron_30);
            }
#line 256 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 255 "term_constr_fixpoint.m"
              {
#line 255 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__ChangeFlag_32 = (MR_Integer) 1;
#line 255 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
#line 255 "term_constr_fixpoint.m"
              }
#line 256 "term_constr_fixpoint.m"
            else
#line 257 "term_constr_fixpoint.m"
              {
#line 257 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(transform_hlds__term_constr_fixpoint__WideningInfo_12, transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__Iteration_7, transform_hlds__term_constr_fixpoint__OldPolyhedron_30, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65, &transform_hlds__term_constr_fixpoint__ChangeFlag_32);
              }
#line 256 "term_constr_fixpoint.m"
          }
#line 254 "term_constr_fixpoint.m"
      }
#line 261 "term_constr_fixpoint.m"
    {
#line 261 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__ThisIterationInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 261 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ThisIterationInfo_33, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__PPId_15));
#line 261 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ThisIterationInfo_33, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65));
#line 261 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ThisIterationInfo_33, 2) = ((MR_Box) (transform_hlds__term_constr_fixpoint__ChangeFlag_32));
#line 261 "term_constr_fixpoint.m"
    }
#line 263 "term_constr_fixpoint.m"
    {
#line 263 "term_constr_fixpoint.m"
      MR_Word base;
#line 263 "term_constr_fixpoint.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "term_constr_fixpoint.m"
      *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_35 = base;
#line 263 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__ThisIterationInfo_33));
#line 263 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_0_34));
#line 263 "term_constr_fixpoint.m"
    }
#line 164 "term_constr_fixpoint.m"
  }
#line 159 "term_constr_fixpoint.m"
}

#line 150 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(
#line 150 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_4,
#line 150 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_9,
#line 150 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_10)
#line 150 "term_constr_fixpoint.m"
{
#line 153 "term_constr_fixpoint.m"
  {
#line 153 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 153 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_4, (MR_Integer) 0)));
#line 153 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Poly_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_4, (MR_Integer) 1)));
#line 154 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_4, (MR_Integer) 2)));

#line 155 "term_constr_fixpoint.m"
    {
#line 155 "term_constr_fixpoint.m"
      transform_hlds__term_constr_util__update_arg_size_info_4_p_0(transform_hlds__term_constr_fixpoint__PPId_6, transform_hlds__term_constr_fixpoint__Poly_7, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_10);
#line 155 "term_constr_fixpoint.m"
      return;
    }
#line 153 "term_constr_fixpoint.m"
  }
#line 150 "term_constr_fixpoint.m"
}

#line 145 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__or_flags_1_f_0(
#line 145 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1)
#line 145 "term_constr_fixpoint.m"
{
#line 147 "term_constr_fixpoint.m"
  {
#line 147 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 147 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 147 "term_constr_fixpoint.m"
    if ((transform_hlds__term_constr_fixpoint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__HeadVar__2_2 = (MR_Integer) 0;
#line 147 "term_constr_fixpoint.m"
    else
#line 148 "term_constr_fixpoint.m"
      {
#line 148 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__Info_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__Infos_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_3, (MR_Integer) 2)));
#line 148 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6;
#line 148 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_3, (MR_Integer) 0)));
#line 148 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_3, (MR_Integer) 1)));

#line 148 "term_constr_fixpoint.m"
        {
#line 148 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__V_6_6 = transform_hlds__term_constr_fixpoint__or_flags_1_f_0(transform_hlds__term_constr_fixpoint__Infos_4);
        }
#line 148 "term_constr_fixpoint.m"
        {
#line 148 "term_constr_fixpoint.m"
          return transform_hlds__term_constr_fixpoint__HeadVar__2_2 = mercury__bool__or_2_f_0(transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_6_6);
        }
#line 148 "term_constr_fixpoint.m"
      }
#line 147 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 147 "term_constr_fixpoint.m"
  }
#line 145 "term_constr_fixpoint.m"
}

#line 50 "term_constr_fixpoint.m"
MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_f_0(
#line 50 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Widening_4,
#line 50 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_5)
#line 50 "term_constr_fixpoint.m"
{
#line 85 "term_constr_fixpoint.m"
  {
#line 85 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 85 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 85 "term_constr_fixpoint.m"
    {
#line 85 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 85 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Widening_4));
#line 85 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__MaxMatrixSize_5));
#line 85 "term_constr_fixpoint.m"
    }
#line 85 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__HeadVar__3_3;
#line 85 "term_constr_fixpoint.m"
  }
#line 50 "term_constr_fixpoint.m"
}

#line 119 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9(
#line 119 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 119 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 119 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 119 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 119 "term_constr_fixpoint.m"
{
#line 119 "term_constr_fixpoint.m"
  {
#line 119 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 119 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv8_STATE_VARIABLE_ModuleInfo_10;

#line 119 "term_constr_fixpoint.m"
    {
#line 119 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv8_STATE_VARIABLE_ModuleInfo_10);
    }
#line 119 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv8_STATE_VARIABLE_ModuleInfo_10));
#line 119 "term_constr_fixpoint.m"
  }
#line 119 "term_constr_fixpoint.m"
}

#line 141 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8(
#line 141 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 141 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 141 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 141 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 141 "term_constr_fixpoint.m"
{
#line 141 "term_constr_fixpoint.m"
  {
#line 141 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 141 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv6_STATE_VARIABLE_ModuleInfo_10;

#line 141 "term_constr_fixpoint.m"
    {
#line 141 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv6_STATE_VARIABLE_ModuleInfo_10);
    }
#line 141 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv6_STATE_VARIABLE_ModuleInfo_10));
#line 141 "term_constr_fixpoint.m"
  }
#line 141 "term_constr_fixpoint.m"
}

#line 138 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7(
#line 138 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 138 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 138 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 138 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 138 "term_constr_fixpoint.m"
{
#line 138 "term_constr_fixpoint.m"
  {
#line 138 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 138 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv4_STATE_VARIABLE_ModuleInfo_10;

#line 138 "term_constr_fixpoint.m"
    {
#line 138 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv4_STATE_VARIABLE_ModuleInfo_10);
    }
#line 138 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv4_STATE_VARIABLE_ModuleInfo_10));
#line 138 "term_constr_fixpoint.m"
  }
#line 138 "term_constr_fixpoint.m"
}

#line 134 "term_constr_fixpoint.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6(
#line 134 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 134 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1)
#line 134 "term_constr_fixpoint.m"
{
#line 134 "term_constr_fixpoint.m"
  {
#line 134 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2;
#line 134 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 134 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv3_LambdaHeadVar__2_26;

#line 134 "term_constr_fixpoint.m"
    {
#line 134 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__conv3_LambdaHeadVar__2_26 = transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__134__1_1_f_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1));
    }
#line 134 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv3_LambdaHeadVar__2_26));
#line 134 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__wrapper_arg_2;
#line 134 "term_constr_fixpoint.m"
  }
#line 134 "term_constr_fixpoint.m"
}

#line 114 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1(
#line 114 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 114 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 114 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 114 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 114 "term_constr_fixpoint.m"
{
#line 114 "term_constr_fixpoint.m"
  {
#line 114 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 114 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_IterationInfo_35;

#line 114 "term_constr_fixpoint.m"
    {
#line 114 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_IterationInfo_35);
    }
#line 114 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_IterationInfo_35));
#line 114 "term_constr_fixpoint.m"
  }
#line 114 "term_constr_fixpoint.m"
}

#line 131 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(
#line 131 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 131 "term_constr_fixpoint.m"
{
#line 131 "term_constr_fixpoint.m"
  {
#line 131 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 131 "term_constr_fixpoint.m"
    MR_builtin_longjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0, 1);
#line 131 "term_constr_fixpoint.m"
  }
#line 131 "term_constr_fixpoint.m"
}

#line 131 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4(
#line 131 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 131 "term_constr_fixpoint.m"
{
#line 131 "term_constr_fixpoint.m"
  {
#line 131 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 131 "term_constr_fixpoint.m"
    (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15 = ((MR_Word) (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15);
#line 131 "term_constr_fixpoint.m"
    {
#line 131 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(transform_hlds__term_constr_fixpoint__env_ptr);
#line 131 "term_constr_fixpoint.m"
      return;
    }
#line 131 "term_constr_fixpoint.m"
  }
#line 131 "term_constr_fixpoint.m"
}

#line 131 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(
#line 131 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 131 "term_constr_fixpoint.m"
{
#line 131 "term_constr_fixpoint.m"
  {
#line 131 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 131 "term_constr_fixpoint.m"
    {
#line 132 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 0)));
#line 132 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__V_39_39;

#line 132 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 1)));
#line 132 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 2)));
#line 132 "term_constr_fixpoint.m"
      {
#line 132 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = libs__polyhedron__is_empty_1_p_0((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__V_24_24);
      }
#line 132 "term_constr_fixpoint.m"
      if ((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded)
#line 132 "term_constr_fixpoint.m"
        {
#line 132 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(transform_hlds__term_constr_fixpoint__env_ptr);
#line 132 "term_constr_fixpoint.m"
          return;
        }
#line 131 "term_constr_fixpoint.m"
    }
#line 131 "term_constr_fixpoint.m"
  }
#line 131 "term_constr_fixpoint.m"
}

#line 131 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(
#line 131 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 131 "term_constr_fixpoint.m"
{
#line 131 "term_constr_fixpoint.m"
  {
#line 131 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 131 "term_constr_fixpoint.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0) == 0)
#line 131 "term_constr_fixpoint.m"
      {
#line 131 "term_constr_fixpoint.m"
        {
#line 131 "term_constr_fixpoint.m"
          {
#line 131 "term_constr_fixpoint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, &(transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4, transform_hlds__term_constr_fixpoint__env_ptr);
          }
#line 131 "term_constr_fixpoint.m"
        }
#line 131 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = MR_FALSE;
#line 131 "term_constr_fixpoint.m"
      }
#line 131 "term_constr_fixpoint.m"
    else
#line 131 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = MR_TRUE;
#line 131 "term_constr_fixpoint.m"
  }
#line 131 "term_constr_fixpoint.m"
}

#line 35 "term_constr_fixpoint.m"
void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(
#line 35 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Options_7,
#line 35 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__SCC_8,
#line 35 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_9,
#line 35 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__4_4,
#line 35 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20,
#line 35 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21)
#line 35 "term_constr_fixpoint.m"
{
#line 35 "term_constr_fixpoint.m"
  {
#line 35 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s transform_hlds__term_constr_fixpoint__env;

#line 104 "term_constr_fixpoint.m"
    {
#line 104 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__AbstractSCC_11;
#line 104 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__ChangeFlag_13;
#line 104 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__V_22_22;
#line 113 "term_constr_fixpoint.m"
      MR_Box transform_hlds__term_constr_fixpoint__conv1_IterationInfos_12;

#line 104 "term_constr_fixpoint.m"
      *transform_hlds__term_constr_fixpoint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 105 "term_constr_fixpoint.m"
      {
#line 105 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__AbstractSCC_11 = transform_hlds__term_constr_util__get_abstract_scc_2_f_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__term_constr_fixpoint__SCC_8);
      }
#line 114 "term_constr_fixpoint.m"
      {
#line 114 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 114 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_2[0]));
#line 114 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1));
#line 114 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 114 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Iteration_9));
#line 114 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Options_7));
#line 114 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 5) = ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20));
#line 114 "term_constr_fixpoint.m"
      }
#line 113 "term_constr_fixpoint.m"
      {
#line 113 "term_constr_fixpoint.m"
        mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], transform_hlds__term_constr_fixpoint__V_22_22, transform_hlds__term_constr_fixpoint__AbstractSCC_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_fixpoint__conv1_IterationInfos_12);
      }
#line 113 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv1_IterationInfos_12);
#line 116 "term_constr_fixpoint.m"
      {
#line 116 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__ChangeFlag_13 = transform_hlds__term_constr_fixpoint__or_flags_1_f_0((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12);
      }
#line 122 "term_constr_fixpoint.m"
#line 122 "term_constr_fixpoint.m"
      switch (transform_hlds__term_constr_fixpoint__ChangeFlag_13) {
#line 122 "term_constr_fixpoint.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 122 "term_constr_fixpoint.m"
        case (MR_Integer) 0:
#line 140 "term_constr_fixpoint.m"
          {
#line 131 "term_constr_fixpoint.m"
            {
#line 131 "term_constr_fixpoint.m"
              transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(&transform_hlds__term_constr_fixpoint__env);
            }
#line 140 "term_constr_fixpoint.m"
            if ((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded)
#line 137 "term_constr_fixpoint.m"
              {
#line 137 "term_constr_fixpoint.m"
                MR_Word transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;
#line 137 "term_constr_fixpoint.m"
                MR_Word transform_hlds__term_constr_fixpoint__V_28_28;
#line 138 "term_constr_fixpoint.m"
                MR_Box transform_hlds__term_constr_fixpoint__conv5_STATE_VARIABLE_ModuleInfo_21;

#line 138 "term_constr_fixpoint.m"
                {
#line 138 "term_constr_fixpoint.m"
                  transform_hlds__term_constr_fixpoint__V_28_28 = mercury__list__map_2_f_0(transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57, transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[0], (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12);
                }
#line 138 "term_constr_fixpoint.m"
                {
#line 138 "term_constr_fixpoint.m"
                  mercury__list__foldl_4_p_0(transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[1], transform_hlds__term_constr_fixpoint__V_28_28, ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__term_constr_fixpoint__conv5_STATE_VARIABLE_ModuleInfo_21);
                }
#line 138 "term_constr_fixpoint.m"
                *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv5_STATE_VARIABLE_ModuleInfo_21);
#line 137 "term_constr_fixpoint.m"
              }
#line 140 "term_constr_fixpoint.m"
            else
#line 141 "term_constr_fixpoint.m"
              {
#line 141 "term_constr_fixpoint.m"
                MR_Box transform_hlds__term_constr_fixpoint__conv7_STATE_VARIABLE_ModuleInfo_21;

#line 141 "term_constr_fixpoint.m"
                {
#line 141 "term_constr_fixpoint.m"
                  mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[2], (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__term_constr_fixpoint__conv7_STATE_VARIABLE_ModuleInfo_21);
                }
#line 141 "term_constr_fixpoint.m"
                *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv7_STATE_VARIABLE_ModuleInfo_21);
#line 141 "term_constr_fixpoint.m"
              }
#line 140 "term_constr_fixpoint.m"
          }
#line 122 "term_constr_fixpoint.m"
          break;
#line 122 "term_constr_fixpoint.m"
        case (MR_Integer) 1:
#line 118 "term_constr_fixpoint.m"
          {
#line 118 "term_constr_fixpoint.m"
            MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_33_33;
#line 118 "term_constr_fixpoint.m"
            MR_Integer transform_hlds__term_constr_fixpoint__V_34_34;
#line 119 "term_constr_fixpoint.m"
            MR_Box transform_hlds__term_constr_fixpoint__conv9_STATE_VARIABLE_ModuleInfo_33_33;
#line 120 "term_constr_fixpoint.m"
            MR_Word transform_hlds__term_constr_fixpoint__V_14_14;

#line 119 "term_constr_fixpoint.m"
            {
#line 119 "term_constr_fixpoint.m"
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[3], (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__term_constr_fixpoint__conv9_STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 119 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv9_STATE_VARIABLE_ModuleInfo_33_33);
#line 120 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_34_34 = (transform_hlds__term_constr_fixpoint__Iteration_9 + (MR_Integer) 1);
#line 120 "term_constr_fixpoint.m"
            {
#line 120 "term_constr_fixpoint.m"
              transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(transform_hlds__term_constr_fixpoint__Options_7, transform_hlds__term_constr_fixpoint__SCC_8, transform_hlds__term_constr_fixpoint__V_34_34, &transform_hlds__term_constr_fixpoint__V_14_14, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21);
            }
#line 118 "term_constr_fixpoint.m"
          }
#line 122 "term_constr_fixpoint.m"
          break;
#line 122 "term_constr_fixpoint.m"
      }
#line 104 "term_constr_fixpoint.m"
    }
#line 35 "term_constr_fixpoint.m"
  }
#line 35 "term_constr_fixpoint.m"
}

void mercury__transform_hlds__term_constr_fixpoint__init(void)
{
}

void mercury__transform_hlds__term_constr_fixpoint__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_infos_0);
}

void mercury__transform_hlds__term_constr_fixpoint__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_fixpoint. */
