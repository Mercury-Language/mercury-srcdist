/*
** Automatically generated from `constraint.m'
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


/* :- module transform_hlds.constraint. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__constraint__init
ENDINIT
*/

#include "transform_hlds.constraint.mih"


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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 706 "constraint.m"
struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s {
#line 706 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 710 "constraint.m"
  MR_bool transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded;
#line 713 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12;
#line 722 "constraint.m"
  jmp_buf transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0;
#line 722 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20;
#line 721 "constraint.m"
  MR_Box transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20;
#line 706 "constraint.m"
};

#line 613 "constraint.m"
struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s {
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 618 "constraint.m"
  MR_bool transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded;
#line 621 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18;
#line 647 "constraint.m"
  jmp_buf transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0;
#line 647 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31;
#line 647 "constraint.m"
  MR_Box transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31;
#line 613 "constraint.m"
};


#line 176 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 179 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 182 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 185 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 188 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 191 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 194 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 197 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0;

#line 200 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 203 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4];

#line 206 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0;

#line 209 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1];

#line 212 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1];

#line 215 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[1];

#line 218 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0[1];

#line 221 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 224 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 227 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4];

#line 230 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0;

#line 233 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1];

#line 236 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1];

#line 239 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1];

#line 242 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1];

#line 245 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 248 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 251 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5];

#line 254 "transform_hlds.constraint.c"
static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5];

#line 257 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0;

#line 260 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1];

#line 263 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1];

#line 266 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1];

#line 269 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1];

#line 272 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
#line 275 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 277 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 280 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
#line 283 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 285 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 287 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 290 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
#line 293 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 295 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 298 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
#line 301 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 303 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 305 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 308 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
#line 311 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 313 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 316 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
#line 319 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 321 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 323 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 326 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
#line 329 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 331 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 334 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
#line 337 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 339 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 341 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 344 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
#line 347 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 349 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 352 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
#line 355 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 357 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 359 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 836 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__836__1_1_f_0(
#line 836 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_18);

#line 543 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__540__1_1_f_0_1(
#line 543 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 543 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 540 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__540__1_1_f_0(
#line 540 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_20);

#line 421 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__421__1_2_p_0(
#line 421 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_20,
#line 421 "constraint.m"
  MR_Word * transform_hlds__constraint__LambdaHeadVar__2_21);

#line 341 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__341__1_5_p_0(
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_39);

#line 327 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__327__1_5_p_0(
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_37);

#line 234 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__234__1_2_p_0(
#line 234 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_14,
#line 234 "constraint.m"
  MR_Word * transform_hlds__constraint__LambdaHeadVar__2_15);

#line 388 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
#line 388 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 388 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 388 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 388 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
#line 388 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 388 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 410 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
#line 410 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 410 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 367 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
#line 367 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 367 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 367 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 367 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
#line 367 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 367 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 365 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
#line 365 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 365 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 365 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 365 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
#line 365 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 365 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 836 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3(
#line 836 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 836 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 833 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2(
#line 833 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 833 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 831 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1(
#line 831 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 831 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 828 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(
#line 828 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 818 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_1_f_0(
#line 818 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 802 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
#line 802 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_4,
#line 802 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
#line 802 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9);

#line 776 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
#line 776 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 776 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
#line 776 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11);

#line 733 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
#line 733 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_2);

#line 722 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
#line 722 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 721 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
#line 721 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 722 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
#line 722 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 722 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
#line 722 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 706 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
#line 706 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 706 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
#line 706 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
#line 706 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
#line 706 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5);

#line 675 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
#line 675 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 675 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 675 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 675 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 675 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

#line 647 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
#line 647 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 647 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
#line 647 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 647 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
#line 647 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 647 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
#line 647 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 613 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
#line 613 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
#line 613 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7);

#line 603 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
#line 603 "constraint.m"
  MR_Word transform_hlds__constraint__NonLocals_6,
#line 603 "constraint.m"
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
#line 603 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 603 "constraint.m"
  MR_Word * transform_hlds__constraint__Dependent_9,
#line 603 "constraint.m"
  MR_Word * transform_hlds__constraint__Independent_10);

#line 557 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
#line 557 "constraint.m"
  MR_Word transform_hlds__constraint__ConstructVar_1,
#line 557 "constraint.m"
  MR_Word transform_hlds__constraint__Construct0_2,
#line 557 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 557 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 557 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 557 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

#line 549 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__add_constraint_feature_1_f_0(
#line 549 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 540 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
#line 540 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 540 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 535 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
#line 535 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_4,
#line 535 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_5);

#line 530 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
#line 530 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_3,
#line 530 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_2);

#line 516 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
#line 516 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 516 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 516 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 502 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
#line 502 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 502 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 502 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 421 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
#line 421 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 421 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 421 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 415 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_1,
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_4,
#line 415 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_5,
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
#line 415 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7);

#line 341 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
#line 341 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 341 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 327 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
#line 327 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 327 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 306 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5,
#line 306 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevGoals_6);

#line 234 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
#line 234 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 234 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 234 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 277 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
#line 277 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_6,
#line 277 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 277 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 277 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_17,
#line 277 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_18);

#line 256 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
#line 256 "constraint.m"
  MR_Word transform_hlds__constraint__Var_1,
#line 256 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 256 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 256 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 256 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 256 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

#line 243 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
#line 243 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 243 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 243 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 243 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 243 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

#line 234 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
#line 234 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 234 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 234 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 231 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
#line 231 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 231 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_4);

#line 125 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
#line 125 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 125 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 125 "constraint.m"
  MR_Word * transform_hlds__constraint__FinalGoals_9,
#line 125 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_79,
#line 125 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_80);

#line 105 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
#line 105 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 105 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 105 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 105 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_14,
#line 105 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_15);

#line 84 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
#line 84 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 84 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 84 "constraint.m"
  MR_Word * transform_hlds__constraint__Goal_8,
#line 84 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_23,
#line 84 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_24);


static /* final */ const MR_Box transform_hlds__constraint_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_2[12][3];

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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__constraint_scalar_common_1[2]))
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

static /* final */ const MR_Box transform_hlds__constraint_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__constraint_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__constraint_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__constraint__flatten_constraints_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__constraint__propagate_conj_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__constraint__annotate_conj_constraints_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__constraint__attach_constraints_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__constraint_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__constraint__IntroducedFrom__func__attach_constraints__540__1_1_f_0_1)),
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1104 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1112 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1120 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1128 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1137 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1145 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1153 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1162 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0
  }
};

#line 1170 "transform_hlds.constraint.c"
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

#line 1187 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1195 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1203 "transform_hlds.constraint.c"
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

#line 1218 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

#line 1223 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0
  }
};

#line 1232 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

#line 1237 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0[1] = {
  (MR_Integer) 0
};

#line 1242 "transform_hlds.constraint.c"
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

#line 1259 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1268 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1276 "transform_hlds.constraint.c"
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

#line 1293 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1301 "transform_hlds.constraint.c"
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

#line 1316 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

#line 1321 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0
  }
};

#line 1330 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

#line 1335 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1] = {
  (MR_Integer) 0
};

#line 1340 "transform_hlds.constraint.c"
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

#line 1357 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1366 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1374 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1383 "transform_hlds.constraint.c"
static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5] = {
  (MR_String) "constr_module_info",
  (MR_String) "constr_vartypes",
  (MR_String) "constr_varset",
  (MR_String) "constr_instmap",
  (MR_String) "constr_changed"
};

#line 1392 "transform_hlds.constraint.c"
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

#line 1407 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

#line 1412 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0
  }
};

#line 1421 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

#line 1426 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1] = {
  (MR_Integer) 0
};

#line 1431 "transform_hlds.constraint.c"
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

#line 1448 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
#line 1451 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1453 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1455 "transform_hlds.constraint.c"
{
#line 1457 "transform_hlds.constraint.c"
  {
#line 1459 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1462 "transform_hlds.constraint.c"
    {
#line 1464 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1467 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1469 "transform_hlds.constraint.c"
  }
#line 1471 "transform_hlds.constraint.c"
}

#line 1474 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
#line 1477 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1479 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1481 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1483 "transform_hlds.constraint.c"
{
#line 1485 "transform_hlds.constraint.c"
  {
#line 1487 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1490 "transform_hlds.constraint.c"
    {
#line 1492 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____annotated_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1495 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1497 "transform_hlds.constraint.c"
  }
#line 1499 "transform_hlds.constraint.c"
}

#line 1502 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
#line 1505 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1507 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1509 "transform_hlds.constraint.c"
{
#line 1511 "transform_hlds.constraint.c"
  {
#line 1513 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1516 "transform_hlds.constraint.c"
    {
#line 1518 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conjunct_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1521 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1523 "transform_hlds.constraint.c"
  }
#line 1525 "transform_hlds.constraint.c"
}

#line 1528 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
#line 1531 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1533 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1535 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1537 "transform_hlds.constraint.c"
{
#line 1539 "transform_hlds.constraint.c"
  {
#line 1541 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1544 "transform_hlds.constraint.c"
    {
#line 1546 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____annotated_conjunct_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1549 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1551 "transform_hlds.constraint.c"
  }
#line 1553 "transform_hlds.constraint.c"
}

#line 1556 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
#line 1559 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1561 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1563 "transform_hlds.constraint.c"
{
#line 1565 "transform_hlds.constraint.c"
  {
#line 1567 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1570 "transform_hlds.constraint.c"
    {
#line 1572 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constrained_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1575 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1577 "transform_hlds.constraint.c"
  }
#line 1579 "transform_hlds.constraint.c"
}

#line 1582 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
#line 1585 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1587 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1589 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1591 "transform_hlds.constraint.c"
{
#line 1593 "transform_hlds.constraint.c"
  {
#line 1595 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1598 "transform_hlds.constraint.c"
    {
#line 1600 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constrained_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1603 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1605 "transform_hlds.constraint.c"
  }
#line 1607 "transform_hlds.constraint.c"
}

#line 1610 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
#line 1613 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1615 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1617 "transform_hlds.constraint.c"
{
#line 1619 "transform_hlds.constraint.c"
  {
#line 1621 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1624 "transform_hlds.constraint.c"
    {
#line 1626 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1629 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1631 "transform_hlds.constraint.c"
  }
#line 1633 "transform_hlds.constraint.c"
}

#line 1636 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
#line 1639 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1641 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1643 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1645 "transform_hlds.constraint.c"
{
#line 1647 "transform_hlds.constraint.c"
  {
#line 1649 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1652 "transform_hlds.constraint.c"
    {
#line 1654 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constraint_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1657 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1659 "transform_hlds.constraint.c"
  }
#line 1661 "transform_hlds.constraint.c"
}

#line 1664 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
#line 1667 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1669 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1671 "transform_hlds.constraint.c"
{
#line 1673 "transform_hlds.constraint.c"
  {
#line 1675 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1678 "transform_hlds.constraint.c"
    {
#line 1680 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_info_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1683 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1685 "transform_hlds.constraint.c"
  }
#line 1687 "transform_hlds.constraint.c"
}

#line 1690 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
#line 1693 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1695 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1697 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1699 "transform_hlds.constraint.c"
{
#line 1701 "transform_hlds.constraint.c"
  {
#line 1703 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1706 "transform_hlds.constraint.c"
    {
#line 1708 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constraint_info_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1711 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1713 "transform_hlds.constraint.c"
  }
#line 1715 "transform_hlds.constraint.c"
}

#line 836 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__836__1_1_f_0(
#line 836 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_18)
#line 836 "constraint.m"
{
#line 836 "constraint.m"
  {
#line 836 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 836 "constraint.m"
    MR_Word transform_hlds__constraint__LambdaHeadVar__2_19;
#line 836 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;
#line 836 "constraint.m"
    MR_Word transform_hlds__constraint__MainConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_18, (MR_Integer) 0)));
#line 836 "constraint.m"
    MR_Word transform_hlds__constraint__OtherConsIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_18, (MR_Integer) 1)));
#line 836 "constraint.m"
    MR_Word transform_hlds__constraint__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_18, (MR_Integer) 2)));

#line 838 "constraint.m"
    {
#line 838 "constraint.m"
      transform_hlds__constraint__V_20_20 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_23);
    }
#line 838 "constraint.m"
    {
#line 838 "constraint.m"
      transform_hlds__constraint__LambdaHeadVar__2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 838 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__2_19, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_21));
#line 838 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__2_19, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_22));
#line 838 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__2_19, 2) = ((MR_Box) (transform_hlds__constraint__V_20_20));
#line 838 "constraint.m"
    }
#line 836 "constraint.m"
    return transform_hlds__constraint__LambdaHeadVar__2_19;
#line 836 "constraint.m"
  }
#line 836 "constraint.m"
}

#line 543 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__540__1_1_f_0_1(
#line 543 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 543 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 543 "constraint.m"
{
#line 543 "constraint.m"
  {
#line 543 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 543 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 543 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_2;

#line 543 "constraint.m"
    {
#line 543 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_2 = transform_hlds__constraint__add_constraint_feature_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 543 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_2));
#line 543 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 543 "constraint.m"
  }
#line 543 "constraint.m"
}

#line 540 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__540__1_1_f_0(
#line 540 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_20)
#line 540 "constraint.m"
{
#line 540 "constraint.m"
  {
#line 540 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__LambdaHeadVar__2_21;
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__TypeCtorInfo_30_30;
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__V_22_22;
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__V_23_23;
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_20, (MR_Integer) 0)));
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__B_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_20, (MR_Integer) 1)));
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__C_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_20, (MR_Integer) 2)));
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__Constructs0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_20, (MR_Integer) 3)));
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_25, (MR_Integer) 0)));
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_25, (MR_Integer) 1)));
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_35;

#line 553 "constraint.m"
    {
#line 553 "constraint.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_34, &transform_hlds__constraint__GoalInfo_35);
    }
#line 552 "constraint.m"
    {
#line 552 "constraint.m"
      transform_hlds__constraint__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 552 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_22_22, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_33));
#line 552 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_22_22, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_35));
#line 552 "constraint.m"
    }
#line 1845 "transform_hlds.constraint.c"
    transform_hlds__constraint__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 543 "constraint.m"
    {
#line 543 "constraint.m"
      transform_hlds__constraint__V_23_23 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_30_30, transform_hlds__constraint__TypeCtorInfo_30_30, (MR_Word) &transform_hlds__constraint_scalar_common_2[11], transform_hlds__constraint__Constructs0_28);
    }
#line 542 "constraint.m"
    {
#line 542 "constraint.m"
      transform_hlds__constraint__LambdaHeadVar__2_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 542 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__2_21, 0) = ((MR_Box) (transform_hlds__constraint__V_22_22));
#line 542 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__2_21, 1) = ((MR_Box) (transform_hlds__constraint__B_26));
#line 542 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__2_21, 2) = ((MR_Box) (transform_hlds__constraint__C_27));
#line 542 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__2_21, 3) = ((MR_Box) (transform_hlds__constraint__V_23_23));
#line 542 "constraint.m"
    }
#line 540 "constraint.m"
    return transform_hlds__constraint__LambdaHeadVar__2_21;
#line 540 "constraint.m"
  }
#line 540 "constraint.m"
}

#line 421 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__421__1_2_p_0(
#line 421 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_20,
#line 421 "constraint.m"
  MR_Word * transform_hlds__constraint__LambdaHeadVar__2_21)
#line 421 "constraint.m"
{
#line 421 "constraint.m"
  {
#line 421 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 422 "constraint.m"
    {
#line 422 "constraint.m"
      MR_Word base;
#line 422 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "constraint.m"
      *transform_hlds__constraint__LambdaHeadVar__2_21 = base;
#line 422 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__LambdaHeadVar__1_20));
#line 422 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "constraint.m"
    }
#line 421 "constraint.m"
  }
#line 421 "constraint.m"
}

#line 341 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__341__1_5_p_0(
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 341 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_39)
#line 341 "constraint.m"
{
#line 341 "constraint.m"
  {
#line 341 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 341 "constraint.m"
    MR_Word transform_hlds__constraint__InstBefore_45;
#line 341 "constraint.m"
    MR_Word transform_hlds__constraint__InstAfter_46;
#line 341 "constraint.m"
    MR_Word transform_hlds__constraint__Type_47;

#line 343 "constraint.m"
    {
#line 343 "constraint.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__LambdaHeadVar__1_39, &transform_hlds__constraint__InstBefore_45);
    }
#line 344 "constraint.m"
    {
#line 344 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__LambdaHeadVar__1_39, &transform_hlds__constraint__InstAfter_46);
    }
#line 341 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 341 "constraint.m"
      {
#line 345 "constraint.m"
        {
#line 345 "constraint.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__LambdaHeadVar__1_39, &transform_hlds__constraint__Type_47);
        }
#line 346 "constraint.m"
        {
#line 346 "constraint.m"
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__constraint__InstAfter_46, transform_hlds__constraint__InstBefore_45, transform_hlds__constraint__Type_47, transform_hlds__constraint__ModuleInfo_2);
        }
#line 346 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 341 "constraint.m"
      }
#line 341 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 341 "constraint.m"
  }
#line 341 "constraint.m"
}

#line 327 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__327__1_5_p_0(
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 327 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_37)
#line 327 "constraint.m"
{
#line 327 "constraint.m"
  {
#line 327 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 327 "constraint.m"
    MR_Word transform_hlds__constraint__InstBefore_27;
#line 327 "constraint.m"
    MR_Word transform_hlds__constraint__InstAfter_28;
#line 327 "constraint.m"
    MR_Word transform_hlds__constraint__Type_29;

#line 329 "constraint.m"
    {
#line 329 "constraint.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__LambdaHeadVar__1_37, &transform_hlds__constraint__InstBefore_27);
    }
#line 330 "constraint.m"
    {
#line 330 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__LambdaHeadVar__1_37, &transform_hlds__constraint__InstAfter_28);
    }
#line 327 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 327 "constraint.m"
      {
#line 331 "constraint.m"
        {
#line 331 "constraint.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__LambdaHeadVar__1_37, &transform_hlds__constraint__Type_29);
        }
#line 332 "constraint.m"
        {
#line 332 "constraint.m"
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__constraint__InstAfter_28, transform_hlds__constraint__InstBefore_27, transform_hlds__constraint__Type_29, transform_hlds__constraint__ModuleInfo_2);
        }
#line 332 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 327 "constraint.m"
      }
#line 327 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 327 "constraint.m"
  }
#line 327 "constraint.m"
}

#line 234 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__234__1_2_p_0(
#line 234 "constraint.m"
  MR_Word transform_hlds__constraint__LambdaHeadVar__1_14,
#line 234 "constraint.m"
  MR_Word * transform_hlds__constraint__LambdaHeadVar__2_15)
#line 234 "constraint.m"
{
#line 234 "constraint.m"
  {
#line 234 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 234 "constraint.m"
    MR_Word transform_hlds__constraint__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_14, (MR_Integer) 0)));
#line 234 "constraint.m"
    MR_Word transform_hlds__constraint__Constructs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_14, (MR_Integer) 3)));
#line 234 "constraint.m"
    MR_Word transform_hlds__constraint__V_16_16;
#line 234 "constraint.m"
    MR_Word transform_hlds__constraint__V_17_17;
#line 235 "constraint.m"
    MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_14, (MR_Integer) 1)));
#line 235 "constraint.m"
    MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__LambdaHeadVar__1_14, (MR_Integer) 2)));

#line 236 "constraint.m"
    {
#line 236 "constraint.m"
      transform_hlds__constraint__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_17_17, 0) = ((MR_Box) (transform_hlds__constraint__Goal_7));
#line 236 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "constraint.m"
    }
#line 236 "constraint.m"
    {
#line 236 "constraint.m"
      transform_hlds__constraint__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_16_16, 0) = ((MR_Box) (transform_hlds__constraint__V_17_17));
#line 236 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "constraint.m"
    }
#line 236 "constraint.m"
    {
#line 236 "constraint.m"
      MR_Word base;
#line 236 "constraint.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "constraint.m"
      *transform_hlds__constraint__LambdaHeadVar__2_15 = base;
#line 236 "constraint.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Constructs_10));
#line 236 "constraint.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__V_16_16));
#line 236 "constraint.m"
    }
#line 234 "constraint.m"
  }
#line 234 "constraint.m"
}

#line 759 "constraint.m"
void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0(
#line 759 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 759 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 759 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 759 "constraint.m"
{
#line 759 "constraint.m"
  {
#line 759 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 759 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_18 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 759 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_19 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 759 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_18 == transform_hlds__constraint__CastY_19);
#line 759 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2117 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 759 "constraint.m"
    else
#line 759 "constraint.m"
      {
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 4)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_14_14;

#line 759 "constraint.m"
        {
#line 759 "constraint.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__constraint__V_14_14, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_9_9);
        }
#line 2151 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 759 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 759 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 759 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 759 "constraint.m"
        else
#line 759 "constraint.m"
          {
#line 759 "constraint.m"
            MR_Word transform_hlds__constraint__V_15_15;

#line 759 "constraint.m"
            {
#line 759 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_2[1], &transform_hlds__constraint__V_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
            }
#line 2171 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_15_15 == (MR_Integer) 0);
#line 759 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 759 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 759 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_15_15;
#line 759 "constraint.m"
            else
#line 759 "constraint.m"
              {
#line 759 "constraint.m"
                MR_Word transform_hlds__constraint__V_16_16;

#line 759 "constraint.m"
                {
#line 759 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[7], &transform_hlds__constraint__V_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
                }
#line 2191 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_16_16 == (MR_Integer) 0);
#line 759 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 759 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 759 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_16_16;
#line 759 "constraint.m"
                else
#line 759 "constraint.m"
                  {
#line 759 "constraint.m"
                    MR_Word transform_hlds__constraint__V_17_17;

#line 759 "constraint.m"
                    {
#line 759 "constraint.m"
                      hlds__instmap____Compare____instmap_0_0(&transform_hlds__constraint__V_17_17, transform_hlds__constraint__V_7_7, transform_hlds__constraint__V_12_12);
                    }
#line 2211 "transform_hlds.constraint.c"
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_17_17 == (MR_Integer) 0);
#line 759 "constraint.m"
                    transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 759 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 759 "constraint.m"
                      *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_17_17;
#line 759 "constraint.m"
                    else
#line 759 "constraint.m"
                      {
#line 759 "constraint.m"
                        MR_Integer transform_hlds__constraint__V_25_25 = (MR_Integer) transform_hlds__constraint__V_8_8;
#line 759 "constraint.m"
                        MR_Integer transform_hlds__constraint__V_26_26 = (MR_Integer) transform_hlds__constraint__V_13_13;

#line 759 "constraint.m"
                        {
#line 759 "constraint.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__V_25_25, transform_hlds__constraint__V_26_26);
                        }
#line 759 "constraint.m"
                      }
#line 759 "constraint.m"
                  }
#line 759 "constraint.m"
              }
#line 759 "constraint.m"
          }
#line 759 "constraint.m"
      }
#line 759 "constraint.m"
  }
#line 759 "constraint.m"
}

#line 759 "constraint.m"
MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0(
#line 759 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 759 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 759 "constraint.m"
{
#line 759 "constraint.m"
  {
#line 759 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 759 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_13 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 759 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_14 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 759 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_13 == transform_hlds__constraint__CastY_14);
#line 759 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 759 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 759 "constraint.m"
    else
#line 759 "constraint.m"
      {
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_17_17;
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 4)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 759 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));

#line 2301 "transform_hlds.constraint.c"
        {
#line 2303 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_8_8);
        }
#line 759 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 759 "constraint.m"
          {
#line 2310 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_2[1];
#line 2312 "transform_hlds.constraint.c"
            {
#line 2314 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 759 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 759 "constraint.m"
              {
#line 2321 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_17_17 = (MR_Word) &transform_hlds__constraint_scalar_common_1[7];
#line 2323 "transform_hlds.constraint.c"
                {
#line 2325 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_17_17, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 759 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 759 "constraint.m"
                  {
#line 2332 "transform_hlds.constraint.c"
                    {
#line 2334 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__constraint__V_6_6, transform_hlds__constraint__V_11_11);
                    }
#line 759 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 2339 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_7_7 == transform_hlds__constraint__V_12_12);
#line 759 "constraint.m"
                  }
#line 759 "constraint.m"
              }
#line 759 "constraint.m"
          }
#line 759 "constraint.m"
      }
#line 759 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 759 "constraint.m"
  }
#line 759 "constraint.m"
}

#line 388 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
#line 388 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 388 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 388 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 388 "constraint.m"
{
#line 388 "constraint.m"
  {
#line 388 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 388 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 388 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 388 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
#line 388 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2380 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 388 "constraint.m"
    else
#line 388 "constraint.m"
      {
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12;

#line 388 "constraint.m"
        {
#line 388 "constraint.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__V_12_12, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_8_8);
        }
#line 2410 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_12_12 == (MR_Integer) 0);
#line 388 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 388 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 388 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_12_12;
#line 388 "constraint.m"
        else
#line 388 "constraint.m"
          {
#line 388 "constraint.m"
            MR_Word transform_hlds__constraint__V_13_13;

#line 388 "constraint.m"
            {
#line 388 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_13_13, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 2430 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_13_13 == (MR_Integer) 0);
#line 388 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 388 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 388 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_13_13;
#line 388 "constraint.m"
            else
#line 388 "constraint.m"
              {
#line 388 "constraint.m"
                MR_Word transform_hlds__constraint__V_14_14;

#line 388 "constraint.m"
                {
#line 388 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_14_14, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 2450 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 388 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 388 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 388 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 388 "constraint.m"
                else
#line 388 "constraint.m"
                  {
#line 388 "constraint.m"
                    {
#line 388 "constraint.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__V_7_7)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
                    }
#line 388 "constraint.m"
                  }
#line 388 "constraint.m"
              }
#line 388 "constraint.m"
          }
#line 388 "constraint.m"
      }
#line 388 "constraint.m"
  }
#line 388 "constraint.m"
}

#line 388 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
#line 388 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 388 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 388 "constraint.m"
{
#line 388 "constraint.m"
  {
#line 388 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 388 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 388 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 388 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
#line 388 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 388 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 388 "constraint.m"
    else
#line 388 "constraint.m"
      {
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 388 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

#line 2531 "transform_hlds.constraint.c"
        {
#line 2533 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_7_7);
        }
#line 388 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 388 "constraint.m"
          {
#line 2540 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2542 "transform_hlds.constraint.c"
            {
#line 2544 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_8_8)));
            }
#line 388 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 388 "constraint.m"
              {
#line 2551 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2553 "transform_hlds.constraint.c"
                {
#line 2555 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
                }
#line 388 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 388 "constraint.m"
                  {
#line 2562 "transform_hlds.constraint.c"
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[0];
#line 2564 "transform_hlds.constraint.c"
                    {
#line 2566 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                    }
#line 388 "constraint.m"
                  }
#line 388 "constraint.m"
              }
#line 388 "constraint.m"
          }
#line 388 "constraint.m"
      }
#line 388 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 388 "constraint.m"
  }
#line 388 "constraint.m"
}

#line 410 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
#line 410 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 410 "constraint.m"
{
#line 410 "constraint.m"
  {
#line 410 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 410 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
#line 410 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

#line 410 "constraint.m"
    {
#line 410 "constraint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[6], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
    }
#line 410 "constraint.m"
  }
#line 410 "constraint.m"
}

#line 410 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 410 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 410 "constraint.m"
{
#line 410 "constraint.m"
  {
#line 410 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 410 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
#line 410 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

#line 410 "constraint.m"
    {
#line 410 "constraint.m"
      transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[6], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
#line 410 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 410 "constraint.m"
  }
#line 410 "constraint.m"
}

#line 367 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
#line 367 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 367 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 367 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 367 "constraint.m"
{
#line 367 "constraint.m"
  {
#line 367 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 367 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 367 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 367 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
#line 367 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2668 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 367 "constraint.m"
    else
#line 367 "constraint.m"
      {
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12;

#line 367 "constraint.m"
        {
#line 367 "constraint.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__V_12_12, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_8_8);
        }
#line 2698 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_12_12 == (MR_Integer) 0);
#line 367 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 367 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 367 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_12_12;
#line 367 "constraint.m"
        else
#line 367 "constraint.m"
          {
#line 367 "constraint.m"
            MR_Word transform_hlds__constraint__V_13_13;

#line 367 "constraint.m"
            {
#line 367 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_13_13, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 2718 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_13_13 == (MR_Integer) 0);
#line 367 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 367 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 367 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_13_13;
#line 367 "constraint.m"
            else
#line 367 "constraint.m"
              {
#line 367 "constraint.m"
                MR_Word transform_hlds__constraint__V_14_14;

#line 367 "constraint.m"
                {
#line 367 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_14_14, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 2738 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 367 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 367 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 367 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 367 "constraint.m"
                else
#line 367 "constraint.m"
                  {
#line 367 "constraint.m"
                    {
#line 367 "constraint.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__V_7_7)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
                    }
#line 367 "constraint.m"
                  }
#line 367 "constraint.m"
              }
#line 367 "constraint.m"
          }
#line 367 "constraint.m"
      }
#line 367 "constraint.m"
  }
#line 367 "constraint.m"
}

#line 367 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
#line 367 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 367 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 367 "constraint.m"
{
#line 367 "constraint.m"
  {
#line 367 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 367 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 367 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 367 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
#line 367 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 367 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 367 "constraint.m"
    else
#line 367 "constraint.m"
      {
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 367 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

#line 2819 "transform_hlds.constraint.c"
        {
#line 2821 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_7_7);
        }
#line 367 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 367 "constraint.m"
          {
#line 2828 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2830 "transform_hlds.constraint.c"
            {
#line 2832 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_8_8)));
            }
#line 367 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 367 "constraint.m"
              {
#line 2839 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2841 "transform_hlds.constraint.c"
                {
#line 2843 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
                }
#line 367 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 367 "constraint.m"
                  {
#line 2850 "transform_hlds.constraint.c"
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2852 "transform_hlds.constraint.c"
                    {
#line 2854 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                    }
#line 367 "constraint.m"
                  }
#line 367 "constraint.m"
              }
#line 367 "constraint.m"
          }
#line 367 "constraint.m"
      }
#line 367 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 367 "constraint.m"
  }
#line 367 "constraint.m"
}

#line 365 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
#line 365 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 365 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 365 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 365 "constraint.m"
{
#line 365 "constraint.m"
  {
#line 365 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 365 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
#line 365 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

#line 365 "constraint.m"
    {
#line 365 "constraint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
    }
#line 365 "constraint.m"
  }
#line 365 "constraint.m"
}

#line 365 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
#line 365 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 365 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 365 "constraint.m"
{
#line 365 "constraint.m"
  {
#line 365 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 365 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
#line 365 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

#line 365 "constraint.m"
    {
#line 365 "constraint.m"
      transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
#line 365 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 365 "constraint.m"
  }
#line 365 "constraint.m"
}

#line 836 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3(
#line 836 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 836 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 836 "constraint.m"
{
#line 836 "constraint.m"
  {
#line 836 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 836 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 836 "constraint.m"
    MR_Word transform_hlds__constraint__conv2_LambdaHeadVar__2_19;

#line 836 "constraint.m"
    {
#line 836 "constraint.m"
      transform_hlds__constraint__conv2_LambdaHeadVar__2_19 = transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__836__1_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 836 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_LambdaHeadVar__2_19));
#line 836 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 836 "constraint.m"
  }
#line 836 "constraint.m"
}

#line 833 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2(
#line 833 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 833 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 833 "constraint.m"
{
#line 833 "constraint.m"
  {
#line 833 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 833 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 833 "constraint.m"
    MR_Word transform_hlds__constraint__conv1_HeadVar__2_2;

#line 833 "constraint.m"
    {
#line 833 "constraint.m"
      transform_hlds__constraint__conv1_HeadVar__2_2 = transform_hlds__constraint__strip_constraint_markers_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 833 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_HeadVar__2_2));
#line 833 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 833 "constraint.m"
  }
#line 833 "constraint.m"
}

#line 831 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1(
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
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_2;

#line 831 "constraint.m"
    {
#line 831 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_2 = transform_hlds__constraint__strip_constraint_markers_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 831 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_2));
#line 831 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 831 "constraint.m"
  }
#line 831 "constraint.m"
}

#line 828 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(
#line 828 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 828 "constraint.m"
{
#line 830 "constraint.m"
  {
#line 830 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 830 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;

#line 830 "constraint.m"
#line 830 "constraint.m"
    switch (MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) {
#line 830 "constraint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 830 "constraint.m"
      case (MR_Integer) 0:
#line 840 "constraint.m"
        {
#line 840 "constraint.m"
          MR_Word transform_hlds__constraint__Goal_24 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__HeadVar__1_1), (MR_Integer) 0);
#line 840 "constraint.m"
          MR_Word transform_hlds__constraint__V_25_25;

#line 841 "constraint.m"
          {
#line 841 "constraint.m"
            transform_hlds__constraint__V_25_25 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_24);
          }
#line 841 "constraint.m"
          transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__V_25_25);
#line 840 "constraint.m"
        }
#line 830 "constraint.m"
        break;
#line 830 "constraint.m"
      case (MR_Integer) 1:
#line 855 "constraint.m"
        transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 830 "constraint.m"
        break;
#line 830 "constraint.m"
      case (MR_Integer) 2:
#line 853 "constraint.m"
        transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 830 "constraint.m"
        break;
#line 830 "constraint.m"
      case (MR_Integer) 3:
#line 830 "constraint.m"
#line 830 "constraint.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) {
#line 830 "constraint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 830 "constraint.m"
          case (MR_Integer) 0:
#line 851 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 830 "constraint.m"
            break;
#line 830 "constraint.m"
          case (MR_Integer) 1:
#line 849 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 830 "constraint.m"
            break;
#line 830 "constraint.m"
          case (MR_Integer) 2:
#line 830 "constraint.m"
            {
#line 830 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 830 "constraint.m"
              MR_Word transform_hlds__constraint__ConjType_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 830 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 830 "constraint.m"
              MR_Word transform_hlds__constraint__V_5_5;

#line 831 "constraint.m"
              {
#line 831 "constraint.m"
                transform_hlds__constraint__V_5_5 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_65_65, transform_hlds__constraint__TypeCtorInfo_65_65, (MR_Word) &transform_hlds__constraint_scalar_common_2[8], transform_hlds__constraint__Goals_4);
              }
#line 831 "constraint.m"
              {
#line 831 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 831 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 831 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_3));
#line 831 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_5_5));
#line 831 "constraint.m"
              }
#line 830 "constraint.m"
            }
#line 830 "constraint.m"
            break;
#line 830 "constraint.m"
          case (MR_Integer) 3:
#line 832 "constraint.m"
            {
#line 832 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 832 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 832 "constraint.m"
              MR_Word transform_hlds__constraint__V_8_8;

#line 833 "constraint.m"
              {
#line 833 "constraint.m"
                transform_hlds__constraint__V_8_8 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_68_68, transform_hlds__constraint__TypeCtorInfo_68_68, (MR_Word) &transform_hlds__constraint_scalar_common_2[9], transform_hlds__constraint__Goals_7);
              }
#line 833 "constraint.m"
              {
#line 833 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 833 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__V_8_8));
#line 833 "constraint.m"
              }
#line 832 "constraint.m"
            }
#line 830 "constraint.m"
            break;
#line 830 "constraint.m"
          case (MR_Integer) 4:
#line 835 "constraint.m"
            {
#line 835 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 835 "constraint.m"
              MR_Word transform_hlds__constraint__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 835 "constraint.m"
              MR_Word transform_hlds__constraint__CanFail_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 835 "constraint.m"
              MR_Word transform_hlds__constraint__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 835 "constraint.m"
              MR_Word transform_hlds__constraint__Cases_13;

#line 836 "constraint.m"
              {
#line 836 "constraint.m"
                transform_hlds__constraint__Cases_13 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_71_71, transform_hlds__constraint__TypeCtorInfo_71_71, (MR_Word) &transform_hlds__constraint_scalar_common_2[10], transform_hlds__constraint__Cases0_12);
              }
#line 835 "constraint.m"
              {
#line 835 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 835 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 835 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Var_10));
#line 835 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_11));
#line 835 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 3) = ((MR_Box) (transform_hlds__constraint__Cases_13));
#line 835 "constraint.m"
              }
#line 835 "constraint.m"
            }
#line 830 "constraint.m"
            break;
#line 830 "constraint.m"
          case (MR_Integer) 5:
#line 842 "constraint.m"
            {
#line 842 "constraint.m"
              MR_Word transform_hlds__constraint__Reason_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 842 "constraint.m"
              MR_Word transform_hlds__constraint__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 842 "constraint.m"
              MR_Word transform_hlds__constraint__V_28_28;

#line 843 "constraint.m"
              {
#line 843 "constraint.m"
                transform_hlds__constraint__V_28_28 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_27);
              }
#line 843 "constraint.m"
              {
#line 843 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 843 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 843 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Reason_26));
#line 843 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_28_28));
#line 843 "constraint.m"
              }
#line 842 "constraint.m"
            }
#line 830 "constraint.m"
            break;
#line 830 "constraint.m"
          case (MR_Integer) 6:
#line 844 "constraint.m"
            {
#line 844 "constraint.m"
              MR_Word transform_hlds__constraint__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 844 "constraint.m"
              MR_Word transform_hlds__constraint__If_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 844 "constraint.m"
              MR_Word transform_hlds__constraint__Then_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 844 "constraint.m"
              MR_Word transform_hlds__constraint__Else_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 4)));
#line 844 "constraint.m"
              MR_Word transform_hlds__constraint__V_33_33;
#line 844 "constraint.m"
              MR_Word transform_hlds__constraint__V_34_34;
#line 844 "constraint.m"
              MR_Word transform_hlds__constraint__V_35_35;

#line 846 "constraint.m"
              {
#line 846 "constraint.m"
                transform_hlds__constraint__V_33_33 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__If_30);
              }
#line 847 "constraint.m"
              {
#line 847 "constraint.m"
                transform_hlds__constraint__V_34_34 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Then_31);
              }
#line 848 "constraint.m"
              {
#line 848 "constraint.m"
                transform_hlds__constraint__V_35_35 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Else_32);
              }
#line 845 "constraint.m"
              {
#line 845 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 845 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 845 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Vars_29));
#line 845 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_33_33));
#line 845 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 3) = ((MR_Box) (transform_hlds__constraint__V_34_34));
#line 845 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 4) = ((MR_Box) (transform_hlds__constraint__V_35_35));
#line 845 "constraint.m"
              }
#line 844 "constraint.m"
            }
#line 830 "constraint.m"
            break;
#line 830 "constraint.m"
          case (MR_Integer) 7:
#line 857 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 830 "constraint.m"
            break;
#line 830 "constraint.m"
        }
#line 830 "constraint.m"
        break;
#line 830 "constraint.m"
    }
#line 830 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 830 "constraint.m"
  }
#line 828 "constraint.m"
}

#line 818 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_1_f_0(
#line 818 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 818 "constraint.m"
{
#line 821 "constraint.m"
  {
#line 821 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 821 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;
#line 821 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 821 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 821 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5;
#line 821 "constraint.m"
    MR_Word transform_hlds__constraint__V_6_6;

#line 821 "constraint.m"
    {
#line 821 "constraint.m"
      transform_hlds__constraint__V_6_6 = transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(transform_hlds__constraint__GoalExpr_3);
    }
#line 822 "constraint.m"
    {
#line 822 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo0_4, (MR_Integer) 0);
    }
#line 822 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 823 "constraint.m"
      {
#line 823 "constraint.m"
        {
#line 823 "constraint.m"
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_4, &transform_hlds__constraint__GoalInfo_5);
        }
#line 823 "constraint.m"
      }
#line 822 "constraint.m"
    else
#line 825 "constraint.m"
      transform_hlds__constraint__GoalInfo_5 = transform_hlds__constraint__GoalInfo0_4;
#line 821 "constraint.m"
    {
#line 821 "constraint.m"
      transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__constraint__V_6_6));
#line 821 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_5));
#line 821 "constraint.m"
    }
#line 821 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 821 "constraint.m"
  }
#line 818 "constraint.m"
}

#line 802 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
#line 802 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_4,
#line 802 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
#line 802 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9)
#line 802 "constraint.m"
{
#line 807 "constraint.m"
  {
#line 807 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 807 "constraint.m"
    if ((transform_hlds__constraint__Constraints_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 807 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_9 = transform_hlds__constraint__STATE_VARIABLE_Info_0_8;
#line 807 "constraint.m"
    else
#line 809 "constraint.m"
      {
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));

#line 810 "constraint.m"
        {
#line 810 "constraint.m"
          MR_Word base;
#line 810 "constraint.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 810 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_Info_9 = base;
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_12_12));
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_13_13));
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_14_14));
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__V_15_15));
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 1));
#line 810 "constraint.m"
        }
#line 809 "constraint.m"
      }
#line 807 "constraint.m"
  }
#line 802 "constraint.m"
}

#line 776 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
#line 776 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 776 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
#line 776 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11)
#line 776 "constraint.m"
{
#line 779 "constraint.m"
  {
#line 779 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__InstMapDelta_8;
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap_9;
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 780 "constraint.m"
    MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 780 "constraint.m"
    MR_Word transform_hlds__constraint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 780 "constraint.m"
    MR_Word transform_hlds__constraint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 780 "constraint.m"
    MR_Word transform_hlds__constraint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 783 "constraint.m"
    MR_Word transform_hlds__constraint__V_17_17;
#line 783 "constraint.m"
    MR_Word transform_hlds__constraint__V_18_18;
#line 783 "constraint.m"
    MR_Word transform_hlds__constraint__V_19_19;
#line 783 "constraint.m"
    MR_Word transform_hlds__constraint__V_21_21;
#line 783 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;

#line 781 "constraint.m"
    {
#line 781 "constraint.m"
      transform_hlds__constraint__InstMapDelta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_5);
    }
#line 782 "constraint.m"
    {
#line 782 "constraint.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_7, transform_hlds__constraint__InstMapDelta_8, &transform_hlds__constraint__InstMap_9);
    }
#line 783 "constraint.m"
    transform_hlds__constraint__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 783 "constraint.m"
    transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 783 "constraint.m"
    transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 783 "constraint.m"
    transform_hlds__constraint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 783 "constraint.m"
    transform_hlds__constraint__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 783 "constraint.m"
    {
#line 783 "constraint.m"
      MR_Word base;
#line 783 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 783 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_11 = base;
#line 783 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_17_17));
#line 783 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_18_18));
#line 783 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_19_19));
#line 783 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
#line 783 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__constraint__V_21_21));
#line 783 "constraint.m"
    }
#line 779 "constraint.m"
  }
#line 776 "constraint.m"
}

#line 733 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
#line 733 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_2)
#line 733 "constraint.m"
{
#line 735 "constraint.m"
  {
#line 735 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 735 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 0)));
#line 736 "constraint.m"
    MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 1)));

#line 740 "constraint.m"
    if (((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 741 "constraint.m"
      {
#line 741 "constraint.m"
        MR_Word transform_hlds__constraint__SubGoal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_3), (MR_Integer) 0);

#line 742 "constraint.m"
        {
#line 742 "constraint.m"
          transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_5);
        }
#line 741 "constraint.m"
      }
#line 740 "constraint.m"
    else
#line 740 "constraint.m"
    if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 744 "constraint.m"
      {
#line 744 "constraint.m"
        MR_Word transform_hlds__constraint__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 1)));
#line 744 "constraint.m"
        MR_Word transform_hlds__constraint__SubGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 2)));
#line 746 "constraint.m"
        MR_Word transform_hlds__constraint__FGT_8;
#line 746 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7;

#line 746 "constraint.m"
        transform_hlds__constraint__succeeded = ((((MR_tag((MR_Word) transform_hlds__constraint__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 746 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 746 "constraint.m"
          {
#line 746 "constraint.m"
            transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 1)));
#line 746 "constraint.m"
            transform_hlds__constraint__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 2)));
#line 748 "constraint.m"
#line 748 "constraint.m"
            switch (transform_hlds__constraint__FGT_8) {
#line 748 "constraint.m"
              default:
#line 748 "constraint.m"
                transform_hlds__constraint__succeeded = MR_FALSE;
#line 748 "constraint.m"
                break;
#line 748 "constraint.m"
              case (MR_Integer) 1:
#line 747 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 748 "constraint.m"
                break;
#line 748 "constraint.m"
              case (MR_Integer) 2:
#line 748 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 748 "constraint.m"
                break;
#line 748 "constraint.m"
            }
#line 746 "constraint.m"
          }
#line 745 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 751 "constraint.m"
          transform_hlds__constraint__succeeded = MR_TRUE;
#line 745 "constraint.m"
        else
#line 753 "constraint.m"
          {
#line 753 "constraint.m"
            transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_10);
          }
#line 744 "constraint.m"
      }
#line 740 "constraint.m"
    else
#line 740 "constraint.m"
      transform_hlds__constraint__succeeded = MR_FALSE;
#line 740 "constraint.m"
    if (!(transform_hlds__constraint__succeeded))
#line 739 "constraint.m"
      {
#line 739 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9;

#line 739 "constraint.m"
        {
#line 739 "constraint.m"
          transform_hlds__constraint__V_9_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr_3);
        }
#line 739 "constraint.m"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_9_9 == (MR_Integer) 1);
#line 739 "constraint.m"
      }
#line 735 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 735 "constraint.m"
  }
#line 733 "constraint.m"
}

#line 722 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
#line 722 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 722 "constraint.m"
{
#line 722 "constraint.m"
  {
#line 722 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 722 "constraint.m"
    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0, 1);
#line 722 "constraint.m"
  }
#line 722 "constraint.m"
}

#line 721 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
#line 721 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 721 "constraint.m"
{
#line 721 "constraint.m"
  {
#line 721 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 721 "constraint.m"
    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20);
#line 721 "constraint.m"
    {
#line 721 "constraint.m"
      transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(transform_hlds__constraint__env_ptr);
    }
#line 721 "constraint.m"
  }
#line 721 "constraint.m"
}

#line 722 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
#line 722 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 722 "constraint.m"
{
#line 722 "constraint.m"
  {
#line 722 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 722 "constraint.m"
    {
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_44;
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierChangedVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 1)));
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 1)));
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintNonLocals_42;
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_43;
#line 663 "constraint.m"
      MR_Word transform_hlds__constraint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 0)));
#line 663 "constraint.m"
      MR_Word transform_hlds__constraint__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 2)));
#line 663 "constraint.m"
      MR_Word transform_hlds__constraint__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 3)));
#line 664 "constraint.m"
      MR_Word transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
#line 664 "constraint.m"
      MR_Word transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
#line 664 "constraint.m"
      MR_Word transform_hlds__constraint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
#line 665 "constraint.m"
      MR_Word transform_hlds__constraint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 0)));

#line 666 "constraint.m"
      {
#line 666 "constraint.m"
        transform_hlds__constraint__ConstraintNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_41);
      }
#line 3729 "transform_hlds.constraint.c"
      transform_hlds__constraint__TypeCtorInfo_17_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 667 "constraint.m"
      {
#line 667 "constraint.m"
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierChangedVars_33, transform_hlds__constraint__ConstraintNonLocals_42, &transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
#line 669 "constraint.m"
      {
#line 669 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
#line 722 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
#line 722 "constraint.m"
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 722 "constraint.m"
        {
#line 722 "constraint.m"
          transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(transform_hlds__constraint__env_ptr);
        }
#line 722 "constraint.m"
    }
#line 722 "constraint.m"
  }
#line 722 "constraint.m"
}

#line 722 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
#line 722 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 722 "constraint.m"
{
#line 722 "constraint.m"
  {
#line 722 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 722 "constraint.m"
    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0) == 0)
#line 722 "constraint.m"
      {
#line 722 "constraint.m"
        {
#line 721 "constraint.m"
          {
#line 721 "constraint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4, transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3, transform_hlds__constraint__env_ptr);
          }
#line 722 "constraint.m"
        }
#line 722 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_FALSE;
#line 722 "constraint.m"
      }
#line 722 "constraint.m"
    else
#line 722 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_TRUE;
#line 722 "constraint.m"
  }
#line 722 "constraint.m"
}

#line 706 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
#line 706 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 706 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
#line 706 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
#line 706 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
#line 706 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5)
#line 706 "constraint.m"
{
#line 706 "constraint.m"
  {
#line 706 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s transform_hlds__constraint__env;

#line 706 "constraint.m"
    (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 710 "constraint.m"
    while (MR_TRUE)
#line 710 "constraint.m"
      {
#line 710 "constraint.m"
        /* tailcall optimized into a loop */
#line 710 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "constraint.m"
          {
#line 711 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 711 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
#line 710 "constraint.m"
          }
#line 710 "constraint.m"
        else
#line 713 "constraint.m"
          {
#line 713 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_13;
#line 713 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_16;
#line 713 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
#line 713 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;
#line 714 "constraint.m"
            MR_Word transform_hlds__constraint__V_17_17;
#line 714 "constraint.m"
            MR_Word transform_hlds__constraint__V_18_18;
#line 714 "constraint.m"
            MR_Word transform_hlds__constraint__V_19_19;

#line 712 "constraint.m"
            (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 712 "constraint.m"
            transform_hlds__constraint__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 714 "constraint.m"
            transform_hlds__constraint__ConstraintGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
#line 714 "constraint.m"
            transform_hlds__constraint__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
#line 714 "constraint.m"
            transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
#line 714 "constraint.m"
            transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
#line 716 "constraint.m"
            {
#line 716 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__ConstraintGoal_16);
            }
#line 716 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 716 "constraint.m"
              {
#line 722 "constraint.m"
                {
#line 722 "constraint.m"
                  transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(&transform_hlds__constraint__env);
                }
#line 722 "constraint.m"
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
#line 716 "constraint.m"
              }
#line 715 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 726 "constraint.m"
              {
#line 726 "constraint.m"
                {
#line 726 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
#line 726 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2));
#line 726 "constraint.m"
                }
#line 726 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 726 "constraint.m"
              }
#line 715 "constraint.m"
            else
#line 728 "constraint.m"
              {
#line 728 "constraint.m"
                {
#line 728 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
#line 728 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4));
#line 728 "constraint.m"
                }
#line 728 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
#line 728 "constraint.m"
              }
#line 730 "constraint.m"
            /* direct tailcall eliminated */
#line 730 "constraint.m"
            {
#line 730 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Constraints_13;
#line 730 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0__tmp_copy_2 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
#line 730 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;

#line 730 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0__tmp_copy_4;
#line 730 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0__tmp_copy_2;
#line 730 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 730 "constraint.m"
            }
#line 730 "constraint.m"
            continue;
#line 713 "constraint.m"
          }
#line 710 "constraint.m"
        break;
#line 710 "constraint.m"
      }
#line 706 "constraint.m"
  }
#line 706 "constraint.m"
}

#line 675 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
#line 675 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 675 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 675 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 675 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 675 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
#line 675 "constraint.m"
{
#line 679 "constraint.m"
  while (MR_TRUE)
#line 679 "constraint.m"
    {
#line 679 "constraint.m"
      /* tailcall optimized into a loop */
#line 679 "constraint.m"
      {
#line 679 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 679 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "constraint.m"
          {
#line 680 "constraint.m"
            {
#line 680 "constraint.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__HeadVar__2_2, transform_hlds__constraint__HeadVar__3_3);
            }
#line 679 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 679 "constraint.m"
          }
#line 679 "constraint.m"
        else
#line 682 "constraint.m"
          {
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_35_35;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_11_43;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__Goal0_11;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints0_12;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__SimpleConstraints_17;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__ComplexConstraints0_18;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__GoalList1_19;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__ComplexConstraints_20;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__RevComplexConstraints_21;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoalList1_22;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoals1_23;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__V_28_28;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__V_29_29;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__V_30_30;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_32_32;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__RevSimpleConstraints_39;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__RevComplexConstraints_40;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__GoalExpr0_50;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__HasSubGoals_52;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_53;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_16_54;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_17_55;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_82;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_84;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapDelta_85;
#line 682 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap_86;
#line 110 "constraint.m"
            MR_Word transform_hlds__constraint__V_51_51;
#line 121 "constraint.m"
            MR_Word transform_hlds__constraint__V_57_57;
#line 121 "constraint.m"
            MR_Word transform_hlds__constraint__V_58_58;
#line 121 "constraint.m"
            MR_Word transform_hlds__constraint__V_59_59;
#line 121 "constraint.m"
            MR_Word transform_hlds__constraint__V_60_60;
#line 123 "constraint.m"
            MR_Word transform_hlds__constraint__V_61_61;
#line 123 "constraint.m"
            MR_Word transform_hlds__constraint__V_62_62;
#line 123 "constraint.m"
            MR_Word transform_hlds__constraint__V_63_63;
#line 123 "constraint.m"
            MR_Word transform_hlds__constraint__V_65_65;
#line 123 "constraint.m"
            MR_Word transform_hlds__constraint__V_64_64;
#line 779 "constraint.m"
            MR_Word transform_hlds__constraint__V_81_81;
#line 780 "constraint.m"
            MR_Word transform_hlds__constraint__V_88_88;
#line 780 "constraint.m"
            MR_Word transform_hlds__constraint__V_89_89;
#line 780 "constraint.m"
            MR_Word transform_hlds__constraint__V_90_90;
#line 780 "constraint.m"
            MR_Word transform_hlds__constraint__V_91_91;
#line 783 "constraint.m"
            MR_Word transform_hlds__constraint__V_92_92;
#line 783 "constraint.m"
            MR_Word transform_hlds__constraint__V_93_93;
#line 783 "constraint.m"
            MR_Word transform_hlds__constraint__V_94_94;
#line 783 "constraint.m"
            MR_Word transform_hlds__constraint__V_96_96;
#line 783 "constraint.m"
            MR_Word transform_hlds__constraint__V_95_95;

#line 681 "constraint.m"
            transform_hlds__constraint__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_26_26, (MR_Integer) 0)));
#line 681 "constraint.m"
            transform_hlds__constraint__Constraints0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_26_26, (MR_Integer) 1)));
#line 699 "constraint.m"
            {
#line 699 "constraint.m"
              transform_hlds__constraint__filter_complex_constraints_2_5_p_0(transform_hlds__constraint__Constraints0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevSimpleConstraints_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevComplexConstraints_40);
            }
#line 4101 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_11_43 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
#line 701 "constraint.m"
            {
#line 701 "constraint.m"
              transform_hlds__constraint__SimpleConstraints_17 = mercury__list__reverse_1_f_0(transform_hlds__constraint__TypeCtorInfo_11_43, transform_hlds__constraint__RevSimpleConstraints_39);
            }
#line 702 "constraint.m"
            {
#line 702 "constraint.m"
              transform_hlds__constraint__ComplexConstraints0_18 = mercury__list__reverse_1_f_0(transform_hlds__constraint__TypeCtorInfo_11_43, transform_hlds__constraint__RevComplexConstraints_40);
            }
#line 110 "constraint.m"
            transform_hlds__constraint__GoalExpr0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 0)));
#line 110 "constraint.m"
            transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 1)));
#line 111 "constraint.m"
            {
#line 111 "constraint.m"
              transform_hlds__constraint__HasSubGoals_52 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_50);
            }
#line 114 "constraint.m"
#line 114 "constraint.m"
            switch (transform_hlds__constraint__HasSubGoals_52) {
#line 114 "constraint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 114 "constraint.m"
              case (MR_Integer) 1:
#line 113 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 114 "constraint.m"
                break;
#line 114 "constraint.m"
              case (MR_Integer) 0:
#line 807 "constraint.m"
                if ((transform_hlds__constraint__SimpleConstraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 807 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 807 "constraint.m"
                else
#line 809 "constraint.m"
                  {
#line 810 "constraint.m"
                    MR_Word transform_hlds__constraint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 810 "constraint.m"
                    MR_Word transform_hlds__constraint__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 810 "constraint.m"
                    MR_Word transform_hlds__constraint__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 810 "constraint.m"
                    MR_Word transform_hlds__constraint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 810 "constraint.m"
                    MR_Word transform_hlds__constraint__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));

#line 810 "constraint.m"
                    {
#line 810 "constraint.m"
                      transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 810 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 0) = ((MR_Box) (transform_hlds__constraint__V_74_74));
#line 810 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 1) = ((MR_Box) (transform_hlds__constraint__V_75_75));
#line 810 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 2) = ((MR_Box) (transform_hlds__constraint__V_76_76));
#line 810 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 3) = ((MR_Box) (transform_hlds__constraint__V_77_77));
#line 810 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 810 "constraint.m"
                    }
#line 809 "constraint.m"
                  }
#line 114 "constraint.m"
                break;
#line 114 "constraint.m"
            }
#line 121 "constraint.m"
            transform_hlds__constraint__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 0)));
#line 121 "constraint.m"
            transform_hlds__constraint__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 1)));
#line 121 "constraint.m"
            transform_hlds__constraint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 2)));
#line 121 "constraint.m"
            transform_hlds__constraint__InstMap0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 3)));
#line 121 "constraint.m"
            transform_hlds__constraint__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 4)));
#line 122 "constraint.m"
            {
#line 122 "constraint.m"
              transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(transform_hlds__constraint__Goal0_11, transform_hlds__constraint__SimpleConstraints_17, &transform_hlds__constraint__GoalList1_19, transform_hlds__constraint__STATE_VARIABLE_Info_16_54, &transform_hlds__constraint__STATE_VARIABLE_Info_17_55);
            }
#line 123 "constraint.m"
            transform_hlds__constraint__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 0)));
#line 123 "constraint.m"
            transform_hlds__constraint__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 1)));
#line 123 "constraint.m"
            transform_hlds__constraint__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 2)));
#line 123 "constraint.m"
            transform_hlds__constraint__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 3)));
#line 123 "constraint.m"
            transform_hlds__constraint__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 4)));
#line 123 "constraint.m"
            {
#line 123 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 123 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (transform_hlds__constraint__V_61_61));
#line 123 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (transform_hlds__constraint__V_62_62));
#line 123 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (transform_hlds__constraint__V_63_63));
#line 123 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_53));
#line 123 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (transform_hlds__constraint__V_65_65));
#line 123 "constraint.m"
            }
#line 686 "constraint.m"
            {
#line 686 "constraint.m"
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__ComplexConstraints0_18, &transform_hlds__constraint__ComplexConstraints_20);
            }
#line 4222 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 687 "constraint.m"
            {
#line 687 "constraint.m"
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__ComplexConstraints_20, &transform_hlds__constraint__RevComplexConstraints_21);
            }
#line 688 "constraint.m"
            {
#line 688 "constraint.m"
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__GoalList1_19, &transform_hlds__constraint__RevGoalList1_22);
            }
#line 689 "constraint.m"
            {
#line 689 "constraint.m"
              transform_hlds__constraint__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_30_30, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__2_2));
#line 689 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "constraint.m"
            }
#line 689 "constraint.m"
            {
#line 689 "constraint.m"
              transform_hlds__constraint__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_29_29, 0) = ((MR_Box) (transform_hlds__constraint__RevGoalList1_22));
#line 689 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_29_29, 1) = ((MR_Box) (transform_hlds__constraint__V_30_30));
#line 689 "constraint.m"
            }
#line 689 "constraint.m"
            {
#line 689 "constraint.m"
              transform_hlds__constraint__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_28_28, 0) = ((MR_Box) (transform_hlds__constraint__RevComplexConstraints_21));
#line 689 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_28_28, 1) = ((MR_Box) (transform_hlds__constraint__V_29_29));
#line 689 "constraint.m"
            }
#line 689 "constraint.m"
            {
#line 689 "constraint.m"
              mercury__list__condense_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__V_28_28, &transform_hlds__constraint__RevGoals1_23);
            }
#line 779 "constraint.m"
            transform_hlds__constraint__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 0)));
#line 779 "constraint.m"
            transform_hlds__constraint__GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 1)));
#line 780 "constraint.m"
            transform_hlds__constraint__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 780 "constraint.m"
            transform_hlds__constraint__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 780 "constraint.m"
            transform_hlds__constraint__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 780 "constraint.m"
            transform_hlds__constraint__InstMap0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 780 "constraint.m"
            transform_hlds__constraint__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 781 "constraint.m"
            {
#line 781 "constraint.m"
              transform_hlds__constraint__InstMapDelta_85 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_82);
            }
#line 782 "constraint.m"
            {
#line 782 "constraint.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_84, transform_hlds__constraint__InstMapDelta_85, &transform_hlds__constraint__InstMap_86);
            }
#line 783 "constraint.m"
            transform_hlds__constraint__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 783 "constraint.m"
            transform_hlds__constraint__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 783 "constraint.m"
            transform_hlds__constraint__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 783 "constraint.m"
            transform_hlds__constraint__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 783 "constraint.m"
            transform_hlds__constraint__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 783 "constraint.m"
            {
#line 783 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 783 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__constraint__V_92_92));
#line 783 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__constraint__V_93_93));
#line 783 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__constraint__V_94_94));
#line 783 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_86));
#line 783 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (transform_hlds__constraint__V_96_96));
#line 783 "constraint.m"
            }
#line 692 "constraint.m"
            /* direct tailcall eliminated */
#line 692 "constraint.m"
            {
#line 692 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Goals0_13;
#line 692 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__2__tmp_copy_2 = transform_hlds__constraint__RevGoals1_23;
#line 692 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_Info_32_32;

#line 692 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_0_4 = transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 692 "constraint.m"
              transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__2__tmp_copy_2;
#line 692 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 692 "constraint.m"
            }
#line 692 "constraint.m"
            continue;
#line 682 "constraint.m"
          }
#line 679 "constraint.m"
      }
#line 679 "constraint.m"
      break;
#line 679 "constraint.m"
    }
#line 675 "constraint.m"
}

#line 647 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
#line 647 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 647 "constraint.m"
{
#line 647 "constraint.m"
  {
#line 647 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 647 "constraint.m"
    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0, 1);
#line 647 "constraint.m"
  }
#line 647 "constraint.m"
}

#line 647 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
#line 647 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 647 "constraint.m"
{
#line 647 "constraint.m"
  {
#line 647 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 647 "constraint.m"
    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31);
#line 647 "constraint.m"
    {
#line 647 "constraint.m"
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(transform_hlds__constraint__env_ptr);
    }
#line 647 "constraint.m"
  }
#line 647 "constraint.m"
}

#line 647 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
#line 647 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 647 "constraint.m"
{
#line 647 "constraint.m"
  {
#line 647 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 647 "constraint.m"
    {
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_57;
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierChangedVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 1)));
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 1)));
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintNonLocals_55;
#line 662 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_56;
#line 663 "constraint.m"
      MR_Word transform_hlds__constraint__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 0)));
#line 663 "constraint.m"
      MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 2)));
#line 663 "constraint.m"
      MR_Word transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 3)));
#line 664 "constraint.m"
      MR_Word transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
#line 664 "constraint.m"
      MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
#line 664 "constraint.m"
      MR_Word transform_hlds__constraint__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
#line 665 "constraint.m"
      MR_Word transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 0)));

#line 666 "constraint.m"
      {
#line 666 "constraint.m"
        transform_hlds__constraint__ConstraintNonLocals_55 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_54);
      }
#line 4440 "transform_hlds.constraint.c"
      transform_hlds__constraint__TypeCtorInfo_17_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 667 "constraint.m"
      {
#line 667 "constraint.m"
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierChangedVars_46, transform_hlds__constraint__ConstraintNonLocals_55, &transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
#line 669 "constraint.m"
      {
#line 669 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
#line 648 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 648 "constraint.m"
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
#line 648 "constraint.m"
        {
#line 648 "constraint.m"
          transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(transform_hlds__constraint__env_ptr);
        }
#line 647 "constraint.m"
    }
#line 647 "constraint.m"
  }
#line 647 "constraint.m"
}

#line 647 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
#line 647 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 647 "constraint.m"
{
#line 647 "constraint.m"
  {
#line 647 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 647 "constraint.m"
    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0) == 0)
#line 647 "constraint.m"
      {
#line 647 "constraint.m"
        {
#line 647 "constraint.m"
          {
#line 647 "constraint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4, transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3, transform_hlds__constraint__env_ptr);
          }
#line 647 "constraint.m"
        }
#line 647 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 647 "constraint.m"
      }
#line 647 "constraint.m"
    else
#line 647 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 647 "constraint.m"
  }
#line 647 "constraint.m"
}

#line 613 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
#line 613 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
#line 613 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
#line 613 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7)
#line 613 "constraint.m"
{
#line 613 "constraint.m"
  {
#line 613 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s transform_hlds__constraint__env;

#line 613 "constraint.m"
    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4;
#line 618 "constraint.m"
    while (MR_TRUE)
#line 618 "constraint.m"
      {
#line 618 "constraint.m"
        /* tailcall optimized into a loop */
#line 618 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "constraint.m"
          {
#line 619 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
#line 619 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevDependent_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 618 "constraint.m"
          }
#line 618 "constraint.m"
        else
#line 621 "constraint.m"
          {
#line 621 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_19;
#line 621 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_22;
#line 621 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_24;
#line 621 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoalInfo_27;
#line 621 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintNonLocals_28;
#line 621 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
#line 621 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;
#line 622 "constraint.m"
            MR_Word transform_hlds__constraint__V_23_23;
#line 622 "constraint.m"
            MR_Word transform_hlds__constraint__V_25_25;
#line 623 "constraint.m"
            MR_Word transform_hlds__constraint__V_26_26;

#line 621 "constraint.m"
            (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 621 "constraint.m"
            transform_hlds__constraint__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 622 "constraint.m"
            transform_hlds__constraint__ConstraintGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
#line 622 "constraint.m"
            transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
#line 622 "constraint.m"
            transform_hlds__constraint__IncompatibleInstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
#line 622 "constraint.m"
            transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
#line 623 "constraint.m"
            transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 0)));
#line 623 "constraint.m"
            transform_hlds__constraint__ConstraintGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 1)));
#line 624 "constraint.m"
            {
#line 624 "constraint.m"
              transform_hlds__constraint__ConstraintNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_27);
            }
#line 631 "constraint.m"
            {
#line 631 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 631 "constraint.m"
              MR_Word transform_hlds__constraint__OutputVarsUsedByConstraint_29;

#line 630 "constraint.m"
              {
#line 630 "constraint.m"
                parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__ConstraintNonLocals_28, transform_hlds__constraint__HeadVar__2_2, &transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
#line 632 "constraint.m"
              {
#line 632 "constraint.m"
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
#line 632 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 631 "constraint.m"
            }
#line 633 "constraint.m"
            if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
#line 633 "constraint.m"
              {
#line 639 "constraint.m"
                {
#line 639 "constraint.m"
                  MR_Word transform_hlds__constraint__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 639 "constraint.m"
                  MR_Word transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30;

#line 638 "constraint.m"
                  {
#line 638 "constraint.m"
                    parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__IncompatibleInstVars_24, &transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
#line 640 "constraint.m"
                  {
#line 640 "constraint.m"
                    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
#line 640 "constraint.m"
                  (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 639 "constraint.m"
                }
#line 633 "constraint.m"
                if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
#line 647 "constraint.m"
                  {
#line 647 "constraint.m"
                    {
#line 647 "constraint.m"
                      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(&transform_hlds__constraint__env);
                    }
#line 647 "constraint.m"
                  }
#line 633 "constraint.m"
              }
#line 626 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
#line 651 "constraint.m"
              {
#line 651 "constraint.m"
                {
#line 651 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
#line 651 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4));
#line 651 "constraint.m"
                }
#line 651 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
#line 651 "constraint.m"
              }
#line 626 "constraint.m"
            else
#line 653 "constraint.m"
              {
#line 653 "constraint.m"
                {
#line 653 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
#line 653 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6));
#line 653 "constraint.m"
                }
#line 653 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 653 "constraint.m"
              }
#line 655 "constraint.m"
            /* direct tailcall eliminated */
#line 655 "constraint.m"
            {
#line 655 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__3__tmp_copy_3 = transform_hlds__constraint__Constraints_19;
#line 655 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
#line 655 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0__tmp_copy_6 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;

#line 655 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0__tmp_copy_6;
#line 655 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_0__tmp_copy_4;
#line 655 "constraint.m"
              transform_hlds__constraint__HeadVar__3_3 = transform_hlds__constraint__HeadVar__3__tmp_copy_3;
#line 655 "constraint.m"
            }
#line 655 "constraint.m"
            continue;
#line 621 "constraint.m"
          }
#line 618 "constraint.m"
        break;
#line 618 "constraint.m"
      }
#line 613 "constraint.m"
  }
#line 613 "constraint.m"
}

#line 603 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
#line 603 "constraint.m"
  MR_Word transform_hlds__constraint__NonLocals_6,
#line 603 "constraint.m"
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
#line 603 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 603 "constraint.m"
  MR_Word * transform_hlds__constraint__Dependent_9,
#line 603 "constraint.m"
  MR_Word * transform_hlds__constraint__Independent_10)
#line 603 "constraint.m"
{
#line 607 "constraint.m"
  {
#line 607 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 607 "constraint.m"
    MR_Word transform_hlds__constraint__TypeCtorInfo_15_15;
#line 607 "constraint.m"
    MR_Word transform_hlds__constraint__RevDependent_11;
#line 607 "constraint.m"
    MR_Word transform_hlds__constraint__RevIndependent_12;

#line 608 "constraint.m"
    {
#line 608 "constraint.m"
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(transform_hlds__constraint__NonLocals_6, transform_hlds__constraint__GoalOutputVars_7, transform_hlds__constraint__Constraints_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevDependent_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevIndependent_12);
    }
#line 4752 "transform_hlds.constraint.c"
    transform_hlds__constraint__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
#line 610 "constraint.m"
    {
#line 610 "constraint.m"
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevDependent_11, transform_hlds__constraint__Dependent_9);
    }
#line 611 "constraint.m"
    {
#line 611 "constraint.m"
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevIndependent_12, transform_hlds__constraint__Independent_10);
    }
#line 607 "constraint.m"
  }
#line 603 "constraint.m"
}

#line 557 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
#line 557 "constraint.m"
  MR_Word transform_hlds__constraint__ConstructVar_1,
#line 557 "constraint.m"
  MR_Word transform_hlds__constraint__Construct0_2,
#line 557 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 557 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 557 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 557 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
#line 557 "constraint.m"
{
#line 561 "constraint.m"
  {
#line 561 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 561 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 561 "constraint.m"
      {
#line 561 "constraint.m"
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 561 "constraint.m"
      }
#line 561 "constraint.m"
    else
#line 563 "constraint.m"
      {
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__Constraint0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__Constraints0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__Constraint_16;
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__Constraints_17;
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintGoal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 0)));
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__ChangedVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 1)));
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__IncompatibleInstVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 2)));
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__Constructs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 3)));
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_39_39;
#line 567 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 1)));
#line 567 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintNonLocals_25;
#line 567 "constraint.m"
        MR_Word transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 0)));

#line 568 "constraint.m"
        {
#line 568 "constraint.m"
          transform_hlds__constraint__ConstraintNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintInfo_24);
        }
#line 569 "constraint.m"
        {
#line 569 "constraint.m"
          transform_hlds__constraint__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__constraint__ConstraintNonLocals_25, transform_hlds__constraint__ConstructVar_1);
        }
#line 566 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 571 "constraint.m"
          {
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_64_64;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__NewVar_28;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__VarSet_29;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__VarType_30;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes_31;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__Subn_32;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__Construct_33;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__Constructs_34;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_35;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_41_41;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_52_52;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_55_55;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_56_56;
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 571 "constraint.m"
            MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 576 "constraint.m"
            MR_Word transform_hlds__constraint__V_53_53;
#line 576 "constraint.m"
            MR_Word transform_hlds__constraint__V_54_54;

#line 573 "constraint.m"
            {
#line 573 "constraint.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarSet0_26, &transform_hlds__constraint__VarSet_29);
            }
#line 574 "constraint.m"
            {
#line 574 "constraint.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes0_27, transform_hlds__constraint__ConstructVar_1, &transform_hlds__constraint__VarType_30);
            }
#line 575 "constraint.m"
            {
#line 575 "constraint.m"
              hlds__vartypes__add_var_type_4_p_0(transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarType_30, transform_hlds__constraint__VarTypes0_27, &transform_hlds__constraint__VarTypes_31);
            }
#line 576 "constraint.m"
            transform_hlds__constraint__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 576 "constraint.m"
            transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 576 "constraint.m"
            transform_hlds__constraint__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 576 "constraint.m"
            transform_hlds__constraint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 576 "constraint.m"
            transform_hlds__constraint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 577 "constraint.m"
            {
#line 577 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 577 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (transform_hlds__constraint__V_52_52));
#line 577 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_31));
#line 577 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_29));
#line 577 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (transform_hlds__constraint__V_55_55));
#line 577 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (transform_hlds__constraint__V_56_56));
#line 577 "constraint.m"
            }
#line 578 "constraint.m"
            {
#line 578 "constraint.m"
              transform_hlds__constraint__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_41_41, 0) = ((MR_Box) (transform_hlds__constraint__ConstructVar_1));
#line 578 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_41_41, 1) = ((MR_Box) (transform_hlds__constraint__NewVar_28));
#line 578 "constraint.m"
            }
#line 578 "constraint.m"
            {
#line 578 "constraint.m"
              transform_hlds__constraint__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_40_40, 0) = ((MR_Box) (transform_hlds__constraint__V_41_41));
#line 578 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "constraint.m"
            }
#line 4948 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_64_64 = (MR_Word) &transform_hlds__constraint_scalar_common_1[2];
#line 578 "constraint.m"
            {
#line 578 "constraint.m"
              mercury__map__from_assoc_list_2_p_0(transform_hlds__constraint__TypeInfo_64_64, transform_hlds__constraint__TypeInfo_64_64, transform_hlds__constraint__V_40_40, &transform_hlds__constraint__Subn_32);
            }
#line 579 "constraint.m"
            {
#line 579 "constraint.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__Construct0_2, &transform_hlds__constraint__Construct_33);
            }
#line 580 "constraint.m"
            {
#line 580 "constraint.m"
              transform_hlds__constraint__Constructs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 0) = ((MR_Box) (transform_hlds__constraint__Construct_33));
#line 580 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 1) = ((MR_Box) (transform_hlds__constraint__Constructs0_22));
#line 580 "constraint.m"
            }
#line 581 "constraint.m"
            {
#line 581 "constraint.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__ConstraintGoal0_19, &transform_hlds__constraint__ConstraintGoal_35);
            }
#line 582 "constraint.m"
            {
#line 582 "constraint.m"
              transform_hlds__constraint__Constraint_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 582 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 0) = ((MR_Box) (transform_hlds__constraint__ConstraintGoal_35));
#line 582 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_20));
#line 582 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_21));
#line 582 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 3) = ((MR_Box) (transform_hlds__constraint__Constructs_34));
#line 582 "constraint.m"
            }
#line 571 "constraint.m"
          }
#line 566 "constraint.m"
        else
#line 585 "constraint.m"
          {
#line 585 "constraint.m"
            transform_hlds__constraint__Constraint_16 = transform_hlds__constraint__Constraint0_14;
#line 585 "constraint.m"
            transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 585 "constraint.m"
          }
#line 587 "constraint.m"
        {
#line 587 "constraint.m"
          transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_1, transform_hlds__constraint__Construct0_2, transform_hlds__constraint__Constraints0_15, &transform_hlds__constraint__Constraints_17, transform_hlds__constraint__STATE_VARIABLE_Info_39_39, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
#line 563 "constraint.m"
        {
#line 563 "constraint.m"
          MR_Word base;
#line 563 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "constraint.m"
          *transform_hlds__constraint__HeadVar__4_4 = base;
#line 563 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_16));
#line 563 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_17));
#line 563 "constraint.m"
        }
#line 563 "constraint.m"
      }
#line 561 "constraint.m"
  }
#line 557 "constraint.m"
}

#line 549 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__add_constraint_feature_1_f_0(
#line 549 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 549 "constraint.m"
{
#line 552 "constraint.m"
  {
#line 552 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 552 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;
#line 552 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 552 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 552 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5;

#line 553 "constraint.m"
    {
#line 553 "constraint.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_4, &transform_hlds__constraint__GoalInfo_5);
    }
#line 552 "constraint.m"
    {
#line 552 "constraint.m"
      transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 552 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_3));
#line 552 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_5));
#line 552 "constraint.m"
    }
#line 552 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 552 "constraint.m"
  }
#line 549 "constraint.m"
}

#line 540 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
#line 540 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 540 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 540 "constraint.m"
{
#line 540 "constraint.m"
  {
#line 540 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 540 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 540 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_LambdaHeadVar__2_21;

#line 540 "constraint.m"
    {
#line 540 "constraint.m"
      transform_hlds__constraint__conv0_LambdaHeadVar__2_21 = transform_hlds__constraint__IntroducedFrom__func__attach_constraints__540__1_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 540 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_LambdaHeadVar__2_21));
#line 540 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 540 "constraint.m"
  }
#line 540 "constraint.m"
}

#line 535 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
#line 535 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_4,
#line 535 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_5)
#line 535 "constraint.m"
{
#line 538 "constraint.m"
  {
#line 538 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 538 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__3_3;
#line 538 "constraint.m"
    MR_Word transform_hlds__constraint__Constraints_6;
#line 539 "constraint.m"
    MR_Word transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 0)));
#line 539 "constraint.m"
    MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 1)));
#line 539 "constraint.m"
    MR_Word transform_hlds__constraint__V_7_7;
#line 539 "constraint.m"
    MR_Integer transform_hlds__constraint__V_8_8;
#line 539 "constraint.m"
    MR_Word transform_hlds__constraint__V_9_9;
#line 539 "constraint.m"
    MR_Word transform_hlds__constraint__V_10_10;
#line 539 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11;
#line 539 "constraint.m"
    MR_Word transform_hlds__constraint__V_12_12;

#line 539 "constraint.m"
    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 539 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 539 "constraint.m"
      {
#line 539 "constraint.m"
        transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 0)));
#line 539 "constraint.m"
        transform_hlds__constraint__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 1)));
#line 539 "constraint.m"
        transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 2)));
#line 539 "constraint.m"
        transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 3)));
#line 539 "constraint.m"
        transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 4)));
#line 539 "constraint.m"
        transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 5)));
#line 540 "constraint.m"
        {
#line 540 "constraint.m"
          MR_Word transform_hlds__constraint__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;

#line 540 "constraint.m"
          {
#line 540 "constraint.m"
            transform_hlds__constraint__Constraints_6 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_29_29, transform_hlds__constraint__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__constraint_scalar_common_2[7], transform_hlds__constraint__Constraints0_5);
          }
#line 540 "constraint.m"
        }
#line 539 "constraint.m"
      }
#line 539 "constraint.m"
    else
#line 546 "constraint.m"
      transform_hlds__constraint__Constraints_6 = transform_hlds__constraint__Constraints0_5;
#line 538 "constraint.m"
    {
#line 538 "constraint.m"
      transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 538 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__constraint__Goal_4));
#line 538 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_6));
#line 538 "constraint.m"
    }
#line 538 "constraint.m"
    return transform_hlds__constraint__HeadVar__3_3;
#line 538 "constraint.m"
  }
#line 535 "constraint.m"
}

#line 530 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
#line 530 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_3,
#line 530 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_2)
#line 530 "constraint.m"
{
#line 533 "constraint.m"
  {
#line 533 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 533 "constraint.m"
    {
#line 533 "constraint.m"
      MR_Word base;
#line 533 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 533 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_2 = base;
#line 533 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_3));
#line 533 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "constraint.m"
    }
#line 533 "constraint.m"
  }
#line 530 "constraint.m"
}

#line 516 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
#line 516 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 516 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 516 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 516 "constraint.m"
{
#line 516 "constraint.m"
  {
#line 516 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 516 "constraint.m"
    MR_Word transform_hlds__constraint__conv2_HeadVar__2_2;

#line 516 "constraint.m"
    {
#line 516 "constraint.m"
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv2_HeadVar__2_2);
    }
#line 516 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_HeadVar__2_2));
#line 516 "constraint.m"
  }
#line 516 "constraint.m"
}

#line 502 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
#line 502 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 502 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 502 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 502 "constraint.m"
{
#line 502 "constraint.m"
  {
#line 502 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 502 "constraint.m"
    MR_Word transform_hlds__constraint__conv1_HeadVar__2_2;

#line 502 "constraint.m"
    {
#line 502 "constraint.m"
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv1_HeadVar__2_2);
    }
#line 502 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_HeadVar__2_2));
#line 502 "constraint.m"
  }
#line 502 "constraint.m"
}

#line 421 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
#line 421 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 421 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 421 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 421 "constraint.m"
{
#line 421 "constraint.m"
  {
#line 421 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 421 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_LambdaHeadVar__2_21;

#line 421 "constraint.m"
    {
#line 421 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__421__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_LambdaHeadVar__2_21);
    }
#line 421 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_LambdaHeadVar__2_21));
#line 421 "constraint.m"
  }
#line 421 "constraint.m"
}

#line 415 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_1,
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_4,
#line 415 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_5,
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
#line 415 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7)
#line 415 "constraint.m"
{
#line 419 "constraint.m"
  while (MR_TRUE)
#line 419 "constraint.m"
    {
#line 419 "constraint.m"
      /* tailcall optimized into a loop */
#line 419 "constraint.m"
      {
#line 419 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 419 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "constraint.m"
          {
#line 419 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_116_116;
#line 419 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints1_13;
#line 419 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_16;

#line 420 "constraint.m"
            {
#line 420 "constraint.m"
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_13);
            }
#line 5357 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_116_116 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 421 "constraint.m"
            {
#line 421 "constraint.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_116_116, (MR_Word) &transform_hlds__constraint_scalar_common_2[4], transform_hlds__constraint__Constraints1_13, &transform_hlds__constraint__Constraints_16);
            }
#line 424 "constraint.m"
            {
#line 424 "constraint.m"
              mercury__list__append_3_p_1(transform_hlds__constraint__TypeInfo_116_116, transform_hlds__constraint__Constraints_16, transform_hlds__constraint__Goals0_4, transform_hlds__constraint__Goals_5);
            }
#line 419 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_Info_7 = transform_hlds__constraint__STATE_VARIABLE_Info_0_6;
#line 419 "constraint.m"
          }
#line 419 "constraint.m"
        else
#line 427 "constraint.m"
          {
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__Conjunct_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__RevConjuncts0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__Goal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 0)));
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 1)));
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__OutputVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 2)));
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 3)));
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__NonLocals_38;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__CI_ModuleInfo0_39;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__GoalCanLoopOrThrow_40;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__CI_ModuleInfo_41;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__Goals1_43;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints1_45;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 427 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_77_77;
#line 430 "constraint.m"
            MR_Word transform_hlds__constraint__GoalExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));
#line 432 "constraint.m"
            MR_Word transform_hlds__constraint__V_101_101;
#line 432 "constraint.m"
            MR_Word transform_hlds__constraint__V_102_102;
#line 432 "constraint.m"
            MR_Word transform_hlds__constraint__V_103_103;
#line 432 "constraint.m"
            MR_Word transform_hlds__constraint__V_104_104;
#line 435 "constraint.m"
            MR_Word transform_hlds__constraint__V_106_106;
#line 435 "constraint.m"
            MR_Word transform_hlds__constraint__V_107_107;
#line 435 "constraint.m"
            MR_Word transform_hlds__constraint__V_108_108;
#line 435 "constraint.m"
            MR_Word transform_hlds__constraint__V_109_109;
#line 435 "constraint.m"
            MR_Word transform_hlds__constraint__V_105_105;
#line 441 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_117_117;
#line 441 "constraint.m"
            MR_Word transform_hlds__constraint__Detism_42;
#line 441 "constraint.m"
            MR_Word transform_hlds__constraint__V_69_69;

#line 431 "constraint.m"
            {
#line 431 "constraint.m"
              transform_hlds__constraint__NonLocals_38 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__GoalInfo_37);
            }
#line 432 "constraint.m"
            transform_hlds__constraint__CI_ModuleInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 432 "constraint.m"
            transform_hlds__constraint__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 432 "constraint.m"
            transform_hlds__constraint__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 432 "constraint.m"
            transform_hlds__constraint__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 432 "constraint.m"
            transform_hlds__constraint__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 433 "constraint.m"
            {
#line 433 "constraint.m"
              hlds__goal_form__goal_can_loop_or_throw_4_p_0(transform_hlds__constraint__Goal_32, &transform_hlds__constraint__GoalCanLoopOrThrow_40, transform_hlds__constraint__CI_ModuleInfo0_39, &transform_hlds__constraint__CI_ModuleInfo_41);
            }
#line 435 "constraint.m"
            transform_hlds__constraint__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 435 "constraint.m"
            transform_hlds__constraint__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 435 "constraint.m"
            transform_hlds__constraint__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 435 "constraint.m"
            transform_hlds__constraint__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 435 "constraint.m"
            transform_hlds__constraint__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 435 "constraint.m"
            {
#line 435 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 435 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 0) = ((MR_Box) (transform_hlds__constraint__CI_ModuleInfo_41));
#line 435 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 1) = ((MR_Box) (transform_hlds__constraint__V_106_106));
#line 435 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 2) = ((MR_Box) (transform_hlds__constraint__V_107_107));
#line 435 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 3) = ((MR_Box) (transform_hlds__constraint__V_108_108));
#line 435 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 4) = ((MR_Box) (transform_hlds__constraint__V_109_109));
#line 435 "constraint.m"
            }
#line 441 "constraint.m"
            {
#line 441 "constraint.m"
              transform_hlds__constraint__Detism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_37);
            }
#line 443 "constraint.m"
#line 443 "constraint.m"
            switch (transform_hlds__constraint__Detism_42) {
#line 443 "constraint.m"
              default:
#line 443 "constraint.m"
                transform_hlds__constraint__succeeded = MR_FALSE;
#line 443 "constraint.m"
                break;
#line 443 "constraint.m"
              case (MR_Integer) 7:
#line 443 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 443 "constraint.m"
                break;
#line 443 "constraint.m"
              case (MR_Integer) 1:
#line 442 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 443 "constraint.m"
                break;
#line 443 "constraint.m"
            }
#line 441 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 441 "constraint.m"
              {
#line 5512 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 448 "constraint.m"
                {
#line 448 "constraint.m"
                  transform_hlds__constraint__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_117_117, transform_hlds__constraint__OutputVars_34);
                }
#line 441 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 441 "constraint.m"
                  {
#line 451 "constraint.m"
                    {
#line 451 "constraint.m"
                      transform_hlds__constraint__V_69_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_37);
                    }
#line 451 "constraint.m"
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_69_69 == (MR_Integer) 0);
#line 441 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 454 "constraint.m"
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalCanLoopOrThrow_40 == (MR_Integer) 1);
#line 441 "constraint.m"
                  }
#line 441 "constraint.m"
              }
#line 436 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 458 "constraint.m"
              {
#line 458 "constraint.m"
                MR_Word transform_hlds__constraint__Constraint_44;

#line 458 "constraint.m"
                transform_hlds__constraint__Goals1_43 = transform_hlds__constraint__Goals0_4;
#line 459 "constraint.m"
                {
#line 459 "constraint.m"
                  transform_hlds__constraint__Constraint_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 459 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 459 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_33));
#line 459 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_35));
#line 459 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "constraint.m"
                }
#line 461 "constraint.m"
                {
#line 461 "constraint.m"
                  transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_45, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_44));
#line 461 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_45, 1) = ((MR_Box) (transform_hlds__constraint__Constraints0_3));
#line 461 "constraint.m"
                }
#line 458 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 458 "constraint.m"
              }
#line 436 "constraint.m"
            else
#line 462 "constraint.m"
              {
#line 462 "constraint.m"
                MR_Word transform_hlds__constraint__ConstructVar_52;
#line 472 "constraint.m"
                MR_Word transform_hlds__constraint__Unify_49;
#line 472 "constraint.m"
                MR_Word transform_hlds__constraint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));
#line 472 "constraint.m"
                MR_Word transform_hlds__constraint__V_73_73;
#line 472 "constraint.m"
                MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 472 "constraint.m"
                MR_Word transform_hlds__constraint__V_46_46;
#line 472 "constraint.m"
                MR_Word transform_hlds__constraint__V_47_47;
#line 472 "constraint.m"
                MR_Word transform_hlds__constraint__V_48_48;
#line 472 "constraint.m"
                MR_Word transform_hlds__constraint__V_50_50;
#line 473 "constraint.m"
                MR_Word transform_hlds__constraint__V_53_53;
#line 473 "constraint.m"
                MR_Word transform_hlds__constraint__V_54_54;
#line 473 "constraint.m"
                MR_Word transform_hlds__constraint__V_55_55;
#line 473 "constraint.m"
                MR_Word transform_hlds__constraint__V_56_56;
#line 473 "constraint.m"
                MR_Word transform_hlds__constraint__V_57_57;

#line 472 "constraint.m"
                transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 472 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 472 "constraint.m"
                  {
#line 472 "constraint.m"
                    transform_hlds__constraint__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 0)));
#line 472 "constraint.m"
                    transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 1)));
#line 472 "constraint.m"
                    transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 2)));
#line 472 "constraint.m"
                    transform_hlds__constraint__Unify_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 3)));
#line 472 "constraint.m"
                    transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 4)));
#line 473 "constraint.m"
                    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__Unify_49)) == (MR_mktag((MR_Integer) 0)));
#line 473 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 473 "constraint.m"
                      {
#line 473 "constraint.m"
                        transform_hlds__constraint__ConstructVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 0)));
#line 473 "constraint.m"
                        transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 1)));
#line 473 "constraint.m"
                        transform_hlds__constraint__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 2)));
#line 473 "constraint.m"
                        transform_hlds__constraint__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 3)));
#line 473 "constraint.m"
                        transform_hlds__constraint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 4)));
#line 473 "constraint.m"
                        transform_hlds__constraint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 5)));
#line 473 "constraint.m"
                        transform_hlds__constraint__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 6)));
#line 473 "constraint.m"
                        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "constraint.m"
                      }
#line 472 "constraint.m"
                  }
#line 462 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 475 "constraint.m"
                  {
#line 475 "constraint.m"
                    MR_Word transform_hlds__constraint__V_74_74;
#line 475 "constraint.m"
                    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_76_76;
#line 481 "constraint.m"
                    MR_Word transform_hlds__constraint__V_110_110;
#line 481 "constraint.m"
                    MR_Word transform_hlds__constraint__V_111_111;
#line 481 "constraint.m"
                    MR_Word transform_hlds__constraint__V_112_112;
#line 481 "constraint.m"
                    MR_Word transform_hlds__constraint__V_113_113;
#line 481 "constraint.m"
                    MR_Word transform_hlds__constraint__V_114_114;

#line 475 "constraint.m"
                    {
#line 475 "constraint.m"
                      transform_hlds__constraint__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_74_74, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 475 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "constraint.m"
                    }
#line 475 "constraint.m"
                    {
#line 475 "constraint.m"
                      transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "constraint.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_74_74));
#line 475 "constraint.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 475 "constraint.m"
                    }
#line 476 "constraint.m"
                    {
#line 476 "constraint.m"
                      transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_52, transform_hlds__constraint__Goal_32, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_45, transform_hlds__constraint__STATE_VARIABLE_Info_68_68, &transform_hlds__constraint__STATE_VARIABLE_Info_76_76);
                    }
#line 481 "constraint.m"
                    transform_hlds__constraint__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 0)));
#line 481 "constraint.m"
                    transform_hlds__constraint__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 1)));
#line 481 "constraint.m"
                    transform_hlds__constraint__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 2)));
#line 481 "constraint.m"
                    transform_hlds__constraint__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 3)));
#line 481 "constraint.m"
                    transform_hlds__constraint__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 4)));
#line 481 "constraint.m"
                    {
#line 481 "constraint.m"
                      transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 481 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 0) = ((MR_Box) (transform_hlds__constraint__V_110_110));
#line 481 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 1) = ((MR_Box) (transform_hlds__constraint__V_111_111));
#line 481 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 2) = ((MR_Box) (transform_hlds__constraint__V_112_112));
#line 481 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 3) = ((MR_Box) (transform_hlds__constraint__V_113_113));
#line 481 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 4) = ((MR_Box) ((MR_Integer) 1));
#line 481 "constraint.m"
                    }
#line 475 "constraint.m"
                  }
#line 462 "constraint.m"
                else
#line 482 "constraint.m"
                  {
#line 485 "constraint.m"
                    MR_Word transform_hlds__constraint__Detism_94;
#line 485 "constraint.m"
                    MR_Word transform_hlds__constraint__V_126_126;
#line 486 "constraint.m"
                    MR_Word transform_hlds__constraint__V_58_58;

#line 485 "constraint.m"
                    {
#line 485 "constraint.m"
                      transform_hlds__constraint__Detism_94 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_37);
                    }
#line 486 "constraint.m"
                    {
#line 486 "constraint.m"
                      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__constraint__Detism_94, &transform_hlds__constraint__V_58_58, &transform_hlds__constraint__V_126_126);
                    }
#line 486 "constraint.m"
                    transform_hlds__constraint__succeeded = ((MR_Integer) 0 == transform_hlds__constraint__V_126_126);
#line 482 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 488 "constraint.m"
                      {
#line 488 "constraint.m"
                        MR_Word transform_hlds__constraint__V_81_81;

#line 488 "constraint.m"
                        {
#line 488 "constraint.m"
                          transform_hlds__constraint__constraint_info_update_changed_3_p_0(transform_hlds__constraint__Constraints0_3, transform_hlds__constraint__STATE_VARIABLE_Info_68_68, &transform_hlds__constraint__STATE_VARIABLE_Info_77_77);
                        }
#line 489 "constraint.m"
                        transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "constraint.m"
                        {
#line 490 "constraint.m"
                          transform_hlds__constraint__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 490 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_81_81, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 490 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 490 "constraint.m"
                        }
#line 490 "constraint.m"
                        {
#line 490 "constraint.m"
                          transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "constraint.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_81_81));
#line 490 "constraint.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 490 "constraint.m"
                        }
#line 488 "constraint.m"
                      }
#line 482 "constraint.m"
                    else
#line 491 "constraint.m"
                      {
#line 494 "constraint.m"
                        MR_Word transform_hlds__constraint__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 494 "constraint.m"
                        MR_Word transform_hlds__constraint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));

#line 494 "constraint.m"
                        {
#line 494 "constraint.m"
                          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(transform_hlds__constraint__GoalInfo_37, transform_hlds__constraint__V_127_127);
                        }
#line 494 "constraint.m"
                        if (transform_hlds__constraint__succeeded)
#line 494 "constraint.m"
                          {
#line 495 "constraint.m"
                            {
#line 495 "constraint.m"
                              MR_Word transform_hlds__constraint__V_84_84;

#line 495 "constraint.m"
                              {
#line 495 "constraint.m"
                                transform_hlds__constraint__V_84_84 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_37);
                              }
#line 495 "constraint.m"
                              transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_84_84 == (MR_Integer) 2);
#line 495 "constraint.m"
                            }
#line 496 "constraint.m"
                            if (!(transform_hlds__constraint__succeeded))
#line 496 "constraint.m"
                              {
#line 496 "constraint.m"
                                {
#line 496 "constraint.m"
                                  transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo_37, (MR_Integer) 17);
                                }
#line 496 "constraint.m"
                              }
#line 494 "constraint.m"
                          }
#line 491 "constraint.m"
                        if (transform_hlds__constraint__succeeded)
#line 499 "constraint.m"
                          {
#line 499 "constraint.m"
                            MR_Word transform_hlds__constraint__TypeInfo_121_121;
#line 499 "constraint.m"
                            MR_Word transform_hlds__constraint__ConstraintGoals_60;
#line 499 "constraint.m"
                            MR_Word transform_hlds__constraint__GoalsAndConstraints_61;
#line 499 "constraint.m"
                            MR_Word transform_hlds__constraint__V_86_86;

#line 499 "constraint.m"
                            transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "constraint.m"
                            {
#line 500 "constraint.m"
                              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__ConstraintGoals_60);
                            }
#line 502 "constraint.m"
                            {
#line 502 "constraint.m"
                              transform_hlds__constraint__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "constraint.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_86_86, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 502 "constraint.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_86_86, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_60));
#line 502 "constraint.m"
                            }
#line 5856 "transform_hlds.constraint.c"
                            transform_hlds__constraint__TypeInfo_121_121 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 502 "constraint.m"
                            {
#line 502 "constraint.m"
                              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_121_121, (MR_Word) &transform_hlds__constraint_scalar_common_2[5], transform_hlds__constraint__V_86_86, &transform_hlds__constraint__GoalsAndConstraints_61);
                            }
#line 504 "constraint.m"
                            {
#line 504 "constraint.m"
                              transform_hlds__constraint__Goals1_43 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeInfo_121_121, transform_hlds__constraint__GoalsAndConstraints_61, transform_hlds__constraint__Goals0_4);
                            }
#line 499 "constraint.m"
                          }
#line 491 "constraint.m"
                        else
#line 505 "constraint.m"
                          {
#line 508 "constraint.m"
                            MR_Word transform_hlds__constraint__Globals_62;
#line 508 "constraint.m"
                            MR_Word transform_hlds__constraint__V_87_87;
#line 508 "constraint.m"
                            MR_Word transform_hlds__constraint__V_88_88;

#line 508 "constraint.m"
                            {
#line 508 "constraint.m"
                              transform_hlds__constraint__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(transform_hlds__constraint__ModuleInfo_1, transform_hlds__constraint__Goal_32);
                            }
#line 508 "constraint.m"
                            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 508 "constraint.m"
                            if (transform_hlds__constraint__succeeded)
#line 508 "constraint.m"
                              {
#line 509 "constraint.m"
                                {
#line 509 "constraint.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__constraint__ModuleInfo_1, &transform_hlds__constraint__Globals_62);
                                }
#line 510 "constraint.m"
                                transform_hlds__constraint__V_87_87 = (MR_Integer) 165;
#line 510 "constraint.m"
                                transform_hlds__constraint__V_88_88 = (MR_Integer) 1;
#line 510 "constraint.m"
                                {
#line 510 "constraint.m"
                                  transform_hlds__constraint__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__constraint__Globals_62, transform_hlds__constraint__V_87_87, transform_hlds__constraint__V_88_88);
                                }
#line 508 "constraint.m"
                              }
#line 505 "constraint.m"
                            if (transform_hlds__constraint__succeeded)
#line 513 "constraint.m"
                              {
#line 513 "constraint.m"
                                MR_Word transform_hlds__constraint__TypeInfo_125_125;
#line 513 "constraint.m"
                                MR_Word transform_hlds__constraint__DependentConstraints_63;
#line 513 "constraint.m"
                                MR_Word transform_hlds__constraint__IndependentConstraints_64;
#line 513 "constraint.m"
                                MR_Word transform_hlds__constraint__IndependentConstraintGoals_65;
#line 513 "constraint.m"
                                MR_Word transform_hlds__constraint__V_90_90;
#line 513 "constraint.m"
                                MR_Word transform_hlds__constraint__V_91_91;
#line 513 "constraint.m"
                                MR_Word transform_hlds__constraint__GoalsAndConstraints_95;

#line 512 "constraint.m"
                                {
#line 512 "constraint.m"
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_38, transform_hlds__constraint__ChangedVars_33, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_63, &transform_hlds__constraint__IndependentConstraints_64);
                                }
#line 514 "constraint.m"
                                {
#line 514 "constraint.m"
                                  transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__IndependentConstraints_64, &transform_hlds__constraint__IndependentConstraintGoals_65);
                                }
#line 5937 "transform_hlds.constraint.c"
                                transform_hlds__constraint__TypeInfo_125_125 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 516 "constraint.m"
                                {
#line 516 "constraint.m"
                                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_125_125, (MR_Word) &transform_hlds__constraint_scalar_common_2[6], transform_hlds__constraint__IndependentConstraintGoals_65, &transform_hlds__constraint__GoalsAndConstraints_95);
                                }
#line 518 "constraint.m"
                                {
#line 518 "constraint.m"
                                  transform_hlds__constraint__V_91_91 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_32, transform_hlds__constraint__DependentConstraints_63);
                                }
#line 519 "constraint.m"
                                {
#line 519 "constraint.m"
                                  transform_hlds__constraint__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_90_90, 0) = ((MR_Box) (transform_hlds__constraint__V_91_91));
#line 519 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_90_90, 1) = ((MR_Box) (transform_hlds__constraint__GoalsAndConstraints_95));
#line 519 "constraint.m"
                                }
#line 519 "constraint.m"
                                {
#line 519 "constraint.m"
                                  transform_hlds__constraint__Goals1_43 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeInfo_125_125, transform_hlds__constraint__V_90_90, transform_hlds__constraint__Goals0_4);
                                }
#line 520 "constraint.m"
                                transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "constraint.m"
                              }
#line 505 "constraint.m"
                            else
#line 523 "constraint.m"
                              {
#line 523 "constraint.m"
                                MR_Word transform_hlds__constraint__V_92_92;
#line 523 "constraint.m"
                                MR_Word transform_hlds__constraint__DependentConstraints_96;

#line 522 "constraint.m"
                                {
#line 522 "constraint.m"
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_38, transform_hlds__constraint__OutputVars_34, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_96, &transform_hlds__constraint__Constraints1_45);
                                }
#line 525 "constraint.m"
                                {
#line 525 "constraint.m"
                                  transform_hlds__constraint__V_92_92 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_32, transform_hlds__constraint__DependentConstraints_96);
                                }
#line 525 "constraint.m"
                                {
#line 525 "constraint.m"
                                  transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_92_92));
#line 525 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 525 "constraint.m"
                                }
#line 523 "constraint.m"
                              }
#line 505 "constraint.m"
                          }
#line 491 "constraint.m"
                        transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 491 "constraint.m"
                      }
#line 482 "constraint.m"
                  }
#line 462 "constraint.m"
              }
#line 527 "constraint.m"
            /* direct tailcall eliminated */
#line 527 "constraint.m"
            {
#line 527 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__2__tmp_copy_2 = transform_hlds__constraint__RevConjuncts0_27;
#line 527 "constraint.m"
              MR_Word transform_hlds__constraint__Constraints0__tmp_copy_3 = transform_hlds__constraint__Constraints1_45;
#line 527 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0__tmp_copy_4 = transform_hlds__constraint__Goals1_43;
#line 527 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_6 = transform_hlds__constraint__STATE_VARIABLE_Info_77_77;

#line 527 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_0_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_6;
#line 527 "constraint.m"
              transform_hlds__constraint__Goals0_4 = transform_hlds__constraint__Goals0__tmp_copy_4;
#line 527 "constraint.m"
              transform_hlds__constraint__Constraints0_3 = transform_hlds__constraint__Constraints0__tmp_copy_3;
#line 527 "constraint.m"
              transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__2__tmp_copy_2;
#line 527 "constraint.m"
            }
#line 527 "constraint.m"
            continue;
#line 427 "constraint.m"
          }
#line 419 "constraint.m"
      }
#line 419 "constraint.m"
      break;
#line 419 "constraint.m"
    }
#line 415 "constraint.m"
}

#line 341 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
#line 341 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 341 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 341 "constraint.m"
{
#line 341 "constraint.m"
  {
#line 341 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 341 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

#line 341 "constraint.m"
    {
#line 341 "constraint.m"
      transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__341__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 341 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 341 "constraint.m"
  }
#line 341 "constraint.m"
}

#line 327 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
#line 327 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 327 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 327 "constraint.m"
{
#line 327 "constraint.m"
  {
#line 327 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 327 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

#line 327 "constraint.m"
    {
#line 327 "constraint.m"
      transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__327__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 327 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 327 "constraint.m"
  }
#line 327 "constraint.m"
}

#line 306 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 306 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5,
#line 306 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevGoals_6)
#line 306 "constraint.m"
{
#line 309 "constraint.m"
  while (MR_TRUE)
#line 309 "constraint.m"
    {
#line 309 "constraint.m"
      /* tailcall optimized into a loop */
#line 309 "constraint.m"
      {
#line 309 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 309 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_RevGoals_6 = transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5;
#line 309 "constraint.m"
        else
#line 311 "constraint.m"
          {
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_54_54;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_55_55;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 1)));
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapDelta_21;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap_22;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars0_23;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapVars_24;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__InCompatible_25;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_30;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__Bound_31;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__BoundVars_32;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars_33;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__AnnotatedConjunct_34;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__V_38_38;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40;
#line 311 "constraint.m"
            MR_Word transform_hlds__constraint__V_41_41;
#line 312 "constraint.m"
            MR_Word transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 0)));

#line 313 "constraint.m"
            {
#line 313 "constraint.m"
              transform_hlds__constraint__InstMapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_20);
            }
#line 315 "constraint.m"
            {
#line 315 "constraint.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMapDelta_21, &transform_hlds__constraint__InstMap_22);
            }
#line 316 "constraint.m"
            {
#line 316 "constraint.m"
              hlds__instmap__instmap_changed_vars_5_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMap_22, transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__ModuleInfo_2, &transform_hlds__constraint__ChangedVars0_23);
            }
#line 319 "constraint.m"
            {
#line 319 "constraint.m"
              hlds__instmap__instmap_vars_list_2_p_0(transform_hlds__constraint__InstMap_22, &transform_hlds__constraint__InstMapVars_24);
            }
#line 327 "constraint.m"
            {
#line 327 "constraint.m"
              transform_hlds__constraint__InCompatible_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 327 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
#line 327 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1));
#line 327 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 327 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
#line 327 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
#line 327 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
#line 327 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
#line 327 "constraint.m"
            }
#line 6216 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 6218 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_55_55 = (MR_Word) &transform_hlds__constraint_scalar_common_1[2];
#line 335 "constraint.m"
            {
#line 335 "constraint.m"
              transform_hlds__constraint__V_38_38 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__InCompatible_25, transform_hlds__constraint__InstMapVars_24);
            }
#line 334 "constraint.m"
            {
#line 334 "constraint.m"
              transform_hlds__constraint__IncompatibleInstVars_30 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__V_38_38);
            }
#line 341 "constraint.m"
            {
#line 341 "constraint.m"
              transform_hlds__constraint__Bound_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 341 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
#line 341 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2));
#line 341 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 341 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
#line 341 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
#line 341 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
#line 341 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
#line 341 "constraint.m"
            }
#line 348 "constraint.m"
            {
#line 348 "constraint.m"
              transform_hlds__constraint__V_40_40 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__Bound_31, transform_hlds__constraint__InstMapVars_24);
            }
#line 348 "constraint.m"
            {
#line 348 "constraint.m"
              transform_hlds__constraint__BoundVars_32 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__V_40_40);
            }
#line 353 "constraint.m"
            {
#line 353 "constraint.m"
              parse_tree__set_of_var__union_3_p_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__ChangedVars0_23, transform_hlds__constraint__BoundVars_32, &transform_hlds__constraint__ChangedVars_33);
            }
#line 355 "constraint.m"
            {
#line 355 "constraint.m"
              transform_hlds__constraint__AnnotatedConjunct_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 355 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 0) = ((MR_Box) (transform_hlds__constraint__Goal_13));
#line 355 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_33));
#line 355 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 2) = ((MR_Box) (transform_hlds__constraint__BoundVars_32));
#line 355 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 3) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_30));
#line 355 "constraint.m"
            }
#line 358 "constraint.m"
            {
#line 358 "constraint.m"
              transform_hlds__constraint__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_41_41, 0) = ((MR_Box) (transform_hlds__constraint__AnnotatedConjunct_34));
#line 358 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_41_41, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5));
#line 358 "constraint.m"
            }
#line 357 "constraint.m"
            /* direct tailcall eliminated */
#line 357 "constraint.m"
            {
#line 357 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Goals_14;
#line 357 "constraint.m"
              MR_Word transform_hlds__constraint__InstMap0__tmp_copy_4 = transform_hlds__constraint__InstMap_22;
#line 357 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0__tmp_copy_5 = transform_hlds__constraint__V_41_41;

#line 357 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5 = transform_hlds__constraint__STATE_VARIABLE_RevGoals_0__tmp_copy_5;
#line 357 "constraint.m"
              transform_hlds__constraint__InstMap0_4 = transform_hlds__constraint__InstMap0__tmp_copy_4;
#line 357 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 357 "constraint.m"
            }
#line 357 "constraint.m"
            continue;
#line 311 "constraint.m"
          }
#line 309 "constraint.m"
      }
#line 309 "constraint.m"
      break;
#line 309 "constraint.m"
    }
#line 306 "constraint.m"
}

#line 234 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
#line 234 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 234 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 234 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 234 "constraint.m"
{
#line 234 "constraint.m"
  {
#line 234 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 234 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_LambdaHeadVar__2_15;

#line 234 "constraint.m"
    {
#line 234 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__234__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_LambdaHeadVar__2_15);
    }
#line 234 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_LambdaHeadVar__2_15));
#line 234 "constraint.m"
  }
#line 234 "constraint.m"
}

#line 277 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
#line 277 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_6,
#line 277 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 277 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 277 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_17,
#line 277 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_18)
#line 277 "constraint.m"
{
#line 280 "constraint.m"
  {
#line 280 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 280 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_19_19;

#line 807 "constraint.m"
    if ((transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 807 "constraint.m"
      transform_hlds__constraint__STATE_VARIABLE_Info_19_19 = transform_hlds__constraint__STATE_VARIABLE_Info_0_17;
#line 807 "constraint.m"
    else
#line 809 "constraint.m"
      {
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 810 "constraint.m"
        MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));

#line 810 "constraint.m"
        {
#line 810 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 0) = ((MR_Box) (transform_hlds__constraint__V_47_47));
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (transform_hlds__constraint__V_48_48));
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (transform_hlds__constraint__V_49_49));
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (transform_hlds__constraint__V_50_50));
#line 810 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) ((MR_Integer) 1));
#line 810 "constraint.m"
        }
#line 809 "constraint.m"
      }
#line 285 "constraint.m"
    if ((transform_hlds__constraint__Goals0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "constraint.m"
      {
#line 283 "constraint.m"
        MR_Word transform_hlds__constraint__GoalLists0_60;
#line 283 "constraint.m"
        MR_Word transform_hlds__constraint__GoalLists_61;

#line 234 "constraint.m"
        {
#line 234 "constraint.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[1], (MR_Word) &transform_hlds__constraint_scalar_common_2[3], transform_hlds__constraint__Constraints_7, &transform_hlds__constraint__GoalLists0_60);
        }
#line 238 "constraint.m"
        {
#line 238 "constraint.m"
          mercury__list__condense_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__GoalLists0_60, &transform_hlds__constraint__GoalLists_61);
        }
#line 239 "constraint.m"
        {
#line 239 "constraint.m"
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalLists_61, transform_hlds__constraint__Goals_8);
        }
#line 283 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_18 = transform_hlds__constraint__STATE_VARIABLE_Info_19_19;
#line 283 "constraint.m"
      }
#line 285 "constraint.m"
    else
#line 286 "constraint.m"
      {
#line 286 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_6, (MR_Integer) 0)));
#line 286 "constraint.m"
        MR_Word transform_hlds__constraint__GoalsTail0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_6, (MR_Integer) 1)));

#line 288 "constraint.m"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalsTail0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 289 "constraint.m"
          transform_hlds__constraint__succeeded = (transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 291 "constraint.m"
          {
#line 291 "constraint.m"
            {
#line 291 "constraint.m"
              transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(transform_hlds__constraint__Goal0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_19_19, transform_hlds__constraint__STATE_VARIABLE_Info_18);
            }
#line 291 "constraint.m"
          }
#line 287 "constraint.m"
        else
#line 293 "constraint.m"
          {
#line 293 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 293 "constraint.m"
            MR_Word transform_hlds__constraint__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 293 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 1)));
#line 293 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoals1_15;
#line 293 "constraint.m"
            MR_Word transform_hlds__constraint__Goals2_16;
#line 293 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_24_24;
#line 293 "constraint.m"
            MR_Word transform_hlds__constraint__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 293 "constraint.m"
            MR_Word transform_hlds__constraint__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));

#line 296 "constraint.m"
            {
#line 296 "constraint.m"
              transform_hlds__constraint__annotate_conj_output_vars_6_p_0(transform_hlds__constraint__Goals0_6, transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__VarTypes_14, transform_hlds__constraint__InstMap0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevGoals1_15);
            }
#line 298 "constraint.m"
            {
#line 298 "constraint.m"
              transform_hlds__constraint__annotate_conj_constraints_7_p_0(transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__RevGoals1_15, transform_hlds__constraint__Constraints_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Goals2_16, transform_hlds__constraint__STATE_VARIABLE_Info_19_19, &transform_hlds__constraint__STATE_VARIABLE_Info_24_24);
            }
#line 300 "constraint.m"
            {
#line 300 "constraint.m"
              transform_hlds__constraint__propagate_conj_constraints_5_p_0(transform_hlds__constraint__Goals2_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_24_24, transform_hlds__constraint__STATE_VARIABLE_Info_18);
            }
#line 293 "constraint.m"
          }
#line 286 "constraint.m"
      }
#line 280 "constraint.m"
  }
#line 277 "constraint.m"
}

#line 256 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
#line 256 "constraint.m"
  MR_Word transform_hlds__constraint__Var_1,
#line 256 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 256 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 256 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 256 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 256 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
#line 256 "constraint.m"
{
#line 260 "constraint.m"
  {
#line 260 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 260 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "constraint.m"
      {
#line 260 "constraint.m"
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 260 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 260 "constraint.m"
      }
#line 260 "constraint.m"
    else
#line 261 "constraint.m"
      {
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__Case_16;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__Cases_17;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 0)));
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 1)));
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 2)));
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__Goal_23;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_26_26;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_28_28;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__ModuleInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__VarTypes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__Type_48;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap_49;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__ModuleInfo_50;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__V_66_66;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__V_67_67;
#line 261 "constraint.m"
        MR_Word transform_hlds__constraint__V_69_69;
#line 263 "constraint.m"
        MR_Word transform_hlds__constraint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 263 "constraint.m"
        MR_Word transform_hlds__constraint__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 795 "constraint.m"
        MR_Word transform_hlds__constraint__V_65_65;
#line 795 "constraint.m"
        MR_Word transform_hlds__constraint__V_68_68;
#line 266 "constraint.m"
        MR_Word transform_hlds__constraint__V_34_34;
#line 266 "constraint.m"
        MR_Word transform_hlds__constraint__V_35_35;
#line 266 "constraint.m"
        MR_Word transform_hlds__constraint__V_36_36;
#line 266 "constraint.m"
        MR_Word transform_hlds__constraint__V_38_38;
#line 266 "constraint.m"
        MR_Word transform_hlds__constraint__V_37_37;

#line 792 "constraint.m"
        {
#line 792 "constraint.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_47, transform_hlds__constraint__Var_1, &transform_hlds__constraint__Type_48);
        }
#line 793 "constraint.m"
        {
#line 793 "constraint.m"
          hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Type_48, transform_hlds__constraint__MainConsId_19, transform_hlds__constraint__OtherConsIds_20, transform_hlds__constraint__InstMap0_45, &transform_hlds__constraint__InstMap_49, transform_hlds__constraint__ModuleInfo0_46, &transform_hlds__constraint__ModuleInfo_50);
        }
#line 795 "constraint.m"
        transform_hlds__constraint__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 795 "constraint.m"
        transform_hlds__constraint__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 795 "constraint.m"
        transform_hlds__constraint__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 795 "constraint.m"
        transform_hlds__constraint__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 795 "constraint.m"
        transform_hlds__constraint__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 796 "constraint.m"
        {
#line 796 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 796 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_50));
#line 796 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (transform_hlds__constraint__V_66_66));
#line 796 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (transform_hlds__constraint__V_67_67));
#line 796 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_49));
#line 796 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 4) = ((MR_Box) (transform_hlds__constraint__V_69_69));
#line 796 "constraint.m"
        }
#line 265 "constraint.m"
        {
#line 265 "constraint.m"
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal0_21, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goal_23, transform_hlds__constraint__STATE_VARIABLE_Info_26_26, &transform_hlds__constraint__STATE_VARIABLE_Info_27_27);
        }
#line 266 "constraint.m"
        transform_hlds__constraint__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 266 "constraint.m"
        transform_hlds__constraint__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 266 "constraint.m"
        transform_hlds__constraint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 266 "constraint.m"
        transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 266 "constraint.m"
        transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 266 "constraint.m"
        {
#line 266 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 266 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (transform_hlds__constraint__V_34_34));
#line 266 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (transform_hlds__constraint__V_35_35));
#line 266 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (transform_hlds__constraint__V_36_36));
#line 266 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_45));
#line 266 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (transform_hlds__constraint__V_38_38));
#line 266 "constraint.m"
        }
#line 267 "constraint.m"
        {
#line 267 "constraint.m"
          transform_hlds__constraint__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 267 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_19));
#line 267 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_20));
#line 267 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 2) = ((MR_Box) (transform_hlds__constraint__Goal_23));
#line 267 "constraint.m"
        }
#line 268 "constraint.m"
        {
#line 268 "constraint.m"
          transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Constraints_2, transform_hlds__constraint__Cases0_15, &transform_hlds__constraint__Cases_17, transform_hlds__constraint__STATE_VARIABLE_Info_28_28, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
#line 261 "constraint.m"
        {
#line 261 "constraint.m"
          MR_Word base;
#line 261 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "constraint.m"
          *transform_hlds__constraint__HeadVar__4_4 = base;
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Case_16));
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Cases_17));
#line 261 "constraint.m"
        }
#line 261 "constraint.m"
      }
#line 260 "constraint.m"
  }
#line 256 "constraint.m"
}

#line 243 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
#line 243 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 243 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 243 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 243 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 243 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
#line 243 "constraint.m"
{
#line 246 "constraint.m"
  {
#line 246 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 246 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 246 "constraint.m"
      {
#line 246 "constraint.m"
        *transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 246 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 246 "constraint.m"
      }
#line 246 "constraint.m"
    else
#line 248 "constraint.m"
      {
#line 248 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "constraint.m"
        MR_Word transform_hlds__constraint__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "constraint.m"
        MR_Word transform_hlds__constraint__Goal_13;
#line 248 "constraint.m"
        MR_Word transform_hlds__constraint__Goals_14;
#line 248 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 248 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_19_19;
#line 248 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_20_20;
#line 249 "constraint.m"
        MR_Word transform_hlds__constraint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 249 "constraint.m"
        MR_Word transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 249 "constraint.m"
        MR_Word transform_hlds__constraint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 249 "constraint.m"
        MR_Word transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 251 "constraint.m"
        MR_Word transform_hlds__constraint__V_26_26;
#line 251 "constraint.m"
        MR_Word transform_hlds__constraint__V_27_27;
#line 251 "constraint.m"
        MR_Word transform_hlds__constraint__V_28_28;
#line 251 "constraint.m"
        MR_Word transform_hlds__constraint__V_30_30;
#line 251 "constraint.m"
        MR_Word transform_hlds__constraint__V_29_29;

#line 250 "constraint.m"
        {
#line 250 "constraint.m"
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal0_10, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goal_13, transform_hlds__constraint__STATE_VARIABLE_Info_0_4, &transform_hlds__constraint__STATE_VARIABLE_Info_19_19);
        }
#line 251 "constraint.m"
        transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 251 "constraint.m"
        transform_hlds__constraint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 1)));
#line 251 "constraint.m"
        transform_hlds__constraint__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 251 "constraint.m"
        transform_hlds__constraint__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 251 "constraint.m"
        transform_hlds__constraint__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 251 "constraint.m"
        {
#line 251 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 251 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (transform_hlds__constraint__V_26_26));
#line 251 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 1) = ((MR_Box) (transform_hlds__constraint__V_27_27));
#line 251 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (transform_hlds__constraint__V_28_28));
#line 251 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_16));
#line 251 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (transform_hlds__constraint__V_30_30));
#line 251 "constraint.m"
        }
#line 252 "constraint.m"
        {
#line 252 "constraint.m"
          transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_11, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goals_14, transform_hlds__constraint__STATE_VARIABLE_Info_20_20, transform_hlds__constraint__STATE_VARIABLE_Info_5);
        }
#line 247 "constraint.m"
        {
#line 247 "constraint.m"
          MR_Word base;
#line 247 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "constraint.m"
          *transform_hlds__constraint__HeadVar__3_3 = base;
#line 247 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_13));
#line 247 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Goals_14));
#line 247 "constraint.m"
        }
#line 248 "constraint.m"
      }
#line 246 "constraint.m"
  }
#line 243 "constraint.m"
}

#line 234 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
#line 234 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 234 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 234 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 234 "constraint.m"
{
#line 234 "constraint.m"
  {
#line 234 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 234 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_LambdaHeadVar__2_15;

#line 234 "constraint.m"
    {
#line 234 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__234__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_LambdaHeadVar__2_15);
    }
#line 234 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_LambdaHeadVar__2_15));
#line 234 "constraint.m"
  }
#line 234 "constraint.m"
}

#line 231 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
#line 231 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 231 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_4)
#line 231 "constraint.m"
{
#line 233 "constraint.m"
  {
#line 233 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 233 "constraint.m"
    MR_Word transform_hlds__constraint__GoalLists0_11;
#line 233 "constraint.m"
    MR_Word transform_hlds__constraint__GoalLists_12;

#line 234 "constraint.m"
    {
#line 234 "constraint.m"
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[1], (MR_Word) &transform_hlds__constraint_scalar_common_2[2], transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__GoalLists0_11);
    }
#line 238 "constraint.m"
    {
#line 238 "constraint.m"
      mercury__list__condense_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__GoalLists0_11, &transform_hlds__constraint__GoalLists_12);
    }
#line 239 "constraint.m"
    {
#line 239 "constraint.m"
      mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalLists_12, transform_hlds__constraint__Goals_4);
    }
#line 233 "constraint.m"
  }
#line 231 "constraint.m"
}

#line 125 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
#line 125 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 125 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 125 "constraint.m"
  MR_Word * transform_hlds__constraint__FinalGoals_9,
#line 125 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_79,
#line 125 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_80)
#line 125 "constraint.m"
{
#line 129 "constraint.m"
  {
#line 129 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 129 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));

#line 146 "constraint.m"
#line 146 "constraint.m"
    switch (MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) {
#line 146 "constraint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 146 "constraint.m"
      case (MR_Integer) 0:
#line 206 "constraint.m"
        {
#line 206 "constraint.m"
          MR_Word transform_hlds__constraint__NegGoal0_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_6), (MR_Integer) 0);
#line 206 "constraint.m"
          MR_Word transform_hlds__constraint__NegGoal_54;
#line 206 "constraint.m"
          MR_Word transform_hlds__constraint__V_87_87;
#line 206 "constraint.m"
          MR_Word transform_hlds__constraint__V_88_88;
#line 206 "constraint.m"
          MR_Word transform_hlds__constraint__ConstraintGoals_135;

#line 209 "constraint.m"
          {
#line 209 "constraint.m"
            transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__NegGoal0_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__NegGoal_54, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
          }
#line 210 "constraint.m"
          {
#line 210 "constraint.m"
            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_135);
          }
#line 211 "constraint.m"
          transform_hlds__constraint__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__NegGoal_54);
#line 211 "constraint.m"
          {
#line 211 "constraint.m"
            transform_hlds__constraint__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_87_87, 0) = ((MR_Box) (transform_hlds__constraint__V_88_88));
#line 211 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_87_87, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 211 "constraint.m"
          }
#line 211 "constraint.m"
          {
#line 211 "constraint.m"
            MR_Word base;
#line 211 "constraint.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "constraint.m"
            *transform_hlds__constraint__FinalGoals_9 = base;
#line 211 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_87_87));
#line 211 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_135));
#line 211 "constraint.m"
          }
#line 206 "constraint.m"
        }
#line 146 "constraint.m"
        break;
#line 146 "constraint.m"
      case (MR_Integer) 1:
#line 146 "constraint.m"
      case (MR_Integer) 2:
#line 217 "constraint.m"
        {
#line 217 "constraint.m"
          MR_Word transform_hlds__constraint__ConstraintGoals_136;

#line 220 "constraint.m"
          {
#line 220 "constraint.m"
            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_136);
          }
#line 221 "constraint.m"
          {
#line 221 "constraint.m"
            MR_Word base;
#line 221 "constraint.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "constraint.m"
            *transform_hlds__constraint__FinalGoals_9 = base;
#line 221 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 221 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_136));
#line 221 "constraint.m"
          }
#line 217 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_Info_80 = transform_hlds__constraint__STATE_VARIABLE_Info_0_79;
#line 217 "constraint.m"
        }
#line 146 "constraint.m"
        break;
#line 146 "constraint.m"
      case (MR_Integer) 3:
#line 146 "constraint.m"
#line 146 "constraint.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 0)))) {
#line 146 "constraint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 146 "constraint.m"
          case (MR_Integer) 0:
#line 146 "constraint.m"
          case (MR_Integer) 1:
#line 217 "constraint.m"
            {
#line 217 "constraint.m"
              MR_Word transform_hlds__constraint__ConstraintGoals_136;

#line 220 "constraint.m"
              {
#line 220 "constraint.m"
                transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_136);
              }
#line 221 "constraint.m"
              {
#line 221 "constraint.m"
                MR_Word base;
#line 221 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 221 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 221 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_136));
#line 221 "constraint.m"
              }
#line 217 "constraint.m"
              *transform_hlds__constraint__STATE_VARIABLE_Info_80 = transform_hlds__constraint__STATE_VARIABLE_Info_0_79;
#line 217 "constraint.m"
            }
#line 146 "constraint.m"
            break;
#line 146 "constraint.m"
          case (MR_Integer) 2:
#line 131 "constraint.m"
            {
#line 131 "constraint.m"
              MR_Word transform_hlds__constraint__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 131 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));

#line 136 "constraint.m"
#line 136 "constraint.m"
              switch (transform_hlds__constraint__ConjType_11) {
#line 136 "constraint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 136 "constraint.m"
                case (MR_Integer) 1:
#line 137 "constraint.m"
                  {
#line 137 "constraint.m"
                    MR_Word transform_hlds__constraint__MoreGoals_14;
#line 137 "constraint.m"
                    MR_Word transform_hlds__constraint__V_124_124;
#line 137 "constraint.m"
                    MR_Word transform_hlds__constraint__V_125_125;
#line 137 "constraint.m"
                    MR_Word transform_hlds__constraint__Goals_130;

#line 141 "constraint.m"
                    {
#line 141 "constraint.m"
                      transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__MoreGoals_14);
                    }
#line 142 "constraint.m"
                    {
#line 142 "constraint.m"
                      transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Goals_130, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 143 "constraint.m"
                    {
#line 143 "constraint.m"
                      transform_hlds__constraint__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 143 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 143 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_125_125, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_11));
#line 143 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_125_125, 2) = ((MR_Box) (transform_hlds__constraint__Goals_130));
#line 143 "constraint.m"
                    }
#line 143 "constraint.m"
                    {
#line 143 "constraint.m"
                      transform_hlds__constraint__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 143 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_124_124, 0) = ((MR_Box) (transform_hlds__constraint__V_125_125));
#line 143 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_124_124, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 143 "constraint.m"
                    }
#line 143 "constraint.m"
                    {
#line 143 "constraint.m"
                      MR_Word base;
#line 143 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 143 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_124_124));
#line 143 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__MoreGoals_14));
#line 143 "constraint.m"
                    }
#line 137 "constraint.m"
                  }
#line 136 "constraint.m"
                  break;
#line 136 "constraint.m"
                case (MR_Integer) 0:
#line 133 "constraint.m"
                  {
#line 133 "constraint.m"
                    MR_Word transform_hlds__constraint__Goals_13;
#line 133 "constraint.m"
                    MR_Word transform_hlds__constraint__V_127_127;
#line 133 "constraint.m"
                    MR_Word transform_hlds__constraint__V_128_128;

#line 134 "constraint.m"
                    {
#line 134 "constraint.m"
                      transform_hlds__constraint__propagate_conj_5_p_0(transform_hlds__constraint__Goals0_12, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Goals_13, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 135 "constraint.m"
                    {
#line 135 "constraint.m"
                      transform_hlds__constraint__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 135 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 135 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_128_128, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_11));
#line 135 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_128_128, 2) = ((MR_Box) (transform_hlds__constraint__Goals_13));
#line 135 "constraint.m"
                    }
#line 135 "constraint.m"
                    {
#line 135 "constraint.m"
                      transform_hlds__constraint__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 135 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_127_127, 0) = ((MR_Box) (transform_hlds__constraint__V_128_128));
#line 135 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_127_127, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 135 "constraint.m"
                    }
#line 135 "constraint.m"
                    {
#line 135 "constraint.m"
                      MR_Word base;
#line 135 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 135 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_127_127));
#line 135 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 135 "constraint.m"
                    }
#line 133 "constraint.m"
                  }
#line 136 "constraint.m"
                  break;
#line 136 "constraint.m"
              }
#line 131 "constraint.m"
            }
#line 146 "constraint.m"
            break;
#line 146 "constraint.m"
          case (MR_Integer) 3:
#line 147 "constraint.m"
            {
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__V_119_119;
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__V_120_120;
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_132;

#line 148 "constraint.m"
              {
#line 148 "constraint.m"
                transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_131, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Goals_132, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
              }
#line 149 "constraint.m"
              {
#line 149 "constraint.m"
                transform_hlds__constraint__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_120_120, 1) = ((MR_Box) (transform_hlds__constraint__Goals_132));
#line 149 "constraint.m"
              }
#line 149 "constraint.m"
              {
#line 149 "constraint.m"
                transform_hlds__constraint__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_119_119, 0) = ((MR_Box) (transform_hlds__constraint__V_120_120));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_119_119, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 149 "constraint.m"
              }
#line 149 "constraint.m"
              {
#line 149 "constraint.m"
                MR_Word base;
#line 149 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_119_119));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "constraint.m"
              }
#line 147 "constraint.m"
            }
#line 146 "constraint.m"
            break;
#line 146 "constraint.m"
          case (MR_Integer) 4:
#line 151 "constraint.m"
            {
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__CanFail_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 3)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Cases_18;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_115_115;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_116_116;

#line 152 "constraint.m"
              {
#line 152 "constraint.m"
                transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_15, transform_hlds__constraint__Constraints_8, transform_hlds__constraint__Cases0_17, &transform_hlds__constraint__Cases_18, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
              }
#line 153 "constraint.m"
              {
#line 153 "constraint.m"
                transform_hlds__constraint__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 153 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 153 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 1) = ((MR_Box) (transform_hlds__constraint__Var_15));
#line 153 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_16));
#line 153 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 3) = ((MR_Box) (transform_hlds__constraint__Cases_18));
#line 153 "constraint.m"
              }
#line 153 "constraint.m"
              {
#line 153 "constraint.m"
                transform_hlds__constraint__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 153 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_115_115, 0) = ((MR_Box) (transform_hlds__constraint__V_116_116));
#line 153 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_115_115, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 153 "constraint.m"
              }
#line 153 "constraint.m"
              {
#line 153 "constraint.m"
                MR_Word base;
#line 153 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 153 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_115_115));
#line 153 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "constraint.m"
              }
#line 151 "constraint.m"
            }
#line 146 "constraint.m"
            break;
#line 146 "constraint.m"
          case (MR_Integer) 5:
#line 168 "constraint.m"
            {
#line 168 "constraint.m"
              MR_Word transform_hlds__constraint__Reason_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 168 "constraint.m"
              MR_Word transform_hlds__constraint__SubGoal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));

#line 176 "constraint.m"
#line 176 "constraint.m"
              switch (MR_tag((MR_Word) transform_hlds__constraint__Reason_27)) {
#line 176 "constraint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 176 "constraint.m"
                case (MR_Integer) 0:
#line 173 "constraint.m"
                  {
#line 173 "constraint.m"
                    MR_Word transform_hlds__constraint__SubGoal_32;
#line 173 "constraint.m"
                    MR_Word transform_hlds__constraint__V_102_102;
#line 173 "constraint.m"
                    MR_Word transform_hlds__constraint__V_103_103;

#line 174 "constraint.m"
                    {
#line 174 "constraint.m"
                      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_32, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 175 "constraint.m"
                    {
#line 175 "constraint.m"
                      transform_hlds__constraint__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 175 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 175 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_103_103, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 175 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_103_103, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_32));
#line 175 "constraint.m"
                    }
#line 175 "constraint.m"
                    {
#line 175 "constraint.m"
                      transform_hlds__constraint__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 175 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_102_102, 0) = ((MR_Box) (transform_hlds__constraint__V_103_103));
#line 175 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_102_102, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 175 "constraint.m"
                    }
#line 175 "constraint.m"
                    {
#line 175 "constraint.m"
                      MR_Word base;
#line 175 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 175 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_102_102));
#line 175 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "constraint.m"
                    }
#line 173 "constraint.m"
                  }
#line 176 "constraint.m"
                  break;
#line 176 "constraint.m"
                case (MR_Integer) 1:
#line 176 "constraint.m"
                case (MR_Integer) 2:
#line 183 "constraint.m"
                  {
#line 183 "constraint.m"
                    MR_Word transform_hlds__constraint__ConstraintGoals_46;
#line 183 "constraint.m"
                    MR_Word transform_hlds__constraint__V_97_97;
#line 183 "constraint.m"
                    MR_Word transform_hlds__constraint__V_98_98;
#line 183 "constraint.m"
                    MR_Word transform_hlds__constraint__SubGoal_133;

#line 186 "constraint.m"
                    {
#line 186 "constraint.m"
                      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__SubGoal_133, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 187 "constraint.m"
                    {
#line 187 "constraint.m"
                      transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_46);
                    }
#line 188 "constraint.m"
                    {
#line 188 "constraint.m"
                      transform_hlds__constraint__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 188 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 188 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 188 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_133));
#line 188 "constraint.m"
                    }
#line 188 "constraint.m"
                    {
#line 188 "constraint.m"
                      transform_hlds__constraint__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 188 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 0) = ((MR_Box) (transform_hlds__constraint__V_98_98));
#line 188 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 188 "constraint.m"
                    }
#line 188 "constraint.m"
                    {
#line 188 "constraint.m"
                      MR_Word base;
#line 188 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 188 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_97_97));
#line 188 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_46));
#line 188 "constraint.m"
                    }
#line 183 "constraint.m"
                  }
#line 176 "constraint.m"
                  break;
#line 176 "constraint.m"
                case (MR_Integer) 3:
#line 176 "constraint.m"
#line 176 "constraint.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 0)))) {
#line 176 "constraint.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 176 "constraint.m"
                    case (MR_Integer) 0:
#line 195 "constraint.m"
                      {
#line 197 "constraint.m"
                        {
#line 197 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 197 "constraint.m"
                          return;
                        }
#line 195 "constraint.m"
                      }
#line 176 "constraint.m"
                      break;
#line 176 "constraint.m"
                    case (MR_Integer) 1:
#line 195 "constraint.m"
                      {
#line 197 "constraint.m"
                        {
#line 197 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 197 "constraint.m"
                          return;
                        }
#line 195 "constraint.m"
                      }
#line 176 "constraint.m"
                      break;
#line 176 "constraint.m"
                    case (MR_Integer) 2:
#line 195 "constraint.m"
                      {
#line 197 "constraint.m"
                        {
#line 197 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 197 "constraint.m"
                          return;
                        }
#line 195 "constraint.m"
                      }
#line 176 "constraint.m"
                      break;
#line 176 "constraint.m"
                    case (MR_Integer) 3:
#line 176 "constraint.m"
                    case (MR_Integer) 4:
#line 176 "constraint.m"
                    case (MR_Integer) 6:
#line 176 "constraint.m"
                    case (MR_Integer) 7:
#line 183 "constraint.m"
                      {
#line 183 "constraint.m"
                        MR_Word transform_hlds__constraint__ConstraintGoals_46;
#line 183 "constraint.m"
                        MR_Word transform_hlds__constraint__V_97_97;
#line 183 "constraint.m"
                        MR_Word transform_hlds__constraint__V_98_98;
#line 183 "constraint.m"
                        MR_Word transform_hlds__constraint__SubGoal_133;

#line 186 "constraint.m"
                        {
#line 186 "constraint.m"
                          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__SubGoal_133, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                        }
#line 187 "constraint.m"
                        {
#line 187 "constraint.m"
                          transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_46);
                        }
#line 188 "constraint.m"
                        {
#line 188 "constraint.m"
                          transform_hlds__constraint__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 188 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 188 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 188 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_133));
#line 188 "constraint.m"
                        }
#line 188 "constraint.m"
                        {
#line 188 "constraint.m"
                          transform_hlds__constraint__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 188 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 0) = ((MR_Box) (transform_hlds__constraint__V_98_98));
#line 188 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 188 "constraint.m"
                        }
#line 188 "constraint.m"
                        {
#line 188 "constraint.m"
                          MR_Word base;
#line 188 "constraint.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "constraint.m"
                          *transform_hlds__constraint__FinalGoals_9 = base;
#line 188 "constraint.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_97_97));
#line 188 "constraint.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_46));
#line 188 "constraint.m"
                        }
#line 183 "constraint.m"
                      }
#line 176 "constraint.m"
                      break;
#line 176 "constraint.m"
                    case (MR_Integer) 5:
#line 176 "constraint.m"
                      {
#line 176 "constraint.m"
                        MR_Word transform_hlds__constraint__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 2)));
#line 199 "constraint.m"
                        MR_Word transform_hlds__constraint__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 1)));

#line 176 "constraint.m"
#line 176 "constraint.m"
                        switch (transform_hlds__constraint__V_167_167) {
#line 176 "constraint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 176 "constraint.m"
                          case (MR_Integer) 1:
#line 199 "constraint.m"
                            {
#line 199 "constraint.m"
                              MR_Word transform_hlds__constraint__ConstraintGoals_134;

#line 202 "constraint.m"
                              {
#line 202 "constraint.m"
                                transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_134);
                              }
#line 203 "constraint.m"
                              {
#line 203 "constraint.m"
                                MR_Word base;
#line 203 "constraint.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "constraint.m"
                                *transform_hlds__constraint__FinalGoals_9 = base;
#line 203 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 203 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_134));
#line 203 "constraint.m"
                              }
#line 199 "constraint.m"
                              *transform_hlds__constraint__STATE_VARIABLE_Info_80 = transform_hlds__constraint__STATE_VARIABLE_Info_0_79;
#line 199 "constraint.m"
                            }
#line 176 "constraint.m"
                            break;
#line 176 "constraint.m"
                          case (MR_Integer) 2:
#line 173 "constraint.m"
                            {
#line 173 "constraint.m"
                              MR_Word transform_hlds__constraint__SubGoal_146;
#line 173 "constraint.m"
                              MR_Word transform_hlds__constraint__V_147_147;
#line 173 "constraint.m"
                              MR_Word transform_hlds__constraint__V_148_148;

#line 174 "constraint.m"
                              {
#line 174 "constraint.m"
                                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_146, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                              }
#line 175 "constraint.m"
                              {
#line 175 "constraint.m"
                                transform_hlds__constraint__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_148_148, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_148_148, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_146));
#line 175 "constraint.m"
                              }
#line 175 "constraint.m"
                              {
#line 175 "constraint.m"
                                transform_hlds__constraint__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_147_147, 0) = ((MR_Box) (transform_hlds__constraint__V_148_148));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_147_147, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 175 "constraint.m"
                              }
#line 175 "constraint.m"
                              {
#line 175 "constraint.m"
                                MR_Word base;
#line 175 "constraint.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "constraint.m"
                                *transform_hlds__constraint__FinalGoals_9 = base;
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_147_147));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "constraint.m"
                              }
#line 173 "constraint.m"
                            }
#line 176 "constraint.m"
                            break;
#line 176 "constraint.m"
                          case (MR_Integer) 0:
#line 195 "constraint.m"
                            {
#line 197 "constraint.m"
                              {
#line 197 "constraint.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 197 "constraint.m"
                                return;
                              }
#line 195 "constraint.m"
                            }
#line 176 "constraint.m"
                            break;
#line 176 "constraint.m"
                          case (MR_Integer) 3:
#line 173 "constraint.m"
                            {
#line 173 "constraint.m"
                              MR_Word transform_hlds__constraint__SubGoal_150;
#line 173 "constraint.m"
                              MR_Word transform_hlds__constraint__V_151_151;
#line 173 "constraint.m"
                              MR_Word transform_hlds__constraint__V_152_152;

#line 174 "constraint.m"
                              {
#line 174 "constraint.m"
                                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_150, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                              }
#line 175 "constraint.m"
                              {
#line 175 "constraint.m"
                                transform_hlds__constraint__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_152_152, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_152_152, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_150));
#line 175 "constraint.m"
                              }
#line 175 "constraint.m"
                              {
#line 175 "constraint.m"
                                transform_hlds__constraint__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_151_151, 0) = ((MR_Box) (transform_hlds__constraint__V_152_152));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_151_151, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 175 "constraint.m"
                              }
#line 175 "constraint.m"
                              {
#line 175 "constraint.m"
                                MR_Word base;
#line 175 "constraint.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "constraint.m"
                                *transform_hlds__constraint__FinalGoals_9 = base;
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_151_151));
#line 175 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "constraint.m"
                              }
#line 173 "constraint.m"
                            }
#line 176 "constraint.m"
                            break;
#line 176 "constraint.m"
                        }
#line 176 "constraint.m"
                      }
#line 176 "constraint.m"
                      break;
#line 176 "constraint.m"
                  }
#line 176 "constraint.m"
                  break;
#line 176 "constraint.m"
              }
#line 168 "constraint.m"
            }
#line 146 "constraint.m"
            break;
#line 146 "constraint.m"
          case (MR_Integer) 6:
#line 155 "constraint.m"
            {
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__Cond0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__Then0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 3)));
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__Else0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 4)));
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__InstMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 3)));
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__Cond_24;
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__Then_25;
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__Else_26;
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_106_106;
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_107_107;
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_108_108;
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_109_109;
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__V_111_111;
#line 155 "constraint.m"
              MR_Word transform_hlds__constraint__V_112_112;
#line 156 "constraint.m"
              MR_Word transform_hlds__constraint__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 0)));
#line 156 "constraint.m"
              MR_Word transform_hlds__constraint__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 1)));
#line 156 "constraint.m"
              MR_Word transform_hlds__constraint__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 2)));
#line 156 "constraint.m"
              MR_Word transform_hlds__constraint__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 4)));
#line 163 "constraint.m"
              MR_Word transform_hlds__constraint__V_141_141;
#line 163 "constraint.m"
              MR_Word transform_hlds__constraint__V_142_142;
#line 163 "constraint.m"
              MR_Word transform_hlds__constraint__V_143_143;
#line 163 "constraint.m"
              MR_Word transform_hlds__constraint__V_145_145;
#line 163 "constraint.m"
              MR_Word transform_hlds__constraint__V_144_144;

#line 160 "constraint.m"
              {
#line 160 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Cond0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Cond_24, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, &transform_hlds__constraint__STATE_VARIABLE_Info_106_106);
              }
#line 161 "constraint.m"
              {
#line 161 "constraint.m"
                transform_hlds__constraint__constraint_info_update_goal_3_p_0(transform_hlds__constraint__Cond_24, transform_hlds__constraint__STATE_VARIABLE_Info_106_106, &transform_hlds__constraint__STATE_VARIABLE_Info_107_107);
              }
#line 162 "constraint.m"
              {
#line 162 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Then0_21, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Then_25, transform_hlds__constraint__STATE_VARIABLE_Info_107_107, &transform_hlds__constraint__STATE_VARIABLE_Info_108_108);
              }
#line 163 "constraint.m"
              transform_hlds__constraint__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 0)));
#line 163 "constraint.m"
              transform_hlds__constraint__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 1)));
#line 163 "constraint.m"
              transform_hlds__constraint__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 2)));
#line 163 "constraint.m"
              transform_hlds__constraint__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 3)));
#line 163 "constraint.m"
              transform_hlds__constraint__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 4)));
#line 163 "constraint.m"
              {
#line 163 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 163 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 0) = ((MR_Box) (transform_hlds__constraint__V_141_141));
#line 163 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 1) = ((MR_Box) (transform_hlds__constraint__V_142_142));
#line 163 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 2) = ((MR_Box) (transform_hlds__constraint__V_143_143));
#line 163 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_23));
#line 163 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 4) = ((MR_Box) (transform_hlds__constraint__V_145_145));
#line 163 "constraint.m"
              }
#line 164 "constraint.m"
              {
#line 164 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Else0_22, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Else_26, transform_hlds__constraint__STATE_VARIABLE_Info_109_109, transform_hlds__constraint__STATE_VARIABLE_Info_80);
              }
#line 166 "constraint.m"
              {
#line 166 "constraint.m"
                transform_hlds__constraint__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 166 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 166 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 1) = ((MR_Box) (transform_hlds__constraint__Vars_19));
#line 166 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 2) = ((MR_Box) (transform_hlds__constraint__Cond_24));
#line 166 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 3) = ((MR_Box) (transform_hlds__constraint__Then_25));
#line 166 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 4) = ((MR_Box) (transform_hlds__constraint__Else_26));
#line 166 "constraint.m"
              }
#line 166 "constraint.m"
              {
#line 166 "constraint.m"
                transform_hlds__constraint__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 166 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_111_111, 0) = ((MR_Box) (transform_hlds__constraint__V_112_112));
#line 166 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_111_111, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 166 "constraint.m"
              }
#line 166 "constraint.m"
              {
#line 166 "constraint.m"
                MR_Word base;
#line 166 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 166 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_111_111));
#line 166 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 166 "constraint.m"
              }
#line 155 "constraint.m"
            }
#line 146 "constraint.m"
            break;
#line 146 "constraint.m"
          case (MR_Integer) 7:
#line 223 "constraint.m"
            {
#line 224 "constraint.m"
              {
#line 224 "constraint.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "shorthand");
#line 224 "constraint.m"
                return;
              }
#line 223 "constraint.m"
            }
#line 146 "constraint.m"
            break;
#line 146 "constraint.m"
        }
#line 146 "constraint.m"
        break;
#line 146 "constraint.m"
    }
#line 129 "constraint.m"
  }
#line 125 "constraint.m"
}

#line 105 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
#line 105 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 105 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 105 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 105 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_14,
#line 105 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_15)
#line 105 "constraint.m"
{
#line 109 "constraint.m"
  {
#line 109 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 109 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 0)));
#line 109 "constraint.m"
    MR_Word transform_hlds__constraint__HasSubGoals_12;
#line 109 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap0_13;
#line 109 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_16_16;
#line 109 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_17_17;
#line 110 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 1)));
#line 121 "constraint.m"
    MR_Word transform_hlds__constraint__V_19_19;
#line 121 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;
#line 121 "constraint.m"
    MR_Word transform_hlds__constraint__V_21_21;
#line 121 "constraint.m"
    MR_Word transform_hlds__constraint__V_22_22;
#line 123 "constraint.m"
    MR_Word transform_hlds__constraint__V_23_23;
#line 123 "constraint.m"
    MR_Word transform_hlds__constraint__V_24_24;
#line 123 "constraint.m"
    MR_Word transform_hlds__constraint__V_25_25;
#line 123 "constraint.m"
    MR_Word transform_hlds__constraint__V_27_27;
#line 123 "constraint.m"
    MR_Word transform_hlds__constraint__V_26_26;

#line 111 "constraint.m"
    {
#line 111 "constraint.m"
      transform_hlds__constraint__HasSubGoals_12 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_10);
    }
#line 114 "constraint.m"
#line 114 "constraint.m"
    switch (transform_hlds__constraint__HasSubGoals_12) {
#line 114 "constraint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 114 "constraint.m"
      case (MR_Integer) 1:
#line 113 "constraint.m"
        transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
#line 114 "constraint.m"
        break;
#line 114 "constraint.m"
      case (MR_Integer) 0:
#line 807 "constraint.m"
        if ((transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 807 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
#line 807 "constraint.m"
        else
#line 809 "constraint.m"
          {
#line 810 "constraint.m"
            MR_Word transform_hlds__constraint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 810 "constraint.m"
            MR_Word transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 810 "constraint.m"
            MR_Word transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 810 "constraint.m"
            MR_Word transform_hlds__constraint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 810 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));

#line 810 "constraint.m"
            {
#line 810 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 810 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (transform_hlds__constraint__V_36_36));
#line 810 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (transform_hlds__constraint__V_37_37));
#line 810 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (transform_hlds__constraint__V_38_38));
#line 810 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (transform_hlds__constraint__V_39_39));
#line 810 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) ((MR_Integer) 1));
#line 810 "constraint.m"
            }
#line 809 "constraint.m"
          }
#line 114 "constraint.m"
        break;
#line 114 "constraint.m"
    }
#line 121 "constraint.m"
    transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 0)));
#line 121 "constraint.m"
    transform_hlds__constraint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 1)));
#line 121 "constraint.m"
    transform_hlds__constraint__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 2)));
#line 121 "constraint.m"
    transform_hlds__constraint__InstMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 3)));
#line 121 "constraint.m"
    transform_hlds__constraint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 4)));
#line 122 "constraint.m"
    {
#line 122 "constraint.m"
      transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(transform_hlds__constraint__Goal0_6, transform_hlds__constraint__Constraints_7, transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_16_16, &transform_hlds__constraint__STATE_VARIABLE_Info_17_17);
    }
#line 123 "constraint.m"
    transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 123 "constraint.m"
    transform_hlds__constraint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 123 "constraint.m"
    transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 123 "constraint.m"
    transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)));
#line 123 "constraint.m"
    transform_hlds__constraint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 4)));
#line 123 "constraint.m"
    {
#line 123 "constraint.m"
      MR_Word base;
#line 123 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 123 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_15 = base;
#line 123 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_23_23));
#line 123 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_24_24));
#line 123 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_25_25));
#line 123 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_13));
#line 123 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__constraint__V_27_27));
#line 123 "constraint.m"
    }
#line 109 "constraint.m"
  }
#line 105 "constraint.m"
}

#line 84 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
#line 84 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 84 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 84 "constraint.m"
  MR_Word * transform_hlds__constraint__Goal_8,
#line 84 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_23,
#line 84 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_24)
#line 84 "constraint.m"
{
#line 87 "constraint.m"
  {
#line 87 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 1)));
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__Features0_12;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__Context_13;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__Goals0_14;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__Goals_15;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__NonLocals_16;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__Delta_17;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__ConjDetism_18;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__Purity_19;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo1_20;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo2_21;
#line 87 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_22;
#line 90 "constraint.m"
    MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 0)));

#line 91 "constraint.m"
    {
#line 91 "constraint.m"
      transform_hlds__constraint__Features0_12 = hlds__hlds_goal__goal_info_get_features_1_f_0(transform_hlds__constraint__GoalInfo0_11);
    }
#line 92 "constraint.m"
    {
#line 92 "constraint.m"
      transform_hlds__constraint__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__constraint__GoalInfo0_11);
    }
#line 93 "constraint.m"
    {
#line 93 "constraint.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__constraint__Goal0_6, &transform_hlds__constraint__Goals0_14);
    }
#line 94 "constraint.m"
    {
#line 94 "constraint.m"
      transform_hlds__constraint__propagate_conj_5_p_0(transform_hlds__constraint__Goals0_14, transform_hlds__constraint__Constraints_7, &transform_hlds__constraint__Goals_15, transform_hlds__constraint__STATE_VARIABLE_Info_0_23, transform_hlds__constraint__STATE_VARIABLE_Info_24);
    }
#line 95 "constraint.m"
    {
#line 95 "constraint.m"
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__NonLocals_16);
    }
#line 96 "constraint.m"
    {
#line 96 "constraint.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__Delta_17);
    }
#line 97 "constraint.m"
    {
#line 97 "constraint.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__ConjDetism_18);
    }
#line 98 "constraint.m"
    {
#line 98 "constraint.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__Purity_19);
    }
#line 99 "constraint.m"
    {
#line 99 "constraint.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__constraint__NonLocals_16, transform_hlds__constraint__Delta_17, transform_hlds__constraint__ConjDetism_18, (MR_Integer) 0, transform_hlds__constraint__Context_13, &transform_hlds__constraint__GoalInfo1_20);
    }
#line 101 "constraint.m"
    {
#line 101 "constraint.m"
      hlds__hlds_goal__goal_info_set_features_3_p_0(transform_hlds__constraint__Features0_12, transform_hlds__constraint__GoalInfo1_20, &transform_hlds__constraint__GoalInfo2_21);
    }
#line 102 "constraint.m"
    {
#line 102 "constraint.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__constraint__Purity_19, transform_hlds__constraint__GoalInfo2_21, &transform_hlds__constraint__GoalInfo_22);
    }
#line 103 "constraint.m"
    {
#line 103 "constraint.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__constraint__Goals_15, transform_hlds__constraint__GoalInfo_22, transform_hlds__constraint__Goal_8);
    }
#line 87 "constraint.m"
  }
#line 84 "constraint.m"
}

#line 48 "constraint.m"
void MR_CALL 
transform_hlds__constraint__constraint_info_deconstruct_5_p_0(
#line 48 "constraint.m"
  MR_Word transform_hlds__constraint__ConstraintInfo_6,
#line 48 "constraint.m"
  MR_Word * transform_hlds__constraint__ModuleInfo_7,
#line 48 "constraint.m"
  MR_Word * transform_hlds__constraint__VarTypes_8,
#line 48 "constraint.m"
  MR_Word * transform_hlds__constraint__VarSet_9,
#line 48 "constraint.m"
  MR_Word * transform_hlds__constraint__Changed_10)
#line 48 "constraint.m"
{
#line 774 "constraint.m"
  {
#line 774 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11;

#line 774 "constraint.m"
    *transform_hlds__constraint__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 0)));
#line 774 "constraint.m"
    *transform_hlds__constraint__VarTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 1)));
#line 774 "constraint.m"
    *transform_hlds__constraint__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 2)));
#line 774 "constraint.m"
    transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 3)));
#line 774 "constraint.m"
    *transform_hlds__constraint__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 4)));
#line 774 "constraint.m"
  }
#line 48 "constraint.m"
}

#line 45 "constraint.m"
void MR_CALL 
transform_hlds__constraint__constraint_info_init_5_p_0(
#line 45 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_6,
#line 45 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_7,
#line 45 "constraint.m"
  MR_Word transform_hlds__constraint__VarSet_8,
#line 45 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap_9,
#line 45 "constraint.m"
  MR_Word * transform_hlds__constraint__ConstraintInfo_10)
#line 45 "constraint.m"
{
#line 768 "constraint.m"
  {
#line 768 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 769 "constraint.m"
    {
#line 769 "constraint.m"
      MR_Word base;
#line 769 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 769 "constraint.m"
      *transform_hlds__constraint__ConstraintInfo_10 = base;
#line 769 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_6));
#line 769 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_7));
#line 769 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_8));
#line 769 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
#line 769 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 769 "constraint.m"
    }
#line 768 "constraint.m"
  }
#line 45 "constraint.m"
}

#line 42 "constraint.m"
void MR_CALL 
transform_hlds__constraint__propagate_constraints_in_goal_4_p_0(
#line 42 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_5,
#line 42 "constraint.m"
  MR_Word * transform_hlds__constraint__Goal_6,
#line 42 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_9,
#line 42 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_10)
#line 42 "constraint.m"
{
#line 74 "constraint.m"
  {
#line 74 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 74 "constraint.m"
    MR_Word transform_hlds__constraint__Goal1_8;

#line 81 "constraint.m"
    {
#line 81 "constraint.m"
      transform_hlds__constraint__Goal1_8 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal0_5);
    }
#line 82 "constraint.m"
    {
#line 82 "constraint.m"
      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal1_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goal_6, transform_hlds__constraint__STATE_VARIABLE_Info_0_9, transform_hlds__constraint__STATE_VARIABLE_Info_10);
    }
#line 74 "constraint.m"
  }
#line 42 "constraint.m"
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
