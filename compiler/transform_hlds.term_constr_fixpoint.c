/*
** Automatically generated from `term_constr_fixpoint.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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



#line 452 "term_constr_fixpoint.m"
struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s {
#line 452 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9;
#line 456 "term_constr_fixpoint.m"
  MR_bool transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded;
#line 456 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19;
#line 456 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20;
#line 473 "term_constr_fixpoint.m"
  jmp_buf transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0;
#line 473 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22;
#line 473 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22;
#line 452 "term_constr_fixpoint.m"
};

#line 35 "term_constr_fixpoint.m"
struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s {
#line 105 "term_constr_fixpoint.m"
  MR_bool transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded;
#line 105 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12;
#line 132 "term_constr_fixpoint.m"
  jmp_buf transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0;
#line 132 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15;
#line 132 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__V_24_24;
#line 132 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15;
#line 35 "term_constr_fixpoint.m"
};


#line 182 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;

#line 185 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0;

#line 188 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 191 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 194 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 197 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

#line 200 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0[6];

#line 203 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0[6];

#line 206 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0;

#line 209 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0[1];

#line 212 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0[1];

#line 215 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0[1];

#line 218 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0[1];

#line 221 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0[2];

#line 224 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0[2];

#line 227 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0;

#line 230 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0[1];

#line 233 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0[1];

#line 236 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0[1];

#line 239 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0[1];

#line 242 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0[3];

#line 245 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0[3];

#line 248 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0;

#line 251 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0[1];

#line 254 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0[1];

#line 257 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0[1];

#line 260 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0[1];

#line 263 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;

#line 266 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001(
#line 269 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 271 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

#line 274 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001(
#line 277 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 279 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 281 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 284 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001(
#line 287 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 289 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

#line 292 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001(
#line 295 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 297 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 299 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 302 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001(
#line 305 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 307 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

#line 310 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001(
#line 313 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 315 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 317 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 320 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001(
#line 323 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 325 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

#line 328 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001(
#line 331 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 333 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 335 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 135 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__135__1_1_f_0(
#line 135 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_25);

#line 103 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(
#line 103 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 103 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 103 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3);

#line 103 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(
#line 103 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 103 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

#line 96 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(
#line 96 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 96 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 96 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3);

#line 96 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(
#line 96 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 96 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

#line 268 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(
#line 268 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 268 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 268 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3);

#line 268 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(
#line 268 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 268 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

#line 473 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(
#line 473 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 473 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3(
#line 473 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 473 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(
#line 473 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 473 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(
#line 473 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 452 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(
#line 452 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 452 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
#line 452 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_10,
#line 452 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__OldPoly_11,
#line 452 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__NewPoly_12,
#line 452 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__ResultPoly_13,
#line 452 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__ChangeFlag_14);

#line 388 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(
#line 388 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_6,
#line 388 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
#line 388 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goal_8,
#line 388 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_13,
#line 388 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_14);

#line 384 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1(
#line 384 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 384 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 384 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 384 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 380 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(
#line 380 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goals_6,
#line 380 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
#line 380 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
#line 380 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
#line 380 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);

#line 358 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(
#line 358 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_6,
#line 358 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_7,
#line 358 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8,
#line 358 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
#line 358 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);

#line 314 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1(
#line 314 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 314 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 314 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 314 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 288 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(
#line 288 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_5,
#line 288 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goal_6,
#line 288 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33,
#line 288 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);

#line 278 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_8,
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__PPId_10,
#line 278 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_11,
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVars_12,
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Zeros_13);

#line 160 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(
#line 160 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_7,
#line 160 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Options_8,
#line 160 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_9,
#line 160 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Proc_10,
#line 160 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_0_34,
#line 160 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_35);

#line 151 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(
#line 151 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_4,
#line 151 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_9,
#line 151 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_10);

#line 146 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__or_flags_1_f_0(
#line 146 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1);

#line 120 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9(
#line 120 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 120 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 120 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 120 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 142 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8(
#line 142 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 142 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 142 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 142 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 139 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7(
#line 139 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 139 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 139 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 139 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 135 "term_constr_fixpoint.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6(
#line 135 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 135 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1);

#line 115 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1(
#line 115 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 115 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 115 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 115 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

#line 132 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(
#line 132 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 132 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4(
#line 132 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 132 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(
#line 132 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

#line 132 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(
#line 132 "term_constr_fixpoint.m"
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



#line 793 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0
  }
};

#line 801 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 809 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 817 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 825 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 833 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 841 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 851 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0[6] = {
  (MR_String) "tcfi_module_info",
  (MR_String) "tcfi_varset",
  (MR_String) "tcfi_ppid",
  (MR_String) "tcfi_max_matrix_size",
  (MR_String) "tcfi_curr_head_vars",
  (MR_String) "tcfi_zeros"
};

#line 861 "transform_hlds.term_constr_fixpoint.c"
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

#line 876 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0
};

#line 881 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0
  }
};

#line 890 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0
};

#line 895 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0[1] = {
  (MR_Integer) 0
};

#line 900 "transform_hlds.term_constr_fixpoint.c"
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

#line 917 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_widening_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 923 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0[2] = {
  (MR_String) "fo_widening",
  (MR_String) "fo_max_size"
};

#line 929 "transform_hlds.term_constr_fixpoint.c"
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

#line 944 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0
};

#line 949 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0
  }
};

#line 958 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0
};

#line 963 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0[1] = {
  (MR_Integer) 0
};

#line 968 "transform_hlds.term_constr_fixpoint.c"
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

#line 985 "transform_hlds.term_constr_fixpoint.c"
static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 992 "transform_hlds.term_constr_fixpoint.c"
static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0[3] = {
  (MR_String) "ii_ppid",
  (MR_String) "ii_arg_size_poly",
  (MR_String) "ii_change_flag"
};

#line 999 "transform_hlds.term_constr_fixpoint.c"
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

#line 1014 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0
};

#line 1019 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0
  }
};

#line 1028 "transform_hlds.term_constr_fixpoint.c"
static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0
};

#line 1033 "transform_hlds.term_constr_fixpoint.c"
static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0[1] = {
  (MR_Integer) 0
};

#line 1038 "transform_hlds.term_constr_fixpoint.c"
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

#line 1055 "transform_hlds.term_constr_fixpoint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0
  }
};

#line 1063 "transform_hlds.term_constr_fixpoint.c"
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

#line 1080 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001(
#line 1083 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1085 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
#line 1087 "transform_hlds.term_constr_fixpoint.c"
{
#line 1089 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1091 "transform_hlds.term_constr_fixpoint.c"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 1094 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1096 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
#line 1099 "transform_hlds.term_constr_fixpoint.c"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 1101 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1103 "transform_hlds.term_constr_fixpoint.c"
}

#line 1106 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001(
#line 1109 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1111 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 1113 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 1115 "transform_hlds.term_constr_fixpoint.c"
{
#line 1117 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1119 "transform_hlds.term_constr_fixpoint.c"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

#line 1122 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1124 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
#line 1127 "transform_hlds.term_constr_fixpoint.c"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
#line 1129 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1131 "transform_hlds.term_constr_fixpoint.c"
}

#line 1134 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001(
#line 1137 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1139 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
#line 1141 "transform_hlds.term_constr_fixpoint.c"
{
#line 1143 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1145 "transform_hlds.term_constr_fixpoint.c"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 1148 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1150 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
#line 1153 "transform_hlds.term_constr_fixpoint.c"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 1155 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1157 "transform_hlds.term_constr_fixpoint.c"
}

#line 1160 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001(
#line 1163 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1165 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 1167 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 1169 "transform_hlds.term_constr_fixpoint.c"
{
#line 1171 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1173 "transform_hlds.term_constr_fixpoint.c"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

#line 1176 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1178 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
#line 1181 "transform_hlds.term_constr_fixpoint.c"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
#line 1183 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1185 "transform_hlds.term_constr_fixpoint.c"
}

#line 1188 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001(
#line 1191 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1193 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
#line 1195 "transform_hlds.term_constr_fixpoint.c"
{
#line 1197 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1199 "transform_hlds.term_constr_fixpoint.c"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 1202 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1204 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
#line 1207 "transform_hlds.term_constr_fixpoint.c"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 1209 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1211 "transform_hlds.term_constr_fixpoint.c"
}

#line 1214 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001(
#line 1217 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1219 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 1221 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 1223 "transform_hlds.term_constr_fixpoint.c"
{
#line 1225 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1227 "transform_hlds.term_constr_fixpoint.c"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

#line 1230 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1232 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
#line 1235 "transform_hlds.term_constr_fixpoint.c"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
#line 1237 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1239 "transform_hlds.term_constr_fixpoint.c"
}

#line 1242 "transform_hlds.term_constr_fixpoint.c"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001(
#line 1245 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1247 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
#line 1249 "transform_hlds.term_constr_fixpoint.c"
{
#line 1251 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1253 "transform_hlds.term_constr_fixpoint.c"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 1256 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1258 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
#line 1261 "transform_hlds.term_constr_fixpoint.c"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 1263 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1265 "transform_hlds.term_constr_fixpoint.c"
}

#line 1268 "transform_hlds.term_constr_fixpoint.c"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001(
#line 1271 "transform_hlds.term_constr_fixpoint.c"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 1273 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 1275 "transform_hlds.term_constr_fixpoint.c"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 1277 "transform_hlds.term_constr_fixpoint.c"
{
#line 1279 "transform_hlds.term_constr_fixpoint.c"
  {
#line 1281 "transform_hlds.term_constr_fixpoint.c"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

#line 1284 "transform_hlds.term_constr_fixpoint.c"
    {
#line 1286 "transform_hlds.term_constr_fixpoint.c"
      transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
#line 1289 "transform_hlds.term_constr_fixpoint.c"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
#line 1291 "transform_hlds.term_constr_fixpoint.c"
  }
#line 1293 "transform_hlds.term_constr_fixpoint.c"
}

#line 135 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__135__1_1_f_0(
#line 135 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_25)
#line 135 "term_constr_fixpoint.m"
{
#line 135 "term_constr_fixpoint.m"
  {
#line 135 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 135 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_26;
#line 135 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Identity_19;
#line 137 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_40_40;
#line 137 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_42_42;
#line 137 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_41_41;

#line 136 "term_constr_fixpoint.m"
    {
#line 136 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__Identity_19 = libs__polyhedron__universe_0_f_0();
    }
#line 137 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_25, (MR_Integer) 0)));
#line 137 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_25, (MR_Integer) 1)));
#line 137 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_25, (MR_Integer) 2)));
#line 137 "term_constr_fixpoint.m"
    {
#line 137 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__HeadVar__2_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 137 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_26, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_40_40));
#line 137 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_26, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Identity_19));
#line 137 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_26, 2) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_42_42));
#line 137 "term_constr_fixpoint.m"
    }
#line 135 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__HeadVar__2_26;
#line 135 "term_constr_fixpoint.m"
  }
#line 135 "term_constr_fixpoint.m"
}

#line 103 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(
#line 103 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 103 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 103 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
#line 103 "term_constr_fixpoint.m"
{
#line 103 "term_constr_fixpoint.m"
  {
#line 103 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 103 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar1_4 = transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 103 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar2_5 = transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 103 "term_constr_fixpoint.m"
    {
#line 103 "term_constr_fixpoint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], transform_hlds__term_constr_fixpoint__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar2_5)));
#line 103 "term_constr_fixpoint.m"
      return;
    }
#line 103 "term_constr_fixpoint.m"
  }
#line 103 "term_constr_fixpoint.m"
}

#line 103 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(
#line 103 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 103 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
#line 103 "term_constr_fixpoint.m"
{
#line 103 "term_constr_fixpoint.m"
  {
#line 103 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 103 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar1_3 = transform_hlds__term_constr_fixpoint__HeadVar__1_1;
#line 103 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar2_4 = transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 103 "term_constr_fixpoint.m"
    {
#line 103 "term_constr_fixpoint.m"
      return transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar2_4)));
    }
#line 103 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 103 "term_constr_fixpoint.m"
  }
#line 103 "term_constr_fixpoint.m"
}

#line 96 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(
#line 96 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 96 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 96 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
#line 96 "term_constr_fixpoint.m"
{
#line 96 "term_constr_fixpoint.m"
  {
#line 96 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 96 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_12 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 96 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_13 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 96 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_12 == transform_hlds__term_constr_fixpoint__CastY_13);
#line 96 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1434 "transform_hlds.term_constr_fixpoint.c"
      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = (MR_Integer) 0;
#line 96 "term_constr_fixpoint.m"
    else
#line 96 "term_constr_fixpoint.m"
      {
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 0)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 1)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 2)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_10_10;

#line 96 "term_constr_fixpoint.m"
        {
#line 96 "term_constr_fixpoint.m"
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_fixpoint__V_10_10, transform_hlds__term_constr_fixpoint__V_4_4, transform_hlds__term_constr_fixpoint__V_7_7);
        }
#line 1460 "transform_hlds.term_constr_fixpoint.c"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_10_10 == (MR_Integer) 0);
#line 96 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 96 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 96 "term_constr_fixpoint.m"
          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_10_10;
#line 96 "term_constr_fixpoint.m"
        else
#line 96 "term_constr_fixpoint.m"
          {
#line 96 "term_constr_fixpoint.m"
            MR_Word transform_hlds__term_constr_fixpoint__V_11_11;

#line 96 "term_constr_fixpoint.m"
            {
#line 96 "term_constr_fixpoint.m"
              libs__polyhedron____Compare____polyhedron_0_0(&transform_hlds__term_constr_fixpoint__V_11_11, transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_8_8);
            }
#line 1480 "transform_hlds.term_constr_fixpoint.c"
            transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_11_11 == (MR_Integer) 0);
#line 96 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 96 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 96 "term_constr_fixpoint.m"
              *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_11_11;
#line 96 "term_constr_fixpoint.m"
            else
#line 96 "term_constr_fixpoint.m"
              {
#line 96 "term_constr_fixpoint.m"
                MR_Integer transform_hlds__term_constr_fixpoint__V_17_17 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_6_6;
#line 96 "term_constr_fixpoint.m"
                MR_Integer transform_hlds__term_constr_fixpoint__V_18_18 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_9_9;

#line 96 "term_constr_fixpoint.m"
                {
#line 96 "term_constr_fixpoint.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_fixpoint__HeadVar__1_1, transform_hlds__term_constr_fixpoint__V_17_17, transform_hlds__term_constr_fixpoint__V_18_18);
#line 96 "term_constr_fixpoint.m"
                  return;
                }
#line 96 "term_constr_fixpoint.m"
              }
#line 96 "term_constr_fixpoint.m"
          }
#line 96 "term_constr_fixpoint.m"
      }
#line 96 "term_constr_fixpoint.m"
  }
#line 96 "term_constr_fixpoint.m"
}

#line 96 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(
#line 96 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 96 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
#line 96 "term_constr_fixpoint.m"
{
#line 96 "term_constr_fixpoint.m"
  {
#line 96 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 96 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_9 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;
#line 96 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_10 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 96 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_9 == transform_hlds__term_constr_fixpoint__CastY_10);
#line 96 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 96 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = MR_TRUE;
#line 96 "term_constr_fixpoint.m"
    else
#line 96 "term_constr_fixpoint.m"
      {
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 2)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 96 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));

#line 1556 "transform_hlds.term_constr_fixpoint.c"
        {
#line 1558 "transform_hlds.term_constr_fixpoint.c"
          transform_hlds__term_constr_fixpoint__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_fixpoint__V_3_3, transform_hlds__term_constr_fixpoint__V_6_6);
        }
#line 96 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 96 "term_constr_fixpoint.m"
          {
#line 1565 "transform_hlds.term_constr_fixpoint.c"
            {
#line 1567 "transform_hlds.term_constr_fixpoint.c"
              transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_fixpoint__V_4_4, transform_hlds__term_constr_fixpoint__V_7_7);
            }
#line 96 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1572 "transform_hlds.term_constr_fixpoint.c"
              transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_5_5 == transform_hlds__term_constr_fixpoint__V_8_8);
#line 96 "term_constr_fixpoint.m"
          }
#line 96 "term_constr_fixpoint.m"
      }
#line 96 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 96 "term_constr_fixpoint.m"
  }
#line 96 "term_constr_fixpoint.m"
}

#line 79 "term_constr_fixpoint.m"
void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0(
#line 79 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 79 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 79 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
#line 79 "term_constr_fixpoint.m"
{
#line 79 "term_constr_fixpoint.m"
  {
#line 79 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 79 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_9 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 79 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_10 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 79 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_9 == transform_hlds__term_constr_fixpoint__CastY_10);
#line 79 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1609 "transform_hlds.term_constr_fixpoint.c"
      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "term_constr_fixpoint.m"
    else
#line 79 "term_constr_fixpoint.m"
      {
#line 79 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 0)));
#line 79 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 1)));
#line 79 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8;
#line 79 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_13_13 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_4_4;
#line 79 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_14_14 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_6_6;

#line 79 "term_constr_fixpoint.m"
        {
#line 79 "term_constr_fixpoint.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_fixpoint__V_8_8, transform_hlds__term_constr_fixpoint__V_13_13, transform_hlds__term_constr_fixpoint__V_14_14);
        }
#line 1635 "transform_hlds.term_constr_fixpoint.c"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_8_8 == (MR_Integer) 0);
#line 79 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 79 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 79 "term_constr_fixpoint.m"
          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_8_8;
#line 79 "term_constr_fixpoint.m"
        else
#line 79 "term_constr_fixpoint.m"
          {
#line 79 "term_constr_fixpoint.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_fixpoint__HeadVar__1_1, transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_7_7);
#line 79 "term_constr_fixpoint.m"
            return;
          }
#line 79 "term_constr_fixpoint.m"
      }
#line 79 "term_constr_fixpoint.m"
  }
#line 79 "term_constr_fixpoint.m"
}

#line 79 "term_constr_fixpoint.m"
MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0(
#line 79 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 79 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
#line 79 "term_constr_fixpoint.m"
{
#line 79 "term_constr_fixpoint.m"
  {
#line 79 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 79 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_7 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;
#line 79 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_8 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 79 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_7 == transform_hlds__term_constr_fixpoint__CastY_8);
#line 79 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 79 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = MR_TRUE;
#line 79 "term_constr_fixpoint.m"
    else
#line 79 "term_constr_fixpoint.m"
      {
#line 79 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_10_10 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_3_3;
#line 79 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_11_11 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_5_5;

#line 1700 "transform_hlds.term_constr_fixpoint.c"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_10_10 == transform_hlds__term_constr_fixpoint__V_11_11);
#line 79 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1704 "transform_hlds.term_constr_fixpoint.c"
          transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_4_4 == transform_hlds__term_constr_fixpoint__V_6_6);
#line 79 "term_constr_fixpoint.m"
      }
#line 79 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 79 "term_constr_fixpoint.m"
  }
#line 79 "term_constr_fixpoint.m"
}

#line 268 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(
#line 268 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 268 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
#line 268 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
#line 268 "term_constr_fixpoint.m"
{
#line 268 "term_constr_fixpoint.m"
  {
#line 268 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 268 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_21 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 268 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_22 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 268 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_21 == transform_hlds__term_constr_fixpoint__CastY_22);
#line 268 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 1739 "transform_hlds.term_constr_fixpoint.c"
      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "term_constr_fixpoint.m"
    else
#line 268 "term_constr_fixpoint.m"
      {
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));
#line 268 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 3)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 4)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 5)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 0)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 1)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 2)));
#line 268 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 3)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 4)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 5)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_16_16;

#line 268 "term_constr_fixpoint.m"
        {
#line 268 "term_constr_fixpoint.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__term_constr_fixpoint__V_16_16, transform_hlds__term_constr_fixpoint__V_4_4, transform_hlds__term_constr_fixpoint__V_10_10);
        }
#line 1777 "transform_hlds.term_constr_fixpoint.c"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_16_16 == (MR_Integer) 0);
#line 268 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 268 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_16_16;
#line 268 "term_constr_fixpoint.m"
        else
#line 268 "term_constr_fixpoint.m"
          {
#line 268 "term_constr_fixpoint.m"
            MR_Word transform_hlds__term_constr_fixpoint__V_17_17;

#line 268 "term_constr_fixpoint.m"
            {
#line 268 "term_constr_fixpoint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[2], &transform_hlds__term_constr_fixpoint__V_17_17, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_5_5)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_11_11)));
            }
#line 1797 "transform_hlds.term_constr_fixpoint.c"
            transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_17_17 == (MR_Integer) 0);
#line 268 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 268 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
              *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_17_17;
#line 268 "term_constr_fixpoint.m"
            else
#line 268 "term_constr_fixpoint.m"
              {
#line 268 "term_constr_fixpoint.m"
                MR_Word transform_hlds__term_constr_fixpoint__V_18_18;

#line 268 "term_constr_fixpoint.m"
                {
#line 268 "term_constr_fixpoint.m"
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_fixpoint__V_18_18, transform_hlds__term_constr_fixpoint__V_6_6, transform_hlds__term_constr_fixpoint__V_12_12);
                }
#line 1817 "transform_hlds.term_constr_fixpoint.c"
                transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_18_18 == (MR_Integer) 0);
#line 268 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 268 "term_constr_fixpoint.m"
                if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
                  *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_18_18;
#line 268 "term_constr_fixpoint.m"
                else
#line 268 "term_constr_fixpoint.m"
                  {
#line 268 "term_constr_fixpoint.m"
                    MR_Word transform_hlds__term_constr_fixpoint__V_19_19;

#line 268 "term_constr_fixpoint.m"
                    {
#line 268 "term_constr_fixpoint.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_fixpoint__V_19_19, transform_hlds__term_constr_fixpoint__V_7_7, transform_hlds__term_constr_fixpoint__V_13_13);
                    }
#line 1837 "transform_hlds.term_constr_fixpoint.c"
                    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_19_19 == (MR_Integer) 0);
#line 268 "term_constr_fixpoint.m"
                    transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 268 "term_constr_fixpoint.m"
                    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
                      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_19_19;
#line 268 "term_constr_fixpoint.m"
                    else
#line 268 "term_constr_fixpoint.m"
                      {
#line 268 "term_constr_fixpoint.m"
                        MR_Word transform_hlds__term_constr_fixpoint__V_20_20;

#line 268 "term_constr_fixpoint.m"
                        {
#line 268 "term_constr_fixpoint.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[3], &transform_hlds__term_constr_fixpoint__V_20_20, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_8_8)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_14_14)));
                        }
#line 1857 "transform_hlds.term_constr_fixpoint.c"
                        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_20_20 == (MR_Integer) 0);
#line 268 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
#line 268 "term_constr_fixpoint.m"
                        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
                          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_20_20;
#line 268 "term_constr_fixpoint.m"
                        else
#line 268 "term_constr_fixpoint.m"
                          {
#line 268 "term_constr_fixpoint.m"
                            {
#line 268 "term_constr_fixpoint.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[4], transform_hlds__term_constr_fixpoint__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_9_9)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_15_15)));
#line 268 "term_constr_fixpoint.m"
                              return;
                            }
#line 268 "term_constr_fixpoint.m"
                          }
#line 268 "term_constr_fixpoint.m"
                      }
#line 268 "term_constr_fixpoint.m"
                  }
#line 268 "term_constr_fixpoint.m"
              }
#line 268 "term_constr_fixpoint.m"
          }
#line 268 "term_constr_fixpoint.m"
      }
#line 268 "term_constr_fixpoint.m"
  }
#line 268 "term_constr_fixpoint.m"
}

#line 268 "term_constr_fixpoint.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(
#line 268 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 268 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
#line 268 "term_constr_fixpoint.m"
{
#line 268 "term_constr_fixpoint.m"
  {
#line 268 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 268 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_15 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;
#line 268 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_16 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 268 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_15 == transform_hlds__term_constr_fixpoint__CastY_16);
#line 268 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = MR_TRUE;
#line 268 "term_constr_fixpoint.m"
    else
#line 268 "term_constr_fixpoint.m"
      {
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_18_18;
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_20_20;
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_21_21;
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 2)));
#line 268 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 3)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 4)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 5)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));
#line 268 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 3)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 4)));
#line 268 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 5)));

#line 1952 "transform_hlds.term_constr_fixpoint.c"
        {
#line 1954 "transform_hlds.term_constr_fixpoint.c"
          transform_hlds__term_constr_fixpoint__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__term_constr_fixpoint__V_3_3, transform_hlds__term_constr_fixpoint__V_9_9);
        }
#line 268 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
          {
#line 1961 "transform_hlds.term_constr_fixpoint.c"
            transform_hlds__term_constr_fixpoint__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[2];
#line 1963 "transform_hlds.term_constr_fixpoint.c"
            {
#line 1965 "transform_hlds.term_constr_fixpoint.c"
              transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_fixpoint__TypeInfo_18_18, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_4_4)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_10_10)));
            }
#line 268 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
              {
#line 1972 "transform_hlds.term_constr_fixpoint.c"
                {
#line 1974 "transform_hlds.term_constr_fixpoint.c"
                  transform_hlds__term_constr_fixpoint__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_11_11);
                }
#line 268 "term_constr_fixpoint.m"
                if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
                  {
#line 1981 "transform_hlds.term_constr_fixpoint.c"
                    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_6_6 == transform_hlds__term_constr_fixpoint__V_12_12);
#line 268 "term_constr_fixpoint.m"
                    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
                      {
#line 1987 "transform_hlds.term_constr_fixpoint.c"
                        transform_hlds__term_constr_fixpoint__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[3];
#line 1989 "transform_hlds.term_constr_fixpoint.c"
                        {
#line 1991 "transform_hlds.term_constr_fixpoint.c"
                          transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_fixpoint__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_7_7)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_13_13)));
                        }
#line 268 "term_constr_fixpoint.m"
                        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 268 "term_constr_fixpoint.m"
                          {
#line 1998 "transform_hlds.term_constr_fixpoint.c"
                            transform_hlds__term_constr_fixpoint__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[4];
#line 2000 "transform_hlds.term_constr_fixpoint.c"
                            {
#line 2002 "transform_hlds.term_constr_fixpoint.c"
                              return transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_fixpoint__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_8_8)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_14_14)));
                            }
#line 268 "term_constr_fixpoint.m"
                          }
#line 268 "term_constr_fixpoint.m"
                      }
#line 268 "term_constr_fixpoint.m"
                  }
#line 268 "term_constr_fixpoint.m"
              }
#line 268 "term_constr_fixpoint.m"
          }
#line 268 "term_constr_fixpoint.m"
      }
#line 268 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__succeeded;
#line 268 "term_constr_fixpoint.m"
  }
#line 268 "term_constr_fixpoint.m"
}

#line 473 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(
#line 473 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 473 "term_constr_fixpoint.m"
{
#line 473 "term_constr_fixpoint.m"
  {
#line 473 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 473 "term_constr_fixpoint.m"
    MR_builtin_longjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0, 1);
#line 473 "term_constr_fixpoint.m"
  }
#line 473 "term_constr_fixpoint.m"
}

#line 473 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3(
#line 473 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 473 "term_constr_fixpoint.m"
{
#line 473 "term_constr_fixpoint.m"
  {
#line 473 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 473 "term_constr_fixpoint.m"
    (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22 = ((MR_Word) (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22);
#line 473 "term_constr_fixpoint.m"
    {
#line 473 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(transform_hlds__term_constr_fixpoint__env_ptr);
#line 473 "term_constr_fixpoint.m"
      return;
    }
#line 473 "term_constr_fixpoint.m"
  }
#line 473 "term_constr_fixpoint.m"
}

#line 473 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(
#line 473 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 473 "term_constr_fixpoint.m"
{
#line 473 "term_constr_fixpoint.m"
  {
#line 473 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 474 "term_constr_fixpoint.m"
    {
#line 474 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = libs__lp_rational__entailed_3_p_0((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22);
    }
#line 474 "term_constr_fixpoint.m"
    (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = !((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded);
#line 474 "term_constr_fixpoint.m"
    if ((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
#line 474 "term_constr_fixpoint.m"
      {
#line 474 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(transform_hlds__term_constr_fixpoint__env_ptr);
#line 474 "term_constr_fixpoint.m"
        return;
      }
#line 473 "term_constr_fixpoint.m"
  }
#line 473 "term_constr_fixpoint.m"
}

#line 473 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(
#line 473 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 473 "term_constr_fixpoint.m"
{
#line 473 "term_constr_fixpoint.m"
  {
#line 473 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 473 "term_constr_fixpoint.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0) == 0)
#line 473 "term_constr_fixpoint.m"
      {
#line 473 "term_constr_fixpoint.m"
        {
#line 473 "term_constr_fixpoint.m"
          {
#line 473 "term_constr_fixpoint.m"
            mercury__list__member_2_p_1((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, &(transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20, transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3, transform_hlds__term_constr_fixpoint__env_ptr);
          }
#line 473 "term_constr_fixpoint.m"
        }
#line 473 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = MR_FALSE;
#line 473 "term_constr_fixpoint.m"
      }
#line 473 "term_constr_fixpoint.m"
    else
#line 473 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = MR_TRUE;
#line 473 "term_constr_fixpoint.m"
  }
#line 473 "term_constr_fixpoint.m"
}

#line 452 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(
#line 452 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
#line 452 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
#line 452 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_10,
#line 452 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__OldPoly_11,
#line 452 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__NewPoly_12,
#line 452 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__ResultPoly_13,
#line 452 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__ChangeFlag_14)
#line 452 "term_constr_fixpoint.m"
{
#line 452 "term_constr_fixpoint.m"
  {
#line 452 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s transform_hlds__term_constr_fixpoint__env;

#line 452 "term_constr_fixpoint.m"
    (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9 = transform_hlds__term_constr_fixpoint__SizeVarSet_9;
#line 456 "term_constr_fixpoint.m"
    {
#line 456 "term_constr_fixpoint.m"
      MR_Integer transform_hlds__term_constr_fixpoint__Threshold_8 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;

#line 457 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = (transform_hlds__term_constr_fixpoint__Iteration_10 > transform_hlds__term_constr_fixpoint__Threshold_8);
#line 459 "term_constr_fixpoint.m"
      if ((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
#line 458 "term_constr_fixpoint.m"
        {
#line 458 "term_constr_fixpoint.m"
          *transform_hlds__term_constr_fixpoint__ResultPoly_13 = libs__polyhedron__widen_3_f_0(transform_hlds__term_constr_fixpoint__OldPoly_11, transform_hlds__term_constr_fixpoint__NewPoly_12, (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9);
        }
#line 459 "term_constr_fixpoint.m"
      else
#line 460 "term_constr_fixpoint.m"
        *transform_hlds__term_constr_fixpoint__ResultPoly_13 = transform_hlds__term_constr_fixpoint__NewPoly_12;
#line 468 "term_constr_fixpoint.m"
      {
#line 468 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_fixpoint__NewPoly_12);
      }
#line 470 "term_constr_fixpoint.m"
      {
#line 470 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_fixpoint__OldPoly_11);
      }
#line 473 "term_constr_fixpoint.m"
      {
#line 473 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(&transform_hlds__term_constr_fixpoint__env);
      }
#line 478 "term_constr_fixpoint.m"
      if ((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
#line 477 "term_constr_fixpoint.m"
        *transform_hlds__term_constr_fixpoint__ChangeFlag_14 = (MR_Integer) 1;
#line 478 "term_constr_fixpoint.m"
      else
#line 479 "term_constr_fixpoint.m"
        *transform_hlds__term_constr_fixpoint__ChangeFlag_14 = (MR_Integer) 0;
#line 456 "term_constr_fixpoint.m"
    }
#line 452 "term_constr_fixpoint.m"
  }
#line 452 "term_constr_fixpoint.m"
}

#line 388 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(
#line 388 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_6,
#line 388 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
#line 388 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goal_8,
#line 388 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_13,
#line 388 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_14)
#line 388 "term_constr_fixpoint.m"
{
#line 391 "term_constr_fixpoint.m"
  {
#line 391 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 391 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 1)));
#line 391 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_11;
#line 391 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Polyhedron1_12;
#line 391 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_15_15;
#line 391 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_16_16;
#line 391 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__V_18_18;
#line 392 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 0)));
#line 392 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 2)));
#line 392 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 3)));
#line 392 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 4)));
#line 392 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 5)));
#line 395 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_24_24;
#line 395 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_25_25;
#line 395 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_26_26;
#line 395 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_27_27;
#line 395 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_28_28;

#line 393 "term_constr_fixpoint.m"
    {
#line 393 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_15_15 = libs__polyhedron__universe_0_f_0();
    }
#line 393 "term_constr_fixpoint.m"
    {
#line 393 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(transform_hlds__term_constr_fixpoint__Info_6, transform_hlds__term_constr_fixpoint__Goal_8, transform_hlds__term_constr_fixpoint__V_15_15, &transform_hlds__term_constr_fixpoint__Polyhedron0_11);
    }
#line 394 "term_constr_fixpoint.m"
    {
#line 394 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__Polyhedron1_12 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_7, transform_hlds__term_constr_fixpoint__SizeVarSet_10, transform_hlds__term_constr_fixpoint__Polyhedron0_11);
    }
#line 395 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 0)));
#line 395 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 1)));
#line 395 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 2)));
#line 395 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 3)));
#line 395 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 4)));
#line 395 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 5)));
#line 395 "term_constr_fixpoint.m"
    {
#line 395 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_16_16, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_18_18));
#line 395 "term_constr_fixpoint.m"
    }
#line 395 "term_constr_fixpoint.m"
    {
#line 395 "term_constr_fixpoint.m"
      libs__polyhedron__convex_union_5_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_10, transform_hlds__term_constr_fixpoint__V_16_16, transform_hlds__term_constr_fixpoint__Polyhedron1_12, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_13, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_14);
#line 395 "term_constr_fixpoint.m"
      return;
    }
#line 391 "term_constr_fixpoint.m"
  }
#line 388 "term_constr_fixpoint.m"
}

#line 384 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1(
#line 384 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 384 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 384 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 384 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 384 "term_constr_fixpoint.m"
{
#line 384 "term_constr_fixpoint.m"
  {
#line 384 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 384 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_14;

#line 384 "term_constr_fixpoint.m"
    {
#line 384 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_14);
    }
#line 384 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_14));
#line 384 "term_constr_fixpoint.m"
  }
#line 384 "term_constr_fixpoint.m"
}

#line 380 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(
#line 380 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goals_6,
#line 380 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
#line 380 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
#line 380 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
#line 380 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12)
#line 380 "term_constr_fixpoint.m"
{
#line 383 "term_constr_fixpoint.m"
  {
#line 383 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 383 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ConvexUnion_10;
#line 383 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_13_13;
#line 383 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_14_14;
#line 384 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__conv1_ConvexUnion_10;

#line 384 "term_constr_fixpoint.m"
    {
#line 384 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 384 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_7[0]));
#line 384 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1));
#line 384 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 384 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Info_8));
#line 384 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Locals_7));
#line 384 "term_constr_fixpoint.m"
    }
#line 385 "term_constr_fixpoint.m"
    {
#line 385 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_14_14 = libs__polyhedron__empty_0_f_0();
    }
#line 384 "term_constr_fixpoint.m"
    {
#line 384 "term_constr_fixpoint.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, transform_hlds__term_constr_fixpoint__V_13_13, transform_hlds__term_constr_fixpoint__Goals_6, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_14_14)), &transform_hlds__term_constr_fixpoint__conv1_ConvexUnion_10);
    }
#line 384 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__ConvexUnion_10 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv1_ConvexUnion_10);
#line 386 "term_constr_fixpoint.m"
    {
#line 386 "term_constr_fixpoint.m"
      libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__ConvexUnion_10, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);
#line 386 "term_constr_fixpoint.m"
      return;
    }
#line 383 "term_constr_fixpoint.m"
  }
#line 380 "term_constr_fixpoint.m"
}

#line 358 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(
#line 358 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Locals_6,
#line 358 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_7,
#line 358 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8,
#line 358 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
#line 358 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12)
#line 358 "term_constr_fixpoint.m"
{
#line 361 "term_constr_fixpoint.m"
  {
#line 361 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 361 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron_10;

#line 362 "term_constr_fixpoint.m"
    {
#line 362 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8);
    }
#line 364 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 363 "term_constr_fixpoint.m"
      {
#line 363 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__GoalPolyhedron_10 = libs__polyhedron__empty_0_f_0();
      }
#line 364 "term_constr_fixpoint.m"
    else
#line 365 "term_constr_fixpoint.m"
      {
#line 365 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 1)));
#line 365 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 0)));
#line 365 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 2)));
#line 365 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 3)));
#line 365 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 4)));
#line 365 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 5)));

#line 365 "term_constr_fixpoint.m"
        {
#line 365 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__GoalPolyhedron_10 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_6, transform_hlds__term_constr_fixpoint__V_13_13, transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8);
        }
#line 365 "term_constr_fixpoint.m"
      }
#line 368 "term_constr_fixpoint.m"
    {
#line 368 "term_constr_fixpoint.m"
      libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron_10, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);
#line 368 "term_constr_fixpoint.m"
      return;
    }
#line 361 "term_constr_fixpoint.m"
  }
#line 358 "term_constr_fixpoint.m"
}

#line 314 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1(
#line 314 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 314 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 314 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 314 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 314 "term_constr_fixpoint.m"
{
#line 314 "term_constr_fixpoint.m"
  {
#line 314 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 314 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_34;

#line 314 "term_constr_fixpoint.m"
    {
#line 314 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_34);
    }
#line 314 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_34));
#line 314 "term_constr_fixpoint.m"
  }
#line 314 "term_constr_fixpoint.m"
}

#line 288 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(
#line 288 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_5,
#line 288 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Goal_6,
#line 288 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33,
#line 288 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34)
#line 288 "term_constr_fixpoint.m"
{
#line 293 "term_constr_fixpoint.m"
  {
#line 293 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

#line 293 "term_constr_fixpoint.m"
#line 293 "term_constr_fixpoint.m"
    switch (MR_tag((MR_Word) transform_hlds__term_constr_fixpoint__Goal_6)) {
#line 293 "term_constr_fixpoint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 293 "term_constr_fixpoint.m"
      case (MR_Integer) 0:
#line 293 "term_constr_fixpoint.m"
        {
#line 293 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
#line 293 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Locals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));
#line 293 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__PriorConstraints_12;
#line 293 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_13;
#line 293 "term_constr_fixpoint.m"
          MR_Integer transform_hlds__term_constr_fixpoint___Size_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
#line 293 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 3)));

#line 307 "term_constr_fixpoint.m"
          {
#line 307 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__PriorConstraints_12 = libs__polyhedron__universe_0_f_0();
          }
#line 308 "term_constr_fixpoint.m"
          {
#line 308 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(transform_hlds__term_constr_fixpoint__Goals_8, transform_hlds__term_constr_fixpoint__Locals_10, transform_hlds__term_constr_fixpoint__Info_5, transform_hlds__term_constr_fixpoint__PriorConstraints_12, &transform_hlds__term_constr_fixpoint__Polyhedron0_13);
          }
#line 310 "term_constr_fixpoint.m"
          {
#line 310 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(transform_hlds__term_constr_fixpoint__Locals_10, transform_hlds__term_constr_fixpoint__Info_5, transform_hlds__term_constr_fixpoint__Polyhedron0_13, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
#line 310 "term_constr_fixpoint.m"
            return;
          }
#line 293 "term_constr_fixpoint.m"
        }
#line 293 "term_constr_fixpoint.m"
        break;
#line 293 "term_constr_fixpoint.m"
      case (MR_Integer) 1:
#line 312 "term_constr_fixpoint.m"
        {
#line 312 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_40_40;
#line 312 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_41_41;
#line 312 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Goals_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
#line 312 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Locals_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
#line 312 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_46;
#line 312 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron_85;
#line 312 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));
#line 313 "term_constr_fixpoint.m"
          MR_Box transform_hlds__term_constr_fixpoint__conv1_Polyhedron0_46;

#line 314 "term_constr_fixpoint.m"
          {
#line 314 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 314 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_6[0]));
#line 314 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1));
#line 314 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 314 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Info_5));
#line 314 "term_constr_fixpoint.m"
          }
#line 314 "term_constr_fixpoint.m"
          {
#line 314 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_41_41 = libs__polyhedron__universe_0_f_0();
          }
#line 313 "term_constr_fixpoint.m"
          {
#line 313 "term_constr_fixpoint.m"
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, transform_hlds__term_constr_fixpoint__V_40_40, transform_hlds__term_constr_fixpoint__Goals_44, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_41_41)), &transform_hlds__term_constr_fixpoint__conv1_Polyhedron0_46);
          }
#line 313 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__Polyhedron0_46 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv1_Polyhedron0_46);
#line 362 "term_constr_fixpoint.m"
          {
#line 362 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__Polyhedron0_46);
          }
#line 364 "term_constr_fixpoint.m"
          if (transform_hlds__term_constr_fixpoint__succeeded)
#line 363 "term_constr_fixpoint.m"
            {
#line 363 "term_constr_fixpoint.m"
              transform_hlds__term_constr_fixpoint__GoalPolyhedron_85 = libs__polyhedron__empty_0_f_0();
            }
#line 364 "term_constr_fixpoint.m"
          else
#line 365 "term_constr_fixpoint.m"
            {
#line 365 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 1)));
#line 365 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 0)));
#line 365 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 2)));
#line 365 "term_constr_fixpoint.m"
              MR_Integer transform_hlds__term_constr_fixpoint__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 3)));
#line 365 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 4)));
#line 365 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 5)));

#line 365 "term_constr_fixpoint.m"
              {
#line 365 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__GoalPolyhedron_85 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_45, transform_hlds__term_constr_fixpoint__V_86_86, transform_hlds__term_constr_fixpoint__Polyhedron0_46);
              }
#line 365 "term_constr_fixpoint.m"
            }
#line 368 "term_constr_fixpoint.m"
          {
#line 368 "term_constr_fixpoint.m"
            libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron_85, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
#line 368 "term_constr_fixpoint.m"
            return;
          }
#line 312 "term_constr_fixpoint.m"
        }
#line 293 "term_constr_fixpoint.m"
        break;
#line 293 "term_constr_fixpoint.m"
      case (MR_Integer) 2:
#line 319 "term_constr_fixpoint.m"
        {
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallPPId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallZeros_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 3)));
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallArgsPoly_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 6)));
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallPPId_21 = (MR_Word) transform_hlds__term_constr_fixpoint__CallPPId0_15;
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallProcInfo_23;
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallTerm2Info_24;
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25;
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 0)));
#line 319 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Locals_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 4)));
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
#line 318 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 5)));
#line 321 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 1)));
#line 321 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 2)));
#line 321 "term_constr_fixpoint.m"
          MR_Integer transform_hlds__term_constr_fixpoint__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 3)));
#line 321 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 4)));
#line 321 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 5)));
#line 321 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_22_22;

#line 321 "term_constr_fixpoint.m"
          {
#line 321 "term_constr_fixpoint.m"
            hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_fixpoint__V_36_36, transform_hlds__term_constr_fixpoint__CallPPId_21, &transform_hlds__term_constr_fixpoint__V_22_22, &transform_hlds__term_constr_fixpoint__CallProcInfo_23);
          }
#line 323 "term_constr_fixpoint.m"
          {
#line 323 "term_constr_fixpoint.m"
            hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_fixpoint__CallProcInfo_23, &transform_hlds__term_constr_fixpoint__CallTerm2Info_24);
          }
#line 324 "term_constr_fixpoint.m"
          {
#line 324 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25 = transform_hlds__term_constr_main_types__success_constrs_1_f_0(transform_hlds__term_constr_fixpoint__CallTerm2Info_24);
          }
#line 328 "term_constr_fixpoint.m"
          if ((transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "term_constr_fixpoint.m"
            {
#line 327 "term_constr_fixpoint.m"
              *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34 = libs__polyhedron__empty_0_f_0();
            }
#line 328 "term_constr_fixpoint.m"
          else
#line 329 "term_constr_fixpoint.m"
            {
#line 329 "term_constr_fixpoint.m"
              MR_Word transform_hlds__term_constr_fixpoint__SizeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25, (MR_Integer) 0)));

#line 330 "term_constr_fixpoint.m"
              {
#line 330 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__SizeInfo_26);
              }
#line 332 "term_constr_fixpoint.m"
              if (transform_hlds__term_constr_fixpoint__succeeded)
#line 331 "term_constr_fixpoint.m"
                {
#line 331 "term_constr_fixpoint.m"
                  *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34 = libs__polyhedron__empty_0_f_0();
                }
#line 332 "term_constr_fixpoint.m"
              else
#line 336 "term_constr_fixpoint.m"
                {
#line 333 "term_constr_fixpoint.m"
                  {
#line 333 "term_constr_fixpoint.m"
                    transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_universe_1_p_0(transform_hlds__term_constr_fixpoint__SizeInfo_26);
                  }
#line 336 "term_constr_fixpoint.m"
                  if (transform_hlds__term_constr_fixpoint__succeeded)
#line 336 "term_constr_fixpoint.m"
                    *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33;
#line 336 "term_constr_fixpoint.m"
                  else
#line 337 "term_constr_fixpoint.m"
                    {
#line 337 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__HeadVars_27;
#line 337 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__SubstMap_28;
#line 337 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__Polyhedron1_29;
#line 337 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__Polyhedron2_30;
#line 337 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_47;
#line 337 "term_constr_fixpoint.m"
                      MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron_71;

#line 337 "term_constr_fixpoint.m"
                      {
#line 337 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__HeadVars_27 = transform_hlds__term_constr_main_types__head_vars_1_f_0(transform_hlds__term_constr_fixpoint__CallTerm2Info_24);
                      }
#line 338 "term_constr_fixpoint.m"
                      {
#line 338 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__SubstMap_28 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(transform_hlds__term_constr_fixpoint__CallVars_17, transform_hlds__term_constr_fixpoint__HeadVars_27);
                      }
#line 339 "term_constr_fixpoint.m"
                      {
#line 339 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__Polyhedron0_47 = libs__polyhedron__substitute_vars_2_f_0(transform_hlds__term_constr_fixpoint__SubstMap_28, transform_hlds__term_constr_fixpoint__SizeInfo_26);
                      }
#line 341 "term_constr_fixpoint.m"
                      {
#line 341 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__Polyhedron1_29 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_fixpoint__Polyhedron0_47, transform_hlds__term_constr_fixpoint__CallArgsPoly_20);
                      }
#line 345 "term_constr_fixpoint.m"
                      {
#line 345 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__Polyhedron2_30 = libs__polyhedron__zero_vars_2_f_0(transform_hlds__term_constr_fixpoint__CallZeros_18, transform_hlds__term_constr_fixpoint__Polyhedron1_29);
                      }
#line 362 "term_constr_fixpoint.m"
                      {
#line 362 "term_constr_fixpoint.m"
                        transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__Polyhedron2_30);
                      }
#line 364 "term_constr_fixpoint.m"
                      if (transform_hlds__term_constr_fixpoint__succeeded)
#line 363 "term_constr_fixpoint.m"
                        {
#line 363 "term_constr_fixpoint.m"
                          transform_hlds__term_constr_fixpoint__GoalPolyhedron_71 = libs__polyhedron__empty_0_f_0();
                        }
#line 364 "term_constr_fixpoint.m"
                      else
#line 365 "term_constr_fixpoint.m"
                        {
#line 365 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 1)));
#line 365 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 0)));
#line 365 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 2)));
#line 365 "term_constr_fixpoint.m"
                          MR_Integer transform_hlds__term_constr_fixpoint__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 3)));
#line 365 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 4)));
#line 365 "term_constr_fixpoint.m"
                          MR_Word transform_hlds__term_constr_fixpoint__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 5)));

#line 365 "term_constr_fixpoint.m"
                          {
#line 365 "term_constr_fixpoint.m"
                            transform_hlds__term_constr_fixpoint__GoalPolyhedron_71 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_52, transform_hlds__term_constr_fixpoint__V_72_72, transform_hlds__term_constr_fixpoint__Polyhedron2_30);
                          }
#line 365 "term_constr_fixpoint.m"
                        }
#line 368 "term_constr_fixpoint.m"
                      {
#line 368 "term_constr_fixpoint.m"
                        libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron_71, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
#line 368 "term_constr_fixpoint.m"
                        return;
                      }
#line 337 "term_constr_fixpoint.m"
                    }
#line 336 "term_constr_fixpoint.m"
                }
#line 329 "term_constr_fixpoint.m"
            }
#line 319 "term_constr_fixpoint.m"
        }
#line 293 "term_constr_fixpoint.m"
        break;
#line 293 "term_constr_fixpoint.m"
      case (MR_Integer) 3:
#line 352 "term_constr_fixpoint.m"
        {
#line 352 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Poly_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
#line 352 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__Locals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
#line 352 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));

#line 353 "term_constr_fixpoint.m"
          {
#line 353 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(transform_hlds__term_constr_fixpoint__Locals_54, transform_hlds__term_constr_fixpoint__Info_5, transform_hlds__term_constr_fixpoint__Poly_31, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
#line 353 "term_constr_fixpoint.m"
            return;
          }
#line 352 "term_constr_fixpoint.m"
        }
#line 293 "term_constr_fixpoint.m"
        break;
#line 293 "term_constr_fixpoint.m"
    }
#line 293 "term_constr_fixpoint.m"
  }
#line 288 "term_constr_fixpoint.m"
}

#line 278 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_8,
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__PPId_10,
#line 278 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_11,
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVars_12,
#line 278 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Zeros_13)
#line 278 "term_constr_fixpoint.m"
{
#line 283 "term_constr_fixpoint.m"
  {
#line 283 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 283 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__7_7;

#line 283 "term_constr_fixpoint.m"
    {
#line 283 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 283 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__ModuleInfo_8));
#line 283 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__SizeVarSet_9));
#line 283 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 2) = ((MR_Box) (transform_hlds__term_constr_fixpoint__PPId_10));
#line 283 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__MaxMatrixSize_11));
#line 283 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__HeadVars_12));
#line 283 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 5) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Zeros_13));
#line 283 "term_constr_fixpoint.m"
    }
#line 283 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__HeadVar__7_7;
#line 283 "term_constr_fixpoint.m"
  }
#line 278 "term_constr_fixpoint.m"
}

#line 160 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(
#line 160 "term_constr_fixpoint.m"
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_7,
#line 160 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Options_8,
#line 160 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_9,
#line 160 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Proc_10,
#line 160 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_0_34,
#line 160 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_35)
#line 160 "term_constr_fixpoint.m"
{
#line 165 "term_constr_fixpoint.m"
  {
#line 165 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_136_136;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__WideningInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Options_8, (MR_Integer) 0)));
#line 165 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Options_8, (MR_Integer) 1)));
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__AbstractPPId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 0)));
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__PPId_15 = (MR_Word) transform_hlds__term_constr_fixpoint__AbstractPPId_14;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 7)));
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Zeros_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 8)));
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 3)));
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Globals_19;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__DebugTerm_20;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Info_22;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__BugConstrs0_24;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ConstrVarsSet_25;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVarSet_26;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__BadVarsSet_27;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__BadVars_28;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ArgSizeInfo_29;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__OldPolyhedron_30;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ChangeFlag_32;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__ThisIterationInfo_33;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_51_51;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_52_52;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_53_53;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_55_55;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
#line 165 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65;
#line 168 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 1)));
#line 168 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 2)));
#line 168 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 4)));
#line 168 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 5)));
#line 168 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 6)));
#line 168 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 9)));
#line 168 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 10)));
#line 168 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 11)));
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_113_113;
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_114_114;
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_115_115;
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_116_116;
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_117_117;
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_118_118;
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_119_119;
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_120_120;
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_121_121;
#line 199 "term_constr_fixpoint.m"
    MR_Integer transform_hlds__term_constr_fixpoint__V_122_122;
#line 199 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_123_123;

#line 175 "term_constr_fixpoint.m"
    {
#line 175 "term_constr_fixpoint.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, &transform_hlds__term_constr_fixpoint__Globals_19);
    }
#line 176 "term_constr_fixpoint.m"
    {
#line 176 "term_constr_fixpoint.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_fixpoint__Globals_19, (MR_Integer) 69, &transform_hlds__term_constr_fixpoint__DebugTerm_20);
    }
#line 188 "term_constr_fixpoint.m"
#line 188 "term_constr_fixpoint.m"
    switch (transform_hlds__term_constr_fixpoint__DebugTerm_20) {
#line 188 "term_constr_fixpoint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 188 "term_constr_fixpoint.m"
      case (MR_Integer) 0:
#line 189 "term_constr_fixpoint.m"
        {
#line 189 "term_constr_fixpoint.m"
        }
#line 188 "term_constr_fixpoint.m"
        break;
#line 188 "term_constr_fixpoint.m"
      case (MR_Integer) 1:
#line 179 "term_constr_fixpoint.m"
        {
#line 179 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_46_46;
#line 179 "term_constr_fixpoint.m"
          MR_Word transform_hlds__term_constr_fixpoint__V_48_48;

#line 180 "term_constr_fixpoint.m"
          {
#line 180 "term_constr_fixpoint.m"
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_constr_fixpoint__PPId_15)));
          }
#line 181 "term_constr_fixpoint.m"
          {
#line 181 "term_constr_fixpoint.m"
            mercury__io__write_string_3_p_0((MR_String) ": ");
          }
#line 182 "term_constr_fixpoint.m"
          {
#line 182 "term_constr_fixpoint.m"
            hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, transform_hlds__term_constr_fixpoint__PPId_15);
          }
#line 183 "term_constr_fixpoint.m"
          {
#line 183 "term_constr_fixpoint.m"
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
#line 184 "term_constr_fixpoint.m"
          {
#line 184 "term_constr_fixpoint.m"
            transform_hlds__term_constr_util__write_size_vars_4_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__HeadVars_18);
          }
#line 185 "term_constr_fixpoint.m"
          {
#line 185 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 185 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_48_48, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Iteration_7));
#line 185 "term_constr_fixpoint.m"
          }
#line 185 "term_constr_fixpoint.m"
          {
#line 185 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_46_46, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_48_48));
#line 185 "term_constr_fixpoint.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "term_constr_fixpoint.m"
          }
#line 185 "term_constr_fixpoint.m"
          {
#line 185 "term_constr_fixpoint.m"
            mercury__io__format_4_p_0((MR_String) "\nIteration %d:\n", transform_hlds__term_constr_fixpoint__V_46_46);
          }
#line 186 "term_constr_fixpoint.m"
          {
#line 186 "term_constr_fixpoint.m"
            mercury__io__flush_output_2_p_0();
          }
#line 179 "term_constr_fixpoint.m"
        }
#line 188 "term_constr_fixpoint.m"
        break;
#line 188 "term_constr_fixpoint.m"
    }
#line 195 "term_constr_fixpoint.m"
    {
#line 195 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__Info_22 = transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__PPId_15, transform_hlds__term_constr_fixpoint__MaxMatrixSize_13, transform_hlds__term_constr_fixpoint__HeadVars_18, transform_hlds__term_constr_fixpoint__Zeros_17);
    }
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 0)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 1)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 2)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 3)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 4)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 5)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 6)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 7)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 8)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 9)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 10)));
#line 199 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 11)));
#line 199 "term_constr_fixpoint.m"
    {
#line 199 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_52_52 = libs__polyhedron__universe_0_f_0();
    }
#line 199 "term_constr_fixpoint.m"
    {
#line 199 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(transform_hlds__term_constr_fixpoint__Info_22, transform_hlds__term_constr_fixpoint__V_51_51, transform_hlds__term_constr_fixpoint__V_52_52, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_53_53);
    }
#line 201 "term_constr_fixpoint.m"
    {
#line 201 "term_constr_fixpoint.m"
      libs__polyhedron__optimize_3_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_53_53, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54);
    }
#line 206 "term_constr_fixpoint.m"
    {
#line 206 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__BugConstrs0_24 = libs__polyhedron__constraints_1_f_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54);
    }
#line 207 "term_constr_fixpoint.m"
    {
#line 207 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__ConstrVarsSet_25 = libs__lp_rational__get_vars_from_constraints_1_f_0(transform_hlds__term_constr_fixpoint__BugConstrs0_24);
    }
#line 3197 "transform_hlds.term_constr_fixpoint.c"
    transform_hlds__term_constr_fixpoint__TypeInfo_136_136 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[1];
#line 208 "term_constr_fixpoint.m"
    {
#line 208 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__HeadVarSet_26 = mercury__set__from_list_1_f_0(transform_hlds__term_constr_fixpoint__TypeInfo_136_136, transform_hlds__term_constr_fixpoint__HeadVars_18);
    }
#line 209 "term_constr_fixpoint.m"
    {
#line 209 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__BadVarsSet_27 = mercury__set__difference_2_f_0(transform_hlds__term_constr_fixpoint__TypeInfo_136_136, transform_hlds__term_constr_fixpoint__ConstrVarsSet_25, transform_hlds__term_constr_fixpoint__HeadVarSet_26);
    }
#line 210 "term_constr_fixpoint.m"
    {
#line 210 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__BadVars_28 = mercury__set__to_sorted_list_1_f_0(transform_hlds__term_constr_fixpoint__TypeInfo_136_136, transform_hlds__term_constr_fixpoint__BadVarsSet_27);
    }
#line 211 "term_constr_fixpoint.m"
    {
#line 211 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_55_55 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__BadVars_28, transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54);
    }
#line 212 "term_constr_fixpoint.m"
    {
#line 212 "term_constr_fixpoint.m"
      libs__polyhedron__optimize_3_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_55_55, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56);
    }
#line 223 "term_constr_fixpoint.m"
#line 223 "term_constr_fixpoint.m"
    switch (transform_hlds__term_constr_fixpoint__DebugTerm_20) {
#line 223 "term_constr_fixpoint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 223 "term_constr_fixpoint.m"
      case (MR_Integer) 0:
#line 224 "term_constr_fixpoint.m"
        {
#line 224 "term_constr_fixpoint.m"
        }
#line 223 "term_constr_fixpoint.m"
        break;
#line 223 "term_constr_fixpoint.m"
      case (MR_Integer) 1:
#line 218 "term_constr_fixpoint.m"
        {
#line 219 "term_constr_fixpoint.m"
          {
#line 219 "term_constr_fixpoint.m"
            libs__polyhedron__write_polyhedron_4_p_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56, transform_hlds__term_constr_fixpoint__SizeVarSet_16);
          }
#line 220 "term_constr_fixpoint.m"
          {
#line 220 "term_constr_fixpoint.m"
            mercury__io__nl_2_p_0();
          }
#line 221 "term_constr_fixpoint.m"
          {
#line 221 "term_constr_fixpoint.m"
            mercury__io__flush_output_2_p_0();
          }
#line 218 "term_constr_fixpoint.m"
        }
#line 223 "term_constr_fixpoint.m"
        break;
#line 223 "term_constr_fixpoint.m"
    }
#line 228 "term_constr_fixpoint.m"
    {
#line 228 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__ArgSizeInfo_29 = transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_f_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, transform_hlds__term_constr_fixpoint__PPId_15);
    }
#line 239 "term_constr_fixpoint.m"
    if ((transform_hlds__term_constr_fixpoint__ArgSizeInfo_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "term_constr_fixpoint.m"
      {
#line 238 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__OldPolyhedron_30 = libs__polyhedron__empty_0_f_0();
      }
#line 239 "term_constr_fixpoint.m"
    else
#line 240 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__OldPolyhedron_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__ArgSizeInfo_29, (MR_Integer) 0)));
#line 243 "term_constr_fixpoint.m"
    {
#line 243 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56);
    }
#line 249 "term_constr_fixpoint.m"
    if (transform_hlds__term_constr_fixpoint__succeeded)
#line 246 "term_constr_fixpoint.m"
      {
#line 244 "term_constr_fixpoint.m"
        {
#line 244 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__OldPolyhedron_30);
        }
#line 246 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 245 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__ChangeFlag_32 = (MR_Integer) 0;
#line 246 "term_constr_fixpoint.m"
        else
#line 247 "term_constr_fixpoint.m"
          {
#line 247 "term_constr_fixpoint.m"
            {
#line 247 "term_constr_fixpoint.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_fixpoint", (MR_String) "predicate \140transform_hlds.term_constr_fixpoint.term_iterate_over_abstract_proc\'/6", (MR_String) "old polyhedron is empty");
#line 247 "term_constr_fixpoint.m"
              return;
            }
#line 247 "term_constr_fixpoint.m"
          }
#line 246 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
#line 246 "term_constr_fixpoint.m"
      }
#line 249 "term_constr_fixpoint.m"
    else
#line 255 "term_constr_fixpoint.m"
      {
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 9)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 0)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 1)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 2)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 3)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 4)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 5)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 6)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 7)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 8)));
#line 253 "term_constr_fixpoint.m"
        MR_Integer transform_hlds__term_constr_fixpoint__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 10)));
#line 253 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 11)));

#line 253 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_64_64 == (MR_Integer) 0);
#line 255 "term_constr_fixpoint.m"
        if (transform_hlds__term_constr_fixpoint__succeeded)
#line 254 "term_constr_fixpoint.m"
          {
#line 254 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__ChangeFlag_32 = (MR_Integer) 0;
#line 254 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
#line 254 "term_constr_fixpoint.m"
          }
#line 255 "term_constr_fixpoint.m"
        else
#line 257 "term_constr_fixpoint.m"
          {
#line 255 "term_constr_fixpoint.m"
            {
#line 255 "term_constr_fixpoint.m"
              transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__OldPolyhedron_30);
            }
#line 257 "term_constr_fixpoint.m"
            if (transform_hlds__term_constr_fixpoint__succeeded)
#line 256 "term_constr_fixpoint.m"
              {
#line 256 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__ChangeFlag_32 = (MR_Integer) 1;
#line 256 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
#line 256 "term_constr_fixpoint.m"
              }
#line 257 "term_constr_fixpoint.m"
            else
#line 258 "term_constr_fixpoint.m"
              {
#line 258 "term_constr_fixpoint.m"
                transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(transform_hlds__term_constr_fixpoint__WideningInfo_12, transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__Iteration_7, transform_hlds__term_constr_fixpoint__OldPolyhedron_30, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65, &transform_hlds__term_constr_fixpoint__ChangeFlag_32);
              }
#line 257 "term_constr_fixpoint.m"
          }
#line 255 "term_constr_fixpoint.m"
      }
#line 262 "term_constr_fixpoint.m"
    {
#line 262 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__ThisIterationInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 262 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ThisIterationInfo_33, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__PPId_15));
#line 262 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ThisIterationInfo_33, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65));
#line 262 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ThisIterationInfo_33, 2) = ((MR_Box) (transform_hlds__term_constr_fixpoint__ChangeFlag_32));
#line 262 "term_constr_fixpoint.m"
    }
#line 264 "term_constr_fixpoint.m"
    {
#line 264 "term_constr_fixpoint.m"
      MR_Word base;
#line 264 "term_constr_fixpoint.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "term_constr_fixpoint.m"
      *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_35 = base;
#line 264 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__ThisIterationInfo_33));
#line 264 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_0_34));
#line 264 "term_constr_fixpoint.m"
    }
#line 165 "term_constr_fixpoint.m"
  }
#line 160 "term_constr_fixpoint.m"
}

#line 151 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(
#line 151 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__Info_4,
#line 151 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_9,
#line 151 "term_constr_fixpoint.m"
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_10)
#line 151 "term_constr_fixpoint.m"
{
#line 154 "term_constr_fixpoint.m"
  {
#line 154 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 154 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_4, (MR_Integer) 0)));
#line 154 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__Poly_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_4, (MR_Integer) 1)));
#line 155 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_4, (MR_Integer) 2)));

#line 156 "term_constr_fixpoint.m"
    {
#line 156 "term_constr_fixpoint.m"
      transform_hlds__term_constr_util__update_arg_size_info_4_p_0(transform_hlds__term_constr_fixpoint__PPId_6, transform_hlds__term_constr_fixpoint__Poly_7, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_10);
#line 156 "term_constr_fixpoint.m"
      return;
    }
#line 154 "term_constr_fixpoint.m"
  }
#line 151 "term_constr_fixpoint.m"
}

#line 146 "term_constr_fixpoint.m"
static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__or_flags_1_f_0(
#line 146 "term_constr_fixpoint.m"
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1)
#line 146 "term_constr_fixpoint.m"
{
#line 148 "term_constr_fixpoint.m"
  {
#line 148 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 148 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2;

#line 148 "term_constr_fixpoint.m"
    if ((transform_hlds__term_constr_fixpoint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__HeadVar__2_2 = (MR_Integer) 0;
#line 148 "term_constr_fixpoint.m"
    else
#line 149 "term_constr_fixpoint.m"
      {
#line 149 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__Info_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
#line 149 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__Infos_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
#line 149 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_3, (MR_Integer) 2)));
#line 149 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6;
#line 149 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_3, (MR_Integer) 0)));
#line 149 "term_constr_fixpoint.m"
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_3, (MR_Integer) 1)));

#line 149 "term_constr_fixpoint.m"
        {
#line 149 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__V_6_6 = transform_hlds__term_constr_fixpoint__or_flags_1_f_0(transform_hlds__term_constr_fixpoint__Infos_4);
        }
#line 149 "term_constr_fixpoint.m"
        {
#line 149 "term_constr_fixpoint.m"
          return transform_hlds__term_constr_fixpoint__HeadVar__2_2 = mercury__bool__or_2_f_0(transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_6_6);
        }
#line 149 "term_constr_fixpoint.m"
      }
#line 148 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__HeadVar__2_2;
#line 148 "term_constr_fixpoint.m"
  }
#line 146 "term_constr_fixpoint.m"
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
#line 86 "term_constr_fixpoint.m"
  {
#line 86 "term_constr_fixpoint.m"
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
#line 86 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3;

#line 86 "term_constr_fixpoint.m"
    {
#line 86 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 86 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Widening_4));
#line 86 "term_constr_fixpoint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__MaxMatrixSize_5));
#line 86 "term_constr_fixpoint.m"
    }
#line 86 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__HeadVar__3_3;
#line 86 "term_constr_fixpoint.m"
  }
#line 50 "term_constr_fixpoint.m"
}

#line 120 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9(
#line 120 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 120 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 120 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 120 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 120 "term_constr_fixpoint.m"
{
#line 120 "term_constr_fixpoint.m"
  {
#line 120 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 120 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv8_STATE_VARIABLE_ModuleInfo_10;

#line 120 "term_constr_fixpoint.m"
    {
#line 120 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv8_STATE_VARIABLE_ModuleInfo_10);
    }
#line 120 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv8_STATE_VARIABLE_ModuleInfo_10));
#line 120 "term_constr_fixpoint.m"
  }
#line 120 "term_constr_fixpoint.m"
}

#line 142 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8(
#line 142 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 142 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 142 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 142 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 142 "term_constr_fixpoint.m"
{
#line 142 "term_constr_fixpoint.m"
  {
#line 142 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 142 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv6_STATE_VARIABLE_ModuleInfo_10;

#line 142 "term_constr_fixpoint.m"
    {
#line 142 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv6_STATE_VARIABLE_ModuleInfo_10);
    }
#line 142 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv6_STATE_VARIABLE_ModuleInfo_10));
#line 142 "term_constr_fixpoint.m"
  }
#line 142 "term_constr_fixpoint.m"
}

#line 139 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7(
#line 139 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 139 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 139 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 139 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 139 "term_constr_fixpoint.m"
{
#line 139 "term_constr_fixpoint.m"
  {
#line 139 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 139 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv4_STATE_VARIABLE_ModuleInfo_10;

#line 139 "term_constr_fixpoint.m"
    {
#line 139 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv4_STATE_VARIABLE_ModuleInfo_10);
    }
#line 139 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv4_STATE_VARIABLE_ModuleInfo_10));
#line 139 "term_constr_fixpoint.m"
  }
#line 139 "term_constr_fixpoint.m"
}

#line 135 "term_constr_fixpoint.m"
static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6(
#line 135 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 135 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1)
#line 135 "term_constr_fixpoint.m"
{
#line 135 "term_constr_fixpoint.m"
  {
#line 135 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2;
#line 135 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 135 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv3_HeadVar__2_26;

#line 135 "term_constr_fixpoint.m"
    {
#line 135 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__conv3_HeadVar__2_26 = transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__135__1_1_f_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1));
    }
#line 135 "term_constr_fixpoint.m"
    transform_hlds__term_constr_fixpoint__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv3_HeadVar__2_26));
#line 135 "term_constr_fixpoint.m"
    return transform_hlds__term_constr_fixpoint__wrapper_arg_2;
#line 135 "term_constr_fixpoint.m"
  }
#line 135 "term_constr_fixpoint.m"
}

#line 115 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1(
#line 115 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
#line 115 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
#line 115 "term_constr_fixpoint.m"
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
#line 115 "term_constr_fixpoint.m"
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
#line 115 "term_constr_fixpoint.m"
{
#line 115 "term_constr_fixpoint.m"
  {
#line 115 "term_constr_fixpoint.m"
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
#line 115 "term_constr_fixpoint.m"
    MR_Word transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_IterationInfo_35;

#line 115 "term_constr_fixpoint.m"
    {
#line 115 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_IterationInfo_35);
    }
#line 115 "term_constr_fixpoint.m"
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_IterationInfo_35));
#line 115 "term_constr_fixpoint.m"
  }
#line 115 "term_constr_fixpoint.m"
}

#line 132 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(
#line 132 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 132 "term_constr_fixpoint.m"
{
#line 132 "term_constr_fixpoint.m"
  {
#line 132 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 132 "term_constr_fixpoint.m"
    MR_builtin_longjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0, 1);
#line 132 "term_constr_fixpoint.m"
  }
#line 132 "term_constr_fixpoint.m"
}

#line 132 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4(
#line 132 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 132 "term_constr_fixpoint.m"
{
#line 132 "term_constr_fixpoint.m"
  {
#line 132 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 132 "term_constr_fixpoint.m"
    (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15 = ((MR_Word) (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15);
#line 132 "term_constr_fixpoint.m"
    {
#line 132 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(transform_hlds__term_constr_fixpoint__env_ptr);
#line 132 "term_constr_fixpoint.m"
      return;
    }
#line 132 "term_constr_fixpoint.m"
  }
#line 132 "term_constr_fixpoint.m"
}

#line 132 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(
#line 132 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 132 "term_constr_fixpoint.m"
{
#line 132 "term_constr_fixpoint.m"
  {
#line 132 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 132 "term_constr_fixpoint.m"
    {
#line 133 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 0)));
#line 133 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__V_39_39;

#line 133 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 1)));
#line 133 "term_constr_fixpoint.m"
      transform_hlds__term_constr_fixpoint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 2)));
#line 133 "term_constr_fixpoint.m"
      {
#line 133 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = libs__polyhedron__is_empty_1_p_0((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__V_24_24);
      }
#line 133 "term_constr_fixpoint.m"
      if ((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded)
#line 133 "term_constr_fixpoint.m"
        {
#line 133 "term_constr_fixpoint.m"
          transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(transform_hlds__term_constr_fixpoint__env_ptr);
#line 133 "term_constr_fixpoint.m"
          return;
        }
#line 132 "term_constr_fixpoint.m"
    }
#line 132 "term_constr_fixpoint.m"
  }
#line 132 "term_constr_fixpoint.m"
}

#line 132 "term_constr_fixpoint.m"
static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(
#line 132 "term_constr_fixpoint.m"
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
#line 132 "term_constr_fixpoint.m"
{
#line 132 "term_constr_fixpoint.m"
  {
#line 132 "term_constr_fixpoint.m"
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

#line 132 "term_constr_fixpoint.m"
    if (MR_builtin_setjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0) == 0)
#line 132 "term_constr_fixpoint.m"
      {
#line 132 "term_constr_fixpoint.m"
        {
#line 132 "term_constr_fixpoint.m"
          {
#line 132 "term_constr_fixpoint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, &(transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4, transform_hlds__term_constr_fixpoint__env_ptr);
          }
#line 132 "term_constr_fixpoint.m"
        }
#line 132 "term_constr_fixpoint.m"
        (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = MR_FALSE;
#line 132 "term_constr_fixpoint.m"
      }
#line 132 "term_constr_fixpoint.m"
    else
#line 132 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = MR_TRUE;
#line 132 "term_constr_fixpoint.m"
  }
#line 132 "term_constr_fixpoint.m"
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

#line 105 "term_constr_fixpoint.m"
    {
#line 105 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__AbstractSCC_11;
#line 105 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__ChangeFlag_13;
#line 105 "term_constr_fixpoint.m"
      MR_Word transform_hlds__term_constr_fixpoint__V_22_22;
#line 114 "term_constr_fixpoint.m"
      MR_Box transform_hlds__term_constr_fixpoint__conv1_IterationInfos_12;

#line 105 "term_constr_fixpoint.m"
      *transform_hlds__term_constr_fixpoint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 106 "term_constr_fixpoint.m"
      {
#line 106 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__AbstractSCC_11 = transform_hlds__term_constr_util__get_abstract_scc_2_f_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__term_constr_fixpoint__SCC_8);
      }
#line 115 "term_constr_fixpoint.m"
      {
#line 115 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 115 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_2[0]));
#line 115 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1));
#line 115 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 115 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Iteration_9));
#line 115 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Options_7));
#line 115 "term_constr_fixpoint.m"
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 5) = ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20));
#line 115 "term_constr_fixpoint.m"
      }
#line 114 "term_constr_fixpoint.m"
      {
#line 114 "term_constr_fixpoint.m"
        mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], transform_hlds__term_constr_fixpoint__V_22_22, transform_hlds__term_constr_fixpoint__AbstractSCC_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_fixpoint__conv1_IterationInfos_12);
      }
#line 114 "term_constr_fixpoint.m"
      (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv1_IterationInfos_12);
#line 117 "term_constr_fixpoint.m"
      {
#line 117 "term_constr_fixpoint.m"
        transform_hlds__term_constr_fixpoint__ChangeFlag_13 = transform_hlds__term_constr_fixpoint__or_flags_1_f_0((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12);
      }
#line 123 "term_constr_fixpoint.m"
#line 123 "term_constr_fixpoint.m"
      switch (transform_hlds__term_constr_fixpoint__ChangeFlag_13) {
#line 123 "term_constr_fixpoint.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 123 "term_constr_fixpoint.m"
        case (MR_Integer) 0:
#line 141 "term_constr_fixpoint.m"
          {
#line 132 "term_constr_fixpoint.m"
            {
#line 132 "term_constr_fixpoint.m"
              transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(&transform_hlds__term_constr_fixpoint__env);
            }
#line 141 "term_constr_fixpoint.m"
            if ((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded)
#line 138 "term_constr_fixpoint.m"
              {
#line 138 "term_constr_fixpoint.m"
                MR_Word transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;
#line 138 "term_constr_fixpoint.m"
                MR_Word transform_hlds__term_constr_fixpoint__V_28_28;
#line 139 "term_constr_fixpoint.m"
                MR_Box transform_hlds__term_constr_fixpoint__conv5_STATE_VARIABLE_ModuleInfo_21;

#line 139 "term_constr_fixpoint.m"
                {
#line 139 "term_constr_fixpoint.m"
                  transform_hlds__term_constr_fixpoint__V_28_28 = mercury__list__map_2_f_0(transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57, transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[0], (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12);
                }
#line 139 "term_constr_fixpoint.m"
                {
#line 139 "term_constr_fixpoint.m"
                  mercury__list__foldl_4_p_0(transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[1], transform_hlds__term_constr_fixpoint__V_28_28, ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__term_constr_fixpoint__conv5_STATE_VARIABLE_ModuleInfo_21);
                }
#line 139 "term_constr_fixpoint.m"
                *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv5_STATE_VARIABLE_ModuleInfo_21);
#line 138 "term_constr_fixpoint.m"
              }
#line 141 "term_constr_fixpoint.m"
            else
#line 142 "term_constr_fixpoint.m"
              {
#line 142 "term_constr_fixpoint.m"
                MR_Box transform_hlds__term_constr_fixpoint__conv7_STATE_VARIABLE_ModuleInfo_21;

#line 142 "term_constr_fixpoint.m"
                {
#line 142 "term_constr_fixpoint.m"
                  mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[2], (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__term_constr_fixpoint__conv7_STATE_VARIABLE_ModuleInfo_21);
                }
#line 142 "term_constr_fixpoint.m"
                *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv7_STATE_VARIABLE_ModuleInfo_21);
#line 142 "term_constr_fixpoint.m"
              }
#line 141 "term_constr_fixpoint.m"
          }
#line 123 "term_constr_fixpoint.m"
          break;
#line 123 "term_constr_fixpoint.m"
        case (MR_Integer) 1:
#line 119 "term_constr_fixpoint.m"
          {
#line 119 "term_constr_fixpoint.m"
            MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_33_33;
#line 119 "term_constr_fixpoint.m"
            MR_Integer transform_hlds__term_constr_fixpoint__V_34_34;
#line 120 "term_constr_fixpoint.m"
            MR_Box transform_hlds__term_constr_fixpoint__conv9_STATE_VARIABLE_ModuleInfo_33_33;
#line 121 "term_constr_fixpoint.m"
            MR_Word transform_hlds__term_constr_fixpoint__V_14_14;

#line 120 "term_constr_fixpoint.m"
            {
#line 120 "term_constr_fixpoint.m"
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[3], (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__term_constr_fixpoint__conv9_STATE_VARIABLE_ModuleInfo_33_33);
            }
#line 120 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv9_STATE_VARIABLE_ModuleInfo_33_33);
#line 121 "term_constr_fixpoint.m"
            transform_hlds__term_constr_fixpoint__V_34_34 = (transform_hlds__term_constr_fixpoint__Iteration_9 + (MR_Integer) 1);
#line 121 "term_constr_fixpoint.m"
            {
#line 121 "term_constr_fixpoint.m"
              transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(transform_hlds__term_constr_fixpoint__Options_7, transform_hlds__term_constr_fixpoint__SCC_8, transform_hlds__term_constr_fixpoint__V_34_34, &transform_hlds__term_constr_fixpoint__V_14_14, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21);
            }
#line 119 "term_constr_fixpoint.m"
          }
#line 123 "term_constr_fixpoint.m"
          break;
#line 123 "term_constr_fixpoint.m"
      }
#line 105 "term_constr_fixpoint.m"
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
