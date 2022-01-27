/*
** Automatically generated from `constraint.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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



#line 702 "constraint.m"
struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s {
#line 702 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 706 "constraint.m"
  MR_bool transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded;
#line 709 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12;
#line 718 "constraint.m"
  jmp_buf transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0;
#line 718 "constraint.m"
  MR_Word transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20;
#line 717 "constraint.m"
  MR_Box transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20;
#line 702 "constraint.m"
};

#line 609 "constraint.m"
struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s {
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 614 "constraint.m"
  MR_bool transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded;
#line 617 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18;
#line 643 "constraint.m"
  jmp_buf transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0;
#line 643 "constraint.m"
  MR_Word transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31;
#line 643 "constraint.m"
  MR_Box transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31;
#line 609 "constraint.m"
};


#line 174 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 177 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 180 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 183 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 186 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 192 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 195 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0;

#line 198 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 201 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4];

#line 204 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0;

#line 207 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1];

#line 210 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1];

#line 213 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[1];

#line 216 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0[1];

#line 219 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 222 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0;

#line 225 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4];

#line 228 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0;

#line 231 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1];

#line 234 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1];

#line 237 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1];

#line 240 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1];

#line 243 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 246 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 249 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5];

#line 252 "transform_hlds.constraint.c"
static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5];

#line 255 "transform_hlds.constraint.c"
static const MR_DuFunctorDesc transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0;

#line 258 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1];

#line 261 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1];

#line 264 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1];

#line 267 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1];

#line 270 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
#line 273 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 275 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 278 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
#line 281 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 283 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 285 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 288 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
#line 291 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 293 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 296 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
#line 299 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 301 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 303 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 306 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
#line 309 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 311 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 314 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
#line 317 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 319 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 321 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 324 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
#line 327 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 329 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 332 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
#line 335 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 337 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 339 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 342 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
#line 345 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 347 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2);

#line 350 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
#line 353 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 355 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 357 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3);

#line 832 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__832__1_1_f_0(
#line 832 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_18);

#line 539 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__536__1_1_f_0_1(
#line 539 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 539 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 536 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__536__1_1_f_0(
#line 536 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20);

#line 417 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__417__1_2_p_0(
#line 417 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20,
#line 417 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_21);

#line 337 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__337__1_5_p_0(
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_39);

#line 323 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__323__1_5_p_0(
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_37);

#line 230 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__230__1_2_p_0(
#line 230 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_14,
#line 230 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_15);

#line 384 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
#line 384 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 384 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 384 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 384 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
#line 384 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 384 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 406 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
#line 406 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 406 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 406 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 406 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
#line 406 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 406 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 363 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
#line 363 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 363 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 363 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 363 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
#line 363 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 363 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 361 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
#line 361 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3);

#line 361 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 361 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2);

#line 832 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3(
#line 832 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 832 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 829 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2(
#line 829 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 829 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 827 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1(
#line 827 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 827 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 824 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(
#line 824 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 814 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_1_f_0(
#line 814 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 798 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
#line 798 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_4,
#line 798 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
#line 798 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9);

#line 772 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
#line 772 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 772 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
#line 772 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11);

#line 729 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
#line 729 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_2);

#line 718 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
#line 718 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 717 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
#line 717 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 718 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
#line 718 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 718 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
#line 718 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 702 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
#line 702 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 702 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
#line 702 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
#line 702 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
#line 702 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5);

#line 671 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
#line 671 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 671 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 671 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 671 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 671 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

#line 643 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
#line 643 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 643 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
#line 643 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 643 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
#line 643 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 643 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
#line 643 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg);

#line 609 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
#line 609 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
#line 609 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7);

#line 599 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
#line 599 "constraint.m"
  MR_Word transform_hlds__constraint__NonLocals_6,
#line 599 "constraint.m"
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
#line 599 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 599 "constraint.m"
  MR_Word * transform_hlds__constraint__Dependent_9,
#line 599 "constraint.m"
  MR_Word * transform_hlds__constraint__Independent_10);

#line 553 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
#line 553 "constraint.m"
  MR_Word transform_hlds__constraint__ConstructVar_1,
#line 553 "constraint.m"
  MR_Word transform_hlds__constraint__Construct0_2,
#line 553 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 553 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 553 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 553 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

#line 545 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__add_constraint_feature_1_f_0(
#line 545 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1);

#line 536 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
#line 536 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 536 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 531 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
#line 531 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_4,
#line 531 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_5);

#line 526 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
#line 526 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_3,
#line 526 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_2);

#line 512 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
#line 512 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 512 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 512 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 498 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
#line 498 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 498 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 498 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 417 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
#line 417 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 417 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 417 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 411 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_1,
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_4,
#line 411 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_5,
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
#line 411 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7);

#line 337 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
#line 337 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 337 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 323 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
#line 323 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 323 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1);

#line 302 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5,
#line 302 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevGoals_6);

#line 230 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
#line 230 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 230 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 230 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 273 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
#line 273 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_6,
#line 273 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 273 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 273 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_17,
#line 273 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_18);

#line 252 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
#line 252 "constraint.m"
  MR_Word transform_hlds__constraint__Var_1,
#line 252 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 252 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 252 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 252 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 252 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6);

#line 239 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
#line 239 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 239 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 239 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 239 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 239 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5);

#line 230 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
#line 230 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 230 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 230 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2);

#line 227 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
#line 227 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 227 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_4);

#line 121 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
#line 121 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 121 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 121 "constraint.m"
  MR_Word * transform_hlds__constraint__FinalGoals_9,
#line 121 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_79,
#line 121 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_80);

#line 101 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
#line 101 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 101 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 101 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 101 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_14,
#line 101 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_15);

#line 80 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
#line 80 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 80 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 80 "constraint.m"
  MR_Word * transform_hlds__constraint__Goal_8,
#line 80 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_23,
#line 80 "constraint.m"
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
    ((MR_Box) (transform_hlds__constraint__IntroducedFrom__func__attach_constraints__536__1_1_f_0_1)),
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



#line 1102 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1110 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__list__pti_list_1__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1118 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1126 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1135 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__constraint__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1143 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1151 "transform_hlds.constraint.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__constraint__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1160 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_annotated_conjunct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_annotated_conjunct_0
  }
};

#line 1168 "transform_hlds.constraint.c"
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

#line 1185 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1193 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_annotated_conjunct_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1201 "transform_hlds.constraint.c"
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

#line 1216 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

#line 1221 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_annotated_conjunct_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_annotated_conjunct_0_0
  }
};

#line 1230 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_annotated_conjunct_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_annotated_conjunct_0_0
};

#line 1235 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_annotated_conjunct_0[1] = {
  (MR_Integer) 0
};

#line 1240 "transform_hlds.constraint.c"
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

#line 1257 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_TypeInfo) &transform_hlds__constraint__list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1266 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__list__ti_list_1pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__constraint__pair__ti_pair_2hlds__hlds_goal__type_ctor_info_hlds_goal_0list__ti_list_1transform_hlds__constraint__type_ctor_info_constraint_0
  }
};

#line 1274 "transform_hlds.constraint.c"
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

#line 1291 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1299 "transform_hlds.constraint.c"
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

#line 1314 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

#line 1319 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_0_0
  }
};

#line 1328 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_0_0
};

#line 1333 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_0[1] = {
  (MR_Integer) 0
};

#line 1338 "transform_hlds.constraint.c"
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

#line 1355 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__constraint__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1364 "transform_hlds.constraint.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1372 "transform_hlds.constraint.c"
static const MR_PseudoTypeInfo transform_hlds__constraint__transform_hlds__constraint__field_types_constraint_info_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__constraint__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1381 "transform_hlds.constraint.c"
static const MR_ConstString transform_hlds__constraint__transform_hlds__constraint__field_names_constraint_info_0_0[5] = {
  (MR_String) "constr_module_info",
  (MR_String) "constr_vartypes",
  (MR_String) "constr_varset",
  (MR_String) "constr_instmap",
  (MR_String) "constr_changed"
};

#line 1390 "transform_hlds.constraint.c"
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

#line 1405 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

#line 1410 "transform_hlds.constraint.c"
static const MR_DuPtagLayout transform_hlds__constraint__transform_hlds__constraint__du_ptag_ordered_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__constraint__transform_hlds__constraint__du_stag_ordered_constraint_info_0_0
  }
};

#line 1419 "transform_hlds.constraint.c"
static const MR_DuFunctorDescPtr transform_hlds__constraint__transform_hlds__constraint__du_name_ordered_constraint_info_0[1] = {
  &transform_hlds__constraint__transform_hlds__constraint__du_functor_desc_constraint_info_0_0
};

#line 1424 "transform_hlds.constraint.c"
static const MR_Integer transform_hlds__constraint__transform_hlds__constraint__functor_number_map_constraint_info_0[1] = {
  (MR_Integer) 0
};

#line 1429 "transform_hlds.constraint.c"
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

#line 1446 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0_10001(
#line 1449 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1451 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1453 "transform_hlds.constraint.c"
{
#line 1455 "transform_hlds.constraint.c"
  {
#line 1457 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1460 "transform_hlds.constraint.c"
    {
#line 1462 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1465 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1467 "transform_hlds.constraint.c"
  }
#line 1469 "transform_hlds.constraint.c"
}

#line 1472 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0_10001(
#line 1475 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1477 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1479 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1481 "transform_hlds.constraint.c"
{
#line 1483 "transform_hlds.constraint.c"
  {
#line 1485 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1488 "transform_hlds.constraint.c"
    {
#line 1490 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____annotated_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1493 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1495 "transform_hlds.constraint.c"
  }
#line 1497 "transform_hlds.constraint.c"
}

#line 1500 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0_10001(
#line 1503 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1505 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1507 "transform_hlds.constraint.c"
{
#line 1509 "transform_hlds.constraint.c"
  {
#line 1511 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1514 "transform_hlds.constraint.c"
    {
#line 1516 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____annotated_conjunct_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1519 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1521 "transform_hlds.constraint.c"
  }
#line 1523 "transform_hlds.constraint.c"
}

#line 1526 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0_10001(
#line 1529 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1531 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1533 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1535 "transform_hlds.constraint.c"
{
#line 1537 "transform_hlds.constraint.c"
  {
#line 1539 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1542 "transform_hlds.constraint.c"
    {
#line 1544 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____annotated_conjunct_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1547 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1549 "transform_hlds.constraint.c"
  }
#line 1551 "transform_hlds.constraint.c"
}

#line 1554 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0_10001(
#line 1557 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1559 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1561 "transform_hlds.constraint.c"
{
#line 1563 "transform_hlds.constraint.c"
  {
#line 1565 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1568 "transform_hlds.constraint.c"
    {
#line 1570 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constrained_conj_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1573 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1575 "transform_hlds.constraint.c"
  }
#line 1577 "transform_hlds.constraint.c"
}

#line 1580 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0_10001(
#line 1583 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1585 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1587 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1589 "transform_hlds.constraint.c"
{
#line 1591 "transform_hlds.constraint.c"
  {
#line 1593 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1596 "transform_hlds.constraint.c"
    {
#line 1598 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constrained_conj_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1601 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1603 "transform_hlds.constraint.c"
  }
#line 1605 "transform_hlds.constraint.c"
}

#line 1608 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0_10001(
#line 1611 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1613 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1615 "transform_hlds.constraint.c"
{
#line 1617 "transform_hlds.constraint.c"
  {
#line 1619 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1622 "transform_hlds.constraint.c"
    {
#line 1624 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1627 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1629 "transform_hlds.constraint.c"
  }
#line 1631 "transform_hlds.constraint.c"
}

#line 1634 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0_10001(
#line 1637 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1639 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1641 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1643 "transform_hlds.constraint.c"
{
#line 1645 "transform_hlds.constraint.c"
  {
#line 1647 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1650 "transform_hlds.constraint.c"
    {
#line 1652 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constraint_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1655 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1657 "transform_hlds.constraint.c"
  }
#line 1659 "transform_hlds.constraint.c"
}

#line 1662 "transform_hlds.constraint.c"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0_10001(
#line 1665 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 1667 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2)
#line 1669 "transform_hlds.constraint.c"
{
#line 1671 "transform_hlds.constraint.c"
  {
#line 1673 "transform_hlds.constraint.c"
    MR_bool transform_hlds__constraint__succeeded;

#line 1676 "transform_hlds.constraint.c"
    {
#line 1678 "transform_hlds.constraint.c"
      transform_hlds__constraint__succeeded = transform_hlds__constraint____Unify____constraint_info_0_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), ((MR_Word) transform_hlds__constraint__wrapper_arg_2));
    }
#line 1681 "transform_hlds.constraint.c"
    return transform_hlds__constraint__succeeded;
#line 1683 "transform_hlds.constraint.c"
  }
#line 1685 "transform_hlds.constraint.c"
}

#line 1688 "transform_hlds.constraint.c"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0_10001(
#line 1691 "transform_hlds.constraint.c"
  MR_Box * transform_hlds__constraint__wrapper_arg_1,
#line 1693 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_2,
#line 1695 "transform_hlds.constraint.c"
  MR_Box transform_hlds__constraint__wrapper_arg_3)
#line 1697 "transform_hlds.constraint.c"
{
#line 1699 "transform_hlds.constraint.c"
  {
#line 1701 "transform_hlds.constraint.c"
    MR_Word transform_hlds__constraint__conv0_HeadVar__1_1;

#line 1704 "transform_hlds.constraint.c"
    {
#line 1706 "transform_hlds.constraint.c"
      transform_hlds__constraint____Compare____constraint_info_0_0(&transform_hlds__constraint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__constraint__wrapper_arg_2), ((MR_Word) transform_hlds__constraint__wrapper_arg_3));
    }
#line 1709 "transform_hlds.constraint.c"
    *transform_hlds__constraint__wrapper_arg_1 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__1_1));
#line 1711 "transform_hlds.constraint.c"
  }
#line 1713 "transform_hlds.constraint.c"
}

#line 832 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__832__1_1_f_0(
#line 832 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_18)
#line 832 "constraint.m"
{
#line 832 "constraint.m"
  {
#line 832 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 832 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_19;
#line 832 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;
#line 832 "constraint.m"
    MR_Word transform_hlds__constraint__MainConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_18, (MR_Integer) 0)));
#line 832 "constraint.m"
    MR_Word transform_hlds__constraint__OtherConsIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_18, (MR_Integer) 1)));
#line 832 "constraint.m"
    MR_Word transform_hlds__constraint__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_18, (MR_Integer) 2)));

#line 834 "constraint.m"
    {
#line 834 "constraint.m"
      transform_hlds__constraint__V_20_20 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_23);
    }
#line 834 "constraint.m"
    {
#line 834 "constraint.m"
      transform_hlds__constraint__HeadVar__2_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 834 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_19, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_21));
#line 834 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_19, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_22));
#line 834 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_19, 2) = ((MR_Box) (transform_hlds__constraint__V_20_20));
#line 834 "constraint.m"
    }
#line 832 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_19;
#line 832 "constraint.m"
  }
#line 832 "constraint.m"
}

#line 539 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__536__1_1_f_0_1(
#line 539 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 539 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 539 "constraint.m"
{
#line 539 "constraint.m"
  {
#line 539 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 539 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 539 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_2;

#line 539 "constraint.m"
    {
#line 539 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_2 = transform_hlds__constraint__add_constraint_feature_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 539 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_2));
#line 539 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 539 "constraint.m"
  }
#line 539 "constraint.m"
}

#line 536 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__IntroducedFrom__func__attach_constraints__536__1_1_f_0(
#line 536 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20)
#line 536 "constraint.m"
{
#line 536 "constraint.m"
  {
#line 536 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_21;
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__TypeCtorInfo_30_30;
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__V_22_22;
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__V_23_23;
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 0)));
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__B_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 1)));
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__C_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 2)));
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__Constructs0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_20, (MR_Integer) 3)));
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_25, (MR_Integer) 0)));
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_25, (MR_Integer) 1)));
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_35;

#line 549 "constraint.m"
    {
#line 549 "constraint.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_34, &transform_hlds__constraint__GoalInfo_35);
    }
#line 548 "constraint.m"
    {
#line 548 "constraint.m"
      transform_hlds__constraint__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_22_22, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_33));
#line 548 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_22_22, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_35));
#line 548 "constraint.m"
    }
#line 1843 "transform_hlds.constraint.c"
    transform_hlds__constraint__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 539 "constraint.m"
    {
#line 539 "constraint.m"
      transform_hlds__constraint__V_23_23 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_30_30, transform_hlds__constraint__TypeCtorInfo_30_30, (MR_Word) &transform_hlds__constraint_scalar_common_2[11], transform_hlds__constraint__Constructs0_28);
    }
#line 538 "constraint.m"
    {
#line 538 "constraint.m"
      transform_hlds__constraint__HeadVar__2_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 538 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 0) = ((MR_Box) (transform_hlds__constraint__V_22_22));
#line 538 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 1) = ((MR_Box) (transform_hlds__constraint__B_26));
#line 538 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 2) = ((MR_Box) (transform_hlds__constraint__C_27));
#line 538 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_21, 3) = ((MR_Box) (transform_hlds__constraint__V_23_23));
#line 538 "constraint.m"
    }
#line 536 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_21;
#line 536 "constraint.m"
  }
#line 536 "constraint.m"
}

#line 417 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__417__1_2_p_0(
#line 417 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_20,
#line 417 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_21)
#line 417 "constraint.m"
{
#line 417 "constraint.m"
  {
#line 417 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 418 "constraint.m"
    {
#line 418 "constraint.m"
      MR_Word base;
#line 418 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_21 = base;
#line 418 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_20));
#line 418 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "constraint.m"
    }
#line 417 "constraint.m"
  }
#line 417 "constraint.m"
}

#line 337 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__337__1_5_p_0(
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 337 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_39)
#line 337 "constraint.m"
{
#line 337 "constraint.m"
  {
#line 337 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 337 "constraint.m"
    MR_Word transform_hlds__constraint__InstBefore_45;
#line 337 "constraint.m"
    MR_Word transform_hlds__constraint__InstAfter_46;
#line 337 "constraint.m"
    MR_Word transform_hlds__constraint__Type_47;

#line 339 "constraint.m"
    {
#line 339 "constraint.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__HeadVar__5_39, &transform_hlds__constraint__InstBefore_45);
    }
#line 340 "constraint.m"
    {
#line 340 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__HeadVar__5_39, &transform_hlds__constraint__InstAfter_46);
    }
#line 337 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 337 "constraint.m"
      {
#line 341 "constraint.m"
        {
#line 341 "constraint.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__HeadVar__5_39, &transform_hlds__constraint__Type_47);
        }
#line 342 "constraint.m"
        {
#line 342 "constraint.m"
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(transform_hlds__constraint__InstAfter_46, transform_hlds__constraint__InstBefore_45, transform_hlds__constraint__Type_47, transform_hlds__constraint__ModuleInfo_2);
        }
#line 342 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 337 "constraint.m"
      }
#line 337 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 337 "constraint.m"
  }
#line 337 "constraint.m"
}

#line 323 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__323__1_5_p_0(
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__InstMapDelta_21,
#line 323 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__5_37)
#line 323 "constraint.m"
{
#line 323 "constraint.m"
  {
#line 323 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 323 "constraint.m"
    MR_Word transform_hlds__constraint__InstBefore_27;
#line 323 "constraint.m"
    MR_Word transform_hlds__constraint__InstAfter_28;
#line 323 "constraint.m"
    MR_Word transform_hlds__constraint__Type_29;

#line 325 "constraint.m"
    {
#line 325 "constraint.m"
      hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__HeadVar__5_37, &transform_hlds__constraint__InstBefore_27);
    }
#line 326 "constraint.m"
    {
#line 326 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(transform_hlds__constraint__InstMapDelta_21, transform_hlds__constraint__HeadVar__5_37, &transform_hlds__constraint__InstAfter_28);
    }
#line 323 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 323 "constraint.m"
      {
#line 327 "constraint.m"
        {
#line 327 "constraint.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__HeadVar__5_37, &transform_hlds__constraint__Type_29);
        }
#line 328 "constraint.m"
        {
#line 328 "constraint.m"
          transform_hlds__constraint__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(transform_hlds__constraint__InstAfter_28, transform_hlds__constraint__InstBefore_27, transform_hlds__constraint__Type_29, transform_hlds__constraint__ModuleInfo_2);
        }
#line 328 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 323 "constraint.m"
      }
#line 323 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 323 "constraint.m"
  }
#line 323 "constraint.m"
}

#line 230 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__230__1_2_p_0(
#line 230 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_14,
#line 230 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_15)
#line 230 "constraint.m"
{
#line 230 "constraint.m"
  {
#line 230 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 230 "constraint.m"
    MR_Word transform_hlds__constraint__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 0)));
#line 230 "constraint.m"
    MR_Word transform_hlds__constraint__Constructs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 3)));
#line 230 "constraint.m"
    MR_Word transform_hlds__constraint__V_16_16;
#line 230 "constraint.m"
    MR_Word transform_hlds__constraint__V_17_17;
#line 231 "constraint.m"
    MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 1)));
#line 231 "constraint.m"
    MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_14, (MR_Integer) 2)));

#line 232 "constraint.m"
    {
#line 232 "constraint.m"
      transform_hlds__constraint__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_17_17, 0) = ((MR_Box) (transform_hlds__constraint__Goal_7));
#line 232 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "constraint.m"
    }
#line 232 "constraint.m"
    {
#line 232 "constraint.m"
      transform_hlds__constraint__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_16_16, 0) = ((MR_Box) (transform_hlds__constraint__V_17_17));
#line 232 "constraint.m"
      MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "constraint.m"
    }
#line 232 "constraint.m"
    {
#line 232 "constraint.m"
      MR_Word base;
#line 232 "constraint.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_15 = base;
#line 232 "constraint.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Constructs_10));
#line 232 "constraint.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__V_16_16));
#line 232 "constraint.m"
    }
#line 230 "constraint.m"
  }
#line 230 "constraint.m"
}

#line 755 "constraint.m"
void MR_CALL 
transform_hlds__constraint____Compare____constraint_info_0_0(
#line 755 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 755 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 755 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 755 "constraint.m"
{
#line 755 "constraint.m"
  {
#line 755 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 755 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_18 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 755 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_19 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 755 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_18 == transform_hlds__constraint__CastY_19);
#line 755 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2115 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 755 "constraint.m"
    else
#line 755 "constraint.m"
      {
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 4)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_14_14;

#line 755 "constraint.m"
        {
#line 755 "constraint.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__constraint__V_14_14, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_9_9);
        }
#line 2149 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 755 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 755 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 755 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 755 "constraint.m"
        else
#line 755 "constraint.m"
          {
#line 755 "constraint.m"
            MR_Word transform_hlds__constraint__V_15_15;

#line 755 "constraint.m"
            {
#line 755 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_2[1], &transform_hlds__constraint__V_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
            }
#line 2169 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_15_15 == (MR_Integer) 0);
#line 755 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 755 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 755 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_15_15;
#line 755 "constraint.m"
            else
#line 755 "constraint.m"
              {
#line 755 "constraint.m"
                MR_Word transform_hlds__constraint__V_16_16;

#line 755 "constraint.m"
                {
#line 755 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[7], &transform_hlds__constraint__V_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
                }
#line 2189 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_16_16 == (MR_Integer) 0);
#line 755 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 755 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 755 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_16_16;
#line 755 "constraint.m"
                else
#line 755 "constraint.m"
                  {
#line 755 "constraint.m"
                    MR_Word transform_hlds__constraint__V_17_17;

#line 755 "constraint.m"
                    {
#line 755 "constraint.m"
                      hlds__instmap____Compare____instmap_0_0(&transform_hlds__constraint__V_17_17, transform_hlds__constraint__V_7_7, transform_hlds__constraint__V_12_12);
                    }
#line 2209 "transform_hlds.constraint.c"
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_17_17 == (MR_Integer) 0);
#line 755 "constraint.m"
                    transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 755 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 755 "constraint.m"
                      *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_17_17;
#line 755 "constraint.m"
                    else
#line 755 "constraint.m"
                      {
#line 755 "constraint.m"
                        MR_Integer transform_hlds__constraint__V_25_25 = (MR_Integer) transform_hlds__constraint__V_8_8;
#line 755 "constraint.m"
                        MR_Integer transform_hlds__constraint__V_26_26 = (MR_Integer) transform_hlds__constraint__V_13_13;

#line 755 "constraint.m"
                        {
#line 755 "constraint.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__V_25_25, transform_hlds__constraint__V_26_26);
#line 755 "constraint.m"
                          return;
                        }
#line 755 "constraint.m"
                      }
#line 755 "constraint.m"
                  }
#line 755 "constraint.m"
              }
#line 755 "constraint.m"
          }
#line 755 "constraint.m"
      }
#line 755 "constraint.m"
  }
#line 755 "constraint.m"
}

#line 755 "constraint.m"
MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_info_0_0(
#line 755 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 755 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 755 "constraint.m"
{
#line 755 "constraint.m"
  {
#line 755 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 755 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_13 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 755 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_14 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 755 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_13 == transform_hlds__constraint__CastY_14);
#line 755 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 755 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 755 "constraint.m"
    else
#line 755 "constraint.m"
      {
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_17_17;
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 4)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 755 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 4)));

#line 2301 "transform_hlds.constraint.c"
        {
#line 2303 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_8_8);
        }
#line 755 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 755 "constraint.m"
          {
#line 2310 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_2[1];
#line 2312 "transform_hlds.constraint.c"
            {
#line 2314 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 755 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 755 "constraint.m"
              {
#line 2321 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_17_17 = (MR_Word) &transform_hlds__constraint_scalar_common_1[7];
#line 2323 "transform_hlds.constraint.c"
                {
#line 2325 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_17_17, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 755 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 755 "constraint.m"
                  {
#line 2332 "transform_hlds.constraint.c"
                    {
#line 2334 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = hlds__instmap____Unify____instmap_0_0(transform_hlds__constraint__V_6_6, transform_hlds__constraint__V_11_11);
                    }
#line 755 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 2339 "transform_hlds.constraint.c"
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_7_7 == transform_hlds__constraint__V_12_12);
#line 755 "constraint.m"
                  }
#line 755 "constraint.m"
              }
#line 755 "constraint.m"
          }
#line 755 "constraint.m"
      }
#line 755 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 755 "constraint.m"
  }
#line 755 "constraint.m"
}

#line 384 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constraint_0_0(
#line 384 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 384 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 384 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 384 "constraint.m"
{
#line 384 "constraint.m"
  {
#line 384 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 384 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 384 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 384 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
#line 384 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2380 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 384 "constraint.m"
    else
#line 384 "constraint.m"
      {
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12;

#line 384 "constraint.m"
        {
#line 384 "constraint.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__V_12_12, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_8_8);
        }
#line 2410 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_12_12 == (MR_Integer) 0);
#line 384 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 384 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 384 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_12_12;
#line 384 "constraint.m"
        else
#line 384 "constraint.m"
          {
#line 384 "constraint.m"
            MR_Word transform_hlds__constraint__V_13_13;

#line 384 "constraint.m"
            {
#line 384 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_13_13, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 2430 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_13_13 == (MR_Integer) 0);
#line 384 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 384 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 384 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_13_13;
#line 384 "constraint.m"
            else
#line 384 "constraint.m"
              {
#line 384 "constraint.m"
                MR_Word transform_hlds__constraint__V_14_14;

#line 384 "constraint.m"
                {
#line 384 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_14_14, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 2450 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 384 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 384 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 384 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 384 "constraint.m"
                else
#line 384 "constraint.m"
                  {
#line 384 "constraint.m"
                    {
#line 384 "constraint.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__V_7_7)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
#line 384 "constraint.m"
                      return;
                    }
#line 384 "constraint.m"
                  }
#line 384 "constraint.m"
              }
#line 384 "constraint.m"
          }
#line 384 "constraint.m"
      }
#line 384 "constraint.m"
  }
#line 384 "constraint.m"
}

#line 384 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constraint_0_0(
#line 384 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 384 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 384 "constraint.m"
{
#line 384 "constraint.m"
  {
#line 384 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 384 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 384 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 384 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
#line 384 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 384 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 384 "constraint.m"
    else
#line 384 "constraint.m"
      {
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 384 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

#line 2533 "transform_hlds.constraint.c"
        {
#line 2535 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_7_7);
        }
#line 384 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 384 "constraint.m"
          {
#line 2542 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2544 "transform_hlds.constraint.c"
            {
#line 2546 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_8_8)));
            }
#line 384 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 384 "constraint.m"
              {
#line 2553 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2555 "transform_hlds.constraint.c"
                {
#line 2557 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
                }
#line 384 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 384 "constraint.m"
                  {
#line 2564 "transform_hlds.constraint.c"
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[0];
#line 2566 "transform_hlds.constraint.c"
                    {
#line 2568 "transform_hlds.constraint.c"
                      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                    }
#line 384 "constraint.m"
                  }
#line 384 "constraint.m"
              }
#line 384 "constraint.m"
          }
#line 384 "constraint.m"
      }
#line 384 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 384 "constraint.m"
  }
#line 384 "constraint.m"
}

#line 406 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____constrained_conj_0_0(
#line 406 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 406 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 406 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 406 "constraint.m"
{
#line 406 "constraint.m"
  {
#line 406 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 406 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
#line 406 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

#line 406 "constraint.m"
    {
#line 406 "constraint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[6], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
#line 406 "constraint.m"
      return;
    }
#line 406 "constraint.m"
  }
#line 406 "constraint.m"
}

#line 406 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____constrained_conj_0_0(
#line 406 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 406 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 406 "constraint.m"
{
#line 406 "constraint.m"
  {
#line 406 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 406 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
#line 406 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

#line 406 "constraint.m"
    {
#line 406 "constraint.m"
      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[6], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
#line 406 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 406 "constraint.m"
  }
#line 406 "constraint.m"
}

#line 363 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conjunct_0_0(
#line 363 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__1_1,
#line 363 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 363 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3)
#line 363 "constraint.m"
{
#line 363 "constraint.m"
  {
#line 363 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 363 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_15 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;
#line 363 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_16 = (MR_Integer) transform_hlds__constraint__HeadVar__3_3;

#line 363 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_15 == transform_hlds__constraint__CastY_16);
#line 363 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 2672 "transform_hlds.constraint.c"
      *transform_hlds__constraint__HeadVar__1_1 = (MR_Integer) 0;
#line 363 "constraint.m"
    else
#line 363 "constraint.m"
      {
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 2)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 3)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12;

#line 363 "constraint.m"
        {
#line 363 "constraint.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&transform_hlds__constraint__V_12_12, transform_hlds__constraint__V_4_4, transform_hlds__constraint__V_8_8);
        }
#line 2702 "transform_hlds.constraint.c"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_12_12 == (MR_Integer) 0);
#line 363 "constraint.m"
        transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 363 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 363 "constraint.m"
          *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_12_12;
#line 363 "constraint.m"
        else
#line 363 "constraint.m"
          {
#line 363 "constraint.m"
            MR_Word transform_hlds__constraint__V_13_13;

#line 363 "constraint.m"
            {
#line 363 "constraint.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_13_13, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
            }
#line 2722 "transform_hlds.constraint.c"
            transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_13_13 == (MR_Integer) 0);
#line 363 "constraint.m"
            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 363 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 363 "constraint.m"
              *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_13_13;
#line 363 "constraint.m"
            else
#line 363 "constraint.m"
              {
#line 363 "constraint.m"
                MR_Word transform_hlds__constraint__V_14_14;

#line 363 "constraint.m"
                {
#line 363 "constraint.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], &transform_hlds__constraint__V_14_14, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                }
#line 2742 "transform_hlds.constraint.c"
                transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_14_14 == (MR_Integer) 0);
#line 363 "constraint.m"
                transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 363 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 363 "constraint.m"
                  *transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__V_14_14;
#line 363 "constraint.m"
                else
#line 363 "constraint.m"
                  {
#line 363 "constraint.m"
                    {
#line 363 "constraint.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[5], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__V_7_7)), ((MR_Box) (transform_hlds__constraint__V_11_11)));
#line 363 "constraint.m"
                      return;
                    }
#line 363 "constraint.m"
                  }
#line 363 "constraint.m"
              }
#line 363 "constraint.m"
          }
#line 363 "constraint.m"
      }
#line 363 "constraint.m"
  }
#line 363 "constraint.m"
}

#line 363 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conjunct_0_0(
#line 363 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 363 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2)
#line 363 "constraint.m"
{
#line 363 "constraint.m"
  {
#line 363 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 363 "constraint.m"
    MR_Integer transform_hlds__constraint__CastX_11 = (MR_Integer) transform_hlds__constraint__HeadVar__1_1;
#line 363 "constraint.m"
    MR_Integer transform_hlds__constraint__CastY_12 = (MR_Integer) transform_hlds__constraint__HeadVar__2_2;

#line 363 "constraint.m"
    transform_hlds__constraint__succeeded = (transform_hlds__constraint__CastX_11 == transform_hlds__constraint__CastY_12);
#line 363 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 363 "constraint.m"
      transform_hlds__constraint__succeeded = MR_TRUE;
#line 363 "constraint.m"
    else
#line 363 "constraint.m"
      {
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_14_14;
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_15_15;
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__TypeInfo_16_16;
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 2)));
#line 363 "constraint.m"
        MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 3)));

#line 2825 "transform_hlds.constraint.c"
        {
#line 2827 "transform_hlds.constraint.c"
          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(transform_hlds__constraint__V_3_3, transform_hlds__constraint__V_7_7);
        }
#line 363 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 363 "constraint.m"
          {
#line 2834 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_14_14 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2836 "transform_hlds.constraint.c"
            {
#line 2838 "transform_hlds.constraint.c"
              transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_14_14, ((MR_Box) (transform_hlds__constraint__V_4_4)), ((MR_Box) (transform_hlds__constraint__V_8_8)));
            }
#line 363 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 363 "constraint.m"
              {
#line 2845 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeInfo_15_15 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2847 "transform_hlds.constraint.c"
                {
#line 2849 "transform_hlds.constraint.c"
                  transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_15_15, ((MR_Box) (transform_hlds__constraint__V_5_5)), ((MR_Box) (transform_hlds__constraint__V_9_9)));
                }
#line 363 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 363 "constraint.m"
                  {
#line 2856 "transform_hlds.constraint.c"
                    transform_hlds__constraint__TypeInfo_16_16 = (MR_Word) &transform_hlds__constraint_scalar_common_1[5];
#line 2858 "transform_hlds.constraint.c"
                    {
#line 2860 "transform_hlds.constraint.c"
                      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__constraint__TypeInfo_16_16, ((MR_Box) (transform_hlds__constraint__V_6_6)), ((MR_Box) (transform_hlds__constraint__V_10_10)));
                    }
#line 363 "constraint.m"
                  }
#line 363 "constraint.m"
              }
#line 363 "constraint.m"
          }
#line 363 "constraint.m"
      }
#line 363 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 363 "constraint.m"
  }
#line 363 "constraint.m"
}

#line 361 "constraint.m"
static void MR_CALL 
transform_hlds__constraint____Compare____annotated_conj_0_0(
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
    MR_Word transform_hlds__constraint__Cast_HeadVar1_4 = transform_hlds__constraint__HeadVar__2_2;
#line 361 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_5 = transform_hlds__constraint__HeadVar__3_3;

#line 361 "constraint.m"
    {
#line 361 "constraint.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], transform_hlds__constraint__HeadVar__1_1, ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_5)));
#line 361 "constraint.m"
      return;
    }
#line 361 "constraint.m"
  }
#line 361 "constraint.m"
}

#line 361 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint____Unify____annotated_conj_0_0(
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
    MR_Word transform_hlds__constraint__Cast_HeadVar1_3 = transform_hlds__constraint__HeadVar__1_1;
#line 361 "constraint.m"
    MR_Word transform_hlds__constraint__Cast_HeadVar2_4 = transform_hlds__constraint__HeadVar__2_2;

#line 361 "constraint.m"
    {
#line 361 "constraint.m"
      return transform_hlds__constraint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[4], ((MR_Box) (transform_hlds__constraint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__constraint__Cast_HeadVar2_4)));
    }
#line 361 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 361 "constraint.m"
  }
#line 361 "constraint.m"
}

#line 832 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_3(
#line 832 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 832 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 832 "constraint.m"
{
#line 832 "constraint.m"
  {
#line 832 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 832 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 832 "constraint.m"
    MR_Word transform_hlds__constraint__conv2_HeadVar__2_19;

#line 832 "constraint.m"
    {
#line 832 "constraint.m"
      transform_hlds__constraint__conv2_HeadVar__2_19 = transform_hlds__constraint__IntroducedFrom__func__strip_constraint_markers_expr__832__1_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 832 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_HeadVar__2_19));
#line 832 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 832 "constraint.m"
  }
#line 832 "constraint.m"
}

#line 829 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_2(
#line 829 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 829 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 829 "constraint.m"
{
#line 829 "constraint.m"
  {
#line 829 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 829 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 829 "constraint.m"
    MR_Word transform_hlds__constraint__conv1_HeadVar__2_2;

#line 829 "constraint.m"
    {
#line 829 "constraint.m"
      transform_hlds__constraint__conv1_HeadVar__2_2 = transform_hlds__constraint__strip_constraint_markers_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 829 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_HeadVar__2_2));
#line 829 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 829 "constraint.m"
  }
#line 829 "constraint.m"
}

#line 827 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0_1(
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
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_2;

#line 827 "constraint.m"
    {
#line 827 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_2 = transform_hlds__constraint__strip_constraint_markers_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 827 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_2));
#line 827 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 827 "constraint.m"
  }
#line 827 "constraint.m"
}

#line 824 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(
#line 824 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 824 "constraint.m"
{
#line 826 "constraint.m"
  {
#line 826 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 826 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;

#line 826 "constraint.m"
#line 826 "constraint.m"
    switch (MR_tag((MR_Word) transform_hlds__constraint__HeadVar__1_1)) {
#line 826 "constraint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 826 "constraint.m"
      case (MR_Integer) 0:
#line 836 "constraint.m"
        {
#line 836 "constraint.m"
          MR_Word transform_hlds__constraint__Goal_24 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__HeadVar__1_1), (MR_Integer) 0);
#line 836 "constraint.m"
          MR_Word transform_hlds__constraint__V_25_25;

#line 837 "constraint.m"
          {
#line 837 "constraint.m"
            transform_hlds__constraint__V_25_25 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_24);
          }
#line 837 "constraint.m"
          transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__V_25_25);
#line 836 "constraint.m"
        }
#line 826 "constraint.m"
        break;
#line 826 "constraint.m"
      case (MR_Integer) 1:
#line 851 "constraint.m"
        transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 826 "constraint.m"
        break;
#line 826 "constraint.m"
      case (MR_Integer) 2:
#line 849 "constraint.m"
        transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 826 "constraint.m"
        break;
#line 826 "constraint.m"
      case (MR_Integer) 3:
#line 826 "constraint.m"
#line 826 "constraint.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)))) {
#line 826 "constraint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 826 "constraint.m"
          case (MR_Integer) 0:
#line 847 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 826 "constraint.m"
            break;
#line 826 "constraint.m"
          case (MR_Integer) 1:
#line 845 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 826 "constraint.m"
            break;
#line 826 "constraint.m"
          case (MR_Integer) 2:
#line 826 "constraint.m"
            {
#line 826 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 826 "constraint.m"
              MR_Word transform_hlds__constraint__ConjType_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 826 "constraint.m"
              MR_Word transform_hlds__constraint__V_5_5;

#line 827 "constraint.m"
              {
#line 827 "constraint.m"
                transform_hlds__constraint__V_5_5 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_65_65, transform_hlds__constraint__TypeCtorInfo_65_65, (MR_Word) &transform_hlds__constraint_scalar_common_2[8], transform_hlds__constraint__Goals_4);
              }
#line 827 "constraint.m"
              {
#line 827 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 827 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 827 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_3));
#line 827 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_5_5));
#line 827 "constraint.m"
              }
#line 826 "constraint.m"
            }
#line 826 "constraint.m"
            break;
#line 826 "constraint.m"
          case (MR_Integer) 3:
#line 828 "constraint.m"
            {
#line 828 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 828 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 828 "constraint.m"
              MR_Word transform_hlds__constraint__V_8_8;

#line 829 "constraint.m"
              {
#line 829 "constraint.m"
                transform_hlds__constraint__V_8_8 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_68_68, transform_hlds__constraint__TypeCtorInfo_68_68, (MR_Word) &transform_hlds__constraint_scalar_common_2[9], transform_hlds__constraint__Goals_7);
              }
#line 829 "constraint.m"
              {
#line 829 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 829 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__V_8_8));
#line 829 "constraint.m"
              }
#line 828 "constraint.m"
            }
#line 826 "constraint.m"
            break;
#line 826 "constraint.m"
          case (MR_Integer) 4:
#line 831 "constraint.m"
            {
#line 831 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 831 "constraint.m"
              MR_Word transform_hlds__constraint__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 831 "constraint.m"
              MR_Word transform_hlds__constraint__CanFail_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 831 "constraint.m"
              MR_Word transform_hlds__constraint__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 831 "constraint.m"
              MR_Word transform_hlds__constraint__Cases_13;

#line 832 "constraint.m"
              {
#line 832 "constraint.m"
                transform_hlds__constraint__Cases_13 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_71_71, transform_hlds__constraint__TypeCtorInfo_71_71, (MR_Word) &transform_hlds__constraint_scalar_common_2[10], transform_hlds__constraint__Cases0_12);
              }
#line 831 "constraint.m"
              {
#line 831 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 831 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 831 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Var_10));
#line 831 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_11));
#line 831 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 3) = ((MR_Box) (transform_hlds__constraint__Cases_13));
#line 831 "constraint.m"
              }
#line 831 "constraint.m"
            }
#line 826 "constraint.m"
            break;
#line 826 "constraint.m"
          case (MR_Integer) 5:
#line 838 "constraint.m"
            {
#line 838 "constraint.m"
              MR_Word transform_hlds__constraint__Reason_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 838 "constraint.m"
              MR_Word transform_hlds__constraint__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 838 "constraint.m"
              MR_Word transform_hlds__constraint__V_28_28;

#line 839 "constraint.m"
              {
#line 839 "constraint.m"
                transform_hlds__constraint__V_28_28 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal_27);
              }
#line 839 "constraint.m"
              {
#line 839 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 839 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 839 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Reason_26));
#line 839 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_28_28));
#line 839 "constraint.m"
              }
#line 838 "constraint.m"
            }
#line 826 "constraint.m"
            break;
#line 826 "constraint.m"
          case (MR_Integer) 6:
#line 840 "constraint.m"
            {
#line 840 "constraint.m"
              MR_Word transform_hlds__constraint__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 840 "constraint.m"
              MR_Word transform_hlds__constraint__If_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 2)));
#line 840 "constraint.m"
              MR_Word transform_hlds__constraint__Then_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 3)));
#line 840 "constraint.m"
              MR_Word transform_hlds__constraint__Else_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 4)));
#line 840 "constraint.m"
              MR_Word transform_hlds__constraint__V_33_33;
#line 840 "constraint.m"
              MR_Word transform_hlds__constraint__V_34_34;
#line 840 "constraint.m"
              MR_Word transform_hlds__constraint__V_35_35;

#line 842 "constraint.m"
              {
#line 842 "constraint.m"
                transform_hlds__constraint__V_33_33 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__If_30);
              }
#line 843 "constraint.m"
              {
#line 843 "constraint.m"
                transform_hlds__constraint__V_34_34 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Then_31);
              }
#line 844 "constraint.m"
              {
#line 844 "constraint.m"
                transform_hlds__constraint__V_35_35 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Else_32);
              }
#line 841 "constraint.m"
              {
#line 841 "constraint.m"
                transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 841 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 841 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__Vars_29));
#line 841 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 2) = ((MR_Box) (transform_hlds__constraint__V_33_33));
#line 841 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 3) = ((MR_Box) (transform_hlds__constraint__V_34_34));
#line 841 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__HeadVar__2_2, 4) = ((MR_Box) (transform_hlds__constraint__V_35_35));
#line 841 "constraint.m"
              }
#line 840 "constraint.m"
            }
#line 826 "constraint.m"
            break;
#line 826 "constraint.m"
          case (MR_Integer) 7:
#line 853 "constraint.m"
            transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__1_1;
#line 826 "constraint.m"
            break;
#line 826 "constraint.m"
        }
#line 826 "constraint.m"
        break;
#line 826 "constraint.m"
    }
#line 826 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 826 "constraint.m"
  }
#line 824 "constraint.m"
}

#line 814 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__strip_constraint_markers_1_f_0(
#line 814 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 814 "constraint.m"
{
#line 817 "constraint.m"
  {
#line 817 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 817 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;
#line 817 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 817 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 817 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5;
#line 817 "constraint.m"
    MR_Word transform_hlds__constraint__V_6_6;

#line 817 "constraint.m"
    {
#line 817 "constraint.m"
      transform_hlds__constraint__V_6_6 = transform_hlds__constraint__strip_constraint_markers_expr_1_f_0(transform_hlds__constraint__GoalExpr_3);
    }
#line 818 "constraint.m"
    {
#line 818 "constraint.m"
      transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo0_4, (MR_Integer) 0);
    }
#line 820 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 819 "constraint.m"
      {
#line 819 "constraint.m"
        {
#line 819 "constraint.m"
          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_4, &transform_hlds__constraint__GoalInfo_5);
        }
#line 819 "constraint.m"
      }
#line 820 "constraint.m"
    else
#line 821 "constraint.m"
      transform_hlds__constraint__GoalInfo_5 = transform_hlds__constraint__GoalInfo0_4;
#line 817 "constraint.m"
    {
#line 817 "constraint.m"
      transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 817 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__constraint__V_6_6));
#line 817 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_5));
#line 817 "constraint.m"
    }
#line 817 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 817 "constraint.m"
  }
#line 814 "constraint.m"
}

#line 798 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_changed_3_p_0(
#line 798 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_4,
#line 798 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_8,
#line 798 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_9)
#line 798 "constraint.m"
{
#line 803 "constraint.m"
  {
#line 803 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 803 "constraint.m"
    if ((transform_hlds__constraint__Constraints_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_9 = transform_hlds__constraint__STATE_VARIABLE_Info_0_8;
#line 803 "constraint.m"
    else
#line 805 "constraint.m"
      {
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));

#line 806 "constraint.m"
        {
#line 806 "constraint.m"
          MR_Word base;
#line 806 "constraint.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 806 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_Info_9 = base;
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_12_12));
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_13_13));
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_14_14));
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__V_15_15));
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 1));
#line 806 "constraint.m"
        }
#line 805 "constraint.m"
      }
#line 803 "constraint.m"
  }
#line 798 "constraint.m"
}

#line 772 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__constraint_info_update_goal_3_p_0(
#line 772 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 772 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_10,
#line 772 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_11)
#line 772 "constraint.m"
{
#line 775 "constraint.m"
  {
#line 775 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 775 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 775 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 775 "constraint.m"
    MR_Word transform_hlds__constraint__InstMapDelta_8;
#line 775 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap_9;
#line 775 "constraint.m"
    MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 776 "constraint.m"
    MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 776 "constraint.m"
    MR_Word transform_hlds__constraint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 776 "constraint.m"
    MR_Word transform_hlds__constraint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 776 "constraint.m"
    MR_Word transform_hlds__constraint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__V_17_17;
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__V_18_18;
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__V_19_19;
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__V_21_21;
#line 779 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;

#line 777 "constraint.m"
    {
#line 777 "constraint.m"
      transform_hlds__constraint__InstMapDelta_8 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_5);
    }
#line 778 "constraint.m"
    {
#line 778 "constraint.m"
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_7, transform_hlds__constraint__InstMapDelta_8, &transform_hlds__constraint__InstMap_9);
    }
#line 779 "constraint.m"
    transform_hlds__constraint__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
#line 779 "constraint.m"
    transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
#line 779 "constraint.m"
    transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
#line 779 "constraint.m"
    transform_hlds__constraint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
#line 779 "constraint.m"
    transform_hlds__constraint__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
#line 779 "constraint.m"
    {
#line 779 "constraint.m"
      MR_Word base;
#line 779 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 779 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_11 = base;
#line 779 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_17_17));
#line 779 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_18_18));
#line 779 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_19_19));
#line 779 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
#line 779 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__constraint__V_21_21));
#line 779 "constraint.m"
    }
#line 775 "constraint.m"
  }
#line 772 "constraint.m"
}

#line 729 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__goal_is_simple_1_p_0(
#line 729 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_2)
#line 729 "constraint.m"
{
#line 731 "constraint.m"
  {
#line 731 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 731 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 0)));
#line 732 "constraint.m"
    MR_Word transform_hlds__constraint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_2, (MR_Integer) 1)));

#line 736 "constraint.m"
    if (((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 0))))
#line 737 "constraint.m"
      {
#line 737 "constraint.m"
        MR_Word transform_hlds__constraint__SubGoal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_3), (MR_Integer) 0);

#line 738 "constraint.m"
        {
#line 738 "constraint.m"
          transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_5);
        }
#line 737 "constraint.m"
      }
#line 736 "constraint.m"
    else
#line 736 "constraint.m"
    if (((((MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 740 "constraint.m"
      {
#line 740 "constraint.m"
        MR_Word transform_hlds__constraint__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 1)));
#line 740 "constraint.m"
        MR_Word transform_hlds__constraint__SubGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_3, (MR_Integer) 2)));
#line 742 "constraint.m"
        MR_Word transform_hlds__constraint__FGT_8;
#line 742 "constraint.m"
        MR_Word transform_hlds__constraint__V_7_7;

#line 742 "constraint.m"
        transform_hlds__constraint__succeeded = ((((MR_tag((MR_Word) transform_hlds__constraint__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 742 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 742 "constraint.m"
          {
#line 742 "constraint.m"
            transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 1)));
#line 742 "constraint.m"
            transform_hlds__constraint__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_6, (MR_Integer) 2)));
#line 744 "constraint.m"
#line 744 "constraint.m"
            switch (transform_hlds__constraint__FGT_8) {
#line 744 "constraint.m"
              default:
#line 744 "constraint.m"
                transform_hlds__constraint__succeeded = MR_FALSE;
#line 744 "constraint.m"
                break;
#line 744 "constraint.m"
              case (MR_Integer) 1:
#line 743 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 744 "constraint.m"
                break;
#line 744 "constraint.m"
              case (MR_Integer) 2:
#line 744 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 744 "constraint.m"
                break;
#line 744 "constraint.m"
            }
#line 742 "constraint.m"
          }
#line 748 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 747 "constraint.m"
          transform_hlds__constraint__succeeded = MR_TRUE;
#line 748 "constraint.m"
        else
#line 749 "constraint.m"
          {
#line 749 "constraint.m"
            transform_hlds__constraint__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__SubGoal_10);
          }
#line 740 "constraint.m"
      }
#line 736 "constraint.m"
    else
#line 736 "constraint.m"
      transform_hlds__constraint__succeeded = MR_FALSE;
#line 736 "constraint.m"
    if (!(transform_hlds__constraint__succeeded))
#line 735 "constraint.m"
      {
#line 735 "constraint.m"
        MR_Word transform_hlds__constraint__V_9_9;

#line 735 "constraint.m"
        {
#line 735 "constraint.m"
          transform_hlds__constraint__V_9_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr_3);
        }
#line 735 "constraint.m"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_9_9 == (MR_Integer) 1);
#line 735 "constraint.m"
      }
#line 731 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 731 "constraint.m"
  }
#line 729 "constraint.m"
}

#line 718 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(
#line 718 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 718 "constraint.m"
{
#line 718 "constraint.m"
  {
#line 718 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 718 "constraint.m"
    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0, 1);
#line 718 "constraint.m"
  }
#line 718 "constraint.m"
}

#line 717 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3(
#line 717 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 717 "constraint.m"
{
#line 717 "constraint.m"
  {
#line 717 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 717 "constraint.m"
    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20);
#line 717 "constraint.m"
    {
#line 717 "constraint.m"
      transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(transform_hlds__constraint__env_ptr);
#line 717 "constraint.m"
      return;
    }
#line 717 "constraint.m"
  }
#line 717 "constraint.m"
}

#line 718 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_2(
#line 718 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 718 "constraint.m"
{
#line 718 "constraint.m"
  {
#line 718 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 718 "constraint.m"
    {
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_44;
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierChangedVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 1)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 1)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintNonLocals_42;
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_43;
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 0)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 2)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__ComplexConstraint_20, (MR_Integer) 3)));
#line 660 "constraint.m"
      MR_Word transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
#line 660 "constraint.m"
      MR_Word transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
#line 660 "constraint.m"
      MR_Word transform_hlds__constraint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
#line 661 "constraint.m"
      MR_Word transform_hlds__constraint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_36, (MR_Integer) 0)));

#line 662 "constraint.m"
      {
#line 662 "constraint.m"
        transform_hlds__constraint__ConstraintNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_41);
      }
#line 3739 "transform_hlds.constraint.c"
      transform_hlds__constraint__TypeCtorInfo_17_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 663 "constraint.m"
      {
#line 663 "constraint.m"
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierChangedVars_33, transform_hlds__constraint__ConstraintNonLocals_42, &transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
#line 665 "constraint.m"
      {
#line 665 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_44, transform_hlds__constraint__EarlierConstraintIntersection_43);
      }
#line 718 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
#line 718 "constraint.m"
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 718 "constraint.m"
        {
#line 718 "constraint.m"
          transform_hlds__constraint__filter_complex_constraints_2_5_p_0_1(transform_hlds__constraint__env_ptr);
#line 718 "constraint.m"
          return;
        }
#line 718 "constraint.m"
    }
#line 718 "constraint.m"
  }
#line 718 "constraint.m"
}

#line 718 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(
#line 718 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 718 "constraint.m"
{
#line 718 "constraint.m"
  {
#line 718 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 718 "constraint.m"
    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__commit_0) == 0)
#line 718 "constraint.m"
      {
#line 718 "constraint.m"
        {
#line 717 "constraint.m"
          {
#line 717 "constraint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__conv0_ComplexConstraint_20, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4, transform_hlds__constraint__filter_complex_constraints_2_5_p_0_3, transform_hlds__constraint__env_ptr);
          }
#line 718 "constraint.m"
        }
#line 718 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_FALSE;
#line 718 "constraint.m"
      }
#line 718 "constraint.m"
    else
#line 718 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = MR_TRUE;
#line 718 "constraint.m"
  }
#line 718 "constraint.m"
}

#line 702 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_complex_constraints_2_5_p_0(
#line 702 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 702 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2,
#line 702 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3,
#line 702 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4,
#line 702 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5)
#line 702 "constraint.m"
{
#line 702 "constraint.m"
  {
#line 702 "constraint.m"
    struct transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0_s transform_hlds__constraint__env;

#line 702 "constraint.m"
    (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 706 "constraint.m"
    while (MR_TRUE)
#line 706 "constraint.m"
      {
#line 706 "constraint.m"
        /* tailcall optimized into a loop */
#line 706 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "constraint.m"
          {
#line 707 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 707 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_3 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
#line 706 "constraint.m"
          }
#line 706 "constraint.m"
        else
#line 709 "constraint.m"
          {
#line 709 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_13;
#line 709 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_16;
#line 709 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
#line 709 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;
#line 710 "constraint.m"
            MR_Word transform_hlds__constraint__V_17_17;
#line 710 "constraint.m"
            MR_Word transform_hlds__constraint__V_18_18;
#line 710 "constraint.m"
            MR_Word transform_hlds__constraint__V_19_19;

#line 708 "constraint.m"
            (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 708 "constraint.m"
            transform_hlds__constraint__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 710 "constraint.m"
            transform_hlds__constraint__ConstraintGoal_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 0)));
#line 710 "constraint.m"
            transform_hlds__constraint__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 1)));
#line 710 "constraint.m"
            transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 2)));
#line 710 "constraint.m"
            transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12, (MR_Integer) 3)));
#line 712 "constraint.m"
            {
#line 712 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = transform_hlds__constraint__goal_is_simple_1_p_0(transform_hlds__constraint__ConstraintGoal_16);
            }
#line 712 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 712 "constraint.m"
              {
#line 718 "constraint.m"
                {
#line 718 "constraint.m"
                  transform_hlds__constraint__filter_complex_constraints_2_5_p_0_4(&transform_hlds__constraint__env);
                }
#line 718 "constraint.m"
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded);
#line 712 "constraint.m"
              }
#line 723 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__succeeded)
#line 722 "constraint.m"
              {
#line 722 "constraint.m"
                {
#line 722 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
#line 722 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2));
#line 722 "constraint.m"
                }
#line 722 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4;
#line 722 "constraint.m"
              }
#line 723 "constraint.m"
            else
#line 724 "constraint.m"
              {
#line 724 "constraint.m"
                {
#line 724 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__Constraint_12));
#line 724 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4));
#line 724 "constraint.m"
                }
#line 724 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2;
#line 724 "constraint.m"
              }
#line 726 "constraint.m"
            /* direct tailcall eliminated */
#line 726 "constraint.m"
            {
#line 726 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Constraints_13;
#line 726 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0__tmp_copy_2 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_25_25;
#line 726 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_26_26;

#line 726 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_complex_constraints_2_5_p_0_env_0__STATE_VARIABLE_RevComplexConstraints_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevComplexConstraints_0__tmp_copy_4;
#line 726 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0_2 = transform_hlds__constraint__STATE_VARIABLE_RevSimpleConstraints_0__tmp_copy_2;
#line 726 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 726 "constraint.m"
            }
#line 726 "constraint.m"
            continue;
#line 709 "constraint.m"
          }
#line 706 "constraint.m"
        break;
#line 706 "constraint.m"
      }
#line 702 "constraint.m"
  }
#line 702 "constraint.m"
}

#line 671 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_constraints_5_p_0(
#line 671 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 671 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 671 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 671 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 671 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
#line 671 "constraint.m"
{
#line 675 "constraint.m"
  while (MR_TRUE)
#line 675 "constraint.m"
    {
#line 675 "constraint.m"
      /* tailcall optimized into a loop */
#line 675 "constraint.m"
      {
#line 675 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 675 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 675 "constraint.m"
          {
#line 676 "constraint.m"
            {
#line 676 "constraint.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__HeadVar__2_2, transform_hlds__constraint__HeadVar__3_3);
            }
#line 675 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 675 "constraint.m"
          }
#line 675 "constraint.m"
        else
#line 678 "constraint.m"
          {
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_35_35;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_11_43;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__Goal0_11;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints0_12;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__SimpleConstraints_17;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__ComplexConstraints0_18;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__GoalList1_19;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__ComplexConstraints_20;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__RevComplexConstraints_21;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoalList1_22;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoals1_23;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__V_28_28;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__V_29_29;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__V_30_30;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_32_32;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__RevSimpleConstraints_39;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__RevComplexConstraints_40;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__GoalExpr0_50;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__HasSubGoals_52;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_53;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_16_54;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_17_55;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_82;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_84;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapDelta_85;
#line 678 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap_86;
#line 106 "constraint.m"
            MR_Word transform_hlds__constraint__V_51_51;
#line 117 "constraint.m"
            MR_Word transform_hlds__constraint__V_57_57;
#line 117 "constraint.m"
            MR_Word transform_hlds__constraint__V_58_58;
#line 117 "constraint.m"
            MR_Word transform_hlds__constraint__V_59_59;
#line 117 "constraint.m"
            MR_Word transform_hlds__constraint__V_60_60;
#line 119 "constraint.m"
            MR_Word transform_hlds__constraint__V_61_61;
#line 119 "constraint.m"
            MR_Word transform_hlds__constraint__V_62_62;
#line 119 "constraint.m"
            MR_Word transform_hlds__constraint__V_63_63;
#line 119 "constraint.m"
            MR_Word transform_hlds__constraint__V_65_65;
#line 119 "constraint.m"
            MR_Word transform_hlds__constraint__V_64_64;
#line 775 "constraint.m"
            MR_Word transform_hlds__constraint__V_81_81;
#line 776 "constraint.m"
            MR_Word transform_hlds__constraint__V_88_88;
#line 776 "constraint.m"
            MR_Word transform_hlds__constraint__V_89_89;
#line 776 "constraint.m"
            MR_Word transform_hlds__constraint__V_90_90;
#line 776 "constraint.m"
            MR_Word transform_hlds__constraint__V_91_91;
#line 779 "constraint.m"
            MR_Word transform_hlds__constraint__V_92_92;
#line 779 "constraint.m"
            MR_Word transform_hlds__constraint__V_93_93;
#line 779 "constraint.m"
            MR_Word transform_hlds__constraint__V_94_94;
#line 779 "constraint.m"
            MR_Word transform_hlds__constraint__V_96_96;
#line 779 "constraint.m"
            MR_Word transform_hlds__constraint__V_95_95;

#line 677 "constraint.m"
            transform_hlds__constraint__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_26_26, (MR_Integer) 0)));
#line 677 "constraint.m"
            transform_hlds__constraint__Constraints0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_26_26, (MR_Integer) 1)));
#line 695 "constraint.m"
            {
#line 695 "constraint.m"
              transform_hlds__constraint__filter_complex_constraints_2_5_p_0(transform_hlds__constraint__Constraints0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevSimpleConstraints_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevComplexConstraints_40);
            }
#line 4113 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_11_43 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
#line 697 "constraint.m"
            {
#line 697 "constraint.m"
              transform_hlds__constraint__SimpleConstraints_17 = mercury__list__reverse_1_f_0(transform_hlds__constraint__TypeCtorInfo_11_43, transform_hlds__constraint__RevSimpleConstraints_39);
            }
#line 698 "constraint.m"
            {
#line 698 "constraint.m"
              transform_hlds__constraint__ComplexConstraints0_18 = mercury__list__reverse_1_f_0(transform_hlds__constraint__TypeCtorInfo_11_43, transform_hlds__constraint__RevComplexConstraints_40);
            }
#line 106 "constraint.m"
            transform_hlds__constraint__GoalExpr0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 0)));
#line 106 "constraint.m"
            transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 1)));
#line 107 "constraint.m"
            {
#line 107 "constraint.m"
              transform_hlds__constraint__HasSubGoals_52 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_50);
            }
#line 110 "constraint.m"
#line 110 "constraint.m"
            switch (transform_hlds__constraint__HasSubGoals_52) {
#line 110 "constraint.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 110 "constraint.m"
              case (MR_Integer) 1:
#line 109 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 110 "constraint.m"
                break;
#line 110 "constraint.m"
              case (MR_Integer) 0:
#line 803 "constraint.m"
                if ((transform_hlds__constraint__SimpleConstraints_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 803 "constraint.m"
                else
#line 805 "constraint.m"
                  {
#line 806 "constraint.m"
                    MR_Word transform_hlds__constraint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 806 "constraint.m"
                    MR_Word transform_hlds__constraint__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 806 "constraint.m"
                    MR_Word transform_hlds__constraint__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 806 "constraint.m"
                    MR_Word transform_hlds__constraint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 806 "constraint.m"
                    MR_Word transform_hlds__constraint__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));

#line 806 "constraint.m"
                    {
#line 806 "constraint.m"
                      transform_hlds__constraint__STATE_VARIABLE_Info_16_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 806 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 0) = ((MR_Box) (transform_hlds__constraint__V_74_74));
#line 806 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 1) = ((MR_Box) (transform_hlds__constraint__V_75_75));
#line 806 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 2) = ((MR_Box) (transform_hlds__constraint__V_76_76));
#line 806 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 3) = ((MR_Box) (transform_hlds__constraint__V_77_77));
#line 806 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 806 "constraint.m"
                    }
#line 805 "constraint.m"
                  }
#line 110 "constraint.m"
                break;
#line 110 "constraint.m"
            }
#line 117 "constraint.m"
            transform_hlds__constraint__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 0)));
#line 117 "constraint.m"
            transform_hlds__constraint__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 1)));
#line 117 "constraint.m"
            transform_hlds__constraint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 2)));
#line 117 "constraint.m"
            transform_hlds__constraint__InstMap0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 3)));
#line 117 "constraint.m"
            transform_hlds__constraint__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_54, (MR_Integer) 4)));
#line 118 "constraint.m"
            {
#line 118 "constraint.m"
              transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(transform_hlds__constraint__Goal0_11, transform_hlds__constraint__SimpleConstraints_17, &transform_hlds__constraint__GoalList1_19, transform_hlds__constraint__STATE_VARIABLE_Info_16_54, &transform_hlds__constraint__STATE_VARIABLE_Info_17_55);
            }
#line 119 "constraint.m"
            transform_hlds__constraint__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 0)));
#line 119 "constraint.m"
            transform_hlds__constraint__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 1)));
#line 119 "constraint.m"
            transform_hlds__constraint__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 2)));
#line 119 "constraint.m"
            transform_hlds__constraint__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 3)));
#line 119 "constraint.m"
            transform_hlds__constraint__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_55, (MR_Integer) 4)));
#line 119 "constraint.m"
            {
#line 119 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 119 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (transform_hlds__constraint__V_61_61));
#line 119 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (transform_hlds__constraint__V_62_62));
#line 119 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (transform_hlds__constraint__V_63_63));
#line 119 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_53));
#line 119 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (transform_hlds__constraint__V_65_65));
#line 119 "constraint.m"
            }
#line 682 "constraint.m"
            {
#line 682 "constraint.m"
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__ComplexConstraints0_18, &transform_hlds__constraint__ComplexConstraints_20);
            }
#line 4234 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 683 "constraint.m"
            {
#line 683 "constraint.m"
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__ComplexConstraints_20, &transform_hlds__constraint__RevComplexConstraints_21);
            }
#line 684 "constraint.m"
            {
#line 684 "constraint.m"
              mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__GoalList1_19, &transform_hlds__constraint__RevGoalList1_22);
            }
#line 685 "constraint.m"
            {
#line 685 "constraint.m"
              transform_hlds__constraint__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_30_30, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__2_2));
#line 685 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "constraint.m"
            }
#line 685 "constraint.m"
            {
#line 685 "constraint.m"
              transform_hlds__constraint__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_29_29, 0) = ((MR_Box) (transform_hlds__constraint__RevGoalList1_22));
#line 685 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_29_29, 1) = ((MR_Box) (transform_hlds__constraint__V_30_30));
#line 685 "constraint.m"
            }
#line 685 "constraint.m"
            {
#line 685 "constraint.m"
              transform_hlds__constraint__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_28_28, 0) = ((MR_Box) (transform_hlds__constraint__RevComplexConstraints_21));
#line 685 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_28_28, 1) = ((MR_Box) (transform_hlds__constraint__V_29_29));
#line 685 "constraint.m"
            }
#line 685 "constraint.m"
            {
#line 685 "constraint.m"
              mercury__list__condense_2_p_0(transform_hlds__constraint__TypeCtorInfo_35_35, transform_hlds__constraint__V_28_28, &transform_hlds__constraint__RevGoals1_23);
            }
#line 775 "constraint.m"
            transform_hlds__constraint__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 0)));
#line 775 "constraint.m"
            transform_hlds__constraint__GoalInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_11, (MR_Integer) 1)));
#line 776 "constraint.m"
            transform_hlds__constraint__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 776 "constraint.m"
            transform_hlds__constraint__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 776 "constraint.m"
            transform_hlds__constraint__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 776 "constraint.m"
            transform_hlds__constraint__InstMap0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 776 "constraint.m"
            transform_hlds__constraint__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 777 "constraint.m"
            {
#line 777 "constraint.m"
              transform_hlds__constraint__InstMapDelta_85 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_82);
            }
#line 778 "constraint.m"
            {
#line 778 "constraint.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_84, transform_hlds__constraint__InstMapDelta_85, &transform_hlds__constraint__InstMap_86);
            }
#line 779 "constraint.m"
            transform_hlds__constraint__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 779 "constraint.m"
            transform_hlds__constraint__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 779 "constraint.m"
            transform_hlds__constraint__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 779 "constraint.m"
            transform_hlds__constraint__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 779 "constraint.m"
            transform_hlds__constraint__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 779 "constraint.m"
            {
#line 779 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 779 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 0) = ((MR_Box) (transform_hlds__constraint__V_92_92));
#line 779 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 1) = ((MR_Box) (transform_hlds__constraint__V_93_93));
#line 779 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 2) = ((MR_Box) (transform_hlds__constraint__V_94_94));
#line 779 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_86));
#line 779 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_32_32, 4) = ((MR_Box) (transform_hlds__constraint__V_96_96));
#line 779 "constraint.m"
            }
#line 688 "constraint.m"
            /* direct tailcall eliminated */
#line 688 "constraint.m"
            {
#line 688 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Goals0_13;
#line 688 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__2__tmp_copy_2 = transform_hlds__constraint__RevGoals1_23;
#line 688 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_Info_32_32;

#line 688 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_0_4 = transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 688 "constraint.m"
              transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__2__tmp_copy_2;
#line 688 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 688 "constraint.m"
            }
#line 688 "constraint.m"
            continue;
#line 678 "constraint.m"
          }
#line 675 "constraint.m"
      }
#line 675 "constraint.m"
      break;
#line 675 "constraint.m"
    }
#line 671 "constraint.m"
}

#line 643 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(
#line 643 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 643 "constraint.m"
{
#line 643 "constraint.m"
  {
#line 643 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 643 "constraint.m"
    MR_builtin_longjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0, 1);
#line 643 "constraint.m"
  }
#line 643 "constraint.m"
}

#line 643 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3(
#line 643 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 643 "constraint.m"
{
#line 643 "constraint.m"
  {
#line 643 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 643 "constraint.m"
    (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31 = ((MR_Word) (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31);
#line 643 "constraint.m"
    {
#line 643 "constraint.m"
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(transform_hlds__constraint__env_ptr);
#line 643 "constraint.m"
      return;
    }
#line 643 "constraint.m"
  }
#line 643 "constraint.m"
}

#line 643 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_2(
#line 643 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 643 "constraint.m"
{
#line 643 "constraint.m"
  {
#line 643 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 643 "constraint.m"
    {
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__TypeCtorInfo_17_57;
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierChangedVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 1)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoal_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintGoalInfo_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 1)));
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__ConstraintNonLocals_55;
#line 658 "constraint.m"
      MR_Word transform_hlds__constraint__EarlierConstraintIntersection_56;
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 0)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 2)));
#line 659 "constraint.m"
      MR_Word transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__EarlierConstraint_31, (MR_Integer) 3)));
#line 660 "constraint.m"
      MR_Word transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
#line 660 "constraint.m"
      MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
#line 660 "constraint.m"
      MR_Word transform_hlds__constraint__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
#line 661 "constraint.m"
      MR_Word transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_49, (MR_Integer) 0)));

#line 662 "constraint.m"
      {
#line 662 "constraint.m"
        transform_hlds__constraint__ConstraintNonLocals_55 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_54);
      }
#line 4454 "transform_hlds.constraint.c"
      transform_hlds__constraint__TypeCtorInfo_17_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 663 "constraint.m"
      {
#line 663 "constraint.m"
        parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierChangedVars_46, transform_hlds__constraint__ConstraintNonLocals_55, &transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
#line 665 "constraint.m"
      {
#line 665 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_17_57, transform_hlds__constraint__EarlierConstraintIntersection_56);
      }
#line 644 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 644 "constraint.m"
      if ((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
#line 644 "constraint.m"
        {
#line 644 "constraint.m"
          transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_1(transform_hlds__constraint__env_ptr);
#line 644 "constraint.m"
          return;
        }
#line 643 "constraint.m"
    }
#line 643 "constraint.m"
  }
#line 643 "constraint.m"
}

#line 643 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(
#line 643 "constraint.m"
  void * transform_hlds__constraint__env_ptr_arg)
#line 643 "constraint.m"
{
#line 643 "constraint.m"
  {
#line 643 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s * transform_hlds__constraint__env_ptr = (struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s *) transform_hlds__constraint__env_ptr_arg;

#line 643 "constraint.m"
    if (MR_builtin_setjmp((transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__commit_0) == 0)
#line 643 "constraint.m"
      {
#line 643 "constraint.m"
        {
#line 643 "constraint.m"
          {
#line 643 "constraint.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, &(transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__conv0_EarlierConstraint_31, (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4, transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_3, transform_hlds__constraint__env_ptr);
          }
#line 643 "constraint.m"
        }
#line 643 "constraint.m"
        (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 643 "constraint.m"
      }
#line 643 "constraint.m"
    else
#line 643 "constraint.m"
      (transform_hlds__constraint__env_ptr)->transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 643 "constraint.m"
  }
#line 643 "constraint.m"
}

#line 609 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4,
#line 609 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevDependent_5,
#line 609 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6,
#line 609 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7)
#line 609 "constraint.m"
{
#line 609 "constraint.m"
  {
#line 609 "constraint.m"
    struct transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0_s transform_hlds__constraint__env;

#line 609 "constraint.m"
    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_0_4;
#line 614 "constraint.m"
    while (MR_TRUE)
#line 614 "constraint.m"
      {
#line 614 "constraint.m"
        /* tailcall optimized into a loop */
#line 614 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "constraint.m"
          {
#line 615 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevIndependent_7 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
#line 615 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_RevDependent_5 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 614 "constraint.m"
          }
#line 614 "constraint.m"
        else
#line 617 "constraint.m"
          {
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_19;
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_22;
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_24;
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoalInfo_27;
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintNonLocals_28;
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
#line 617 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;
#line 618 "constraint.m"
            MR_Word transform_hlds__constraint__V_23_23;
#line 618 "constraint.m"
            MR_Word transform_hlds__constraint__V_25_25;
#line 619 "constraint.m"
            MR_Word transform_hlds__constraint__V_26_26;

#line 617 "constraint.m"
            (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 617 "constraint.m"
            transform_hlds__constraint__Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 618 "constraint.m"
            transform_hlds__constraint__ConstraintGoal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 0)));
#line 618 "constraint.m"
            transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 1)));
#line 618 "constraint.m"
            transform_hlds__constraint__IncompatibleInstVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 2)));
#line 618 "constraint.m"
            transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18, (MR_Integer) 3)));
#line 619 "constraint.m"
            transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 0)));
#line 619 "constraint.m"
            transform_hlds__constraint__ConstraintGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal_22, (MR_Integer) 1)));
#line 620 "constraint.m"
            {
#line 620 "constraint.m"
              transform_hlds__constraint__ConstraintNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintGoalInfo_27);
            }
#line 627 "constraint.m"
            {
#line 627 "constraint.m"
              MR_Word transform_hlds__constraint__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 627 "constraint.m"
              MR_Word transform_hlds__constraint__OutputVarsUsedByConstraint_29;

#line 626 "constraint.m"
              {
#line 626 "constraint.m"
                parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__ConstraintNonLocals_28, transform_hlds__constraint__HeadVar__2_2, &transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
#line 628 "constraint.m"
              {
#line 628 "constraint.m"
                (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_40_40, transform_hlds__constraint__OutputVarsUsedByConstraint_29);
              }
#line 628 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 627 "constraint.m"
            }
#line 629 "constraint.m"
            if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
#line 629 "constraint.m"
              {
#line 635 "constraint.m"
                {
#line 635 "constraint.m"
                  MR_Word transform_hlds__constraint__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 635 "constraint.m"
                  MR_Word transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30;

#line 634 "constraint.m"
                  {
#line 634 "constraint.m"
                    parse_tree__set_of_var__intersect_3_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__HeadVar__1_1, transform_hlds__constraint__IncompatibleInstVars_24, &transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
#line 636 "constraint.m"
                  {
#line 636 "constraint.m"
                    (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_41_41, transform_hlds__constraint__IncompatibleInstVarsUsedByGoal_30);
                  }
#line 636 "constraint.m"
                  (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded = !((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded);
#line 635 "constraint.m"
                }
#line 629 "constraint.m"
                if (!((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded))
#line 643 "constraint.m"
                  {
#line 643 "constraint.m"
                    {
#line 643 "constraint.m"
                      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_4(&transform_hlds__constraint__env);
                    }
#line 643 "constraint.m"
                  }
#line 629 "constraint.m"
              }
#line 648 "constraint.m"
            if ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__succeeded)
#line 647 "constraint.m"
              {
#line 647 "constraint.m"
                {
#line 647 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
#line 647 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36, 1) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4));
#line 647 "constraint.m"
                }
#line 647 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6;
#line 647 "constraint.m"
              }
#line 648 "constraint.m"
            else
#line 649 "constraint.m"
              {
#line 649 "constraint.m"
                {
#line 649 "constraint.m"
                  transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 0) = ((MR_Box) ((transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__Constraint_18));
#line 649 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6));
#line 649 "constraint.m"
                }
#line 649 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36 = (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4;
#line 649 "constraint.m"
              }
#line 651 "constraint.m"
            /* direct tailcall eliminated */
#line 651 "constraint.m"
            {
#line 651 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__3__tmp_copy_3 = transform_hlds__constraint__Constraints_19;
#line 651 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevDependent_0__tmp_copy_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_36_36;
#line 651 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0__tmp_copy_6 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_37_37;

#line 651 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0_6 = transform_hlds__constraint__STATE_VARIABLE_RevIndependent_0__tmp_copy_6;
#line 651 "constraint.m"
              (transform_hlds__constraint__env).transform_hlds__constraint__filter_dependent_constraints_2_7_p_0_env_0__STATE_VARIABLE_RevDependent_0_4 = transform_hlds__constraint__STATE_VARIABLE_RevDependent_0__tmp_copy_4;
#line 651 "constraint.m"
              transform_hlds__constraint__HeadVar__3_3 = transform_hlds__constraint__HeadVar__3__tmp_copy_3;
#line 651 "constraint.m"
            }
#line 651 "constraint.m"
            continue;
#line 617 "constraint.m"
          }
#line 614 "constraint.m"
        break;
#line 614 "constraint.m"
      }
#line 609 "constraint.m"
  }
#line 609 "constraint.m"
}

#line 599 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__filter_dependent_constraints_5_p_0(
#line 599 "constraint.m"
  MR_Word transform_hlds__constraint__NonLocals_6,
#line 599 "constraint.m"
  MR_Word transform_hlds__constraint__GoalOutputVars_7,
#line 599 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 599 "constraint.m"
  MR_Word * transform_hlds__constraint__Dependent_9,
#line 599 "constraint.m"
  MR_Word * transform_hlds__constraint__Independent_10)
#line 599 "constraint.m"
{
#line 603 "constraint.m"
  {
#line 603 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 603 "constraint.m"
    MR_Word transform_hlds__constraint__TypeCtorInfo_15_15;
#line 603 "constraint.m"
    MR_Word transform_hlds__constraint__RevDependent_11;
#line 603 "constraint.m"
    MR_Word transform_hlds__constraint__RevIndependent_12;

#line 604 "constraint.m"
    {
#line 604 "constraint.m"
      transform_hlds__constraint__filter_dependent_constraints_2_7_p_0(transform_hlds__constraint__NonLocals_6, transform_hlds__constraint__GoalOutputVars_7, transform_hlds__constraint__Constraints_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevDependent_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevIndependent_12);
    }
#line 4768 "transform_hlds.constraint.c"
    transform_hlds__constraint__TypeCtorInfo_15_15 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;
#line 606 "constraint.m"
    {
#line 606 "constraint.m"
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevDependent_11, transform_hlds__constraint__Dependent_9);
    }
#line 607 "constraint.m"
    {
#line 607 "constraint.m"
      mercury__list__reverse_2_p_0(transform_hlds__constraint__TypeCtorInfo_15_15, transform_hlds__constraint__RevIndependent_12, transform_hlds__constraint__Independent_10);
#line 607 "constraint.m"
      return;
    }
#line 603 "constraint.m"
  }
#line 599 "constraint.m"
}

#line 553 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_constant_construction_6_p_0(
#line 553 "constraint.m"
  MR_Word transform_hlds__constraint__ConstructVar_1,
#line 553 "constraint.m"
  MR_Word transform_hlds__constraint__Construct0_2,
#line 553 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 553 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 553 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 553 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
#line 553 "constraint.m"
{
#line 557 "constraint.m"
  {
#line 557 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 557 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "constraint.m"
      {
#line 557 "constraint.m"
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 557 "constraint.m"
      }
#line 557 "constraint.m"
    else
#line 559 "constraint.m"
      {
#line 559 "constraint.m"
        MR_Word transform_hlds__constraint__Constraint0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 559 "constraint.m"
        MR_Word transform_hlds__constraint__Constraints0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 559 "constraint.m"
        MR_Word transform_hlds__constraint__Constraint_16;
#line 559 "constraint.m"
        MR_Word transform_hlds__constraint__Constraints_17;
#line 559 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintGoal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 0)));
#line 559 "constraint.m"
        MR_Word transform_hlds__constraint__ChangedVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 1)));
#line 559 "constraint.m"
        MR_Word transform_hlds__constraint__IncompatibleInstVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 2)));
#line 559 "constraint.m"
        MR_Word transform_hlds__constraint__Constructs0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint0_14, (MR_Integer) 3)));
#line 559 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_39_39;
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 1)));
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__ConstraintNonLocals_25;
#line 563 "constraint.m"
        MR_Word transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintGoal0_19, (MR_Integer) 0)));

#line 564 "constraint.m"
        {
#line 564 "constraint.m"
          transform_hlds__constraint__ConstraintNonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__ConstraintInfo_24);
        }
#line 565 "constraint.m"
        {
#line 565 "constraint.m"
          transform_hlds__constraint__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__constraint__ConstraintNonLocals_25, transform_hlds__constraint__ConstructVar_1);
        }
#line 580 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 567 "constraint.m"
          {
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_64_64;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__NewVar_28;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__VarSet_29;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__VarType_30;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes_31;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__Subn_32;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__Construct_33;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__Constructs_34;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__ConstraintGoal_35;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__V_41_41;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__V_52_52;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__V_55_55;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__V_56_56;
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 567 "constraint.m"
            MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 572 "constraint.m"
            MR_Word transform_hlds__constraint__V_53_53;
#line 572 "constraint.m"
            MR_Word transform_hlds__constraint__V_54_54;

#line 569 "constraint.m"
            {
#line 569 "constraint.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarSet0_26, &transform_hlds__constraint__VarSet_29);
            }
#line 570 "constraint.m"
            {
#line 570 "constraint.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes0_27, transform_hlds__constraint__ConstructVar_1, &transform_hlds__constraint__VarType_30);
            }
#line 571 "constraint.m"
            {
#line 571 "constraint.m"
              hlds__vartypes__add_var_type_4_p_0(transform_hlds__constraint__NewVar_28, transform_hlds__constraint__VarType_30, transform_hlds__constraint__VarTypes0_27, &transform_hlds__constraint__VarTypes_31);
            }
#line 572 "constraint.m"
            transform_hlds__constraint__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 572 "constraint.m"
            transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 572 "constraint.m"
            transform_hlds__constraint__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 572 "constraint.m"
            transform_hlds__constraint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 572 "constraint.m"
            transform_hlds__constraint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 573 "constraint.m"
            {
#line 573 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 573 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (transform_hlds__constraint__V_52_52));
#line 573 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_31));
#line 573 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_29));
#line 573 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (transform_hlds__constraint__V_55_55));
#line 573 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (transform_hlds__constraint__V_56_56));
#line 573 "constraint.m"
            }
#line 574 "constraint.m"
            {
#line 574 "constraint.m"
              transform_hlds__constraint__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 574 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_41_41, 0) = ((MR_Box) (transform_hlds__constraint__ConstructVar_1));
#line 574 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_41_41, 1) = ((MR_Box) (transform_hlds__constraint__NewVar_28));
#line 574 "constraint.m"
            }
#line 574 "constraint.m"
            {
#line 574 "constraint.m"
              transform_hlds__constraint__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_40_40, 0) = ((MR_Box) (transform_hlds__constraint__V_41_41));
#line 574 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "constraint.m"
            }
#line 4966 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_64_64 = (MR_Word) &transform_hlds__constraint_scalar_common_1[2];
#line 574 "constraint.m"
            {
#line 574 "constraint.m"
              mercury__map__from_assoc_list_2_p_0(transform_hlds__constraint__TypeInfo_64_64, transform_hlds__constraint__TypeInfo_64_64, transform_hlds__constraint__V_40_40, &transform_hlds__constraint__Subn_32);
            }
#line 575 "constraint.m"
            {
#line 575 "constraint.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__Construct0_2, &transform_hlds__constraint__Construct_33);
            }
#line 576 "constraint.m"
            {
#line 576 "constraint.m"
              transform_hlds__constraint__Constructs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 0) = ((MR_Box) (transform_hlds__constraint__Construct_33));
#line 576 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constructs_34, 1) = ((MR_Box) (transform_hlds__constraint__Constructs0_22));
#line 576 "constraint.m"
            }
#line 577 "constraint.m"
            {
#line 577 "constraint.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__constraint__Subn_32, transform_hlds__constraint__ConstraintGoal0_19, &transform_hlds__constraint__ConstraintGoal_35);
            }
#line 578 "constraint.m"
            {
#line 578 "constraint.m"
              transform_hlds__constraint__Constraint_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 578 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 0) = ((MR_Box) (transform_hlds__constraint__ConstraintGoal_35));
#line 578 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_20));
#line 578 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_21));
#line 578 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_16, 3) = ((MR_Box) (transform_hlds__constraint__Constructs_34));
#line 578 "constraint.m"
            }
#line 567 "constraint.m"
          }
#line 580 "constraint.m"
        else
#line 581 "constraint.m"
          {
#line 581 "constraint.m"
            transform_hlds__constraint__Constraint_16 = transform_hlds__constraint__Constraint0_14;
#line 581 "constraint.m"
            transform_hlds__constraint__STATE_VARIABLE_Info_39_39 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 581 "constraint.m"
          }
#line 583 "constraint.m"
        {
#line 583 "constraint.m"
          transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_1, transform_hlds__constraint__Construct0_2, transform_hlds__constraint__Constraints0_15, &transform_hlds__constraint__Constraints_17, transform_hlds__constraint__STATE_VARIABLE_Info_39_39, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
#line 559 "constraint.m"
        {
#line 559 "constraint.m"
          MR_Word base;
#line 559 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "constraint.m"
          *transform_hlds__constraint__HeadVar__4_4 = base;
#line 559 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_16));
#line 559 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_17));
#line 559 "constraint.m"
        }
#line 559 "constraint.m"
      }
#line 557 "constraint.m"
  }
#line 553 "constraint.m"
}

#line 545 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__add_constraint_feature_1_f_0(
#line 545 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1)
#line 545 "constraint.m"
{
#line 548 "constraint.m"
  {
#line 548 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 548 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__2_2;
#line 548 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 548 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 548 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_5;

#line 549 "constraint.m"
    {
#line 549 "constraint.m"
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 0, transform_hlds__constraint__GoalInfo0_4, &transform_hlds__constraint__GoalInfo_5);
    }
#line 548 "constraint.m"
    {
#line 548 "constraint.m"
      transform_hlds__constraint__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__constraint__GoalExpr_3));
#line 548 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__2_2, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_5));
#line 548 "constraint.m"
    }
#line 548 "constraint.m"
    return transform_hlds__constraint__HeadVar__2_2;
#line 548 "constraint.m"
  }
#line 545 "constraint.m"
}

#line 536 "constraint.m"
static MR_Box MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0_1(
#line 536 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 536 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 536 "constraint.m"
{
#line 536 "constraint.m"
  {
#line 536 "constraint.m"
    MR_Box transform_hlds__constraint__wrapper_arg_2;
#line 536 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 536 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_21;

#line 536 "constraint.m"
    {
#line 536 "constraint.m"
      transform_hlds__constraint__conv0_HeadVar__2_21 = transform_hlds__constraint__IntroducedFrom__func__attach_constraints__536__1_1_f_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 536 "constraint.m"
    transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_21));
#line 536 "constraint.m"
    return transform_hlds__constraint__wrapper_arg_2;
#line 536 "constraint.m"
  }
#line 536 "constraint.m"
}

#line 531 "constraint.m"
static MR_Word MR_CALL 
transform_hlds__constraint__attach_constraints_2_f_0(
#line 531 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_4,
#line 531 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_5)
#line 531 "constraint.m"
{
#line 534 "constraint.m"
  {
#line 534 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__HeadVar__3_3;
#line 534 "constraint.m"
    MR_Word transform_hlds__constraint__Constraints_6;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 0)));
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_4, (MR_Integer) 1)));
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__V_7_7;
#line 535 "constraint.m"
    MR_Integer transform_hlds__constraint__V_8_8;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__V_9_9;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__V_10_10;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11;
#line 535 "constraint.m"
    MR_Word transform_hlds__constraint__V_12_12;

#line 535 "constraint.m"
    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 535 "constraint.m"
    if (transform_hlds__constraint__succeeded)
#line 535 "constraint.m"
      {
#line 535 "constraint.m"
        transform_hlds__constraint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 0)));
#line 535 "constraint.m"
        transform_hlds__constraint__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 1)));
#line 535 "constraint.m"
        transform_hlds__constraint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 2)));
#line 535 "constraint.m"
        transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 3)));
#line 535 "constraint.m"
        transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 4)));
#line 535 "constraint.m"
        transform_hlds__constraint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__constraint__V_18_18, (MR_Integer) 5)));
#line 536 "constraint.m"
        {
#line 536 "constraint.m"
          MR_Word transform_hlds__constraint__TypeCtorInfo_29_29 = (MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0;

#line 536 "constraint.m"
          {
#line 536 "constraint.m"
            transform_hlds__constraint__Constraints_6 = mercury__list__map_2_f_0(transform_hlds__constraint__TypeCtorInfo_29_29, transform_hlds__constraint__TypeCtorInfo_29_29, (MR_Word) &transform_hlds__constraint_scalar_common_2[7], transform_hlds__constraint__Constraints0_5);
          }
#line 536 "constraint.m"
        }
#line 535 "constraint.m"
      }
#line 535 "constraint.m"
    else
#line 542 "constraint.m"
      transform_hlds__constraint__Constraints_6 = transform_hlds__constraint__Constraints0_5;
#line 534 "constraint.m"
    {
#line 534 "constraint.m"
      transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__constraint__Goal_4));
#line 534 "constraint.m"
      MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__constraint__Constraints_6));
#line 534 "constraint.m"
    }
#line 534 "constraint.m"
    return transform_hlds__constraint__HeadVar__3_3;
#line 534 "constraint.m"
  }
#line 531 "constraint.m"
}

#line 526 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__add_empty_constraints_2_p_0(
#line 526 "constraint.m"
  MR_Word transform_hlds__constraint__Goal_3,
#line 526 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__2_2)
#line 526 "constraint.m"
{
#line 529 "constraint.m"
  {
#line 529 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 529 "constraint.m"
    {
#line 529 "constraint.m"
      MR_Word base;
#line 529 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 529 "constraint.m"
      *transform_hlds__constraint__HeadVar__2_2 = base;
#line 529 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_3));
#line 529 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "constraint.m"
    }
#line 529 "constraint.m"
  }
#line 526 "constraint.m"
}

#line 512 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_3(
#line 512 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 512 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 512 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 512 "constraint.m"
{
#line 512 "constraint.m"
  {
#line 512 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 512 "constraint.m"
    MR_Word transform_hlds__constraint__conv2_HeadVar__2_2;

#line 512 "constraint.m"
    {
#line 512 "constraint.m"
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv2_HeadVar__2_2);
    }
#line 512 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv2_HeadVar__2_2));
#line 512 "constraint.m"
  }
#line 512 "constraint.m"
}

#line 498 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_2(
#line 498 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 498 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 498 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 498 "constraint.m"
{
#line 498 "constraint.m"
  {
#line 498 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 498 "constraint.m"
    MR_Word transform_hlds__constraint__conv1_HeadVar__2_2;

#line 498 "constraint.m"
    {
#line 498 "constraint.m"
      transform_hlds__constraint__add_empty_constraints_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv1_HeadVar__2_2);
    }
#line 498 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv1_HeadVar__2_2));
#line 498 "constraint.m"
  }
#line 498 "constraint.m"
}

#line 417 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0_1(
#line 417 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 417 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 417 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 417 "constraint.m"
{
#line 417 "constraint.m"
  {
#line 417 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 417 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_21;

#line 417 "constraint.m"
    {
#line 417 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_constraints__417__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_21);
    }
#line 417 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_21));
#line 417 "constraint.m"
  }
#line 417 "constraint.m"
}

#line 411 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_constraints_7_p_0(
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_1,
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__2_2,
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_4,
#line 411 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_5,
#line 411 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_6,
#line 411 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_7)
#line 411 "constraint.m"
{
#line 415 "constraint.m"
  while (MR_TRUE)
#line 415 "constraint.m"
    {
#line 415 "constraint.m"
      /* tailcall optimized into a loop */
#line 415 "constraint.m"
      {
#line 415 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 415 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "constraint.m"
          {
#line 415 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_116_116;
#line 415 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints1_13;
#line 415 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints_16;

#line 416 "constraint.m"
            {
#line 416 "constraint.m"
              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_13);
            }
#line 5375 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_116_116 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 417 "constraint.m"
            {
#line 417 "constraint.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_116_116, (MR_Word) &transform_hlds__constraint_scalar_common_2[4], transform_hlds__constraint__Constraints1_13, &transform_hlds__constraint__Constraints_16);
            }
#line 420 "constraint.m"
            {
#line 420 "constraint.m"
              mercury__list__append_3_p_1(transform_hlds__constraint__TypeInfo_116_116, transform_hlds__constraint__Constraints_16, transform_hlds__constraint__Goals0_4, transform_hlds__constraint__Goals_5);
            }
#line 415 "constraint.m"
            *transform_hlds__constraint__STATE_VARIABLE_Info_7 = transform_hlds__constraint__STATE_VARIABLE_Info_0_6;
#line 415 "constraint.m"
          }
#line 415 "constraint.m"
        else
#line 423 "constraint.m"
          {
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__Conjunct_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 0)));
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__RevConjuncts0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__2_2, (MR_Integer) 1)));
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__Goal_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 0)));
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 1)));
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__OutputVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 2)));
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Conjunct_26, (MR_Integer) 3)));
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__NonLocals_38;
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__CI_ModuleInfo0_39;
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__GoalCanLoopOrThrow_40;
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__CI_ModuleInfo_41;
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__Goals1_43;
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__Constraints1_45;
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 423 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_77_77;
#line 426 "constraint.m"
            MR_Word transform_hlds__constraint__GoalExpr_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));
#line 428 "constraint.m"
            MR_Word transform_hlds__constraint__V_101_101;
#line 428 "constraint.m"
            MR_Word transform_hlds__constraint__V_102_102;
#line 428 "constraint.m"
            MR_Word transform_hlds__constraint__V_103_103;
#line 428 "constraint.m"
            MR_Word transform_hlds__constraint__V_104_104;
#line 431 "constraint.m"
            MR_Word transform_hlds__constraint__V_106_106;
#line 431 "constraint.m"
            MR_Word transform_hlds__constraint__V_107_107;
#line 431 "constraint.m"
            MR_Word transform_hlds__constraint__V_108_108;
#line 431 "constraint.m"
            MR_Word transform_hlds__constraint__V_109_109;
#line 431 "constraint.m"
            MR_Word transform_hlds__constraint__V_105_105;
#line 437 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_117_117;
#line 437 "constraint.m"
            MR_Word transform_hlds__constraint__Detism_42;
#line 437 "constraint.m"
            MR_Word transform_hlds__constraint__V_69_69;

#line 427 "constraint.m"
            {
#line 427 "constraint.m"
              transform_hlds__constraint__NonLocals_38 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__constraint__GoalInfo_37);
            }
#line 428 "constraint.m"
            transform_hlds__constraint__CI_ModuleInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 428 "constraint.m"
            transform_hlds__constraint__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 428 "constraint.m"
            transform_hlds__constraint__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 428 "constraint.m"
            transform_hlds__constraint__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 428 "constraint.m"
            transform_hlds__constraint__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 429 "constraint.m"
            {
#line 429 "constraint.m"
              hlds__goal_form__goal_can_loop_or_throw_4_p_0(transform_hlds__constraint__Goal_32, &transform_hlds__constraint__GoalCanLoopOrThrow_40, transform_hlds__constraint__CI_ModuleInfo0_39, &transform_hlds__constraint__CI_ModuleInfo_41);
            }
#line 431 "constraint.m"
            transform_hlds__constraint__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 431 "constraint.m"
            transform_hlds__constraint__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 431 "constraint.m"
            transform_hlds__constraint__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 431 "constraint.m"
            transform_hlds__constraint__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 431 "constraint.m"
            transform_hlds__constraint__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 431 "constraint.m"
            {
#line 431 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 431 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 0) = ((MR_Box) (transform_hlds__constraint__CI_ModuleInfo_41));
#line 431 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 1) = ((MR_Box) (transform_hlds__constraint__V_106_106));
#line 431 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 2) = ((MR_Box) (transform_hlds__constraint__V_107_107));
#line 431 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 3) = ((MR_Box) (transform_hlds__constraint__V_108_108));
#line 431 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_68_68, 4) = ((MR_Box) (transform_hlds__constraint__V_109_109));
#line 431 "constraint.m"
            }
#line 437 "constraint.m"
            {
#line 437 "constraint.m"
              transform_hlds__constraint__Detism_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_37);
            }
#line 439 "constraint.m"
#line 439 "constraint.m"
            switch (transform_hlds__constraint__Detism_42) {
#line 439 "constraint.m"
              default:
#line 439 "constraint.m"
                transform_hlds__constraint__succeeded = MR_FALSE;
#line 439 "constraint.m"
                break;
#line 439 "constraint.m"
              case (MR_Integer) 7:
#line 439 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 439 "constraint.m"
                break;
#line 439 "constraint.m"
              case (MR_Integer) 1:
#line 438 "constraint.m"
                transform_hlds__constraint__succeeded = MR_TRUE;
#line 439 "constraint.m"
                break;
#line 439 "constraint.m"
            }
#line 437 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 437 "constraint.m"
              {
#line 5530 "transform_hlds.constraint.c"
                transform_hlds__constraint__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 444 "constraint.m"
                {
#line 444 "constraint.m"
                  transform_hlds__constraint__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__constraint__TypeCtorInfo_117_117, transform_hlds__constraint__OutputVars_34);
                }
#line 437 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 437 "constraint.m"
                  {
#line 447 "constraint.m"
                    {
#line 447 "constraint.m"
                      transform_hlds__constraint__V_69_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_37);
                    }
#line 447 "constraint.m"
                    transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_69_69 == (MR_Integer) 0);
#line 437 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 450 "constraint.m"
                      transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalCanLoopOrThrow_40 == (MR_Integer) 1);
#line 437 "constraint.m"
                  }
#line 437 "constraint.m"
              }
#line 458 "constraint.m"
            if (transform_hlds__constraint__succeeded)
#line 454 "constraint.m"
              {
#line 454 "constraint.m"
                MR_Word transform_hlds__constraint__Constraint_44;

#line 454 "constraint.m"
                transform_hlds__constraint__Goals1_43 = transform_hlds__constraint__Goals0_4;
#line 455 "constraint.m"
                {
#line 455 "constraint.m"
                  transform_hlds__constraint__Constraint_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 455 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 455 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_33));
#line 455 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 2) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_35));
#line 455 "constraint.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__constraint__Constraint_44, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "constraint.m"
                }
#line 457 "constraint.m"
                {
#line 457 "constraint.m"
                  transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_45, 0) = ((MR_Box) (transform_hlds__constraint__Constraint_44));
#line 457 "constraint.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Constraints1_45, 1) = ((MR_Box) (transform_hlds__constraint__Constraints0_3));
#line 457 "constraint.m"
                }
#line 454 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 454 "constraint.m"
              }
#line 458 "constraint.m"
            else
#line 478 "constraint.m"
              {
#line 478 "constraint.m"
                MR_Word transform_hlds__constraint__ConstructVar_52;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__Unify_49;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_73_73;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_46_46;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_47_47;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_48_48;
#line 468 "constraint.m"
                MR_Word transform_hlds__constraint__V_50_50;
#line 469 "constraint.m"
                MR_Word transform_hlds__constraint__V_53_53;
#line 469 "constraint.m"
                MR_Word transform_hlds__constraint__V_54_54;
#line 469 "constraint.m"
                MR_Word transform_hlds__constraint__V_55_55;
#line 469 "constraint.m"
                MR_Word transform_hlds__constraint__V_56_56;
#line 469 "constraint.m"
                MR_Word transform_hlds__constraint__V_57_57;

#line 468 "constraint.m"
                transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 468 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 468 "constraint.m"
                  {
#line 468 "constraint.m"
                    transform_hlds__constraint__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 0)));
#line 468 "constraint.m"
                    transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 1)));
#line 468 "constraint.m"
                    transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 2)));
#line 468 "constraint.m"
                    transform_hlds__constraint__Unify_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 3)));
#line 468 "constraint.m"
                    transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_72_72, (MR_Integer) 4)));
#line 469 "constraint.m"
                    transform_hlds__constraint__succeeded = ((MR_tag((MR_Word) transform_hlds__constraint__Unify_49)) == (MR_mktag((MR_Integer) 0)));
#line 469 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 469 "constraint.m"
                      {
#line 469 "constraint.m"
                        transform_hlds__constraint__ConstructVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 0)));
#line 469 "constraint.m"
                        transform_hlds__constraint__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 1)));
#line 469 "constraint.m"
                        transform_hlds__constraint__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 2)));
#line 469 "constraint.m"
                        transform_hlds__constraint__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 3)));
#line 469 "constraint.m"
                        transform_hlds__constraint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 4)));
#line 469 "constraint.m"
                        transform_hlds__constraint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 5)));
#line 469 "constraint.m"
                        transform_hlds__constraint__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Unify_49, (MR_Integer) 6)));
#line 469 "constraint.m"
                        transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "constraint.m"
                      }
#line 468 "constraint.m"
                  }
#line 478 "constraint.m"
                if (transform_hlds__constraint__succeeded)
#line 471 "constraint.m"
                  {
#line 471 "constraint.m"
                    MR_Word transform_hlds__constraint__V_74_74;
#line 471 "constraint.m"
                    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_76_76;
#line 477 "constraint.m"
                    MR_Word transform_hlds__constraint__V_110_110;
#line 477 "constraint.m"
                    MR_Word transform_hlds__constraint__V_111_111;
#line 477 "constraint.m"
                    MR_Word transform_hlds__constraint__V_112_112;
#line 477 "constraint.m"
                    MR_Word transform_hlds__constraint__V_113_113;
#line 477 "constraint.m"
                    MR_Word transform_hlds__constraint__V_114_114;

#line 471 "constraint.m"
                    {
#line 471 "constraint.m"
                      transform_hlds__constraint__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 471 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_74_74, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 471 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "constraint.m"
                    }
#line 471 "constraint.m"
                    {
#line 471 "constraint.m"
                      transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "constraint.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_74_74));
#line 471 "constraint.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 471 "constraint.m"
                    }
#line 472 "constraint.m"
                    {
#line 472 "constraint.m"
                      transform_hlds__constraint__add_constant_construction_6_p_0(transform_hlds__constraint__ConstructVar_52, transform_hlds__constraint__Goal_32, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__Constraints1_45, transform_hlds__constraint__STATE_VARIABLE_Info_68_68, &transform_hlds__constraint__STATE_VARIABLE_Info_76_76);
                    }
#line 477 "constraint.m"
                    transform_hlds__constraint__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 0)));
#line 477 "constraint.m"
                    transform_hlds__constraint__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 1)));
#line 477 "constraint.m"
                    transform_hlds__constraint__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 2)));
#line 477 "constraint.m"
                    transform_hlds__constraint__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 3)));
#line 477 "constraint.m"
                    transform_hlds__constraint__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_76_76, (MR_Integer) 4)));
#line 477 "constraint.m"
                    {
#line 477 "constraint.m"
                      transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 477 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 0) = ((MR_Box) (transform_hlds__constraint__V_110_110));
#line 477 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 1) = ((MR_Box) (transform_hlds__constraint__V_111_111));
#line 477 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 2) = ((MR_Box) (transform_hlds__constraint__V_112_112));
#line 477 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 3) = ((MR_Box) (transform_hlds__constraint__V_113_113));
#line 477 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_77_77, 4) = ((MR_Box) ((MR_Integer) 1));
#line 477 "constraint.m"
                    }
#line 471 "constraint.m"
                  }
#line 478 "constraint.m"
                else
#line 487 "constraint.m"
                  {
#line 481 "constraint.m"
                    MR_Word transform_hlds__constraint__Detism_94;
#line 481 "constraint.m"
                    MR_Word transform_hlds__constraint__V_126_126;
#line 482 "constraint.m"
                    MR_Word transform_hlds__constraint__V_58_58;

#line 481 "constraint.m"
                    {
#line 481 "constraint.m"
                      transform_hlds__constraint__Detism_94 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__constraint__GoalInfo_37);
                    }
#line 482 "constraint.m"
                    {
#line 482 "constraint.m"
                      parse_tree__prog_data__determinism_components_3_p_0(transform_hlds__constraint__Detism_94, &transform_hlds__constraint__V_58_58, &transform_hlds__constraint__V_126_126);
                    }
#line 482 "constraint.m"
                    transform_hlds__constraint__succeeded = ((MR_Integer) 0 == transform_hlds__constraint__V_126_126);
#line 487 "constraint.m"
                    if (transform_hlds__constraint__succeeded)
#line 484 "constraint.m"
                      {
#line 484 "constraint.m"
                        MR_Word transform_hlds__constraint__V_81_81;

#line 484 "constraint.m"
                        {
#line 484 "constraint.m"
                          transform_hlds__constraint__constraint_info_update_changed_3_p_0(transform_hlds__constraint__Constraints0_3, transform_hlds__constraint__STATE_VARIABLE_Info_68_68, &transform_hlds__constraint__STATE_VARIABLE_Info_77_77);
                        }
#line 485 "constraint.m"
                        transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "constraint.m"
                        {
#line 486 "constraint.m"
                          transform_hlds__constraint__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 486 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_81_81, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 486 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 486 "constraint.m"
                        }
#line 486 "constraint.m"
                        {
#line 486 "constraint.m"
                          transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "constraint.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_81_81));
#line 486 "constraint.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 486 "constraint.m"
                        }
#line 484 "constraint.m"
                      }
#line 487 "constraint.m"
                    else
#line 501 "constraint.m"
                      {
#line 490 "constraint.m"
                        MR_Word transform_hlds__constraint__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 1)));
#line 490 "constraint.m"
                        MR_Word transform_hlds__constraint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_32, (MR_Integer) 0)));

#line 490 "constraint.m"
                        {
#line 490 "constraint.m"
                          transform_hlds__constraint__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(transform_hlds__constraint__GoalInfo_37, transform_hlds__constraint__V_127_127);
                        }
#line 490 "constraint.m"
                        if (transform_hlds__constraint__succeeded)
#line 490 "constraint.m"
                          {
#line 491 "constraint.m"
                            {
#line 491 "constraint.m"
                              MR_Word transform_hlds__constraint__V_84_84;

#line 491 "constraint.m"
                              {
#line 491 "constraint.m"
                                transform_hlds__constraint__V_84_84 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__constraint__GoalInfo_37);
                              }
#line 491 "constraint.m"
                              transform_hlds__constraint__succeeded = (transform_hlds__constraint__V_84_84 == (MR_Integer) 2);
#line 491 "constraint.m"
                            }
#line 492 "constraint.m"
                            if (!(transform_hlds__constraint__succeeded))
#line 492 "constraint.m"
                              {
#line 492 "constraint.m"
                                {
#line 492 "constraint.m"
                                  transform_hlds__constraint__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__constraint__GoalInfo_37, (MR_Integer) 17);
                                }
#line 492 "constraint.m"
                              }
#line 490 "constraint.m"
                          }
#line 501 "constraint.m"
                        if (transform_hlds__constraint__succeeded)
#line 495 "constraint.m"
                          {
#line 495 "constraint.m"
                            MR_Word transform_hlds__constraint__TypeInfo_121_121;
#line 495 "constraint.m"
                            MR_Word transform_hlds__constraint__ConstraintGoals_60;
#line 495 "constraint.m"
                            MR_Word transform_hlds__constraint__GoalsAndConstraints_61;
#line 495 "constraint.m"
                            MR_Word transform_hlds__constraint__V_86_86;

#line 495 "constraint.m"
                            transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "constraint.m"
                            {
#line 496 "constraint.m"
                              transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__ConstraintGoals_60);
                            }
#line 498 "constraint.m"
                            {
#line 498 "constraint.m"
                              transform_hlds__constraint__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "constraint.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_86_86, 0) = ((MR_Box) (transform_hlds__constraint__Goal_32));
#line 498 "constraint.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_86_86, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_60));
#line 498 "constraint.m"
                            }
#line 5874 "transform_hlds.constraint.c"
                            transform_hlds__constraint__TypeInfo_121_121 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 498 "constraint.m"
                            {
#line 498 "constraint.m"
                              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_121_121, (MR_Word) &transform_hlds__constraint_scalar_common_2[5], transform_hlds__constraint__V_86_86, &transform_hlds__constraint__GoalsAndConstraints_61);
                            }
#line 500 "constraint.m"
                            {
#line 500 "constraint.m"
                              transform_hlds__constraint__Goals1_43 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeInfo_121_121, transform_hlds__constraint__GoalsAndConstraints_61, transform_hlds__constraint__Goals0_4);
                            }
#line 495 "constraint.m"
                          }
#line 501 "constraint.m"
                        else
#line 517 "constraint.m"
                          {
#line 504 "constraint.m"
                            MR_Word transform_hlds__constraint__Globals_62;
#line 504 "constraint.m"
                            MR_Word transform_hlds__constraint__V_87_87;
#line 504 "constraint.m"
                            MR_Word transform_hlds__constraint__V_88_88;

#line 504 "constraint.m"
                            {
#line 504 "constraint.m"
                              transform_hlds__constraint__succeeded = hlds__goal_form__goal_cannot_loop_or_throw_2_p_0(transform_hlds__constraint__ModuleInfo_1, transform_hlds__constraint__Goal_32);
                            }
#line 504 "constraint.m"
                            transform_hlds__constraint__succeeded = !(transform_hlds__constraint__succeeded);
#line 504 "constraint.m"
                            if (transform_hlds__constraint__succeeded)
#line 504 "constraint.m"
                              {
#line 505 "constraint.m"
                                {
#line 505 "constraint.m"
                                  hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__constraint__ModuleInfo_1, &transform_hlds__constraint__Globals_62);
                                }
#line 506 "constraint.m"
                                transform_hlds__constraint__V_87_87 = (MR_Integer) 164;
#line 506 "constraint.m"
                                transform_hlds__constraint__V_88_88 = (MR_Integer) 1;
#line 506 "constraint.m"
                                {
#line 506 "constraint.m"
                                  transform_hlds__constraint__succeeded = libs__globals__lookup_bool_option_3_p_1(transform_hlds__constraint__Globals_62, transform_hlds__constraint__V_87_87, transform_hlds__constraint__V_88_88);
                                }
#line 504 "constraint.m"
                              }
#line 517 "constraint.m"
                            if (transform_hlds__constraint__succeeded)
#line 509 "constraint.m"
                              {
#line 509 "constraint.m"
                                MR_Word transform_hlds__constraint__TypeInfo_125_125;
#line 509 "constraint.m"
                                MR_Word transform_hlds__constraint__DependentConstraints_63;
#line 509 "constraint.m"
                                MR_Word transform_hlds__constraint__IndependentConstraints_64;
#line 509 "constraint.m"
                                MR_Word transform_hlds__constraint__IndependentConstraintGoals_65;
#line 509 "constraint.m"
                                MR_Word transform_hlds__constraint__V_90_90;
#line 509 "constraint.m"
                                MR_Word transform_hlds__constraint__V_91_91;
#line 509 "constraint.m"
                                MR_Word transform_hlds__constraint__GoalsAndConstraints_95;

#line 508 "constraint.m"
                                {
#line 508 "constraint.m"
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_38, transform_hlds__constraint__ChangedVars_33, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_63, &transform_hlds__constraint__IndependentConstraints_64);
                                }
#line 510 "constraint.m"
                                {
#line 510 "constraint.m"
                                  transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__IndependentConstraints_64, &transform_hlds__constraint__IndependentConstraintGoals_65);
                                }
#line 5955 "transform_hlds.constraint.c"
                                transform_hlds__constraint__TypeInfo_125_125 = (MR_Word) &transform_hlds__constraint_scalar_common_2[0];
#line 512 "constraint.m"
                                {
#line 512 "constraint.m"
                                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__TypeInfo_125_125, (MR_Word) &transform_hlds__constraint_scalar_common_2[6], transform_hlds__constraint__IndependentConstraintGoals_65, &transform_hlds__constraint__GoalsAndConstraints_95);
                                }
#line 514 "constraint.m"
                                {
#line 514 "constraint.m"
                                  transform_hlds__constraint__V_91_91 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_32, transform_hlds__constraint__DependentConstraints_63);
                                }
#line 515 "constraint.m"
                                {
#line 515 "constraint.m"
                                  transform_hlds__constraint__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_90_90, 0) = ((MR_Box) (transform_hlds__constraint__V_91_91));
#line 515 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_90_90, 1) = ((MR_Box) (transform_hlds__constraint__GoalsAndConstraints_95));
#line 515 "constraint.m"
                                }
#line 515 "constraint.m"
                                {
#line 515 "constraint.m"
                                  transform_hlds__constraint__Goals1_43 = mercury__list__f_43_43_2_f_0(transform_hlds__constraint__TypeInfo_125_125, transform_hlds__constraint__V_90_90, transform_hlds__constraint__Goals0_4);
                                }
#line 516 "constraint.m"
                                transform_hlds__constraint__Constraints1_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "constraint.m"
                              }
#line 517 "constraint.m"
                            else
#line 519 "constraint.m"
                              {
#line 519 "constraint.m"
                                MR_Word transform_hlds__constraint__V_92_92;
#line 519 "constraint.m"
                                MR_Word transform_hlds__constraint__DependentConstraints_96;

#line 518 "constraint.m"
                                {
#line 518 "constraint.m"
                                  transform_hlds__constraint__filter_dependent_constraints_5_p_0(transform_hlds__constraint__NonLocals_38, transform_hlds__constraint__OutputVars_34, transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__DependentConstraints_96, &transform_hlds__constraint__Constraints1_45);
                                }
#line 521 "constraint.m"
                                {
#line 521 "constraint.m"
                                  transform_hlds__constraint__V_92_92 = transform_hlds__constraint__attach_constraints_2_f_0(transform_hlds__constraint__Goal_32, transform_hlds__constraint__DependentConstraints_96);
                                }
#line 521 "constraint.m"
                                {
#line 521 "constraint.m"
                                  transform_hlds__constraint__Goals1_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 0) = ((MR_Box) (transform_hlds__constraint__V_92_92));
#line 521 "constraint.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals1_43, 1) = ((MR_Box) (transform_hlds__constraint__Goals0_4));
#line 521 "constraint.m"
                                }
#line 519 "constraint.m"
                              }
#line 517 "constraint.m"
                          }
#line 501 "constraint.m"
                        transform_hlds__constraint__STATE_VARIABLE_Info_77_77 = transform_hlds__constraint__STATE_VARIABLE_Info_68_68;
#line 501 "constraint.m"
                      }
#line 487 "constraint.m"
                  }
#line 478 "constraint.m"
              }
#line 523 "constraint.m"
            /* direct tailcall eliminated */
#line 523 "constraint.m"
            {
#line 523 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__2__tmp_copy_2 = transform_hlds__constraint__RevConjuncts0_27;
#line 523 "constraint.m"
              MR_Word transform_hlds__constraint__Constraints0__tmp_copy_3 = transform_hlds__constraint__Constraints1_45;
#line 523 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0__tmp_copy_4 = transform_hlds__constraint__Goals1_43;
#line 523 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_6 = transform_hlds__constraint__STATE_VARIABLE_Info_77_77;

#line 523 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_0_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0__tmp_copy_6;
#line 523 "constraint.m"
              transform_hlds__constraint__Goals0_4 = transform_hlds__constraint__Goals0__tmp_copy_4;
#line 523 "constraint.m"
              transform_hlds__constraint__Constraints0_3 = transform_hlds__constraint__Constraints0__tmp_copy_3;
#line 523 "constraint.m"
              transform_hlds__constraint__HeadVar__2_2 = transform_hlds__constraint__HeadVar__2__tmp_copy_2;
#line 523 "constraint.m"
            }
#line 523 "constraint.m"
            continue;
#line 423 "constraint.m"
          }
#line 415 "constraint.m"
      }
#line 415 "constraint.m"
      break;
#line 415 "constraint.m"
    }
#line 411 "constraint.m"
}

#line 337 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2(
#line 337 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 337 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 337 "constraint.m"
{
#line 337 "constraint.m"
  {
#line 337 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 337 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

#line 337 "constraint.m"
    {
#line 337 "constraint.m"
      return transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__337__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 337 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 337 "constraint.m"
  }
#line 337 "constraint.m"
}

#line 323 "constraint.m"
static MR_bool MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1(
#line 323 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 323 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1)
#line 323 "constraint.m"
{
#line 323 "constraint.m"
  {
#line 323 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 323 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;

#line 323 "constraint.m"
    {
#line 323 "constraint.m"
      return transform_hlds__constraint__succeeded = transform_hlds__constraint__IntroducedFrom__pred__annotate_conj_output_vars__323__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__constraint__wrapper_arg_1));
    }
#line 323 "constraint.m"
    return transform_hlds__constraint__succeeded;
#line 323 "constraint.m"
  }
#line 323 "constraint.m"
}

#line 302 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__annotate_conj_output_vars_6_p_0(
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_2,
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_3,
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap0_4,
#line 302 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5,
#line 302 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_RevGoals_6)
#line 302 "constraint.m"
{
#line 305 "constraint.m"
  while (MR_TRUE)
#line 305 "constraint.m"
    {
#line 305 "constraint.m"
      /* tailcall optimized into a loop */
#line 305 "constraint.m"
      {
#line 305 "constraint.m"
        MR_bool transform_hlds__constraint__succeeded;

#line 305 "constraint.m"
        if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_RevGoals_6 = transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5;
#line 305 "constraint.m"
        else
#line 307 "constraint.m"
          {
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__TypeCtorInfo_54_54;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__TypeInfo_55_55;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__Goals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 1)));
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapDelta_21;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap_22;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars0_23;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__InstMapVars_24;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__InCompatible_25;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__IncompatibleInstVars_30;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__Bound_31;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__BoundVars_32;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__ChangedVars_33;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__AnnotatedConjunct_34;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__V_38_38;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40;
#line 307 "constraint.m"
            MR_Word transform_hlds__constraint__V_41_41;
#line 308 "constraint.m"
            MR_Word transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal_13, (MR_Integer) 0)));

#line 309 "constraint.m"
            {
#line 309 "constraint.m"
              transform_hlds__constraint__InstMapDelta_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__constraint__GoalInfo_20);
            }
#line 311 "constraint.m"
            {
#line 311 "constraint.m"
              hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMapDelta_21, &transform_hlds__constraint__InstMap_22);
            }
#line 312 "constraint.m"
            {
#line 312 "constraint.m"
              hlds__instmap__instmap_changed_vars_5_p_0(transform_hlds__constraint__InstMap0_4, transform_hlds__constraint__InstMap_22, transform_hlds__constraint__VarTypes_3, transform_hlds__constraint__ModuleInfo_2, &transform_hlds__constraint__ChangedVars0_23);
            }
#line 315 "constraint.m"
            {
#line 315 "constraint.m"
              hlds__instmap__instmap_vars_list_2_p_0(transform_hlds__constraint__InstMap_22, &transform_hlds__constraint__InstMapVars_24);
            }
#line 323 "constraint.m"
            {
#line 323 "constraint.m"
              transform_hlds__constraint__InCompatible_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 323 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
#line 323 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_1));
#line 323 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 323 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
#line 323 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
#line 323 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
#line 323 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__InCompatible_25, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
#line 323 "constraint.m"
            }
#line 6234 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 6236 "transform_hlds.constraint.c"
            transform_hlds__constraint__TypeInfo_55_55 = (MR_Word) &transform_hlds__constraint_scalar_common_1[2];
#line 331 "constraint.m"
            {
#line 331 "constraint.m"
              transform_hlds__constraint__V_38_38 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__InCompatible_25, transform_hlds__constraint__InstMapVars_24);
            }
#line 330 "constraint.m"
            {
#line 330 "constraint.m"
              transform_hlds__constraint__IncompatibleInstVars_30 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__V_38_38);
            }
#line 337 "constraint.m"
            {
#line 337 "constraint.m"
              transform_hlds__constraint__Bound_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 337 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 0) = ((MR_Box) (&transform_hlds__constraint_scalar_common_4[0]));
#line 337 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 1) = ((MR_Box) (transform_hlds__constraint__annotate_conj_output_vars_6_p_0_2));
#line 337 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 337 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 3) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_2));
#line 337 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 4) = ((MR_Box) (transform_hlds__constraint__VarTypes_3));
#line 337 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 5) = ((MR_Box) (transform_hlds__constraint__InstMap0_4));
#line 337 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__Bound_31, 6) = ((MR_Box) (transform_hlds__constraint__InstMapDelta_21));
#line 337 "constraint.m"
            }
#line 344 "constraint.m"
            {
#line 344 "constraint.m"
              transform_hlds__constraint__V_40_40 = mercury__list__filter_2_f_0(transform_hlds__constraint__TypeInfo_55_55, transform_hlds__constraint__Bound_31, transform_hlds__constraint__InstMapVars_24);
            }
#line 344 "constraint.m"
            {
#line 344 "constraint.m"
              transform_hlds__constraint__BoundVars_32 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__V_40_40);
            }
#line 349 "constraint.m"
            {
#line 349 "constraint.m"
              parse_tree__set_of_var__union_3_p_0(transform_hlds__constraint__TypeCtorInfo_54_54, transform_hlds__constraint__ChangedVars0_23, transform_hlds__constraint__BoundVars_32, &transform_hlds__constraint__ChangedVars_33);
            }
#line 351 "constraint.m"
            {
#line 351 "constraint.m"
              transform_hlds__constraint__AnnotatedConjunct_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 351 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 0) = ((MR_Box) (transform_hlds__constraint__Goal_13));
#line 351 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 1) = ((MR_Box) (transform_hlds__constraint__ChangedVars_33));
#line 351 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 2) = ((MR_Box) (transform_hlds__constraint__BoundVars_32));
#line 351 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__AnnotatedConjunct_34, 3) = ((MR_Box) (transform_hlds__constraint__IncompatibleInstVars_30));
#line 351 "constraint.m"
            }
#line 354 "constraint.m"
            {
#line 354 "constraint.m"
              transform_hlds__constraint__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_41_41, 0) = ((MR_Box) (transform_hlds__constraint__AnnotatedConjunct_34));
#line 354 "constraint.m"
              MR_hl_field(MR_mktag(1), transform_hlds__constraint__V_41_41, 1) = ((MR_Box) (transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5));
#line 354 "constraint.m"
            }
#line 353 "constraint.m"
            /* direct tailcall eliminated */
#line 353 "constraint.m"
            {
#line 353 "constraint.m"
              MR_Word transform_hlds__constraint__HeadVar__1__tmp_copy_1 = transform_hlds__constraint__Goals_14;
#line 353 "constraint.m"
              MR_Word transform_hlds__constraint__InstMap0__tmp_copy_4 = transform_hlds__constraint__InstMap_22;
#line 353 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_RevGoals_0__tmp_copy_5 = transform_hlds__constraint__V_41_41;

#line 353 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_RevGoals_0_5 = transform_hlds__constraint__STATE_VARIABLE_RevGoals_0__tmp_copy_5;
#line 353 "constraint.m"
              transform_hlds__constraint__InstMap0_4 = transform_hlds__constraint__InstMap0__tmp_copy_4;
#line 353 "constraint.m"
              transform_hlds__constraint__HeadVar__1_1 = transform_hlds__constraint__HeadVar__1__tmp_copy_1;
#line 353 "constraint.m"
            }
#line 353 "constraint.m"
            continue;
#line 307 "constraint.m"
          }
#line 305 "constraint.m"
      }
#line 305 "constraint.m"
      break;
#line 305 "constraint.m"
    }
#line 302 "constraint.m"
}

#line 230 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0_1(
#line 230 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 230 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 230 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 230 "constraint.m"
{
#line 230 "constraint.m"
  {
#line 230 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 230 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_15;

#line 230 "constraint.m"
    {
#line 230 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__230__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_15);
    }
#line 230 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_15));
#line 230 "constraint.m"
  }
#line 230 "constraint.m"
}

#line 273 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_5_p_0(
#line 273 "constraint.m"
  MR_Word transform_hlds__constraint__Goals0_6,
#line 273 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 273 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 273 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_17,
#line 273 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_18)
#line 273 "constraint.m"
{
#line 276 "constraint.m"
  {
#line 276 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 276 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_19_19;

#line 803 "constraint.m"
    if ((transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "constraint.m"
      transform_hlds__constraint__STATE_VARIABLE_Info_19_19 = transform_hlds__constraint__STATE_VARIABLE_Info_0_17;
#line 803 "constraint.m"
    else
#line 805 "constraint.m"
      {
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 806 "constraint.m"
        MR_Word transform_hlds__constraint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));

#line 806 "constraint.m"
        {
#line 806 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 0) = ((MR_Box) (transform_hlds__constraint__V_47_47));
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (transform_hlds__constraint__V_48_48));
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (transform_hlds__constraint__V_49_49));
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (transform_hlds__constraint__V_50_50));
#line 806 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) ((MR_Integer) 1));
#line 806 "constraint.m"
        }
#line 805 "constraint.m"
      }
#line 281 "constraint.m"
    if ((transform_hlds__constraint__Goals0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "constraint.m"
      {
#line 279 "constraint.m"
        MR_Word transform_hlds__constraint__GoalLists0_60;
#line 279 "constraint.m"
        MR_Word transform_hlds__constraint__GoalLists_61;

#line 230 "constraint.m"
        {
#line 230 "constraint.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[1], (MR_Word) &transform_hlds__constraint_scalar_common_2[3], transform_hlds__constraint__Constraints_7, &transform_hlds__constraint__GoalLists0_60);
        }
#line 234 "constraint.m"
        {
#line 234 "constraint.m"
          mercury__list__condense_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__GoalLists0_60, &transform_hlds__constraint__GoalLists_61);
        }
#line 235 "constraint.m"
        {
#line 235 "constraint.m"
          mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalLists_61, transform_hlds__constraint__Goals_8);
        }
#line 279 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_18 = transform_hlds__constraint__STATE_VARIABLE_Info_19_19;
#line 279 "constraint.m"
      }
#line 281 "constraint.m"
    else
#line 282 "constraint.m"
      {
#line 282 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_6, (MR_Integer) 0)));
#line 282 "constraint.m"
        MR_Word transform_hlds__constraint__GoalsTail0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__Goals0_6, (MR_Integer) 1)));

#line 284 "constraint.m"
        transform_hlds__constraint__succeeded = (transform_hlds__constraint__GoalsTail0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 285 "constraint.m"
          transform_hlds__constraint__succeeded = (transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "constraint.m"
        if (transform_hlds__constraint__succeeded)
#line 287 "constraint.m"
          {
#line 287 "constraint.m"
            {
#line 287 "constraint.m"
              transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(transform_hlds__constraint__Goal0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_19_19, transform_hlds__constraint__STATE_VARIABLE_Info_18);
#line 287 "constraint.m"
              return;
            }
#line 287 "constraint.m"
          }
#line 288 "constraint.m"
        else
#line 289 "constraint.m"
          {
#line 289 "constraint.m"
            MR_Word transform_hlds__constraint__InstMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 289 "constraint.m"
            MR_Word transform_hlds__constraint__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 289 "constraint.m"
            MR_Word transform_hlds__constraint__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 1)));
#line 289 "constraint.m"
            MR_Word transform_hlds__constraint__RevGoals1_15;
#line 289 "constraint.m"
            MR_Word transform_hlds__constraint__Goals2_16;
#line 289 "constraint.m"
            MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_24_24;
#line 289 "constraint.m"
            MR_Word transform_hlds__constraint__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 289 "constraint.m"
            MR_Word transform_hlds__constraint__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));

#line 292 "constraint.m"
            {
#line 292 "constraint.m"
              transform_hlds__constraint__annotate_conj_output_vars_6_p_0(transform_hlds__constraint__Goals0_6, transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__VarTypes_14, transform_hlds__constraint__InstMap0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__RevGoals1_15);
            }
#line 294 "constraint.m"
            {
#line 294 "constraint.m"
              transform_hlds__constraint__annotate_conj_constraints_7_p_0(transform_hlds__constraint__ModuleInfo_13, transform_hlds__constraint__RevGoals1_15, transform_hlds__constraint__Constraints_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Goals2_16, transform_hlds__constraint__STATE_VARIABLE_Info_19_19, &transform_hlds__constraint__STATE_VARIABLE_Info_24_24);
            }
#line 296 "constraint.m"
            {
#line 296 "constraint.m"
              transform_hlds__constraint__propagate_conj_constraints_5_p_0(transform_hlds__constraint__Goals2_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_24_24, transform_hlds__constraint__STATE_VARIABLE_Info_18);
#line 296 "constraint.m"
              return;
            }
#line 289 "constraint.m"
          }
#line 282 "constraint.m"
      }
#line 276 "constraint.m"
  }
#line 273 "constraint.m"
}

#line 252 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_cases_6_p_0(
#line 252 "constraint.m"
  MR_Word transform_hlds__constraint__Var_1,
#line 252 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 252 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__3_3,
#line 252 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__4_4,
#line 252 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_5,
#line 252 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_6)
#line 252 "constraint.m"
{
#line 256 "constraint.m"
  {
#line 256 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 256 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "constraint.m"
      {
#line 256 "constraint.m"
        *transform_hlds__constraint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 256 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_6 = transform_hlds__constraint__STATE_VARIABLE_Info_0_5;
#line 256 "constraint.m"
      }
#line 256 "constraint.m"
    else
#line 257 "constraint.m"
      {
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 0)));
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__3_3, (MR_Integer) 1)));
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__Case_16;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__Cases_17;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 0)));
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 1)));
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case0_14, (MR_Integer) 2)));
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__Goal_23;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_26_26;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_27_27;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_28_28;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__ModuleInfo0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__VarTypes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__Type_48;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap_49;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__ModuleInfo_50;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__V_66_66;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__V_67_67;
#line 257 "constraint.m"
        MR_Word transform_hlds__constraint__V_69_69;
#line 259 "constraint.m"
        MR_Word transform_hlds__constraint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 259 "constraint.m"
        MR_Word transform_hlds__constraint__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 791 "constraint.m"
        MR_Word transform_hlds__constraint__V_65_65;
#line 791 "constraint.m"
        MR_Word transform_hlds__constraint__V_68_68;
#line 262 "constraint.m"
        MR_Word transform_hlds__constraint__V_34_34;
#line 262 "constraint.m"
        MR_Word transform_hlds__constraint__V_35_35;
#line 262 "constraint.m"
        MR_Word transform_hlds__constraint__V_36_36;
#line 262 "constraint.m"
        MR_Word transform_hlds__constraint__V_38_38;
#line 262 "constraint.m"
        MR_Word transform_hlds__constraint__V_37_37;

#line 788 "constraint.m"
        {
#line 788 "constraint.m"
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__constraint__VarTypes_47, transform_hlds__constraint__Var_1, &transform_hlds__constraint__Type_48);
        }
#line 789 "constraint.m"
        {
#line 789 "constraint.m"
          hlds__instmap__bind_var_to_functors_8_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Type_48, transform_hlds__constraint__MainConsId_19, transform_hlds__constraint__OtherConsIds_20, transform_hlds__constraint__InstMap0_45, &transform_hlds__constraint__InstMap_49, transform_hlds__constraint__ModuleInfo0_46, &transform_hlds__constraint__ModuleInfo_50);
        }
#line 791 "constraint.m"
        transform_hlds__constraint__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 791 "constraint.m"
        transform_hlds__constraint__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 791 "constraint.m"
        transform_hlds__constraint__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 791 "constraint.m"
        transform_hlds__constraint__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 791 "constraint.m"
        transform_hlds__constraint__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
#line 792 "constraint.m"
        {
#line 792 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 792 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_50));
#line 792 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (transform_hlds__constraint__V_66_66));
#line 792 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (transform_hlds__constraint__V_67_67));
#line 792 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_49));
#line 792 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_26_26, 4) = ((MR_Box) (transform_hlds__constraint__V_69_69));
#line 792 "constraint.m"
        }
#line 261 "constraint.m"
        {
#line 261 "constraint.m"
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal0_21, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goal_23, transform_hlds__constraint__STATE_VARIABLE_Info_26_26, &transform_hlds__constraint__STATE_VARIABLE_Info_27_27);
        }
#line 262 "constraint.m"
        transform_hlds__constraint__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 0)));
#line 262 "constraint.m"
        transform_hlds__constraint__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 1)));
#line 262 "constraint.m"
        transform_hlds__constraint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 2)));
#line 262 "constraint.m"
        transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 3)));
#line 262 "constraint.m"
        transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_27_27, (MR_Integer) 4)));
#line 262 "constraint.m"
        {
#line 262 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 262 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (transform_hlds__constraint__V_34_34));
#line 262 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (transform_hlds__constraint__V_35_35));
#line 262 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (transform_hlds__constraint__V_36_36));
#line 262 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_45));
#line 262 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (transform_hlds__constraint__V_38_38));
#line 262 "constraint.m"
        }
#line 263 "constraint.m"
        {
#line 263 "constraint.m"
          transform_hlds__constraint__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 263 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 0) = ((MR_Box) (transform_hlds__constraint__MainConsId_19));
#line 263 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 1) = ((MR_Box) (transform_hlds__constraint__OtherConsIds_20));
#line 263 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__Case_16, 2) = ((MR_Box) (transform_hlds__constraint__Goal_23));
#line 263 "constraint.m"
        }
#line 264 "constraint.m"
        {
#line 264 "constraint.m"
          transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_1, transform_hlds__constraint__Constraints_2, transform_hlds__constraint__Cases0_15, &transform_hlds__constraint__Cases_17, transform_hlds__constraint__STATE_VARIABLE_Info_28_28, transform_hlds__constraint__STATE_VARIABLE_Info_6);
        }
#line 257 "constraint.m"
        {
#line 257 "constraint.m"
          MR_Word base;
#line 257 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "constraint.m"
          *transform_hlds__constraint__HeadVar__4_4 = base;
#line 257 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Case_16));
#line 257 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Cases_17));
#line 257 "constraint.m"
        }
#line 257 "constraint.m"
      }
#line 256 "constraint.m"
  }
#line 252 "constraint.m"
}

#line 239 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_in_independent_goals_5_p_0(
#line 239 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 239 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_2,
#line 239 "constraint.m"
  MR_Word * transform_hlds__constraint__HeadVar__3_3,
#line 239 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_4,
#line 239 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_5)
#line 239 "constraint.m"
{
#line 242 "constraint.m"
  {
#line 242 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 242 "constraint.m"
    if ((transform_hlds__constraint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "constraint.m"
      {
#line 242 "constraint.m"
        *transform_hlds__constraint__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 242 "constraint.m"
        *transform_hlds__constraint__STATE_VARIABLE_Info_5 = transform_hlds__constraint__STATE_VARIABLE_Info_0_4;
#line 242 "constraint.m"
      }
#line 242 "constraint.m"
    else
#line 244 "constraint.m"
      {
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__Goal_13;
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__Goals_14;
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__InstMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_19_19;
#line 244 "constraint.m"
        MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_20_20;
#line 245 "constraint.m"
        MR_Word transform_hlds__constraint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 245 "constraint.m"
        MR_Word transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 245 "constraint.m"
        MR_Word transform_hlds__constraint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 245 "constraint.m"
        MR_Word transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 247 "constraint.m"
        MR_Word transform_hlds__constraint__V_26_26;
#line 247 "constraint.m"
        MR_Word transform_hlds__constraint__V_27_27;
#line 247 "constraint.m"
        MR_Word transform_hlds__constraint__V_28_28;
#line 247 "constraint.m"
        MR_Word transform_hlds__constraint__V_30_30;
#line 247 "constraint.m"
        MR_Word transform_hlds__constraint__V_29_29;

#line 246 "constraint.m"
        {
#line 246 "constraint.m"
          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal0_10, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goal_13, transform_hlds__constraint__STATE_VARIABLE_Info_0_4, &transform_hlds__constraint__STATE_VARIABLE_Info_19_19);
        }
#line 247 "constraint.m"
        transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
#line 247 "constraint.m"
        transform_hlds__constraint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 1)));
#line 247 "constraint.m"
        transform_hlds__constraint__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
#line 247 "constraint.m"
        transform_hlds__constraint__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
#line 247 "constraint.m"
        transform_hlds__constraint__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
#line 247 "constraint.m"
        {
#line 247 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 247 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (transform_hlds__constraint__V_26_26));
#line 247 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 1) = ((MR_Box) (transform_hlds__constraint__V_27_27));
#line 247 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (transform_hlds__constraint__V_28_28));
#line 247 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_16));
#line 247 "constraint.m"
          MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (transform_hlds__constraint__V_30_30));
#line 247 "constraint.m"
        }
#line 248 "constraint.m"
        {
#line 248 "constraint.m"
          transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_11, transform_hlds__constraint__Constraints_2, &transform_hlds__constraint__Goals_14, transform_hlds__constraint__STATE_VARIABLE_Info_20_20, transform_hlds__constraint__STATE_VARIABLE_Info_5);
        }
#line 243 "constraint.m"
        {
#line 243 "constraint.m"
          MR_Word base;
#line 243 "constraint.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "constraint.m"
          *transform_hlds__constraint__HeadVar__3_3 = base;
#line 243 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__Goal_13));
#line 243 "constraint.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__Goals_14));
#line 243 "constraint.m"
        }
#line 244 "constraint.m"
      }
#line 242 "constraint.m"
  }
#line 239 "constraint.m"
}

#line 230 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0_1(
#line 230 "constraint.m"
  MR_Box transform_hlds__constraint__closure_arg,
#line 230 "constraint.m"
  MR_Box transform_hlds__constraint__wrapper_arg_1,
#line 230 "constraint.m"
  MR_Box * transform_hlds__constraint__wrapper_arg_2)
#line 230 "constraint.m"
{
#line 230 "constraint.m"
  {
#line 230 "constraint.m"
    MR_Box transform_hlds__constraint__closure = transform_hlds__constraint__closure_arg;
#line 230 "constraint.m"
    MR_Word transform_hlds__constraint__conv0_HeadVar__2_15;

#line 230 "constraint.m"
    {
#line 230 "constraint.m"
      transform_hlds__constraint__IntroducedFrom__pred__flatten_constraints__230__1_2_p_0(((MR_Word) transform_hlds__constraint__wrapper_arg_1), &transform_hlds__constraint__conv0_HeadVar__2_15);
    }
#line 230 "constraint.m"
    *transform_hlds__constraint__wrapper_arg_2 = ((MR_Box) (transform_hlds__constraint__conv0_HeadVar__2_15));
#line 230 "constraint.m"
  }
#line 230 "constraint.m"
}

#line 227 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__flatten_constraints_2_p_0(
#line 227 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints0_3,
#line 227 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_4)
#line 227 "constraint.m"
{
#line 229 "constraint.m"
  {
#line 229 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__GoalLists0_11;
#line 229 "constraint.m"
    MR_Word transform_hlds__constraint__GoalLists_12;

#line 230 "constraint.m"
    {
#line 230 "constraint.m"
      mercury__list__map_3_p_0((MR_Word) &transform_hlds__constraint__transform_hlds__constraint__type_ctor_info_constraint_0, (MR_Word) &transform_hlds__constraint_scalar_common_1[1], (MR_Word) &transform_hlds__constraint_scalar_common_2[2], transform_hlds__constraint__Constraints0_3, &transform_hlds__constraint__GoalLists0_11);
    }
#line 234 "constraint.m"
    {
#line 234 "constraint.m"
      mercury__list__condense_2_p_0((MR_Word) &transform_hlds__constraint_scalar_common_1[0], transform_hlds__constraint__GoalLists0_11, &transform_hlds__constraint__GoalLists_12);
    }
#line 235 "constraint.m"
    {
#line 235 "constraint.m"
      mercury__list__condense_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__constraint__GoalLists_12, transform_hlds__constraint__Goals_4);
#line 235 "constraint.m"
      return;
    }
#line 229 "constraint.m"
  }
#line 227 "constraint.m"
}

#line 121 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(
#line 121 "constraint.m"
  MR_Word transform_hlds__constraint__HeadVar__1_1,
#line 121 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_8,
#line 121 "constraint.m"
  MR_Word * transform_hlds__constraint__FinalGoals_9,
#line 121 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_79,
#line 121 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_80)
#line 121 "constraint.m"
{
#line 125 "constraint.m"
  {
#line 125 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 125 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 0)));
#line 125 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__HeadVar__1_1, (MR_Integer) 1)));

#line 142 "constraint.m"
#line 142 "constraint.m"
    switch (MR_tag((MR_Word) transform_hlds__constraint__GoalExpr_6)) {
#line 142 "constraint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 142 "constraint.m"
      case (MR_Integer) 0:
#line 202 "constraint.m"
        {
#line 202 "constraint.m"
          MR_Word transform_hlds__constraint__NegGoal0_53 = (MR_Word) MR_body(((MR_Word) transform_hlds__constraint__GoalExpr_6), (MR_Integer) 0);
#line 202 "constraint.m"
          MR_Word transform_hlds__constraint__NegGoal_54;
#line 202 "constraint.m"
          MR_Word transform_hlds__constraint__V_87_87;
#line 202 "constraint.m"
          MR_Word transform_hlds__constraint__V_88_88;
#line 202 "constraint.m"
          MR_Word transform_hlds__constraint__ConstraintGoals_135;

#line 205 "constraint.m"
          {
#line 205 "constraint.m"
            transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__NegGoal0_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__NegGoal_54, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
          }
#line 206 "constraint.m"
          {
#line 206 "constraint.m"
            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_135);
          }
#line 207 "constraint.m"
          transform_hlds__constraint__V_88_88 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__constraint__NegGoal_54);
#line 207 "constraint.m"
          {
#line 207 "constraint.m"
            transform_hlds__constraint__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_87_87, 0) = ((MR_Box) (transform_hlds__constraint__V_88_88));
#line 207 "constraint.m"
            MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_87_87, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 207 "constraint.m"
          }
#line 207 "constraint.m"
          {
#line 207 "constraint.m"
            MR_Word base;
#line 207 "constraint.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "constraint.m"
            *transform_hlds__constraint__FinalGoals_9 = base;
#line 207 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_87_87));
#line 207 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_135));
#line 207 "constraint.m"
          }
#line 202 "constraint.m"
        }
#line 142 "constraint.m"
        break;
#line 142 "constraint.m"
      case (MR_Integer) 1:
#line 142 "constraint.m"
      case (MR_Integer) 2:
#line 213 "constraint.m"
        {
#line 213 "constraint.m"
          MR_Word transform_hlds__constraint__ConstraintGoals_136;

#line 216 "constraint.m"
          {
#line 216 "constraint.m"
            transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_136);
          }
#line 217 "constraint.m"
          {
#line 217 "constraint.m"
            MR_Word base;
#line 217 "constraint.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "constraint.m"
            *transform_hlds__constraint__FinalGoals_9 = base;
#line 217 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 217 "constraint.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_136));
#line 217 "constraint.m"
          }
#line 213 "constraint.m"
          *transform_hlds__constraint__STATE_VARIABLE_Info_80 = transform_hlds__constraint__STATE_VARIABLE_Info_0_79;
#line 213 "constraint.m"
        }
#line 142 "constraint.m"
        break;
#line 142 "constraint.m"
      case (MR_Integer) 3:
#line 142 "constraint.m"
#line 142 "constraint.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 0)))) {
#line 142 "constraint.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 142 "constraint.m"
          case (MR_Integer) 0:
#line 142 "constraint.m"
          case (MR_Integer) 1:
#line 213 "constraint.m"
            {
#line 213 "constraint.m"
              MR_Word transform_hlds__constraint__ConstraintGoals_136;

#line 216 "constraint.m"
              {
#line 216 "constraint.m"
                transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_136);
              }
#line 217 "constraint.m"
              {
#line 217 "constraint.m"
                MR_Word base;
#line 217 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 217 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 217 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_136));
#line 217 "constraint.m"
              }
#line 213 "constraint.m"
              *transform_hlds__constraint__STATE_VARIABLE_Info_80 = transform_hlds__constraint__STATE_VARIABLE_Info_0_79;
#line 213 "constraint.m"
            }
#line 142 "constraint.m"
            break;
#line 142 "constraint.m"
          case (MR_Integer) 2:
#line 127 "constraint.m"
            {
#line 127 "constraint.m"
              MR_Word transform_hlds__constraint__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 127 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));

#line 132 "constraint.m"
#line 132 "constraint.m"
              switch (transform_hlds__constraint__ConjType_11) {
#line 132 "constraint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 132 "constraint.m"
                case (MR_Integer) 1:
#line 133 "constraint.m"
                  {
#line 133 "constraint.m"
                    MR_Word transform_hlds__constraint__MoreGoals_14;
#line 133 "constraint.m"
                    MR_Word transform_hlds__constraint__V_124_124;
#line 133 "constraint.m"
                    MR_Word transform_hlds__constraint__V_125_125;
#line 133 "constraint.m"
                    MR_Word transform_hlds__constraint__Goals_130;

#line 137 "constraint.m"
                    {
#line 137 "constraint.m"
                      transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__MoreGoals_14);
                    }
#line 138 "constraint.m"
                    {
#line 138 "constraint.m"
                      transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Goals_130, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 139 "constraint.m"
                    {
#line 139 "constraint.m"
                      transform_hlds__constraint__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 139 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 139 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_125_125, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_11));
#line 139 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_125_125, 2) = ((MR_Box) (transform_hlds__constraint__Goals_130));
#line 139 "constraint.m"
                    }
#line 139 "constraint.m"
                    {
#line 139 "constraint.m"
                      transform_hlds__constraint__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 139 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_124_124, 0) = ((MR_Box) (transform_hlds__constraint__V_125_125));
#line 139 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_124_124, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 139 "constraint.m"
                    }
#line 139 "constraint.m"
                    {
#line 139 "constraint.m"
                      MR_Word base;
#line 139 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 139 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_124_124));
#line 139 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__MoreGoals_14));
#line 139 "constraint.m"
                    }
#line 133 "constraint.m"
                  }
#line 132 "constraint.m"
                  break;
#line 132 "constraint.m"
                case (MR_Integer) 0:
#line 129 "constraint.m"
                  {
#line 129 "constraint.m"
                    MR_Word transform_hlds__constraint__Goals_13;
#line 129 "constraint.m"
                    MR_Word transform_hlds__constraint__V_127_127;
#line 129 "constraint.m"
                    MR_Word transform_hlds__constraint__V_128_128;

#line 130 "constraint.m"
                    {
#line 130 "constraint.m"
                      transform_hlds__constraint__propagate_conj_5_p_0(transform_hlds__constraint__Goals0_12, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Goals_13, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 131 "constraint.m"
                    {
#line 131 "constraint.m"
                      transform_hlds__constraint__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 131 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 131 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_128_128, 1) = ((MR_Box) (transform_hlds__constraint__ConjType_11));
#line 131 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_128_128, 2) = ((MR_Box) (transform_hlds__constraint__Goals_13));
#line 131 "constraint.m"
                    }
#line 131 "constraint.m"
                    {
#line 131 "constraint.m"
                      transform_hlds__constraint__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 131 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_127_127, 0) = ((MR_Box) (transform_hlds__constraint__V_128_128));
#line 131 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_127_127, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 131 "constraint.m"
                    }
#line 131 "constraint.m"
                    {
#line 131 "constraint.m"
                      MR_Word base;
#line 131 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 131 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_127_127));
#line 131 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "constraint.m"
                    }
#line 129 "constraint.m"
                  }
#line 132 "constraint.m"
                  break;
#line 132 "constraint.m"
              }
#line 127 "constraint.m"
            }
#line 142 "constraint.m"
            break;
#line 142 "constraint.m"
          case (MR_Integer) 3:
#line 143 "constraint.m"
            {
#line 143 "constraint.m"
              MR_Word transform_hlds__constraint__V_119_119;
#line 143 "constraint.m"
              MR_Word transform_hlds__constraint__V_120_120;
#line 143 "constraint.m"
              MR_Word transform_hlds__constraint__Goals0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 143 "constraint.m"
              MR_Word transform_hlds__constraint__Goals_132;

#line 144 "constraint.m"
              {
#line 144 "constraint.m"
                transform_hlds__constraint__propagate_in_independent_goals_5_p_0(transform_hlds__constraint__Goals0_131, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Goals_132, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
              }
#line 145 "constraint.m"
              {
#line 145 "constraint.m"
                transform_hlds__constraint__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 145 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_120_120, 1) = ((MR_Box) (transform_hlds__constraint__Goals_132));
#line 145 "constraint.m"
              }
#line 145 "constraint.m"
              {
#line 145 "constraint.m"
                transform_hlds__constraint__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_119_119, 0) = ((MR_Box) (transform_hlds__constraint__V_120_120));
#line 145 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_119_119, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 145 "constraint.m"
              }
#line 145 "constraint.m"
              {
#line 145 "constraint.m"
                MR_Word base;
#line 145 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 145 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_119_119));
#line 145 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "constraint.m"
              }
#line 143 "constraint.m"
            }
#line 142 "constraint.m"
            break;
#line 142 "constraint.m"
          case (MR_Integer) 4:
#line 147 "constraint.m"
            {
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__CanFail_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 3)));
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__Cases_18;
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__V_115_115;
#line 147 "constraint.m"
              MR_Word transform_hlds__constraint__V_116_116;

#line 148 "constraint.m"
              {
#line 148 "constraint.m"
                transform_hlds__constraint__propagate_cases_6_p_0(transform_hlds__constraint__Var_15, transform_hlds__constraint__Constraints_8, transform_hlds__constraint__Cases0_17, &transform_hlds__constraint__Cases_18, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
              }
#line 149 "constraint.m"
              {
#line 149 "constraint.m"
                transform_hlds__constraint__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 1) = ((MR_Box) (transform_hlds__constraint__Var_15));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 2) = ((MR_Box) (transform_hlds__constraint__CanFail_16));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_116_116, 3) = ((MR_Box) (transform_hlds__constraint__Cases_18));
#line 149 "constraint.m"
              }
#line 149 "constraint.m"
              {
#line 149 "constraint.m"
                transform_hlds__constraint__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_115_115, 0) = ((MR_Box) (transform_hlds__constraint__V_116_116));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_115_115, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
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
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_115_115));
#line 149 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "constraint.m"
              }
#line 147 "constraint.m"
            }
#line 142 "constraint.m"
            break;
#line 142 "constraint.m"
          case (MR_Integer) 5:
#line 164 "constraint.m"
            {
#line 164 "constraint.m"
              MR_Word transform_hlds__constraint__Reason_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 164 "constraint.m"
              MR_Word transform_hlds__constraint__SubGoal0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));

#line 172 "constraint.m"
#line 172 "constraint.m"
              switch (MR_tag((MR_Word) transform_hlds__constraint__Reason_27)) {
#line 172 "constraint.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 172 "constraint.m"
                case (MR_Integer) 0:
#line 169 "constraint.m"
                  {
#line 169 "constraint.m"
                    MR_Word transform_hlds__constraint__SubGoal_32;
#line 169 "constraint.m"
                    MR_Word transform_hlds__constraint__V_102_102;
#line 169 "constraint.m"
                    MR_Word transform_hlds__constraint__V_103_103;

#line 170 "constraint.m"
                    {
#line 170 "constraint.m"
                      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_32, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 171 "constraint.m"
                    {
#line 171 "constraint.m"
                      transform_hlds__constraint__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 171 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 171 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_103_103, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 171 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_103_103, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_32));
#line 171 "constraint.m"
                    }
#line 171 "constraint.m"
                    {
#line 171 "constraint.m"
                      transform_hlds__constraint__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 171 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_102_102, 0) = ((MR_Box) (transform_hlds__constraint__V_103_103));
#line 171 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_102_102, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 171 "constraint.m"
                    }
#line 171 "constraint.m"
                    {
#line 171 "constraint.m"
                      MR_Word base;
#line 171 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 171 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_102_102));
#line 171 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "constraint.m"
                    }
#line 169 "constraint.m"
                  }
#line 172 "constraint.m"
                  break;
#line 172 "constraint.m"
                case (MR_Integer) 1:
#line 172 "constraint.m"
                case (MR_Integer) 2:
#line 179 "constraint.m"
                  {
#line 179 "constraint.m"
                    MR_Word transform_hlds__constraint__ConstraintGoals_46;
#line 179 "constraint.m"
                    MR_Word transform_hlds__constraint__V_97_97;
#line 179 "constraint.m"
                    MR_Word transform_hlds__constraint__V_98_98;
#line 179 "constraint.m"
                    MR_Word transform_hlds__constraint__SubGoal_133;

#line 182 "constraint.m"
                    {
#line 182 "constraint.m"
                      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__SubGoal_133, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                    }
#line 183 "constraint.m"
                    {
#line 183 "constraint.m"
                      transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_46);
                    }
#line 184 "constraint.m"
                    {
#line 184 "constraint.m"
                      transform_hlds__constraint__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 184 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 184 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 184 "constraint.m"
                      MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_133));
#line 184 "constraint.m"
                    }
#line 184 "constraint.m"
                    {
#line 184 "constraint.m"
                      transform_hlds__constraint__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 184 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 0) = ((MR_Box) (transform_hlds__constraint__V_98_98));
#line 184 "constraint.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 184 "constraint.m"
                    }
#line 184 "constraint.m"
                    {
#line 184 "constraint.m"
                      MR_Word base;
#line 184 "constraint.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "constraint.m"
                      *transform_hlds__constraint__FinalGoals_9 = base;
#line 184 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_97_97));
#line 184 "constraint.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_46));
#line 184 "constraint.m"
                    }
#line 179 "constraint.m"
                  }
#line 172 "constraint.m"
                  break;
#line 172 "constraint.m"
                case (MR_Integer) 3:
#line 172 "constraint.m"
#line 172 "constraint.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 0)))) {
#line 172 "constraint.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 172 "constraint.m"
                    case (MR_Integer) 0:
#line 191 "constraint.m"
                      {
#line 193 "constraint.m"
                        {
#line 193 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 193 "constraint.m"
                          return;
                        }
#line 191 "constraint.m"
                      }
#line 172 "constraint.m"
                      break;
#line 172 "constraint.m"
                    case (MR_Integer) 1:
#line 191 "constraint.m"
                      {
#line 193 "constraint.m"
                        {
#line 193 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 193 "constraint.m"
                          return;
                        }
#line 191 "constraint.m"
                      }
#line 172 "constraint.m"
                      break;
#line 172 "constraint.m"
                    case (MR_Integer) 2:
#line 191 "constraint.m"
                      {
#line 193 "constraint.m"
                        {
#line 193 "constraint.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 193 "constraint.m"
                          return;
                        }
#line 191 "constraint.m"
                      }
#line 172 "constraint.m"
                      break;
#line 172 "constraint.m"
                    case (MR_Integer) 3:
#line 172 "constraint.m"
                    case (MR_Integer) 4:
#line 172 "constraint.m"
                    case (MR_Integer) 6:
#line 172 "constraint.m"
                    case (MR_Integer) 7:
#line 179 "constraint.m"
                      {
#line 179 "constraint.m"
                        MR_Word transform_hlds__constraint__ConstraintGoals_46;
#line 179 "constraint.m"
                        MR_Word transform_hlds__constraint__V_97_97;
#line 179 "constraint.m"
                        MR_Word transform_hlds__constraint__V_98_98;
#line 179 "constraint.m"
                        MR_Word transform_hlds__constraint__SubGoal_133;

#line 182 "constraint.m"
                        {
#line 182 "constraint.m"
                          transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__SubGoal_133, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                        }
#line 183 "constraint.m"
                        {
#line 183 "constraint.m"
                          transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_46);
                        }
#line 184 "constraint.m"
                        {
#line 184 "constraint.m"
                          transform_hlds__constraint__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 184 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 184 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 184 "constraint.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_98_98, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_133));
#line 184 "constraint.m"
                        }
#line 184 "constraint.m"
                        {
#line 184 "constraint.m"
                          transform_hlds__constraint__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 184 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 0) = ((MR_Box) (transform_hlds__constraint__V_98_98));
#line 184 "constraint.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_97_97, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 184 "constraint.m"
                        }
#line 184 "constraint.m"
                        {
#line 184 "constraint.m"
                          MR_Word base;
#line 184 "constraint.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "constraint.m"
                          *transform_hlds__constraint__FinalGoals_9 = base;
#line 184 "constraint.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_97_97));
#line 184 "constraint.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_46));
#line 184 "constraint.m"
                        }
#line 179 "constraint.m"
                      }
#line 172 "constraint.m"
                      break;
#line 172 "constraint.m"
                    case (MR_Integer) 5:
#line 172 "constraint.m"
                      {
#line 172 "constraint.m"
                        MR_Word transform_hlds__constraint__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 2)));
#line 195 "constraint.m"
                        MR_Word transform_hlds__constraint__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__Reason_27, (MR_Integer) 1)));

#line 172 "constraint.m"
#line 172 "constraint.m"
                        switch (transform_hlds__constraint__V_167_167) {
#line 172 "constraint.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 172 "constraint.m"
                          case (MR_Integer) 1:
#line 195 "constraint.m"
                            {
#line 195 "constraint.m"
                              MR_Word transform_hlds__constraint__ConstraintGoals_134;

#line 198 "constraint.m"
                              {
#line 198 "constraint.m"
                                transform_hlds__constraint__flatten_constraints_2_p_0(transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__ConstraintGoals_134);
                              }
#line 199 "constraint.m"
                              {
#line 199 "constraint.m"
                                MR_Word base;
#line 199 "constraint.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "constraint.m"
                                *transform_hlds__constraint__FinalGoals_9 = base;
#line 199 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__HeadVar__1_1));
#line 199 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__constraint__ConstraintGoals_134));
#line 199 "constraint.m"
                              }
#line 195 "constraint.m"
                              *transform_hlds__constraint__STATE_VARIABLE_Info_80 = transform_hlds__constraint__STATE_VARIABLE_Info_0_79;
#line 195 "constraint.m"
                            }
#line 172 "constraint.m"
                            break;
#line 172 "constraint.m"
                          case (MR_Integer) 2:
#line 169 "constraint.m"
                            {
#line 169 "constraint.m"
                              MR_Word transform_hlds__constraint__SubGoal_146;
#line 169 "constraint.m"
                              MR_Word transform_hlds__constraint__V_147_147;
#line 169 "constraint.m"
                              MR_Word transform_hlds__constraint__V_148_148;

#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_146, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                              }
#line 171 "constraint.m"
                              {
#line 171 "constraint.m"
                                transform_hlds__constraint__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_148_148, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_148_148, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_146));
#line 171 "constraint.m"
                              }
#line 171 "constraint.m"
                              {
#line 171 "constraint.m"
                                transform_hlds__constraint__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_147_147, 0) = ((MR_Box) (transform_hlds__constraint__V_148_148));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_147_147, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 171 "constraint.m"
                              }
#line 171 "constraint.m"
                              {
#line 171 "constraint.m"
                                MR_Word base;
#line 171 "constraint.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "constraint.m"
                                *transform_hlds__constraint__FinalGoals_9 = base;
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_147_147));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "constraint.m"
                              }
#line 169 "constraint.m"
                            }
#line 172 "constraint.m"
                            break;
#line 172 "constraint.m"
                          case (MR_Integer) 0:
#line 191 "constraint.m"
                            {
#line 193 "constraint.m"
                              {
#line 193 "constraint.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "unexpected scope");
#line 193 "constraint.m"
                                return;
                              }
#line 191 "constraint.m"
                            }
#line 172 "constraint.m"
                            break;
#line 172 "constraint.m"
                          case (MR_Integer) 3:
#line 169 "constraint.m"
                            {
#line 169 "constraint.m"
                              MR_Word transform_hlds__constraint__SubGoal_150;
#line 169 "constraint.m"
                              MR_Word transform_hlds__constraint__V_151_151;
#line 169 "constraint.m"
                              MR_Word transform_hlds__constraint__V_152_152;

#line 170 "constraint.m"
                              {
#line 170 "constraint.m"
                                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__SubGoal0_28, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__SubGoal_150, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, transform_hlds__constraint__STATE_VARIABLE_Info_80);
                              }
#line 171 "constraint.m"
                              {
#line 171 "constraint.m"
                                transform_hlds__constraint__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_152_152, 1) = ((MR_Box) (transform_hlds__constraint__Reason_27));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_152_152, 2) = ((MR_Box) (transform_hlds__constraint__SubGoal_150));
#line 171 "constraint.m"
                              }
#line 171 "constraint.m"
                              {
#line 171 "constraint.m"
                                transform_hlds__constraint__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_151_151, 0) = ((MR_Box) (transform_hlds__constraint__V_152_152));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_151_151, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 171 "constraint.m"
                              }
#line 171 "constraint.m"
                              {
#line 171 "constraint.m"
                                MR_Word base;
#line 171 "constraint.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "constraint.m"
                                *transform_hlds__constraint__FinalGoals_9 = base;
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_151_151));
#line 171 "constraint.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "constraint.m"
                              }
#line 169 "constraint.m"
                            }
#line 172 "constraint.m"
                            break;
#line 172 "constraint.m"
                        }
#line 172 "constraint.m"
                      }
#line 172 "constraint.m"
                      break;
#line 172 "constraint.m"
                  }
#line 172 "constraint.m"
                  break;
#line 172 "constraint.m"
              }
#line 164 "constraint.m"
            }
#line 142 "constraint.m"
            break;
#line 142 "constraint.m"
          case (MR_Integer) 6:
#line 151 "constraint.m"
            {
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Vars_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 1)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Cond0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 2)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Then0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 3)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Else0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__constraint__GoalExpr_6, (MR_Integer) 4)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__InstMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 3)));
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Cond_24;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Then_25;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__Else_26;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_106_106;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_107_107;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_108_108;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_109_109;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_111_111;
#line 151 "constraint.m"
              MR_Word transform_hlds__constraint__V_112_112;
#line 152 "constraint.m"
              MR_Word transform_hlds__constraint__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 0)));
#line 152 "constraint.m"
              MR_Word transform_hlds__constraint__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 1)));
#line 152 "constraint.m"
              MR_Word transform_hlds__constraint__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 2)));
#line 152 "constraint.m"
              MR_Word transform_hlds__constraint__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_79, (MR_Integer) 4)));
#line 159 "constraint.m"
              MR_Word transform_hlds__constraint__V_141_141;
#line 159 "constraint.m"
              MR_Word transform_hlds__constraint__V_142_142;
#line 159 "constraint.m"
              MR_Word transform_hlds__constraint__V_143_143;
#line 159 "constraint.m"
              MR_Word transform_hlds__constraint__V_145_145;
#line 159 "constraint.m"
              MR_Word transform_hlds__constraint__V_144_144;

#line 156 "constraint.m"
              {
#line 156 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Cond0_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__constraint__Cond_24, transform_hlds__constraint__STATE_VARIABLE_Info_0_79, &transform_hlds__constraint__STATE_VARIABLE_Info_106_106);
              }
#line 157 "constraint.m"
              {
#line 157 "constraint.m"
                transform_hlds__constraint__constraint_info_update_goal_3_p_0(transform_hlds__constraint__Cond_24, transform_hlds__constraint__STATE_VARIABLE_Info_106_106, &transform_hlds__constraint__STATE_VARIABLE_Info_107_107);
              }
#line 158 "constraint.m"
              {
#line 158 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Then0_21, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Then_25, transform_hlds__constraint__STATE_VARIABLE_Info_107_107, &transform_hlds__constraint__STATE_VARIABLE_Info_108_108);
              }
#line 159 "constraint.m"
              transform_hlds__constraint__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 0)));
#line 159 "constraint.m"
              transform_hlds__constraint__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 1)));
#line 159 "constraint.m"
              transform_hlds__constraint__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 2)));
#line 159 "constraint.m"
              transform_hlds__constraint__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 3)));
#line 159 "constraint.m"
              transform_hlds__constraint__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_108_108, (MR_Integer) 4)));
#line 159 "constraint.m"
              {
#line 159 "constraint.m"
                transform_hlds__constraint__STATE_VARIABLE_Info_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 159 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 0) = ((MR_Box) (transform_hlds__constraint__V_141_141));
#line 159 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 1) = ((MR_Box) (transform_hlds__constraint__V_142_142));
#line 159 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 2) = ((MR_Box) (transform_hlds__constraint__V_143_143));
#line 159 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_23));
#line 159 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_109_109, 4) = ((MR_Box) (transform_hlds__constraint__V_145_145));
#line 159 "constraint.m"
              }
#line 160 "constraint.m"
              {
#line 160 "constraint.m"
                transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Else0_22, transform_hlds__constraint__Constraints_8, &transform_hlds__constraint__Else_26, transform_hlds__constraint__STATE_VARIABLE_Info_109_109, transform_hlds__constraint__STATE_VARIABLE_Info_80);
              }
#line 162 "constraint.m"
              {
#line 162 "constraint.m"
                transform_hlds__constraint__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 162 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 162 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 1) = ((MR_Box) (transform_hlds__constraint__Vars_19));
#line 162 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 2) = ((MR_Box) (transform_hlds__constraint__Cond_24));
#line 162 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 3) = ((MR_Box) (transform_hlds__constraint__Then_25));
#line 162 "constraint.m"
                MR_hl_field(MR_mktag(3), transform_hlds__constraint__V_112_112, 4) = ((MR_Box) (transform_hlds__constraint__Else_26));
#line 162 "constraint.m"
              }
#line 162 "constraint.m"
              {
#line 162 "constraint.m"
                transform_hlds__constraint__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_111_111, 0) = ((MR_Box) (transform_hlds__constraint__V_112_112));
#line 162 "constraint.m"
                MR_hl_field(MR_mktag(0), transform_hlds__constraint__V_111_111, 1) = ((MR_Box) (transform_hlds__constraint__GoalInfo_7));
#line 162 "constraint.m"
              }
#line 162 "constraint.m"
              {
#line 162 "constraint.m"
                MR_Word base;
#line 162 "constraint.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "constraint.m"
                *transform_hlds__constraint__FinalGoals_9 = base;
#line 162 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__constraint__V_111_111));
#line 162 "constraint.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 162 "constraint.m"
              }
#line 151 "constraint.m"
            }
#line 142 "constraint.m"
            break;
#line 142 "constraint.m"
          case (MR_Integer) 7:
#line 219 "constraint.m"
            {
#line 220 "constraint.m"
              {
#line 220 "constraint.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.constraint", (MR_String) "predicate \140transform_hlds.constraint.propagate_conj_sub_goal_2\'/5", (MR_String) "shorthand");
#line 220 "constraint.m"
                return;
              }
#line 219 "constraint.m"
            }
#line 142 "constraint.m"
            break;
#line 142 "constraint.m"
        }
#line 142 "constraint.m"
        break;
#line 142 "constraint.m"
    }
#line 125 "constraint.m"
  }
#line 121 "constraint.m"
}

#line 101 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_conj_sub_goal_5_p_0(
#line 101 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 101 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 101 "constraint.m"
  MR_Word * transform_hlds__constraint__Goals_8,
#line 101 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_14,
#line 101 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_15)
#line 101 "constraint.m"
{
#line 105 "constraint.m"
  {
#line 105 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 105 "constraint.m"
    MR_Word transform_hlds__constraint__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 0)));
#line 105 "constraint.m"
    MR_Word transform_hlds__constraint__HasSubGoals_12;
#line 105 "constraint.m"
    MR_Word transform_hlds__constraint__InstMap0_13;
#line 105 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_16_16;
#line 105 "constraint.m"
    MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_17_17;
#line 106 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 1)));
#line 117 "constraint.m"
    MR_Word transform_hlds__constraint__V_19_19;
#line 117 "constraint.m"
    MR_Word transform_hlds__constraint__V_20_20;
#line 117 "constraint.m"
    MR_Word transform_hlds__constraint__V_21_21;
#line 117 "constraint.m"
    MR_Word transform_hlds__constraint__V_22_22;
#line 119 "constraint.m"
    MR_Word transform_hlds__constraint__V_23_23;
#line 119 "constraint.m"
    MR_Word transform_hlds__constraint__V_24_24;
#line 119 "constraint.m"
    MR_Word transform_hlds__constraint__V_25_25;
#line 119 "constraint.m"
    MR_Word transform_hlds__constraint__V_27_27;
#line 119 "constraint.m"
    MR_Word transform_hlds__constraint__V_26_26;

#line 107 "constraint.m"
    {
#line 107 "constraint.m"
      transform_hlds__constraint__HasSubGoals_12 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__constraint__GoalExpr0_10);
    }
#line 110 "constraint.m"
#line 110 "constraint.m"
    switch (transform_hlds__constraint__HasSubGoals_12) {
#line 110 "constraint.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 110 "constraint.m"
      case (MR_Integer) 1:
#line 109 "constraint.m"
        transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
#line 110 "constraint.m"
        break;
#line 110 "constraint.m"
      case (MR_Integer) 0:
#line 803 "constraint.m"
        if ((transform_hlds__constraint__Constraints_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "constraint.m"
          transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = transform_hlds__constraint__STATE_VARIABLE_Info_0_14;
#line 803 "constraint.m"
        else
#line 805 "constraint.m"
          {
#line 806 "constraint.m"
            MR_Word transform_hlds__constraint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 806 "constraint.m"
            MR_Word transform_hlds__constraint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 806 "constraint.m"
            MR_Word transform_hlds__constraint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 806 "constraint.m"
            MR_Word transform_hlds__constraint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 806 "constraint.m"
            MR_Word transform_hlds__constraint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));

#line 806 "constraint.m"
            {
#line 806 "constraint.m"
              transform_hlds__constraint__STATE_VARIABLE_Info_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 806 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 0) = ((MR_Box) (transform_hlds__constraint__V_36_36));
#line 806 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 1) = ((MR_Box) (transform_hlds__constraint__V_37_37));
#line 806 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 2) = ((MR_Box) (transform_hlds__constraint__V_38_38));
#line 806 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 3) = ((MR_Box) (transform_hlds__constraint__V_39_39));
#line 806 "constraint.m"
              MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, 4) = ((MR_Box) ((MR_Integer) 1));
#line 806 "constraint.m"
            }
#line 805 "constraint.m"
          }
#line 110 "constraint.m"
        break;
#line 110 "constraint.m"
    }
#line 117 "constraint.m"
    transform_hlds__constraint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 0)));
#line 117 "constraint.m"
    transform_hlds__constraint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 1)));
#line 117 "constraint.m"
    transform_hlds__constraint__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 2)));
#line 117 "constraint.m"
    transform_hlds__constraint__InstMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 3)));
#line 117 "constraint.m"
    transform_hlds__constraint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_16_16, (MR_Integer) 4)));
#line 118 "constraint.m"
    {
#line 118 "constraint.m"
      transform_hlds__constraint__propagate_conj_sub_goal_2_5_p_0(transform_hlds__constraint__Goal0_6, transform_hlds__constraint__Constraints_7, transform_hlds__constraint__Goals_8, transform_hlds__constraint__STATE_VARIABLE_Info_16_16, &transform_hlds__constraint__STATE_VARIABLE_Info_17_17);
    }
#line 119 "constraint.m"
    transform_hlds__constraint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 119 "constraint.m"
    transform_hlds__constraint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 119 "constraint.m"
    transform_hlds__constraint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 119 "constraint.m"
    transform_hlds__constraint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)));
#line 119 "constraint.m"
    transform_hlds__constraint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__STATE_VARIABLE_Info_17_17, (MR_Integer) 4)));
#line 119 "constraint.m"
    {
#line 119 "constraint.m"
      MR_Word base;
#line 119 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 119 "constraint.m"
      *transform_hlds__constraint__STATE_VARIABLE_Info_15 = base;
#line 119 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__V_23_23));
#line 119 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__V_24_24));
#line 119 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__V_25_25));
#line 119 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap0_13));
#line 119 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__constraint__V_27_27));
#line 119 "constraint.m"
    }
#line 105 "constraint.m"
  }
#line 101 "constraint.m"
}

#line 80 "constraint.m"
static void MR_CALL 
transform_hlds__constraint__propagate_goal_5_p_0(
#line 80 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_6,
#line 80 "constraint.m"
  MR_Word transform_hlds__constraint__Constraints_7,
#line 80 "constraint.m"
  MR_Word * transform_hlds__constraint__Goal_8,
#line 80 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_23,
#line 80 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_24)
#line 80 "constraint.m"
{
#line 83 "constraint.m"
  {
#line 83 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 1)));
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__Features0_12;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__Context_13;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__Goals0_14;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__Goals_15;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__NonLocals_16;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__Delta_17;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__ConjDetism_18;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__Purity_19;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo1_20;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo2_21;
#line 83 "constraint.m"
    MR_Word transform_hlds__constraint__GoalInfo_22;
#line 86 "constraint.m"
    MR_Word transform_hlds__constraint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__Goal0_6, (MR_Integer) 0)));

#line 87 "constraint.m"
    {
#line 87 "constraint.m"
      transform_hlds__constraint__Features0_12 = hlds__hlds_goal__goal_info_get_features_1_f_0(transform_hlds__constraint__GoalInfo0_11);
    }
#line 88 "constraint.m"
    {
#line 88 "constraint.m"
      transform_hlds__constraint__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__constraint__GoalInfo0_11);
    }
#line 89 "constraint.m"
    {
#line 89 "constraint.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__constraint__Goal0_6, &transform_hlds__constraint__Goals0_14);
    }
#line 90 "constraint.m"
    {
#line 90 "constraint.m"
      transform_hlds__constraint__propagate_conj_5_p_0(transform_hlds__constraint__Goals0_14, transform_hlds__constraint__Constraints_7, &transform_hlds__constraint__Goals_15, transform_hlds__constraint__STATE_VARIABLE_Info_0_23, transform_hlds__constraint__STATE_VARIABLE_Info_24);
    }
#line 91 "constraint.m"
    {
#line 91 "constraint.m"
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__NonLocals_16);
    }
#line 92 "constraint.m"
    {
#line 92 "constraint.m"
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__Delta_17);
    }
#line 93 "constraint.m"
    {
#line 93 "constraint.m"
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__ConjDetism_18);
    }
#line 94 "constraint.m"
    {
#line 94 "constraint.m"
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__constraint__Goals_15, &transform_hlds__constraint__Purity_19);
    }
#line 95 "constraint.m"
    {
#line 95 "constraint.m"
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__constraint__NonLocals_16, transform_hlds__constraint__Delta_17, transform_hlds__constraint__ConjDetism_18, (MR_Integer) 0, transform_hlds__constraint__Context_13, &transform_hlds__constraint__GoalInfo1_20);
    }
#line 97 "constraint.m"
    {
#line 97 "constraint.m"
      hlds__hlds_goal__goal_info_set_features_3_p_0(transform_hlds__constraint__Features0_12, transform_hlds__constraint__GoalInfo1_20, &transform_hlds__constraint__GoalInfo2_21);
    }
#line 98 "constraint.m"
    {
#line 98 "constraint.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(transform_hlds__constraint__Purity_19, transform_hlds__constraint__GoalInfo2_21, &transform_hlds__constraint__GoalInfo_22);
    }
#line 99 "constraint.m"
    {
#line 99 "constraint.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__constraint__Goals_15, transform_hlds__constraint__GoalInfo_22, transform_hlds__constraint__Goal_8);
#line 99 "constraint.m"
      return;
    }
#line 83 "constraint.m"
  }
#line 80 "constraint.m"
}

#line 46 "constraint.m"
void MR_CALL 
transform_hlds__constraint__constraint_info_deconstruct_5_p_0(
#line 46 "constraint.m"
  MR_Word transform_hlds__constraint__ConstraintInfo_6,
#line 46 "constraint.m"
  MR_Word * transform_hlds__constraint__ModuleInfo_7,
#line 46 "constraint.m"
  MR_Word * transform_hlds__constraint__VarTypes_8,
#line 46 "constraint.m"
  MR_Word * transform_hlds__constraint__VarSet_9,
#line 46 "constraint.m"
  MR_Word * transform_hlds__constraint__Changed_10)
#line 46 "constraint.m"
{
#line 770 "constraint.m"
  {
#line 770 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 770 "constraint.m"
    MR_Word transform_hlds__constraint__V_11_11;

#line 770 "constraint.m"
    *transform_hlds__constraint__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 0)));
#line 770 "constraint.m"
    *transform_hlds__constraint__VarTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 1)));
#line 770 "constraint.m"
    *transform_hlds__constraint__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 2)));
#line 770 "constraint.m"
    transform_hlds__constraint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 3)));
#line 770 "constraint.m"
    *transform_hlds__constraint__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__constraint__ConstraintInfo_6, (MR_Integer) 4)));
#line 770 "constraint.m"
  }
#line 46 "constraint.m"
}

#line 43 "constraint.m"
void MR_CALL 
transform_hlds__constraint__constraint_info_init_5_p_0(
#line 43 "constraint.m"
  MR_Word transform_hlds__constraint__ModuleInfo_6,
#line 43 "constraint.m"
  MR_Word transform_hlds__constraint__VarTypes_7,
#line 43 "constraint.m"
  MR_Word transform_hlds__constraint__VarSet_8,
#line 43 "constraint.m"
  MR_Word transform_hlds__constraint__InstMap_9,
#line 43 "constraint.m"
  MR_Word * transform_hlds__constraint__ConstraintInfo_10)
#line 43 "constraint.m"
{
#line 764 "constraint.m"
  {
#line 764 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;

#line 765 "constraint.m"
    {
#line 765 "constraint.m"
      MR_Word base;
#line 765 "constraint.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 765 "constraint.m"
      *transform_hlds__constraint__ConstraintInfo_10 = base;
#line 765 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__constraint__ModuleInfo_6));
#line 765 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__constraint__VarTypes_7));
#line 765 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__constraint__VarSet_8));
#line 765 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__constraint__InstMap_9));
#line 765 "constraint.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 765 "constraint.m"
    }
#line 764 "constraint.m"
  }
#line 43 "constraint.m"
}

#line 40 "constraint.m"
void MR_CALL 
transform_hlds__constraint__propagate_constraints_in_goal_4_p_0(
#line 40 "constraint.m"
  MR_Word transform_hlds__constraint__Goal0_5,
#line 40 "constraint.m"
  MR_Word * transform_hlds__constraint__Goal_6,
#line 40 "constraint.m"
  MR_Word transform_hlds__constraint__STATE_VARIABLE_Info_0_9,
#line 40 "constraint.m"
  MR_Word * transform_hlds__constraint__STATE_VARIABLE_Info_10)
#line 40 "constraint.m"
{
#line 70 "constraint.m"
  {
#line 70 "constraint.m"
    MR_bool transform_hlds__constraint__succeeded;
#line 70 "constraint.m"
    MR_Word transform_hlds__constraint__Goal1_8;

#line 77 "constraint.m"
    {
#line 77 "constraint.m"
      transform_hlds__constraint__Goal1_8 = transform_hlds__constraint__strip_constraint_markers_1_f_0(transform_hlds__constraint__Goal0_5);
    }
#line 78 "constraint.m"
    {
#line 78 "constraint.m"
      transform_hlds__constraint__propagate_goal_5_p_0(transform_hlds__constraint__Goal1_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__constraint__Goal_6, transform_hlds__constraint__STATE_VARIABLE_Info_0_9, transform_hlds__constraint__STATE_VARIABLE_Info_10);
#line 78 "constraint.m"
      return;
    }
#line 70 "constraint.m"
  }
#line 40 "constraint.m"
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
