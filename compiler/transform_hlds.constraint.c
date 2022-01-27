/*
** Automatically generated from `constraint.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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



#line 700 "constraint.m"
struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s {
#line 700 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 704 "constraint.m"
  MR_bool transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded;
#line 707 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12;
#line 716 "constraint.m"
  jmp_buf transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0;
#line 716 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20;
#line 715 "constraint.m"
  MR_Box transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20;
#line 700 "constraint.m"
};

#line 607 "constraint.m"
struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s {
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 612 "constraint.m"
  MR_bool transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded;
#line 615 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18;
#line 641 "constraint.m"
  jmp_buf transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0;
#line 641 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31;
#line 641 "constraint.m"
  MR_Box transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31;
#line 607 "constraint.m"
};


#line 166 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 169 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 172 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 178 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 184 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 187 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0;

#line 190 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 193 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4];

#line 196 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0;

#line 199 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1];

#line 202 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1];

#line 205 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[1];

#line 208 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0[1];

#line 211 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 214 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 217 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4];

#line 220 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0;

#line 223 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1];

#line 226 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1];

#line 229 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1];

#line 232 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1];

#line 235 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 238 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 241 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5];

#line 244 "transform_hlds.constraint.c"
static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5];

#line 247 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0;

#line 250 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1];

#line 253 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1];

#line 256 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1];

#line 259 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1];

#line 262 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
#line 265 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 267 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 270 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
#line 273 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 275 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 277 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 280 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
#line 283 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 285 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 288 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
#line 291 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 293 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 295 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 298 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
#line 301 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 303 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 306 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
#line 309 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 311 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 313 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 316 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
#line 319 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 321 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 324 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
#line 327 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 329 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 331 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 334 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
#line 337 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 339 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 342 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
#line 345 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 347 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 349 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 830 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__830__1_1_f_0(
#line 830 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_18);

#line 537 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__534__1_1_f_0_1(
#line 537 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 537 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 534 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__534__1_1_f_0(
#line 534 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20);

#line 415 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__415__1_2_p_0(
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20,
#line 415 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_21);

#line 335 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__335__1_5_p_0(
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_39);

#line 321 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__321__1_5_p_0(
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_37);

#line 228 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__228__1_2_p_0(
#line 228 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_14,
#line 228 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_15);

#line 382 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
#line 382 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 382 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 382 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 382 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
#line 382 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 382 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 404 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
#line 404 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 404 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 404 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 404 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
#line 404 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 404 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 361 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
#line 361 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 361 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 359 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
#line 359 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 359 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 359 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 359 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
#line 359 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 359 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 830 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3(
#line 830 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 830 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 827 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2(
#line 827 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 827 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 825 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1(
#line 825 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 825 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 822 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(
#line 822 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 812 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_1_f_0(
#line 812 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 796 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
#line 796 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_4,
#line 796 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
#line 796 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9);

#line 770 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
#line 770 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 770 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
#line 770 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11);

#line 727 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
#line 727 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_2);

#line 716 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
#line 716 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 715 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
#line 715 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 716 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
#line 716 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 716 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
#line 716 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 700 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
#line 700 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 700 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
#line 700 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
#line 700 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
#line 700 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5);

#line 669 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
#line 669 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 669 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 669 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 669 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 669 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

#line 641 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
#line 641 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 641 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
#line 641 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 641 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
#line 641 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 641 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
#line 641 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 607 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
#line 607 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
#line 607 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7);

#line 597 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
#line 597 "constraint.m"
  MR_Word transform_hlds__constraint__NonLocals_6,
#line 597 "constraint.m"
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
#line 597 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 597 "constraint.m"
  MR_Word * transform_hlds__constraint__Dependent_9,
#line 597 "constraint.m"
  MR_Word * transform_hlds__constraint__Independent_10);

#line 551 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
#line 551 "constraint.m"
  MR_Word transform_hlds__constraint__ConstructVar_1,
#line 551 "constraint.m"
  MR_Word transform_hlds__constraint__Construct0_2,
#line 551 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 551 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 551 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 551 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

#line 543 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__add_constraint_feature_1_f_0(
#line 543 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 534 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
#line 534 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 534 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 529 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
#line 529 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_4,
#line 529 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_5);

#line 524 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
#line 524 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_3,
#line 524 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_2);

#line 510 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
#line 510 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 510 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 510 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 496 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
#line 496 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 496 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 496 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 415 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
#line 415 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 415 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 415 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 409 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_1,
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_4,
#line 409 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_5,
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
#line 409 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7);

#line 335 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
#line 335 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 335 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 321 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
#line 321 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 321 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 300 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5,
#line 300 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevGoals_6);

#line 228 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
#line 228 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 228 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 228 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 271 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
#line 271 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_6,
#line 271 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 271 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 271 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_17,
#line 271 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_18);

#line 250 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
#line 250 "constraint.m"
  MR_Word transform_hlds__constraint__Var_1,
#line 250 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 250 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 250 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 250 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 250 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

#line 237 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
#line 237 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 237 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 237 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 237 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 237 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

#line 228 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
#line 228 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 228 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 228 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 225 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
#line 225 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 225 "constraint.m"
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
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_77,
#line 120 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_78);

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
    ((MR_Box) (transform_hlds__constraint__IntroducedFrom__func__attach_constraints__534__1_1_f_0_1)),
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1096 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1104 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1112 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1120 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1129 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1137 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1145 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1154 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0
  }
};

#line 1162 "transform_hlds.constraint.c"
const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__constraint____Unify____annotated_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____annotated_conj_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "annotated_conj",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1183 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1191 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  {
    transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0
  },
  {
    transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0
  },
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
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1297 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1305 "transform_hlds.constraint.c"
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

#line 1320 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

#line 1325 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0
  }
};

#line 1334 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

#line 1339 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1] = {
  (MR_Integer) 0
};

#line 1344 "transform_hlds.constraint.c"
const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constraint_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constraint_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constraint",
  {
    transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0
  },
  {
    transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0
};

#line 1365 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1374 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1382 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1391 "transform_hlds.constraint.c"
static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5] = {
  (MR_String) "constr_module_info",
  (MR_String) "constr_vartypes",
  (MR_String) "constr_varset",
  (MR_String) "constr_instmap",
  (MR_String) "constr_changed"
};

#line 1400 "transform_hlds.constraint.c"
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

#line 1415 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

#line 1420 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0
  }
};

#line 1429 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

#line 1434 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1] = {
  (MR_Integer) 0
};

#line 1439 "transform_hlds.constraint.c"
const MR_TypeCtorInfo_Struct transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__constraint____Unify____constraint_info_0_0_10001)),
  ((MR_Box) (transform_hlds__constraint____Compare____constraint_info_0_0_10001)),
  (MR_String) "transform_hlds.constraint",
  (MR_String) "constraint_info",
  {
    transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0
  },
  {
    transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0
};

#line 1460 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
#line 1463 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1465 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1467 "transform_hlds.constraint.c"
{
#line 1469 "transform_hlds.constraint.c"
  {
#line 1471 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1474 "transform_hlds.constraint.c"
    {
#line 1476 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1479 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1481 "transform_hlds.constraint.c"
  }
#line 1483 "transform_hlds.constraint.c"
}

#line 1486 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
#line 1489 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1491 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1493 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1495 "transform_hlds.constraint.c"
{
#line 1497 "transform_hlds.constraint.c"
  {
#line 1499 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1502 "transform_hlds.constraint.c"
    {
#line 1504 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____annotated_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1507 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1509 "transform_hlds.constraint.c"
  }
#line 1511 "transform_hlds.constraint.c"
}

#line 1514 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
#line 1517 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1519 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1521 "transform_hlds.constraint.c"
{
#line 1523 "transform_hlds.constraint.c"
  {
#line 1525 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1528 "transform_hlds.constraint.c"
    {
#line 1530 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conjunct_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1533 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1535 "transform_hlds.constraint.c"
  }
#line 1537 "transform_hlds.constraint.c"
}

#line 1540 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
#line 1543 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1545 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1547 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1549 "transform_hlds.constraint.c"
{
#line 1551 "transform_hlds.constraint.c"
  {
#line 1553 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1556 "transform_hlds.constraint.c"
    {
#line 1558 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____annotated_conjunct_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1561 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1563 "transform_hlds.constraint.c"
  }
#line 1565 "transform_hlds.constraint.c"
}

#line 1568 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
#line 1571 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1573 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1575 "transform_hlds.constraint.c"
{
#line 1577 "transform_hlds.constraint.c"
  {
#line 1579 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1582 "transform_hlds.constraint.c"
    {
#line 1584 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constrained_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1587 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1589 "transform_hlds.constraint.c"
  }
#line 1591 "transform_hlds.constraint.c"
}

#line 1594 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
#line 1597 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1599 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1601 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1603 "transform_hlds.constraint.c"
{
#line 1605 "transform_hlds.constraint.c"
  {
#line 1607 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1610 "transform_hlds.constraint.c"
    {
#line 1612 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constrained_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1615 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1617 "transform_hlds.constraint.c"
  }
#line 1619 "transform_hlds.constraint.c"
}

#line 1622 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
#line 1625 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1627 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1629 "transform_hlds.constraint.c"
{
#line 1631 "transform_hlds.constraint.c"
  {
#line 1633 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1636 "transform_hlds.constraint.c"
    {
#line 1638 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1641 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1643 "transform_hlds.constraint.c"
  }
#line 1645 "transform_hlds.constraint.c"
}

#line 1648 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
#line 1651 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1653 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1655 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1657 "transform_hlds.constraint.c"
{
#line 1659 "transform_hlds.constraint.c"
  {
#line 1661 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1664 "transform_hlds.constraint.c"
    {
#line 1666 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constraint_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1669 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1671 "transform_hlds.constraint.c"
  }
#line 1673 "transform_hlds.constraint.c"
}

#line 1676 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
#line 1679 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1681 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1683 "transform_hlds.constraint.c"
{
#line 1685 "transform_hlds.constraint.c"
  {
#line 1687 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1690 "transform_hlds.constraint.c"
    {
#line 1692 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_info_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1695 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1697 "transform_hlds.constraint.c"
  }
#line 1699 "transform_hlds.constraint.c"
}

#line 1702 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
#line 1705 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1707 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1709 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1711 "transform_hlds.constraint.c"
{
#line 1713 "transform_hlds.constraint.c"
  {
#line 1715 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1718 "transform_hlds.constraint.c"
    {
#line 1720 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constraint_info_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1723 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1725 "transform_hlds.constraint.c"
  }
#line 1727 "transform_hlds.constraint.c"
}

#line 830 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__830__1_1_f_0(
#line 830 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_18)
#line 830 "constraint.m"
{
#line 830 "constraint.m"
  {
#line 830 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 830 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_19;
#line 830 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;
#line 830 "constraint.m"
    MR_Word transform_hlds__constraint__MainConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_18, (MR_Integer) 0)));
#line 830 "constraint.m"
    MR_Word transform_hlds__constraint__OtherConsIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_18, (MR_Integer) 1)));
#line 830 "constraint.m"
    MR_Word transform_hlds__constraint__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_18, (MR_Integer) 2)));

#line 832 "constraint.m"
    {
#line 832 "constraint.m"
      transform_hlds__constraint__V_20_20 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_23);
    }
#line 830 "constraint.m"
    {
#line 830 "constraint.m"
      transform_hlds__constraint__HeadVar__2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 830 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_19, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_21));
#line 830 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_19, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_22));
#line 830 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_19, 2) = ((MR_Box) (transform_hlds__constraint__V_20_20));
#line 830 "constraint.m"
    }
#line 830 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_19;
#line 830 "constraint.m"
  }
#line 830 "constraint.m"
}

#line 537 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__534__1_1_f_0_1(
#line 537 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 537 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 537 "constraint.m"
{
#line 537 "constraint.m"
  {
#line 537 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 537 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 537 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_2;

#line 537 "constraint.m"
    {
#line 537 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_2 = transform_hlds__constraint__add_constraint_feature_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 537 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_2));
#line 537 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 537 "constraint.m"
  }
#line 537 "constraint.m"
}

#line 534 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__534__1_1_f_0(
#line 534 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20)
#line 534 "constraint.m"
{
#line 534 "constraint.m"
  {
#line 534 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_21;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__TypeCtorInfo_30_30;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__V_22_22;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__V_23_23;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 0)));
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__B_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 1)));
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__C_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 2)));
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__Constructs0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 3)));
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_25, (MR_Integer) 0)));
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_25, (MR_Integer) 1)));
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_35;

#line 547 "constraint.m"
    {
#line 547 "constraint.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_34, &transform_hlds__constraint__GoalInfo_35);
    }
#line 546 "constraint.m"
    {
#line 546 "constraint.m"
      transform_hlds__constraint__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_22_22, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_33));
#line 546 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_22_22, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_35));
#line 546 "constraint.m"
    }
#line 1857 "transform_hlds.constraint.c"
    transform_hlds__constraint__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 536 "constraint.m"
    {
#line 536 "constraint.m"
      transform_hlds__constraint__V_23_23 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_30_30, transform_hlds__constraint__TypeCtorInfo_30_30, (MR_Word) &transform_hlds__constraint_scalar_common_2[10], transform_hlds__constraint__Constructs0_28);
    }
#line 534 "constraint.m"
    {
#line 534 "constraint.m"
      transform_hlds__constraint__HeadVar__2_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 0) = ((MR_Box) (transform_hlds__constraint__V_22_22));
#line 534 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 1) = ((MR_Box) (transform_hlds__constraint__B_26));
#line 534 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 2) = ((MR_Box) (transform_hlds__constraint__C_27));
#line 534 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 3) = ((MR_Box) (transform_hlds__constraint__V_23_23));
#line 534 "constraint.m"
    }
#line 534 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_21;
#line 534 "constraint.m"
  }
#line 534 "constraint.m"
}

#line 415 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__415__1_2_p_0(
#line 415 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20,
#line 415 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_21)
#line 415 "constraint.m"
{
#line 415 "constraint.m"
  {
#line 415 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 416 "constraint.m"
    {
#line 416 "constraint.m"
      MR_Word base;
#line 416 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_21 = base;
#line 416 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_20));
#line 416 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "constraint.m"
    }
#line 415 "constraint.m"
  }
#line 415 "constraint.m"
}

#line 335 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__335__1_5_p_0(
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 335 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_39)
#line 335 "constraint.m"
{
#line 335 "constraint.m"
  {
#line 335 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 335 "constraint.m"
    MR_Word transform_hlds__constraint__InstBefore_45;
#line 335 "constraint.m"
    MR_Word transform_hlds__constraint__InstAfter_46;
#line 335 "constraint.m"
    MR_Word transform_hlds__constraint__Type_47;

#line 337 "constraint.m"
    {
#line 337 "constraint.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__HeadVar__5_39, &transform_hlds__constraint__InstBefore_45);
    }
#line 338 "constraint.m"
    {
#line 338 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__HeadVar__5_39, &transform_hlds__constraint__InstAfter_46);
    }
#line 335 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 335 "constraint.m"
      {
#line 339 "constraint.m"
        {
#line 339 "constraint.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__HeadVar__5_39, &transform_hlds__constraint__Type_47);
        }
#line 340 "constraint.m"
        {
#line 340 "constraint.m"
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__constraint__InstAfter_46, transform_hlds__constraint__InstBefore_45, transform_hlds__constraint__Type_47, transform_hlds__constraint__ModuleInfo_2);
        }
#line 340 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 335 "constraint.m"
      }
#line 335 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 335 "constraint.m"
  }
#line 335 "constraint.m"
}

#line 321 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__321__1_5_p_0(
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 321 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_37)
#line 321 "constraint.m"
{
#line 321 "constraint.m"
  {
#line 321 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 321 "constraint.m"
    MR_Word transform_hlds__constraint__InstBefore_27;
#line 321 "constraint.m"
    MR_Word transform_hlds__constraint__InstAfter_28;
#line 321 "constraint.m"
    MR_Word transform_hlds__constraint__Type_29;

#line 323 "constraint.m"
    {
#line 323 "constraint.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__HeadVar__5_37, &transform_hlds__constraint__InstBefore_27);
    }
#line 324 "constraint.m"
    {
#line 324 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__HeadVar__5_37, &transform_hlds__constraint__InstAfter_28);
    }
#line 321 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 321 "constraint.m"
      {
#line 325 "constraint.m"
        {
#line 325 "constraint.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__HeadVar__5_37, &transform_hlds__constraint__Type_29);
        }
#line 326 "constraint.m"
        {
#line 326 "constraint.m"
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__constraint__InstAfter_28, transform_hlds__constraint__InstBefore_27, transform_hlds__constraint__Type_29, transform_hlds__constraint__ModuleInfo_2);
        }
#line 326 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 321 "constraint.m"
      }
#line 321 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 321 "constraint.m"
  }
#line 321 "constraint.m"
}

#line 228 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__228__1_2_p_0(
#line 228 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_14,
#line 228 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_15)
#line 228 "constraint.m"
{
#line 228 "constraint.m"
  {
#line 228 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 228 "constraint.m"
    MR_Word transform_hlds__constraint__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 0)));
#line 228 "constraint.m"
    MR_Word transform_hlds__constraint__Constructs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 3)));
#line 228 "constraint.m"
    MR_Word transform_hlds__constraint__V_16_16;
#line 228 "constraint.m"
    MR_Word transform_hlds__constraint__V_17_17;
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 1)));
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 2)));

#line 230 "constraint.m"
    {
#line 230 "constraint.m"
      transform_hlds__constraint__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_17_17, 0) = ((MR_Box) (transform_hlds__constraint__Goal_7));
#line 230 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "constraint.m"
    }
#line 230 "constraint.m"
    {
#line 230 "constraint.m"
      transform_hlds__constraint__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_16_16, 0) = ((MR_Box) (transform_hlds__constraint__V_17_17));
#line 230 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "constraint.m"
    }
#line 230 "constraint.m"
    {
#line 230 "constraint.m"
      MR_Word base;
#line 230 "constraint.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_15 = base;
#line 230 "constraint.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Constructs_10));
#line 230 "constraint.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__V_16_16));
#line 230 "constraint.m"
    }
#line 228 "constraint.m"
  }
#line 228 "constraint.m"
}

#line 753 "constraint.m"
void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0(
#line 753 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 753 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 753 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 753 "constraint.m"
{
#line 753 "constraint.m"
  {
#line 753 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 753 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_18 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 753 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_19 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 753 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_18 == transform_hlds__constraint__CastY_19);
#line 753 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2129 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 753 "constraint.m"
    else
#line 753 "constraint.m"
      {
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 4)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_14_14;

#line 753 "constraint.m"
        {
#line 753 "constraint.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__constraint__V_14_14, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_9_9);
        }
#line 2163 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 753 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 753 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 753 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 753 "constraint.m"
        else
#line 753 "constraint.m"
          {
#line 753 "constraint.m"
            MR_Word transform_hlds__constraint__V_15_15;

#line 753 "constraint.m"
            {
#line 753 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__constraint__V_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
            }
#line 2183 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_15_15 == (MR_Integer) 0);
#line 753 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 753 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 753 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_15_15;
#line 753 "constraint.m"
            else
#line 753 "constraint.m"
              {
#line 753 "constraint.m"
                MR_Word transform_hlds__constraint__V_16_16;

#line 753 "constraint.m"
                {
#line 753 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[7], &transform_hlds__constraint__V_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
                }
#line 2203 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_16_16 == (MR_Integer) 0);
#line 753 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 753 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 753 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_16_16;
#line 753 "constraint.m"
                else
#line 753 "constraint.m"
                  {
#line 753 "constraint.m"
                    MR_Word transform_hlds__constraint__V_17_17;

#line 753 "constraint.m"
                    {
#line 753 "constraint.m"
                      hlds__instmap____Compare____instmap_0_0(&transform_hlds__constraint__V_17_17, transform_hlds__constraint__V_7_7, transform_hlds__constraint__V_12_12);
                    }
#line 2223 "transform_hlds.constraint.c"
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_17_17 == (MR_Integer) 0);
#line 753 "constraint.m"
                    transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 753 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 753 "constraint.m"
                      *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_17_17;
#line 753 "constraint.m"
                    else
#line 753 "constraint.m"
                      {
#line 753 "constraint.m"
                        MR_Integer transform_hlds__constraint__V_25_25 = (MR_Integer) transform_hlds__constraint__V_8_8;
#line 753 "constraint.m"
                        MR_Integer transform_hlds__constraint__V_26_26 = (MR_Integer) transform_hlds__constraint__V_13_13;

#line 753 "constraint.m"
                        {
#line 753 "constraint.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__V_25_25, transform_hlds__constraint__V_26_26);
#line 753 "constraint.m"
                          return;
                        }
#line 753 "constraint.m"
                      }
#line 753 "constraint.m"
                  }
#line 753 "constraint.m"
              }
#line 753 "constraint.m"
          }
#line 753 "constraint.m"
      }
#line 753 "constraint.m"
  }
#line 753 "constraint.m"
}

#line 753 "constraint.m"
MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0(
#line 753 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 753 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 753 "constraint.m"
{
#line 753 "constraint.m"
  {
#line 753 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 753 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_13 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 753 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_14 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 753 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_13 == transform_hlds__constraint__CastY_14);
#line 753 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 753 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 753 "constraint.m"
    else
#line 753 "constraint.m"
      {
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__TypeCtorInfo_16_16;
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_17_17;
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 4)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 753 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));

#line 2315 "transform_hlds.constraint.c"
        {
#line 2317 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_8_8);
        }
#line 753 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 753 "constraint.m"
          {
#line 2324 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 2326 "transform_hlds.constraint.c"
            {
#line 2328 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeCtorInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 753 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 753 "constraint.m"
              {
#line 2335 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_17_17 = (MR_Word) &transform_hlds__constraint_scalar_common_1[7];
#line 2337 "transform_hlds.constraint.c"
                {
#line 2339 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_17_17, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 753 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 753 "constraint.m"
                  {
#line 2346 "transform_hlds.constraint.c"
                    {
#line 2348 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__constraint__V_6_6, transform_hlds__constraint__V_11_11);
                    }
#line 753 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 2353 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_7_7 == transform_hlds__constraint__V_12_12);
#line 753 "constraint.m"
                  }
#line 753 "constraint.m"
              }
#line 753 "constraint.m"
          }
#line 753 "constraint.m"
      }
#line 753 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 753 "constraint.m"
  }
#line 753 "constraint.m"
}

#line 382 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
#line 382 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 382 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 382 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 382 "constraint.m"
{
#line 382 "constraint.m"
  {
#line 382 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 382 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 382 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 382 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
#line 382 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2394 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 382 "constraint.m"
    else
#line 382 "constraint.m"
      {
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12;

#line 382 "constraint.m"
        {
#line 382 "constraint.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__V_12_12, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_8_8);
        }
#line 2424 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_12_12 == (MR_Integer) 0);
#line 382 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 382 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 382 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_12_12;
#line 382 "constraint.m"
        else
#line 382 "constraint.m"
          {
#line 382 "constraint.m"
            MR_Word transform_hlds__constraint__V_13_13;

#line 382 "constraint.m"
            {
#line 382 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_13_13, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 2444 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_13_13 == (MR_Integer) 0);
#line 382 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 382 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 382 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_13_13;
#line 382 "constraint.m"
            else
#line 382 "constraint.m"
              {
#line 382 "constraint.m"
                MR_Word transform_hlds__constraint__V_14_14;

#line 382 "constraint.m"
                {
#line 382 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_14_14, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 2464 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 382 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 382 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 382 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 382 "constraint.m"
                else
#line 382 "constraint.m"
                  {
#line 382 "constraint.m"
                    {
#line 382 "constraint.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__V_7_7)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
#line 382 "constraint.m"
                      return;
                    }
#line 382 "constraint.m"
                  }
#line 382 "constraint.m"
              }
#line 382 "constraint.m"
          }
#line 382 "constraint.m"
      }
#line 382 "constraint.m"
  }
#line 382 "constraint.m"
}

#line 382 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
#line 382 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 382 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 382 "constraint.m"
{
#line 382 "constraint.m"
  {
#line 382 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 382 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 382 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 382 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
#line 382 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 382 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 382 "constraint.m"
    else
#line 382 "constraint.m"
      {
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 382 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

#line 2547 "transform_hlds.constraint.c"
        {
#line 2549 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_7_7);
        }
#line 382 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 382 "constraint.m"
          {
#line 2556 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2558 "transform_hlds.constraint.c"
            {
#line 2560 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_8_8)));
            }
#line 382 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 382 "constraint.m"
              {
#line 2567 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2569 "transform_hlds.constraint.c"
                {
#line 2571 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
                }
#line 382 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 382 "constraint.m"
                  {
#line 2578 "transform_hlds.constraint.c"
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[0];
#line 2580 "transform_hlds.constraint.c"
                    {
#line 2582 "transform_hlds.constraint.c"
                      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                    }
#line 382 "constraint.m"
                  }
#line 382 "constraint.m"
              }
#line 382 "constraint.m"
          }
#line 382 "constraint.m"
      }
#line 382 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 382 "constraint.m"
  }
#line 382 "constraint.m"
}

#line 404 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
#line 404 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 404 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 404 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 404 "constraint.m"
{
#line 404 "constraint.m"
  {
#line 404 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 404 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
#line 404 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

#line 404 "constraint.m"
    {
#line 404 "constraint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[6], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
#line 404 "constraint.m"
      return;
    }
#line 404 "constraint.m"
  }
#line 404 "constraint.m"
}

#line 404 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
#line 404 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 404 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 404 "constraint.m"
{
#line 404 "constraint.m"
  {
#line 404 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 404 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
#line 404 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

#line 404 "constraint.m"
    {
#line 404 "constraint.m"
      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[6], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
#line 404 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 404 "constraint.m"
  }
#line 404 "constraint.m"
}

#line 361 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
#line 361 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 361 "constraint.m"
{
#line 361 "constraint.m"
  {
#line 361 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 361 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 361 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 361 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
#line 361 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2686 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 361 "constraint.m"
    else
#line 361 "constraint.m"
      {
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12;

#line 361 "constraint.m"
        {
#line 361 "constraint.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__V_12_12, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_8_8);
        }
#line 2716 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_12_12 == (MR_Integer) 0);
#line 361 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 361 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 361 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_12_12;
#line 361 "constraint.m"
        else
#line 361 "constraint.m"
          {
#line 361 "constraint.m"
            MR_Word transform_hlds__constraint__V_13_13;

#line 361 "constraint.m"
            {
#line 361 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_13_13, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 2736 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_13_13 == (MR_Integer) 0);
#line 361 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 361 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 361 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_13_13;
#line 361 "constraint.m"
            else
#line 361 "constraint.m"
              {
#line 361 "constraint.m"
                MR_Word transform_hlds__constraint__V_14_14;

#line 361 "constraint.m"
                {
#line 361 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_14_14, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 2756 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 361 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 361 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 361 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 361 "constraint.m"
                else
#line 361 "constraint.m"
                  {
#line 361 "constraint.m"
                    {
#line 361 "constraint.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__V_7_7)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
#line 361 "constraint.m"
                      return;
                    }
#line 361 "constraint.m"
                  }
#line 361 "constraint.m"
              }
#line 361 "constraint.m"
          }
#line 361 "constraint.m"
      }
#line 361 "constraint.m"
  }
#line 361 "constraint.m"
}

#line 361 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 361 "constraint.m"
{
#line 361 "constraint.m"
  {
#line 361 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 361 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 361 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 361 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
#line 361 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 361 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 361 "constraint.m"
    else
#line 361 "constraint.m"
      {
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 361 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

#line 2839 "transform_hlds.constraint.c"
        {
#line 2841 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_7_7);
        }
#line 361 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 361 "constraint.m"
          {
#line 2848 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2850 "transform_hlds.constraint.c"
            {
#line 2852 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_8_8)));
            }
#line 361 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 361 "constraint.m"
              {
#line 2859 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2861 "transform_hlds.constraint.c"
                {
#line 2863 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
                }
#line 361 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 361 "constraint.m"
                  {
#line 2870 "transform_hlds.constraint.c"
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2872 "transform_hlds.constraint.c"
                    {
#line 2874 "transform_hlds.constraint.c"
                      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                    }
#line 361 "constraint.m"
                  }
#line 361 "constraint.m"
              }
#line 361 "constraint.m"
          }
#line 361 "constraint.m"
      }
#line 361 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 361 "constraint.m"
  }
#line 361 "constraint.m"
}

#line 359 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
#line 359 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 359 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 359 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 359 "constraint.m"
{
#line 359 "constraint.m"
  {
#line 359 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 359 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
#line 359 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

#line 359 "constraint.m"
    {
#line 359 "constraint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
#line 359 "constraint.m"
      return;
    }
#line 359 "constraint.m"
  }
#line 359 "constraint.m"
}

#line 359 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
#line 359 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 359 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 359 "constraint.m"
{
#line 359 "constraint.m"
  {
#line 359 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 359 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
#line 359 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

#line 359 "constraint.m"
    {
#line 359 "constraint.m"
      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
#line 359 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 359 "constraint.m"
  }
#line 359 "constraint.m"
}

#line 830 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3(
#line 830 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 830 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 830 "constraint.m"
{
#line 830 "constraint.m"
  {
#line 830 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 830 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 830 "constraint.m"
    MR_Word transform_hlds__constraint__conv2_HeadVar__2_19;

#line 830 "constraint.m"
    {
#line 830 "constraint.m"
      transform_hlds__constraint__conv2_HeadVar__2_19 = transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__830__1_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 830 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_HeadVar__2_19));
#line 830 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 830 "constraint.m"
  }
#line 830 "constraint.m"
}

#line 827 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2(
#line 827 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 827 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 827 "constraint.m"
{
#line 827 "constraint.m"
  {
#line 827 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 827 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 827 "constraint.m"
    MR_Word transform_hlds__constraint__conv1_HeadVar__2_2;

#line 827 "constraint.m"
    {
#line 827 "constraint.m"
      transform_hlds__constraint__conv1_HeadVar__2_2 = transform_hlds__constraint__strip_constraint_markers_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 827 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_HeadVar__2_2));
#line 827 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 827 "constraint.m"
  }
#line 827 "constraint.m"
}

#line 825 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1(
#line 825 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 825 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 825 "constraint.m"
{
#line 825 "constraint.m"
  {
#line 825 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 825 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 825 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_2;

#line 825 "constraint.m"
    {
#line 825 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_2 = transform_hlds__constraint__strip_constraint_markers_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 825 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_2));
#line 825 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 825 "constraint.m"
  }
#line 825 "constraint.m"
}

#line 822 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(
#line 822 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 822 "constraint.m"
{
#line 824 "constraint.m"
  {
#line 824 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 824 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;

#line 824 "constraint.m"
    if (((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 834 "constraint.m"
      {
#line 834 "constraint.m"
        MR_Word transform_hlds__constraint__Goal_24 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__HeadVar__1_1), (MR_Integer) 0);
#line 834 "constraint.m"
        MR_Word transform_hlds__constraint__V_25_25;

#line 835 "constraint.m"
        {
#line 835 "constraint.m"
          transform_hlds__constraint__V_25_25 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_24);
        }
#line 834 "constraint.m"
        transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__V_25_25);
#line 834 "constraint.m"
      }
#line 824 "constraint.m"
    else
#line 824 "constraint.m"
      if (((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 847 "constraint.m"
        transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 824 "constraint.m"
      else
#line 824 "constraint.m"
        if (((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 849 "constraint.m"
          transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 824 "constraint.m"
        else
#line 824 "constraint.m"
          if (((((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 843 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 824 "constraint.m"
          else
#line 824 "constraint.m"
            if (((((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 824 "constraint.m"
              {
#line 824 "constraint.m"
                MR_Word transform_hlds__constraint__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 824 "constraint.m"
                MR_Word transform_hlds__constraint__ConjType_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 824 "constraint.m"
                MR_Word transform_hlds__constraint__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 824 "constraint.m"
                MR_Word transform_hlds__constraint__V_5_5;

#line 825 "constraint.m"
                {
#line 825 "constraint.m"
                  transform_hlds__constraint__V_5_5 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_65_65, transform_hlds__constraint__TypeCtorInfo_65_65, (MR_Word) &transform_hlds__constraint_scalar_common_2[7], transform_hlds__constraint__Goals_4);
                }
#line 824 "constraint.m"
                {
#line 824 "constraint.m"
                  transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 824 "constraint.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 824 "constraint.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_3));
#line 824 "constraint.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_5_5));
#line 824 "constraint.m"
                }
#line 824 "constraint.m"
              }
#line 824 "constraint.m"
            else
#line 824 "constraint.m"
              if (((((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 826 "constraint.m"
                {
#line 826 "constraint.m"
                  MR_Word transform_hlds__constraint__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 826 "constraint.m"
                  MR_Word transform_hlds__constraint__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "constraint.m"
                  MR_Word transform_hlds__constraint__V_8_8;

#line 827 "constraint.m"
                  {
#line 827 "constraint.m"
                    transform_hlds__constraint__V_8_8 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_68_68, transform_hlds__constraint__TypeCtorInfo_68_68, (MR_Word) &transform_hlds__constraint_scalar_common_2[8], transform_hlds__constraint__Goals_7);
                  }
#line 826 "constraint.m"
                  {
#line 826 "constraint.m"
                    transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "constraint.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 826 "constraint.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__V_8_8));
#line 826 "constraint.m"
                  }
#line 826 "constraint.m"
                }
#line 824 "constraint.m"
              else
#line 824 "constraint.m"
                if (((((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 845 "constraint.m"
                  transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 824 "constraint.m"
                else
#line 824 "constraint.m"
                  if (((((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 838 "constraint.m"
                    {
#line 838 "constraint.m"
                      MR_Word transform_hlds__constraint__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 838 "constraint.m"
                      MR_Word transform_hlds__constraint__If_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 838 "constraint.m"
                      MR_Word transform_hlds__constraint__Then_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 838 "constraint.m"
                      MR_Word transform_hlds__constraint__Else_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 4)));
#line 838 "constraint.m"
                      MR_Word transform_hlds__constraint__V_33_33;
#line 838 "constraint.m"
                      MR_Word transform_hlds__constraint__V_34_34;
#line 838 "constraint.m"
                      MR_Word transform_hlds__constraint__V_35_35;

#line 839 "constraint.m"
                      {
#line 839 "constraint.m"
                        transform_hlds__constraint__V_33_33 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__If_30);
                      }
#line 839 "constraint.m"
                      {
#line 839 "constraint.m"
                        transform_hlds__constraint__V_34_34 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Then_31);
                      }
#line 839 "constraint.m"
                      {
#line 839 "constraint.m"
                        transform_hlds__constraint__V_35_35 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Else_32);
                      }
#line 838 "constraint.m"
                      {
#line 838 "constraint.m"
                        transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 838 "constraint.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 838 "constraint.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Vars_29));
#line 838 "constraint.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_33_33));
#line 838 "constraint.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 3) = ((MR_Box) (transform_hlds__constraint__V_34_34));
#line 838 "constraint.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 4) = ((MR_Box) (transform_hlds__constraint__V_35_35));
#line 838 "constraint.m"
                      }
#line 838 "constraint.m"
                    }
#line 824 "constraint.m"
                  else
#line 824 "constraint.m"
                    if (((((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 836 "constraint.m"
                      {
#line 836 "constraint.m"
                        MR_Word transform_hlds__constraint__Reason_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 836 "constraint.m"
                        MR_Word transform_hlds__constraint__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 836 "constraint.m"
                        MR_Word transform_hlds__constraint__V_28_28;

#line 837 "constraint.m"
                        {
#line 837 "constraint.m"
                          transform_hlds__constraint__V_28_28 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_27);
                        }
#line 836 "constraint.m"
                        {
#line 836 "constraint.m"
                          transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 836 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 836 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Reason_26));
#line 836 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_28_28));
#line 836 "constraint.m"
                        }
#line 836 "constraint.m"
                      }
#line 824 "constraint.m"
                    else
#line 824 "constraint.m"
                      if (((((MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 851 "constraint.m"
                        transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 824 "constraint.m"
                      else
#line 829 "constraint.m"
                        {
#line 829 "constraint.m"
                          MR_Word transform_hlds__constraint__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 829 "constraint.m"
                          MR_Word transform_hlds__constraint__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 829 "constraint.m"
                          MR_Word transform_hlds__constraint__CanFail_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 829 "constraint.m"
                          MR_Word transform_hlds__constraint__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 829 "constraint.m"
                          MR_Word transform_hlds__constraint__Cases_13;

#line 830 "constraint.m"
                          {
#line 830 "constraint.m"
                            transform_hlds__constraint__Cases_13 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_71_71, transform_hlds__constraint__TypeCtorInfo_71_71, (MR_Word) &transform_hlds__constraint_scalar_common_2[9], transform_hlds__constraint__Cases0_12);
                          }
#line 829 "constraint.m"
                          {
#line 829 "constraint.m"
                            transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 829 "constraint.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 829 "constraint.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Var_10));
#line 829 "constraint.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_11));
#line 829 "constraint.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 3) = ((MR_Box) (transform_hlds__constraint__Cases_13));
#line 829 "constraint.m"
                          }
#line 829 "constraint.m"
                        }
#line 824 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 824 "constraint.m"
  }
#line 822 "constraint.m"
}

#line 812 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_1_f_0(
#line 812 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 812 "constraint.m"
{
#line 815 "constraint.m"
  {
#line 815 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 815 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;
#line 815 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 815 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 815 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5;
#line 815 "constraint.m"
    MR_Word transform_hlds__constraint__V_6_6;

#line 815 "constraint.m"
    {
#line 815 "constraint.m"
      transform_hlds__constraint__V_6_6 = transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(transform_hlds__constraint__GoalExpr_3);
    }
#line 816 "constraint.m"
    {
#line 816 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo0_4, (MR_Integer) 0);
    }
#line 818 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 817 "constraint.m"
      {
#line 817 "constraint.m"
        {
#line 817 "constraint.m"
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_4, &transform_hlds__constraint__GoalInfo_5);
        }
#line 817 "constraint.m"
      }
#line 818 "constraint.m"
    else
#line 819 "constraint.m"
      transform_hlds__constraint__GoalInfo_5 = transform_hlds__constraint__GoalInfo0_4;
#line 815 "constraint.m"
    {
#line 815 "constraint.m"
      transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 815 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__constraint__V_6_6));
#line 815 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_5));
#line 815 "constraint.m"
    }
#line 815 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 815 "constraint.m"
  }
#line 812 "constraint.m"
}

#line 796 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
#line 796 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_4,
#line 796 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
#line 796 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9)
#line 796 "constraint.m"
{
#line 801 "constraint.m"
  {
#line 801 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 801 "constraint.m"
    if ((transform_hlds__constraint__Constraints_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_9 = transform_hlds__constraint__STATE_VARIABLE_Info_0_8;
#line 801 "constraint.m"
    else
#line 803 "constraint.m"
      {
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));

#line 804 "constraint.m"
        {
#line 804 "constraint.m"
          MR_Word base;
#line 804 "constraint.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 804 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_Info_9 = base;
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_12_12));
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_13_13));
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_14_14));
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__V_15_15));
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 1));
#line 804 "constraint.m"
        }
#line 803 "constraint.m"
      }
#line 801 "constraint.m"
  }
#line 796 "constraint.m"
}

#line 770 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
#line 770 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 770 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
#line 770 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11)
#line 770 "constraint.m"
{
#line 773 "constraint.m"
  {
#line 773 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 773 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 773 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 773 "constraint.m"
    MR_Word transform_hlds__constraint__InstMapDelta_8;
#line 773 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap_9;
#line 773 "constraint.m"
    MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 774 "constraint.m"
    MR_Word transform_hlds__constraint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 777 "constraint.m"
    MR_Word transform_hlds__constraint__V_17_17;
#line 777 "constraint.m"
    MR_Word transform_hlds__constraint__V_18_18;
#line 777 "constraint.m"
    MR_Word transform_hlds__constraint__V_19_19;
#line 777 "constraint.m"
    MR_Word transform_hlds__constraint__V_21_21;
#line 777 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;

#line 775 "constraint.m"
    {
#line 775 "constraint.m"
      transform_hlds__constraint__InstMapDelta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_5);
    }
#line 776 "constraint.m"
    {
#line 776 "constraint.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_7, transform_hlds__constraint__InstMapDelta_8, &transform_hlds__constraint__InstMap_9);
    }
#line 777 "constraint.m"
    transform_hlds__constraint__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 777 "constraint.m"
    transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 777 "constraint.m"
    transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 777 "constraint.m"
    transform_hlds__constraint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 777 "constraint.m"
    transform_hlds__constraint__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 777 "constraint.m"
    {
#line 777 "constraint.m"
      MR_Word base;
#line 777 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 777 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_11 = base;
#line 777 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_17_17));
#line 777 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_18_18));
#line 777 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_19_19));
#line 777 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
#line 777 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__constraint__V_21_21));
#line 777 "constraint.m"
    }
#line 773 "constraint.m"
  }
#line 770 "constraint.m"
}

#line 727 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
#line 727 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_2)
#line 727 "constraint.m"
{
#line 729 "constraint.m"
  {
#line 729 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 729 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 0)));
#line 730 "constraint.m"
    MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 1)));

#line 734 "constraint.m"
    if (((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 735 "constraint.m"
      {
#line 735 "constraint.m"
        MR_Word transform_hlds__constraint__SubGoal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_3), (MR_Integer) 0);

#line 736 "constraint.m"
        {
#line 736 "constraint.m"
          transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_5);
        }
#line 735 "constraint.m"
      }
#line 734 "constraint.m"
    else
#line 734 "constraint.m"
      if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 738 "constraint.m"
        {
#line 738 "constraint.m"
          MR_Word transform_hlds__constraint__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 1)));
#line 738 "constraint.m"
          MR_Word transform_hlds__constraint__SubGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 2)));
#line 740 "constraint.m"
          MR_Word transform_hlds__constraint__FGT_8;
#line 740 "constraint.m"
          MR_Word transform_hlds__constraint__V_7_7;

#line 740 "constraint.m"
          transform_hlds__constraint__succeeded = ((((MR_tag((MR_Word) transform_hlds__constraint__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 740 "constraint.m"
          if (transform_hlds__constraint__succeeded)
#line 740 "constraint.m"
            {
#line 740 "constraint.m"
              transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 1)));
#line 740 "constraint.m"
              transform_hlds__constraint__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 2)));
#line 742 "constraint.m"
              if ((transform_hlds__constraint__FGT_8 == (MR_Integer) 1))
#line 741 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 742 "constraint.m"
              else
#line 742 "constraint.m"
                if ((transform_hlds__constraint__FGT_8 == (MR_Integer) 2))
#line 742 "constraint.m"
                  transform_hlds__constraint__succeeded = MR_TRUE;
#line 742 "constraint.m"
                else
#line 742 "constraint.m"
                  transform_hlds__constraint__succeeded = MR_FALSE;
#line 740 "constraint.m"
            }
#line 746 "constraint.m"
          if (transform_hlds__constraint__succeeded)
#line 745 "constraint.m"
            transform_hlds__constraint__succeeded = MR_TRUE;
#line 746 "constraint.m"
          else
#line 747 "constraint.m"
            {
#line 747 "constraint.m"
              transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_10);
            }
#line 738 "constraint.m"
        }
#line 734 "constraint.m"
      else
#line 734 "constraint.m"
        transform_hlds__constraint__succeeded = MR_FALSE;
#line 734 "constraint.m"
    if (!(transform_hlds__constraint__succeeded))
#line 733 "constraint.m"
      {
#line 733 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9;

#line 733 "constraint.m"
        {
#line 733 "constraint.m"
          transform_hlds__constraint__V_9_9 = hlds__hlds_goal__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr_3);
        }
#line 733 "constraint.m"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_9_9 == (MR_Integer) 1);
#line 733 "constraint.m"
      }
#line 729 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 729 "constraint.m"
  }
#line 727 "constraint.m"
}

#line 716 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
#line 716 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 716 "constraint.m"
{
#line 716 "constraint.m"
  {
#line 716 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 716 "constraint.m"
    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0, 1);
#line 716 "constraint.m"
  }
#line 716 "constraint.m"
}

#line 715 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
#line 715 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 715 "constraint.m"
{
#line 715 "constraint.m"
  {
#line 715 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 715 "constraint.m"
    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20);
#line 715 "constraint.m"
    {
#line 715 "constraint.m"
      transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(transform_hlds__constraint__env_ptr);
#line 715 "constraint.m"
      return;
    }
#line 715 "constraint.m"
  }
#line 715 "constraint.m"
}

#line 716 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
#line 716 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 716 "constraint.m"
{
#line 716 "constraint.m"
  {
#line 716 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 716 "constraint.m"
    {
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_44;
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierChangedVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 1)));
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 1)));
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintNonLocals_42;
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_43;
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 0)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 2)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 3)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 0)));

#line 660 "constraint.m"
      {
#line 660 "constraint.m"
        transform_hlds__constraint__ConstraintNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_41);
      }
#line 3722 "transform_hlds.constraint.c"
      transform_hlds__constraint__TypeCtorInfo_17_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 661 "constraint.m"
      {
#line 661 "constraint.m"
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierChangedVars_33, transform_hlds__constraint__ConstraintNonLocals_42, &transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
#line 663 "constraint.m"
      {
#line 663 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
#line 716 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
#line 716 "constraint.m"
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 716 "constraint.m"
        {
#line 716 "constraint.m"
          transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(transform_hlds__constraint__env_ptr);
#line 716 "constraint.m"
          return;
        }
#line 716 "constraint.m"
    }
#line 716 "constraint.m"
  }
#line 716 "constraint.m"
}

#line 716 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
#line 716 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 716 "constraint.m"
{
#line 716 "constraint.m"
  {
#line 716 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 716 "constraint.m"
    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0) == 0)
#line 716 "constraint.m"
      {
#line 716 "constraint.m"
        {
#line 715 "constraint.m"
          {
#line 715 "constraint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4, transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3, transform_hlds__constraint__env_ptr);
          }
#line 716 "constraint.m"
        }
#line 716 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_FALSE;
#line 716 "constraint.m"
      }
#line 716 "constraint.m"
    else
#line 716 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_TRUE;
#line 716 "constraint.m"
  }
#line 716 "constraint.m"
}

#line 700 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
#line 700 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 700 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
#line 700 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
#line 700 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
#line 700 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5)
#line 700 "constraint.m"
{
#line 700 "constraint.m"
  {
#line 700 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s transform_hlds__constraint__env;

#line 700 "constraint.m"
    (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 704 "constraint.m"
    while (MR_TRUE)
#line 704 "constraint.m"
      {
#line 704 "constraint.m"
        /* tailcall optimized into a loop */
#line 704 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "constraint.m"
          {
#line 704 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 704 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
#line 704 "constraint.m"
          }
#line 704 "constraint.m"
        else
#line 707 "constraint.m"
          {
#line 707 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_13;
#line 707 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_16;
#line 707 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
#line 707 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;
#line 708 "constraint.m"
            MR_Word transform_hlds__constraint__V_17_17;
#line 708 "constraint.m"
            MR_Word transform_hlds__constraint__V_18_18;
#line 708 "constraint.m"
            MR_Word transform_hlds__constraint__V_19_19;

#line 707 "constraint.m"
            (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 707 "constraint.m"
            transform_hlds__constraint__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 708 "constraint.m"
            transform_hlds__constraint__ConstraintGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
#line 708 "constraint.m"
            transform_hlds__constraint__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
#line 708 "constraint.m"
            transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
#line 708 "constraint.m"
            transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
#line 710 "constraint.m"
            {
#line 710 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__ConstraintGoal_16);
            }
#line 710 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 710 "constraint.m"
              {
#line 716 "constraint.m"
                {
#line 716 "constraint.m"
                  transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(&transform_hlds__constraint__env);
                }
#line 716 "constraint.m"
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
#line 710 "constraint.m"
              }
#line 721 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 720 "constraint.m"
              {
#line 720 "constraint.m"
                {
#line 720 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
#line 720 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2));
#line 720 "constraint.m"
                }
#line 720 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 720 "constraint.m"
              }
#line 721 "constraint.m"
            else
#line 722 "constraint.m"
              {
#line 722 "constraint.m"
                {
#line 722 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
#line 722 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4));
#line 722 "constraint.m"
                }
#line 722 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
#line 722 "constraint.m"
              }
#line 724 "constraint.m"
            /* direct tailcall eliminated */
#line 724 "constraint.m"
            {
#line 724 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Constraints_13;
#line 724 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0__tmp_copy_2 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
#line 724 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;

#line 724 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0__tmp_copy_4;
#line 724 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0__tmp_copy_2;
#line 724 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 724 "constraint.m"
            }
#line 724 "constraint.m"
            continue;
#line 707 "constraint.m"
          }
#line 704 "constraint.m"
        break;
#line 704 "constraint.m"
      }
#line 700 "constraint.m"
  }
#line 700 "constraint.m"
}

#line 669 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
#line 669 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 669 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 669 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 669 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 669 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
#line 669 "constraint.m"
{
#line 673 "constraint.m"
  while (MR_TRUE)
#line 673 "constraint.m"
    {
#line 673 "constraint.m"
      /* tailcall optimized into a loop */
#line 673 "constraint.m"
      {
#line 673 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 673 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 673 "constraint.m"
          {
#line 674 "constraint.m"
            {
#line 674 "constraint.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__HeadVar__2_2, transform_hlds__constraint__HeadVar__3_3);
            }
#line 673 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 673 "constraint.m"
          }
#line 673 "constraint.m"
        else
#line 676 "constraint.m"
          {
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_35_35;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_11_43;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__Goal0_11;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints0_12;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__SimpleConstraints_17;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__ComplexConstraints0_18;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__GoalList1_19;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__ComplexConstraints_20;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__RevComplexConstraints_21;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoalList1_22;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoals1_23;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__V_28_28;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__V_29_29;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__V_30_30;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_32_32;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__RevSimpleConstraints_39;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__RevComplexConstraints_40;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__GoalExpr0_50;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__HasSubGoals_52;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_53;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_16_54;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_17_55;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_82;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_84;
#line 676 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapDelta_85;
#line 676 "constraint.m"
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
#line 773 "constraint.m"
            MR_Word transform_hlds__constraint__V_81_81;
#line 774 "constraint.m"
            MR_Word transform_hlds__constraint__V_88_88;
#line 774 "constraint.m"
            MR_Word transform_hlds__constraint__V_89_89;
#line 774 "constraint.m"
            MR_Word transform_hlds__constraint__V_90_90;
#line 774 "constraint.m"
            MR_Word transform_hlds__constraint__V_91_91;
#line 777 "constraint.m"
            MR_Word transform_hlds__constraint__V_92_92;
#line 777 "constraint.m"
            MR_Word transform_hlds__constraint__V_93_93;
#line 777 "constraint.m"
            MR_Word transform_hlds__constraint__V_94_94;
#line 777 "constraint.m"
            MR_Word transform_hlds__constraint__V_96_96;
#line 777 "constraint.m"
            MR_Word transform_hlds__constraint__V_95_95;

#line 675 "constraint.m"
            transform_hlds__constraint__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_26_26, (MR_Integer) 0)));
#line 675 "constraint.m"
            transform_hlds__constraint__Constraints0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_26_26, (MR_Integer) 1)));
#line 693 "constraint.m"
            {
#line 693 "constraint.m"
              transform_hlds__constraint__filter_complex_constraints_2_5_p_0(transform_hlds__constraint__Constraints0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevSimpleConstraints_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevComplexConstraints_40);
            }
#line 4096 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_11_43 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
#line 695 "constraint.m"
            {
#line 695 "constraint.m"
              transform_hlds__constraint__SimpleConstraints_17 = mercury__list__reverse_1_f_0(transform_hlds__constraint__TypeCtorInfo_11_43, transform_hlds__constraint__RevSimpleConstraints_39);
            }
#line 696 "constraint.m"
            {
#line 696 "constraint.m"
              transform_hlds__constraint__ComplexConstraints0_18 = mercury__list__reverse_1_f_0(transform_hlds__constraint__TypeCtorInfo_11_43, transform_hlds__constraint__RevComplexConstraints_40);
            }
#line 105 "constraint.m"
            transform_hlds__constraint__GoalExpr0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 0)));
#line 105 "constraint.m"
            transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 1)));
#line 106 "constraint.m"
            {
#line 106 "constraint.m"
              transform_hlds__constraint__HasSubGoals_52 = hlds__hlds_goal__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_50);
            }
#line 109 "constraint.m"
            if ((transform_hlds__constraint__HasSubGoals_52 == (MR_Integer) 1))
#line 108 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 109 "constraint.m"
            else
#line 801 "constraint.m"
              if ((transform_hlds__constraint__SimpleConstraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 801 "constraint.m"
              else
#line 803 "constraint.m"
                {
#line 804 "constraint.m"
                  MR_Word transform_hlds__constraint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 804 "constraint.m"
                  MR_Word transform_hlds__constraint__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 804 "constraint.m"
                  MR_Word transform_hlds__constraint__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 804 "constraint.m"
                  MR_Word transform_hlds__constraint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 804 "constraint.m"
                  MR_Word transform_hlds__constraint__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));

#line 804 "constraint.m"
                  {
#line 804 "constraint.m"
                    transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 804 "constraint.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 0) = ((MR_Box) (transform_hlds__constraint__V_74_74));
#line 804 "constraint.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 1) = ((MR_Box) (transform_hlds__constraint__V_75_75));
#line 804 "constraint.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 2) = ((MR_Box) (transform_hlds__constraint__V_76_76));
#line 804 "constraint.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 3) = ((MR_Box) (transform_hlds__constraint__V_77_77));
#line 804 "constraint.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 804 "constraint.m"
                  }
#line 803 "constraint.m"
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
#line 680 "constraint.m"
            {
#line 680 "constraint.m"
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__ComplexConstraints0_18, &transform_hlds__constraint__ComplexConstraints_20);
            }
#line 4206 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 681 "constraint.m"
            {
#line 681 "constraint.m"
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__ComplexConstraints_20, &transform_hlds__constraint__RevComplexConstraints_21);
            }
#line 682 "constraint.m"
            {
#line 682 "constraint.m"
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__GoalList1_19, &transform_hlds__constraint__RevGoalList1_22);
            }
#line 683 "constraint.m"
            {
#line 683 "constraint.m"
              transform_hlds__constraint__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_30_30, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__2_2));
#line 683 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "constraint.m"
            }
#line 683 "constraint.m"
            {
#line 683 "constraint.m"
              transform_hlds__constraint__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_29_29, 0) = ((MR_Box) (transform_hlds__constraint__RevGoalList1_22));
#line 683 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_29_29, 1) = ((MR_Box) (transform_hlds__constraint__V_30_30));
#line 683 "constraint.m"
            }
#line 683 "constraint.m"
            {
#line 683 "constraint.m"
              transform_hlds__constraint__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_28_28, 0) = ((MR_Box) (transform_hlds__constraint__RevComplexConstraints_21));
#line 683 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_28_28, 1) = ((MR_Box) (transform_hlds__constraint__V_29_29));
#line 683 "constraint.m"
            }
#line 683 "constraint.m"
            {
#line 683 "constraint.m"
              mercury__list__condense_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__V_28_28, &transform_hlds__constraint__RevGoals1_23);
            }
#line 773 "constraint.m"
            transform_hlds__constraint__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 0)));
#line 773 "constraint.m"
            transform_hlds__constraint__GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 1)));
#line 774 "constraint.m"
            transform_hlds__constraint__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 774 "constraint.m"
            transform_hlds__constraint__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 774 "constraint.m"
            transform_hlds__constraint__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 774 "constraint.m"
            transform_hlds__constraint__InstMap0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 774 "constraint.m"
            transform_hlds__constraint__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 775 "constraint.m"
            {
#line 775 "constraint.m"
              transform_hlds__constraint__InstMapDelta_85 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_82);
            }
#line 776 "constraint.m"
            {
#line 776 "constraint.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_84, transform_hlds__constraint__InstMapDelta_85, &transform_hlds__constraint__InstMap_86);
            }
#line 777 "constraint.m"
            transform_hlds__constraint__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 777 "constraint.m"
            transform_hlds__constraint__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 777 "constraint.m"
            transform_hlds__constraint__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 777 "constraint.m"
            transform_hlds__constraint__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 777 "constraint.m"
            transform_hlds__constraint__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 777 "constraint.m"
            {
#line 777 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 777 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__constraint__V_92_92));
#line 777 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__constraint__V_93_93));
#line 777 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__constraint__V_94_94));
#line 777 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_86));
#line 777 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (transform_hlds__constraint__V_96_96));
#line 777 "constraint.m"
            }
#line 686 "constraint.m"
            /* direct tailcall eliminated */
#line 686 "constraint.m"
            {
#line 686 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Goals0_13;
#line 686 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__2__tmp_copy_2 = transform_hlds__constraint__RevGoals1_23;
#line 686 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_Info_32_32;

#line 686 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_0_4 = transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 686 "constraint.m"
              transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__2__tmp_copy_2;
#line 686 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 686 "constraint.m"
            }
#line 686 "constraint.m"
            continue;
#line 676 "constraint.m"
          }
#line 673 "constraint.m"
      }
#line 673 "constraint.m"
      break;
#line 673 "constraint.m"
    }
#line 669 "constraint.m"
}

#line 641 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
#line 641 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 641 "constraint.m"
{
#line 641 "constraint.m"
  {
#line 641 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 641 "constraint.m"
    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0, 1);
#line 641 "constraint.m"
  }
#line 641 "constraint.m"
}

#line 641 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
#line 641 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 641 "constraint.m"
{
#line 641 "constraint.m"
  {
#line 641 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 641 "constraint.m"
    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31);
#line 641 "constraint.m"
    {
#line 641 "constraint.m"
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(transform_hlds__constraint__env_ptr);
#line 641 "constraint.m"
      return;
    }
#line 641 "constraint.m"
  }
#line 641 "constraint.m"
}

#line 641 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
#line 641 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 641 "constraint.m"
{
#line 641 "constraint.m"
  {
#line 641 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 641 "constraint.m"
    {
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_57;
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierChangedVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 1)));
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 1)));
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintNonLocals_55;
#line 656 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_56;
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 0)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 2)));
#line 657 "constraint.m"
      MR_Word transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 3)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 0)));

#line 660 "constraint.m"
      {
#line 660 "constraint.m"
        transform_hlds__constraint__ConstraintNonLocals_55 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_54);
      }
#line 4426 "transform_hlds.constraint.c"
      transform_hlds__constraint__TypeCtorInfo_17_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 661 "constraint.m"
      {
#line 661 "constraint.m"
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierChangedVars_46, transform_hlds__constraint__ConstraintNonLocals_55, &transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
#line 663 "constraint.m"
      {
#line 663 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
#line 642 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 642 "constraint.m"
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
#line 642 "constraint.m"
        {
#line 642 "constraint.m"
          transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(transform_hlds__constraint__env_ptr);
#line 642 "constraint.m"
          return;
        }
#line 641 "constraint.m"
    }
#line 641 "constraint.m"
  }
#line 641 "constraint.m"
}

#line 641 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
#line 641 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 641 "constraint.m"
{
#line 641 "constraint.m"
  {
#line 641 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 641 "constraint.m"
    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0) == 0)
#line 641 "constraint.m"
      {
#line 641 "constraint.m"
        {
#line 641 "constraint.m"
          {
#line 641 "constraint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4, transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3, transform_hlds__constraint__env_ptr);
          }
#line 641 "constraint.m"
        }
#line 641 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 641 "constraint.m"
      }
#line 641 "constraint.m"
    else
#line 641 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 641 "constraint.m"
  }
#line 641 "constraint.m"
}

#line 607 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
#line 607 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
#line 607 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
#line 607 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7)
#line 607 "constraint.m"
{
#line 607 "constraint.m"
  {
#line 607 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s transform_hlds__constraint__env;

#line 607 "constraint.m"
    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4;
#line 612 "constraint.m"
    while (MR_TRUE)
#line 612 "constraint.m"
      {
#line 612 "constraint.m"
        /* tailcall optimized into a loop */
#line 612 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "constraint.m"
          {
#line 612 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
#line 612 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevDependent_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 612 "constraint.m"
          }
#line 612 "constraint.m"
        else
#line 615 "constraint.m"
          {
#line 615 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_19;
#line 615 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_22;
#line 615 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_24;
#line 615 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoalInfo_27;
#line 615 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintNonLocals_28;
#line 615 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
#line 615 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;
#line 616 "constraint.m"
            MR_Word transform_hlds__constraint__V_23_23;
#line 616 "constraint.m"
            MR_Word transform_hlds__constraint__V_25_25;
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__V_26_26;

#line 615 "constraint.m"
            (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 615 "constraint.m"
            transform_hlds__constraint__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 616 "constraint.m"
            transform_hlds__constraint__ConstraintGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
#line 616 "constraint.m"
            transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
#line 616 "constraint.m"
            transform_hlds__constraint__IncompatibleInstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
#line 616 "constraint.m"
            transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
#line 617 "constraint.m"
            transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 0)));
#line 617 "constraint.m"
            transform_hlds__constraint__ConstraintGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 1)));
#line 618 "constraint.m"
            {
#line 618 "constraint.m"
              transform_hlds__constraint__ConstraintNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_27);
            }
#line 625 "constraint.m"
            {
#line 625 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 625 "constraint.m"
              MR_Word transform_hlds__constraint__OutputVarsUsedByConstraint_29;

#line 624 "constraint.m"
              {
#line 624 "constraint.m"
                parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__ConstraintNonLocals_28, transform_hlds__constraint__HeadVar__2_2, &transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
#line 626 "constraint.m"
              {
#line 626 "constraint.m"
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
#line 626 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 625 "constraint.m"
            }
#line 627 "constraint.m"
            if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
#line 627 "constraint.m"
              {
#line 633 "constraint.m"
                {
#line 633 "constraint.m"
                  MR_Word transform_hlds__constraint__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 633 "constraint.m"
                  MR_Word transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30;

#line 632 "constraint.m"
                  {
#line 632 "constraint.m"
                    parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__IncompatibleInstVars_24, &transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
#line 634 "constraint.m"
                  {
#line 634 "constraint.m"
                    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
#line 634 "constraint.m"
                  (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 633 "constraint.m"
                }
#line 627 "constraint.m"
                if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
#line 641 "constraint.m"
                  {
#line 641 "constraint.m"
                    {
#line 641 "constraint.m"
                      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(&transform_hlds__constraint__env);
                    }
#line 641 "constraint.m"
                  }
#line 627 "constraint.m"
              }
#line 646 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
#line 645 "constraint.m"
              {
#line 645 "constraint.m"
                {
#line 645 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
#line 645 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4));
#line 645 "constraint.m"
                }
#line 645 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
#line 645 "constraint.m"
              }
#line 646 "constraint.m"
            else
#line 647 "constraint.m"
              {
#line 647 "constraint.m"
                {
#line 647 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
#line 647 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6));
#line 647 "constraint.m"
                }
#line 647 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 647 "constraint.m"
              }
#line 649 "constraint.m"
            /* direct tailcall eliminated */
#line 649 "constraint.m"
            {
#line 649 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__3__tmp_copy_3 = transform_hlds__constraint__Constraints_19;
#line 649 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
#line 649 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0__tmp_copy_6 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;

#line 649 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0__tmp_copy_6;
#line 649 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_0__tmp_copy_4;
#line 649 "constraint.m"
              transform_hlds__constraint__HeadVar__3_3 = transform_hlds__constraint__HeadVar__3__tmp_copy_3;
#line 649 "constraint.m"
            }
#line 649 "constraint.m"
            continue;
#line 615 "constraint.m"
          }
#line 612 "constraint.m"
        break;
#line 612 "constraint.m"
      }
#line 607 "constraint.m"
  }
#line 607 "constraint.m"
}

#line 597 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
#line 597 "constraint.m"
  MR_Word transform_hlds__constraint__NonLocals_6,
#line 597 "constraint.m"
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
#line 597 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 597 "constraint.m"
  MR_Word * transform_hlds__constraint__Dependent_9,
#line 597 "constraint.m"
  MR_Word * transform_hlds__constraint__Independent_10)
#line 597 "constraint.m"
{
#line 601 "constraint.m"
  {
#line 601 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 601 "constraint.m"
    MR_Word transform_hlds__constraint__TypeCtorInfo_15_15;
#line 601 "constraint.m"
    MR_Word transform_hlds__constraint__RevDependent_11;
#line 601 "constraint.m"
    MR_Word transform_hlds__constraint__RevIndependent_12;

#line 602 "constraint.m"
    {
#line 602 "constraint.m"
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(transform_hlds__constraint__NonLocals_6, transform_hlds__constraint__GoalOutputVars_7, transform_hlds__constraint__Constraints_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevDependent_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevIndependent_12);
    }
#line 4740 "transform_hlds.constraint.c"
    transform_hlds__constraint__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
#line 604 "constraint.m"
    {
#line 604 "constraint.m"
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevDependent_11, transform_hlds__constraint__Dependent_9);
    }
#line 605 "constraint.m"
    {
#line 605 "constraint.m"
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevIndependent_12, transform_hlds__constraint__Independent_10);
#line 605 "constraint.m"
      return;
    }
#line 601 "constraint.m"
  }
#line 597 "constraint.m"
}

#line 551 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
#line 551 "constraint.m"
  MR_Word transform_hlds__constraint__ConstructVar_1,
#line 551 "constraint.m"
  MR_Word transform_hlds__constraint__Construct0_2,
#line 551 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 551 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 551 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 551 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
#line 551 "constraint.m"
{
#line 555 "constraint.m"
  {
#line 555 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 555 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "constraint.m"
      {
#line 555 "constraint.m"
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 555 "constraint.m"
      }
#line 555 "constraint.m"
    else
#line 557 "constraint.m"
      {
#line 557 "constraint.m"
        MR_Word transform_hlds__constraint__Constraint0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 557 "constraint.m"
        MR_Word transform_hlds__constraint__Constraints0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 557 "constraint.m"
        MR_Word transform_hlds__constraint__Constraint_16;
#line 557 "constraint.m"
        MR_Word transform_hlds__constraint__Constraints_17;
#line 557 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintGoal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 0)));
#line 557 "constraint.m"
        MR_Word transform_hlds__constraint__ChangedVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 1)));
#line 557 "constraint.m"
        MR_Word transform_hlds__constraint__IncompatibleInstVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 2)));
#line 557 "constraint.m"
        MR_Word transform_hlds__constraint__Constructs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 3)));
#line 557 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_39_39;
#line 561 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 1)));
#line 561 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintNonLocals_25;
#line 561 "constraint.m"
        MR_Word transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 0)));

#line 562 "constraint.m"
        {
#line 562 "constraint.m"
          transform_hlds__constraint__ConstraintNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintInfo_24);
        }
#line 563 "constraint.m"
        {
#line 563 "constraint.m"
          transform_hlds__constraint__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__constraint__ConstraintNonLocals_25, transform_hlds__constraint__ConstructVar_1);
        }
#line 578 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 565 "constraint.m"
          {
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_64_64;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__NewVar_28;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__VarSet_29;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__VarType_30;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes_31;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__Subn_32;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__Construct_33;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__Constructs_34;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_35;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__V_41_41;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__V_52_52;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__V_55_55;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__V_56_56;
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 565 "constraint.m"
            MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 570 "constraint.m"
            MR_Word transform_hlds__constraint__V_53_53;
#line 570 "constraint.m"
            MR_Word transform_hlds__constraint__V_54_54;

#line 567 "constraint.m"
            {
#line 567 "constraint.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarSet0_26, &transform_hlds__constraint__VarSet_29);
            }
#line 568 "constraint.m"
            {
#line 568 "constraint.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes0_27, transform_hlds__constraint__ConstructVar_1, &transform_hlds__constraint__VarType_30);
            }
#line 569 "constraint.m"
            {
#line 569 "constraint.m"
              parse_tree__prog_data__add_var_type_4_p_0(transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarType_30, transform_hlds__constraint__VarTypes0_27, &transform_hlds__constraint__VarTypes_31);
            }
#line 570 "constraint.m"
            transform_hlds__constraint__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 570 "constraint.m"
            transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 570 "constraint.m"
            transform_hlds__constraint__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 570 "constraint.m"
            transform_hlds__constraint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 570 "constraint.m"
            transform_hlds__constraint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 571 "constraint.m"
            {
#line 571 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 571 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (transform_hlds__constraint__V_52_52));
#line 571 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_31));
#line 571 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_29));
#line 571 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (transform_hlds__constraint__V_55_55));
#line 571 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (transform_hlds__constraint__V_56_56));
#line 571 "constraint.m"
            }
#line 572 "constraint.m"
            {
#line 572 "constraint.m"
              transform_hlds__constraint__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 572 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_41_41, 0) = ((MR_Box) (transform_hlds__constraint__ConstructVar_1));
#line 572 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_41_41, 1) = ((MR_Box) (transform_hlds__constraint__NewVar_28));
#line 572 "constraint.m"
            }
#line 572 "constraint.m"
            {
#line 572 "constraint.m"
              transform_hlds__constraint__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_40_40, 0) = ((MR_Box) (transform_hlds__constraint__V_41_41));
#line 572 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "constraint.m"
            }
#line 4938 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_64_64 = (MR_Word) &transform_hlds__constraint_scalar_common_1[2];
#line 572 "constraint.m"
            {
#line 572 "constraint.m"
              mercury__map__from_assoc_list_2_p_0(transform_hlds__constraint__TypeInfo_64_64, transform_hlds__constraint__TypeInfo_64_64, transform_hlds__constraint__V_40_40, &transform_hlds__constraint__Subn_32);
            }
#line 573 "constraint.m"
            {
#line 573 "constraint.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__Construct0_2, &transform_hlds__constraint__Construct_33);
            }
#line 574 "constraint.m"
            {
#line 574 "constraint.m"
              transform_hlds__constraint__Constructs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 0) = ((MR_Box) (transform_hlds__constraint__Construct_33));
#line 574 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 1) = ((MR_Box) (transform_hlds__constraint__Constructs0_22));
#line 574 "constraint.m"
            }
#line 575 "constraint.m"
            {
#line 575 "constraint.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__ConstraintGoal0_19, &transform_hlds__constraint__ConstraintGoal_35);
            }
#line 576 "constraint.m"
            {
#line 576 "constraint.m"
              transform_hlds__constraint__Constraint_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 576 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 0) = ((MR_Box) (transform_hlds__constraint__ConstraintGoal_35));
#line 576 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_20));
#line 576 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_21));
#line 576 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 3) = ((MR_Box) (transform_hlds__constraint__Constructs_34));
#line 576 "constraint.m"
            }
#line 565 "constraint.m"
          }
#line 578 "constraint.m"
        else
#line 579 "constraint.m"
          {
#line 579 "constraint.m"
            transform_hlds__constraint__Constraint_16 = transform_hlds__constraint__Constraint0_14;
#line 579 "constraint.m"
            transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 579 "constraint.m"
          }
#line 581 "constraint.m"
        {
#line 581 "constraint.m"
          transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_1, transform_hlds__constraint__Construct0_2, transform_hlds__constraint__Constraints0_15, &transform_hlds__constraint__Constraints_17, transform_hlds__constraint__STATE_VARIABLE_Info_39_39, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
#line 557 "constraint.m"
        {
#line 557 "constraint.m"
          MR_Word base;
#line 557 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "constraint.m"
          *transform_hlds__constraint__HeadVar__4_4 = base;
#line 557 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_16));
#line 557 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_17));
#line 557 "constraint.m"
        }
#line 557 "constraint.m"
      }
#line 555 "constraint.m"
  }
#line 551 "constraint.m"
}

#line 543 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__add_constraint_feature_1_f_0(
#line 543 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 543 "constraint.m"
{
#line 546 "constraint.m"
  {
#line 546 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 546 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;
#line 546 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 546 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 546 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5;

#line 547 "constraint.m"
    {
#line 547 "constraint.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_4, &transform_hlds__constraint__GoalInfo_5);
    }
#line 546 "constraint.m"
    {
#line 546 "constraint.m"
      transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_3));
#line 546 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_5));
#line 546 "constraint.m"
    }
#line 546 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 546 "constraint.m"
  }
#line 543 "constraint.m"
}

#line 534 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
#line 534 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 534 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 534 "constraint.m"
{
#line 534 "constraint.m"
  {
#line 534 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 534 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_21;

#line 534 "constraint.m"
    {
#line 534 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_21 = transform_hlds__constraint__IntroducedFrom__func__attach_constraints__534__1_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 534 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_21));
#line 534 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 534 "constraint.m"
  }
#line 534 "constraint.m"
}

#line 529 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
#line 529 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_4,
#line 529 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_5)
#line 529 "constraint.m"
{
#line 532 "constraint.m"
  {
#line 532 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 532 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__3_3;
#line 532 "constraint.m"
    MR_Word transform_hlds__constraint__Constraints_6;
#line 533 "constraint.m"
    MR_Word transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 0)));
#line 533 "constraint.m"
    MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 1)));
#line 533 "constraint.m"
    MR_Word transform_hlds__constraint__V_7_7;
#line 533 "constraint.m"
    MR_Integer transform_hlds__constraint__V_8_8;
#line 533 "constraint.m"
    MR_Word transform_hlds__constraint__V_9_9;
#line 533 "constraint.m"
    MR_Word transform_hlds__constraint__V_10_10;
#line 533 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11;
#line 533 "constraint.m"
    MR_Word transform_hlds__constraint__V_12_12;

#line 533 "constraint.m"
    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 533 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 533 "constraint.m"
      {
#line 533 "constraint.m"
        transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 0)));
#line 533 "constraint.m"
        transform_hlds__constraint__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 1)));
#line 533 "constraint.m"
        transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 2)));
#line 533 "constraint.m"
        transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 3)));
#line 533 "constraint.m"
        transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 4)));
#line 533 "constraint.m"
        transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 5)));
#line 534 "constraint.m"
        {
#line 534 "constraint.m"
          MR_Word transform_hlds__constraint__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;

#line 534 "constraint.m"
          {
#line 534 "constraint.m"
            transform_hlds__constraint__Constraints_6 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_29_29, transform_hlds__constraint__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__constraint_scalar_common_2[6], transform_hlds__constraint__Constraints0_5);
          }
#line 534 "constraint.m"
        }
#line 533 "constraint.m"
      }
#line 533 "constraint.m"
    else
#line 540 "constraint.m"
      transform_hlds__constraint__Constraints_6 = transform_hlds__constraint__Constraints0_5;
#line 532 "constraint.m"
    {
#line 532 "constraint.m"
      transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 532 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__constraint__Goal_4));
#line 532 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_6));
#line 532 "constraint.m"
    }
#line 532 "constraint.m"
    return transform_hlds__constraint__HeadVar__3_3;
#line 532 "constraint.m"
  }
#line 529 "constraint.m"
}

#line 524 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
#line 524 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_3,
#line 524 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_2)
#line 524 "constraint.m"
{
#line 527 "constraint.m"
  {
#line 527 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 527 "constraint.m"
    {
#line 527 "constraint.m"
      MR_Word base;
#line 527 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_2 = base;
#line 527 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_3));
#line 527 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "constraint.m"
    }
#line 527 "constraint.m"
  }
#line 524 "constraint.m"
}

#line 510 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
#line 510 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 510 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 510 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 510 "constraint.m"
{
#line 510 "constraint.m"
  {
#line 510 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 510 "constraint.m"
    MR_Word transform_hlds__constraint__conv2_HeadVar__2_2;

#line 510 "constraint.m"
    {
#line 510 "constraint.m"
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv2_HeadVar__2_2);
    }
#line 510 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_HeadVar__2_2));
#line 510 "constraint.m"
  }
#line 510 "constraint.m"
}

#line 496 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
#line 496 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 496 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 496 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 496 "constraint.m"
{
#line 496 "constraint.m"
  {
#line 496 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 496 "constraint.m"
    MR_Word transform_hlds__constraint__conv1_HeadVar__2_2;

#line 496 "constraint.m"
    {
#line 496 "constraint.m"
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv1_HeadVar__2_2);
    }
#line 496 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_HeadVar__2_2));
#line 496 "constraint.m"
  }
#line 496 "constraint.m"
}

#line 415 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
#line 415 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 415 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 415 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 415 "constraint.m"
{
#line 415 "constraint.m"
  {
#line 415 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 415 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_21;

#line 415 "constraint.m"
    {
#line 415 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__415__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_21);
    }
#line 415 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_21));
#line 415 "constraint.m"
  }
#line 415 "constraint.m"
}

#line 409 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_1,
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_4,
#line 409 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_5,
#line 409 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
#line 409 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7)
#line 409 "constraint.m"
{
#line 413 "constraint.m"
  while (MR_TRUE)
#line 413 "constraint.m"
    {
#line 413 "constraint.m"
      /* tailcall optimized into a loop */
#line 413 "constraint.m"
      {
#line 413 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 413 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "constraint.m"
          {
#line 413 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_116_116;
#line 413 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints1_13;
#line 413 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_16;

#line 414 "constraint.m"
            {
#line 414 "constraint.m"
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_13);
            }
#line 5347 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_116_116 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 415 "constraint.m"
            {
#line 415 "constraint.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_116_116, (MR_Word) &transform_hlds__constraint_scalar_common_2[3], transform_hlds__constraint__Constraints1_13, &transform_hlds__constraint__Constraints_16);
            }
#line 418 "constraint.m"
            {
#line 418 "constraint.m"
              mercury__list__append_3_p_1(transform_hlds__constraint__TypeInfo_116_116, transform_hlds__constraint__Constraints_16, transform_hlds__constraint__Goals0_4, transform_hlds__constraint__Goals_5);
            }
#line 413 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_Info_7 = transform_hlds__constraint__STATE_VARIABLE_Info_0_6;
#line 413 "constraint.m"
          }
#line 413 "constraint.m"
        else
#line 421 "constraint.m"
          {
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__Conjunct_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__RevConjuncts0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__Goal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 0)));
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 1)));
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__OutputVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 2)));
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 3)));
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__NonLocals_38;
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__CI_ModuleInfo0_39;
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__GoalCanLoopOrThrow_40;
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__CI_ModuleInfo_41;
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__Goals1_43;
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints1_45;
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 421 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_77_77;
#line 424 "constraint.m"
            MR_Word transform_hlds__constraint__GoalExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));
#line 426 "constraint.m"
            MR_Word transform_hlds__constraint__V_101_101;
#line 426 "constraint.m"
            MR_Word transform_hlds__constraint__V_102_102;
#line 426 "constraint.m"
            MR_Word transform_hlds__constraint__V_103_103;
#line 426 "constraint.m"
            MR_Word transform_hlds__constraint__V_104_104;
#line 429 "constraint.m"
            MR_Word transform_hlds__constraint__V_106_106;
#line 429 "constraint.m"
            MR_Word transform_hlds__constraint__V_107_107;
#line 429 "constraint.m"
            MR_Word transform_hlds__constraint__V_108_108;
#line 429 "constraint.m"
            MR_Word transform_hlds__constraint__V_109_109;
#line 429 "constraint.m"
            MR_Word transform_hlds__constraint__V_105_105;
#line 435 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_117_117;
#line 435 "constraint.m"
            MR_Word transform_hlds__constraint__Detism_42;
#line 435 "constraint.m"
            MR_Word transform_hlds__constraint__V_69_69;

#line 425 "constraint.m"
            {
#line 425 "constraint.m"
              transform_hlds__constraint__NonLocals_38 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__GoalInfo_37);
            }
#line 426 "constraint.m"
            transform_hlds__constraint__CI_ModuleInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 426 "constraint.m"
            transform_hlds__constraint__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 426 "constraint.m"
            transform_hlds__constraint__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 426 "constraint.m"
            transform_hlds__constraint__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 426 "constraint.m"
            transform_hlds__constraint__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 427 "constraint.m"
            {
#line 427 "constraint.m"
              hlds__goal_form__goal_can_loop_or_throw_4_p_0(transform_hlds__constraint__Goal_32, &transform_hlds__constraint__GoalCanLoopOrThrow_40, transform_hlds__constraint__CI_ModuleInfo0_39, &transform_hlds__constraint__CI_ModuleInfo_41);
            }
#line 429 "constraint.m"
            transform_hlds__constraint__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 429 "constraint.m"
            transform_hlds__constraint__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 429 "constraint.m"
            transform_hlds__constraint__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 429 "constraint.m"
            transform_hlds__constraint__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 429 "constraint.m"
            transform_hlds__constraint__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 429 "constraint.m"
            {
#line 429 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 429 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 0) = ((MR_Box) (transform_hlds__constraint__CI_ModuleInfo_41));
#line 429 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 1) = ((MR_Box) (transform_hlds__constraint__V_106_106));
#line 429 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 2) = ((MR_Box) (transform_hlds__constraint__V_107_107));
#line 429 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 3) = ((MR_Box) (transform_hlds__constraint__V_108_108));
#line 429 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 4) = ((MR_Box) (transform_hlds__constraint__V_109_109));
#line 429 "constraint.m"
            }
#line 435 "constraint.m"
            {
#line 435 "constraint.m"
              transform_hlds__constraint__Detism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_37);
            }
#line 437 "constraint.m"
            if ((transform_hlds__constraint__Detism_42 == (MR_Integer) 7))
#line 437 "constraint.m"
              transform_hlds__constraint__succeeded = MR_TRUE;
#line 437 "constraint.m"
            else
#line 437 "constraint.m"
              if ((transform_hlds__constraint__Detism_42 == (MR_Integer) 1))
#line 436 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 437 "constraint.m"
              else
#line 437 "constraint.m"
                transform_hlds__constraint__succeeded = MR_FALSE;
#line 435 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 435 "constraint.m"
              {
#line 5493 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 442 "constraint.m"
                {
#line 442 "constraint.m"
                  transform_hlds__constraint__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_117_117, transform_hlds__constraint__OutputVars_34);
                }
#line 435 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 435 "constraint.m"
                  {
#line 445 "constraint.m"
                    {
#line 445 "constraint.m"
                      transform_hlds__constraint__V_69_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_37);
                    }
#line 445 "constraint.m"
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_69_69 == (MR_Integer) 0);
#line 435 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 448 "constraint.m"
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalCanLoopOrThrow_40 == (MR_Integer) 1);
#line 435 "constraint.m"
                  }
#line 435 "constraint.m"
              }
#line 456 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 452 "constraint.m"
              {
#line 452 "constraint.m"
                MR_Word transform_hlds__constraint__Constraint_44;

#line 452 "constraint.m"
                transform_hlds__constraint__Goals1_43 = transform_hlds__constraint__Goals0_4;
#line 453 "constraint.m"
                {
#line 453 "constraint.m"
                  transform_hlds__constraint__Constraint_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 453 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_33));
#line 453 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_35));
#line 453 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "constraint.m"
                }
#line 455 "constraint.m"
                {
#line 455 "constraint.m"
                  transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_45, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_44));
#line 455 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_45, 1) = ((MR_Box) (transform_hlds__constraint__Constraints0_3));
#line 455 "constraint.m"
                }
#line 455 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 452 "constraint.m"
              }
#line 456 "constraint.m"
            else
#line 476 "constraint.m"
              {
#line 476 "constraint.m"
                MR_Word transform_hlds__constraint__ConstructVar_52;
#line 466 "constraint.m"
                MR_Word transform_hlds__constraint__Unify_49;
#line 466 "constraint.m"
                MR_Word transform_hlds__constraint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));
#line 466 "constraint.m"
                MR_Word transform_hlds__constraint__V_73_73;
#line 466 "constraint.m"
                MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 466 "constraint.m"
                MR_Word transform_hlds__constraint__V_46_46;
#line 466 "constraint.m"
                MR_Word transform_hlds__constraint__V_47_47;
#line 466 "constraint.m"
                MR_Word transform_hlds__constraint__V_48_48;
#line 466 "constraint.m"
                MR_Word transform_hlds__constraint__V_50_50;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_53_53;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_54_54;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_55_55;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_56_56;
#line 467 "constraint.m"
                MR_Word transform_hlds__constraint__V_57_57;

#line 466 "constraint.m"
                transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 466 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 466 "constraint.m"
                  {
#line 466 "constraint.m"
                    transform_hlds__constraint__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 0)));
#line 466 "constraint.m"
                    transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 1)));
#line 466 "constraint.m"
                    transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 2)));
#line 466 "constraint.m"
                    transform_hlds__constraint__Unify_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 3)));
#line 466 "constraint.m"
                    transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 4)));
#line 467 "constraint.m"
                    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__Unify_49)) == (MR_mktag((MR_Integer) 0)));
#line 467 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 467 "constraint.m"
                      {
#line 467 "constraint.m"
                        transform_hlds__constraint__ConstructVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 0)));
#line 467 "constraint.m"
                        transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 1)));
#line 467 "constraint.m"
                        transform_hlds__constraint__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 2)));
#line 467 "constraint.m"
                        transform_hlds__constraint__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 3)));
#line 467 "constraint.m"
                        transform_hlds__constraint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 4)));
#line 467 "constraint.m"
                        transform_hlds__constraint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 5)));
#line 467 "constraint.m"
                        transform_hlds__constraint__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 6)));
#line 467 "constraint.m"
                        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "constraint.m"
                      }
#line 466 "constraint.m"
                  }
#line 476 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 469 "constraint.m"
                  {
#line 469 "constraint.m"
                    MR_Word transform_hlds__constraint__V_74_74;
#line 469 "constraint.m"
                    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_76_76;
#line 475 "constraint.m"
                    MR_Word transform_hlds__constraint__V_110_110;
#line 475 "constraint.m"
                    MR_Word transform_hlds__constraint__V_111_111;
#line 475 "constraint.m"
                    MR_Word transform_hlds__constraint__V_112_112;
#line 475 "constraint.m"
                    MR_Word transform_hlds__constraint__V_113_113;
#line 475 "constraint.m"
                    MR_Word transform_hlds__constraint__V_114_114;

#line 469 "constraint.m"
                    {
#line 469 "constraint.m"
                      transform_hlds__constraint__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_74_74, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 469 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "constraint.m"
                    }
#line 469 "constraint.m"
                    {
#line 469 "constraint.m"
                      transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "constraint.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_74_74));
#line 469 "constraint.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 469 "constraint.m"
                    }
#line 470 "constraint.m"
                    {
#line 470 "constraint.m"
                      transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_52, transform_hlds__constraint__Goal_32, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_45, transform_hlds__constraint__STATE_VARIABLE_Info_68_68, &transform_hlds__constraint__STATE_VARIABLE_Info_76_76);
                    }
#line 475 "constraint.m"
                    transform_hlds__constraint__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 0)));
#line 475 "constraint.m"
                    transform_hlds__constraint__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 1)));
#line 475 "constraint.m"
                    transform_hlds__constraint__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 2)));
#line 475 "constraint.m"
                    transform_hlds__constraint__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 3)));
#line 475 "constraint.m"
                    transform_hlds__constraint__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 4)));
#line 475 "constraint.m"
                    {
#line 475 "constraint.m"
                      transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 475 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 0) = ((MR_Box) (transform_hlds__constraint__V_110_110));
#line 475 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 1) = ((MR_Box) (transform_hlds__constraint__V_111_111));
#line 475 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 2) = ((MR_Box) (transform_hlds__constraint__V_112_112));
#line 475 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 3) = ((MR_Box) (transform_hlds__constraint__V_113_113));
#line 475 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 4) = ((MR_Box) ((MR_Integer) 1));
#line 475 "constraint.m"
                    }
#line 469 "constraint.m"
                  }
#line 476 "constraint.m"
                else
#line 485 "constraint.m"
                  {
#line 479 "constraint.m"
                    MR_Word transform_hlds__constraint__Detism_94;
#line 479 "constraint.m"
                    MR_Word transform_hlds__constraint__V_126_126;
#line 480 "constraint.m"
                    MR_Word transform_hlds__constraint__V_58_58;

#line 479 "constraint.m"
                    {
#line 479 "constraint.m"
                      transform_hlds__constraint__Detism_94 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_37);
                    }
#line 480 "constraint.m"
                    {
#line 480 "constraint.m"
                      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__constraint__Detism_94, &transform_hlds__constraint__V_58_58, &transform_hlds__constraint__V_126_126);
                    }
#line 480 "constraint.m"
                    transform_hlds__constraint__succeeded = ((MR_Integer) 0 == transform_hlds__constraint__V_126_126);
#line 485 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 482 "constraint.m"
                      {
#line 482 "constraint.m"
                        MR_Word transform_hlds__constraint__V_81_81;

#line 482 "constraint.m"
                        {
#line 482 "constraint.m"
                          transform_hlds__constraint__constraint_info_update_changed_3_p_0(transform_hlds__constraint__Constraints0_3, transform_hlds__constraint__STATE_VARIABLE_Info_68_68, &transform_hlds__constraint__STATE_VARIABLE_Info_77_77);
                        }
#line 483 "constraint.m"
                        transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "constraint.m"
                        {
#line 484 "constraint.m"
                          transform_hlds__constraint__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_81_81, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 484 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "constraint.m"
                        }
#line 484 "constraint.m"
                        {
#line 484 "constraint.m"
                          transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "constraint.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_81_81));
#line 484 "constraint.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 484 "constraint.m"
                        }
#line 482 "constraint.m"
                      }
#line 485 "constraint.m"
                    else
#line 499 "constraint.m"
                      {
#line 488 "constraint.m"
                        MR_Word transform_hlds__constraint__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 488 "constraint.m"
                        MR_Word transform_hlds__constraint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));

#line 488 "constraint.m"
                        {
#line 488 "constraint.m"
                          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(transform_hlds__constraint__GoalInfo_37, transform_hlds__constraint__V_127_127);
                        }
#line 488 "constraint.m"
                        if (transform_hlds__constraint__succeeded)
#line 488 "constraint.m"
                          {
#line 489 "constraint.m"
                            {
#line 489 "constraint.m"
                              MR_Word transform_hlds__constraint__V_84_84;

#line 489 "constraint.m"
                              {
#line 489 "constraint.m"
                                transform_hlds__constraint__V_84_84 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_37);
                              }
#line 489 "constraint.m"
                              transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_84_84 == (MR_Integer) 2);
#line 489 "constraint.m"
                            }
#line 490 "constraint.m"
                            if (!(transform_hlds__constraint__succeeded))
#line 490 "constraint.m"
                              {
#line 490 "constraint.m"
                                {
#line 490 "constraint.m"
                                  transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo_37, (MR_Integer) 17);
                                }
#line 490 "constraint.m"
                              }
#line 488 "constraint.m"
                          }
#line 499 "constraint.m"
                        if (transform_hlds__constraint__succeeded)
#line 493 "constraint.m"
                          {
#line 493 "constraint.m"
                            MR_Word transform_hlds__constraint__TypeInfo_121_121;
#line 493 "constraint.m"
                            MR_Word transform_hlds__constraint__ConstraintGoals_60;
#line 493 "constraint.m"
                            MR_Word transform_hlds__constraint__GoalsAndConstraints_61;
#line 493 "constraint.m"
                            MR_Word transform_hlds__constraint__V_86_86;

#line 493 "constraint.m"
                            transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "constraint.m"
                            {
#line 494 "constraint.m"
                              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__ConstraintGoals_60);
                            }
#line 496 "constraint.m"
                            {
#line 496 "constraint.m"
                              transform_hlds__constraint__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "constraint.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_86_86, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 496 "constraint.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_86_86, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_60));
#line 496 "constraint.m"
                            }
#line 5837 "transform_hlds.constraint.c"
                            transform_hlds__constraint__TypeInfo_121_121 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 496 "constraint.m"
                            {
#line 496 "constraint.m"
                              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_121_121, (MR_Word) &transform_hlds__constraint_scalar_common_2[4], transform_hlds__constraint__V_86_86, &transform_hlds__constraint__GoalsAndConstraints_61);
                            }
#line 498 "constraint.m"
                            {
#line 498 "constraint.m"
                              transform_hlds__constraint__Goals1_43 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeInfo_121_121, transform_hlds__constraint__GoalsAndConstraints_61, transform_hlds__constraint__Goals0_4);
                            }
#line 493 "constraint.m"
                          }
#line 499 "constraint.m"
                        else
#line 515 "constraint.m"
                          {
#line 502 "constraint.m"
                            MR_Word transform_hlds__constraint__Globals_62;
#line 502 "constraint.m"
                            MR_Word transform_hlds__constraint__V_87_87;
#line 502 "constraint.m"
                            MR_Word transform_hlds__constraint__V_88_88;

#line 502 "constraint.m"
                            {
#line 502 "constraint.m"
                              transform_hlds__constraint__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(transform_hlds__constraint__ModuleInfo_1, transform_hlds__constraint__Goal_32);
                            }
#line 502 "constraint.m"
                            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 502 "constraint.m"
                            if (transform_hlds__constraint__succeeded)
#line 502 "constraint.m"
                              {
#line 503 "constraint.m"
                                {
#line 503 "constraint.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__constraint__ModuleInfo_1, &transform_hlds__constraint__Globals_62);
                                }
#line 504 "constraint.m"
                                transform_hlds__constraint__V_87_87 = (MR_Integer) 159;
#line 504 "constraint.m"
                                transform_hlds__constraint__V_88_88 = (MR_Integer) 1;
#line 504 "constraint.m"
                                {
#line 504 "constraint.m"
                                  transform_hlds__constraint__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__constraint__Globals_62, transform_hlds__constraint__V_87_87, transform_hlds__constraint__V_88_88);
                                }
#line 502 "constraint.m"
                              }
#line 515 "constraint.m"
                            if (transform_hlds__constraint__succeeded)
#line 507 "constraint.m"
                              {
#line 507 "constraint.m"
                                MR_Word transform_hlds__constraint__TypeInfo_125_125;
#line 507 "constraint.m"
                                MR_Word transform_hlds__constraint__DependentConstraints_63;
#line 507 "constraint.m"
                                MR_Word transform_hlds__constraint__IndependentConstraints_64;
#line 507 "constraint.m"
                                MR_Word transform_hlds__constraint__IndependentConstraintGoals_65;
#line 507 "constraint.m"
                                MR_Word transform_hlds__constraint__V_90_90;
#line 507 "constraint.m"
                                MR_Word transform_hlds__constraint__V_91_91;
#line 507 "constraint.m"
                                MR_Word transform_hlds__constraint__GoalsAndConstraints_95;

#line 506 "constraint.m"
                                {
#line 506 "constraint.m"
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_38, transform_hlds__constraint__ChangedVars_33, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_63, &transform_hlds__constraint__IndependentConstraints_64);
                                }
#line 508 "constraint.m"
                                {
#line 508 "constraint.m"
                                  transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__IndependentConstraints_64, &transform_hlds__constraint__IndependentConstraintGoals_65);
                                }
#line 5918 "transform_hlds.constraint.c"
                                transform_hlds__constraint__TypeInfo_125_125 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 510 "constraint.m"
                                {
#line 510 "constraint.m"
                                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_125_125, (MR_Word) &transform_hlds__constraint_scalar_common_2[5], transform_hlds__constraint__IndependentConstraintGoals_65, &transform_hlds__constraint__GoalsAndConstraints_95);
                                }
#line 513 "constraint.m"
                                {
#line 513 "constraint.m"
                                  transform_hlds__constraint__V_91_91 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_32, transform_hlds__constraint__DependentConstraints_63);
                                }
#line 513 "constraint.m"
                                {
#line 513 "constraint.m"
                                  transform_hlds__constraint__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_90_90, 0) = ((MR_Box) (transform_hlds__constraint__V_91_91));
#line 513 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_90_90, 1) = ((MR_Box) (transform_hlds__constraint__GoalsAndConstraints_95));
#line 513 "constraint.m"
                                }
#line 512 "constraint.m"
                                {
#line 512 "constraint.m"
                                  transform_hlds__constraint__Goals1_43 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeInfo_125_125, transform_hlds__constraint__V_90_90, transform_hlds__constraint__Goals0_4);
                                }
#line 514 "constraint.m"
                                transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 507 "constraint.m"
                              }
#line 515 "constraint.m"
                            else
#line 517 "constraint.m"
                              {
#line 517 "constraint.m"
                                MR_Word transform_hlds__constraint__V_92_92;
#line 517 "constraint.m"
                                MR_Word transform_hlds__constraint__DependentConstraints_96;

#line 516 "constraint.m"
                                {
#line 516 "constraint.m"
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_38, transform_hlds__constraint__OutputVars_34, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_96, &transform_hlds__constraint__Constraints1_45);
                                }
#line 519 "constraint.m"
                                {
#line 519 "constraint.m"
                                  transform_hlds__constraint__V_92_92 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_32, transform_hlds__constraint__DependentConstraints_96);
                                }
#line 519 "constraint.m"
                                {
#line 519 "constraint.m"
                                  transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_92_92));
#line 519 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 519 "constraint.m"
                                }
#line 517 "constraint.m"
                              }
#line 515 "constraint.m"
                          }
#line 519 "constraint.m"
                        transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 499 "constraint.m"
                      }
#line 485 "constraint.m"
                  }
#line 476 "constraint.m"
              }
#line 521 "constraint.m"
            /* direct tailcall eliminated */
#line 521 "constraint.m"
            {
#line 521 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__2__tmp_copy_2 = transform_hlds__constraint__RevConjuncts0_27;
#line 521 "constraint.m"
              MR_Word transform_hlds__constraint__Constraints0__tmp_copy_3 = transform_hlds__constraint__Constraints1_45;
#line 521 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0__tmp_copy_4 = transform_hlds__constraint__Goals1_43;
#line 521 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_6 = transform_hlds__constraint__STATE_VARIABLE_Info_77_77;

#line 521 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_0_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_6;
#line 521 "constraint.m"
              transform_hlds__constraint__Goals0_4 = transform_hlds__constraint__Goals0__tmp_copy_4;
#line 521 "constraint.m"
              transform_hlds__constraint__Constraints0_3 = transform_hlds__constraint__Constraints0__tmp_copy_3;
#line 521 "constraint.m"
              transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__2__tmp_copy_2;
#line 521 "constraint.m"
            }
#line 521 "constraint.m"
            continue;
#line 421 "constraint.m"
          }
#line 413 "constraint.m"
      }
#line 413 "constraint.m"
      break;
#line 413 "constraint.m"
    }
#line 409 "constraint.m"
}

#line 335 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
#line 335 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 335 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 335 "constraint.m"
{
#line 335 "constraint.m"
  {
#line 335 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 335 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

#line 335 "constraint.m"
    {
#line 335 "constraint.m"
      return transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__335__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 335 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 335 "constraint.m"
  }
#line 335 "constraint.m"
}

#line 321 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
#line 321 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 321 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 321 "constraint.m"
{
#line 321 "constraint.m"
  {
#line 321 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 321 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

#line 321 "constraint.m"
    {
#line 321 "constraint.m"
      return transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__321__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 321 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 321 "constraint.m"
  }
#line 321 "constraint.m"
}

#line 300 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 300 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5,
#line 300 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevGoals_6)
#line 300 "constraint.m"
{
#line 303 "constraint.m"
  while (MR_TRUE)
#line 303 "constraint.m"
    {
#line 303 "constraint.m"
      /* tailcall optimized into a loop */
#line 303 "constraint.m"
      {
#line 303 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 303 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_RevGoals_6 = transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5;
#line 303 "constraint.m"
        else
#line 305 "constraint.m"
          {
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_54_54;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_55_55;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 1)));
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapDelta_21;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap_22;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars0_23;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapVars_24;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__InCompatible_25;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_30;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__Bound_31;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__BoundVars_32;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars_33;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__AnnotatedConjunct_34;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__V_38_38;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40;
#line 305 "constraint.m"
            MR_Word transform_hlds__constraint__V_41_41;
#line 306 "constraint.m"
            MR_Word transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 0)));

#line 307 "constraint.m"
            {
#line 307 "constraint.m"
              transform_hlds__constraint__InstMapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_20);
            }
#line 309 "constraint.m"
            {
#line 309 "constraint.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMapDelta_21, &transform_hlds__constraint__InstMap_22);
            }
#line 310 "constraint.m"
            {
#line 310 "constraint.m"
              hlds__instmap__instmap_changed_vars_5_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMap_22, transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__ModuleInfo_2, &transform_hlds__constraint__ChangedVars0_23);
            }
#line 313 "constraint.m"
            {
#line 313 "constraint.m"
              hlds__instmap__instmap_vars_list_2_p_0(transform_hlds__constraint__InstMap_22, &transform_hlds__constraint__InstMapVars_24);
            }
#line 321 "constraint.m"
            {
#line 321 "constraint.m"
              transform_hlds__constraint__InCompatible_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 321 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
#line 321 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1));
#line 321 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 321 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
#line 321 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
#line 321 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
#line 321 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
#line 321 "constraint.m"
            }
#line 6197 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 6199 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_55_55 = (MR_Word) &transform_hlds__constraint_scalar_common_1[2];
#line 328 "constraint.m"
            {
#line 328 "constraint.m"
              transform_hlds__constraint__V_38_38 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__InCompatible_25, transform_hlds__constraint__InstMapVars_24);
            }
#line 328 "constraint.m"
            {
#line 328 "constraint.m"
              transform_hlds__constraint__IncompatibleInstVars_30 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__V_38_38);
            }
#line 335 "constraint.m"
            {
#line 335 "constraint.m"
              transform_hlds__constraint__Bound_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 335 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
#line 335 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2));
#line 335 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 335 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
#line 335 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
#line 335 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
#line 335 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
#line 335 "constraint.m"
            }
#line 342 "constraint.m"
            {
#line 342 "constraint.m"
              transform_hlds__constraint__V_40_40 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__Bound_31, transform_hlds__constraint__InstMapVars_24);
            }
#line 342 "constraint.m"
            {
#line 342 "constraint.m"
              transform_hlds__constraint__BoundVars_32 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__V_40_40);
            }
#line 347 "constraint.m"
            {
#line 347 "constraint.m"
              parse_tree__set_of_var__union_3_p_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__ChangedVars0_23, transform_hlds__constraint__BoundVars_32, &transform_hlds__constraint__ChangedVars_33);
            }
#line 349 "constraint.m"
            {
#line 349 "constraint.m"
              transform_hlds__constraint__AnnotatedConjunct_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 349 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 0) = ((MR_Box) (transform_hlds__constraint__Goal_13));
#line 349 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_33));
#line 349 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 2) = ((MR_Box) (transform_hlds__constraint__BoundVars_32));
#line 349 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 3) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_30));
#line 349 "constraint.m"
            }
#line 351 "constraint.m"
            {
#line 351 "constraint.m"
              transform_hlds__constraint__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_41_41, 0) = ((MR_Box) (transform_hlds__constraint__AnnotatedConjunct_34));
#line 351 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_41_41, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5));
#line 351 "constraint.m"
            }
#line 351 "constraint.m"
            /* direct tailcall eliminated */
#line 351 "constraint.m"
            {
#line 351 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Goals_14;
#line 351 "constraint.m"
              MR_Word transform_hlds__constraint__InstMap0__tmp_copy_4 = transform_hlds__constraint__InstMap_22;
#line 351 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0__tmp_copy_5 = transform_hlds__constraint__V_41_41;

#line 351 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5 = transform_hlds__constraint__STATE_VARIABLE_RevGoals_0__tmp_copy_5;
#line 351 "constraint.m"
              transform_hlds__constraint__InstMap0_4 = transform_hlds__constraint__InstMap0__tmp_copy_4;
#line 351 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 351 "constraint.m"
            }
#line 351 "constraint.m"
            continue;
#line 305 "constraint.m"
          }
#line 303 "constraint.m"
      }
#line 303 "constraint.m"
      break;
#line 303 "constraint.m"
    }
#line 300 "constraint.m"
}

#line 228 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
#line 228 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 228 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 228 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 228 "constraint.m"
{
#line 228 "constraint.m"
  {
#line 228 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 228 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_15;

#line 228 "constraint.m"
    {
#line 228 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__228__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_15);
    }
#line 228 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_15));
#line 228 "constraint.m"
  }
#line 228 "constraint.m"
}

#line 271 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
#line 271 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_6,
#line 271 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 271 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 271 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_17,
#line 271 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_18)
#line 271 "constraint.m"
{
#line 274 "constraint.m"
  {
#line 274 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 274 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_19_19;

#line 801 "constraint.m"
    if ((transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "constraint.m"
      transform_hlds__constraint__STATE_VARIABLE_Info_19_19 = transform_hlds__constraint__STATE_VARIABLE_Info_0_17;
#line 801 "constraint.m"
    else
#line 803 "constraint.m"
      {
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 804 "constraint.m"
        MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));

#line 804 "constraint.m"
        {
#line 804 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 0) = ((MR_Box) (transform_hlds__constraint__V_47_47));
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (transform_hlds__constraint__V_48_48));
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (transform_hlds__constraint__V_49_49));
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (transform_hlds__constraint__V_50_50));
#line 804 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) ((MR_Integer) 1));
#line 804 "constraint.m"
        }
#line 803 "constraint.m"
      }
#line 279 "constraint.m"
    if ((transform_hlds__constraint__Goals0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "constraint.m"
      {
#line 277 "constraint.m"
        MR_Word transform_hlds__constraint__GoalLists0_60;
#line 277 "constraint.m"
        MR_Word transform_hlds__constraint__GoalLists_61;

#line 228 "constraint.m"
        {
#line 228 "constraint.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[1], (MR_Word) &transform_hlds__constraint_scalar_common_2[2], transform_hlds__constraint__Constraints_7, &transform_hlds__constraint__GoalLists0_60);
        }
#line 232 "constraint.m"
        {
#line 232 "constraint.m"
          mercury__list__condense_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__GoalLists0_60, &transform_hlds__constraint__GoalLists_61);
        }
#line 233 "constraint.m"
        {
#line 233 "constraint.m"
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalLists_61, transform_hlds__constraint__Goals_8);
        }
#line 278 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_18 = transform_hlds__constraint__STATE_VARIABLE_Info_19_19;
#line 277 "constraint.m"
      }
#line 279 "constraint.m"
    else
#line 280 "constraint.m"
      {
#line 280 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_6, (MR_Integer) 0)));
#line 280 "constraint.m"
        MR_Word transform_hlds__constraint__GoalsTail0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_6, (MR_Integer) 1)));

#line 282 "constraint.m"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalsTail0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 283 "constraint.m"
          transform_hlds__constraint__succeeded = (transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 285 "constraint.m"
          {
#line 285 "constraint.m"
            {
#line 285 "constraint.m"
              transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(transform_hlds__constraint__Goal0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_19_19, transform_hlds__constraint__STATE_VARIABLE_Info_18);
#line 285 "constraint.m"
              return;
            }
#line 285 "constraint.m"
          }
#line 286 "constraint.m"
        else
#line 287 "constraint.m"
          {
#line 287 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 287 "constraint.m"
            MR_Word transform_hlds__constraint__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 287 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 1)));
#line 287 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoals1_15;
#line 287 "constraint.m"
            MR_Word transform_hlds__constraint__Goals2_16;
#line 287 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_24_24;
#line 287 "constraint.m"
            MR_Word transform_hlds__constraint__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 287 "constraint.m"
            MR_Word transform_hlds__constraint__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));

#line 290 "constraint.m"
            {
#line 290 "constraint.m"
              transform_hlds__constraint__annotate_conj_output_vars_6_p_0(transform_hlds__constraint__Goals0_6, transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__VarTypes_14, transform_hlds__constraint__InstMap0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevGoals1_15);
            }
#line 292 "constraint.m"
            {
#line 292 "constraint.m"
              transform_hlds__constraint__annotate_conj_constraints_7_p_0(transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__RevGoals1_15, transform_hlds__constraint__Constraints_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Goals2_16, transform_hlds__constraint__STATE_VARIABLE_Info_19_19, &transform_hlds__constraint__STATE_VARIABLE_Info_24_24);
            }
#line 294 "constraint.m"
            {
#line 294 "constraint.m"
              transform_hlds__constraint__propagate_conj_constraints_5_p_0(transform_hlds__constraint__Goals2_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_24_24, transform_hlds__constraint__STATE_VARIABLE_Info_18);
#line 294 "constraint.m"
              return;
            }
#line 287 "constraint.m"
          }
#line 280 "constraint.m"
      }
#line 274 "constraint.m"
  }
#line 271 "constraint.m"
}

#line 250 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
#line 250 "constraint.m"
  MR_Word transform_hlds__constraint__Var_1,
#line 250 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 250 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 250 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 250 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 250 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
#line 250 "constraint.m"
{
#line 254 "constraint.m"
  {
#line 254 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 254 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "constraint.m"
      {
#line 254 "constraint.m"
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 254 "constraint.m"
      }
#line 254 "constraint.m"
    else
#line 255 "constraint.m"
      {
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__Case_16;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__Cases_17;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 0)));
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 1)));
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 2)));
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__Goal_23;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_26_26;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_28_28;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__ModuleInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__VarTypes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__Type_48;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap_49;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__ModuleInfo_50;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__V_66_66;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__V_67_67;
#line 255 "constraint.m"
        MR_Word transform_hlds__constraint__V_69_69;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 789 "constraint.m"
        MR_Word transform_hlds__constraint__V_65_65;
#line 789 "constraint.m"
        MR_Word transform_hlds__constraint__V_68_68;
#line 260 "constraint.m"
        MR_Word transform_hlds__constraint__V_34_34;
#line 260 "constraint.m"
        MR_Word transform_hlds__constraint__V_35_35;
#line 260 "constraint.m"
        MR_Word transform_hlds__constraint__V_36_36;
#line 260 "constraint.m"
        MR_Word transform_hlds__constraint__V_38_38;
#line 260 "constraint.m"
        MR_Word transform_hlds__constraint__V_37_37;

#line 786 "constraint.m"
        {
#line 786 "constraint.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_47, transform_hlds__constraint__Var_1, &transform_hlds__constraint__Type_48);
        }
#line 787 "constraint.m"
        {
#line 787 "constraint.m"
          hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Type_48, transform_hlds__constraint__MainConsId_19, transform_hlds__constraint__OtherConsIds_20, transform_hlds__constraint__InstMap0_45, &transform_hlds__constraint__InstMap_49, transform_hlds__constraint__ModuleInfo0_46, &transform_hlds__constraint__ModuleInfo_50);
        }
#line 789 "constraint.m"
        transform_hlds__constraint__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 789 "constraint.m"
        transform_hlds__constraint__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 789 "constraint.m"
        transform_hlds__constraint__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 789 "constraint.m"
        transform_hlds__constraint__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 789 "constraint.m"
        transform_hlds__constraint__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 790 "constraint.m"
        {
#line 790 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 790 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_50));
#line 790 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (transform_hlds__constraint__V_66_66));
#line 790 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (transform_hlds__constraint__V_67_67));
#line 790 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_49));
#line 790 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 4) = ((MR_Box) (transform_hlds__constraint__V_69_69));
#line 790 "constraint.m"
        }
#line 259 "constraint.m"
        {
#line 259 "constraint.m"
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal0_21, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goal_23, transform_hlds__constraint__STATE_VARIABLE_Info_26_26, &transform_hlds__constraint__STATE_VARIABLE_Info_27_27);
        }
#line 260 "constraint.m"
        transform_hlds__constraint__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 260 "constraint.m"
        transform_hlds__constraint__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 260 "constraint.m"
        transform_hlds__constraint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 260 "constraint.m"
        transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 260 "constraint.m"
        transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 260 "constraint.m"
        {
#line 260 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 260 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (transform_hlds__constraint__V_34_34));
#line 260 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (transform_hlds__constraint__V_35_35));
#line 260 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (transform_hlds__constraint__V_36_36));
#line 260 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_45));
#line 260 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (transform_hlds__constraint__V_38_38));
#line 260 "constraint.m"
        }
#line 261 "constraint.m"
        {
#line 261 "constraint.m"
          transform_hlds__constraint__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_19));
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_20));
#line 261 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 2) = ((MR_Box) (transform_hlds__constraint__Goal_23));
#line 261 "constraint.m"
        }
#line 262 "constraint.m"
        {
#line 262 "constraint.m"
          transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Constraints_2, transform_hlds__constraint__Cases0_15, &transform_hlds__constraint__Cases_17, transform_hlds__constraint__STATE_VARIABLE_Info_28_28, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
#line 255 "constraint.m"
        {
#line 255 "constraint.m"
          MR_Word base;
#line 255 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "constraint.m"
          *transform_hlds__constraint__HeadVar__4_4 = base;
#line 255 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Case_16));
#line 255 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Cases_17));
#line 255 "constraint.m"
        }
#line 255 "constraint.m"
      }
#line 254 "constraint.m"
  }
#line 250 "constraint.m"
}

#line 237 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
#line 237 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 237 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 237 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 237 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 237 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
#line 237 "constraint.m"
{
#line 240 "constraint.m"
  {
#line 240 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 240 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "constraint.m"
      {
#line 240 "constraint.m"
        *transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 240 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 240 "constraint.m"
      }
#line 240 "constraint.m"
    else
#line 242 "constraint.m"
      {
#line 242 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "constraint.m"
        MR_Word transform_hlds__constraint__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "constraint.m"
        MR_Word transform_hlds__constraint__Goal_13;
#line 242 "constraint.m"
        MR_Word transform_hlds__constraint__Goals_14;
#line 242 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 242 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_19_19;
#line 242 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_20_20;
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 243 "constraint.m"
        MR_Word transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 245 "constraint.m"
        MR_Word transform_hlds__constraint__V_26_26;
#line 245 "constraint.m"
        MR_Word transform_hlds__constraint__V_27_27;
#line 245 "constraint.m"
        MR_Word transform_hlds__constraint__V_28_28;
#line 245 "constraint.m"
        MR_Word transform_hlds__constraint__V_30_30;
#line 245 "constraint.m"
        MR_Word transform_hlds__constraint__V_29_29;

#line 244 "constraint.m"
        {
#line 244 "constraint.m"
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal0_10, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goal_13, transform_hlds__constraint__STATE_VARIABLE_Info_0_4, &transform_hlds__constraint__STATE_VARIABLE_Info_19_19);
        }
#line 245 "constraint.m"
        transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 245 "constraint.m"
        transform_hlds__constraint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 1)));
#line 245 "constraint.m"
        transform_hlds__constraint__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 245 "constraint.m"
        transform_hlds__constraint__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 245 "constraint.m"
        transform_hlds__constraint__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 245 "constraint.m"
        {
#line 245 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 245 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (transform_hlds__constraint__V_26_26));
#line 245 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 1) = ((MR_Box) (transform_hlds__constraint__V_27_27));
#line 245 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (transform_hlds__constraint__V_28_28));
#line 245 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_16));
#line 245 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (transform_hlds__constraint__V_30_30));
#line 245 "constraint.m"
        }
#line 246 "constraint.m"
        {
#line 246 "constraint.m"
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
#line 242 "constraint.m"
      }
#line 240 "constraint.m"
  }
#line 237 "constraint.m"
}

#line 228 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
#line 228 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 228 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 228 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 228 "constraint.m"
{
#line 228 "constraint.m"
  {
#line 228 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 228 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_15;

#line 228 "constraint.m"
    {
#line 228 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__228__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_15);
    }
#line 228 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_15));
#line 228 "constraint.m"
  }
#line 228 "constraint.m"
}

#line 225 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
#line 225 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 225 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_4)
#line 225 "constraint.m"
{
#line 227 "constraint.m"
  {
#line 227 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 227 "constraint.m"
    MR_Word transform_hlds__constraint__GoalLists0_11;
#line 227 "constraint.m"
    MR_Word transform_hlds__constraint__GoalLists_12;

#line 228 "constraint.m"
    {
#line 228 "constraint.m"
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[1], (MR_Word) &transform_hlds__constraint_scalar_common_2[1], transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__GoalLists0_11);
    }
#line 232 "constraint.m"
    {
#line 232 "constraint.m"
      mercury__list__condense_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__GoalLists0_11, &transform_hlds__constraint__GoalLists_12);
    }
#line 233 "constraint.m"
    {
#line 233 "constraint.m"
      mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalLists_12, transform_hlds__constraint__Goals_4);
#line 233 "constraint.m"
      return;
    }
#line 227 "constraint.m"
  }
#line 225 "constraint.m"
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
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_77,
#line 120 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_78)
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
    if (((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) == (MR_mktag((MR_Integer) 0))))
#line 200 "constraint.m"
      {
#line 200 "constraint.m"
        MR_Word transform_hlds__constraint__NegGoal0_51 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_6), (MR_Integer) 0);
#line 200 "constraint.m"
        MR_Word transform_hlds__constraint__NegGoal_52;
#line 200 "constraint.m"
        MR_Word transform_hlds__constraint__V_85_85;
#line 200 "constraint.m"
        MR_Word transform_hlds__constraint__V_86_86;
#line 200 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintGoals_133;

#line 203 "constraint.m"
        {
#line 203 "constraint.m"
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__NegGoal0_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__NegGoal_52, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, transform_hlds__constraint__STATE_VARIABLE_Info_78);
        }
#line 204 "constraint.m"
        {
#line 204 "constraint.m"
          transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_133);
        }
#line 205 "constraint.m"
        transform_hlds__constraint__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__NegGoal_52);
#line 205 "constraint.m"
        {
#line 205 "constraint.m"
          transform_hlds__constraint__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_85_85, 0) = ((MR_Box) (transform_hlds__constraint__V_86_86));
#line 205 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_85_85, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 205 "constraint.m"
        }
#line 205 "constraint.m"
        {
#line 205 "constraint.m"
          MR_Word base;
#line 205 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "constraint.m"
          *transform_hlds__constraint__FinalGoals_9 = base;
#line 205 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_85_85));
#line 205 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_133));
#line 205 "constraint.m"
        }
#line 200 "constraint.m"
      }
#line 141 "constraint.m"
    else
#line 141 "constraint.m"
      if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 126 "constraint.m"
        {
#line 126 "constraint.m"
          MR_Word transform_hlds__constraint__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 126 "constraint.m"
          MR_Word transform_hlds__constraint__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));

#line 131 "constraint.m"
          if ((transform_hlds__constraint__ConjType_11 == (MR_Integer) 1))
#line 132 "constraint.m"
            {
#line 132 "constraint.m"
              MR_Word transform_hlds__constraint__MoreGoals_14;
#line 132 "constraint.m"
              MR_Word transform_hlds__constraint__V_122_122;
#line 132 "constraint.m"
              MR_Word transform_hlds__constraint__V_123_123;
#line 132 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_128;

#line 136 "constraint.m"
              {
#line 136 "constraint.m"
                transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__MoreGoals_14);
              }
#line 137 "constraint.m"
              {
#line 137 "constraint.m"
                transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Goals_128, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, transform_hlds__constraint__STATE_VARIABLE_Info_78);
              }
#line 138 "constraint.m"
              {
#line 138 "constraint.m"
                transform_hlds__constraint__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 138 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 138 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_123_123, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_11));
#line 138 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_123_123, 2) = ((MR_Box) (transform_hlds__constraint__Goals_128));
#line 138 "constraint.m"
              }
#line 138 "constraint.m"
              {
#line 138 "constraint.m"
                transform_hlds__constraint__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 138 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_122_122, 0) = ((MR_Box) (transform_hlds__constraint__V_123_123));
#line 138 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_122_122, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
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
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_122_122));
#line 138 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__MoreGoals_14));
#line 138 "constraint.m"
              }
#line 132 "constraint.m"
            }
#line 131 "constraint.m"
          else
#line 128 "constraint.m"
            {
#line 128 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_13;
#line 128 "constraint.m"
              MR_Word transform_hlds__constraint__V_125_125;
#line 128 "constraint.m"
              MR_Word transform_hlds__constraint__V_126_126;

#line 129 "constraint.m"
              {
#line 129 "constraint.m"
                transform_hlds__constraint__propagate_conj_5_p_0(transform_hlds__constraint__Goals0_12, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Goals_13, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, transform_hlds__constraint__STATE_VARIABLE_Info_78);
              }
#line 130 "constraint.m"
              {
#line 130 "constraint.m"
                transform_hlds__constraint__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 130 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 130 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_126_126, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_11));
#line 130 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_126_126, 2) = ((MR_Box) (transform_hlds__constraint__Goals_13));
#line 130 "constraint.m"
              }
#line 130 "constraint.m"
              {
#line 130 "constraint.m"
                transform_hlds__constraint__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 130 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_125_125, 0) = ((MR_Box) (transform_hlds__constraint__V_126_126));
#line 130 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_125_125, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
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
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_125_125));
#line 130 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "constraint.m"
              }
#line 128 "constraint.m"
            }
#line 126 "constraint.m"
        }
#line 141 "constraint.m"
      else
#line 141 "constraint.m"
        if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 142 "constraint.m"
          {
#line 142 "constraint.m"
            MR_Word transform_hlds__constraint__V_117_117;
#line 142 "constraint.m"
            MR_Word transform_hlds__constraint__V_118_118;
#line 142 "constraint.m"
            MR_Word transform_hlds__constraint__Goals0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 142 "constraint.m"
            MR_Word transform_hlds__constraint__Goals_130;

#line 143 "constraint.m"
            {
#line 143 "constraint.m"
              transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_129, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Goals_130, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, transform_hlds__constraint__STATE_VARIABLE_Info_78);
            }
#line 144 "constraint.m"
            {
#line 144 "constraint.m"
              transform_hlds__constraint__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "constraint.m"
              MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 144 "constraint.m"
              MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_118_118, 1) = ((MR_Box) (transform_hlds__constraint__Goals_130));
#line 144 "constraint.m"
            }
#line 144 "constraint.m"
            {
#line 144 "constraint.m"
              transform_hlds__constraint__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_117_117, 0) = ((MR_Box) (transform_hlds__constraint__V_118_118));
#line 144 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_117_117, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
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
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_117_117));
#line 144 "constraint.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 144 "constraint.m"
            }
#line 142 "constraint.m"
          }
#line 141 "constraint.m"
        else
#line 141 "constraint.m"
          if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
              MR_Word transform_hlds__constraint__InstMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_77, (MR_Integer) 3)));
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Cond_24;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Then_25;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__Else_26;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_104_104;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_105_105;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_106_106;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_107_107;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__V_109_109;
#line 150 "constraint.m"
              MR_Word transform_hlds__constraint__V_110_110;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_77, (MR_Integer) 0)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_77, (MR_Integer) 1)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_77, (MR_Integer) 2)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_77, (MR_Integer) 4)));
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_139_139;
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_140_140;
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_141_141;
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_143_143;
#line 158 "constraint.m"
              MR_Word transform_hlds__constraint__V_142_142;

#line 155 "constraint.m"
              {
#line 155 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Cond0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Cond_24, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, &transform_hlds__constraint__STATE_VARIABLE_Info_104_104);
              }
#line 156 "constraint.m"
              {
#line 156 "constraint.m"
                transform_hlds__constraint__constraint_info_update_goal_3_p_0(transform_hlds__constraint__Cond_24, transform_hlds__constraint__STATE_VARIABLE_Info_104_104, &transform_hlds__constraint__STATE_VARIABLE_Info_105_105);
              }
#line 157 "constraint.m"
              {
#line 157 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Then0_21, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Then_25, transform_hlds__constraint__STATE_VARIABLE_Info_105_105, &transform_hlds__constraint__STATE_VARIABLE_Info_106_106);
              }
#line 158 "constraint.m"
              transform_hlds__constraint__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_106_106, (MR_Integer) 0)));
#line 158 "constraint.m"
              transform_hlds__constraint__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_106_106, (MR_Integer) 1)));
#line 158 "constraint.m"
              transform_hlds__constraint__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_106_106, (MR_Integer) 2)));
#line 158 "constraint.m"
              transform_hlds__constraint__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_106_106, (MR_Integer) 3)));
#line 158 "constraint.m"
              transform_hlds__constraint__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_106_106, (MR_Integer) 4)));
#line 158 "constraint.m"
              {
#line 158 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_107_107, 0) = ((MR_Box) (transform_hlds__constraint__V_139_139));
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_107_107, 1) = ((MR_Box) (transform_hlds__constraint__V_140_140));
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_107_107, 2) = ((MR_Box) (transform_hlds__constraint__V_141_141));
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_107_107, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_23));
#line 158 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_107_107, 4) = ((MR_Box) (transform_hlds__constraint__V_143_143));
#line 158 "constraint.m"
              }
#line 159 "constraint.m"
              {
#line 159 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Else0_22, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Else_26, transform_hlds__constraint__STATE_VARIABLE_Info_107_107, transform_hlds__constraint__STATE_VARIABLE_Info_78);
              }
#line 161 "constraint.m"
              {
#line 161 "constraint.m"
                transform_hlds__constraint__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_110_110, 1) = ((MR_Box) (transform_hlds__constraint__Vars_19));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_110_110, 2) = ((MR_Box) (transform_hlds__constraint__Cond_24));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_110_110, 3) = ((MR_Box) (transform_hlds__constraint__Then_25));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_110_110, 4) = ((MR_Box) (transform_hlds__constraint__Else_26));
#line 161 "constraint.m"
              }
#line 161 "constraint.m"
              {
#line 161 "constraint.m"
                transform_hlds__constraint__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_109_109, 0) = ((MR_Box) (transform_hlds__constraint__V_110_110));
#line 161 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_109_109, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 161 "constraint.m"
              }
#line 160 "constraint.m"
              {
#line 160 "constraint.m"
                MR_Word base;
#line 160 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 160 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_109_109));
#line 160 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "constraint.m"
              }
#line 150 "constraint.m"
            }
#line 141 "constraint.m"
          else
#line 141 "constraint.m"
            if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 163 "constraint.m"
              {
#line 163 "constraint.m"
                MR_Word transform_hlds__constraint__Reason_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 163 "constraint.m"
                MR_Word transform_hlds__constraint__SubGoal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));

#line 171 "constraint.m"
                if (((MR_tag((MR_Word) transform_hlds__constraint__Reason_27)) == (MR_mktag((MR_Integer) 0))))
#line 168 "constraint.m"
                  {
#line 168 "constraint.m"
                    MR_Word transform_hlds__constraint__SubGoal_32;
#line 168 "constraint.m"
                    MR_Word transform_hlds__constraint__V_100_100;
#line 168 "constraint.m"
                    MR_Word transform_hlds__constraint__V_101_101;

#line 169 "constraint.m"
                    {
#line 169 "constraint.m"
                      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_32, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, transform_hlds__constraint__STATE_VARIABLE_Info_78);
                    }
#line 170 "constraint.m"
                    {
#line 170 "constraint.m"
                      transform_hlds__constraint__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_101_101, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_101_101, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_32));
#line 170 "constraint.m"
                    }
#line 170 "constraint.m"
                    {
#line 170 "constraint.m"
                      transform_hlds__constraint__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_100_100, 0) = ((MR_Box) (transform_hlds__constraint__V_101_101));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_100_100, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
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
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_100_100));
#line 170 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "constraint.m"
                    }
#line 168 "constraint.m"
                  }
#line 171 "constraint.m"
                else
#line 171 "constraint.m"
                  if (((((MR_tag((MR_Word) transform_hlds__constraint__Reason_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 171 "constraint.m"
                    {
#line 171 "constraint.m"
                      MR_Word transform_hlds__constraint__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 2)));
#line 193 "constraint.m"
                      MR_Word transform_hlds__constraint__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 1)));

#line 171 "constraint.m"
                      if ((transform_hlds__constraint__V_162_162 == (MR_Integer) 1))
#line 193 "constraint.m"
                        {
#line 193 "constraint.m"
                          MR_Word transform_hlds__constraint__ConstraintGoals_132;

#line 196 "constraint.m"
                          {
#line 196 "constraint.m"
                            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_132);
                          }
#line 197 "constraint.m"
                          {
#line 197 "constraint.m"
                            MR_Word base;
#line 197 "constraint.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "constraint.m"
                            *transform_hlds__constraint__FinalGoals_9 = base;
#line 197 "constraint.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 197 "constraint.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_132));
#line 197 "constraint.m"
                          }
#line 197 "constraint.m"
                          *transform_hlds__constraint__STATE_VARIABLE_Info_78 = transform_hlds__constraint__STATE_VARIABLE_Info_0_77;
#line 193 "constraint.m"
                        }
#line 171 "constraint.m"
                      else
#line 171 "constraint.m"
                        if ((transform_hlds__constraint__V_162_162 == (MR_Integer) 2))
#line 168 "constraint.m"
                          {
#line 168 "constraint.m"
                            MR_Word transform_hlds__constraint__SubGoal_144;
#line 168 "constraint.m"
                            MR_Word transform_hlds__constraint__V_145_145;
#line 168 "constraint.m"
                            MR_Word transform_hlds__constraint__V_146_146;

#line 169 "constraint.m"
                            {
#line 169 "constraint.m"
                              transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_144, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, transform_hlds__constraint__STATE_VARIABLE_Info_78);
                            }
#line 170 "constraint.m"
                            {
#line 170 "constraint.m"
                              transform_hlds__constraint__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 170 "constraint.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_146_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 170 "constraint.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_146_146, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 170 "constraint.m"
                              MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_146_146, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_144));
#line 170 "constraint.m"
                            }
#line 170 "constraint.m"
                            {
#line 170 "constraint.m"
                              transform_hlds__constraint__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "constraint.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_145_145, 0) = ((MR_Box) (transform_hlds__constraint__V_146_146));
#line 170 "constraint.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_145_145, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
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
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_145_145));
#line 170 "constraint.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "constraint.m"
                            }
#line 168 "constraint.m"
                          }
#line 171 "constraint.m"
                        else
#line 171 "constraint.m"
                          if ((transform_hlds__constraint__V_162_162 == (MR_Integer) 0))
#line 189 "constraint.m"
                            {
#line 191 "constraint.m"
                              {
#line 191 "constraint.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 191 "constraint.m"
                                return;
                              }
#line 189 "constraint.m"
                            }
#line 171 "constraint.m"
                          else
#line 168 "constraint.m"
                            {
#line 168 "constraint.m"
                              MR_Word transform_hlds__constraint__SubGoal_148;
#line 168 "constraint.m"
                              MR_Word transform_hlds__constraint__V_149_149;
#line 168 "constraint.m"
                              MR_Word transform_hlds__constraint__V_150_150;

#line 169 "constraint.m"
                              {
#line 169 "constraint.m"
                                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_148, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, transform_hlds__constraint__STATE_VARIABLE_Info_78);
                              }
#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                transform_hlds__constraint__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_150_150, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_150_150, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_148));
#line 170 "constraint.m"
                              }
#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                transform_hlds__constraint__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_149_149, 0) = ((MR_Box) (transform_hlds__constraint__V_150_150));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_149_149, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
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
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_149_149));
#line 170 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "constraint.m"
                              }
#line 168 "constraint.m"
                            }
#line 171 "constraint.m"
                    }
#line 171 "constraint.m"
                  else
#line 171 "constraint.m"
                    if (((((MR_tag((MR_Word) transform_hlds__constraint__Reason_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 189 "constraint.m"
                      {
#line 191 "constraint.m"
                        {
#line 191 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 191 "constraint.m"
                          return;
                        }
#line 189 "constraint.m"
                      }
#line 171 "constraint.m"
                    else
#line 171 "constraint.m"
                      if (((((MR_tag((MR_Word) transform_hlds__constraint__Reason_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 189 "constraint.m"
                        {
#line 191 "constraint.m"
                          {
#line 191 "constraint.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 191 "constraint.m"
                            return;
                          }
#line 189 "constraint.m"
                        }
#line 171 "constraint.m"
                      else
#line 178 "constraint.m"
                        {
#line 178 "constraint.m"
                          MR_Word transform_hlds__constraint__ConstraintGoals_46;
#line 178 "constraint.m"
                          MR_Word transform_hlds__constraint__V_95_95;
#line 178 "constraint.m"
                          MR_Word transform_hlds__constraint__V_96_96;
#line 178 "constraint.m"
                          MR_Word transform_hlds__constraint__SubGoal_131;

#line 181 "constraint.m"
                          {
#line 181 "constraint.m"
                            transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__SubGoal_131, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, transform_hlds__constraint__STATE_VARIABLE_Info_78);
                          }
#line 182 "constraint.m"
                          {
#line 182 "constraint.m"
                            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_46);
                          }
#line 183 "constraint.m"
                          {
#line 183 "constraint.m"
                            transform_hlds__constraint__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 183 "constraint.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 183 "constraint.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_96_96, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 183 "constraint.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_96_96, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_131));
#line 183 "constraint.m"
                          }
#line 183 "constraint.m"
                          {
#line 183 "constraint.m"
                            transform_hlds__constraint__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "constraint.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_95_95, 0) = ((MR_Box) (transform_hlds__constraint__V_96_96));
#line 183 "constraint.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_95_95, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
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
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_95_95));
#line 183 "constraint.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_46));
#line 183 "constraint.m"
                          }
#line 178 "constraint.m"
                        }
#line 163 "constraint.m"
              }
#line 141 "constraint.m"
            else
#line 141 "constraint.m"
              if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 217 "constraint.m"
                {
#line 218 "constraint.m"
                  {
#line 218 "constraint.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "shorthand");
#line 218 "constraint.m"
                    return;
                  }
#line 217 "constraint.m"
                }
#line 141 "constraint.m"
              else
#line 141 "constraint.m"
                if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
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
                    MR_Word transform_hlds__constraint__V_113_113;
#line 146 "constraint.m"
                    MR_Word transform_hlds__constraint__V_114_114;

#line 147 "constraint.m"
                    {
#line 147 "constraint.m"
                      transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_15, transform_hlds__constraint__Constraints_8, transform_hlds__constraint__Cases0_17, &transform_hlds__constraint__Cases_18, transform_hlds__constraint__STATE_VARIABLE_Info_0_77, transform_hlds__constraint__STATE_VARIABLE_Info_78);
                    }
#line 148 "constraint.m"
                    {
#line 148 "constraint.m"
                      transform_hlds__constraint__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 148 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 148 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_114_114, 1) = ((MR_Box) (transform_hlds__constraint__Var_15));
#line 148 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_114_114, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_16));
#line 148 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_114_114, 3) = ((MR_Box) (transform_hlds__constraint__Cases_18));
#line 148 "constraint.m"
                    }
#line 148 "constraint.m"
                    {
#line 148 "constraint.m"
                      transform_hlds__constraint__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_113_113, 0) = ((MR_Box) (transform_hlds__constraint__V_114_114));
#line 148 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_113_113, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
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
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_113_113));
#line 148 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "constraint.m"
                    }
#line 146 "constraint.m"
                  }
#line 141 "constraint.m"
                else
#line 211 "constraint.m"
                  {
#line 211 "constraint.m"
                    MR_Word transform_hlds__constraint__ConstraintGoals_134;

#line 214 "constraint.m"
                    {
#line 214 "constraint.m"
                      transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_134);
                    }
#line 215 "constraint.m"
                    {
#line 215 "constraint.m"
                      MR_Word base;
#line 215 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 215 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 215 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_134));
#line 215 "constraint.m"
                    }
#line 215 "constraint.m"
                    *transform_hlds__constraint__STATE_VARIABLE_Info_78 = transform_hlds__constraint__STATE_VARIABLE_Info_0_77;
#line 211 "constraint.m"
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
      transform_hlds__constraint__HasSubGoals_12 = hlds__hlds_goal__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_10);
    }
#line 109 "constraint.m"
    if ((transform_hlds__constraint__HasSubGoals_12 == (MR_Integer) 1))
#line 108 "constraint.m"
      transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
#line 109 "constraint.m"
    else
#line 801 "constraint.m"
      if ((transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "constraint.m"
        transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
#line 801 "constraint.m"
      else
#line 803 "constraint.m"
        {
#line 804 "constraint.m"
          MR_Word transform_hlds__constraint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 804 "constraint.m"
          MR_Word transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 804 "constraint.m"
          MR_Word transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 804 "constraint.m"
          MR_Word transform_hlds__constraint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 804 "constraint.m"
          MR_Word transform_hlds__constraint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));

#line 804 "constraint.m"
          {
#line 804 "constraint.m"
            transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 804 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (transform_hlds__constraint__V_36_36));
#line 804 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (transform_hlds__constraint__V_37_37));
#line 804 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (transform_hlds__constraint__V_38_38));
#line 804 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (transform_hlds__constraint__V_39_39));
#line 804 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) ((MR_Integer) 1));
#line 804 "constraint.m"
          }
#line 803 "constraint.m"
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
#line 768 "constraint.m"
  {
#line 768 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 768 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11;

#line 768 "constraint.m"
    *transform_hlds__constraint__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 0)));
#line 768 "constraint.m"
    *transform_hlds__constraint__VarTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 1)));
#line 768 "constraint.m"
    *transform_hlds__constraint__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 2)));
#line 768 "constraint.m"
    transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 3)));
#line 768 "constraint.m"
    *transform_hlds__constraint__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 4)));
#line 768 "constraint.m"
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
#line 762 "constraint.m"
  {
#line 762 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 763 "constraint.m"
    {
#line 763 "constraint.m"
      MR_Word base;
#line 763 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 763 "constraint.m"
      *transform_hlds__constraint__ConstraintInfo_10 = base;
#line 763 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_6));
#line 763 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_7));
#line 763 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_8));
#line 763 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
#line 763 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 763 "constraint.m"
    }
#line 762 "constraint.m"
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
