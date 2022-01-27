/*
** Automatically generated from `term_pass1.m'
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


/* :- module transform_hlds.term_pass1. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_pass1__init
ENDINIT
*/

#include "transform_hlds.term_pass1.mih"


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
#include "hlds.goal_util.mih"
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
#include "libs.lp.mih"
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
#include "float.mih"
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
#include "transform_hlds.term_traversal.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 144 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 147 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0;

#line 150 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 153 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 156 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 159 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0;

#line 162 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 168 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 174 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 177 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

#line 180 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

#line 183 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0;

#line 186 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 189 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2];

#line 192 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0;

#line 195 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 198 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1];

#line 201 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1;

#line 204 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1];

#line 207 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1];

#line 210 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0[2];

#line 213 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2];

#line 216 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2];

#line 219 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

#line 222 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3];

#line 225 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0;

#line 228 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1];

#line 231 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1;

#line 234 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1];

#line 237 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1];

#line 240 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0[2];

#line 243 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2];

#line 246 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2];

#line 249 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
#line 252 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 254 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

#line 257 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
#line 260 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 262 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 264 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

#line 267 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
#line 270 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 272 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

#line 275 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
#line 278 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 280 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 282 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

#line 146 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_54_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 146 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19);

#line 441 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__441__1_6_p_0(
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_53,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_54,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__3_55,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__4_56,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__5_57,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__6_58);

#line 426 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__426__1_2_p_0(
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_19,
#line 426 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_20);

#line 146 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__146__1_2_p_0(
#line 146 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_18,
#line 146 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19);

#line 79 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
#line 79 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
#line 79 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 79 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3);

#line 79 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
#line 79 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 79 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2);

#line 450 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
#line 450 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPIds_5,
#line 450 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Soln_6,
#line 450 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_7,
#line 450 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

#line 441 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
#line 441 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 441 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 441 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
#line 441 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
#line 441 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
#line 441 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
#line 441 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6);

#line 429 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
#line 429 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 429 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
#line 429 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
#line 429 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
#line 429 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
#line 429 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
#line 429 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7);

#line 382 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_9,
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Case_10,
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_15,
#line 382 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_16);

#line 353 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4(
#line 353 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 353 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 353 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 353 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 358 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3(
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 349 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2(
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 349 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 349 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1(
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 349 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 304 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_9,
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Goal_10,
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63,
#line 304 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_64);

#line 295 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(
#line 295 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_5,
#line 295 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_6,
#line 295 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_12,
#line 295 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_13);

#line 262 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
#line 262 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 262 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 262 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 262 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

#line 213 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(
#line 213 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 213 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_8,
#line 213 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_9,
#line 213 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
#line 213 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_11,
#line 213 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_12);

#line 200 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1(
#line 200 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 200 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 200 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 200 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 175 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_2,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__6_6,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_7,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9);

#line 152 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(
#line 152 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 152 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_8,
#line 152 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_9,
#line 152 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
#line 152 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_11,
#line 152 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_12);

#line 146 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
#line 146 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 146 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 146 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

#line 137 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
#line 137 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
#line 137 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 137 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3);

#line 408 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2(
#line 408 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 408 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 408 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

#line 426 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1(
#line 426 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 426 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 426 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);


static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_4[2][7];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_5[3][9];




static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_1[3]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__term_pass1__init_output_suppliers_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__term_pass1__convert_equations_2_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_5[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0)),
    ((MR_Box) (&transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 786 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 794 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 802 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 811 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 820 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 829 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 838 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 846 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 854 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 862 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 871 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 879 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 888 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0
  }
};

#line 896 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 904 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 913 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

#line 919 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0 = {
  (MR_String) "arg_size_ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 934 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 942 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 947 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1 = {
  (MR_String) "arg_size_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 962 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

#line 967 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1
};

#line 972 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1
  }
};

#line 986 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

#line 992 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 998 "transform_hlds.term_pass1.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_arg_size_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass1",
  (MR_String) "arg_size_result",
  {     transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0 },
  {     transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0
};

#line 1015 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

#line 1023 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 1030 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0 = {
  (MR_String) "term_pass1_ok",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 1045 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 1050 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1 = {
  (MR_String) "term_pass1_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 1065 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

#line 1070 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1
};

#line 1075 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1
  }
};

#line 1089 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

#line 1095 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1101 "transform_hlds.term_pass1.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_pass1_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass1____Unify____pass1_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass1____Compare____pass1_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass1",
  (MR_String) "pass1_result",
  {     transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0 },
  {     transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0
};

#line 1118 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
#line 1121 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 1123 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
#line 1125 "transform_hlds.term_pass1.c"
{
#line 1127 "transform_hlds.term_pass1.c"
  {
#line 1129 "transform_hlds.term_pass1.c"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 1132 "transform_hlds.term_pass1.c"
    {
#line 1134 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____arg_size_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
#line 1137 "transform_hlds.term_pass1.c"
    return transform_hlds__term_pass1__succeeded;
#line 1139 "transform_hlds.term_pass1.c"
  }
#line 1141 "transform_hlds.term_pass1.c"
}

#line 1144 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
#line 1147 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 1149 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 1151 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
#line 1153 "transform_hlds.term_pass1.c"
{
#line 1155 "transform_hlds.term_pass1.c"
  {
#line 1157 "transform_hlds.term_pass1.c"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

#line 1160 "transform_hlds.term_pass1.c"
    {
#line 1162 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1____Compare____arg_size_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
#line 1165 "transform_hlds.term_pass1.c"
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
#line 1167 "transform_hlds.term_pass1.c"
  }
#line 1169 "transform_hlds.term_pass1.c"
}

#line 1172 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
#line 1175 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 1177 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
#line 1179 "transform_hlds.term_pass1.c"
{
#line 1181 "transform_hlds.term_pass1.c"
  {
#line 1183 "transform_hlds.term_pass1.c"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 1186 "transform_hlds.term_pass1.c"
    {
#line 1188 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____pass1_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
#line 1191 "transform_hlds.term_pass1.c"
    return transform_hlds__term_pass1__succeeded;
#line 1193 "transform_hlds.term_pass1.c"
  }
#line 1195 "transform_hlds.term_pass1.c"
}

#line 1198 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
#line 1201 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 1203 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 1205 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
#line 1207 "transform_hlds.term_pass1.c"
{
#line 1209 "transform_hlds.term_pass1.c"
  {
#line 1211 "transform_hlds.term_pass1.c"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

#line 1214 "transform_hlds.term_pass1.c"
    {
#line 1216 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1____Compare____pass1_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
#line 1219 "transform_hlds.term_pass1.c"
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
#line 1221 "transform_hlds.term_pass1.c"
  }
#line 1223 "transform_hlds.term_pass1.c"
}

#line 146 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_54_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 146 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19)
#line 146 "term_pass1.m"
{
#line 146 "term_pass1.m"
  {
#line 146 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 146 "term_pass1.m"
    *transform_hlds__term_pass1__LambdaHeadVar__2_19 = (MR_Integer) 0;
#line 146 "term_pass1.m"
  }
#line 146 "term_pass1.m"
}

#line 441 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__441__1_6_p_0(
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_53,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_54,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__3_55,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__4_56,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__5_57,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__6_58)
#line 441 "term_pass1.m"
{
#line 441 "term_pass1.m"
  {
#line 441 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 441 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var_37;
#line 462 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var0_87;
#line 462 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv0_Var0_87;

#line 462 "term_pass1.m"
    {
#line 462 "term_pass1.m"
      transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__LambdaHeadVar__5_57, ((MR_Box) (transform_hlds__term_pass1__LambdaHeadVar__1_53)), &transform_hlds__term_pass1__conv0_Var0_87);
    }
#line 462 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 462 "term_pass1.m"
      {
#line 462 "term_pass1.m"
        transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
#line 462 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 462 "term_pass1.m"
      }
#line 462 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 463 "term_pass1.m"
      {
#line 463 "term_pass1.m"
        transform_hlds__term_pass1__Var_37 = transform_hlds__term_pass1__Var0_87;
#line 463 "term_pass1.m"
        *transform_hlds__term_pass1__LambdaHeadVar__6_58 = transform_hlds__term_pass1__LambdaHeadVar__5_57;
#line 463 "term_pass1.m"
        *transform_hlds__term_pass1__LambdaHeadVar__4_56 = transform_hlds__term_pass1__LambdaHeadVar__3_55;
#line 463 "term_pass1.m"
      }
#line 462 "term_pass1.m"
    else
#line 465 "term_pass1.m"
      {
#line 465 "term_pass1.m"
        {
#line 465 "term_pass1.m"
          mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Var_37, transform_hlds__term_pass1__LambdaHeadVar__3_55, transform_hlds__term_pass1__LambdaHeadVar__4_56);
        }
#line 466 "term_pass1.m"
        {
#line 466 "term_pass1.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__LambdaHeadVar__1_53)), ((MR_Box) (transform_hlds__term_pass1__Var_37)), transform_hlds__term_pass1__LambdaHeadVar__5_57, transform_hlds__term_pass1__LambdaHeadVar__6_58);
        }
#line 465 "term_pass1.m"
      }
#line 444 "term_pass1.m"
    {
#line 444 "term_pass1.m"
      MR_Word base;
#line 444 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "term_pass1.m"
      *transform_hlds__term_pass1__LambdaHeadVar__2_54 = base;
#line 444 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Var_37));
#line 444 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) -1.0000000000000000);
#line 444 "term_pass1.m"
    }
#line 441 "term_pass1.m"
  }
#line 441 "term_pass1.m"
}

#line 426 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__426__1_2_p_0(
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_19,
#line 426 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_20)
#line 426 "term_pass1.m"
{
#line 426 "term_pass1.m"
  {
#line 426 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 426 "term_pass1.m"
    {
#line 426 "term_pass1.m"
      MR_Word base;
#line 426 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "term_pass1.m"
      *transform_hlds__term_pass1__LambdaHeadVar__2_20 = base;
#line 426 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__LambdaHeadVar__1_19));
#line 426 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 426 "term_pass1.m"
    }
#line 426 "term_pass1.m"
  }
#line 426 "term_pass1.m"
}

#line 146 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__146__1_2_p_0(
#line 146 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_18,
#line 146 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19)
#line 146 "term_pass1.m"
{
#line 146 "term_pass1.m"
  {
#line 146 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 146 "term_pass1.m"
    {
#line 146 "term_pass1.m"
      transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_54_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass1__LambdaHeadVar__2_19);
    }
#line 146 "term_pass1.m"
  }
#line 146 "term_pass1.m"
}

#line 79 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
#line 79 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
#line 79 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 79 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3)
#line 79 "term_pass1.m"
{
#line 79 "term_pass1.m"
  {
#line 79 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 79 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_22 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;
#line 79 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_23 = (MR_Integer) transform_hlds__term_pass1__HeadVar__3_3;

#line 79 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_22 == transform_hlds__term_pass1__CastY_23);
#line 79 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 1416 "transform_hlds.term_pass1.c"
      *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "term_pass1.m"
    else
#line 79 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 79 "term_pass1.m"
      {
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 79 "term_pass1.m"
          {
#line 79 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));

#line 79 "term_pass1.m"
            {
#line 79 "term_pass1.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_28_28)), ((MR_Box) (transform_hlds__term_pass1__V_21_21)));
            }
#line 79 "term_pass1.m"
          }
#line 79 "term_pass1.m"
        else
#line 1443 "transform_hlds.term_pass1.c"
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "term_pass1.m"
      }
#line 79 "term_pass1.m"
    else
#line 79 "term_pass1.m"
      {
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 2)));
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 79 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1460 "transform_hlds.term_pass1.c"
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 1;
#line 79 "term_pass1.m"
        else
#line 79 "term_pass1.m"
          {
#line 79 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 79 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 79 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 2)));
#line 79 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_10_10;

#line 79 "term_pass1.m"
            {
#line 79 "term_pass1.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[6], &transform_hlds__term_pass1__V_10_10, ((MR_Box) (transform_hlds__term_pass1__V_31_31)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
            }
#line 1480 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_10_10 == (MR_Integer) 0);
#line 79 "term_pass1.m"
            transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
#line 79 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 79 "term_pass1.m"
              *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_10_10;
#line 79 "term_pass1.m"
            else
#line 79 "term_pass1.m"
              {
#line 79 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__V_11_11;

#line 79 "term_pass1.m"
                {
#line 79 "term_pass1.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], &transform_hlds__term_pass1__V_11_11, ((MR_Box) (transform_hlds__term_pass1__V_30_30)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
                }
#line 1500 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_11_11 == (MR_Integer) 0);
#line 79 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
#line 79 "term_pass1.m"
                if (transform_hlds__term_pass1__succeeded)
#line 79 "term_pass1.m"
                  *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_11_11;
#line 79 "term_pass1.m"
                else
#line 79 "term_pass1.m"
                  {
#line 79 "term_pass1.m"
                    {
#line 79 "term_pass1.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_29_29)), ((MR_Box) (transform_hlds__term_pass1__V_9_9)));
                    }
#line 79 "term_pass1.m"
                  }
#line 79 "term_pass1.m"
              }
#line 79 "term_pass1.m"
          }
#line 79 "term_pass1.m"
      }
#line 79 "term_pass1.m"
  }
#line 79 "term_pass1.m"
}

#line 79 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
#line 79 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 79 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2)
#line 79 "term_pass1.m"
{
#line 79 "term_pass1.m"
  {
#line 79 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 79 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_11 = (MR_Integer) transform_hlds__term_pass1__HeadVar__1_1;
#line 79 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_12 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;

#line 79 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_11 == transform_hlds__term_pass1__CastY_12);
#line 79 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 79 "term_pass1.m"
      transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 79 "term_pass1.m"
    else
#line 79 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 79 "term_pass1.m"
      {
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_13_13;
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_10_10;

#line 79 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 79 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 79 "term_pass1.m"
          {
#line 79 "term_pass1.m"
            transform_hlds__term_pass1__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 1575 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1577 "transform_hlds.term_pass1.c"
            {
#line 1579 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_pass1__V_9_9)), ((MR_Box) (transform_hlds__term_pass1__V_10_10)));
            }
#line 79 "term_pass1.m"
          }
#line 79 "term_pass1.m"
      }
#line 79 "term_pass1.m"
    else
#line 79 "term_pass1.m"
      {
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_14_14;
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_15_15;
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_16_16;
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 2)));
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_6_6;
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_7_7;
#line 79 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_8_8;

#line 79 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 79 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 79 "term_pass1.m"
          {
#line 79 "term_pass1.m"
            transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "term_pass1.m"
            transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "term_pass1.m"
            transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 2)));
#line 1621 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[6];
#line 1623 "transform_hlds.term_pass1.c"
            {
#line 1625 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
            }
#line 79 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 79 "term_pass1.m"
              {
#line 1632 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
#line 1634 "transform_hlds.term_pass1.c"
                {
#line 1636 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_pass1__V_4_4)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
                }
#line 79 "term_pass1.m"
                if (transform_hlds__term_pass1__succeeded)
#line 79 "term_pass1.m"
                  {
#line 1643 "transform_hlds.term_pass1.c"
                    transform_hlds__term_pass1__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1645 "transform_hlds.term_pass1.c"
                    {
#line 1647 "transform_hlds.term_pass1.c"
                      transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_pass1__V_5_5)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
                    }
#line 79 "term_pass1.m"
                  }
#line 79 "term_pass1.m"
              }
#line 79 "term_pass1.m"
          }
#line 79 "term_pass1.m"
      }
#line 79 "term_pass1.m"
    return transform_hlds__term_pass1__succeeded;
#line 79 "term_pass1.m"
  }
#line 79 "term_pass1.m"
}

#line 37 "term_pass1.m"
void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0(
#line 37 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
#line 37 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 37 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3)
#line 37 "term_pass1.m"
{
#line 37 "term_pass1.m"
  {
#line 37 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 37 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_17 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;
#line 37 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_18 = (MR_Integer) transform_hlds__term_pass1__HeadVar__3_3;

#line 37 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_17 == transform_hlds__term_pass1__CastY_18);
#line 37 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 1689 "transform_hlds.term_pass1.c"
      *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "term_pass1.m"
    else
#line 37 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 37 "term_pass1.m"
      {
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 37 "term_pass1.m"
          {
#line 37 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));

#line 37 "term_pass1.m"
            {
#line 37 "term_pass1.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_22_22)), ((MR_Box) (transform_hlds__term_pass1__V_16_16)));
            }
#line 37 "term_pass1.m"
          }
#line 37 "term_pass1.m"
        else
#line 1716 "transform_hlds.term_pass1.c"
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 2;
#line 37 "term_pass1.m"
      }
#line 37 "term_pass1.m"
    else
#line 37 "term_pass1.m"
      {
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1731 "transform_hlds.term_pass1.c"
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "term_pass1.m"
        else
#line 37 "term_pass1.m"
          {
#line 37 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 37 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 37 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_8_8;

#line 37 "term_pass1.m"
            {
#line 37 "term_pass1.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[5], &transform_hlds__term_pass1__V_8_8, ((MR_Box) (transform_hlds__term_pass1__V_24_24)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
            }
#line 1749 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_8_8 == (MR_Integer) 0);
#line 37 "term_pass1.m"
            transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
#line 37 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 37 "term_pass1.m"
              *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_8_8;
#line 37 "term_pass1.m"
            else
#line 37 "term_pass1.m"
              {
#line 37 "term_pass1.m"
                {
#line 37 "term_pass1.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_23_23)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
                }
#line 37 "term_pass1.m"
              }
#line 37 "term_pass1.m"
          }
#line 37 "term_pass1.m"
      }
#line 37 "term_pass1.m"
  }
#line 37 "term_pass1.m"
}

#line 37 "term_pass1.m"
MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0(
#line 37 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 37 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2)
#line 37 "term_pass1.m"
{
#line 37 "term_pass1.m"
  {
#line 37 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 37 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_9 = (MR_Integer) transform_hlds__term_pass1__HeadVar__1_1;
#line 37 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_10 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;

#line 37 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_9 == transform_hlds__term_pass1__CastY_10);
#line 37 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 37 "term_pass1.m"
      transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 37 "term_pass1.m"
    else
#line 37 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 37 "term_pass1.m"
      {
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_11_11;
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_8_8;

#line 37 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 37 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 37 "term_pass1.m"
          {
#line 37 "term_pass1.m"
            transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 1822 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1824 "transform_hlds.term_pass1.c"
            {
#line 1826 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_pass1__V_7_7)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
            }
#line 37 "term_pass1.m"
          }
#line 37 "term_pass1.m"
      }
#line 37 "term_pass1.m"
    else
#line 37 "term_pass1.m"
      {
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_12_12;
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_13_13;
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_5_5;
#line 37 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_6_6;

#line 37 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 37 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 37 "term_pass1.m"
          {
#line 37 "term_pass1.m"
            transform_hlds__term_pass1__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 37 "term_pass1.m"
            transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 1860 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[5];
#line 1862 "transform_hlds.term_pass1.c"
            {
#line 1864 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_5_5)));
            }
#line 37 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 37 "term_pass1.m"
              {
#line 1871 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
#line 1873 "transform_hlds.term_pass1.c"
                {
#line 1875 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_pass1__V_4_4)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
                }
#line 37 "term_pass1.m"
              }
#line 37 "term_pass1.m"
          }
#line 37 "term_pass1.m"
      }
#line 37 "term_pass1.m"
    return transform_hlds__term_pass1__succeeded;
#line 37 "term_pass1.m"
  }
#line 37 "term_pass1.m"
}

#line 450 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
#line 450 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPIds_5,
#line 450 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Soln_6,
#line 450 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_7,
#line 450 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
#line 450 "term_pass1.m"
{
#line 453 "term_pass1.m"
  {
#line 453 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 453 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 453 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__ICoeff_8;
#line 453 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var_9;
#line 453 "term_pass1.m"
    MR_Float transform_hlds__term_pass1__Coeff_10;
#line 454 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv0_Var_9;
#line 455 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv1_Coeff_10;

#line 454 "term_pass1.m"
    {
#line 454 "term_pass1.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_pass1__TypeInfo_12_12, transform_hlds__term_pass1__PPIds_5, ((MR_Box) (transform_hlds__term_pass1__PPId_7)), &transform_hlds__term_pass1__conv0_Var_9);
    }
#line 454 "term_pass1.m"
    transform_hlds__term_pass1__Var_9 = ((MR_Word) transform_hlds__term_pass1__conv0_Var_9);
#line 455 "term_pass1.m"
    {
#line 455 "term_pass1.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeInfo_12_12, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, transform_hlds__term_pass1__Soln_6, ((MR_Box) (transform_hlds__term_pass1__Var_9)), &transform_hlds__term_pass1__conv1_Coeff_10);
    }
#line 455 "term_pass1.m"
    transform_hlds__term_pass1__Coeff_10 = MR_unbox_float(transform_hlds__term_pass1__conv1_Coeff_10);
#line 456 "term_pass1.m"
    {
#line 456 "term_pass1.m"
      transform_hlds__term_pass1__ICoeff_8 = mercury__float__ceiling_to_int_1_f_0(transform_hlds__term_pass1__Coeff_10);
    }
#line 453 "term_pass1.m"
    {
#line 453 "term_pass1.m"
      MR_Word base;
#line 453 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 453 "term_pass1.m"
      *transform_hlds__term_pass1__HeadVar__4_4 = base;
#line 453 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_7));
#line 453 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__ICoeff_8));
#line 453 "term_pass1.m"
    }
#line 453 "term_pass1.m"
  }
#line 450 "term_pass1.m"
}

#line 441 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
#line 441 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 441 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 441 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
#line 441 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
#line 441 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
#line 441 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
#line 441 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6)
#line 441 "term_pass1.m"
{
#line 441 "term_pass1.m"
  {
#line 441 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 441 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv3_LambdaHeadVar__2_54;
#line 441 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv2_LambdaHeadVar__4_56;
#line 441 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_LambdaHeadVar__6_58;

#line 441 "term_pass1.m"
    {
#line 441 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__441__1_6_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv3_LambdaHeadVar__2_54, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3), &transform_hlds__term_pass1__conv2_LambdaHeadVar__4_56, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_5), &transform_hlds__term_pass1__conv1_LambdaHeadVar__6_58);
    }
#line 441 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv3_LambdaHeadVar__2_54));
#line 441 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_pass1__conv2_LambdaHeadVar__4_56));
#line 441 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_6 = ((MR_Box) (transform_hlds__term_pass1__conv1_LambdaHeadVar__6_58));
#line 441 "term_pass1.m"
  }
#line 441 "term_pass1.m"
}

#line 429 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
#line 429 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 429 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
#line 429 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
#line 429 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
#line 429 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
#line 429 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
#line 429 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7)
#line 429 "term_pass1.m"
{
#line 434 "term_pass1.m"
  while (MR_TRUE)
#line 434 "term_pass1.m"
    {
#line 434 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 434 "term_pass1.m"
      {
#line 434 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;

#line 434 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "term_pass1.m"
          {
#line 434 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6;
#line 434 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Varset_5 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
#line 434 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
#line 434 "term_pass1.m"
            transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 434 "term_pass1.m"
          }
#line 434 "term_pass1.m"
        else
#line 435 "term_pass1.m"
          {
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Path_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Paths_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ThisPPId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 0)));
#line 435 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__IntGamma_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 2)));
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 3)));
#line 435 "term_pass1.m"
            MR_Float transform_hlds__term_pass1__FloatGamma_27;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Eqn_28;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Coeffs_29;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ThisVar_30;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__RestCoeffs_31;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_47_47;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
#line 435 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;
#line 436 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 1)));
#line 436 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 4)));
#line 462 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Var0_87;
#line 462 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv0_Var0_87;
#line 446 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62;
#line 446 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63;

#line 437 "term_pass1.m"
            {
#line 437 "term_pass1.m"
              transform_hlds__term_pass1__FloatGamma_27 = mercury__float__float_1_f_0(transform_hlds__term_pass1__IntGamma_24);
            }
#line 462 "term_pass1.m"
            {
#line 462 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), &transform_hlds__term_pass1__conv0_Var0_87);
            }
#line 462 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 462 "term_pass1.m"
              {
#line 462 "term_pass1.m"
                transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
#line 462 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 462 "term_pass1.m"
              }
#line 462 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 463 "term_pass1.m"
              {
#line 463 "term_pass1.m"
                transform_hlds__term_pass1__ThisVar_30 = transform_hlds__term_pass1__Var0_87;
#line 463 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
#line 463 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
#line 463 "term_pass1.m"
              }
#line 462 "term_pass1.m"
            else
#line 465 "term_pass1.m"
              {
#line 465 "term_pass1.m"
                {
#line 465 "term_pass1.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__ThisVar_30, transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4, &transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45);
                }
#line 466 "term_pass1.m"
                {
#line 466 "term_pass1.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), ((MR_Box) (transform_hlds__term_pass1__ThisVar_30)), transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, &transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46);
                }
#line 465 "term_pass1.m"
              }
#line 440 "term_pass1.m"
            {
#line 440 "term_pass1.m"
              transform_hlds__term_pass1__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 0) = ((MR_Box) (transform_hlds__term_pass1__ThisVar_30));
#line 440 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 440 "term_pass1.m"
            }
#line 446 "term_pass1.m"
            {
#line 446 "term_pass1.m"
              mercury__list__map_foldl2_7_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1], (MR_Word) &transform_hlds__term_pass1_scalar_common_1[4], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[2], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[6], transform_hlds__term_pass1__PPIds_25, &transform_hlds__term_pass1__RestCoeffs_31, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45)), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46)), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
            }
#line 446 "term_pass1.m"
            transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62 = ((MR_Word) transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62);
#line 446 "term_pass1.m"
            transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63 = ((MR_Word) transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
#line 440 "term_pass1.m"
            {
#line 440 "term_pass1.m"
              transform_hlds__term_pass1__Coeffs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 0) = ((MR_Box) (transform_hlds__term_pass1__V_47_47));
#line 440 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 1) = ((MR_Box) (transform_hlds__term_pass1__RestCoeffs_31));
#line 440 "term_pass1.m"
            }
#line 438 "term_pass1.m"
            {
#line 438 "term_pass1.m"
              transform_hlds__term_pass1__Eqn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 438 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 0) = ((MR_Box) (transform_hlds__term_pass1__Coeffs_29));
#line 438 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 1) = ((MR_Box) ((MR_Integer) 2));
#line 438 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 2) = MR_box_float(transform_hlds__term_pass1__FloatGamma_27);
#line 438 "term_pass1.m"
            }
#line 447 "term_pass1.m"
            {
#line 447 "term_pass1.m"
              mercury__set__insert_3_p_0((MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0, ((MR_Box) (transform_hlds__term_pass1__Eqn_28)), transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6, &transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64);
            }
#line 448 "term_pass1.m"
            /* direct tailcall eliminated */
#line 448 "term_pass1.m"
            {
#line 448 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass1__Paths_18;
#line 448 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
#line 448 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
#line 448 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;

#line 448 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6;
#line 448 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4;
#line 448 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2;
#line 448 "term_pass1.m"
              transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__HeadVar__1__tmp_copy_1;
#line 448 "term_pass1.m"
            }
#line 448 "term_pass1.m"
            continue;
#line 435 "term_pass1.m"
          }
#line 434 "term_pass1.m"
        return transform_hlds__term_pass1__succeeded;
#line 434 "term_pass1.m"
      }
#line 434 "term_pass1.m"
      break;
#line 434 "term_pass1.m"
    }
#line 429 "term_pass1.m"
}

#line 382 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_9,
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Case_10,
#line 382 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_15,
#line 382 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_16)
#line 382 "term_pass1.m"
{
#line 386 "term_pass1.m"
  {
#line 386 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 386 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Case_10, (MR_Integer) 2)));
#line 387 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Case_10, (MR_Integer) 0)));
#line 387 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Case_10, (MR_Integer) 1)));

#line 388 "term_pass1.m"
    {
#line 388 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__PPId_8, transform_hlds__term_pass1__VarTypes_9, transform_hlds__term_pass1__Goal_14, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_15, transform_hlds__term_pass1__STATE_VARIABLE_Errors_16);
    }
#line 386 "term_pass1.m"
  }
#line 382 "term_pass1.m"
}

#line 353 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4(
#line 353 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 353 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 353 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 353 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 353 "term_pass1.m"
{
#line 353 "term_pass1.m"
  {
#line 353 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 353 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_16;

#line 353 "term_pass1.m"
    {
#line 353 "term_pass1.m"
      transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_16);
    }
#line 353 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_16));
#line 353 "term_pass1.m"
  }
#line 353 "term_pass1.m"
}

#line 358 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3(
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 358 "term_pass1.m"
{
#line 358 "term_pass1.m"
  {
#line 358 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 358 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_64;

#line 358 "term_pass1.m"
    {
#line 358 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_64);
    }
#line 358 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_64));
#line 358 "term_pass1.m"
  }
#line 358 "term_pass1.m"
}

#line 349 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2(
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 349 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 349 "term_pass1.m"
{
#line 349 "term_pass1.m"
  {
#line 349 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 349 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv2_STATE_VARIABLE_Errors_64;

#line 349 "term_pass1.m"
    {
#line 349 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv2_STATE_VARIABLE_Errors_64);
    }
#line 349 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv2_STATE_VARIABLE_Errors_64));
#line 349 "term_pass1.m"
  }
#line 349 "term_pass1.m"
}

#line 349 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1(
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 349 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 349 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 349 "term_pass1.m"
{
#line 349 "term_pass1.m"
  {
#line 349 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 349 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_64;

#line 349 "term_pass1.m"
    {
#line 349 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_64);
    }
#line 349 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_64));
#line 349 "term_pass1.m"
  }
#line 349 "term_pass1.m"
}

#line 304 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_9,
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Goal_10,
#line 304 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63,
#line 304 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_64)
#line 304 "term_pass1.m"
{
#line 308 "term_pass1.m"
  while (MR_TRUE)
#line 308 "term_pass1.m"
    {
#line 308 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 308 "term_pass1.m"
      {
#line 308 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;
#line 308 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_10, (MR_Integer) 0)));
#line 308 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_10, (MR_Integer) 1)));

#line 313 "term_pass1.m"
#line 313 "term_pass1.m"
        switch (MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_12)) {
#line 313 "term_pass1.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 313 "term_pass1.m"
          case (MR_Integer) 0:
#line 361 "term_pass1.m"
            {
#line 361 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__SubGoal_58 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_pass1__GoalExpr_12), (MR_Integer) 0);

#line 362 "term_pass1.m"
              /* direct tailcall eliminated */
#line 362 "term_pass1.m"
              {
#line 362 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Goal__tmp_copy_10 = transform_hlds__term_pass1__SubGoal_58;

#line 362 "term_pass1.m"
                transform_hlds__term_pass1__Goal_10 = transform_hlds__term_pass1__Goal__tmp_copy_10;
#line 362 "term_pass1.m"
              }
#line 362 "term_pass1.m"
              continue;
#line 361 "term_pass1.m"
            }
#line 313 "term_pass1.m"
            break;
#line 313 "term_pass1.m"
          case (MR_Integer) 1:
#line 311 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 313 "term_pass1.m"
            break;
#line 313 "term_pass1.m"
          case (MR_Integer) 2:
#line 314 "term_pass1.m"
            {
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__CallPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 0)));
#line 314 "term_pass1.m"
              MR_Integer transform_hlds__term_pass1__CallProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__CallPPId_25;
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__ProcInfo_27;
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TerminationInfo_28;
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Context_29;
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83;
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 3)));
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 4)));
#line 314 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 5)));
#line 316 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_26_26;

#line 315 "term_pass1.m"
              {
#line 315 "term_pass1.m"
                transform_hlds__term_pass1__CallPPId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_25, 0) = ((MR_Box) (transform_hlds__term_pass1__CallPredId_19));
#line 315 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_25, 1) = ((MR_Box) (transform_hlds__term_pass1__CallProcId_20));
#line 315 "term_pass1.m"
              }
#line 316 "term_pass1.m"
              {
#line 316 "term_pass1.m"
                hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__CallPPId_25, &transform_hlds__term_pass1__V_26_26, &transform_hlds__term_pass1__ProcInfo_27);
              }
#line 317 "term_pass1.m"
              {
#line 317 "term_pass1.m"
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_pass1__ProcInfo_27, &transform_hlds__term_pass1__TerminationInfo_28);
              }
#line 318 "term_pass1.m"
              {
#line 318 "term_pass1.m"
                transform_hlds__term_pass1__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_13);
              }
#line 324 "term_pass1.m"
              if ((transform_hlds__term_pass1__TerminationInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 324 "term_pass1.m"
              else
#line 324 "term_pass1.m"
                {
#line 324 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__TerminationInfo_28, (MR_Integer) 0)));

#line 324 "term_pass1.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_pass1__V_113_113)) == (MR_mktag((MR_Integer) 1))))
#line 320 "term_pass1.m"
                    {
#line 320 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__CanLoopErrorKind_31;
#line 320 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__CanLoopError_32;

#line 321 "term_pass1.m"
                      {
#line 321 "term_pass1.m"
                        transform_hlds__term_pass1__CanLoopErrorKind_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopErrorKind_31, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 321 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopErrorKind_31, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_25));
#line 321 "term_pass1.m"
                      }
#line 322 "term_pass1.m"
                      {
#line 322 "term_pass1.m"
                        transform_hlds__term_pass1__CanLoopError_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopError_32, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_29));
#line 322 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopError_32, 1) = ((MR_Box) (transform_hlds__term_pass1__CanLoopErrorKind_31));
#line 322 "term_pass1.m"
                      }
#line 323 "term_pass1.m"
                      {
#line 323 "term_pass1.m"
                        mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, ((MR_Box) (transform_hlds__term_pass1__CanLoopError_32)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63, &transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83);
                      }
#line 320 "term_pass1.m"
                    }
#line 324 "term_pass1.m"
                  else
#line 325 "term_pass1.m"
                    transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 324 "term_pass1.m"
                }
#line 329 "term_pass1.m"
              {
#line 329 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_pass1__Args_21, transform_hlds__term_pass1__VarTypes_9);
              }
#line 329 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 330 "term_pass1.m"
                {
#line 330 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HigherOrderErrorKind_34;
#line 330 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HigherOrderError_35;

#line 330 "term_pass1.m"
                  {
#line 330 "term_pass1.m"
                    transform_hlds__term_pass1__HigherOrderErrorKind_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "term_pass1.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderErrorKind_34, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 330 "term_pass1.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderErrorKind_34, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_25));
#line 330 "term_pass1.m"
                  }
#line 331 "term_pass1.m"
                  {
#line 331 "term_pass1.m"
                    transform_hlds__term_pass1__HigherOrderError_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderError_35, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_29));
#line 331 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderError_35, 1) = ((MR_Box) (transform_hlds__term_pass1__HigherOrderErrorKind_34));
#line 331 "term_pass1.m"
                  }
#line 332 "term_pass1.m"
                  {
#line 332 "term_pass1.m"
                    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, ((MR_Box) (transform_hlds__term_pass1__HigherOrderError_35)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83, transform_hlds__term_pass1__STATE_VARIABLE_Errors_64);
                  }
#line 330 "term_pass1.m"
                }
#line 329 "term_pass1.m"
              else
#line 329 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83;
#line 314 "term_pass1.m"
            }
#line 313 "term_pass1.m"
            break;
#line 313 "term_pass1.m"
          case (MR_Integer) 3:
#line 313 "term_pass1.m"
#line 313 "term_pass1.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 0)))) {
#line 313 "term_pass1.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 313 "term_pass1.m"
              case (MR_Integer) 0:
#line 340 "term_pass1.m"
                {
#line 340 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Error_48;
#line 340 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Context_85;

#line 342 "term_pass1.m"
                  {
#line 342 "term_pass1.m"
                    transform_hlds__term_pass1__Context_85 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_13);
                  }
#line 343 "term_pass1.m"
                  {
#line 343 "term_pass1.m"
                    transform_hlds__term_pass1__Error_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_48, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_85));
#line 343 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 343 "term_pass1.m"
                  }
#line 344 "term_pass1.m"
                  {
#line 344 "term_pass1.m"
                    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, ((MR_Box) (transform_hlds__term_pass1__Error_48)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63, transform_hlds__term_pass1__STATE_VARIABLE_Errors_64);
                  }
#line 340 "term_pass1.m"
                }
#line 313 "term_pass1.m"
                break;
#line 313 "term_pass1.m"
              case (MR_Integer) 1:
#line 337 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 313 "term_pass1.m"
                break;
#line 313 "term_pass1.m"
              case (MR_Integer) 2:
#line 348 "term_pass1.m"
                {
#line 348 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 348 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_77_77;
#line 346 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 349 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_64;

#line 349 "term_pass1.m"
                  {
#line 349 "term_pass1.m"
                    transform_hlds__term_pass1__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0]));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
#line 349 "term_pass1.m"
                  }
#line 349 "term_pass1.m"
                  {
#line 349 "term_pass1.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_77_77, transform_hlds__term_pass1__Goals_50, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_64);
                  }
#line 349 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_64);
#line 348 "term_pass1.m"
                }
#line 313 "term_pass1.m"
                break;
#line 313 "term_pass1.m"
              case (MR_Integer) 3:
#line 348 "term_pass1.m"
                {
#line 348 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Goals_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 348 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_110_110;
#line 349 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv3_STATE_VARIABLE_Errors_64;

#line 349 "term_pass1.m"
                  {
#line 349 "term_pass1.m"
                    transform_hlds__term_pass1__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0]));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 349 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
#line 349 "term_pass1.m"
                  }
#line 349 "term_pass1.m"
                  {
#line 349 "term_pass1.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_110_110, transform_hlds__term_pass1__Goals_109, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv3_STATE_VARIABLE_Errors_64);
                  }
#line 349 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv3_STATE_VARIABLE_Errors_64);
#line 348 "term_pass1.m"
                }
#line 313 "term_pass1.m"
                break;
#line 313 "term_pass1.m"
              case (MR_Integer) 4:
#line 352 "term_pass1.m"
                {
#line 352 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Cases_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 3)));
#line 352 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_75_75;
#line 352 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 352 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 353 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv7_STATE_VARIABLE_Errors_64;

#line 353 "term_pass1.m"
                  {
#line 353 "term_pass1.m"
                    transform_hlds__term_pass1__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 353 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[1]));
#line 353 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4));
#line 353 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 353 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
#line 353 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 353 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
#line 353 "term_pass1.m"
                  }
#line 353 "term_pass1.m"
                  {
#line 353 "term_pass1.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_75_75, transform_hlds__term_pass1__Cases_53, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv7_STATE_VARIABLE_Errors_64);
                  }
#line 353 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv7_STATE_VARIABLE_Errors_64);
#line 352 "term_pass1.m"
                }
#line 313 "term_pass1.m"
                break;
#line 313 "term_pass1.m"
              case (MR_Integer) 5:
#line 364 "term_pass1.m"
                {
#line 364 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Reason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 364 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__SubGoal_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__FGT_61;
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_60_60;

#line 366 "term_pass1.m"
                  transform_hlds__term_pass1__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_pass1__Reason_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_59, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 366 "term_pass1.m"
                  if (transform_hlds__term_pass1__succeeded)
#line 366 "term_pass1.m"
                    {
#line 366 "term_pass1.m"
                      transform_hlds__term_pass1__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_59, (MR_Integer) 1)));
#line 366 "term_pass1.m"
                      transform_hlds__term_pass1__FGT_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_59, (MR_Integer) 2)));
#line 368 "term_pass1.m"
#line 368 "term_pass1.m"
                      switch (transform_hlds__term_pass1__FGT_61) {
#line 368 "term_pass1.m"
                        default:
#line 368 "term_pass1.m"
                          transform_hlds__term_pass1__succeeded = MR_FALSE;
#line 368 "term_pass1.m"
                          break;
#line 368 "term_pass1.m"
                        case (MR_Integer) 1:
#line 367 "term_pass1.m"
                          transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 368 "term_pass1.m"
                          break;
#line 368 "term_pass1.m"
                        case (MR_Integer) 2:
#line 368 "term_pass1.m"
                          transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 368 "term_pass1.m"
                          break;
#line 368 "term_pass1.m"
                      }
#line 366 "term_pass1.m"
                    }
#line 365 "term_pass1.m"
                  if (transform_hlds__term_pass1__succeeded)
#line 365 "term_pass1.m"
                    *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 365 "term_pass1.m"
                  else
#line 374 "term_pass1.m"
                    {
#line 374 "term_pass1.m"
                      /* direct tailcall eliminated */
#line 374 "term_pass1.m"
                      {
#line 374 "term_pass1.m"
                        MR_Word transform_hlds__term_pass1__Goal__tmp_copy_10 = transform_hlds__term_pass1__SubGoal_87;

#line 374 "term_pass1.m"
                        transform_hlds__term_pass1__Goal_10 = transform_hlds__term_pass1__Goal__tmp_copy_10;
#line 374 "term_pass1.m"
                      }
#line 374 "term_pass1.m"
                      continue;
#line 374 "term_pass1.m"
                    }
#line 364 "term_pass1.m"
                }
#line 313 "term_pass1.m"
                break;
#line 313 "term_pass1.m"
              case (MR_Integer) 6:
#line 356 "term_pass1.m"
                {
#line 356 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Cond_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 356 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Then_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 3)));
#line 356 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Else_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 4)));
#line 356 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_70_70;
#line 356 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_71_71;
#line 356 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_73_73;
#line 356 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Goals_86;
#line 356 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 358 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv5_STATE_VARIABLE_Errors_64;

#line 357 "term_pass1.m"
                  {
#line 357 "term_pass1.m"
                    transform_hlds__term_pass1__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_71_71, 0) = ((MR_Box) (transform_hlds__term_pass1__Else_57));
#line 357 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "term_pass1.m"
                  }
#line 357 "term_pass1.m"
                  {
#line 357 "term_pass1.m"
                    transform_hlds__term_pass1__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_70_70, 0) = ((MR_Box) (transform_hlds__term_pass1__Then_56));
#line 357 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_70_70, 1) = ((MR_Box) (transform_hlds__term_pass1__V_71_71));
#line 357 "term_pass1.m"
                  }
#line 357 "term_pass1.m"
                  {
#line 357 "term_pass1.m"
                    transform_hlds__term_pass1__Goals_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_86, 0) = ((MR_Box) (transform_hlds__term_pass1__Cond_55));
#line 357 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_86, 1) = ((MR_Box) (transform_hlds__term_pass1__V_70_70));
#line 357 "term_pass1.m"
                  }
#line 358 "term_pass1.m"
                  {
#line 358 "term_pass1.m"
                    transform_hlds__term_pass1__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 358 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0]));
#line 358 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3));
#line 358 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 358 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
#line 358 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 358 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
#line 358 "term_pass1.m"
                  }
#line 358 "term_pass1.m"
                  {
#line 358 "term_pass1.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_73_73, transform_hlds__term_pass1__Goals_86, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_Errors_64);
                  }
#line 358 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv5_STATE_VARIABLE_Errors_64);
#line 356 "term_pass1.m"
                }
#line 313 "term_pass1.m"
                break;
#line 313 "term_pass1.m"
              case (MR_Integer) 7:
#line 378 "term_pass1.m"
                {
#line 379 "term_pass1.m"
                  {
#line 379 "term_pass1.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.check_goal_non_term_calls\'/6", (MR_String) "shorthand");
#line 379 "term_pass1.m"
                    return;
                  }
#line 378 "term_pass1.m"
                }
#line 313 "term_pass1.m"
                break;
#line 313 "term_pass1.m"
            }
#line 313 "term_pass1.m"
            break;
#line 313 "term_pass1.m"
        }
#line 308 "term_pass1.m"
      }
#line 308 "term_pass1.m"
      break;
#line 308 "term_pass1.m"
    }
#line 304 "term_pass1.m"
}

#line 295 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(
#line 295 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_5,
#line 295 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_6,
#line 295 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_12,
#line 295 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_13)
#line 295 "term_pass1.m"
{
#line 298 "term_pass1.m"
  {
#line 298 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 298 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ProcInfo_9;
#line 298 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_10;
#line 298 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__VarTypes_11;
#line 299 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_8_8;

#line 299 "term_pass1.m"
    {
#line 299 "term_pass1.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_5, transform_hlds__term_pass1__PPId_6, &transform_hlds__term_pass1__V_8_8, &transform_hlds__term_pass1__ProcInfo_9);
    }
#line 300 "term_pass1.m"
    {
#line 300 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_9, &transform_hlds__term_pass1__Goal_10);
    }
#line 301 "term_pass1.m"
    {
#line 301 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_9, &transform_hlds__term_pass1__VarTypes_11);
    }
#line 302 "term_pass1.m"
    {
#line 302 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(transform_hlds__term_pass1__ModuleInfo_5, transform_hlds__term_pass1__PPId_6, transform_hlds__term_pass1__VarTypes_11, transform_hlds__term_pass1__Goal_10, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_12, transform_hlds__term_pass1__STATE_VARIABLE_Errors_13);
    }
#line 298 "term_pass1.m"
  }
#line 295 "term_pass1.m"
}

#line 262 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
#line 262 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 262 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 262 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 262 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
#line 262 "term_pass1.m"
{
#line 265 "term_pass1.m"
  {
#line 265 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 265 "term_pass1.m"
    if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "term_pass1.m"
      if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "term_pass1.m"
        *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "term_pass1.m"
      else
#line 268 "term_pass1.m"
        {
#line 268 "term_pass1.m"
          *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 269 "term_pass1.m"
          {
#line 269 "term_pass1.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
#line 269 "term_pass1.m"
            return;
          }
#line 268 "term_pass1.m"
        }
#line 265 "term_pass1.m"
    else
#line 265 "term_pass1.m"
      {
#line 265 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 265 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));

#line 265 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "term_pass1.m"
          {
#line 266 "term_pass1.m"
            *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "term_pass1.m"
            {
#line 267 "term_pass1.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
#line 267 "term_pass1.m"
              return;
            }
#line 266 "term_pass1.m"
          }
#line 265 "term_pass1.m"
        else
#line 272 "term_pass1.m"
          {
#line 272 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplier0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 272 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSuppliers0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 272 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplier_23;
#line 272 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSuppliers_24;

#line 273 "term_pass1.m"
            {
#line 273 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__HeadVar__2_2, ((MR_Box) (transform_hlds__term_pass1__V_27_27)));
            }
#line 273 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 274 "term_pass1.m"
              transform_hlds__term_pass1__OutputSupplier_23 = (MR_Integer) 1;
#line 273 "term_pass1.m"
            else
#line 279 "term_pass1.m"
              transform_hlds__term_pass1__OutputSupplier_23 = transform_hlds__term_pass1__OutputSupplier0_21;
#line 281 "term_pass1.m"
            {
#line 281 "term_pass1.m"
              transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__V_26_26, transform_hlds__term_pass1__HeadVar__2_2, transform_hlds__term_pass1__OutputSuppliers0_22, &transform_hlds__term_pass1__OutputSuppliers_24);
            }
#line 272 "term_pass1.m"
            {
#line 272 "term_pass1.m"
              MR_Word base;
#line 272 "term_pass1.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "term_pass1.m"
              *transform_hlds__term_pass1__HeadVar__4_4 = base;
#line 272 "term_pass1.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplier_23));
#line 272 "term_pass1.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_24));
#line 272 "term_pass1.m"
            }
#line 272 "term_pass1.m"
          }
#line 265 "term_pass1.m"
      }
#line 265 "term_pass1.m"
  }
#line 262 "term_pass1.m"
}

#line 213 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(
#line 213 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 213 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_8,
#line 213 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_9,
#line 213 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
#line 213 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_11,
#line 213 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_12)
#line 213 "term_pass1.m"
{
#line 217 "term_pass1.m"
  {
#line 217 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_47_47;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeInfo_48_48;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_49_49;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__PredInfo_13;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ProcInfo_14;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Context_15;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Args_16;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ArgModes_17;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__VarTypes_18;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal0_19;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_20;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__EmptyMap_21;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__FunctorInfo_22;
#line 217 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__MaxErrors_23;
#line 217 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__MaxPaths_24;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Params_25;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__InVars_26;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__OutVars_27;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Path0_28;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__PathSet0_29;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Info0_30;
#line 217 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Info_31;

#line 218 "term_pass1.m"
    {
#line 218 "term_pass1.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__PPId_9, &transform_hlds__term_pass1__PredInfo_13, &transform_hlds__term_pass1__ProcInfo_14);
    }
#line 219 "term_pass1.m"
    {
#line 219 "term_pass1.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass1__PredInfo_13, &transform_hlds__term_pass1__Context_15);
    }
#line 220 "term_pass1.m"
    {
#line 220 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__Args_16);
    }
#line 221 "term_pass1.m"
    {
#line 221 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__ArgModes_17);
    }
#line 222 "term_pass1.m"
    {
#line 222 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__VarTypes_18);
    }
#line 223 "term_pass1.m"
    {
#line 223 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__Goal0_19);
    }
#line 228 "term_pass1.m"
    {
#line 228 "term_pass1.m"
      transform_hlds__term_pass1__Goal_20 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_pass1__Goal0_19);
    }
#line 3247 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3249 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeInfo_48_48 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0];
#line 229 "term_pass1.m"
    {
#line 229 "term_pass1.m"
      mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_47_47, transform_hlds__term_pass1__TypeInfo_48_48, &transform_hlds__term_pass1__EmptyMap_21);
    }
#line 230 "term_pass1.m"
    transform_hlds__term_pass1__FunctorInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_8, (MR_Integer) 0)));
#line 230 "term_pass1.m"
    transform_hlds__term_pass1__MaxErrors_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_8, (MR_Integer) 1)));
#line 230 "term_pass1.m"
    transform_hlds__term_pass1__MaxPaths_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_8, (MR_Integer) 2)));
#line 231 "term_pass1.m"
    {
#line 231 "term_pass1.m"
      transform_hlds__term_traversal__init_term_traversal_params_9_p_0(transform_hlds__term_pass1__FunctorInfo_22, transform_hlds__term_pass1__PPId_9, transform_hlds__term_pass1__Context_15, transform_hlds__term_pass1__VarTypes_18, transform_hlds__term_pass1__OutputSupplierMap0_10, transform_hlds__term_pass1__EmptyMap_21, transform_hlds__term_pass1__MaxErrors_23, transform_hlds__term_pass1__MaxPaths_24, &transform_hlds__term_pass1__Params_25);
    }
#line 234 "term_pass1.m"
    {
#line 234 "term_pass1.m"
      transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__ArgModes_17, transform_hlds__term_pass1__Args_16, &transform_hlds__term_pass1__InVars_26, &transform_hlds__term_pass1__OutVars_27);
    }
#line 235 "term_pass1.m"
    {
#line 235 "term_pass1.m"
      transform_hlds__term_pass1__Path0_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 235 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_9));
#line 235 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 2) = ((MR_Box) ((MR_Integer) 0));
#line 235 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 4) = ((MR_Box) (transform_hlds__term_pass1__OutVars_27));
#line 235 "term_pass1.m"
    }
#line 3288 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 236 "term_pass1.m"
    {
#line 236 "term_pass1.m"
      transform_hlds__term_pass1__PathSet0_29 = mercury__set__make_singleton_set_1_f_0(transform_hlds__term_pass1__TypeCtorInfo_49_49, ((MR_Box) (transform_hlds__term_pass1__Path0_28)));
    }
#line 237 "term_pass1.m"
    {
#line 237 "term_pass1.m"
      transform_hlds__term_pass1__Info0_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 237 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_30, 0) = ((MR_Box) (transform_hlds__term_pass1__PathSet0_29));
#line 237 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "term_pass1.m"
    }
#line 238 "term_pass1.m"
    {
#line 238 "term_pass1.m"
      transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__Params_25, transform_hlds__term_pass1__Goal_20, transform_hlds__term_pass1__Info0_30, &transform_hlds__term_pass1__Info_31);
    }
#line 257 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Info_31)) == (MR_mktag((MR_Integer) 1))))
#line 258 "term_pass1.m"
      {
#line 258 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Errors_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_31, (MR_Integer) 0)));

#line 258 "term_pass1.m"
        *transform_hlds__term_pass1__TermErrors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_31, (MR_Integer) 1)));
#line 259 "term_pass1.m"
        {
#line 259 "term_pass1.m"
          MR_Word base;
#line 259 "term_pass1.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 259 "term_pass1.m"
          *transform_hlds__term_pass1__Result_11 = base;
#line 259 "term_pass1.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_41));
#line 259 "term_pass1.m"
        }
#line 258 "term_pass1.m"
      }
#line 257 "term_pass1.m"
    else
#line 241 "term_pass1.m"
      {
#line 241 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Paths_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_31, (MR_Integer) 0)));
#line 241 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PathList_33;
#line 241 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__AllActiveVars_34;
#line 241 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSuppliers0_35;
#line 241 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSuppliers_36;
#line 241 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_37;
#line 241 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__SubsetErrors_38;
#line 244 "term_pass1.m"
        MR_Box transform_hlds__term_pass1__conv0_OutputSuppliers0_35;

#line 241 "term_pass1.m"
        *transform_hlds__term_pass1__TermErrors_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_31, (MR_Integer) 1)));
#line 242 "term_pass1.m"
        {
#line 242 "term_pass1.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_49_49, transform_hlds__term_pass1__Paths_32, &transform_hlds__term_pass1__PathList_33);
        }
#line 243 "term_pass1.m"
        {
#line 243 "term_pass1.m"
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_pass1__PathList_33, &transform_hlds__term_pass1__AllActiveVars_34);
        }
#line 244 "term_pass1.m"
        {
#line 244 "term_pass1.m"
          mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_47_47, transform_hlds__term_pass1__TypeInfo_48_48, transform_hlds__term_pass1__OutputSupplierMap0_10, ((MR_Box) (transform_hlds__term_pass1__PPId_9)), &transform_hlds__term_pass1__conv0_OutputSuppliers0_35);
        }
#line 244 "term_pass1.m"
        transform_hlds__term_pass1__OutputSuppliers0_35 = ((MR_Word) transform_hlds__term_pass1__conv0_OutputSuppliers0_35);
#line 245 "term_pass1.m"
        {
#line 245 "term_pass1.m"
          transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__Args_16, transform_hlds__term_pass1__AllActiveVars_34, transform_hlds__term_pass1__OutputSuppliers0_35, &transform_hlds__term_pass1__OutputSuppliers_36);
        }
#line 247 "term_pass1.m"
        {
#line 247 "term_pass1.m"
          mercury__map__det_update_4_p_0(transform_hlds__term_pass1__TypeCtorInfo_47_47, transform_hlds__term_pass1__TypeInfo_48_48, ((MR_Box) (transform_hlds__term_pass1__PPId_9)), ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_36)), transform_hlds__term_pass1__OutputSupplierMap0_10, &transform_hlds__term_pass1__OutputSupplierMap_37);
        }
#line 249 "term_pass1.m"
        {
#line 249 "term_pass1.m"
          transform_hlds__term_pass1__succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__AllActiveVars_34, transform_hlds__term_pass1__InVars_26);
        }
#line 249 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 250 "term_pass1.m"
          transform_hlds__term_pass1__SubsetErrors_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 249 "term_pass1.m"
        else
#line 252 "term_pass1.m"
          {
#line 252 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__SubsetErrorKind_39;
#line 252 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__SubsetError_40;

#line 252 "term_pass1.m"
            {
#line 252 "term_pass1.m"
              transform_hlds__term_pass1__SubsetErrorKind_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 252 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 252 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 1) = ((MR_Box) (transform_hlds__term_pass1__PPId_9));
#line 252 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 2) = ((MR_Box) (transform_hlds__term_pass1__AllActiveVars_34));
#line 252 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 3) = ((MR_Box) (transform_hlds__term_pass1__InVars_26));
#line 252 "term_pass1.m"
            }
#line 253 "term_pass1.m"
            {
#line 253 "term_pass1.m"
              transform_hlds__term_pass1__SubsetError_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetError_40, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_15));
#line 253 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetError_40, 1) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrorKind_39));
#line 253 "term_pass1.m"
            }
#line 254 "term_pass1.m"
            {
#line 254 "term_pass1.m"
              transform_hlds__term_pass1__SubsetErrors_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_38, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetError_40));
#line 254 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "term_pass1.m"
            }
#line 252 "term_pass1.m"
          }
#line 256 "term_pass1.m"
        {
#line 256 "term_pass1.m"
          MR_Word base;
#line 256 "term_pass1.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 256 "term_pass1.m"
          *transform_hlds__term_pass1__Result_11 = base;
#line 256 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PathList_33));
#line 256 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_37));
#line 256 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_38));
#line 256 "term_pass1.m"
        }
#line 241 "term_pass1.m"
      }
#line 217 "term_pass1.m"
  }
#line 213 "term_pass1.m"
}

#line 200 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1(
#line 200 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 200 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 200 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 200 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 200 "term_pass1.m"
{
#line 200 "term_pass1.m"
  {
#line 200 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 200 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_13;

#line 200 "term_pass1.m"
    {
#line 200 "term_pass1.m"
      transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_13);
    }
#line 200 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_13));
#line 200 "term_pass1.m"
  }
#line 200 "term_pass1.m"
}

#line 175 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_2,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__6_6,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_7,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9)
#line 175 "term_pass1.m"
{
#line 181 "term_pass1.m"
  while (MR_TRUE)
#line 181 "term_pass1.m"
    {
#line 181 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 181 "term_pass1.m"
      {
#line 181 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;

#line 181 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "term_pass1.m"
          {
#line 182 "term_pass1.m"
            {
#line 182 "term_pass1.m"
              MR_Word base;
#line 182 "term_pass1.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 182 "term_pass1.m"
              *transform_hlds__term_pass1__Result_7 = base;
#line 182 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__5_5));
#line 182 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__4_4));
#line 182 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__6_6));
#line 182 "term_pass1.m"
            }
#line 181 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8;
#line 181 "term_pass1.m"
          }
#line 181 "term_pass1.m"
        else
#line 184 "term_pass1.m"
          {
#line 184 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__TypeCtorInfo_48_48;
#line 184 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 184 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 184 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Result1_28;
#line 184 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ProcTermErrors_29;
#line 184 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__MaxErrors_31;
#line 184 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_42_42;
#line 184 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43;
#line 188 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_30_30;
#line 188 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__V_32_32;

#line 185 "term_pass1.m"
            {
#line 185 "term_pass1.m"
              transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(transform_hlds__term_pass1__ModuleInfo_1, transform_hlds__term_pass1__PassInfo_2, transform_hlds__term_pass1__PPId_21, transform_hlds__term_pass1__HeadVar__4_4, &transform_hlds__term_pass1__Result1_28, &transform_hlds__term_pass1__ProcTermErrors_29);
            }
#line 3580 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 187 "term_pass1.m"
            {
#line 187 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_42_42 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8, transform_hlds__term_pass1__ProcTermErrors_29);
            }
#line 188 "term_pass1.m"
            transform_hlds__term_pass1__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 0)));
#line 188 "term_pass1.m"
            transform_hlds__term_pass1__MaxErrors_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 1)));
#line 188 "term_pass1.m"
            transform_hlds__term_pass1__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 2)));
#line 189 "term_pass1.m"
            {
#line 189 "term_pass1.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__MaxErrors_31, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_42_42, &transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43);
            }
#line 203 "term_pass1.m"
            if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result1_28)) == (MR_mktag((MR_Integer) 1))))
#line 191 "term_pass1.m"
              {
#line 191 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__OtherTermErrors_34;
#line 191 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__V_45_45;
#line 200 "term_pass1.m"
                MR_Box transform_hlds__term_pass1__conv1_OtherTermErrors_34;

#line 192 "term_pass1.m"
                *transform_hlds__term_pass1__Result_7 = transform_hlds__term_pass1__Result1_28;
#line 200 "term_pass1.m"
                {
#line 200 "term_pass1.m"
                  transform_hlds__term_pass1__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 200 "term_pass1.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[1]));
#line 200 "term_pass1.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1));
#line 200 "term_pass1.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 200 "term_pass1.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_1));
#line 200 "term_pass1.m"
                }
#line 200 "term_pass1.m"
                {
#line 200 "term_pass1.m"
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_45_45, transform_hlds__term_pass1__PPIds_22, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_pass1__conv1_OtherTermErrors_34);
                }
#line 200 "term_pass1.m"
                transform_hlds__term_pass1__OtherTermErrors_34 = ((MR_Word) transform_hlds__term_pass1__conv1_OtherTermErrors_34);
#line 202 "term_pass1.m"
                {
#line 202 "term_pass1.m"
                  mercury__list__append_3_p_1(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__OtherTermErrors_34, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9);
                }
#line 191 "term_pass1.m"
              }
#line 203 "term_pass1.m"
            else
#line 204 "term_pass1.m"
              {
#line 204 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Paths1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_28, (MR_Integer) 0)));
#line 204 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__OutputSupplierMap1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_28, (MR_Integer) 1)));
#line 204 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__SubsetErrors1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_28, (MR_Integer) 2)));
#line 204 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Paths_38;
#line 204 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__SubsetErrors_39;

#line 205 "term_pass1.m"
                {
#line 205 "term_pass1.m"
                  transform_hlds__term_pass1__Paths_38 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_pass1__HeadVar__5_5, transform_hlds__term_pass1__Paths1_35);
                }
#line 206 "term_pass1.m"
                {
#line 206 "term_pass1.m"
                  transform_hlds__term_pass1__SubsetErrors_39 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__HeadVar__6_6, transform_hlds__term_pass1__SubsetErrors1_37);
                }
#line 207 "term_pass1.m"
                /* direct tailcall eliminated */
#line 207 "term_pass1.m"
                {
#line 207 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__3__tmp_copy_3 = transform_hlds__term_pass1__PPIds_22;
#line 207 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__4__tmp_copy_4 = transform_hlds__term_pass1__OutputSupplierMap1_36;
#line 207 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__5__tmp_copy_5 = transform_hlds__term_pass1__Paths_38;
#line 207 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__6__tmp_copy_6 = transform_hlds__term_pass1__SubsetErrors_39;
#line 207 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_8 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43;

#line 207 "term_pass1.m"
                  transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_8;
#line 207 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__6_6 = transform_hlds__term_pass1__HeadVar__6__tmp_copy_6;
#line 207 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__5_5 = transform_hlds__term_pass1__HeadVar__5__tmp_copy_5;
#line 207 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__4_4 = transform_hlds__term_pass1__HeadVar__4__tmp_copy_4;
#line 207 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__3_3 = transform_hlds__term_pass1__HeadVar__3__tmp_copy_3;
#line 207 "term_pass1.m"
                }
#line 207 "term_pass1.m"
                continue;
#line 204 "term_pass1.m"
              }
#line 184 "term_pass1.m"
          }
#line 181 "term_pass1.m"
      }
#line 181 "term_pass1.m"
      break;
#line 181 "term_pass1.m"
    }
#line 175 "term_pass1.m"
}

#line 152 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(
#line 152 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 152 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_8,
#line 152 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_9,
#line 152 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
#line 152 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_11,
#line 152 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_12)
#line 152 "term_pass1.m"
{
#line 157 "term_pass1.m"
  while (MR_TRUE)
#line 157 "term_pass1.m"
    {
#line 157 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 157 "term_pass1.m"
      {
#line 157 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;
#line 157 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Result0_13;
#line 157 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TermErrors0_14;

#line 158 "term_pass1.m"
        {
#line 158 "term_pass1.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__PassInfo_8, transform_hlds__term_pass1__SCC_9, transform_hlds__term_pass1__OutputSupplierMap0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__Result0_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__TermErrors0_14);
        }
#line 164 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result0_13)) == (MR_mktag((MR_Integer) 1))))
#line 161 "term_pass1.m"
          {
#line 162 "term_pass1.m"
            *transform_hlds__term_pass1__Result_11 = transform_hlds__term_pass1__Result0_13;
#line 163 "term_pass1.m"
            *transform_hlds__term_pass1__TermErrors_12 = transform_hlds__term_pass1__TermErrors0_14;
#line 161 "term_pass1.m"
          }
#line 164 "term_pass1.m"
        else
#line 165 "term_pass1.m"
          {
#line 165 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplierMap1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_13, (MR_Integer) 1)));
#line 165 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_13, (MR_Integer) 0)));
#line 165 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_13, (MR_Integer) 2)));

#line 166 "term_pass1.m"
            {
#line 166 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap1_17)), ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap0_10)));
            }
#line 166 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 167 "term_pass1.m"
              {
#line 167 "term_pass1.m"
                *transform_hlds__term_pass1__Result_11 = transform_hlds__term_pass1__Result0_13;
#line 168 "term_pass1.m"
                *transform_hlds__term_pass1__TermErrors_12 = transform_hlds__term_pass1__TermErrors0_14;
#line 167 "term_pass1.m"
              }
#line 166 "term_pass1.m"
            else
#line 170 "term_pass1.m"
              {
#line 170 "term_pass1.m"
                /* direct tailcall eliminated */
#line 170 "term_pass1.m"
                {
#line 170 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_10 = transform_hlds__term_pass1__OutputSupplierMap1_17;

#line 170 "term_pass1.m"
                  transform_hlds__term_pass1__OutputSupplierMap0_10 = transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_10;
#line 170 "term_pass1.m"
                }
#line 170 "term_pass1.m"
                continue;
#line 170 "term_pass1.m"
              }
#line 165 "term_pass1.m"
          }
#line 157 "term_pass1.m"
      }
#line 157 "term_pass1.m"
      break;
#line 157 "term_pass1.m"
    }
#line 152 "term_pass1.m"
}

#line 146 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
#line 146 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 146 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 146 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 146 "term_pass1.m"
{
#line 146 "term_pass1.m"
  {
#line 146 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 146 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_LambdaHeadVar__2_19;

#line 146 "term_pass1.m"
    {
#line 146 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__146__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_LambdaHeadVar__2_19);
    }
#line 146 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_LambdaHeadVar__2_19));
#line 146 "term_pass1.m"
  }
#line 146 "term_pass1.m"
}

#line 137 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
#line 137 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
#line 137 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 137 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3)
#line 137 "term_pass1.m"
{
#line 140 "term_pass1.m"
  {
#line 140 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 140 "term_pass1.m"
    if ((transform_hlds__term_pass1__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 140 "term_pass1.m"
      {
#line 141 "term_pass1.m"
        {
#line 141 "term_pass1.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], transform_hlds__term_pass1__HeadVar__3_3);
        }
#line 140 "term_pass1.m"
      }
#line 140 "term_pass1.m"
    else
#line 142 "term_pass1.m"
      {
#line 142 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10;
#line 142 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__ProcInfo_12;
#line 142 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__HeadVars_13;
#line 142 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__BoolList_17;
#line 144 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_11_11;

#line 143 "term_pass1.m"
        {
#line 143 "term_pass1.m"
          transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__ModuleInfo_1, transform_hlds__term_pass1__PPIds_8, &transform_hlds__term_pass1__OutputSupplierMap0_10);
        }
#line 144 "term_pass1.m"
        {
#line 144 "term_pass1.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_1, transform_hlds__term_pass1__PPId_7, &transform_hlds__term_pass1__V_11_11, &transform_hlds__term_pass1__ProcInfo_12);
        }
#line 145 "term_pass1.m"
        {
#line 145 "term_pass1.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_12, &transform_hlds__term_pass1__HeadVars_13);
        }
#line 147 "term_pass1.m"
        {
#line 147 "term_pass1.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[5], transform_hlds__term_pass1__HeadVars_13, &transform_hlds__term_pass1__BoolList_17);
        }
#line 148 "term_pass1.m"
        {
#line 148 "term_pass1.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass1__PPId_7)), ((MR_Box) (transform_hlds__term_pass1__BoolList_17)), transform_hlds__term_pass1__OutputSupplierMap0_10, transform_hlds__term_pass1__HeadVar__3_3);
        }
#line 142 "term_pass1.m"
      }
#line 140 "term_pass1.m"
  }
#line 137 "term_pass1.m"
}

#line 408 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2(
#line 408 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 408 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 408 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 408 "term_pass1.m"
{
#line 408 "term_pass1.m"
  {
#line 408 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 408 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_HeadVar__4_4;

#line 408 "term_pass1.m"
    {
#line 408 "term_pass1.m"
      transform_hlds__term_pass1__lookup_coeff_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv1_HeadVar__4_4);
    }
#line 408 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv1_HeadVar__4_4));
#line 408 "term_pass1.m"
  }
#line 408 "term_pass1.m"
}

#line 426 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1(
#line 426 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 426 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 426 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 426 "term_pass1.m"
{
#line 426 "term_pass1.m"
  {
#line 426 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 426 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_LambdaHeadVar__2_20;

#line 426 "term_pass1.m"
    {
#line 426 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__426__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_LambdaHeadVar__2_20);
    }
#line 426 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_LambdaHeadVar__2_20));
#line 426 "term_pass1.m"
  }
#line 426 "term_pass1.m"
}

#line 49 "term_pass1.m"
void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0(
#line 49 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_6,
#line 49 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_7,
#line 49 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_8,
#line 49 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__ArgSize_9,
#line 49 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_10)
#line 49 "term_pass1.m"
{
#line 96 "term_pass1.m"
  {
#line 96 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 96 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__InitOutputSupplierMap_11;
#line 96 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Result_12;

#line 97 "term_pass1.m"
    {
#line 97 "term_pass1.m"
      transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__InitOutputSupplierMap_11);
    }
#line 98 "term_pass1.m"
    {
#line 98 "term_pass1.m"
      transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__PassInfo_7, transform_hlds__term_pass1__SCC_8, transform_hlds__term_pass1__InitOutputSupplierMap_11, &transform_hlds__term_pass1__Result_12, transform_hlds__term_pass1__TermErrors_10);
    }
#line 126 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result_12)) == (MR_mktag((MR_Integer) 1))))
#line 127 "term_pass1.m"
      {
#line 127 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Errors_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Result_12, (MR_Integer) 0)));

#line 128 "term_pass1.m"
        {
#line 128 "term_pass1.m"
          MR_Word base;
#line 128 "term_pass1.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 128 "term_pass1.m"
          *transform_hlds__term_pass1__ArgSize_9 = base;
#line 128 "term_pass1.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_24));
#line 128 "term_pass1.m"
        }
#line 127 "term_pass1.m"
      }
#line 126 "term_pass1.m"
    else
#line 101 "term_pass1.m"
      {
#line 101 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Paths_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_12, (MR_Integer) 0)));
#line 101 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_12, (MR_Integer) 1)));
#line 101 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__SubsetErrors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_12, (MR_Integer) 2)));

#line 105 "term_pass1.m"
        if ((transform_hlds__term_pass1__SubsetErrors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 112 "term_pass1.m"
          if ((transform_hlds__term_pass1__Paths_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "term_pass1.m"
            {
#line 108 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Context_18;
#line 108 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__ArgSizeError_19;
#line 108 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_29_29;

#line 109 "term_pass1.m"
              {
#line 109 "term_pass1.m"
                transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Context_18);
              }
#line 110 "term_pass1.m"
              {
#line 110 "term_pass1.m"
                transform_hlds__term_pass1__ArgSizeError_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_19, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_18));
#line 110 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 110 "term_pass1.m"
              }
#line 111 "term_pass1.m"
              {
#line 111 "term_pass1.m"
                transform_hlds__term_pass1__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 111 "term_pass1.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_29_29, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_19));
#line 111 "term_pass1.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "term_pass1.m"
              }
#line 111 "term_pass1.m"
              {
#line 111 "term_pass1.m"
                MR_Word base;
#line 111 "term_pass1.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 111 "term_pass1.m"
                *transform_hlds__term_pass1__ArgSize_9 = base;
#line 111 "term_pass1.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_29_29));
#line 111 "term_pass1.m"
              }
#line 108 "term_pass1.m"
            }
#line 112 "term_pass1.m"
          else
#line 4097 "transform_hlds.term_pass1.c"
            {
#line 4099 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Varset_40;
#line 4101 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Equations_41;
#line 4103 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Objective_42;
#line 4105 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__PPVars_43;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_25_76;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeInfo_26_77;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_27_78;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeInfo_28_79;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Varset0_62;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__PPVars0_63;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__EqnSet0_64;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__EqnSet_65;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Vars_66;
#line 418 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Convert_67;

#line 419 "term_pass1.m"
              {
#line 419 "term_pass1.m"
                mercury__varset__init_1_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Varset0_62);
              }
#line 4133 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeCtorInfo_25_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4135 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeInfo_26_77 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 420 "term_pass1.m"
              {
#line 420 "term_pass1.m"
                mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_76, transform_hlds__term_pass1__TypeInfo_26_77, &transform_hlds__term_pass1__PPVars0_63);
              }
#line 4142 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeCtorInfo_27_78 = (MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0;
#line 421 "term_pass1.m"
              {
#line 421 "term_pass1.m"
                mercury__set__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_78, &transform_hlds__term_pass1__EqnSet0_64);
              }
#line 422 "term_pass1.m"
              {
#line 422 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1__convert_equations_2_7_p_0(transform_hlds__term_pass1__Paths_13, transform_hlds__term_pass1__PPVars0_63, &transform_hlds__term_pass1__PPVars_43, transform_hlds__term_pass1__Varset0_62, &transform_hlds__term_pass1__Varset_40, transform_hlds__term_pass1__EqnSet0_64, &transform_hlds__term_pass1__EqnSet_65);
              }
#line 418 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 418 "term_pass1.m"
                {
#line 424 "term_pass1.m"
                  {
#line 424 "term_pass1.m"
                    mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_78, transform_hlds__term_pass1__EqnSet_65, &transform_hlds__term_pass1__Equations_41);
                  }
#line 425 "term_pass1.m"
                  {
#line 425 "term_pass1.m"
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_76, transform_hlds__term_pass1__TypeInfo_26_77, transform_hlds__term_pass1__PPVars_43, &transform_hlds__term_pass1__Vars_66);
                  }
#line 426 "term_pass1.m"
                  transform_hlds__term_pass1__Convert_67 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[4];
#line 4170 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__TypeInfo_28_79 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1];
#line 427 "term_pass1.m"
                  {
#line 427 "term_pass1.m"
                    mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeInfo_26_77, transform_hlds__term_pass1__TypeInfo_28_79, transform_hlds__term_pass1__Convert_67, transform_hlds__term_pass1__Vars_66, &transform_hlds__term_pass1__Objective_42);
                  }
#line 427 "term_pass1.m"
                  transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 418 "term_pass1.m"
                }
#line 4181 "transform_hlds.term_pass1.c"
              if (transform_hlds__term_pass1__succeeded)
#line 4183 "transform_hlds.term_pass1.c"
                {
#line 4185 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__TypeCtorInfo_19_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4187 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__TypeInfo_20_53 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 4189 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__AllVars0_44;
#line 4191 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__AllVars_45;
#line 4193 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__Soln_46;

#line 400 "term_pass1.m"
                  {
#line 400 "term_pass1.m"
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_19_52, transform_hlds__term_pass1__TypeInfo_20_53, transform_hlds__term_pass1__PPVars_43, &transform_hlds__term_pass1__AllVars0_44);
                  }
#line 401 "term_pass1.m"
                  {
#line 401 "term_pass1.m"
                    mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__term_pass1__TypeInfo_20_53, transform_hlds__term_pass1__AllVars0_44, &transform_hlds__term_pass1__AllVars_45);
                  }
#line 402 "term_pass1.m"
                  {
#line 402 "term_pass1.m"
                    libs__lp__lp_solve_6_p_0(transform_hlds__term_pass1__Equations_41, (MR_Integer) 1, transform_hlds__term_pass1__Objective_42, transform_hlds__term_pass1__Varset_40, transform_hlds__term_pass1__AllVars_45, &transform_hlds__term_pass1__Soln_46);
                  }
#line 4211 "transform_hlds.term_pass1.c"
                  if ((transform_hlds__term_pass1__Soln_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4213 "transform_hlds.term_pass1.c"
                    {
#line 4215 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__V_26_26;
#line 4217 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__Context_31;
#line 4219 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__ArgSizeError_32;

#line 120 "term_pass1.m"
                      {
#line 120 "term_pass1.m"
                        transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Context_31);
                      }
#line 121 "term_pass1.m"
                      {
#line 121 "term_pass1.m"
                        transform_hlds__term_pass1__ArgSizeError_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_32, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_31));
#line 121 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 121 "term_pass1.m"
                      }
#line 122 "term_pass1.m"
                      {
#line 122 "term_pass1.m"
                        transform_hlds__term_pass1__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_26_26, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_32));
#line 122 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "term_pass1.m"
                      }
#line 122 "term_pass1.m"
                      {
#line 122 "term_pass1.m"
                        MR_Word base;
#line 122 "term_pass1.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 122 "term_pass1.m"
                        *transform_hlds__term_pass1__ArgSize_9 = base;
#line 122 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_26_26));
#line 122 "term_pass1.m"
                      }
#line 4259 "transform_hlds.term_pass1.c"
                    }
#line 4261 "transform_hlds.term_pass1.c"
                  else
#line 4263 "transform_hlds.term_pass1.c"
                    {
#line 4265 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__Solution_23;
#line 4267 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__SolnVal_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_46, (MR_Integer) 1)));
#line 4269 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__V_51_51;
#line 407 "term_pass1.m"
                      MR_Float transform_hlds__term_pass1___ObjVal_47 = MR_unbox_float((MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_46, (MR_Integer) 0)));

#line 408 "term_pass1.m"
                      {
#line 408 "term_pass1.m"
                        transform_hlds__term_pass1__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 408 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[0]));
#line 408 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2));
#line 408 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 408 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 3) = ((MR_Box) (transform_hlds__term_pass1__PPVars_43));
#line 408 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 4) = ((MR_Box) (transform_hlds__term_pass1__SolnVal_48));
#line 408 "term_pass1.m"
                      }
#line 408 "term_pass1.m"
                      {
#line 408 "term_pass1.m"
                        mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_19_52, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[0], transform_hlds__term_pass1__V_51_51, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Solution_23);
                      }
#line 117 "term_pass1.m"
                      {
#line 117 "term_pass1.m"
                        MR_Word base;
#line 117 "term_pass1.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 117 "term_pass1.m"
                        *transform_hlds__term_pass1__ArgSize_9 = base;
#line 117 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Solution_23));
#line 117 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_14));
#line 117 "term_pass1.m"
                      }
#line 4309 "transform_hlds.term_pass1.c"
                    }
#line 4311 "transform_hlds.term_pass1.c"
                }
#line 4313 "transform_hlds.term_pass1.c"
              else
#line 4315 "transform_hlds.term_pass1.c"
                {
#line 4317 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__V_83_83;
#line 4319 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__Context_85;
#line 4321 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__ArgSizeError_86;

#line 120 "term_pass1.m"
                  {
#line 120 "term_pass1.m"
                    transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Context_85);
                  }
#line 121 "term_pass1.m"
                  {
#line 121 "term_pass1.m"
                    transform_hlds__term_pass1__ArgSizeError_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_86, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_85));
#line 121 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 121 "term_pass1.m"
                  }
#line 122 "term_pass1.m"
                  {
#line 122 "term_pass1.m"
                    transform_hlds__term_pass1__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_86));
#line 122 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "term_pass1.m"
                  }
#line 122 "term_pass1.m"
                  {
#line 122 "term_pass1.m"
                    MR_Word base;
#line 122 "term_pass1.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 122 "term_pass1.m"
                    *transform_hlds__term_pass1__ArgSize_9 = base;
#line 122 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_83_83));
#line 122 "term_pass1.m"
                  }
#line 4361 "transform_hlds.term_pass1.c"
                }
#line 4363 "transform_hlds.term_pass1.c"
            }
#line 105 "term_pass1.m"
        else
#line 104 "term_pass1.m"
          {
#line 104 "term_pass1.m"
            MR_Word base;
#line 104 "term_pass1.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 104 "term_pass1.m"
            *transform_hlds__term_pass1__ArgSize_9 = base;
#line 104 "term_pass1.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_15));
#line 104 "term_pass1.m"
          }
#line 101 "term_pass1.m"
      }
#line 96 "term_pass1.m"
  }
#line 49 "term_pass1.m"
}

void mercury__transform_hlds__term_pass1__init(void)
{
}

void mercury__transform_hlds__term_pass1__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_arg_size_result_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_pass1_result_0);
}

void mercury__transform_hlds__term_pass1__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_pass1. */
