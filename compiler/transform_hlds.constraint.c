/*
** Automatically generated from `constraint.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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


/* :- module transform_hlds.constraint. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__constraint__init
ENDINIT
*/

#include "transform_hlds.constraint.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
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



#line 701 "constraint.m"
struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s {
#line 701 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 705 "constraint.m"
  MR_bool transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded;
#line 708 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12;
#line 717 "constraint.m"
  jmp_buf transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0;
#line 717 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20;
#line 716 "constraint.m"
  MR_Box transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20;
#line 701 "constraint.m"
};

#line 608 "constraint.m"
struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s {
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 613 "constraint.m"
  MR_bool transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded;
#line 616 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18;
#line 642 "constraint.m"
  jmp_buf transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0;
#line 642 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31;
#line 642 "constraint.m"
  MR_Box transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31;
#line 608 "constraint.m"
};


#line 170 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 173 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 176 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 179 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 182 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 185 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 188 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 191 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0;

#line 194 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 197 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4];

#line 200 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0;

#line 203 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1];

#line 206 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1];

#line 209 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[1];

#line 212 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0[1];

#line 215 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 218 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 221 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4];

#line 224 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0;

#line 227 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1];

#line 230 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1];

#line 233 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1];

#line 236 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1];

#line 239 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 242 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 245 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5];

#line 248 "transform_hlds.constraint.c"
static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5];

#line 251 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0;

#line 254 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1];

#line 257 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1];

#line 260 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1];

#line 263 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1];

#line 266 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
#line 269 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 271 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 274 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
#line 277 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 279 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 281 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 284 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
#line 287 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 289 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 292 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
#line 295 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 297 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 299 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 302 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
#line 305 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 307 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 310 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
#line 313 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 315 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 317 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 320 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
#line 323 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 325 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 328 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
#line 331 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 333 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 335 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 338 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
#line 341 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 343 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 346 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
#line 349 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 351 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 353 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 831 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__831__1_1_f_0(
#line 831 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_18);

#line 538 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__535__1_1_f_0_1(
#line 538 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 538 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 535 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__535__1_1_f_0(
#line 535 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20);

#line 416 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__416__1_2_p_0(
#line 416 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20,
#line 416 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_21);

#line 336 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__336__1_5_p_0(
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_39);

#line 322 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__322__1_5_p_0(
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_37);

#line 229 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__229__1_2_p_0(
#line 229 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_14,
#line 229 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_15);

#line 383 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
#line 383 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 383 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 383 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 383 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
#line 383 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 383 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 405 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
#line 405 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 405 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 405 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 405 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
#line 405 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 405 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 362 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
#line 362 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 362 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 362 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 362 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
#line 362 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 362 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 360 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
#line 360 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 360 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 360 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 360 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
#line 360 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 360 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 831 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3(
#line 831 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 831 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 828 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2(
#line 828 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 828 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 826 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1(
#line 826 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 826 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 823 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(
#line 823 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 813 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_1_f_0(
#line 813 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 797 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
#line 797 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_4,
#line 797 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
#line 797 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9);

#line 771 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
#line 771 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 771 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
#line 771 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11);

#line 728 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
#line 728 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_2);

#line 717 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
#line 717 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 716 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
#line 716 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 717 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
#line 717 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 717 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
#line 717 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 701 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
#line 701 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 701 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
#line 701 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
#line 701 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
#line 701 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5);

#line 670 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
#line 670 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 670 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 670 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 670 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 670 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

#line 642 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
#line 642 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 642 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
#line 642 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 642 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
#line 642 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 642 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
#line 642 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 608 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
#line 608 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
#line 608 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7);

#line 598 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
#line 598 "constraint.m"
  MR_Word transform_hlds__constraint__NonLocals_6,
#line 598 "constraint.m"
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
#line 598 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 598 "constraint.m"
  MR_Word * transform_hlds__constraint__Dependent_9,
#line 598 "constraint.m"
  MR_Word * transform_hlds__constraint__Independent_10);

#line 552 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
#line 552 "constraint.m"
  MR_Word transform_hlds__constraint__ConstructVar_1,
#line 552 "constraint.m"
  MR_Word transform_hlds__constraint__Construct0_2,
#line 552 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 552 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 552 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 552 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

#line 544 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__add_constraint_feature_1_f_0(
#line 544 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 535 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
#line 535 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 535 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 530 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
#line 530 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_4,
#line 530 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_5);

#line 525 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
#line 525 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_3,
#line 525 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_2);

#line 511 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
#line 511 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 511 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 511 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 497 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
#line 497 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 497 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 497 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 416 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
#line 416 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 416 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 416 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 410 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_1,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_4,
#line 410 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_5,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
#line 410 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7);

#line 336 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
#line 336 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 336 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 322 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
#line 322 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 322 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 301 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5,
#line 301 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevGoals_6);

#line 229 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
#line 229 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 229 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 229 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 272 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
#line 272 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_6,
#line 272 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 272 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 272 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_17,
#line 272 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_18);

#line 251 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
#line 251 "constraint.m"
  MR_Word transform_hlds__constraint__Var_1,
#line 251 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 251 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 251 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 251 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 251 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

#line 238 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
#line 238 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 238 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 238 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 238 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 238 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

#line 229 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
#line 229 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 229 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 229 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 226 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
#line 226 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 226 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_4);

#line 120 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
#line 120 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 120 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 120 "constraint.m"
  MR_Word * transform_hlds__constraint__FinalGoals_9,
#line 120 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_79,
#line 120 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_80);

#line 100 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
#line 100 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 100 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 100 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 100 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_14,
#line 100 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_15);

#line 79 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
#line 79 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 79 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 79 "constraint.m"
  MR_Word * transform_hlds__constraint__Goal_8,
#line 79 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_23,
#line 79 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_24);


static /* final */ const MR_Box transform_hlds__constraint_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_2[11][3];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_3[5][5];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_4[1][8];




static /* final */ const MR_Box transform_hlds__constraint_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__constraint_scalar_common_2[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_2[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__constraint_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__constraint__flatten_constraints_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__constraint__propagate_conj_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__constraint__attach_constraints_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__constraint__IntroducedFrom__func__attach_constraints__535__1_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0)),
    ((MR_Box) (&transform_hlds__constraint__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__constraint__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0)),
    ((MR_Box) (&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1100 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1108 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1116 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1124 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1133 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1141 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1149 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1158 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0
  }
};

#line 1166 "transform_hlds.constraint.c"
const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__constraint____Unify____annotated_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____annotated_conj_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "annotated_conj",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1183 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1191 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1199 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0 = {
  (MR_String) "annotated_conjunct",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0,
  NULL,
  NULL,
  NULL
};

#line 1214 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

#line 1219 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0
  }
};

#line 1228 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

#line 1233 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0[1] = {
  (MR_Integer) 0
};

#line 1238 "transform_hlds.constraint.c"
const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "annotated_conjunct",
  {     transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0 },
  {     transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0
};

#line 1255 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1264 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1272 "transform_hlds.constraint.c"
const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__constraint____Unify____constrained_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constrained_conj_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constrained_conj",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1289 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1297 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0 = {
  (MR_String) "constraint",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0,
  NULL,
  NULL,
  NULL
};

#line 1312 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

#line 1317 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0
  }
};

#line 1326 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

#line 1331 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1] = {
  (MR_Integer) 0
};

#line 1336 "transform_hlds.constraint.c"
const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constraint_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constraint_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constraint",
  {     transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0 },
  {     transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0
};

#line 1353 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1362 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1370 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1379 "transform_hlds.constraint.c"
static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5] = {
  (MR_String) "constr_module_info",
  (MR_String) "constr_vartypes",
  (MR_String) "constr_varset",
  (MR_String) "constr_instmap",
  (MR_String) "constr_changed"
};

#line 1388 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0 = {
  (MR_String) "constraint_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0,
  transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0,
  NULL,
  NULL
};

#line 1403 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

#line 1408 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0
  }
};

#line 1417 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

#line 1422 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1] = {
  (MR_Integer) 0
};

#line 1427 "transform_hlds.constraint.c"
const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constraint_info_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constraint_info_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constraint_info",
  {     transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0 },
  {     transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0
};

#line 1444 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
#line 1447 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1449 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1451 "transform_hlds.constraint.c"
{
#line 1453 "transform_hlds.constraint.c"
  {
#line 1455 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1458 "transform_hlds.constraint.c"
    {
#line 1460 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1463 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1465 "transform_hlds.constraint.c"
  }
#line 1467 "transform_hlds.constraint.c"
}

#line 1470 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
#line 1473 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1475 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1477 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1479 "transform_hlds.constraint.c"
{
#line 1481 "transform_hlds.constraint.c"
  {
#line 1483 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1486 "transform_hlds.constraint.c"
    {
#line 1488 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____annotated_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1491 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1493 "transform_hlds.constraint.c"
  }
#line 1495 "transform_hlds.constraint.c"
}

#line 1498 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
#line 1501 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1503 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1505 "transform_hlds.constraint.c"
{
#line 1507 "transform_hlds.constraint.c"
  {
#line 1509 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1512 "transform_hlds.constraint.c"
    {
#line 1514 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conjunct_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1517 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1519 "transform_hlds.constraint.c"
  }
#line 1521 "transform_hlds.constraint.c"
}

#line 1524 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
#line 1527 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1529 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1531 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1533 "transform_hlds.constraint.c"
{
#line 1535 "transform_hlds.constraint.c"
  {
#line 1537 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1540 "transform_hlds.constraint.c"
    {
#line 1542 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____annotated_conjunct_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1545 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1547 "transform_hlds.constraint.c"
  }
#line 1549 "transform_hlds.constraint.c"
}

#line 1552 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
#line 1555 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1557 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1559 "transform_hlds.constraint.c"
{
#line 1561 "transform_hlds.constraint.c"
  {
#line 1563 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1566 "transform_hlds.constraint.c"
    {
#line 1568 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constrained_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1571 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1573 "transform_hlds.constraint.c"
  }
#line 1575 "transform_hlds.constraint.c"
}

#line 1578 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
#line 1581 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1583 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1585 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1587 "transform_hlds.constraint.c"
{
#line 1589 "transform_hlds.constraint.c"
  {
#line 1591 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1594 "transform_hlds.constraint.c"
    {
#line 1596 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constrained_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1599 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1601 "transform_hlds.constraint.c"
  }
#line 1603 "transform_hlds.constraint.c"
}

#line 1606 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
#line 1609 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1611 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1613 "transform_hlds.constraint.c"
{
#line 1615 "transform_hlds.constraint.c"
  {
#line 1617 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1620 "transform_hlds.constraint.c"
    {
#line 1622 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1625 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1627 "transform_hlds.constraint.c"
  }
#line 1629 "transform_hlds.constraint.c"
}

#line 1632 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
#line 1635 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1637 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1639 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1641 "transform_hlds.constraint.c"
{
#line 1643 "transform_hlds.constraint.c"
  {
#line 1645 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1648 "transform_hlds.constraint.c"
    {
#line 1650 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constraint_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1653 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1655 "transform_hlds.constraint.c"
  }
#line 1657 "transform_hlds.constraint.c"
}

#line 1660 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
#line 1663 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1665 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1667 "transform_hlds.constraint.c"
{
#line 1669 "transform_hlds.constraint.c"
  {
#line 1671 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1674 "transform_hlds.constraint.c"
    {
#line 1676 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_info_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1679 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1681 "transform_hlds.constraint.c"
  }
#line 1683 "transform_hlds.constraint.c"
}

#line 1686 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
#line 1689 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1691 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1693 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1695 "transform_hlds.constraint.c"
{
#line 1697 "transform_hlds.constraint.c"
  {
#line 1699 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1702 "transform_hlds.constraint.c"
    {
#line 1704 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constraint_info_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1707 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1709 "transform_hlds.constraint.c"
  }
#line 1711 "transform_hlds.constraint.c"
}

#line 831 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__831__1_1_f_0(
#line 831 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_18)
#line 831 "constraint.m"
{
#line 831 "constraint.m"
  {
#line 831 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 831 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_19;
#line 831 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;
#line 831 "constraint.m"
    MR_Word transform_hlds__constraint__MainConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_18, (MR_Integer) 0)));
#line 831 "constraint.m"
    MR_Word transform_hlds__constraint__OtherConsIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_18, (MR_Integer) 1)));
#line 831 "constraint.m"
    MR_Word transform_hlds__constraint__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_18, (MR_Integer) 2)));

#line 833 "constraint.m"
    {
#line 833 "constraint.m"
      transform_hlds__constraint__V_20_20 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_23);
    }
#line 833 "constraint.m"
    {
#line 833 "constraint.m"
      transform_hlds__constraint__HeadVar__2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 833 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_19, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_21));
#line 833 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_19, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_22));
#line 833 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_19, 2) = ((MR_Box) (transform_hlds__constraint__V_20_20));
#line 833 "constraint.m"
    }
#line 831 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_19;
#line 831 "constraint.m"
  }
#line 831 "constraint.m"
}

#line 538 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__535__1_1_f_0_1(
#line 538 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 538 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 538 "constraint.m"
{
#line 538 "constraint.m"
  {
#line 538 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 538 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 538 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_2;

#line 538 "constraint.m"
    {
#line 538 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_2 = transform_hlds__constraint__add_constraint_feature_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 538 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_2));
#line 538 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 538 "constraint.m"
  }
#line 538 "constraint.m"
}

#line 535 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__535__1_1_f_0(
#line 535 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20)
#line 535 "constraint.m"
{
#line 535 "constraint.m"
  {
#line 535 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_21;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__TypeCtorInfo_30_30;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__V_22_22;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__V_23_23;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 0)));
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__B_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 1)));
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__C_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 2)));
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__Constructs0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 3)));
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_25, (MR_Integer) 0)));
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_25, (MR_Integer) 1)));
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_35;

#line 548 "constraint.m"
    {
#line 548 "constraint.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_34, &transform_hlds__constraint__GoalInfo_35);
    }
#line 547 "constraint.m"
    {
#line 547 "constraint.m"
      transform_hlds__constraint__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 547 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_22_22, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_33));
#line 547 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_22_22, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_35));
#line 547 "constraint.m"
    }
#line 1841 "transform_hlds.constraint.c"
    transform_hlds__constraint__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 538 "constraint.m"
    {
#line 538 "constraint.m"
      transform_hlds__constraint__V_23_23 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_30_30, transform_hlds__constraint__TypeCtorInfo_30_30, (MR_Word) &transform_hlds__constraint_scalar_common_2[10], transform_hlds__constraint__Constructs0_28);
    }
#line 537 "constraint.m"
    {
#line 537 "constraint.m"
      transform_hlds__constraint__HeadVar__2_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 537 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 0) = ((MR_Box) (transform_hlds__constraint__V_22_22));
#line 537 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 1) = ((MR_Box) (transform_hlds__constraint__B_26));
#line 537 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 2) = ((MR_Box) (transform_hlds__constraint__C_27));
#line 537 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 3) = ((MR_Box) (transform_hlds__constraint__V_23_23));
#line 537 "constraint.m"
    }
#line 535 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_21;
#line 535 "constraint.m"
  }
#line 535 "constraint.m"
}

#line 416 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__416__1_2_p_0(
#line 416 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20,
#line 416 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_21)
#line 416 "constraint.m"
{
#line 416 "constraint.m"
  {
#line 416 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 417 "constraint.m"
    {
#line 417 "constraint.m"
      MR_Word base;
#line 417 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_21 = base;
#line 417 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_20));
#line 417 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "constraint.m"
    }
#line 416 "constraint.m"
  }
#line 416 "constraint.m"
}

#line 336 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__336__1_5_p_0(
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 336 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_39)
#line 336 "constraint.m"
{
#line 336 "constraint.m"
  {
#line 336 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 336 "constraint.m"
    MR_Word transform_hlds__constraint__InstBefore_45;
#line 336 "constraint.m"
    MR_Word transform_hlds__constraint__InstAfter_46;
#line 336 "constraint.m"
    MR_Word transform_hlds__constraint__Type_47;

#line 338 "constraint.m"
    {
#line 338 "constraint.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__HeadVar__5_39, &transform_hlds__constraint__InstBefore_45);
    }
#line 339 "constraint.m"
    {
#line 339 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__HeadVar__5_39, &transform_hlds__constraint__InstAfter_46);
    }
#line 336 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 336 "constraint.m"
      {
#line 340 "constraint.m"
        {
#line 340 "constraint.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__HeadVar__5_39, &transform_hlds__constraint__Type_47);
        }
#line 341 "constraint.m"
        {
#line 341 "constraint.m"
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__constraint__InstAfter_46, transform_hlds__constraint__InstBefore_45, transform_hlds__constraint__Type_47, transform_hlds__constraint__ModuleInfo_2);
        }
#line 341 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 336 "constraint.m"
      }
#line 336 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 336 "constraint.m"
  }
#line 336 "constraint.m"
}

#line 322 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__322__1_5_p_0(
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 322 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_37)
#line 322 "constraint.m"
{
#line 322 "constraint.m"
  {
#line 322 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 322 "constraint.m"
    MR_Word transform_hlds__constraint__InstBefore_27;
#line 322 "constraint.m"
    MR_Word transform_hlds__constraint__InstAfter_28;
#line 322 "constraint.m"
    MR_Word transform_hlds__constraint__Type_29;

#line 324 "constraint.m"
    {
#line 324 "constraint.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__HeadVar__5_37, &transform_hlds__constraint__InstBefore_27);
    }
#line 325 "constraint.m"
    {
#line 325 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__HeadVar__5_37, &transform_hlds__constraint__InstAfter_28);
    }
#line 322 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 322 "constraint.m"
      {
#line 326 "constraint.m"
        {
#line 326 "constraint.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__HeadVar__5_37, &transform_hlds__constraint__Type_29);
        }
#line 327 "constraint.m"
        {
#line 327 "constraint.m"
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__constraint__InstAfter_28, transform_hlds__constraint__InstBefore_27, transform_hlds__constraint__Type_29, transform_hlds__constraint__ModuleInfo_2);
        }
#line 327 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 322 "constraint.m"
      }
#line 322 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 322 "constraint.m"
  }
#line 322 "constraint.m"
}

#line 229 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__229__1_2_p_0(
#line 229 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_14,
#line 229 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_15)
#line 229 "constraint.m"
{
#line 229 "constraint.m"
  {
#line 229 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 0)));
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__Constructs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 3)));
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__V_16_16;
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__V_17_17;
#line 230 "constraint.m"
    MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 1)));
#line 230 "constraint.m"
    MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 2)));

#line 231 "constraint.m"
    {
#line 231 "constraint.m"
      transform_hlds__constraint__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_17_17, 0) = ((MR_Box) (transform_hlds__constraint__Goal_7));
#line 231 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "constraint.m"
    }
#line 231 "constraint.m"
    {
#line 231 "constraint.m"
      transform_hlds__constraint__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_16_16, 0) = ((MR_Box) (transform_hlds__constraint__V_17_17));
#line 231 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "constraint.m"
    }
#line 231 "constraint.m"
    {
#line 231 "constraint.m"
      MR_Word base;
#line 231 "constraint.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_15 = base;
#line 231 "constraint.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Constructs_10));
#line 231 "constraint.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__V_16_16));
#line 231 "constraint.m"
    }
#line 229 "constraint.m"
  }
#line 229 "constraint.m"
}

#line 754 "constraint.m"
void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0(
#line 754 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 754 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 754 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 754 "constraint.m"
{
#line 754 "constraint.m"
  {
#line 754 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 754 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_18 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 754 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_19 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 754 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_18 == transform_hlds__constraint__CastY_19);
#line 754 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2113 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 754 "constraint.m"
    else
#line 754 "constraint.m"
      {
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 4)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_14_14;

#line 754 "constraint.m"
        {
#line 754 "constraint.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__constraint__V_14_14, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_9_9);
        }
#line 2147 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 754 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 754 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 754 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 754 "constraint.m"
        else
#line 754 "constraint.m"
          {
#line 754 "constraint.m"
            MR_Word transform_hlds__constraint__V_15_15;

#line 754 "constraint.m"
            {
#line 754 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__constraint__V_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
            }
#line 2167 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_15_15 == (MR_Integer) 0);
#line 754 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 754 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 754 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_15_15;
#line 754 "constraint.m"
            else
#line 754 "constraint.m"
              {
#line 754 "constraint.m"
                MR_Word transform_hlds__constraint__V_16_16;

#line 754 "constraint.m"
                {
#line 754 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[7], &transform_hlds__constraint__V_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
                }
#line 2187 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_16_16 == (MR_Integer) 0);
#line 754 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 754 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 754 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_16_16;
#line 754 "constraint.m"
                else
#line 754 "constraint.m"
                  {
#line 754 "constraint.m"
                    MR_Word transform_hlds__constraint__V_17_17;

#line 754 "constraint.m"
                    {
#line 754 "constraint.m"
                      hlds__instmap____Compare____instmap_0_0(&transform_hlds__constraint__V_17_17, transform_hlds__constraint__V_7_7, transform_hlds__constraint__V_12_12);
                    }
#line 2207 "transform_hlds.constraint.c"
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_17_17 == (MR_Integer) 0);
#line 754 "constraint.m"
                    transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 754 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 754 "constraint.m"
                      *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_17_17;
#line 754 "constraint.m"
                    else
#line 754 "constraint.m"
                      {
#line 754 "constraint.m"
                        MR_Integer transform_hlds__constraint__V_25_25 = (MR_Integer) transform_hlds__constraint__V_8_8;
#line 754 "constraint.m"
                        MR_Integer transform_hlds__constraint__V_26_26 = (MR_Integer) transform_hlds__constraint__V_13_13;

#line 754 "constraint.m"
                        {
#line 754 "constraint.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__V_25_25, transform_hlds__constraint__V_26_26);
#line 754 "constraint.m"
                          return;
                        }
#line 754 "constraint.m"
                      }
#line 754 "constraint.m"
                  }
#line 754 "constraint.m"
              }
#line 754 "constraint.m"
          }
#line 754 "constraint.m"
      }
#line 754 "constraint.m"
  }
#line 754 "constraint.m"
}

#line 754 "constraint.m"
MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0(
#line 754 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 754 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 754 "constraint.m"
{
#line 754 "constraint.m"
  {
#line 754 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 754 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_13 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 754 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_14 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 754 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_13 == transform_hlds__constraint__CastY_14);
#line 754 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 754 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 754 "constraint.m"
    else
#line 754 "constraint.m"
      {
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__TypeCtorInfo_16_16;
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_17_17;
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 4)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 754 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));

#line 2299 "transform_hlds.constraint.c"
        {
#line 2301 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_8_8);
        }
#line 754 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 754 "constraint.m"
          {
#line 2308 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2310 "transform_hlds.constraint.c"
            {
#line 2312 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeCtorInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 754 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 754 "constraint.m"
              {
#line 2319 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_17_17 = (MR_Word) &transform_hlds__constraint_scalar_common_1[7];
#line 2321 "transform_hlds.constraint.c"
                {
#line 2323 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_17_17, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 754 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 754 "constraint.m"
                  {
#line 2330 "transform_hlds.constraint.c"
                    {
#line 2332 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__constraint__V_6_6, transform_hlds__constraint__V_11_11);
                    }
#line 754 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 2337 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_7_7 == transform_hlds__constraint__V_12_12);
#line 754 "constraint.m"
                  }
#line 754 "constraint.m"
              }
#line 754 "constraint.m"
          }
#line 754 "constraint.m"
      }
#line 754 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 754 "constraint.m"
  }
#line 754 "constraint.m"
}

#line 383 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
#line 383 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 383 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 383 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 383 "constraint.m"
{
#line 383 "constraint.m"
  {
#line 383 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 383 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 383 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 383 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
#line 383 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2378 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 383 "constraint.m"
    else
#line 383 "constraint.m"
      {
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12;

#line 383 "constraint.m"
        {
#line 383 "constraint.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__V_12_12, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_8_8);
        }
#line 2408 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_12_12 == (MR_Integer) 0);
#line 383 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 383 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 383 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_12_12;
#line 383 "constraint.m"
        else
#line 383 "constraint.m"
          {
#line 383 "constraint.m"
            MR_Word transform_hlds__constraint__V_13_13;

#line 383 "constraint.m"
            {
#line 383 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_13_13, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 2428 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_13_13 == (MR_Integer) 0);
#line 383 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 383 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 383 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_13_13;
#line 383 "constraint.m"
            else
#line 383 "constraint.m"
              {
#line 383 "constraint.m"
                MR_Word transform_hlds__constraint__V_14_14;

#line 383 "constraint.m"
                {
#line 383 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_14_14, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 2448 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 383 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 383 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 383 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 383 "constraint.m"
                else
#line 383 "constraint.m"
                  {
#line 383 "constraint.m"
                    {
#line 383 "constraint.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__V_7_7)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
#line 383 "constraint.m"
                      return;
                    }
#line 383 "constraint.m"
                  }
#line 383 "constraint.m"
              }
#line 383 "constraint.m"
          }
#line 383 "constraint.m"
      }
#line 383 "constraint.m"
  }
#line 383 "constraint.m"
}

#line 383 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
#line 383 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 383 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 383 "constraint.m"
{
#line 383 "constraint.m"
  {
#line 383 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 383 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 383 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 383 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
#line 383 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 383 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 383 "constraint.m"
    else
#line 383 "constraint.m"
      {
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 383 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

#line 2531 "transform_hlds.constraint.c"
        {
#line 2533 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_7_7);
        }
#line 383 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 383 "constraint.m"
          {
#line 2540 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2542 "transform_hlds.constraint.c"
            {
#line 2544 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_8_8)));
            }
#line 383 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 383 "constraint.m"
              {
#line 2551 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2553 "transform_hlds.constraint.c"
                {
#line 2555 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
                }
#line 383 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 383 "constraint.m"
                  {
#line 2562 "transform_hlds.constraint.c"
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[0];
#line 2564 "transform_hlds.constraint.c"
                    {
#line 2566 "transform_hlds.constraint.c"
                      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                    }
#line 383 "constraint.m"
                  }
#line 383 "constraint.m"
              }
#line 383 "constraint.m"
          }
#line 383 "constraint.m"
      }
#line 383 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 383 "constraint.m"
  }
#line 383 "constraint.m"
}

#line 405 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
#line 405 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 405 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 405 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 405 "constraint.m"
{
#line 405 "constraint.m"
  {
#line 405 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 405 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
#line 405 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

#line 405 "constraint.m"
    {
#line 405 "constraint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[6], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
#line 405 "constraint.m"
      return;
    }
#line 405 "constraint.m"
  }
#line 405 "constraint.m"
}

#line 405 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
#line 405 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 405 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 405 "constraint.m"
{
#line 405 "constraint.m"
  {
#line 405 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 405 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
#line 405 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

#line 405 "constraint.m"
    {
#line 405 "constraint.m"
      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[6], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
#line 405 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 405 "constraint.m"
  }
#line 405 "constraint.m"
}

#line 362 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
#line 362 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 362 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 362 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 362 "constraint.m"
{
#line 362 "constraint.m"
  {
#line 362 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 362 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 362 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 362 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
#line 362 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2670 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 362 "constraint.m"
    else
#line 362 "constraint.m"
      {
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12;

#line 362 "constraint.m"
        {
#line 362 "constraint.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__V_12_12, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_8_8);
        }
#line 2700 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_12_12 == (MR_Integer) 0);
#line 362 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 362 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 362 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_12_12;
#line 362 "constraint.m"
        else
#line 362 "constraint.m"
          {
#line 362 "constraint.m"
            MR_Word transform_hlds__constraint__V_13_13;

#line 362 "constraint.m"
            {
#line 362 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_13_13, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 2720 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_13_13 == (MR_Integer) 0);
#line 362 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 362 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 362 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_13_13;
#line 362 "constraint.m"
            else
#line 362 "constraint.m"
              {
#line 362 "constraint.m"
                MR_Word transform_hlds__constraint__V_14_14;

#line 362 "constraint.m"
                {
#line 362 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_14_14, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 2740 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 362 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 362 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 362 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 362 "constraint.m"
                else
#line 362 "constraint.m"
                  {
#line 362 "constraint.m"
                    {
#line 362 "constraint.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__V_7_7)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
#line 362 "constraint.m"
                      return;
                    }
#line 362 "constraint.m"
                  }
#line 362 "constraint.m"
              }
#line 362 "constraint.m"
          }
#line 362 "constraint.m"
      }
#line 362 "constraint.m"
  }
#line 362 "constraint.m"
}

#line 362 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
#line 362 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 362 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 362 "constraint.m"
{
#line 362 "constraint.m"
  {
#line 362 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 362 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 362 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 362 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
#line 362 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 362 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 362 "constraint.m"
    else
#line 362 "constraint.m"
      {
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 362 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

#line 2823 "transform_hlds.constraint.c"
        {
#line 2825 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_7_7);
        }
#line 362 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 362 "constraint.m"
          {
#line 2832 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2834 "transform_hlds.constraint.c"
            {
#line 2836 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_8_8)));
            }
#line 362 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 362 "constraint.m"
              {
#line 2843 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2845 "transform_hlds.constraint.c"
                {
#line 2847 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
                }
#line 362 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 362 "constraint.m"
                  {
#line 2854 "transform_hlds.constraint.c"
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2856 "transform_hlds.constraint.c"
                    {
#line 2858 "transform_hlds.constraint.c"
                      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                    }
#line 362 "constraint.m"
                  }
#line 362 "constraint.m"
              }
#line 362 "constraint.m"
          }
#line 362 "constraint.m"
      }
#line 362 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 362 "constraint.m"
  }
#line 362 "constraint.m"
}

#line 360 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
#line 360 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 360 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 360 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 360 "constraint.m"
{
#line 360 "constraint.m"
  {
#line 360 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 360 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
#line 360 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

#line 360 "constraint.m"
    {
#line 360 "constraint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
#line 360 "constraint.m"
      return;
    }
#line 360 "constraint.m"
  }
#line 360 "constraint.m"
}

#line 360 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
#line 360 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 360 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 360 "constraint.m"
{
#line 360 "constraint.m"
  {
#line 360 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 360 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
#line 360 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

#line 360 "constraint.m"
    {
#line 360 "constraint.m"
      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
#line 360 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 360 "constraint.m"
  }
#line 360 "constraint.m"
}

#line 831 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3(
#line 831 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 831 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 831 "constraint.m"
{
#line 831 "constraint.m"
  {
#line 831 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 831 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 831 "constraint.m"
    MR_Word transform_hlds__constraint__conv2_HeadVar__2_19;

#line 831 "constraint.m"
    {
#line 831 "constraint.m"
      transform_hlds__constraint__conv2_HeadVar__2_19 = transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__831__1_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 831 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_HeadVar__2_19));
#line 831 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 831 "constraint.m"
  }
#line 831 "constraint.m"
}

#line 828 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2(
#line 828 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 828 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 828 "constraint.m"
{
#line 828 "constraint.m"
  {
#line 828 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 828 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 828 "constraint.m"
    MR_Word transform_hlds__constraint__conv1_HeadVar__2_2;

#line 828 "constraint.m"
    {
#line 828 "constraint.m"
      transform_hlds__constraint__conv1_HeadVar__2_2 = transform_hlds__constraint__strip_constraint_markers_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 828 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_HeadVar__2_2));
#line 828 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 828 "constraint.m"
  }
#line 828 "constraint.m"
}

#line 826 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1(
#line 826 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 826 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 826 "constraint.m"
{
#line 826 "constraint.m"
  {
#line 826 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 826 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 826 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_2;

#line 826 "constraint.m"
    {
#line 826 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_2 = transform_hlds__constraint__strip_constraint_markers_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 826 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_2));
#line 826 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 826 "constraint.m"
  }
#line 826 "constraint.m"
}

#line 823 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(
#line 823 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 823 "constraint.m"
{
#line 825 "constraint.m"
  {
#line 825 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 825 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;

#line 825 "constraint.m"
#line 825 "constraint.m"
    switch (MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) {
#line 825 "constraint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 825 "constraint.m"
      case (MR_Integer) 0:
#line 835 "constraint.m"
        {
#line 835 "constraint.m"
          MR_Word transform_hlds__constraint__Goal_24 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__HeadVar__1_1), (MR_Integer) 0);
#line 835 "constraint.m"
          MR_Word transform_hlds__constraint__V_25_25;

#line 836 "constraint.m"
          {
#line 836 "constraint.m"
            transform_hlds__constraint__V_25_25 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_24);
          }
#line 836 "constraint.m"
          transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__V_25_25);
#line 835 "constraint.m"
        }
#line 825 "constraint.m"
        break;
#line 825 "constraint.m"
      case (MR_Integer) 1:
#line 850 "constraint.m"
        transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 825 "constraint.m"
        break;
#line 825 "constraint.m"
      case (MR_Integer) 2:
#line 848 "constraint.m"
        transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 825 "constraint.m"
        break;
#line 825 "constraint.m"
      case (MR_Integer) 3:
#line 825 "constraint.m"
#line 825 "constraint.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) {
#line 825 "constraint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 825 "constraint.m"
          case (MR_Integer) 0:
#line 846 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 825 "constraint.m"
            break;
#line 825 "constraint.m"
          case (MR_Integer) 1:
#line 844 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 825 "constraint.m"
            break;
#line 825 "constraint.m"
          case (MR_Integer) 2:
#line 825 "constraint.m"
            {
#line 825 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 825 "constraint.m"
              MR_Word transform_hlds__constraint__ConjType_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 825 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 825 "constraint.m"
              MR_Word transform_hlds__constraint__V_5_5;

#line 826 "constraint.m"
              {
#line 826 "constraint.m"
                transform_hlds__constraint__V_5_5 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_65_65, transform_hlds__constraint__TypeCtorInfo_65_65, (MR_Word) &transform_hlds__constraint_scalar_common_2[7], transform_hlds__constraint__Goals_4);
              }
#line 826 "constraint.m"
              {
#line 826 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 826 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 826 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_3));
#line 826 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_5_5));
#line 826 "constraint.m"
              }
#line 825 "constraint.m"
            }
#line 825 "constraint.m"
            break;
#line 825 "constraint.m"
          case (MR_Integer) 3:
#line 827 "constraint.m"
            {
#line 827 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 827 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "constraint.m"
              MR_Word transform_hlds__constraint__V_8_8;

#line 828 "constraint.m"
              {
#line 828 "constraint.m"
                transform_hlds__constraint__V_8_8 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_68_68, transform_hlds__constraint__TypeCtorInfo_68_68, (MR_Word) &transform_hlds__constraint_scalar_common_2[8], transform_hlds__constraint__Goals_7);
              }
#line 828 "constraint.m"
              {
#line 828 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 828 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__V_8_8));
#line 828 "constraint.m"
              }
#line 827 "constraint.m"
            }
#line 825 "constraint.m"
            break;
#line 825 "constraint.m"
          case (MR_Integer) 4:
#line 830 "constraint.m"
            {
#line 830 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 830 "constraint.m"
              MR_Word transform_hlds__constraint__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 830 "constraint.m"
              MR_Word transform_hlds__constraint__CanFail_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 830 "constraint.m"
              MR_Word transform_hlds__constraint__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 830 "constraint.m"
              MR_Word transform_hlds__constraint__Cases_13;

#line 831 "constraint.m"
              {
#line 831 "constraint.m"
                transform_hlds__constraint__Cases_13 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_71_71, transform_hlds__constraint__TypeCtorInfo_71_71, (MR_Word) &transform_hlds__constraint_scalar_common_2[9], transform_hlds__constraint__Cases0_12);
              }
#line 830 "constraint.m"
              {
#line 830 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 830 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 830 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Var_10));
#line 830 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_11));
#line 830 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 3) = ((MR_Box) (transform_hlds__constraint__Cases_13));
#line 830 "constraint.m"
              }
#line 830 "constraint.m"
            }
#line 825 "constraint.m"
            break;
#line 825 "constraint.m"
          case (MR_Integer) 5:
#line 837 "constraint.m"
            {
#line 837 "constraint.m"
              MR_Word transform_hlds__constraint__Reason_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 837 "constraint.m"
              MR_Word transform_hlds__constraint__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 837 "constraint.m"
              MR_Word transform_hlds__constraint__V_28_28;

#line 838 "constraint.m"
              {
#line 838 "constraint.m"
                transform_hlds__constraint__V_28_28 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_27);
              }
#line 838 "constraint.m"
              {
#line 838 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 838 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 838 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Reason_26));
#line 838 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_28_28));
#line 838 "constraint.m"
              }
#line 837 "constraint.m"
            }
#line 825 "constraint.m"
            break;
#line 825 "constraint.m"
          case (MR_Integer) 6:
#line 839 "constraint.m"
            {
#line 839 "constraint.m"
              MR_Word transform_hlds__constraint__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 839 "constraint.m"
              MR_Word transform_hlds__constraint__If_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 839 "constraint.m"
              MR_Word transform_hlds__constraint__Then_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 839 "constraint.m"
              MR_Word transform_hlds__constraint__Else_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 4)));
#line 839 "constraint.m"
              MR_Word transform_hlds__constraint__V_33_33;
#line 839 "constraint.m"
              MR_Word transform_hlds__constraint__V_34_34;
#line 839 "constraint.m"
              MR_Word transform_hlds__constraint__V_35_35;

#line 841 "constraint.m"
              {
#line 841 "constraint.m"
                transform_hlds__constraint__V_33_33 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__If_30);
              }
#line 842 "constraint.m"
              {
#line 842 "constraint.m"
                transform_hlds__constraint__V_34_34 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Then_31);
              }
#line 843 "constraint.m"
              {
#line 843 "constraint.m"
                transform_hlds__constraint__V_35_35 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Else_32);
              }
#line 840 "constraint.m"
              {
#line 840 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 840 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 840 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Vars_29));
#line 840 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_33_33));
#line 840 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 3) = ((MR_Box) (transform_hlds__constraint__V_34_34));
#line 840 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 4) = ((MR_Box) (transform_hlds__constraint__V_35_35));
#line 840 "constraint.m"
              }
#line 839 "constraint.m"
            }
#line 825 "constraint.m"
            break;
#line 825 "constraint.m"
          case (MR_Integer) 7:
#line 852 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 825 "constraint.m"
            break;
#line 825 "constraint.m"
        }
#line 825 "constraint.m"
        break;
#line 825 "constraint.m"
    }
#line 825 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 825 "constraint.m"
  }
#line 823 "constraint.m"
}

#line 813 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_1_f_0(
#line 813 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 813 "constraint.m"
{
#line 816 "constraint.m"
  {
#line 816 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 816 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;
#line 816 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 816 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 816 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5;
#line 816 "constraint.m"
    MR_Word transform_hlds__constraint__V_6_6;

#line 816 "constraint.m"
    {
#line 816 "constraint.m"
      transform_hlds__constraint__V_6_6 = transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(transform_hlds__constraint__GoalExpr_3);
    }
#line 817 "constraint.m"
    {
#line 817 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo0_4, (MR_Integer) 0);
    }
#line 819 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 818 "constraint.m"
      {
#line 818 "constraint.m"
        {
#line 818 "constraint.m"
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_4, &transform_hlds__constraint__GoalInfo_5);
        }
#line 818 "constraint.m"
      }
#line 819 "constraint.m"
    else
#line 820 "constraint.m"
      transform_hlds__constraint__GoalInfo_5 = transform_hlds__constraint__GoalInfo0_4;
#line 816 "constraint.m"
    {
#line 816 "constraint.m"
      transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__constraint__V_6_6));
#line 816 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_5));
#line 816 "constraint.m"
    }
#line 816 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 816 "constraint.m"
  }
#line 813 "constraint.m"
}

#line 797 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
#line 797 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_4,
#line 797 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
#line 797 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9)
#line 797 "constraint.m"
{
#line 802 "constraint.m"
  {
#line 802 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 802 "constraint.m"
    if ((transform_hlds__constraint__Constraints_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_9 = transform_hlds__constraint__STATE_VARIABLE_Info_0_8;
#line 802 "constraint.m"
    else
#line 804 "constraint.m"
      {
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));

#line 805 "constraint.m"
        {
#line 805 "constraint.m"
          MR_Word base;
#line 805 "constraint.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 805 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_Info_9 = base;
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_12_12));
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_13_13));
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_14_14));
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__V_15_15));
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 1));
#line 805 "constraint.m"
        }
#line 804 "constraint.m"
      }
#line 802 "constraint.m"
  }
#line 797 "constraint.m"
}

#line 771 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
#line 771 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 771 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
#line 771 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11)
#line 771 "constraint.m"
{
#line 774 "constraint.m"
  {
#line 774 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__InstMapDelta_8;
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap_9;
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 775 "constraint.m"
    MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 775 "constraint.m"
    MR_Word transform_hlds__constraint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 775 "constraint.m"
    MR_Word transform_hlds__constraint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 775 "constraint.m"
    MR_Word transform_hlds__constraint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 778 "constraint.m"
    MR_Word transform_hlds__constraint__V_17_17;
#line 778 "constraint.m"
    MR_Word transform_hlds__constraint__V_18_18;
#line 778 "constraint.m"
    MR_Word transform_hlds__constraint__V_19_19;
#line 778 "constraint.m"
    MR_Word transform_hlds__constraint__V_21_21;
#line 778 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;

#line 776 "constraint.m"
    {
#line 776 "constraint.m"
      transform_hlds__constraint__InstMapDelta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_5);
    }
#line 777 "constraint.m"
    {
#line 777 "constraint.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_7, transform_hlds__constraint__InstMapDelta_8, &transform_hlds__constraint__InstMap_9);
    }
#line 778 "constraint.m"
    transform_hlds__constraint__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 778 "constraint.m"
    transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 778 "constraint.m"
    transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 778 "constraint.m"
    transform_hlds__constraint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 778 "constraint.m"
    transform_hlds__constraint__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 778 "constraint.m"
    {
#line 778 "constraint.m"
      MR_Word base;
#line 778 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 778 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_11 = base;
#line 778 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_17_17));
#line 778 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_18_18));
#line 778 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_19_19));
#line 778 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
#line 778 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__constraint__V_21_21));
#line 778 "constraint.m"
    }
#line 774 "constraint.m"
  }
#line 771 "constraint.m"
}

#line 728 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
#line 728 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_2)
#line 728 "constraint.m"
{
#line 730 "constraint.m"
  {
#line 730 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 730 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 0)));
#line 731 "constraint.m"
    MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 1)));

#line 735 "constraint.m"
    if (((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 736 "constraint.m"
      {
#line 736 "constraint.m"
        MR_Word transform_hlds__constraint__SubGoal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_3), (MR_Integer) 0);

#line 737 "constraint.m"
        {
#line 737 "constraint.m"
          transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_5);
        }
#line 736 "constraint.m"
      }
#line 735 "constraint.m"
    else
#line 735 "constraint.m"
    if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 739 "constraint.m"
      {
#line 739 "constraint.m"
        MR_Word transform_hlds__constraint__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 1)));
#line 739 "constraint.m"
        MR_Word transform_hlds__constraint__SubGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 2)));
#line 741 "constraint.m"
        MR_Word transform_hlds__constraint__FGT_8;
#line 741 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7;

#line 741 "constraint.m"
        transform_hlds__constraint__succeeded = ((((MR_tag((MR_Word) transform_hlds__constraint__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 741 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 741 "constraint.m"
          {
#line 741 "constraint.m"
            transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 1)));
#line 741 "constraint.m"
            transform_hlds__constraint__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 2)));
#line 743 "constraint.m"
#line 743 "constraint.m"
            switch (transform_hlds__constraint__FGT_8) {
#line 743 "constraint.m"
              default:
#line 743 "constraint.m"
                transform_hlds__constraint__succeeded = MR_FALSE;
#line 743 "constraint.m"
                break;
#line 743 "constraint.m"
              case (MR_Integer) 1:
#line 742 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 743 "constraint.m"
                break;
#line 743 "constraint.m"
              case (MR_Integer) 2:
#line 743 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 743 "constraint.m"
                break;
#line 743 "constraint.m"
            }
#line 741 "constraint.m"
          }
#line 747 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 746 "constraint.m"
          transform_hlds__constraint__succeeded = MR_TRUE;
#line 747 "constraint.m"
        else
#line 748 "constraint.m"
          {
#line 748 "constraint.m"
            transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_10);
          }
#line 739 "constraint.m"
      }
#line 735 "constraint.m"
    else
#line 735 "constraint.m"
      transform_hlds__constraint__succeeded = MR_FALSE;
#line 735 "constraint.m"
    if (!(transform_hlds__constraint__succeeded))
#line 734 "constraint.m"
      {
#line 734 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9;

#line 734 "constraint.m"
        {
#line 734 "constraint.m"
          transform_hlds__constraint__V_9_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr_3);
        }
#line 734 "constraint.m"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_9_9 == (MR_Integer) 1);
#line 734 "constraint.m"
      }
#line 730 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 730 "constraint.m"
  }
#line 728 "constraint.m"
}

#line 717 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
#line 717 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 717 "constraint.m"
{
#line 717 "constraint.m"
  {
#line 717 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 717 "constraint.m"
    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0, 1);
#line 717 "constraint.m"
  }
#line 717 "constraint.m"
}

#line 716 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
#line 716 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 716 "constraint.m"
{
#line 716 "constraint.m"
  {
#line 716 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 716 "constraint.m"
    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20);
#line 716 "constraint.m"
    {
#line 716 "constraint.m"
      transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(transform_hlds__constraint__env_ptr);
#line 716 "constraint.m"
      return;
    }
#line 716 "constraint.m"
  }
#line 716 "constraint.m"
}

#line 717 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
#line 717 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 717 "constraint.m"
{
#line 717 "constraint.m"
  {
#line 717 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 717 "constraint.m"
    {
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_44;
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierChangedVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 1)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 1)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintNonLocals_42;
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_43;
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 0)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 2)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 3)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
#line 660 "constraint.m"
      MR_Word transform_hlds__constraint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 0)));

#line 661 "constraint.m"
      {
#line 661 "constraint.m"
        transform_hlds__constraint__ConstraintNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_41);
      }
#line 3737 "transform_hlds.constraint.c"
      transform_hlds__constraint__TypeCtorInfo_17_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 662 "constraint.m"
      {
#line 662 "constraint.m"
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierChangedVars_33, transform_hlds__constraint__ConstraintNonLocals_42, &transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
#line 664 "constraint.m"
      {
#line 664 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
#line 717 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
#line 717 "constraint.m"
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 717 "constraint.m"
        {
#line 717 "constraint.m"
          transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(transform_hlds__constraint__env_ptr);
#line 717 "constraint.m"
          return;
        }
#line 717 "constraint.m"
    }
#line 717 "constraint.m"
  }
#line 717 "constraint.m"
}

#line 717 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
#line 717 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 717 "constraint.m"
{
#line 717 "constraint.m"
  {
#line 717 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 717 "constraint.m"
    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0) == 0)
#line 717 "constraint.m"
      {
#line 717 "constraint.m"
        {
#line 716 "constraint.m"
          {
#line 716 "constraint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4, transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3, transform_hlds__constraint__env_ptr);
          }
#line 717 "constraint.m"
        }
#line 717 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_FALSE;
#line 717 "constraint.m"
      }
#line 717 "constraint.m"
    else
#line 717 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_TRUE;
#line 717 "constraint.m"
  }
#line 717 "constraint.m"
}

#line 701 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
#line 701 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 701 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
#line 701 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
#line 701 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
#line 701 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5)
#line 701 "constraint.m"
{
#line 701 "constraint.m"
  {
#line 701 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s transform_hlds__constraint__env;

#line 701 "constraint.m"
    (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 705 "constraint.m"
    while (MR_TRUE)
#line 705 "constraint.m"
      {
#line 705 "constraint.m"
        /* tailcall optimized into a loop */
#line 705 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "constraint.m"
          {
#line 706 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 706 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
#line 705 "constraint.m"
          }
#line 705 "constraint.m"
        else
#line 708 "constraint.m"
          {
#line 708 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_13;
#line 708 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_16;
#line 708 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
#line 708 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;
#line 709 "constraint.m"
            MR_Word transform_hlds__constraint__V_17_17;
#line 709 "constraint.m"
            MR_Word transform_hlds__constraint__V_18_18;
#line 709 "constraint.m"
            MR_Word transform_hlds__constraint__V_19_19;

#line 707 "constraint.m"
            (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 707 "constraint.m"
            transform_hlds__constraint__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 709 "constraint.m"
            transform_hlds__constraint__ConstraintGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
#line 709 "constraint.m"
            transform_hlds__constraint__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
#line 709 "constraint.m"
            transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
#line 709 "constraint.m"
            transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
#line 711 "constraint.m"
            {
#line 711 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__ConstraintGoal_16);
            }
#line 711 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 711 "constraint.m"
              {
#line 717 "constraint.m"
                {
#line 717 "constraint.m"
                  transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(&transform_hlds__constraint__env);
                }
#line 717 "constraint.m"
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
#line 711 "constraint.m"
              }
#line 722 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 721 "constraint.m"
              {
#line 721 "constraint.m"
                {
#line 721 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
#line 721 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2));
#line 721 "constraint.m"
                }
#line 721 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 721 "constraint.m"
              }
#line 722 "constraint.m"
            else
#line 723 "constraint.m"
              {
#line 723 "constraint.m"
                {
#line 723 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
#line 723 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4));
#line 723 "constraint.m"
                }
#line 723 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
#line 723 "constraint.m"
              }
#line 725 "constraint.m"
            /* direct tailcall eliminated */
#line 725 "constraint.m"
            {
#line 725 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Constraints_13;
#line 725 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0__tmp_copy_2 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
#line 725 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;

#line 725 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0__tmp_copy_4;
#line 725 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0__tmp_copy_2;
#line 725 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 725 "constraint.m"
            }
#line 725 "constraint.m"
            continue;
#line 708 "constraint.m"
          }
#line 705 "constraint.m"
        break;
#line 705 "constraint.m"
      }
#line 701 "constraint.m"
  }
#line 701 "constraint.m"
}

#line 670 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
#line 670 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 670 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 670 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 670 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 670 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
#line 670 "constraint.m"
{
#line 674 "constraint.m"
  while (MR_TRUE)
#line 674 "constraint.m"
    {
#line 674 "constraint.m"
      /* tailcall optimized into a loop */
#line 674 "constraint.m"
      {
#line 674 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 674 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 674 "constraint.m"
          {
#line 675 "constraint.m"
            {
#line 675 "constraint.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__HeadVar__2_2, transform_hlds__constraint__HeadVar__3_3);
            }
#line 674 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 674 "constraint.m"
          }
#line 674 "constraint.m"
        else
#line 677 "constraint.m"
          {
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_35_35;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_11_43;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__Goal0_11;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints0_12;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__SimpleConstraints_17;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__ComplexConstraints0_18;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__GoalList1_19;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__ComplexConstraints_20;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__RevComplexConstraints_21;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoalList1_22;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoals1_23;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__V_28_28;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__V_29_29;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__V_30_30;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_32_32;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__RevSimpleConstraints_39;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__RevComplexConstraints_40;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__GoalExpr0_50;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__HasSubGoals_52;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_53;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_16_54;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_17_55;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_82;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_84;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapDelta_85;
#line 677 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap_86;
#line 105 "constraint.m"
            MR_Word transform_hlds__constraint__V_51_51;
#line 116 "constraint.m"
            MR_Word transform_hlds__constraint__V_57_57;
#line 116 "constraint.m"
            MR_Word transform_hlds__constraint__V_58_58;
#line 116 "constraint.m"
            MR_Word transform_hlds__constraint__V_59_59;
#line 116 "constraint.m"
            MR_Word transform_hlds__constraint__V_60_60;
#line 118 "constraint.m"
            MR_Word transform_hlds__constraint__V_61_61;
#line 118 "constraint.m"
            MR_Word transform_hlds__constraint__V_62_62;
#line 118 "constraint.m"
            MR_Word transform_hlds__constraint__V_63_63;
#line 118 "constraint.m"
            MR_Word transform_hlds__constraint__V_65_65;
#line 118 "constraint.m"
            MR_Word transform_hlds__constraint__V_64_64;
#line 774 "constraint.m"
            MR_Word transform_hlds__constraint__V_81_81;
#line 775 "constraint.m"
            MR_Word transform_hlds__constraint__V_88_88;
#line 775 "constraint.m"
            MR_Word transform_hlds__constraint__V_89_89;
#line 775 "constraint.m"
            MR_Word transform_hlds__constraint__V_90_90;
#line 775 "constraint.m"
            MR_Word transform_hlds__constraint__V_91_91;
#line 778 "constraint.m"
            MR_Word transform_hlds__constraint__V_92_92;
#line 778 "constraint.m"
            MR_Word transform_hlds__constraint__V_93_93;
#line 778 "constraint.m"
            MR_Word transform_hlds__constraint__V_94_94;
#line 778 "constraint.m"
            MR_Word transform_hlds__constraint__V_96_96;
#line 778 "constraint.m"
            MR_Word transform_hlds__constraint__V_95_95;

#line 676 "constraint.m"
            transform_hlds__constraint__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_26_26, (MR_Integer) 0)));
#line 676 "constraint.m"
            transform_hlds__constraint__Constraints0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_26_26, (MR_Integer) 1)));
#line 694 "constraint.m"
            {
#line 694 "constraint.m"
              transform_hlds__constraint__filter_complex_constraints_2_5_p_0(transform_hlds__constraint__Constraints0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevSimpleConstraints_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevComplexConstraints_40);
            }
#line 4111 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_11_43 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
#line 696 "constraint.m"
            {
#line 696 "constraint.m"
              transform_hlds__constraint__SimpleConstraints_17 = mercury__list__reverse_1_f_0(transform_hlds__constraint__TypeCtorInfo_11_43, transform_hlds__constraint__RevSimpleConstraints_39);
            }
#line 697 "constraint.m"
            {
#line 697 "constraint.m"
              transform_hlds__constraint__ComplexConstraints0_18 = mercury__list__reverse_1_f_0(transform_hlds__constraint__TypeCtorInfo_11_43, transform_hlds__constraint__RevComplexConstraints_40);
            }
#line 105 "constraint.m"
            transform_hlds__constraint__GoalExpr0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 0)));
#line 105 "constraint.m"
            transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 1)));
#line 106 "constraint.m"
            {
#line 106 "constraint.m"
              transform_hlds__constraint__HasSubGoals_52 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_50);
            }
#line 109 "constraint.m"
#line 109 "constraint.m"
            switch (transform_hlds__constraint__HasSubGoals_52) {
#line 109 "constraint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 109 "constraint.m"
              case (MR_Integer) 1:
#line 108 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 109 "constraint.m"
                break;
#line 109 "constraint.m"
              case (MR_Integer) 0:
#line 802 "constraint.m"
                if ((transform_hlds__constraint__SimpleConstraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 802 "constraint.m"
                else
#line 804 "constraint.m"
                  {
#line 805 "constraint.m"
                    MR_Word transform_hlds__constraint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 805 "constraint.m"
                    MR_Word transform_hlds__constraint__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 805 "constraint.m"
                    MR_Word transform_hlds__constraint__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 805 "constraint.m"
                    MR_Word transform_hlds__constraint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 805 "constraint.m"
                    MR_Word transform_hlds__constraint__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));

#line 805 "constraint.m"
                    {
#line 805 "constraint.m"
                      transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 805 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 0) = ((MR_Box) (transform_hlds__constraint__V_74_74));
#line 805 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 1) = ((MR_Box) (transform_hlds__constraint__V_75_75));
#line 805 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 2) = ((MR_Box) (transform_hlds__constraint__V_76_76));
#line 805 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 3) = ((MR_Box) (transform_hlds__constraint__V_77_77));
#line 805 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 805 "constraint.m"
                    }
#line 804 "constraint.m"
                  }
#line 109 "constraint.m"
                break;
#line 109 "constraint.m"
            }
#line 116 "constraint.m"
            transform_hlds__constraint__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 0)));
#line 116 "constraint.m"
            transform_hlds__constraint__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 1)));
#line 116 "constraint.m"
            transform_hlds__constraint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 2)));
#line 116 "constraint.m"
            transform_hlds__constraint__InstMap0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 3)));
#line 116 "constraint.m"
            transform_hlds__constraint__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 4)));
#line 117 "constraint.m"
            {
#line 117 "constraint.m"
              transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(transform_hlds__constraint__Goal0_11, transform_hlds__constraint__SimpleConstraints_17, &transform_hlds__constraint__GoalList1_19, transform_hlds__constraint__STATE_VARIABLE_Info_16_54, &transform_hlds__constraint__STATE_VARIABLE_Info_17_55);
            }
#line 118 "constraint.m"
            transform_hlds__constraint__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 0)));
#line 118 "constraint.m"
            transform_hlds__constraint__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 1)));
#line 118 "constraint.m"
            transform_hlds__constraint__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 2)));
#line 118 "constraint.m"
            transform_hlds__constraint__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 3)));
#line 118 "constraint.m"
            transform_hlds__constraint__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 4)));
#line 118 "constraint.m"
            {
#line 118 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 118 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (transform_hlds__constraint__V_61_61));
#line 118 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (transform_hlds__constraint__V_62_62));
#line 118 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (transform_hlds__constraint__V_63_63));
#line 118 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_53));
#line 118 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (transform_hlds__constraint__V_65_65));
#line 118 "constraint.m"
            }
#line 681 "constraint.m"
            {
#line 681 "constraint.m"
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__ComplexConstraints0_18, &transform_hlds__constraint__ComplexConstraints_20);
            }
#line 4232 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 682 "constraint.m"
            {
#line 682 "constraint.m"
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__ComplexConstraints_20, &transform_hlds__constraint__RevComplexConstraints_21);
            }
#line 683 "constraint.m"
            {
#line 683 "constraint.m"
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__GoalList1_19, &transform_hlds__constraint__RevGoalList1_22);
            }
#line 684 "constraint.m"
            {
#line 684 "constraint.m"
              transform_hlds__constraint__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_30_30, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__2_2));
#line 684 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "constraint.m"
            }
#line 684 "constraint.m"
            {
#line 684 "constraint.m"
              transform_hlds__constraint__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_29_29, 0) = ((MR_Box) (transform_hlds__constraint__RevGoalList1_22));
#line 684 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_29_29, 1) = ((MR_Box) (transform_hlds__constraint__V_30_30));
#line 684 "constraint.m"
            }
#line 684 "constraint.m"
            {
#line 684 "constraint.m"
              transform_hlds__constraint__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_28_28, 0) = ((MR_Box) (transform_hlds__constraint__RevComplexConstraints_21));
#line 684 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_28_28, 1) = ((MR_Box) (transform_hlds__constraint__V_29_29));
#line 684 "constraint.m"
            }
#line 684 "constraint.m"
            {
#line 684 "constraint.m"
              mercury__list__condense_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__V_28_28, &transform_hlds__constraint__RevGoals1_23);
            }
#line 774 "constraint.m"
            transform_hlds__constraint__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 0)));
#line 774 "constraint.m"
            transform_hlds__constraint__GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 1)));
#line 775 "constraint.m"
            transform_hlds__constraint__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 775 "constraint.m"
            transform_hlds__constraint__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 775 "constraint.m"
            transform_hlds__constraint__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 775 "constraint.m"
            transform_hlds__constraint__InstMap0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 775 "constraint.m"
            transform_hlds__constraint__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 776 "constraint.m"
            {
#line 776 "constraint.m"
              transform_hlds__constraint__InstMapDelta_85 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_82);
            }
#line 777 "constraint.m"
            {
#line 777 "constraint.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_84, transform_hlds__constraint__InstMapDelta_85, &transform_hlds__constraint__InstMap_86);
            }
#line 778 "constraint.m"
            transform_hlds__constraint__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 778 "constraint.m"
            transform_hlds__constraint__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 778 "constraint.m"
            transform_hlds__constraint__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 778 "constraint.m"
            transform_hlds__constraint__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 778 "constraint.m"
            transform_hlds__constraint__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 778 "constraint.m"
            {
#line 778 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 778 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__constraint__V_92_92));
#line 778 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__constraint__V_93_93));
#line 778 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__constraint__V_94_94));
#line 778 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_86));
#line 778 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (transform_hlds__constraint__V_96_96));
#line 778 "constraint.m"
            }
#line 687 "constraint.m"
            /* direct tailcall eliminated */
#line 687 "constraint.m"
            {
#line 687 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Goals0_13;
#line 687 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__2__tmp_copy_2 = transform_hlds__constraint__RevGoals1_23;
#line 687 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_Info_32_32;

#line 687 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_0_4 = transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 687 "constraint.m"
              transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__2__tmp_copy_2;
#line 687 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 687 "constraint.m"
            }
#line 687 "constraint.m"
            continue;
#line 677 "constraint.m"
          }
#line 674 "constraint.m"
      }
#line 674 "constraint.m"
      break;
#line 674 "constraint.m"
    }
#line 670 "constraint.m"
}

#line 642 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
#line 642 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 642 "constraint.m"
{
#line 642 "constraint.m"
  {
#line 642 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 642 "constraint.m"
    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0, 1);
#line 642 "constraint.m"
  }
#line 642 "constraint.m"
}

#line 642 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
#line 642 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 642 "constraint.m"
{
#line 642 "constraint.m"
  {
#line 642 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 642 "constraint.m"
    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31);
#line 642 "constraint.m"
    {
#line 642 "constraint.m"
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(transform_hlds__constraint__env_ptr);
#line 642 "constraint.m"
      return;
    }
#line 642 "constraint.m"
  }
#line 642 "constraint.m"
}

#line 642 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
#line 642 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 642 "constraint.m"
{
#line 642 "constraint.m"
  {
#line 642 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 642 "constraint.m"
    {
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_57;
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierChangedVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 1)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 1)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintNonLocals_55;
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_56;
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 0)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 2)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 3)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
#line 660 "constraint.m"
      MR_Word transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 0)));

#line 661 "constraint.m"
      {
#line 661 "constraint.m"
        transform_hlds__constraint__ConstraintNonLocals_55 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_54);
      }
#line 4452 "transform_hlds.constraint.c"
      transform_hlds__constraint__TypeCtorInfo_17_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 662 "constraint.m"
      {
#line 662 "constraint.m"
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierChangedVars_46, transform_hlds__constraint__ConstraintNonLocals_55, &transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
#line 664 "constraint.m"
      {
#line 664 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
#line 643 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 643 "constraint.m"
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
#line 643 "constraint.m"
        {
#line 643 "constraint.m"
          transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(transform_hlds__constraint__env_ptr);
#line 643 "constraint.m"
          return;
        }
#line 642 "constraint.m"
    }
#line 642 "constraint.m"
  }
#line 642 "constraint.m"
}

#line 642 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
#line 642 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 642 "constraint.m"
{
#line 642 "constraint.m"
  {
#line 642 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 642 "constraint.m"
    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0) == 0)
#line 642 "constraint.m"
      {
#line 642 "constraint.m"
        {
#line 642 "constraint.m"
          {
#line 642 "constraint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4, transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3, transform_hlds__constraint__env_ptr);
          }
#line 642 "constraint.m"
        }
#line 642 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 642 "constraint.m"
      }
#line 642 "constraint.m"
    else
#line 642 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 642 "constraint.m"
  }
#line 642 "constraint.m"
}

#line 608 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
#line 608 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
#line 608 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
#line 608 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7)
#line 608 "constraint.m"
{
#line 608 "constraint.m"
  {
#line 608 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s transform_hlds__constraint__env;

#line 608 "constraint.m"
    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4;
#line 613 "constraint.m"
    while (MR_TRUE)
#line 613 "constraint.m"
      {
#line 613 "constraint.m"
        /* tailcall optimized into a loop */
#line 613 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "constraint.m"
          {
#line 614 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
#line 614 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevDependent_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 613 "constraint.m"
          }
#line 613 "constraint.m"
        else
#line 616 "constraint.m"
          {
#line 616 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_19;
#line 616 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_22;
#line 616 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_24;
#line 616 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoalInfo_27;
#line 616 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintNonLocals_28;
#line 616 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
#line 616 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__V_23_23;
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__V_25_25;
#line 618 "constraint.m"
            MR_Word transform_hlds__constraint__V_26_26;

#line 616 "constraint.m"
            (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 616 "constraint.m"
            transform_hlds__constraint__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 617 "constraint.m"
            transform_hlds__constraint__ConstraintGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
#line 617 "constraint.m"
            transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
#line 617 "constraint.m"
            transform_hlds__constraint__IncompatibleInstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
#line 617 "constraint.m"
            transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
#line 618 "constraint.m"
            transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 0)));
#line 618 "constraint.m"
            transform_hlds__constraint__ConstraintGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 1)));
#line 619 "constraint.m"
            {
#line 619 "constraint.m"
              transform_hlds__constraint__ConstraintNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_27);
            }
#line 626 "constraint.m"
            {
#line 626 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 626 "constraint.m"
              MR_Word transform_hlds__constraint__OutputVarsUsedByConstraint_29;

#line 625 "constraint.m"
              {
#line 625 "constraint.m"
                parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__ConstraintNonLocals_28, transform_hlds__constraint__HeadVar__2_2, &transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
#line 627 "constraint.m"
              {
#line 627 "constraint.m"
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
#line 627 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 626 "constraint.m"
            }
#line 628 "constraint.m"
            if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
#line 628 "constraint.m"
              {
#line 634 "constraint.m"
                {
#line 634 "constraint.m"
                  MR_Word transform_hlds__constraint__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 634 "constraint.m"
                  MR_Word transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30;

#line 633 "constraint.m"
                  {
#line 633 "constraint.m"
                    parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__IncompatibleInstVars_24, &transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
#line 635 "constraint.m"
                  {
#line 635 "constraint.m"
                    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
#line 635 "constraint.m"
                  (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 634 "constraint.m"
                }
#line 628 "constraint.m"
                if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
#line 642 "constraint.m"
                  {
#line 642 "constraint.m"
                    {
#line 642 "constraint.m"
                      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(&transform_hlds__constraint__env);
                    }
#line 642 "constraint.m"
                  }
#line 628 "constraint.m"
              }
#line 647 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
#line 646 "constraint.m"
              {
#line 646 "constraint.m"
                {
#line 646 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
#line 646 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4));
#line 646 "constraint.m"
                }
#line 646 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
#line 646 "constraint.m"
              }
#line 647 "constraint.m"
            else
#line 648 "constraint.m"
              {
#line 648 "constraint.m"
                {
#line 648 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
#line 648 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6));
#line 648 "constraint.m"
                }
#line 648 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 648 "constraint.m"
              }
#line 650 "constraint.m"
            /* direct tailcall eliminated */
#line 650 "constraint.m"
            {
#line 650 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__3__tmp_copy_3 = transform_hlds__constraint__Constraints_19;
#line 650 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
#line 650 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0__tmp_copy_6 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;

#line 650 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0__tmp_copy_6;
#line 650 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_0__tmp_copy_4;
#line 650 "constraint.m"
              transform_hlds__constraint__HeadVar__3_3 = transform_hlds__constraint__HeadVar__3__tmp_copy_3;
#line 650 "constraint.m"
            }
#line 650 "constraint.m"
            continue;
#line 616 "constraint.m"
          }
#line 613 "constraint.m"
        break;
#line 613 "constraint.m"
      }
#line 608 "constraint.m"
  }
#line 608 "constraint.m"
}

#line 598 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
#line 598 "constraint.m"
  MR_Word transform_hlds__constraint__NonLocals_6,
#line 598 "constraint.m"
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
#line 598 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 598 "constraint.m"
  MR_Word * transform_hlds__constraint__Dependent_9,
#line 598 "constraint.m"
  MR_Word * transform_hlds__constraint__Independent_10)
#line 598 "constraint.m"
{
#line 602 "constraint.m"
  {
#line 602 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 602 "constraint.m"
    MR_Word transform_hlds__constraint__TypeCtorInfo_15_15;
#line 602 "constraint.m"
    MR_Word transform_hlds__constraint__RevDependent_11;
#line 602 "constraint.m"
    MR_Word transform_hlds__constraint__RevIndependent_12;

#line 603 "constraint.m"
    {
#line 603 "constraint.m"
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(transform_hlds__constraint__NonLocals_6, transform_hlds__constraint__GoalOutputVars_7, transform_hlds__constraint__Constraints_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevDependent_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevIndependent_12);
    }
#line 4766 "transform_hlds.constraint.c"
    transform_hlds__constraint__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
#line 605 "constraint.m"
    {
#line 605 "constraint.m"
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevDependent_11, transform_hlds__constraint__Dependent_9);
    }
#line 606 "constraint.m"
    {
#line 606 "constraint.m"
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevIndependent_12, transform_hlds__constraint__Independent_10);
#line 606 "constraint.m"
      return;
    }
#line 602 "constraint.m"
  }
#line 598 "constraint.m"
}

#line 552 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
#line 552 "constraint.m"
  MR_Word transform_hlds__constraint__ConstructVar_1,
#line 552 "constraint.m"
  MR_Word transform_hlds__constraint__Construct0_2,
#line 552 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 552 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 552 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 552 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
#line 552 "constraint.m"
{
#line 556 "constraint.m"
  {
#line 556 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 556 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "constraint.m"
      {
#line 556 "constraint.m"
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 556 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 556 "constraint.m"
      }
#line 556 "constraint.m"
    else
#line 558 "constraint.m"
      {
#line 558 "constraint.m"
        MR_Word transform_hlds__constraint__Constraint0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 558 "constraint.m"
        MR_Word transform_hlds__constraint__Constraints0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 558 "constraint.m"
        MR_Word transform_hlds__constraint__Constraint_16;
#line 558 "constraint.m"
        MR_Word transform_hlds__constraint__Constraints_17;
#line 558 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintGoal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 0)));
#line 558 "constraint.m"
        MR_Word transform_hlds__constraint__ChangedVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 1)));
#line 558 "constraint.m"
        MR_Word transform_hlds__constraint__IncompatibleInstVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 2)));
#line 558 "constraint.m"
        MR_Word transform_hlds__constraint__Constructs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 3)));
#line 558 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_39_39;
#line 562 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 1)));
#line 562 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintNonLocals_25;
#line 562 "constraint.m"
        MR_Word transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 0)));

#line 563 "constraint.m"
        {
#line 563 "constraint.m"
          transform_hlds__constraint__ConstraintNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintInfo_24);
        }
#line 564 "constraint.m"
        {
#line 564 "constraint.m"
          transform_hlds__constraint__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__constraint__ConstraintNonLocals_25, transform_hlds__constraint__ConstructVar_1);
        }
#line 579 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 566 "constraint.m"
          {
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_64_64;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__NewVar_28;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__VarSet_29;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__VarType_30;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes_31;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__Subn_32;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__Construct_33;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__Constructs_34;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_35;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__V_41_41;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__V_52_52;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__V_55_55;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__V_56_56;
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 566 "constraint.m"
            MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_53_53;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_54_54;

#line 568 "constraint.m"
            {
#line 568 "constraint.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarSet0_26, &transform_hlds__constraint__VarSet_29);
            }
#line 569 "constraint.m"
            {
#line 569 "constraint.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes0_27, transform_hlds__constraint__ConstructVar_1, &transform_hlds__constraint__VarType_30);
            }
#line 570 "constraint.m"
            {
#line 570 "constraint.m"
              parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarType_30, transform_hlds__constraint__VarTypes0_27, &transform_hlds__constraint__VarTypes_31);
            }
#line 571 "constraint.m"
            transform_hlds__constraint__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 571 "constraint.m"
            transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 571 "constraint.m"
            transform_hlds__constraint__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 571 "constraint.m"
            transform_hlds__constraint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 571 "constraint.m"
            transform_hlds__constraint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 572 "constraint.m"
            {
#line 572 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 572 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (transform_hlds__constraint__V_52_52));
#line 572 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_31));
#line 572 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_29));
#line 572 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (transform_hlds__constraint__V_55_55));
#line 572 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (transform_hlds__constraint__V_56_56));
#line 572 "constraint.m"
            }
#line 573 "constraint.m"
            {
#line 573 "constraint.m"
              transform_hlds__constraint__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 573 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_41_41, 0) = ((MR_Box) (transform_hlds__constraint__ConstructVar_1));
#line 573 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_41_41, 1) = ((MR_Box) (transform_hlds__constraint__NewVar_28));
#line 573 "constraint.m"
            }
#line 573 "constraint.m"
            {
#line 573 "constraint.m"
              transform_hlds__constraint__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_40_40, 0) = ((MR_Box) (transform_hlds__constraint__V_41_41));
#line 573 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "constraint.m"
            }
#line 4964 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_64_64 = (MR_Word) &transform_hlds__constraint_scalar_common_1[2];
#line 573 "constraint.m"
            {
#line 573 "constraint.m"
              mercury__map__from_assoc_list_2_p_0(transform_hlds__constraint__TypeInfo_64_64, transform_hlds__constraint__TypeInfo_64_64, transform_hlds__constraint__V_40_40, &transform_hlds__constraint__Subn_32);
            }
#line 574 "constraint.m"
            {
#line 574 "constraint.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__Construct0_2, &transform_hlds__constraint__Construct_33);
            }
#line 575 "constraint.m"
            {
#line 575 "constraint.m"
              transform_hlds__constraint__Constructs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 0) = ((MR_Box) (transform_hlds__constraint__Construct_33));
#line 575 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 1) = ((MR_Box) (transform_hlds__constraint__Constructs0_22));
#line 575 "constraint.m"
            }
#line 576 "constraint.m"
            {
#line 576 "constraint.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__ConstraintGoal0_19, &transform_hlds__constraint__ConstraintGoal_35);
            }
#line 577 "constraint.m"
            {
#line 577 "constraint.m"
              transform_hlds__constraint__Constraint_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 577 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 0) = ((MR_Box) (transform_hlds__constraint__ConstraintGoal_35));
#line 577 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_20));
#line 577 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_21));
#line 577 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 3) = ((MR_Box) (transform_hlds__constraint__Constructs_34));
#line 577 "constraint.m"
            }
#line 566 "constraint.m"
          }
#line 579 "constraint.m"
        else
#line 580 "constraint.m"
          {
#line 580 "constraint.m"
            transform_hlds__constraint__Constraint_16 = transform_hlds__constraint__Constraint0_14;
#line 580 "constraint.m"
            transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 580 "constraint.m"
          }
#line 582 "constraint.m"
        {
#line 582 "constraint.m"
          transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_1, transform_hlds__constraint__Construct0_2, transform_hlds__constraint__Constraints0_15, &transform_hlds__constraint__Constraints_17, transform_hlds__constraint__STATE_VARIABLE_Info_39_39, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
#line 558 "constraint.m"
        {
#line 558 "constraint.m"
          MR_Word base;
#line 558 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "constraint.m"
          *transform_hlds__constraint__HeadVar__4_4 = base;
#line 558 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_16));
#line 558 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_17));
#line 558 "constraint.m"
        }
#line 558 "constraint.m"
      }
#line 556 "constraint.m"
  }
#line 552 "constraint.m"
}

#line 544 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__add_constraint_feature_1_f_0(
#line 544 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 544 "constraint.m"
{
#line 547 "constraint.m"
  {
#line 547 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 547 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;
#line 547 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 547 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 547 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5;

#line 548 "constraint.m"
    {
#line 548 "constraint.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_4, &transform_hlds__constraint__GoalInfo_5);
    }
#line 547 "constraint.m"
    {
#line 547 "constraint.m"
      transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 547 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_3));
#line 547 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_5));
#line 547 "constraint.m"
    }
#line 547 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 547 "constraint.m"
  }
#line 544 "constraint.m"
}

#line 535 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
#line 535 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 535 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 535 "constraint.m"
{
#line 535 "constraint.m"
  {
#line 535 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 535 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_21;

#line 535 "constraint.m"
    {
#line 535 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_21 = transform_hlds__constraint__IntroducedFrom__func__attach_constraints__535__1_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 535 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_21));
#line 535 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 535 "constraint.m"
  }
#line 535 "constraint.m"
}

#line 530 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
#line 530 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_4,
#line 530 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_5)
#line 530 "constraint.m"
{
#line 533 "constraint.m"
  {
#line 533 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 533 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__3_3;
#line 533 "constraint.m"
    MR_Word transform_hlds__constraint__Constraints_6;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 0)));
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 1)));
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__V_7_7;
#line 534 "constraint.m"
    MR_Integer transform_hlds__constraint__V_8_8;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__V_9_9;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__V_10_10;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__V_12_12;

#line 534 "constraint.m"
    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 534 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 534 "constraint.m"
      {
#line 534 "constraint.m"
        transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 0)));
#line 534 "constraint.m"
        transform_hlds__constraint__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 1)));
#line 534 "constraint.m"
        transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 2)));
#line 534 "constraint.m"
        transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 3)));
#line 534 "constraint.m"
        transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 4)));
#line 534 "constraint.m"
        transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 5)));
#line 535 "constraint.m"
        {
#line 535 "constraint.m"
          MR_Word transform_hlds__constraint__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;

#line 535 "constraint.m"
          {
#line 535 "constraint.m"
            transform_hlds__constraint__Constraints_6 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_29_29, transform_hlds__constraint__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__constraint_scalar_common_2[6], transform_hlds__constraint__Constraints0_5);
          }
#line 535 "constraint.m"
        }
#line 534 "constraint.m"
      }
#line 534 "constraint.m"
    else
#line 541 "constraint.m"
      transform_hlds__constraint__Constraints_6 = transform_hlds__constraint__Constraints0_5;
#line 533 "constraint.m"
    {
#line 533 "constraint.m"
      transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 533 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__constraint__Goal_4));
#line 533 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_6));
#line 533 "constraint.m"
    }
#line 533 "constraint.m"
    return transform_hlds__constraint__HeadVar__3_3;
#line 533 "constraint.m"
  }
#line 530 "constraint.m"
}

#line 525 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
#line 525 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_3,
#line 525 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_2)
#line 525 "constraint.m"
{
#line 528 "constraint.m"
  {
#line 528 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 528 "constraint.m"
    {
#line 528 "constraint.m"
      MR_Word base;
#line 528 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_2 = base;
#line 528 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_3));
#line 528 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "constraint.m"
    }
#line 528 "constraint.m"
  }
#line 525 "constraint.m"
}

#line 511 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
#line 511 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 511 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 511 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 511 "constraint.m"
{
#line 511 "constraint.m"
  {
#line 511 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 511 "constraint.m"
    MR_Word transform_hlds__constraint__conv2_HeadVar__2_2;

#line 511 "constraint.m"
    {
#line 511 "constraint.m"
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv2_HeadVar__2_2);
    }
#line 511 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_HeadVar__2_2));
#line 511 "constraint.m"
  }
#line 511 "constraint.m"
}

#line 497 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
#line 497 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 497 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 497 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 497 "constraint.m"
{
#line 497 "constraint.m"
  {
#line 497 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 497 "constraint.m"
    MR_Word transform_hlds__constraint__conv1_HeadVar__2_2;

#line 497 "constraint.m"
    {
#line 497 "constraint.m"
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv1_HeadVar__2_2);
    }
#line 497 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_HeadVar__2_2));
#line 497 "constraint.m"
  }
#line 497 "constraint.m"
}

#line 416 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
#line 416 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 416 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 416 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 416 "constraint.m"
{
#line 416 "constraint.m"
  {
#line 416 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 416 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_21;

#line 416 "constraint.m"
    {
#line 416 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__416__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_21);
    }
#line 416 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_21));
#line 416 "constraint.m"
  }
#line 416 "constraint.m"
}

#line 410 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_1,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_4,
#line 410 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_5,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
#line 410 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7)
#line 410 "constraint.m"
{
#line 414 "constraint.m"
  while (MR_TRUE)
#line 414 "constraint.m"
    {
#line 414 "constraint.m"
      /* tailcall optimized into a loop */
#line 414 "constraint.m"
      {
#line 414 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 414 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "constraint.m"
          {
#line 414 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_116_116;
#line 414 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints1_13;
#line 414 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_16;

#line 415 "constraint.m"
            {
#line 415 "constraint.m"
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_13);
            }
#line 5373 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_116_116 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 416 "constraint.m"
            {
#line 416 "constraint.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_116_116, (MR_Word) &transform_hlds__constraint_scalar_common_2[3], transform_hlds__constraint__Constraints1_13, &transform_hlds__constraint__Constraints_16);
            }
#line 419 "constraint.m"
            {
#line 419 "constraint.m"
              mercury__list__append_3_p_1(transform_hlds__constraint__TypeInfo_116_116, transform_hlds__constraint__Constraints_16, transform_hlds__constraint__Goals0_4, transform_hlds__constraint__Goals_5);
            }
#line 414 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_Info_7 = transform_hlds__constraint__STATE_VARIABLE_Info_0_6;
#line 414 "constraint.m"
          }
#line 414 "constraint.m"
        else
#line 422 "constraint.m"
          {
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__Conjunct_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__RevConjuncts0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__Goal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 0)));
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 1)));
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__OutputVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 2)));
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 3)));
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__NonLocals_38;
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__CI_ModuleInfo0_39;
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__GoalCanLoopOrThrow_40;
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__CI_ModuleInfo_41;
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__Goals1_43;
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints1_45;
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 422 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_77_77;
#line 425 "constraint.m"
            MR_Word transform_hlds__constraint__GoalExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__V_101_101;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__V_102_102;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__V_103_103;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__V_104_104;
#line 430 "constraint.m"
            MR_Word transform_hlds__constraint__V_106_106;
#line 430 "constraint.m"
            MR_Word transform_hlds__constraint__V_107_107;
#line 430 "constraint.m"
            MR_Word transform_hlds__constraint__V_108_108;
#line 430 "constraint.m"
            MR_Word transform_hlds__constraint__V_109_109;
#line 430 "constraint.m"
            MR_Word transform_hlds__constraint__V_105_105;
#line 436 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_117_117;
#line 436 "constraint.m"
            MR_Word transform_hlds__constraint__Detism_42;
#line 436 "constraint.m"
            MR_Word transform_hlds__constraint__V_69_69;

#line 426 "constraint.m"
            {
#line 426 "constraint.m"
              transform_hlds__constraint__NonLocals_38 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__GoalInfo_37);
            }
#line 427 "constraint.m"
            transform_hlds__constraint__CI_ModuleInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 427 "constraint.m"
            transform_hlds__constraint__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 427 "constraint.m"
            transform_hlds__constraint__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 427 "constraint.m"
            transform_hlds__constraint__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 427 "constraint.m"
            transform_hlds__constraint__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 428 "constraint.m"
            {
#line 428 "constraint.m"
              hlds__goal_form__goal_can_loop_or_throw_4_p_0(transform_hlds__constraint__Goal_32, &transform_hlds__constraint__GoalCanLoopOrThrow_40, transform_hlds__constraint__CI_ModuleInfo0_39, &transform_hlds__constraint__CI_ModuleInfo_41);
            }
#line 430 "constraint.m"
            transform_hlds__constraint__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 430 "constraint.m"
            transform_hlds__constraint__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 430 "constraint.m"
            transform_hlds__constraint__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 430 "constraint.m"
            transform_hlds__constraint__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 430 "constraint.m"
            transform_hlds__constraint__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 430 "constraint.m"
            {
#line 430 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 430 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 0) = ((MR_Box) (transform_hlds__constraint__CI_ModuleInfo_41));
#line 430 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 1) = ((MR_Box) (transform_hlds__constraint__V_106_106));
#line 430 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 2) = ((MR_Box) (transform_hlds__constraint__V_107_107));
#line 430 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 3) = ((MR_Box) (transform_hlds__constraint__V_108_108));
#line 430 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 4) = ((MR_Box) (transform_hlds__constraint__V_109_109));
#line 430 "constraint.m"
            }
#line 436 "constraint.m"
            {
#line 436 "constraint.m"
              transform_hlds__constraint__Detism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_37);
            }
#line 438 "constraint.m"
#line 438 "constraint.m"
            switch (transform_hlds__constraint__Detism_42) {
#line 438 "constraint.m"
              default:
#line 438 "constraint.m"
                transform_hlds__constraint__succeeded = MR_FALSE;
#line 438 "constraint.m"
                break;
#line 438 "constraint.m"
              case (MR_Integer) 7:
#line 438 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 438 "constraint.m"
                break;
#line 438 "constraint.m"
              case (MR_Integer) 1:
#line 437 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 438 "constraint.m"
                break;
#line 438 "constraint.m"
            }
#line 436 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 436 "constraint.m"
              {
#line 5528 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 443 "constraint.m"
                {
#line 443 "constraint.m"
                  transform_hlds__constraint__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_117_117, transform_hlds__constraint__OutputVars_34);
                }
#line 436 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 436 "constraint.m"
                  {
#line 446 "constraint.m"
                    {
#line 446 "constraint.m"
                      transform_hlds__constraint__V_69_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_37);
                    }
#line 446 "constraint.m"
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_69_69 == (MR_Integer) 0);
#line 436 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 449 "constraint.m"
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalCanLoopOrThrow_40 == (MR_Integer) 1);
#line 436 "constraint.m"
                  }
#line 436 "constraint.m"
              }
#line 457 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 453 "constraint.m"
              {
#line 453 "constraint.m"
                MR_Word transform_hlds__constraint__Constraint_44;

#line 453 "constraint.m"
                transform_hlds__constraint__Goals1_43 = transform_hlds__constraint__Goals0_4;
#line 454 "constraint.m"
                {
#line 454 "constraint.m"
                  transform_hlds__constraint__Constraint_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 454 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_33));
#line 454 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_35));
#line 454 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "constraint.m"
                }
#line 456 "constraint.m"
                {
#line 456 "constraint.m"
                  transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_45, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_44));
#line 456 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_45, 1) = ((MR_Box) (transform_hlds__constraint__Constraints0_3));
#line 456 "constraint.m"
                }
#line 453 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 453 "constraint.m"
              }
#line 457 "constraint.m"
            else
#line 477 "constraint.m"
              {
#line 477 "constraint.m"
                MR_Word transform_hlds__constraint__ConstructVar_52;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__Unify_49;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_73_73;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_46_46;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_47_47;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_48_48;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_50_50;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_53_53;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_54_54;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_55_55;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_56_56;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_57_57;

#line 467 "constraint.m"
                transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 467 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 467 "constraint.m"
                  {
#line 467 "constraint.m"
                    transform_hlds__constraint__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 0)));
#line 467 "constraint.m"
                    transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 1)));
#line 467 "constraint.m"
                    transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 2)));
#line 467 "constraint.m"
                    transform_hlds__constraint__Unify_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 3)));
#line 467 "constraint.m"
                    transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 4)));
#line 468 "constraint.m"
                    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__Unify_49)) == (MR_mktag((MR_Integer) 0)));
#line 468 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 468 "constraint.m"
                      {
#line 468 "constraint.m"
                        transform_hlds__constraint__ConstructVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 0)));
#line 468 "constraint.m"
                        transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 1)));
#line 468 "constraint.m"
                        transform_hlds__constraint__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 2)));
#line 468 "constraint.m"
                        transform_hlds__constraint__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 3)));
#line 468 "constraint.m"
                        transform_hlds__constraint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 4)));
#line 468 "constraint.m"
                        transform_hlds__constraint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 5)));
#line 468 "constraint.m"
                        transform_hlds__constraint__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 6)));
#line 468 "constraint.m"
                        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 468 "constraint.m"
                      }
#line 467 "constraint.m"
                  }
#line 477 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 470 "constraint.m"
                  {
#line 470 "constraint.m"
                    MR_Word transform_hlds__constraint__V_74_74;
#line 470 "constraint.m"
                    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_76_76;
#line 476 "constraint.m"
                    MR_Word transform_hlds__constraint__V_110_110;
#line 476 "constraint.m"
                    MR_Word transform_hlds__constraint__V_111_111;
#line 476 "constraint.m"
                    MR_Word transform_hlds__constraint__V_112_112;
#line 476 "constraint.m"
                    MR_Word transform_hlds__constraint__V_113_113;
#line 476 "constraint.m"
                    MR_Word transform_hlds__constraint__V_114_114;

#line 470 "constraint.m"
                    {
#line 470 "constraint.m"
                      transform_hlds__constraint__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 470 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_74_74, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 470 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "constraint.m"
                    }
#line 470 "constraint.m"
                    {
#line 470 "constraint.m"
                      transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "constraint.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_74_74));
#line 470 "constraint.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 470 "constraint.m"
                    }
#line 471 "constraint.m"
                    {
#line 471 "constraint.m"
                      transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_52, transform_hlds__constraint__Goal_32, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_45, transform_hlds__constraint__STATE_VARIABLE_Info_68_68, &transform_hlds__constraint__STATE_VARIABLE_Info_76_76);
                    }
#line 476 "constraint.m"
                    transform_hlds__constraint__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 0)));
#line 476 "constraint.m"
                    transform_hlds__constraint__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 1)));
#line 476 "constraint.m"
                    transform_hlds__constraint__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 2)));
#line 476 "constraint.m"
                    transform_hlds__constraint__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 3)));
#line 476 "constraint.m"
                    transform_hlds__constraint__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 4)));
#line 476 "constraint.m"
                    {
#line 476 "constraint.m"
                      transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 476 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 0) = ((MR_Box) (transform_hlds__constraint__V_110_110));
#line 476 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 1) = ((MR_Box) (transform_hlds__constraint__V_111_111));
#line 476 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 2) = ((MR_Box) (transform_hlds__constraint__V_112_112));
#line 476 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 3) = ((MR_Box) (transform_hlds__constraint__V_113_113));
#line 476 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 4) = ((MR_Box) ((MR_Integer) 1));
#line 476 "constraint.m"
                    }
#line 470 "constraint.m"
                  }
#line 477 "constraint.m"
                else
#line 486 "constraint.m"
                  {
#line 480 "constraint.m"
                    MR_Word transform_hlds__constraint__Detism_94;
#line 480 "constraint.m"
                    MR_Word transform_hlds__constraint__V_126_126;
#line 481 "constraint.m"
                    MR_Word transform_hlds__constraint__V_58_58;

#line 480 "constraint.m"
                    {
#line 480 "constraint.m"
                      transform_hlds__constraint__Detism_94 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_37);
                    }
#line 481 "constraint.m"
                    {
#line 481 "constraint.m"
                      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__constraint__Detism_94, &transform_hlds__constraint__V_58_58, &transform_hlds__constraint__V_126_126);
                    }
#line 481 "constraint.m"
                    transform_hlds__constraint__succeeded = ((MR_Integer) 0 == transform_hlds__constraint__V_126_126);
#line 486 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 483 "constraint.m"
                      {
#line 483 "constraint.m"
                        MR_Word transform_hlds__constraint__V_81_81;

#line 483 "constraint.m"
                        {
#line 483 "constraint.m"
                          transform_hlds__constraint__constraint_info_update_changed_3_p_0(transform_hlds__constraint__Constraints0_3, transform_hlds__constraint__STATE_VARIABLE_Info_68_68, &transform_hlds__constraint__STATE_VARIABLE_Info_77_77);
                        }
#line 484 "constraint.m"
                        transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "constraint.m"
                        {
#line 485 "constraint.m"
                          transform_hlds__constraint__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_81_81, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 485 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "constraint.m"
                        }
#line 485 "constraint.m"
                        {
#line 485 "constraint.m"
                          transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "constraint.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_81_81));
#line 485 "constraint.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 485 "constraint.m"
                        }
#line 483 "constraint.m"
                      }
#line 486 "constraint.m"
                    else
#line 500 "constraint.m"
                      {
#line 489 "constraint.m"
                        MR_Word transform_hlds__constraint__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 489 "constraint.m"
                        MR_Word transform_hlds__constraint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));

#line 489 "constraint.m"
                        {
#line 489 "constraint.m"
                          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(transform_hlds__constraint__GoalInfo_37, transform_hlds__constraint__V_127_127);
                        }
#line 489 "constraint.m"
                        if (transform_hlds__constraint__succeeded)
#line 489 "constraint.m"
                          {
#line 490 "constraint.m"
                            {
#line 490 "constraint.m"
                              MR_Word transform_hlds__constraint__V_84_84;

#line 490 "constraint.m"
                              {
#line 490 "constraint.m"
                                transform_hlds__constraint__V_84_84 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_37);
                              }
#line 490 "constraint.m"
                              transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_84_84 == (MR_Integer) 2);
#line 490 "constraint.m"
                            }
#line 491 "constraint.m"
                            if (!(transform_hlds__constraint__succeeded))
#line 491 "constraint.m"
                              {
#line 491 "constraint.m"
                                {
#line 491 "constraint.m"
                                  transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo_37, (MR_Integer) 17);
                                }
#line 491 "constraint.m"
                              }
#line 489 "constraint.m"
                          }
#line 500 "constraint.m"
                        if (transform_hlds__constraint__succeeded)
#line 494 "constraint.m"
                          {
#line 494 "constraint.m"
                            MR_Word transform_hlds__constraint__TypeInfo_121_121;
#line 494 "constraint.m"
                            MR_Word transform_hlds__constraint__ConstraintGoals_60;
#line 494 "constraint.m"
                            MR_Word transform_hlds__constraint__GoalsAndConstraints_61;
#line 494 "constraint.m"
                            MR_Word transform_hlds__constraint__V_86_86;

#line 494 "constraint.m"
                            transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "constraint.m"
                            {
#line 495 "constraint.m"
                              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__ConstraintGoals_60);
                            }
#line 497 "constraint.m"
                            {
#line 497 "constraint.m"
                              transform_hlds__constraint__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "constraint.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_86_86, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 497 "constraint.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_86_86, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_60));
#line 497 "constraint.m"
                            }
#line 5872 "transform_hlds.constraint.c"
                            transform_hlds__constraint__TypeInfo_121_121 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 497 "constraint.m"
                            {
#line 497 "constraint.m"
                              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_121_121, (MR_Word) &transform_hlds__constraint_scalar_common_2[4], transform_hlds__constraint__V_86_86, &transform_hlds__constraint__GoalsAndConstraints_61);
                            }
#line 499 "constraint.m"
                            {
#line 499 "constraint.m"
                              transform_hlds__constraint__Goals1_43 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeInfo_121_121, transform_hlds__constraint__GoalsAndConstraints_61, transform_hlds__constraint__Goals0_4);
                            }
#line 494 "constraint.m"
                          }
#line 500 "constraint.m"
                        else
#line 516 "constraint.m"
                          {
#line 503 "constraint.m"
                            MR_Word transform_hlds__constraint__Globals_62;
#line 503 "constraint.m"
                            MR_Word transform_hlds__constraint__V_87_87;
#line 503 "constraint.m"
                            MR_Word transform_hlds__constraint__V_88_88;

#line 503 "constraint.m"
                            {
#line 503 "constraint.m"
                              transform_hlds__constraint__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(transform_hlds__constraint__ModuleInfo_1, transform_hlds__constraint__Goal_32);
                            }
#line 503 "constraint.m"
                            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 503 "constraint.m"
                            if (transform_hlds__constraint__succeeded)
#line 503 "constraint.m"
                              {
#line 504 "constraint.m"
                                {
#line 504 "constraint.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__constraint__ModuleInfo_1, &transform_hlds__constraint__Globals_62);
                                }
#line 505 "constraint.m"
                                transform_hlds__constraint__V_87_87 = (MR_Integer) 166;
#line 505 "constraint.m"
                                transform_hlds__constraint__V_88_88 = (MR_Integer) 1;
#line 505 "constraint.m"
                                {
#line 505 "constraint.m"
                                  transform_hlds__constraint__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__constraint__Globals_62, transform_hlds__constraint__V_87_87, transform_hlds__constraint__V_88_88);
                                }
#line 503 "constraint.m"
                              }
#line 516 "constraint.m"
                            if (transform_hlds__constraint__succeeded)
#line 508 "constraint.m"
                              {
#line 508 "constraint.m"
                                MR_Word transform_hlds__constraint__TypeInfo_125_125;
#line 508 "constraint.m"
                                MR_Word transform_hlds__constraint__DependentConstraints_63;
#line 508 "constraint.m"
                                MR_Word transform_hlds__constraint__IndependentConstraints_64;
#line 508 "constraint.m"
                                MR_Word transform_hlds__constraint__IndependentConstraintGoals_65;
#line 508 "constraint.m"
                                MR_Word transform_hlds__constraint__V_90_90;
#line 508 "constraint.m"
                                MR_Word transform_hlds__constraint__V_91_91;
#line 508 "constraint.m"
                                MR_Word transform_hlds__constraint__GoalsAndConstraints_95;

#line 507 "constraint.m"
                                {
#line 507 "constraint.m"
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_38, transform_hlds__constraint__ChangedVars_33, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_63, &transform_hlds__constraint__IndependentConstraints_64);
                                }
#line 509 "constraint.m"
                                {
#line 509 "constraint.m"
                                  transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__IndependentConstraints_64, &transform_hlds__constraint__IndependentConstraintGoals_65);
                                }
#line 5953 "transform_hlds.constraint.c"
                                transform_hlds__constraint__TypeInfo_125_125 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 511 "constraint.m"
                                {
#line 511 "constraint.m"
                                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_125_125, (MR_Word) &transform_hlds__constraint_scalar_common_2[5], transform_hlds__constraint__IndependentConstraintGoals_65, &transform_hlds__constraint__GoalsAndConstraints_95);
                                }
#line 513 "constraint.m"
                                {
#line 513 "constraint.m"
                                  transform_hlds__constraint__V_91_91 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_32, transform_hlds__constraint__DependentConstraints_63);
                                }
#line 514 "constraint.m"
                                {
#line 514 "constraint.m"
                                  transform_hlds__constraint__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_90_90, 0) = ((MR_Box) (transform_hlds__constraint__V_91_91));
#line 514 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_90_90, 1) = ((MR_Box) (transform_hlds__constraint__GoalsAndConstraints_95));
#line 514 "constraint.m"
                                }
#line 514 "constraint.m"
                                {
#line 514 "constraint.m"
                                  transform_hlds__constraint__Goals1_43 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeInfo_125_125, transform_hlds__constraint__V_90_90, transform_hlds__constraint__Goals0_4);
                                }
#line 515 "constraint.m"
                                transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "constraint.m"
                              }
#line 516 "constraint.m"
                            else
#line 518 "constraint.m"
                              {
#line 518 "constraint.m"
                                MR_Word transform_hlds__constraint__V_92_92;
#line 518 "constraint.m"
                                MR_Word transform_hlds__constraint__DependentConstraints_96;

#line 517 "constraint.m"
                                {
#line 517 "constraint.m"
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_38, transform_hlds__constraint__OutputVars_34, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_96, &transform_hlds__constraint__Constraints1_45);
                                }
#line 520 "constraint.m"
                                {
#line 520 "constraint.m"
                                  transform_hlds__constraint__V_92_92 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_32, transform_hlds__constraint__DependentConstraints_96);
                                }
#line 520 "constraint.m"
                                {
#line 520 "constraint.m"
                                  transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_92_92));
#line 520 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 520 "constraint.m"
                                }
#line 518 "constraint.m"
                              }
#line 516 "constraint.m"
                          }
#line 500 "constraint.m"
                        transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 500 "constraint.m"
                      }
#line 486 "constraint.m"
                  }
#line 477 "constraint.m"
              }
#line 522 "constraint.m"
            /* direct tailcall eliminated */
#line 522 "constraint.m"
            {
#line 522 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__2__tmp_copy_2 = transform_hlds__constraint__RevConjuncts0_27;
#line 522 "constraint.m"
              MR_Word transform_hlds__constraint__Constraints0__tmp_copy_3 = transform_hlds__constraint__Constraints1_45;
#line 522 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0__tmp_copy_4 = transform_hlds__constraint__Goals1_43;
#line 522 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_6 = transform_hlds__constraint__STATE_VARIABLE_Info_77_77;

#line 522 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_0_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_6;
#line 522 "constraint.m"
              transform_hlds__constraint__Goals0_4 = transform_hlds__constraint__Goals0__tmp_copy_4;
#line 522 "constraint.m"
              transform_hlds__constraint__Constraints0_3 = transform_hlds__constraint__Constraints0__tmp_copy_3;
#line 522 "constraint.m"
              transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__2__tmp_copy_2;
#line 522 "constraint.m"
            }
#line 522 "constraint.m"
            continue;
#line 422 "constraint.m"
          }
#line 414 "constraint.m"
      }
#line 414 "constraint.m"
      break;
#line 414 "constraint.m"
    }
#line 410 "constraint.m"
}

#line 336 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
#line 336 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 336 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 336 "constraint.m"
{
#line 336 "constraint.m"
  {
#line 336 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 336 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

#line 336 "constraint.m"
    {
#line 336 "constraint.m"
      return transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__336__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 336 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 336 "constraint.m"
  }
#line 336 "constraint.m"
}

#line 322 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
#line 322 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 322 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 322 "constraint.m"
{
#line 322 "constraint.m"
  {
#line 322 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 322 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

#line 322 "constraint.m"
    {
#line 322 "constraint.m"
      return transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__322__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 322 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 322 "constraint.m"
  }
#line 322 "constraint.m"
}

#line 301 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 301 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5,
#line 301 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevGoals_6)
#line 301 "constraint.m"
{
#line 304 "constraint.m"
  while (MR_TRUE)
#line 304 "constraint.m"
    {
#line 304 "constraint.m"
      /* tailcall optimized into a loop */
#line 304 "constraint.m"
      {
#line 304 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 304 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_RevGoals_6 = transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5;
#line 304 "constraint.m"
        else
#line 306 "constraint.m"
          {
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_54_54;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_55_55;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 1)));
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapDelta_21;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap_22;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars0_23;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapVars_24;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__InCompatible_25;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_30;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__Bound_31;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__BoundVars_32;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars_33;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__AnnotatedConjunct_34;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__V_38_38;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__V_41_41;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 0)));

#line 308 "constraint.m"
            {
#line 308 "constraint.m"
              transform_hlds__constraint__InstMapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_20);
            }
#line 310 "constraint.m"
            {
#line 310 "constraint.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMapDelta_21, &transform_hlds__constraint__InstMap_22);
            }
#line 311 "constraint.m"
            {
#line 311 "constraint.m"
              hlds__instmap__instmap_changed_vars_5_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMap_22, transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__ModuleInfo_2, &transform_hlds__constraint__ChangedVars0_23);
            }
#line 314 "constraint.m"
            {
#line 314 "constraint.m"
              hlds__instmap__instmap_vars_list_2_p_0(transform_hlds__constraint__InstMap_22, &transform_hlds__constraint__InstMapVars_24);
            }
#line 322 "constraint.m"
            {
#line 322 "constraint.m"
              transform_hlds__constraint__InCompatible_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 322 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
#line 322 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1));
#line 322 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 322 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
#line 322 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
#line 322 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
#line 322 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
#line 322 "constraint.m"
            }
#line 6232 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 6234 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_55_55 = (MR_Word) &transform_hlds__constraint_scalar_common_1[2];
#line 330 "constraint.m"
            {
#line 330 "constraint.m"
              transform_hlds__constraint__V_38_38 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__InCompatible_25, transform_hlds__constraint__InstMapVars_24);
            }
#line 329 "constraint.m"
            {
#line 329 "constraint.m"
              transform_hlds__constraint__IncompatibleInstVars_30 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__V_38_38);
            }
#line 336 "constraint.m"
            {
#line 336 "constraint.m"
              transform_hlds__constraint__Bound_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 336 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
#line 336 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2));
#line 336 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 336 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
#line 336 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
#line 336 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
#line 336 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
#line 336 "constraint.m"
            }
#line 343 "constraint.m"
            {
#line 343 "constraint.m"
              transform_hlds__constraint__V_40_40 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__Bound_31, transform_hlds__constraint__InstMapVars_24);
            }
#line 343 "constraint.m"
            {
#line 343 "constraint.m"
              transform_hlds__constraint__BoundVars_32 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__V_40_40);
            }
#line 348 "constraint.m"
            {
#line 348 "constraint.m"
              parse_tree__set_of_var__union_3_p_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__ChangedVars0_23, transform_hlds__constraint__BoundVars_32, &transform_hlds__constraint__ChangedVars_33);
            }
#line 350 "constraint.m"
            {
#line 350 "constraint.m"
              transform_hlds__constraint__AnnotatedConjunct_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 350 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 0) = ((MR_Box) (transform_hlds__constraint__Goal_13));
#line 350 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_33));
#line 350 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 2) = ((MR_Box) (transform_hlds__constraint__BoundVars_32));
#line 350 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 3) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_30));
#line 350 "constraint.m"
            }
#line 353 "constraint.m"
            {
#line 353 "constraint.m"
              transform_hlds__constraint__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_41_41, 0) = ((MR_Box) (transform_hlds__constraint__AnnotatedConjunct_34));
#line 353 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_41_41, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5));
#line 353 "constraint.m"
            }
#line 352 "constraint.m"
            /* direct tailcall eliminated */
#line 352 "constraint.m"
            {
#line 352 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Goals_14;
#line 352 "constraint.m"
              MR_Word transform_hlds__constraint__InstMap0__tmp_copy_4 = transform_hlds__constraint__InstMap_22;
#line 352 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0__tmp_copy_5 = transform_hlds__constraint__V_41_41;

#line 352 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5 = transform_hlds__constraint__STATE_VARIABLE_RevGoals_0__tmp_copy_5;
#line 352 "constraint.m"
              transform_hlds__constraint__InstMap0_4 = transform_hlds__constraint__InstMap0__tmp_copy_4;
#line 352 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 352 "constraint.m"
            }
#line 352 "constraint.m"
            continue;
#line 306 "constraint.m"
          }
#line 304 "constraint.m"
      }
#line 304 "constraint.m"
      break;
#line 304 "constraint.m"
    }
#line 301 "constraint.m"
}

#line 229 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
#line 229 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 229 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 229 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 229 "constraint.m"
{
#line 229 "constraint.m"
  {
#line 229 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_15;

#line 229 "constraint.m"
    {
#line 229 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__229__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_15);
    }
#line 229 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_15));
#line 229 "constraint.m"
  }
#line 229 "constraint.m"
}

#line 272 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
#line 272 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_6,
#line 272 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 272 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 272 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_17,
#line 272 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_18)
#line 272 "constraint.m"
{
#line 275 "constraint.m"
  {
#line 275 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 275 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_19_19;

#line 802 "constraint.m"
    if ((transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "constraint.m"
      transform_hlds__constraint__STATE_VARIABLE_Info_19_19 = transform_hlds__constraint__STATE_VARIABLE_Info_0_17;
#line 802 "constraint.m"
    else
#line 804 "constraint.m"
      {
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 805 "constraint.m"
        MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));

#line 805 "constraint.m"
        {
#line 805 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 0) = ((MR_Box) (transform_hlds__constraint__V_47_47));
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (transform_hlds__constraint__V_48_48));
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (transform_hlds__constraint__V_49_49));
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (transform_hlds__constraint__V_50_50));
#line 805 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) ((MR_Integer) 1));
#line 805 "constraint.m"
        }
#line 804 "constraint.m"
      }
#line 280 "constraint.m"
    if ((transform_hlds__constraint__Goals0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "constraint.m"
      {
#line 278 "constraint.m"
        MR_Word transform_hlds__constraint__GoalLists0_60;
#line 278 "constraint.m"
        MR_Word transform_hlds__constraint__GoalLists_61;

#line 229 "constraint.m"
        {
#line 229 "constraint.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[1], (MR_Word) &transform_hlds__constraint_scalar_common_2[2], transform_hlds__constraint__Constraints_7, &transform_hlds__constraint__GoalLists0_60);
        }
#line 233 "constraint.m"
        {
#line 233 "constraint.m"
          mercury__list__condense_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__GoalLists0_60, &transform_hlds__constraint__GoalLists_61);
        }
#line 234 "constraint.m"
        {
#line 234 "constraint.m"
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalLists_61, transform_hlds__constraint__Goals_8);
        }
#line 278 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_18 = transform_hlds__constraint__STATE_VARIABLE_Info_19_19;
#line 278 "constraint.m"
      }
#line 280 "constraint.m"
    else
#line 281 "constraint.m"
      {
#line 281 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_6, (MR_Integer) 0)));
#line 281 "constraint.m"
        MR_Word transform_hlds__constraint__GoalsTail0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_6, (MR_Integer) 1)));

#line 283 "constraint.m"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalsTail0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 284 "constraint.m"
          transform_hlds__constraint__succeeded = (transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 286 "constraint.m"
          {
#line 286 "constraint.m"
            {
#line 286 "constraint.m"
              transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(transform_hlds__constraint__Goal0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_19_19, transform_hlds__constraint__STATE_VARIABLE_Info_18);
#line 286 "constraint.m"
              return;
            }
#line 286 "constraint.m"
          }
#line 287 "constraint.m"
        else
#line 288 "constraint.m"
          {
#line 288 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 288 "constraint.m"
            MR_Word transform_hlds__constraint__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 288 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 1)));
#line 288 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoals1_15;
#line 288 "constraint.m"
            MR_Word transform_hlds__constraint__Goals2_16;
#line 288 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_24_24;
#line 288 "constraint.m"
            MR_Word transform_hlds__constraint__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 288 "constraint.m"
            MR_Word transform_hlds__constraint__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));

#line 291 "constraint.m"
            {
#line 291 "constraint.m"
              transform_hlds__constraint__annotate_conj_output_vars_6_p_0(transform_hlds__constraint__Goals0_6, transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__VarTypes_14, transform_hlds__constraint__InstMap0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevGoals1_15);
            }
#line 293 "constraint.m"
            {
#line 293 "constraint.m"
              transform_hlds__constraint__annotate_conj_constraints_7_p_0(transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__RevGoals1_15, transform_hlds__constraint__Constraints_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Goals2_16, transform_hlds__constraint__STATE_VARIABLE_Info_19_19, &transform_hlds__constraint__STATE_VARIABLE_Info_24_24);
            }
#line 295 "constraint.m"
            {
#line 295 "constraint.m"
              transform_hlds__constraint__propagate_conj_constraints_5_p_0(transform_hlds__constraint__Goals2_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_24_24, transform_hlds__constraint__STATE_VARIABLE_Info_18);
#line 295 "constraint.m"
              return;
            }
#line 288 "constraint.m"
          }
#line 281 "constraint.m"
      }
#line 275 "constraint.m"
  }
#line 272 "constraint.m"
}

#line 251 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
#line 251 "constraint.m"
  MR_Word transform_hlds__constraint__Var_1,
#line 251 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 251 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 251 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 251 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 251 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
#line 251 "constraint.m"
{
#line 255 "constraint.m"
  {
#line 255 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 255 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "constraint.m"
      {
#line 255 "constraint.m"
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 255 "constraint.m"
      }
#line 255 "constraint.m"
    else
#line 256 "constraint.m"
      {
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__Case_16;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__Cases_17;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 0)));
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 1)));
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 2)));
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__Goal_23;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_26_26;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_28_28;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__ModuleInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__VarTypes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__Type_48;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap_49;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__ModuleInfo_50;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__V_66_66;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__V_67_67;
#line 256 "constraint.m"
        MR_Word transform_hlds__constraint__V_69_69;
#line 258 "constraint.m"
        MR_Word transform_hlds__constraint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 258 "constraint.m"
        MR_Word transform_hlds__constraint__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 790 "constraint.m"
        MR_Word transform_hlds__constraint__V_65_65;
#line 790 "constraint.m"
        MR_Word transform_hlds__constraint__V_68_68;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__V_34_34;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__V_35_35;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__V_36_36;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__V_38_38;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__V_37_37;

#line 787 "constraint.m"
        {
#line 787 "constraint.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_47, transform_hlds__constraint__Var_1, &transform_hlds__constraint__Type_48);
        }
#line 788 "constraint.m"
        {
#line 788 "constraint.m"
          hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Type_48, transform_hlds__constraint__MainConsId_19, transform_hlds__constraint__OtherConsIds_20, transform_hlds__constraint__InstMap0_45, &transform_hlds__constraint__InstMap_49, transform_hlds__constraint__ModuleInfo0_46, &transform_hlds__constraint__ModuleInfo_50);
        }
#line 790 "constraint.m"
        transform_hlds__constraint__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 790 "constraint.m"
        transform_hlds__constraint__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 790 "constraint.m"
        transform_hlds__constraint__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 790 "constraint.m"
        transform_hlds__constraint__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 790 "constraint.m"
        transform_hlds__constraint__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 791 "constraint.m"
        {
#line 791 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 791 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_50));
#line 791 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (transform_hlds__constraint__V_66_66));
#line 791 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (transform_hlds__constraint__V_67_67));
#line 791 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_49));
#line 791 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 4) = ((MR_Box) (transform_hlds__constraint__V_69_69));
#line 791 "constraint.m"
        }
#line 260 "constraint.m"
        {
#line 260 "constraint.m"
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal0_21, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goal_23, transform_hlds__constraint__STATE_VARIABLE_Info_26_26, &transform_hlds__constraint__STATE_VARIABLE_Info_27_27);
        }
#line 261 "constraint.m"
        transform_hlds__constraint__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 261 "constraint.m"
        transform_hlds__constraint__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 261 "constraint.m"
        transform_hlds__constraint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 261 "constraint.m"
        transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 261 "constraint.m"
        transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 261 "constraint.m"
        {
#line 261 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (transform_hlds__constraint__V_34_34));
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (transform_hlds__constraint__V_35_35));
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (transform_hlds__constraint__V_36_36));
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_45));
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (transform_hlds__constraint__V_38_38));
#line 261 "constraint.m"
        }
#line 262 "constraint.m"
        {
#line 262 "constraint.m"
          transform_hlds__constraint__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 262 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_19));
#line 262 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_20));
#line 262 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 2) = ((MR_Box) (transform_hlds__constraint__Goal_23));
#line 262 "constraint.m"
        }
#line 263 "constraint.m"
        {
#line 263 "constraint.m"
          transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Constraints_2, transform_hlds__constraint__Cases0_15, &transform_hlds__constraint__Cases_17, transform_hlds__constraint__STATE_VARIABLE_Info_28_28, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
#line 256 "constraint.m"
        {
#line 256 "constraint.m"
          MR_Word base;
#line 256 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "constraint.m"
          *transform_hlds__constraint__HeadVar__4_4 = base;
#line 256 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Case_16));
#line 256 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Cases_17));
#line 256 "constraint.m"
        }
#line 256 "constraint.m"
      }
#line 255 "constraint.m"
  }
#line 251 "constraint.m"
}

#line 238 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
#line 238 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 238 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 238 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 238 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 238 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
#line 238 "constraint.m"
{
#line 241 "constraint.m"
  {
#line 241 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 241 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "constraint.m"
      {
#line 241 "constraint.m"
        *transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 241 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 241 "constraint.m"
      }
#line 241 "constraint.m"
    else
#line 243 "constraint.m"
      {
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__Goal_13;
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__Goals_14;
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_19_19;
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_20_20;
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 246 "constraint.m"
        MR_Word transform_hlds__constraint__V_26_26;
#line 246 "constraint.m"
        MR_Word transform_hlds__constraint__V_27_27;
#line 246 "constraint.m"
        MR_Word transform_hlds__constraint__V_28_28;
#line 246 "constraint.m"
        MR_Word transform_hlds__constraint__V_30_30;
#line 246 "constraint.m"
        MR_Word transform_hlds__constraint__V_29_29;

#line 245 "constraint.m"
        {
#line 245 "constraint.m"
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal0_10, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goal_13, transform_hlds__constraint__STATE_VARIABLE_Info_0_4, &transform_hlds__constraint__STATE_VARIABLE_Info_19_19);
        }
#line 246 "constraint.m"
        transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 246 "constraint.m"
        transform_hlds__constraint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 1)));
#line 246 "constraint.m"
        transform_hlds__constraint__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 246 "constraint.m"
        transform_hlds__constraint__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 246 "constraint.m"
        transform_hlds__constraint__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 246 "constraint.m"
        {
#line 246 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 246 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (transform_hlds__constraint__V_26_26));
#line 246 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 1) = ((MR_Box) (transform_hlds__constraint__V_27_27));
#line 246 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (transform_hlds__constraint__V_28_28));
#line 246 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_16));
#line 246 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (transform_hlds__constraint__V_30_30));
#line 246 "constraint.m"
        }
#line 247 "constraint.m"
        {
#line 247 "constraint.m"
          transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_11, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goals_14, transform_hlds__constraint__STATE_VARIABLE_Info_20_20, transform_hlds__constraint__STATE_VARIABLE_Info_5);
        }
#line 242 "constraint.m"
        {
#line 242 "constraint.m"
          MR_Word base;
#line 242 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "constraint.m"
          *transform_hlds__constraint__HeadVar__3_3 = base;
#line 242 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_13));
#line 242 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Goals_14));
#line 242 "constraint.m"
        }
#line 243 "constraint.m"
      }
#line 241 "constraint.m"
  }
#line 238 "constraint.m"
}

#line 229 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
#line 229 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 229 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 229 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 229 "constraint.m"
{
#line 229 "constraint.m"
  {
#line 229 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_15;

#line 229 "constraint.m"
    {
#line 229 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__229__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_15);
    }
#line 229 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_15));
#line 229 "constraint.m"
  }
#line 229 "constraint.m"
}

#line 226 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
#line 226 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 226 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_4)
#line 226 "constraint.m"
{
#line 228 "constraint.m"
  {
#line 228 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 228 "constraint.m"
    MR_Word transform_hlds__constraint__GoalLists0_11;
#line 228 "constraint.m"
    MR_Word transform_hlds__constraint__GoalLists_12;

#line 229 "constraint.m"
    {
#line 229 "constraint.m"
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[1], (MR_Word) &transform_hlds__constraint_scalar_common_2[1], transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__GoalLists0_11);
    }
#line 233 "constraint.m"
    {
#line 233 "constraint.m"
      mercury__list__condense_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__GoalLists0_11, &transform_hlds__constraint__GoalLists_12);
    }
#line 234 "constraint.m"
    {
#line 234 "constraint.m"
      mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalLists_12, transform_hlds__constraint__Goals_4);
#line 234 "constraint.m"
      return;
    }
#line 228 "constraint.m"
  }
#line 226 "constraint.m"
}

#line 120 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
#line 120 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 120 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 120 "constraint.m"
  MR_Word * transform_hlds__constraint__FinalGoals_9,
#line 120 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_79,
#line 120 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_80)
#line 120 "constraint.m"
{
#line 124 "constraint.m"
  {
#line 124 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 124 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));

#line 141 "constraint.m"
#line 141 "constraint.m"
    switch (MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) {
#line 141 "constraint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 141 "constraint.m"
      case (MR_Integer) 0:
#line 201 "constraint.m"
        {
#line 201 "constraint.m"
          MR_Word transform_hlds__constraint__NegGoal0_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_6), (MR_Integer) 0);
#line 201 "constraint.m"
          MR_Word transform_hlds__constraint__NegGoal_54;
#line 201 "constraint.m"
          MR_Word transform_hlds__constraint__V_87_87;
#line 201 "constraint.m"
          MR_Word transform_hlds__constraint__V_88_88;
#line 201 "constraint.m"
          MR_Word transform_hlds__constraint__ConstraintGoals_135;

#line 204 "constraint.m"
          {
#line 204 "constraint.m"
            transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__NegGoal0_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__NegGoal_54, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
          }
#line 205 "constraint.m"
          {
#line 205 "constraint.m"
            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_135);
          }
#line 206 "constraint.m"
          transform_hlds__constraint__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__NegGoal_54);
#line 206 "constraint.m"
          {
#line 206 "constraint.m"
            transform_hlds__constraint__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_87_87, 0) = ((MR_Box) (transform_hlds__constraint__V_88_88));
#line 206 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_87_87, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 206 "constraint.m"
          }
#line 206 "constraint.m"
          {
#line 206 "constraint.m"
            MR_Word base;
#line 206 "constraint.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "constraint.m"
            *transform_hlds__constraint__FinalGoals_9 = base;
#line 206 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_87_87));
#line 206 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_135));
#line 206 "constraint.m"
          }
#line 201 "constraint.m"
        }
#line 141 "constraint.m"
        break;
#line 141 "constraint.m"
      case (MR_Integer) 1:
#line 141 "constraint.m"
      case (MR_Integer) 2:
#line 212 "constraint.m"
        {
#line 212 "constraint.m"
          MR_Word transform_hlds__constraint__ConstraintGoals_136;

#line 215 "constraint.m"
          {
#line 215 "constraint.m"
            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_136);
          }
#line 216 "constraint.m"
          {
#line 216 "constraint.m"
            MR_Word base;
#line 216 "constraint.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "constraint.m"
            *transform_hlds__constraint__FinalGoals_9 = base;
#line 216 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 216 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_136));
#line 216 "constraint.m"
          }
#line 212 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_Info_80 = transform_hlds__constraint__STATE_VARIABLE_Info_0_79;
#line 212 "constraint.m"
        }
#line 141 "constraint.m"
        break;
#line 141 "constraint.m"
      case (MR_Integer) 3:
#line 141 "constraint.m"
#line 141 "constraint.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 0)))) {
#line 141 "constraint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 141 "constraint.m"
          case (MR_Integer) 0:
#line 141 "constraint.m"
          case (MR_Integer) 1:
#line 212 "constraint.m"
            {
#line 212 "constraint.m"
              MR_Word transform_hlds__constraint__ConstraintGoals_136;

#line 215 "constraint.m"
              {
#line 215 "constraint.m"
                transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_136);
              }
#line 216 "constraint.m"
              {
#line 216 "constraint.m"
                MR_Word base;
#line 216 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 216 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 216 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_136));
#line 216 "constraint.m"
              }
#line 212 "constraint.m"
              *transform_hlds__constraint__STATE_VARIABLE_Info_80 = transform_hlds__constraint__STATE_VARIABLE_Info_0_79;
#line 212 "constraint.m"
            }
#line 141 "constraint.m"
            break;
#line 141 "constraint.m"
          case (MR_Integer) 2:
#line 126 "constraint.m"
            {
#line 126 "constraint.m"
              MR_Word transform_hlds__constraint__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 126 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));

#line 131 "constraint.m"
#line 131 "constraint.m"
              switch (transform_hlds__constraint__ConjType_11) {
#line 131 "constraint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 131 "constraint.m"
                case (MR_Integer) 1:
#line 132 "constraint.m"
                  {
#line 132 "constraint.m"
                    MR_Word transform_hlds__constraint__MoreGoals_14;
#line 132 "constraint.m"
                    MR_Word transform_hlds__constraint__V_124_124;
#line 132 "constraint.m"
                    MR_Word transform_hlds__constraint__V_125_125;
#line 132 "constraint.m"
                    MR_Word transform_hlds__constraint__Goals_130;

#line 136 "constraint.m"
                    {
#line 136 "constraint.m"
                      transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__MoreGoals_14);
                    }
#line 137 "constraint.m"
                    {
#line 137 "constraint.m"
                      transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Goals_130, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 138 "constraint.m"
                    {
#line 138 "constraint.m"
                      transform_hlds__constraint__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 138 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 138 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_125_125, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_11));
#line 138 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_125_125, 2) = ((MR_Box) (transform_hlds__constraint__Goals_130));
#line 138 "constraint.m"
                    }
#line 138 "constraint.m"
                    {
#line 138 "constraint.m"
                      transform_hlds__constraint__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 138 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_124_124, 0) = ((MR_Box) (transform_hlds__constraint__V_125_125));
#line 138 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_124_124, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 138 "constraint.m"
                    }
#line 138 "constraint.m"
                    {
#line 138 "constraint.m"
                      MR_Word base;
#line 138 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 138 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_124_124));
#line 138 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__MoreGoals_14));
#line 138 "constraint.m"
                    }
#line 132 "constraint.m"
                  }
#line 131 "constraint.m"
                  break;
#line 131 "constraint.m"
                case (MR_Integer) 0:
#line 128 "constraint.m"
                  {
#line 128 "constraint.m"
                    MR_Word transform_hlds__constraint__Goals_13;
#line 128 "constraint.m"
                    MR_Word transform_hlds__constraint__V_127_127;
#line 128 "constraint.m"
                    MR_Word transform_hlds__constraint__V_128_128;

#line 129 "constraint.m"
                    {
#line 129 "constraint.m"
                      transform_hlds__constraint__propagate_conj_5_p_0(transform_hlds__constraint__Goals0_12, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Goals_13, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 130 "constraint.m"
                    {
#line 130 "constraint.m"
                      transform_hlds__constraint__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 130 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 130 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_128_128, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_11));
#line 130 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_128_128, 2) = ((MR_Box) (transform_hlds__constraint__Goals_13));
#line 130 "constraint.m"
                    }
#line 130 "constraint.m"
                    {
#line 130 "constraint.m"
                      transform_hlds__constraint__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 130 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_127_127, 0) = ((MR_Box) (transform_hlds__constraint__V_128_128));
#line 130 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_127_127, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 130 "constraint.m"
                    }
#line 130 "constraint.m"
                    {
#line 130 "constraint.m"
                      MR_Word base;
#line 130 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 130 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_127_127));
#line 130 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "constraint.m"
                    }
#line 128 "constraint.m"
                  }
#line 131 "constraint.m"
                  break;
#line 131 "constraint.m"
              }
#line 126 "constraint.m"
            }
#line 141 "constraint.m"
            break;
#line 141 "constraint.m"
          case (MR_Integer) 3:
#line 142 "constraint.m"
            {
#line 142 "constraint.m"
              MR_Word transform_hlds__constraint__V_119_119;
#line 142 "constraint.m"
              MR_Word transform_hlds__constraint__V_120_120;
#line 142 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 142 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_132;

#line 143 "constraint.m"
              {
#line 143 "constraint.m"
                transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_131, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Goals_132, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
              }
#line 144 "constraint.m"
              {
#line 144 "constraint.m"
                transform_hlds__constraint__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 144 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_120_120, 1) = ((MR_Box) (transform_hlds__constraint__Goals_132));
#line 144 "constraint.m"
              }
#line 144 "constraint.m"
              {
#line 144 "constraint.m"
                transform_hlds__constraint__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_119_119, 0) = ((MR_Box) (transform_hlds__constraint__V_120_120));
#line 144 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_119_119, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 144 "constraint.m"
              }
#line 144 "constraint.m"
              {
#line 144 "constraint.m"
                MR_Word base;
#line 144 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 144 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_119_119));
#line 144 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 144 "constraint.m"
              }
#line 142 "constraint.m"
            }
#line 141 "constraint.m"
            break;
#line 141 "constraint.m"
          case (MR_Integer) 4:
#line 146 "constraint.m"
            {
#line 146 "constraint.m"
              MR_Word transform_hlds__constraint__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 146 "constraint.m"
              MR_Word transform_hlds__constraint__CanFail_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));
#line 146 "constraint.m"
              MR_Word transform_hlds__constraint__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 3)));
#line 146 "constraint.m"
              MR_Word transform_hlds__constraint__Cases_18;
#line 146 "constraint.m"
              MR_Word transform_hlds__constraint__V_115_115;
#line 146 "constraint.m"
              MR_Word transform_hlds__constraint__V_116_116;

#line 147 "constraint.m"
              {
#line 147 "constraint.m"
                transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_15, transform_hlds__constraint__Constraints_8, transform_hlds__constraint__Cases0_17, &transform_hlds__constraint__Cases_18, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
              }
#line 148 "constraint.m"
              {
#line 148 "constraint.m"
                transform_hlds__constraint__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 148 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 148 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 1) = ((MR_Box) (transform_hlds__constraint__Var_15));
#line 148 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_16));
#line 148 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 3) = ((MR_Box) (transform_hlds__constraint__Cases_18));
#line 148 "constraint.m"
              }
#line 148 "constraint.m"
              {
#line 148 "constraint.m"
                transform_hlds__constraint__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_115_115, 0) = ((MR_Box) (transform_hlds__constraint__V_116_116));
#line 148 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_115_115, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 148 "constraint.m"
              }
#line 148 "constraint.m"
              {
#line 148 "constraint.m"
                MR_Word base;
#line 148 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 148 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_115_115));
#line 148 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "constraint.m"
              }
#line 146 "constraint.m"
            }
#line 141 "constraint.m"
            break;
#line 141 "constraint.m"
          case (MR_Integer) 5:
#line 163 "constraint.m"
            {
#line 163 "constraint.m"
              MR_Word transform_hlds__constraint__Reason_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 163 "constraint.m"
              MR_Word transform_hlds__constraint__SubGoal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));

#line 171 "constraint.m"
#line 171 "constraint.m"
              switch (MR_tag((MR_Word) transform_hlds__constraint__Reason_27)) {
#line 171 "constraint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 171 "constraint.m"
                case (MR_Integer) 0:
#line 168 "constraint.m"
                  {
#line 168 "constraint.m"
                    MR_Word transform_hlds__constraint__SubGoal_32;
#line 168 "constraint.m"
                    MR_Word transform_hlds__constraint__V_102_102;
#line 168 "constraint.m"
                    MR_Word transform_hlds__constraint__V_103_103;

#line 169 "constraint.m"
                    {
#line 169 "constraint.m"
                      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_32, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 170 "constraint.m"
                    {
#line 170 "constraint.m"
                      transform_hlds__constraint__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_103_103, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_103_103, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_32));
#line 170 "constraint.m"
                    }
#line 170 "constraint.m"
                    {
#line 170 "constraint.m"
                      transform_hlds__constraint__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_102_102, 0) = ((MR_Box) (transform_hlds__constraint__V_103_103));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_102_102, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 170 "constraint.m"
                    }
#line 170 "constraint.m"
                    {
#line 170 "constraint.m"
                      MR_Word base;
#line 170 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_102_102));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "constraint.m"
                    }
#line 168 "constraint.m"
                  }
#line 171 "constraint.m"
                  break;
#line 171 "constraint.m"
                case (MR_Integer) 1:
#line 171 "constraint.m"
                case (MR_Integer) 2:
#line 178 "constraint.m"
                  {
#line 178 "constraint.m"
                    MR_Word transform_hlds__constraint__ConstraintGoals_46;
#line 178 "constraint.m"
                    MR_Word transform_hlds__constraint__V_97_97;
#line 178 "constraint.m"
                    MR_Word transform_hlds__constraint__V_98_98;
#line 178 "constraint.m"
                    MR_Word transform_hlds__constraint__SubGoal_133;

#line 181 "constraint.m"
                    {
#line 181 "constraint.m"
                      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__SubGoal_133, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 182 "constraint.m"
                    {
#line 182 "constraint.m"
                      transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_46);
                    }
#line 183 "constraint.m"
                    {
#line 183 "constraint.m"
                      transform_hlds__constraint__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 183 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 183 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 183 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_133));
#line 183 "constraint.m"
                    }
#line 183 "constraint.m"
                    {
#line 183 "constraint.m"
                      transform_hlds__constraint__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 0) = ((MR_Box) (transform_hlds__constraint__V_98_98));
#line 183 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 183 "constraint.m"
                    }
#line 183 "constraint.m"
                    {
#line 183 "constraint.m"
                      MR_Word base;
#line 183 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 183 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_97_97));
#line 183 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_46));
#line 183 "constraint.m"
                    }
#line 178 "constraint.m"
                  }
#line 171 "constraint.m"
                  break;
#line 171 "constraint.m"
                case (MR_Integer) 3:
#line 171 "constraint.m"
#line 171 "constraint.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 0)))) {
#line 171 "constraint.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 171 "constraint.m"
                    case (MR_Integer) 0:
#line 190 "constraint.m"
                      {
#line 192 "constraint.m"
                        {
#line 192 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 192 "constraint.m"
                          return;
                        }
#line 190 "constraint.m"
                      }
#line 171 "constraint.m"
                      break;
#line 171 "constraint.m"
                    case (MR_Integer) 1:
#line 190 "constraint.m"
                      {
#line 192 "constraint.m"
                        {
#line 192 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 192 "constraint.m"
                          return;
                        }
#line 190 "constraint.m"
                      }
#line 171 "constraint.m"
                      break;
#line 171 "constraint.m"
                    case (MR_Integer) 2:
#line 190 "constraint.m"
                      {
#line 192 "constraint.m"
                        {
#line 192 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 192 "constraint.m"
                          return;
                        }
#line 190 "constraint.m"
                      }
#line 171 "constraint.m"
                      break;
#line 171 "constraint.m"
                    case (MR_Integer) 3:
#line 171 "constraint.m"
                    case (MR_Integer) 4:
#line 171 "constraint.m"
                    case (MR_Integer) 6:
#line 171 "constraint.m"
                    case (MR_Integer) 7:
#line 178 "constraint.m"
                      {
#line 178 "constraint.m"
                        MR_Word transform_hlds__constraint__ConstraintGoals_46;
#line 178 "constraint.m"
                        MR_Word transform_hlds__constraint__V_97_97;
#line 178 "constraint.m"
                        MR_Word transform_hlds__constraint__V_98_98;
#line 178 "constraint.m"
                        MR_Word transform_hlds__constraint__SubGoal_133;

#line 181 "constraint.m"
                        {
#line 181 "constraint.m"
                          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__SubGoal_133, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                        }
#line 182 "constraint.m"
                        {
#line 182 "constraint.m"
                          transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_46);
                        }
#line 183 "constraint.m"
                        {
#line 183 "constraint.m"
                          transform_hlds__constraint__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 183 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 183 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 183 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_133));
#line 183 "constraint.m"
                        }
#line 183 "constraint.m"
                        {
#line 183 "constraint.m"
                          transform_hlds__constraint__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 0) = ((MR_Box) (transform_hlds__constraint__V_98_98));
#line 183 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 183 "constraint.m"
                        }
#line 183 "constraint.m"
                        {
#line 183 "constraint.m"
                          MR_Word base;
#line 183 "constraint.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "constraint.m"
                          *transform_hlds__constraint__FinalGoals_9 = base;
#line 183 "constraint.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_97_97));
#line 183 "constraint.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_46));
#line 183 "constraint.m"
                        }
#line 178 "constraint.m"
                      }
#line 171 "constraint.m"
                      break;
#line 171 "constraint.m"
                    case (MR_Integer) 5:
#line 171 "constraint.m"
                      {
#line 171 "constraint.m"
                        MR_Word transform_hlds__constraint__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 2)));
#line 194 "constraint.m"
                        MR_Word transform_hlds__constraint__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 1)));

#line 171 "constraint.m"
#line 171 "constraint.m"
                        switch (transform_hlds__constraint__V_167_167) {
#line 171 "constraint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 171 "constraint.m"
                          case (MR_Integer) 1:
#line 194 "constraint.m"
                            {
#line 194 "constraint.m"
                              MR_Word transform_hlds__constraint__ConstraintGoals_134;

#line 197 "constraint.m"
                              {
#line 197 "constraint.m"
                                transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_134);
                              }
#line 198 "constraint.m"
                              {
#line 198 "constraint.m"
                                MR_Word base;
#line 198 "constraint.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "constraint.m"
                                *transform_hlds__constraint__FinalGoals_9 = base;
#line 198 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 198 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_134));
#line 198 "constraint.m"
                              }
#line 194 "constraint.m"
                              *transform_hlds__constraint__STATE_VARIABLE_Info_80 = transform_hlds__constraint__STATE_VARIABLE_Info_0_79;
#line 194 "constraint.m"
                            }
#line 171 "constraint.m"
                            break;
#line 171 "constraint.m"
                          case (MR_Integer) 2:
#line 168 "constraint.m"
                            {
#line 168 "constraint.m"
                              MR_Word transform_hlds__constraint__SubGoal_146;
#line 168 "constraint.m"
                              MR_Word transform_hlds__constraint__V_147_147;
#line 168 "constraint.m"
                              MR_Word transform_hlds__constraint__V_148_148;

#line 169 "constraint.m"
                              {
#line 169 "constraint.m"
                                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_146, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                              }
#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                transform_hlds__constraint__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_148_148, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_148_148, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_146));
#line 170 "constraint.m"
                              }
#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                transform_hlds__constraint__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_147_147, 0) = ((MR_Box) (transform_hlds__constraint__V_148_148));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_147_147, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 170 "constraint.m"
                              }
#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                MR_Word base;
#line 170 "constraint.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "constraint.m"
                                *transform_hlds__constraint__FinalGoals_9 = base;
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_147_147));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "constraint.m"
                              }
#line 168 "constraint.m"
                            }
#line 171 "constraint.m"
                            break;
#line 171 "constraint.m"
                          case (MR_Integer) 0:
#line 190 "constraint.m"
                            {
#line 192 "constraint.m"
                              {
#line 192 "constraint.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 192 "constraint.m"
                                return;
                              }
#line 190 "constraint.m"
                            }
#line 171 "constraint.m"
                            break;
#line 171 "constraint.m"
                          case (MR_Integer) 3:
#line 168 "constraint.m"
                            {
#line 168 "constraint.m"
                              MR_Word transform_hlds__constraint__SubGoal_150;
#line 168 "constraint.m"
                              MR_Word transform_hlds__constraint__V_151_151;
#line 168 "constraint.m"
                              MR_Word transform_hlds__constraint__V_152_152;

#line 169 "constraint.m"
                              {
#line 169 "constraint.m"
                                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_150, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                              }
#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                transform_hlds__constraint__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_152_152, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_152_152, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_150));
#line 170 "constraint.m"
                              }
#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                transform_hlds__constraint__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_151_151, 0) = ((MR_Box) (transform_hlds__constraint__V_152_152));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_151_151, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 170 "constraint.m"
                              }
#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                MR_Word base;
#line 170 "constraint.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "constraint.m"
                                *transform_hlds__constraint__FinalGoals_9 = base;
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_151_151));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "constraint.m"
                              }
#line 168 "constraint.m"
                            }
#line 171 "constraint.m"
                            break;
#line 171 "constraint.m"
                        }
#line 171 "constraint.m"
                      }
#line 171 "constraint.m"
                      break;
#line 171 "constraint.m"
                  }
#line 171 "constraint.m"
                  break;
#line 171 "constraint.m"
              }
#line 163 "constraint.m"
            }
#line 141 "constraint.m"
            break;
#line 141 "constraint.m"
          case (MR_Integer) 6:
#line 150 "constraint.m"
            {
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Cond0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Then0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 3)));
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Else0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 4)));
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__InstMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 3)));
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Cond_24;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Then_25;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Else_26;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_106_106;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_107_107;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_108_108;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_109_109;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__V_111_111;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__V_112_112;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 0)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 1)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 2)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 4)));
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_141_141;
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_142_142;
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_143_143;
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_145_145;
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_144_144;

#line 155 "constraint.m"
              {
#line 155 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Cond0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Cond_24, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, &transform_hlds__constraint__STATE_VARIABLE_Info_106_106);
              }
#line 156 "constraint.m"
              {
#line 156 "constraint.m"
                transform_hlds__constraint__constraint_info_update_goal_3_p_0(transform_hlds__constraint__Cond_24, transform_hlds__constraint__STATE_VARIABLE_Info_106_106, &transform_hlds__constraint__STATE_VARIABLE_Info_107_107);
              }
#line 157 "constraint.m"
              {
#line 157 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Then0_21, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Then_25, transform_hlds__constraint__STATE_VARIABLE_Info_107_107, &transform_hlds__constraint__STATE_VARIABLE_Info_108_108);
              }
#line 158 "constraint.m"
              transform_hlds__constraint__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 0)));
#line 158 "constraint.m"
              transform_hlds__constraint__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 1)));
#line 158 "constraint.m"
              transform_hlds__constraint__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 2)));
#line 158 "constraint.m"
              transform_hlds__constraint__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 3)));
#line 158 "constraint.m"
              transform_hlds__constraint__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 4)));
#line 158 "constraint.m"
              {
#line 158 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 0) = ((MR_Box) (transform_hlds__constraint__V_141_141));
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 1) = ((MR_Box) (transform_hlds__constraint__V_142_142));
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 2) = ((MR_Box) (transform_hlds__constraint__V_143_143));
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_23));
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 4) = ((MR_Box) (transform_hlds__constraint__V_145_145));
#line 158 "constraint.m"
              }
#line 159 "constraint.m"
              {
#line 159 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Else0_22, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Else_26, transform_hlds__constraint__STATE_VARIABLE_Info_109_109, transform_hlds__constraint__STATE_VARIABLE_Info_80);
              }
#line 161 "constraint.m"
              {
#line 161 "constraint.m"
                transform_hlds__constraint__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 1) = ((MR_Box) (transform_hlds__constraint__Vars_19));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 2) = ((MR_Box) (transform_hlds__constraint__Cond_24));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 3) = ((MR_Box) (transform_hlds__constraint__Then_25));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 4) = ((MR_Box) (transform_hlds__constraint__Else_26));
#line 161 "constraint.m"
              }
#line 161 "constraint.m"
              {
#line 161 "constraint.m"
                transform_hlds__constraint__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_111_111, 0) = ((MR_Box) (transform_hlds__constraint__V_112_112));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_111_111, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 161 "constraint.m"
              }
#line 161 "constraint.m"
              {
#line 161 "constraint.m"
                MR_Word base;
#line 161 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_111_111));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "constraint.m"
              }
#line 150 "constraint.m"
            }
#line 141 "constraint.m"
            break;
#line 141 "constraint.m"
          case (MR_Integer) 7:
#line 218 "constraint.m"
            {
#line 219 "constraint.m"
              {
#line 219 "constraint.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "shorthand");
#line 219 "constraint.m"
                return;
              }
#line 218 "constraint.m"
            }
#line 141 "constraint.m"
            break;
#line 141 "constraint.m"
        }
#line 141 "constraint.m"
        break;
#line 141 "constraint.m"
    }
#line 124 "constraint.m"
  }
#line 120 "constraint.m"
}

#line 100 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
#line 100 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 100 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 100 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 100 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_14,
#line 100 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_15)
#line 100 "constraint.m"
{
#line 104 "constraint.m"
  {
#line 104 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 104 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 0)));
#line 104 "constraint.m"
    MR_Word transform_hlds__constraint__HasSubGoals_12;
#line 104 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap0_13;
#line 104 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_16_16;
#line 104 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_17_17;
#line 105 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 1)));
#line 116 "constraint.m"
    MR_Word transform_hlds__constraint__V_19_19;
#line 116 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;
#line 116 "constraint.m"
    MR_Word transform_hlds__constraint__V_21_21;
#line 116 "constraint.m"
    MR_Word transform_hlds__constraint__V_22_22;
#line 118 "constraint.m"
    MR_Word transform_hlds__constraint__V_23_23;
#line 118 "constraint.m"
    MR_Word transform_hlds__constraint__V_24_24;
#line 118 "constraint.m"
    MR_Word transform_hlds__constraint__V_25_25;
#line 118 "constraint.m"
    MR_Word transform_hlds__constraint__V_27_27;
#line 118 "constraint.m"
    MR_Word transform_hlds__constraint__V_26_26;

#line 106 "constraint.m"
    {
#line 106 "constraint.m"
      transform_hlds__constraint__HasSubGoals_12 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_10);
    }
#line 109 "constraint.m"
#line 109 "constraint.m"
    switch (transform_hlds__constraint__HasSubGoals_12) {
#line 109 "constraint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 109 "constraint.m"
      case (MR_Integer) 1:
#line 108 "constraint.m"
        transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
#line 109 "constraint.m"
        break;
#line 109 "constraint.m"
      case (MR_Integer) 0:
#line 802 "constraint.m"
        if ((transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
#line 802 "constraint.m"
        else
#line 804 "constraint.m"
          {
#line 805 "constraint.m"
            MR_Word transform_hlds__constraint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 805 "constraint.m"
            MR_Word transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 805 "constraint.m"
            MR_Word transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 805 "constraint.m"
            MR_Word transform_hlds__constraint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 805 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));

#line 805 "constraint.m"
            {
#line 805 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 805 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (transform_hlds__constraint__V_36_36));
#line 805 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (transform_hlds__constraint__V_37_37));
#line 805 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (transform_hlds__constraint__V_38_38));
#line 805 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (transform_hlds__constraint__V_39_39));
#line 805 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) ((MR_Integer) 1));
#line 805 "constraint.m"
            }
#line 804 "constraint.m"
          }
#line 109 "constraint.m"
        break;
#line 109 "constraint.m"
    }
#line 116 "constraint.m"
    transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 0)));
#line 116 "constraint.m"
    transform_hlds__constraint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 1)));
#line 116 "constraint.m"
    transform_hlds__constraint__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 2)));
#line 116 "constraint.m"
    transform_hlds__constraint__InstMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 3)));
#line 116 "constraint.m"
    transform_hlds__constraint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 4)));
#line 117 "constraint.m"
    {
#line 117 "constraint.m"
      transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(transform_hlds__constraint__Goal0_6, transform_hlds__constraint__Constraints_7, transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_16_16, &transform_hlds__constraint__STATE_VARIABLE_Info_17_17);
    }
#line 118 "constraint.m"
    transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 118 "constraint.m"
    transform_hlds__constraint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 118 "constraint.m"
    transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 118 "constraint.m"
    transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)));
#line 118 "constraint.m"
    transform_hlds__constraint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 4)));
#line 118 "constraint.m"
    {
#line 118 "constraint.m"
      MR_Word base;
#line 118 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 118 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_15 = base;
#line 118 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_23_23));
#line 118 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_24_24));
#line 118 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_25_25));
#line 118 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_13));
#line 118 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__constraint__V_27_27));
#line 118 "constraint.m"
    }
#line 104 "constraint.m"
  }
#line 100 "constraint.m"
}

#line 79 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
#line 79 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 79 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 79 "constraint.m"
  MR_Word * transform_hlds__constraint__Goal_8,
#line 79 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_23,
#line 79 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_24)
#line 79 "constraint.m"
{
#line 82 "constraint.m"
  {
#line 82 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 1)));
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__Features0_12;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__Context_13;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__Goals0_14;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__Goals_15;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__NonLocals_16;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__Delta_17;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__ConjDetism_18;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__Purity_19;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo1_20;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo2_21;
#line 82 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_22;
#line 85 "constraint.m"
    MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 0)));

#line 86 "constraint.m"
    {
#line 86 "constraint.m"
      transform_hlds__constraint__Features0_12 = hlds__hlds_goal__goal_info_get_features_1_f_0(transform_hlds__constraint__GoalInfo0_11);
    }
#line 87 "constraint.m"
    {
#line 87 "constraint.m"
      transform_hlds__constraint__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__constraint__GoalInfo0_11);
    }
#line 88 "constraint.m"
    {
#line 88 "constraint.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__constraint__Goal0_6, &transform_hlds__constraint__Goals0_14);
    }
#line 89 "constraint.m"
    {
#line 89 "constraint.m"
      transform_hlds__constraint__propagate_conj_5_p_0(transform_hlds__constraint__Goals0_14, transform_hlds__constraint__Constraints_7, &transform_hlds__constraint__Goals_15, transform_hlds__constraint__STATE_VARIABLE_Info_0_23, transform_hlds__constraint__STATE_VARIABLE_Info_24);
    }
#line 90 "constraint.m"
    {
#line 90 "constraint.m"
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__NonLocals_16);
    }
#line 91 "constraint.m"
    {
#line 91 "constraint.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__Delta_17);
    }
#line 92 "constraint.m"
    {
#line 92 "constraint.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__ConjDetism_18);
    }
#line 93 "constraint.m"
    {
#line 93 "constraint.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__Purity_19);
    }
#line 94 "constraint.m"
    {
#line 94 "constraint.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__constraint__NonLocals_16, transform_hlds__constraint__Delta_17, transform_hlds__constraint__ConjDetism_18, (MR_Integer) 0, transform_hlds__constraint__Context_13, &transform_hlds__constraint__GoalInfo1_20);
    }
#line 96 "constraint.m"
    {
#line 96 "constraint.m"
      hlds__hlds_goal__goal_info_set_features_3_p_0(transform_hlds__constraint__Features0_12, transform_hlds__constraint__GoalInfo1_20, &transform_hlds__constraint__GoalInfo2_21);
    }
#line 97 "constraint.m"
    {
#line 97 "constraint.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__constraint__Purity_19, transform_hlds__constraint__GoalInfo2_21, &transform_hlds__constraint__GoalInfo_22);
    }
#line 98 "constraint.m"
    {
#line 98 "constraint.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__constraint__Goals_15, transform_hlds__constraint__GoalInfo_22, transform_hlds__constraint__Goal_8);
#line 98 "constraint.m"
      return;
    }
#line 82 "constraint.m"
  }
#line 79 "constraint.m"
}

#line 45 "constraint.m"
void MR_CALL 
transform_hlds__constraint__constraint_info_deconstruct_5_p_0(
#line 45 "constraint.m"
  MR_Word transform_hlds__constraint__ConstraintInfo_6,
#line 45 "constraint.m"
  MR_Word * transform_hlds__constraint__ModuleInfo_7,
#line 45 "constraint.m"
  MR_Word * transform_hlds__constraint__VarTypes_8,
#line 45 "constraint.m"
  MR_Word * transform_hlds__constraint__VarSet_9,
#line 45 "constraint.m"
  MR_Word * transform_hlds__constraint__Changed_10)
#line 45 "constraint.m"
{
#line 769 "constraint.m"
  {
#line 769 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 769 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11;

#line 769 "constraint.m"
    *transform_hlds__constraint__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 0)));
#line 769 "constraint.m"
    *transform_hlds__constraint__VarTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 1)));
#line 769 "constraint.m"
    *transform_hlds__constraint__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 2)));
#line 769 "constraint.m"
    transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 3)));
#line 769 "constraint.m"
    *transform_hlds__constraint__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 4)));
#line 769 "constraint.m"
  }
#line 45 "constraint.m"
}

#line 42 "constraint.m"
void MR_CALL 
transform_hlds__constraint__constraint_info_init_5_p_0(
#line 42 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_6,
#line 42 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_7,
#line 42 "constraint.m"
  MR_Word transform_hlds__constraint__VarSet_8,
#line 42 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap_9,
#line 42 "constraint.m"
  MR_Word * transform_hlds__constraint__ConstraintInfo_10)
#line 42 "constraint.m"
{
#line 763 "constraint.m"
  {
#line 763 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 764 "constraint.m"
    {
#line 764 "constraint.m"
      MR_Word base;
#line 764 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 764 "constraint.m"
      *transform_hlds__constraint__ConstraintInfo_10 = base;
#line 764 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_6));
#line 764 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_7));
#line 764 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_8));
#line 764 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
#line 764 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 764 "constraint.m"
    }
#line 763 "constraint.m"
  }
#line 42 "constraint.m"
}

#line 39 "constraint.m"
void MR_CALL 
transform_hlds__constraint__propagate_constraints_in_goal_4_p_0(
#line 39 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_5,
#line 39 "constraint.m"
  MR_Word * transform_hlds__constraint__Goal_6,
#line 39 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_9,
#line 39 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_10)
#line 39 "constraint.m"
{
#line 69 "constraint.m"
  {
#line 69 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 69 "constraint.m"
    MR_Word transform_hlds__constraint__Goal1_8;

#line 76 "constraint.m"
    {
#line 76 "constraint.m"
      transform_hlds__constraint__Goal1_8 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal0_5);
    }
#line 77 "constraint.m"
    {
#line 77 "constraint.m"
      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal1_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goal_6, transform_hlds__constraint__STATE_VARIABLE_Info_0_9, transform_hlds__constraint__STATE_VARIABLE_Info_10);
#line 77 "constraint.m"
      return;
    }
#line 69 "constraint.m"
  }
#line 39 "constraint.m"
}

void mercury__transform_hlds__constraint__init(void)
{
}

void mercury__transform_hlds__constraint__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conj_0);
	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0);
	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constrained_conj_0);
	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0);
	MR_register_type_ctor_info(&transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_info_0);
}

void mercury__transform_hlds__constraint__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.constraint. */
