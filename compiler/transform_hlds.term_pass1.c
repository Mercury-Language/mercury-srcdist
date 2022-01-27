/*
** Automatically generated from `term_pass1.m'
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




#line 142 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 145 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0;

#line 148 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 151 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 154 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 157 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0;

#line 160 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 166 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 172 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 175 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

#line 178 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

#line 181 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0;

#line 184 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 187 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2];

#line 190 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0;

#line 193 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 196 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1];

#line 199 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1;

#line 202 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1];

#line 205 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1];

#line 208 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0[2];

#line 211 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2];

#line 214 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2];

#line 217 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

#line 220 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3];

#line 223 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0;

#line 226 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1];

#line 229 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1;

#line 232 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1];

#line 235 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1];

#line 238 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0[2];

#line 241 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2];

#line 244 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2];

#line 247 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
#line 250 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 252 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

#line 255 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
#line 258 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 260 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 262 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

#line 265 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
#line 268 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 270 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

#line 273 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
#line 276 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 278 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 280 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

#line 145 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_53_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 145 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_19);

#line 453 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__453__1_6_p_0(
#line 453 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_53,
#line 453 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_54,
#line 453 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_55,
#line 453 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_56,
#line 453 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_57,
#line 453 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__6_58);

#line 438 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__438__1_2_p_0(
#line 438 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_19,
#line 438 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_20);

#line 145 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__145__1_2_p_0(
#line 145 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_18,
#line 145 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_19);

#line 77 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
#line 77 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
#line 77 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 77 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3);

#line 77 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
#line 77 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 77 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2);

#line 462 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
#line 462 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPIds_5,
#line 462 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Soln_6,
#line 462 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_7,
#line 462 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

#line 453 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
#line 453 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 453 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 453 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
#line 453 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
#line 453 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
#line 453 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
#line 453 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6);

#line 441 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7);

#line 393 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_9_p_0(
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_11,
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_18,
#line 393 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_19,
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_20,
#line 393 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_21);

#line 363 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_4(
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 363 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 363 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 363 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 368 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_3(
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 368 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 368 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 368 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 359 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_2(
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 359 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_1(
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 311 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_11,
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Goal_12,
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67,
#line 311 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_68,
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69,
#line 311 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70);

#line 300 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_7_p_0(
#line 300 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 300 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_16,
#line 300 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_17,
#line 300 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_18,
#line 300 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_19);

#line 267 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
#line 267 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 267 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 267 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 267 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

#line 216 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_9_p_0(
#line 216 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 216 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_11,
#line 216 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_12,
#line 216 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_13,
#line 216 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_14,
#line 216 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46,
#line 216 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_47);

#line 202 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0_1(
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 202 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 202 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 202 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 175 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0(
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_2,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_6,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_8,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_10);

#line 151 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_p_0(
#line 151 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_10,
#line 151 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_11,
#line 151 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_12,
#line 151 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_13,
#line 151 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_14,
#line 151 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_23,
#line 151 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_24);

#line 145 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
#line 145 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 145 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 145 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

#line 136 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
#line 136 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 136 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_2,
#line 136 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3);

#line 420 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_2(
#line 420 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 420 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 420 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

#line 438 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_1(
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 438 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);


static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_2[8][3];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_4[1][7];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_5[1][10];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_6[2][12];

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_7[1][9];




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
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0))
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

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_2[8][3] = {
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
    ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_1)),
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
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__term_pass1_scalar_common_7[0])),
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

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_4[1][7] = {
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
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_6[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0)),
    ((MR_Box) (&transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass1_scalar_common_7[1][9] = {
  /* row 0 */
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



#line 861 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 869 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 877 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 886 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 895 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 904 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 913 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 921 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 929 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 937 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 946 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 954 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 963 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0
  }
};

#line 971 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 979 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 988 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

#line 994 "transform_hlds.term_pass1.c"
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

#line 1009 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 1017 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 1022 "transform_hlds.term_pass1.c"
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

#line 1037 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

#line 1042 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1
};

#line 1047 "transform_hlds.term_pass1.c"
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

#line 1061 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

#line 1067 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1073 "transform_hlds.term_pass1.c"
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

#line 1090 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

#line 1098 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 1105 "transform_hlds.term_pass1.c"
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

#line 1120 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 1125 "transform_hlds.term_pass1.c"
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

#line 1140 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

#line 1145 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1
};

#line 1150 "transform_hlds.term_pass1.c"
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

#line 1164 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

#line 1170 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1176 "transform_hlds.term_pass1.c"
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

#line 1193 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
#line 1196 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 1198 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
#line 1200 "transform_hlds.term_pass1.c"
{
#line 1202 "transform_hlds.term_pass1.c"
  {
#line 1204 "transform_hlds.term_pass1.c"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 1207 "transform_hlds.term_pass1.c"
    {
#line 1209 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____arg_size_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
#line 1212 "transform_hlds.term_pass1.c"
    return transform_hlds__term_pass1__succeeded;
#line 1214 "transform_hlds.term_pass1.c"
  }
#line 1216 "transform_hlds.term_pass1.c"
}

#line 1219 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
#line 1222 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 1224 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 1226 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
#line 1228 "transform_hlds.term_pass1.c"
{
#line 1230 "transform_hlds.term_pass1.c"
  {
#line 1232 "transform_hlds.term_pass1.c"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

#line 1235 "transform_hlds.term_pass1.c"
    {
#line 1237 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1____Compare____arg_size_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
#line 1240 "transform_hlds.term_pass1.c"
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
#line 1242 "transform_hlds.term_pass1.c"
  }
#line 1244 "transform_hlds.term_pass1.c"
}

#line 1247 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
#line 1250 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 1252 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
#line 1254 "transform_hlds.term_pass1.c"
{
#line 1256 "transform_hlds.term_pass1.c"
  {
#line 1258 "transform_hlds.term_pass1.c"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 1261 "transform_hlds.term_pass1.c"
    {
#line 1263 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____pass1_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
#line 1266 "transform_hlds.term_pass1.c"
    return transform_hlds__term_pass1__succeeded;
#line 1268 "transform_hlds.term_pass1.c"
  }
#line 1270 "transform_hlds.term_pass1.c"
}

#line 1273 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
#line 1276 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 1278 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 1280 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
#line 1282 "transform_hlds.term_pass1.c"
{
#line 1284 "transform_hlds.term_pass1.c"
  {
#line 1286 "transform_hlds.term_pass1.c"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

#line 1289 "transform_hlds.term_pass1.c"
    {
#line 1291 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1____Compare____pass1_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
#line 1294 "transform_hlds.term_pass1.c"
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
#line 1296 "transform_hlds.term_pass1.c"
  }
#line 1298 "transform_hlds.term_pass1.c"
}

#line 145 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_53_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 145 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_19)
#line 145 "term_pass1.m"
{
#line 145 "term_pass1.m"
  {
#line 145 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 145 "term_pass1.m"
    *transform_hlds__term_pass1__HeadVar__2_19 = (MR_Integer) 0;
#line 145 "term_pass1.m"
  }
#line 145 "term_pass1.m"
}

#line 453 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__453__1_6_p_0(
#line 453 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_53,
#line 453 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_54,
#line 453 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_55,
#line 453 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_56,
#line 453 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_57,
#line 453 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__6_58)
#line 453 "term_pass1.m"
{
#line 453 "term_pass1.m"
  {
#line 453 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 453 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var_37;
#line 476 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var0_87;
#line 474 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv0_Var0_87;

#line 474 "term_pass1.m"
    {
#line 474 "term_pass1.m"
      transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__HeadVar__5_57, ((MR_Box) (transform_hlds__term_pass1__HeadVar__1_53)), &transform_hlds__term_pass1__conv0_Var0_87);
    }
#line 474 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 474 "term_pass1.m"
      {
#line 474 "term_pass1.m"
        transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
#line 474 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 474 "term_pass1.m"
      }
#line 476 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 475 "term_pass1.m"
      {
#line 475 "term_pass1.m"
        transform_hlds__term_pass1__Var_37 = transform_hlds__term_pass1__Var0_87;
#line 475 "term_pass1.m"
        *transform_hlds__term_pass1__HeadVar__6_58 = transform_hlds__term_pass1__HeadVar__5_57;
#line 475 "term_pass1.m"
        *transform_hlds__term_pass1__HeadVar__4_56 = transform_hlds__term_pass1__HeadVar__3_55;
#line 475 "term_pass1.m"
      }
#line 476 "term_pass1.m"
    else
#line 477 "term_pass1.m"
      {
#line 477 "term_pass1.m"
        {
#line 477 "term_pass1.m"
          mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Var_37, transform_hlds__term_pass1__HeadVar__3_55, transform_hlds__term_pass1__HeadVar__4_56);
        }
#line 478 "term_pass1.m"
        {
#line 478 "term_pass1.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__HeadVar__1_53)), ((MR_Box) (transform_hlds__term_pass1__Var_37)), transform_hlds__term_pass1__HeadVar__5_57, transform_hlds__term_pass1__HeadVar__6_58);
        }
#line 477 "term_pass1.m"
      }
#line 456 "term_pass1.m"
    {
#line 456 "term_pass1.m"
      MR_Word base;
#line 456 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 456 "term_pass1.m"
      *transform_hlds__term_pass1__HeadVar__2_54 = base;
#line 456 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Var_37));
#line 456 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) -1.0000000000000000);
#line 456 "term_pass1.m"
    }
#line 453 "term_pass1.m"
  }
#line 453 "term_pass1.m"
}

#line 438 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__438__1_2_p_0(
#line 438 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_19,
#line 438 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_20)
#line 438 "term_pass1.m"
{
#line 438 "term_pass1.m"
  {
#line 438 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 438 "term_pass1.m"
    {
#line 438 "term_pass1.m"
      MR_Word base;
#line 438 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "term_pass1.m"
      *transform_hlds__term_pass1__HeadVar__2_20 = base;
#line 438 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__1_19));
#line 438 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 438 "term_pass1.m"
    }
#line 438 "term_pass1.m"
  }
#line 438 "term_pass1.m"
}

#line 145 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__145__1_2_p_0(
#line 145 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_18,
#line 145 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_19)
#line 145 "term_pass1.m"
{
#line 145 "term_pass1.m"
  {
#line 145 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 145 "term_pass1.m"
    {
#line 145 "term_pass1.m"
      transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_53_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass1__HeadVar__2_19);
#line 145 "term_pass1.m"
      return;
    }
#line 145 "term_pass1.m"
  }
#line 145 "term_pass1.m"
}

#line 77 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
#line 77 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
#line 77 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 77 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3)
#line 77 "term_pass1.m"
{
#line 77 "term_pass1.m"
  {
#line 77 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 77 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_22 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;
#line 77 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_23 = (MR_Integer) transform_hlds__term_pass1__HeadVar__3_3;

#line 77 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_22 == transform_hlds__term_pass1__CastY_23);
#line 77 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 1493 "transform_hlds.term_pass1.c"
      *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "term_pass1.m"
    else
#line 77 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 77 "term_pass1.m"
      {
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 77 "term_pass1.m"
          {
#line 77 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));

#line 77 "term_pass1.m"
            {
#line 77 "term_pass1.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_28_28)), ((MR_Box) (transform_hlds__term_pass1__V_21_21)));
#line 77 "term_pass1.m"
              return;
            }
#line 77 "term_pass1.m"
          }
#line 77 "term_pass1.m"
        else
#line 1522 "transform_hlds.term_pass1.c"
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "term_pass1.m"
      }
#line 77 "term_pass1.m"
    else
#line 77 "term_pass1.m"
      {
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 2)));
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1539 "transform_hlds.term_pass1.c"
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "term_pass1.m"
        else
#line 77 "term_pass1.m"
          {
#line 77 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 77 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 77 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 2)));
#line 77 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_10_10;

#line 77 "term_pass1.m"
            {
#line 77 "term_pass1.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[6], &transform_hlds__term_pass1__V_10_10, ((MR_Box) (transform_hlds__term_pass1__V_31_31)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
            }
#line 1559 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_10_10 == (MR_Integer) 0);
#line 77 "term_pass1.m"
            transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
#line 77 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 77 "term_pass1.m"
              *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_10_10;
#line 77 "term_pass1.m"
            else
#line 77 "term_pass1.m"
              {
#line 77 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__V_11_11;

#line 77 "term_pass1.m"
                {
#line 77 "term_pass1.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], &transform_hlds__term_pass1__V_11_11, ((MR_Box) (transform_hlds__term_pass1__V_30_30)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
                }
#line 1579 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_11_11 == (MR_Integer) 0);
#line 77 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
#line 77 "term_pass1.m"
                if (transform_hlds__term_pass1__succeeded)
#line 77 "term_pass1.m"
                  *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_11_11;
#line 77 "term_pass1.m"
                else
#line 77 "term_pass1.m"
                  {
#line 77 "term_pass1.m"
                    {
#line 77 "term_pass1.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_29_29)), ((MR_Box) (transform_hlds__term_pass1__V_9_9)));
#line 77 "term_pass1.m"
                      return;
                    }
#line 77 "term_pass1.m"
                  }
#line 77 "term_pass1.m"
              }
#line 77 "term_pass1.m"
          }
#line 77 "term_pass1.m"
      }
#line 77 "term_pass1.m"
  }
#line 77 "term_pass1.m"
}

#line 77 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
#line 77 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 77 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2)
#line 77 "term_pass1.m"
{
#line 77 "term_pass1.m"
  {
#line 77 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 77 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_11 = (MR_Integer) transform_hlds__term_pass1__HeadVar__1_1;
#line 77 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_12 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;

#line 77 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_11 == transform_hlds__term_pass1__CastY_12);
#line 77 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 77 "term_pass1.m"
      transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 77 "term_pass1.m"
    else
#line 77 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 77 "term_pass1.m"
      {
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_13_13;
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_10_10;

#line 77 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 77 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 77 "term_pass1.m"
          {
#line 77 "term_pass1.m"
            transform_hlds__term_pass1__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 1656 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1658 "transform_hlds.term_pass1.c"
            {
#line 1660 "transform_hlds.term_pass1.c"
              return transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_pass1__V_9_9)), ((MR_Box) (transform_hlds__term_pass1__V_10_10)));
            }
#line 77 "term_pass1.m"
          }
#line 77 "term_pass1.m"
      }
#line 77 "term_pass1.m"
    else
#line 77 "term_pass1.m"
      {
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_14_14;
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_15_15;
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_16_16;
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 2)));
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_6_6;
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_7_7;
#line 77 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_8_8;

#line 77 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 77 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 77 "term_pass1.m"
          {
#line 77 "term_pass1.m"
            transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 77 "term_pass1.m"
            transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 77 "term_pass1.m"
            transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 2)));
#line 1702 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[6];
#line 1704 "transform_hlds.term_pass1.c"
            {
#line 1706 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
            }
#line 77 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 77 "term_pass1.m"
              {
#line 1713 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
#line 1715 "transform_hlds.term_pass1.c"
                {
#line 1717 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_pass1__V_4_4)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
                }
#line 77 "term_pass1.m"
                if (transform_hlds__term_pass1__succeeded)
#line 77 "term_pass1.m"
                  {
#line 1724 "transform_hlds.term_pass1.c"
                    transform_hlds__term_pass1__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1726 "transform_hlds.term_pass1.c"
                    {
#line 1728 "transform_hlds.term_pass1.c"
                      return transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_pass1__V_5_5)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
                    }
#line 77 "term_pass1.m"
                  }
#line 77 "term_pass1.m"
              }
#line 77 "term_pass1.m"
          }
#line 77 "term_pass1.m"
      }
#line 77 "term_pass1.m"
    return transform_hlds__term_pass1__succeeded;
#line 77 "term_pass1.m"
  }
#line 77 "term_pass1.m"
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
#line 1770 "transform_hlds.term_pass1.c"
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
#line 37 "term_pass1.m"
              return;
            }
#line 37 "term_pass1.m"
          }
#line 37 "term_pass1.m"
        else
#line 1799 "transform_hlds.term_pass1.c"
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
#line 1814 "transform_hlds.term_pass1.c"
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
#line 1832 "transform_hlds.term_pass1.c"
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
#line 37 "term_pass1.m"
                  return;
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
#line 1907 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1909 "transform_hlds.term_pass1.c"
            {
#line 1911 "transform_hlds.term_pass1.c"
              return transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_pass1__V_7_7)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
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
#line 1945 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[5];
#line 1947 "transform_hlds.term_pass1.c"
            {
#line 1949 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_5_5)));
            }
#line 37 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 37 "term_pass1.m"
              {
#line 1956 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
#line 1958 "transform_hlds.term_pass1.c"
                {
#line 1960 "transform_hlds.term_pass1.c"
                  return transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_pass1__V_4_4)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
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

#line 462 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
#line 462 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPIds_5,
#line 462 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Soln_6,
#line 462 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_7,
#line 462 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
#line 462 "term_pass1.m"
{
#line 465 "term_pass1.m"
  {
#line 465 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 465 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 465 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__ICoeff_8;
#line 465 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var_9;
#line 465 "term_pass1.m"
    MR_Float transform_hlds__term_pass1__Coeff_10;
#line 466 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv0_Var_9;
#line 467 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv1_Coeff_10;

#line 466 "term_pass1.m"
    {
#line 466 "term_pass1.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_pass1__TypeInfo_12_12, transform_hlds__term_pass1__PPIds_5, ((MR_Box) (transform_hlds__term_pass1__PPId_7)), &transform_hlds__term_pass1__conv0_Var_9);
    }
#line 466 "term_pass1.m"
    transform_hlds__term_pass1__Var_9 = ((MR_Word) transform_hlds__term_pass1__conv0_Var_9);
#line 467 "term_pass1.m"
    {
#line 467 "term_pass1.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeInfo_12_12, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, transform_hlds__term_pass1__Soln_6, ((MR_Box) (transform_hlds__term_pass1__Var_9)), &transform_hlds__term_pass1__conv1_Coeff_10);
    }
#line 467 "term_pass1.m"
    transform_hlds__term_pass1__Coeff_10 = MR_unbox_float(transform_hlds__term_pass1__conv1_Coeff_10);
#line 468 "term_pass1.m"
    {
#line 468 "term_pass1.m"
      transform_hlds__term_pass1__ICoeff_8 = mercury__float__ceiling_to_int_1_f_0(transform_hlds__term_pass1__Coeff_10);
    }
#line 465 "term_pass1.m"
    {
#line 465 "term_pass1.m"
      MR_Word base;
#line 465 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "term_pass1.m"
      *transform_hlds__term_pass1__HeadVar__4_4 = base;
#line 465 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_7));
#line 465 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__ICoeff_8));
#line 465 "term_pass1.m"
    }
#line 465 "term_pass1.m"
  }
#line 462 "term_pass1.m"
}

#line 453 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
#line 453 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 453 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 453 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
#line 453 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
#line 453 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
#line 453 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
#line 453 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6)
#line 453 "term_pass1.m"
{
#line 453 "term_pass1.m"
  {
#line 453 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 453 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv3_HeadVar__2_54;
#line 453 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv2_HeadVar__4_56;
#line 453 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_HeadVar__6_58;

#line 453 "term_pass1.m"
    {
#line 453 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__453__1_6_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv3_HeadVar__2_54, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3), &transform_hlds__term_pass1__conv2_HeadVar__4_56, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_5), &transform_hlds__term_pass1__conv1_HeadVar__6_58);
    }
#line 453 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv3_HeadVar__2_54));
#line 453 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_pass1__conv2_HeadVar__4_56));
#line 453 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_6 = ((MR_Box) (transform_hlds__term_pass1__conv1_HeadVar__6_58));
#line 453 "term_pass1.m"
  }
#line 453 "term_pass1.m"
}

#line 441 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
#line 441 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
#line 441 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7)
#line 441 "term_pass1.m"
{
#line 446 "term_pass1.m"
  while (MR_TRUE)
#line 446 "term_pass1.m"
    {
#line 446 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 446 "term_pass1.m"
      {
#line 446 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;

#line 446 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "term_pass1.m"
          {
#line 446 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6;
#line 446 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Varset_5 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
#line 446 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
#line 446 "term_pass1.m"
            transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 446 "term_pass1.m"
          }
#line 446 "term_pass1.m"
        else
#line 447 "term_pass1.m"
          {
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Path_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Paths_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ThisPPId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 0)));
#line 447 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__IntGamma_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 2)));
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 3)));
#line 447 "term_pass1.m"
            MR_Float transform_hlds__term_pass1__FloatGamma_27;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Eqn_28;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Coeffs_29;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ThisVar_30;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__RestCoeffs_31;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_47_47;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;
#line 448 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 1)));
#line 448 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 4)));
#line 476 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Var0_87;
#line 474 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv0_Var0_87;
#line 458 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62;
#line 458 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63;

#line 449 "term_pass1.m"
            {
#line 449 "term_pass1.m"
              transform_hlds__term_pass1__FloatGamma_27 = mercury__float__float_1_f_0(transform_hlds__term_pass1__IntGamma_24);
            }
#line 474 "term_pass1.m"
            {
#line 474 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), &transform_hlds__term_pass1__conv0_Var0_87);
            }
#line 474 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 474 "term_pass1.m"
              {
#line 474 "term_pass1.m"
                transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
#line 474 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 474 "term_pass1.m"
              }
#line 476 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 475 "term_pass1.m"
              {
#line 475 "term_pass1.m"
                transform_hlds__term_pass1__ThisVar_30 = transform_hlds__term_pass1__Var0_87;
#line 475 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
#line 475 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
#line 475 "term_pass1.m"
              }
#line 476 "term_pass1.m"
            else
#line 477 "term_pass1.m"
              {
#line 477 "term_pass1.m"
                {
#line 477 "term_pass1.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__ThisVar_30, transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4, &transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45);
                }
#line 478 "term_pass1.m"
                {
#line 478 "term_pass1.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), ((MR_Box) (transform_hlds__term_pass1__ThisVar_30)), transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, &transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46);
                }
#line 477 "term_pass1.m"
              }
#line 452 "term_pass1.m"
            {
#line 452 "term_pass1.m"
              transform_hlds__term_pass1__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 452 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 0) = ((MR_Box) (transform_hlds__term_pass1__ThisVar_30));
#line 452 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 452 "term_pass1.m"
            }
#line 458 "term_pass1.m"
            {
#line 458 "term_pass1.m"
              mercury__list__map_foldl2_7_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1], (MR_Word) &transform_hlds__term_pass1_scalar_common_1[4], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[2], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[7], transform_hlds__term_pass1__PPIds_25, &transform_hlds__term_pass1__RestCoeffs_31, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45)), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46)), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
            }
#line 458 "term_pass1.m"
            transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62 = ((MR_Word) transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62);
#line 458 "term_pass1.m"
            transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63 = ((MR_Word) transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
#line 452 "term_pass1.m"
            {
#line 452 "term_pass1.m"
              transform_hlds__term_pass1__Coeffs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 0) = ((MR_Box) (transform_hlds__term_pass1__V_47_47));
#line 452 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 1) = ((MR_Box) (transform_hlds__term_pass1__RestCoeffs_31));
#line 452 "term_pass1.m"
            }
#line 450 "term_pass1.m"
            {
#line 450 "term_pass1.m"
              transform_hlds__term_pass1__Eqn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 450 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 0) = ((MR_Box) (transform_hlds__term_pass1__Coeffs_29));
#line 450 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 1) = ((MR_Box) ((MR_Integer) 2));
#line 450 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 2) = MR_box_float(transform_hlds__term_pass1__FloatGamma_27);
#line 450 "term_pass1.m"
            }
#line 459 "term_pass1.m"
            {
#line 459 "term_pass1.m"
              mercury__set__insert_3_p_0((MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0, ((MR_Box) (transform_hlds__term_pass1__Eqn_28)), transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6, &transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64);
            }
#line 460 "term_pass1.m"
            /* direct tailcall eliminated */
#line 460 "term_pass1.m"
            {
#line 460 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass1__Paths_18;
#line 460 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
#line 460 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
#line 460 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;

#line 460 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6;
#line 460 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4;
#line 460 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2;
#line 460 "term_pass1.m"
              transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__HeadVar__1__tmp_copy_1;
#line 460 "term_pass1.m"
            }
#line 460 "term_pass1.m"
            continue;
#line 447 "term_pass1.m"
          }
#line 446 "term_pass1.m"
        return transform_hlds__term_pass1__succeeded;
#line 446 "term_pass1.m"
      }
#line 446 "term_pass1.m"
      break;
#line 446 "term_pass1.m"
    }
#line 441 "term_pass1.m"
}

#line 393 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_9_p_0(
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_11,
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_18,
#line 393 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_19,
#line 393 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_20,
#line 393 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_21)
#line 393 "term_pass1.m"
{
#line 399 "term_pass1.m"
  {
#line 399 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 399 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 398 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));

#line 400 "term_pass1.m"
    {
#line 400 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(transform_hlds__term_pass1__PPId_10, transform_hlds__term_pass1__VarTypes_11, transform_hlds__term_pass1__Goal_14, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_18, transform_hlds__term_pass1__STATE_VARIABLE_Errors_19, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_21);
#line 400 "term_pass1.m"
      return;
    }
#line 399 "term_pass1.m"
  }
#line 393 "term_pass1.m"
}

#line 363 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_4(
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 363 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 363 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 363 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 363 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 363 "term_pass1.m"
{
#line 363 "term_pass1.m"
  {
#line 363 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 363 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv16_STATE_VARIABLE_Errors_19;
#line 363 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv15_STATE_VARIABLE_ModuleInfo_21;

#line 363 "term_pass1.m"
    {
#line 363 "term_pass1.m"
      transform_hlds__term_pass1__check_cases_non_term_calls_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv16_STATE_VARIABLE_Errors_19, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv15_STATE_VARIABLE_ModuleInfo_21);
    }
#line 363 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv16_STATE_VARIABLE_Errors_19));
#line 363 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv15_STATE_VARIABLE_ModuleInfo_21));
#line 363 "term_pass1.m"
  }
#line 363 "term_pass1.m"
}

#line 368 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_3(
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 368 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 368 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 368 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 368 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 368 "term_pass1.m"
{
#line 368 "term_pass1.m"
  {
#line 368 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 368 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv11_STATE_VARIABLE_Errors_68;
#line 368 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv10_STATE_VARIABLE_ModuleInfo_70;

#line 368 "term_pass1.m"
    {
#line 368 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv11_STATE_VARIABLE_Errors_68, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv10_STATE_VARIABLE_ModuleInfo_70);
    }
#line 368 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv11_STATE_VARIABLE_Errors_68));
#line 368 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv10_STATE_VARIABLE_ModuleInfo_70));
#line 368 "term_pass1.m"
  }
#line 368 "term_pass1.m"
}

#line 359 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_2(
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 359 "term_pass1.m"
{
#line 359 "term_pass1.m"
  {
#line 359 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 359 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_68;
#line 359 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv5_STATE_VARIABLE_ModuleInfo_70;

#line 359 "term_pass1.m"
    {
#line 359 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_68, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_ModuleInfo_70);
    }
#line 359 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_68));
#line 359 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv5_STATE_VARIABLE_ModuleInfo_70));
#line 359 "term_pass1.m"
  }
#line 359 "term_pass1.m"
}

#line 359 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_1(
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 359 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 359 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 359 "term_pass1.m"
{
#line 359 "term_pass1.m"
  {
#line 359 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 359 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_68;
#line 359 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_70;

#line 359 "term_pass1.m"
    {
#line 359 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_68, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_70);
    }
#line 359 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_68));
#line 359 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_70));
#line 359 "term_pass1.m"
  }
#line 359 "term_pass1.m"
}

#line 311 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_11,
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Goal_12,
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67,
#line 311 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_68,
#line 311 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69,
#line 311 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70)
#line 311 "term_pass1.m"
{
#line 316 "term_pass1.m"
  while (MR_TRUE)
#line 316 "term_pass1.m"
    {
#line 316 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 316 "term_pass1.m"
      {
#line 316 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;
#line 316 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_12, (MR_Integer) 0)));
#line 316 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_12, (MR_Integer) 1)));

#line 321 "term_pass1.m"
#line 321 "term_pass1.m"
        switch (MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) {
#line 321 "term_pass1.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 321 "term_pass1.m"
          case (MR_Integer) 0:
#line 371 "term_pass1.m"
            {
#line 371 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__SubGoal_62 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_pass1__GoalExpr_16), (MR_Integer) 0);

#line 372 "term_pass1.m"
              /* direct tailcall eliminated */
#line 372 "term_pass1.m"
              {
#line 372 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Goal__tmp_copy_12 = transform_hlds__term_pass1__SubGoal_62;

#line 372 "term_pass1.m"
                transform_hlds__term_pass1__Goal_12 = transform_hlds__term_pass1__Goal__tmp_copy_12;
#line 372 "term_pass1.m"
              }
#line 372 "term_pass1.m"
              continue;
#line 371 "term_pass1.m"
            }
#line 321 "term_pass1.m"
            break;
#line 321 "term_pass1.m"
          case (MR_Integer) 1:
#line 319 "term_pass1.m"
            {
#line 319 "term_pass1.m"
              *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 319 "term_pass1.m"
              *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 319 "term_pass1.m"
            }
#line 321 "term_pass1.m"
            break;
#line 321 "term_pass1.m"
          case (MR_Integer) 2:
#line 322 "term_pass1.m"
            {
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__CallPredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)));
#line 322 "term_pass1.m"
              MR_Integer transform_hlds__term_pass1__CallProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__CallPPId_29;
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__ProcInfo_31;
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TerminationInfo_32;
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Context_33;
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101;
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 3)));
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 4)));
#line 322 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 5)));
#line 324 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_30_30;

#line 323 "term_pass1.m"
              {
#line 323 "term_pass1.m"
                transform_hlds__term_pass1__CallPPId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_29, 0) = ((MR_Box) (transform_hlds__term_pass1__CallPredId_23));
#line 323 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_29, 1) = ((MR_Box) (transform_hlds__term_pass1__CallProcId_24));
#line 323 "term_pass1.m"
              }
#line 324 "term_pass1.m"
              {
#line 324 "term_pass1.m"
                hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69, transform_hlds__term_pass1__CallPPId_29, &transform_hlds__term_pass1__V_30_30, &transform_hlds__term_pass1__ProcInfo_31);
              }
#line 325 "term_pass1.m"
              {
#line 325 "term_pass1.m"
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_pass1__ProcInfo_31, &transform_hlds__term_pass1__TerminationInfo_32);
              }
#line 326 "term_pass1.m"
              {
#line 326 "term_pass1.m"
                transform_hlds__term_pass1__Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_17);
              }
#line 333 "term_pass1.m"
              if ((transform_hlds__term_pass1__TerminationInfo_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 333 "term_pass1.m"
              else
#line 333 "term_pass1.m"
                {
#line 333 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__TerminationInfo_32, (MR_Integer) 0)));

#line 333 "term_pass1.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_pass1__V_155_155)) == (MR_mktag((MR_Integer) 1))))
#line 328 "term_pass1.m"
                    {
#line 328 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__CanLoopError_35;
#line 328 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__CanLoopErrorContext_36;

#line 329 "term_pass1.m"
                      {
#line 329 "term_pass1.m"
                        transform_hlds__term_pass1__CanLoopError_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopError_35, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 329 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopError_35, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_29));
#line 329 "term_pass1.m"
                      }
#line 330 "term_pass1.m"
                      {
#line 330 "term_pass1.m"
                        transform_hlds__term_pass1__CanLoopErrorContext_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopErrorContext_36, 0) = ((MR_Box) (transform_hlds__term_pass1__CanLoopError_35));
#line 330 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopErrorContext_36, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_33));
#line 330 "term_pass1.m"
                      }
#line 332 "term_pass1.m"
                      {
#line 332 "term_pass1.m"
                        mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, ((MR_Box) (transform_hlds__term_pass1__CanLoopErrorContext_36)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67, &transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101);
                      }
#line 328 "term_pass1.m"
                    }
#line 333 "term_pass1.m"
                  else
#line 334 "term_pass1.m"
                    transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 333 "term_pass1.m"
                }
#line 338 "term_pass1.m"
              {
#line 338 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_pass1__Args_25, transform_hlds__term_pass1__VarTypes_11);
              }
#line 343 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 339 "term_pass1.m"
                {
#line 339 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HigherOrderError_38;
#line 339 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HigherOrderErrorContext_39;

#line 339 "term_pass1.m"
                  {
#line 339 "term_pass1.m"
                    transform_hlds__term_pass1__HigherOrderError_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "term_pass1.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderError_38, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 339 "term_pass1.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderError_38, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_29));
#line 339 "term_pass1.m"
                  }
#line 340 "term_pass1.m"
                  {
#line 340 "term_pass1.m"
                    transform_hlds__term_pass1__HigherOrderErrorContext_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderErrorContext_39, 0) = ((MR_Box) (transform_hlds__term_pass1__HigherOrderError_38));
#line 340 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderErrorContext_39, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_33));
#line 340 "term_pass1.m"
                  }
#line 342 "term_pass1.m"
                  {
#line 342 "term_pass1.m"
                    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, ((MR_Box) (transform_hlds__term_pass1__HigherOrderErrorContext_39)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101, transform_hlds__term_pass1__STATE_VARIABLE_Errors_68);
                  }
#line 339 "term_pass1.m"
                }
#line 343 "term_pass1.m"
              else
#line 343 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101;
#line 322 "term_pass1.m"
              *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 322 "term_pass1.m"
            }
#line 321 "term_pass1.m"
            break;
#line 321 "term_pass1.m"
          case (MR_Integer) 3:
#line 321 "term_pass1.m"
#line 321 "term_pass1.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)))) {
#line 321 "term_pass1.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 321 "term_pass1.m"
              case (MR_Integer) 0:
#line 350 "term_pass1.m"
                {
#line 350 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Error_52;
#line 350 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Context_103;

#line 352 "term_pass1.m"
                  {
#line 352 "term_pass1.m"
                    transform_hlds__term_pass1__Context_103 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_17);
                  }
#line 353 "term_pass1.m"
                  {
#line 353 "term_pass1.m"
                    transform_hlds__term_pass1__Error_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 353 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 353 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_52, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_103));
#line 353 "term_pass1.m"
                  }
#line 354 "term_pass1.m"
                  {
#line 354 "term_pass1.m"
                    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, ((MR_Box) (transform_hlds__term_pass1__Error_52)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67, transform_hlds__term_pass1__STATE_VARIABLE_Errors_68);
                  }
#line 350 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 350 "term_pass1.m"
                }
#line 321 "term_pass1.m"
                break;
#line 321 "term_pass1.m"
              case (MR_Integer) 1:
#line 347 "term_pass1.m"
                {
#line 347 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 347 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 347 "term_pass1.m"
                }
#line 321 "term_pass1.m"
                break;
#line 321 "term_pass1.m"
              case (MR_Integer) 2:
#line 358 "term_pass1.m"
                {
#line 358 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Goals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 358 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_93_93;
#line 356 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 359 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_68;
#line 359 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_70;
#line 359 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv2_STATE_VARIABLE_IO_72;

#line 359 "term_pass1.m"
                  {
#line 359 "term_pass1.m"
                    transform_hlds__term_pass1__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_6[0]));
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_1));
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 3) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 4) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_11));
#line 359 "term_pass1.m"
                  }
#line 359 "term_pass1.m"
                  {
#line 359 "term_pass1.m"
                    mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_pass1__V_93_93, transform_hlds__term_pass1__Goals_54, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67)), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_68, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69)), &transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_70, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv2_STATE_VARIABLE_IO_72);
                  }
#line 359 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = ((MR_Word) transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_68);
#line 359 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = ((MR_Word) transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_70);
#line 358 "term_pass1.m"
                }
#line 321 "term_pass1.m"
                break;
#line 321 "term_pass1.m"
              case (MR_Integer) 3:
#line 358 "term_pass1.m"
                {
#line 358 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Goals_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 358 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_150_150;
#line 359 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv9_STATE_VARIABLE_Errors_68;
#line 359 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv8_STATE_VARIABLE_ModuleInfo_70;
#line 359 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv7_STATE_VARIABLE_IO_72;

#line 359 "term_pass1.m"
                  {
#line 359 "term_pass1.m"
                    transform_hlds__term_pass1__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_6[0]));
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_2));
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 3) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 359 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 4) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_11));
#line 359 "term_pass1.m"
                  }
#line 359 "term_pass1.m"
                  {
#line 359 "term_pass1.m"
                    mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_pass1__V_150_150, transform_hlds__term_pass1__Goals_149, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67)), &transform_hlds__term_pass1__conv9_STATE_VARIABLE_Errors_68, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69)), &transform_hlds__term_pass1__conv8_STATE_VARIABLE_ModuleInfo_70, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv7_STATE_VARIABLE_IO_72);
                  }
#line 359 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = ((MR_Word) transform_hlds__term_pass1__conv9_STATE_VARIABLE_Errors_68);
#line 359 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = ((MR_Word) transform_hlds__term_pass1__conv8_STATE_VARIABLE_ModuleInfo_70);
#line 358 "term_pass1.m"
                }
#line 321 "term_pass1.m"
                break;
#line 321 "term_pass1.m"
              case (MR_Integer) 4:
#line 362 "term_pass1.m"
                {
#line 362 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 3)));
#line 362 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_89_89;
#line 362 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 362 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 363 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv19_STATE_VARIABLE_Errors_68;
#line 363 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv18_STATE_VARIABLE_ModuleInfo_70;
#line 363 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv17_STATE_VARIABLE_IO_72;

#line 363 "term_pass1.m"
                  {
#line 363 "term_pass1.m"
                    transform_hlds__term_pass1__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 363 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_6[1]));
#line 363 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_4));
#line 363 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 363 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 3) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 363 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 4) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_11));
#line 363 "term_pass1.m"
                  }
#line 363 "term_pass1.m"
                  {
#line 363 "term_pass1.m"
                    mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_pass1__V_89_89, transform_hlds__term_pass1__Cases_57, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67)), &transform_hlds__term_pass1__conv19_STATE_VARIABLE_Errors_68, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69)), &transform_hlds__term_pass1__conv18_STATE_VARIABLE_ModuleInfo_70, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv17_STATE_VARIABLE_IO_72);
                  }
#line 363 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = ((MR_Word) transform_hlds__term_pass1__conv19_STATE_VARIABLE_Errors_68);
#line 363 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = ((MR_Word) transform_hlds__term_pass1__conv18_STATE_VARIABLE_ModuleInfo_70);
#line 362 "term_pass1.m"
                }
#line 321 "term_pass1.m"
                break;
#line 321 "term_pass1.m"
              case (MR_Integer) 5:
#line 375 "term_pass1.m"
                {
#line 375 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Reason_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 375 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__SubGoal_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 377 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__FGT_65;
#line 377 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_64_64;

#line 377 "term_pass1.m"
                  transform_hlds__term_pass1__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_pass1__Reason_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_63, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 377 "term_pass1.m"
                  if (transform_hlds__term_pass1__succeeded)
#line 377 "term_pass1.m"
                    {
#line 377 "term_pass1.m"
                      transform_hlds__term_pass1__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_63, (MR_Integer) 1)));
#line 377 "term_pass1.m"
                      transform_hlds__term_pass1__FGT_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_63, (MR_Integer) 2)));
#line 379 "term_pass1.m"
#line 379 "term_pass1.m"
                      switch (transform_hlds__term_pass1__FGT_65) {
#line 379 "term_pass1.m"
                        default:
#line 379 "term_pass1.m"
                          transform_hlds__term_pass1__succeeded = MR_FALSE;
#line 379 "term_pass1.m"
                          break;
#line 379 "term_pass1.m"
                        case (MR_Integer) 1:
#line 378 "term_pass1.m"
                          transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 379 "term_pass1.m"
                          break;
#line 379 "term_pass1.m"
                        case (MR_Integer) 2:
#line 379 "term_pass1.m"
                          transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 379 "term_pass1.m"
                          break;
#line 379 "term_pass1.m"
                      }
#line 377 "term_pass1.m"
                    }
#line 384 "term_pass1.m"
                  if (transform_hlds__term_pass1__succeeded)
#line 383 "term_pass1.m"
                    {
#line 383 "term_pass1.m"
                      *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 383 "term_pass1.m"
                      *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 383 "term_pass1.m"
                    }
#line 384 "term_pass1.m"
                  else
#line 385 "term_pass1.m"
                    {
#line 385 "term_pass1.m"
                      /* direct tailcall eliminated */
#line 385 "term_pass1.m"
                      {
#line 385 "term_pass1.m"
                        MR_Word transform_hlds__term_pass1__Goal__tmp_copy_12 = transform_hlds__term_pass1__SubGoal_105;

#line 385 "term_pass1.m"
                        transform_hlds__term_pass1__Goal_12 = transform_hlds__term_pass1__Goal__tmp_copy_12;
#line 385 "term_pass1.m"
                      }
#line 385 "term_pass1.m"
                      continue;
#line 385 "term_pass1.m"
                    }
#line 375 "term_pass1.m"
                }
#line 321 "term_pass1.m"
                break;
#line 321 "term_pass1.m"
              case (MR_Integer) 6:
#line 366 "term_pass1.m"
                {
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Cond_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Then_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 3)));
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Else_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 4)));
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_82_82;
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_83_83;
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_85_85;
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Goals_104;
#line 366 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 368 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv14_STATE_VARIABLE_Errors_68;
#line 368 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv13_STATE_VARIABLE_ModuleInfo_70;
#line 368 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv12_STATE_VARIABLE_IO_72;

#line 367 "term_pass1.m"
                  {
#line 367 "term_pass1.m"
                    transform_hlds__term_pass1__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 0) = ((MR_Box) (transform_hlds__term_pass1__Else_61));
#line 367 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "term_pass1.m"
                  }
#line 367 "term_pass1.m"
                  {
#line 367 "term_pass1.m"
                    transform_hlds__term_pass1__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_82_82, 0) = ((MR_Box) (transform_hlds__term_pass1__Then_60));
#line 367 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_82_82, 1) = ((MR_Box) (transform_hlds__term_pass1__V_83_83));
#line 367 "term_pass1.m"
                  }
#line 367 "term_pass1.m"
                  {
#line 367 "term_pass1.m"
                    transform_hlds__term_pass1__Goals_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_104, 0) = ((MR_Box) (transform_hlds__term_pass1__Cond_59));
#line 367 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_104, 1) = ((MR_Box) (transform_hlds__term_pass1__V_82_82));
#line 367 "term_pass1.m"
                  }
#line 368 "term_pass1.m"
                  {
#line 368 "term_pass1.m"
                    transform_hlds__term_pass1__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 368 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_6[0]));
#line 368 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_3));
#line 368 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 368 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 3) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 368 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 4) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_11));
#line 368 "term_pass1.m"
                  }
#line 368 "term_pass1.m"
                  {
#line 368 "term_pass1.m"
                    mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_pass1__V_85_85, transform_hlds__term_pass1__Goals_104, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67)), &transform_hlds__term_pass1__conv14_STATE_VARIABLE_Errors_68, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69)), &transform_hlds__term_pass1__conv13_STATE_VARIABLE_ModuleInfo_70, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv12_STATE_VARIABLE_IO_72);
                  }
#line 368 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = ((MR_Word) transform_hlds__term_pass1__conv14_STATE_VARIABLE_Errors_68);
#line 368 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = ((MR_Word) transform_hlds__term_pass1__conv13_STATE_VARIABLE_ModuleInfo_70);
#line 366 "term_pass1.m"
                }
#line 321 "term_pass1.m"
                break;
#line 321 "term_pass1.m"
              case (MR_Integer) 7:
#line 389 "term_pass1.m"
                {
#line 390 "term_pass1.m"
                  {
#line 390 "term_pass1.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.check_goal_non_term_calls\'/9", (MR_String) "shorthand");
#line 390 "term_pass1.m"
                    return;
                  }
#line 389 "term_pass1.m"
                }
#line 321 "term_pass1.m"
                break;
#line 321 "term_pass1.m"
            }
#line 321 "term_pass1.m"
            break;
#line 321 "term_pass1.m"
        }
#line 316 "term_pass1.m"
      }
#line 316 "term_pass1.m"
      break;
#line 316 "term_pass1.m"
    }
#line 311 "term_pass1.m"
}

#line 300 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_7_p_0(
#line 300 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 300 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_16,
#line 300 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_17,
#line 300 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_18,
#line 300 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_19)
#line 300 "term_pass1.m"
{
#line 304 "term_pass1.m"
  {
#line 304 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 304 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ProcInfo_13;
#line 304 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_14;
#line 304 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__VarTypes_15;
#line 305 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_12_12;

#line 305 "term_pass1.m"
    {
#line 305 "term_pass1.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__term_pass1__PPId_8, &transform_hlds__term_pass1__V_12_12, &transform_hlds__term_pass1__ProcInfo_13);
    }
#line 306 "term_pass1.m"
    {
#line 306 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_13, &transform_hlds__term_pass1__Goal_14);
    }
#line 307 "term_pass1.m"
    {
#line 307 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_13, &transform_hlds__term_pass1__VarTypes_15);
    }
#line 308 "term_pass1.m"
    {
#line 308 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(transform_hlds__term_pass1__PPId_8, transform_hlds__term_pass1__VarTypes_15, transform_hlds__term_pass1__Goal_14, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_16, transform_hlds__term_pass1__STATE_VARIABLE_Errors_17, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_19);
#line 308 "term_pass1.m"
      return;
    }
#line 304 "term_pass1.m"
  }
#line 300 "term_pass1.m"
}

#line 267 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
#line 267 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 267 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 267 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 267 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
#line 267 "term_pass1.m"
{
#line 270 "term_pass1.m"
  {
#line 270 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 270 "term_pass1.m"
    if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "term_pass1.m"
      if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "term_pass1.m"
        *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "term_pass1.m"
      else
#line 273 "term_pass1.m"
        {
#line 273 "term_pass1.m"
          *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "term_pass1.m"
          {
#line 274 "term_pass1.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
#line 274 "term_pass1.m"
            return;
          }
#line 273 "term_pass1.m"
        }
#line 270 "term_pass1.m"
    else
#line 270 "term_pass1.m"
      {
#line 270 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));

#line 270 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 271 "term_pass1.m"
          {
#line 271 "term_pass1.m"
            *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "term_pass1.m"
            {
#line 272 "term_pass1.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
#line 272 "term_pass1.m"
              return;
            }
#line 271 "term_pass1.m"
          }
#line 270 "term_pass1.m"
        else
#line 277 "term_pass1.m"
          {
#line 277 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplier0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 277 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSuppliers0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 277 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplier_23;
#line 277 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSuppliers_24;

#line 278 "term_pass1.m"
            {
#line 278 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__HeadVar__2_2, ((MR_Box) (transform_hlds__term_pass1__V_27_27)));
            }
#line 280 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 279 "term_pass1.m"
              transform_hlds__term_pass1__OutputSupplier_23 = (MR_Integer) 1;
#line 280 "term_pass1.m"
            else
#line 284 "term_pass1.m"
              transform_hlds__term_pass1__OutputSupplier_23 = transform_hlds__term_pass1__OutputSupplier0_21;
#line 286 "term_pass1.m"
            {
#line 286 "term_pass1.m"
              transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__V_26_26, transform_hlds__term_pass1__HeadVar__2_2, transform_hlds__term_pass1__OutputSuppliers0_22, &transform_hlds__term_pass1__OutputSuppliers_24);
            }
#line 277 "term_pass1.m"
            {
#line 277 "term_pass1.m"
              MR_Word base;
#line 277 "term_pass1.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "term_pass1.m"
              *transform_hlds__term_pass1__HeadVar__4_4 = base;
#line 277 "term_pass1.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplier_23));
#line 277 "term_pass1.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_24));
#line 277 "term_pass1.m"
            }
#line 277 "term_pass1.m"
          }
#line 270 "term_pass1.m"
      }
#line 270 "term_pass1.m"
  }
#line 267 "term_pass1.m"
}

#line 216 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_9_p_0(
#line 216 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 216 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_11,
#line 216 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_12,
#line 216 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_13,
#line 216 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_14,
#line 216 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46,
#line 216 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_47)
#line 216 "term_pass1.m"
{
#line 221 "term_pass1.m"
  {
#line 221 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_57_57;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeInfo_58_58;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_59_59;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__PredInfo_17;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ProcInfo_18;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Context_19;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Args_20;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ArgModes_21;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__VarTypes_22;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal0_23;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_24;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__EmptyMap_25;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__FunctorInfo_26;
#line 221 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__MaxErrors_27;
#line 221 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__MaxPaths_28;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Params_29;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__InVars_30;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__OutVars_31;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Path0_32;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__PathSet0_33;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Info0_34;
#line 221 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Info_35;

#line 222 "term_pass1.m"
    {
#line 222 "term_pass1.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46, transform_hlds__term_pass1__PPId_10, &transform_hlds__term_pass1__PredInfo_17, &transform_hlds__term_pass1__ProcInfo_18);
    }
#line 223 "term_pass1.m"
    {
#line 223 "term_pass1.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass1__PredInfo_17, &transform_hlds__term_pass1__Context_19);
    }
#line 224 "term_pass1.m"
    {
#line 224 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_18, &transform_hlds__term_pass1__Args_20);
    }
#line 225 "term_pass1.m"
    {
#line 225 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass1__ProcInfo_18, &transform_hlds__term_pass1__ArgModes_21);
    }
#line 226 "term_pass1.m"
    {
#line 226 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_18, &transform_hlds__term_pass1__VarTypes_22);
    }
#line 227 "term_pass1.m"
    {
#line 227 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_18, &transform_hlds__term_pass1__Goal0_23);
    }
#line 232 "term_pass1.m"
    {
#line 232 "term_pass1.m"
      transform_hlds__term_pass1__Goal_24 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_pass1__Goal0_23);
    }
#line 3430 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3432 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeInfo_58_58 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0];
#line 233 "term_pass1.m"
    {
#line 233 "term_pass1.m"
      mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_57_57, transform_hlds__term_pass1__TypeInfo_58_58, &transform_hlds__term_pass1__EmptyMap_25);
    }
#line 234 "term_pass1.m"
    transform_hlds__term_pass1__FunctorInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_11, (MR_Integer) 0)));
#line 234 "term_pass1.m"
    transform_hlds__term_pass1__MaxErrors_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_11, (MR_Integer) 1)));
#line 234 "term_pass1.m"
    transform_hlds__term_pass1__MaxPaths_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_11, (MR_Integer) 2)));
#line 235 "term_pass1.m"
    {
#line 235 "term_pass1.m"
      transform_hlds__term_traversal__init_term_traversal_params_9_p_0(transform_hlds__term_pass1__FunctorInfo_26, transform_hlds__term_pass1__PPId_10, transform_hlds__term_pass1__Context_19, transform_hlds__term_pass1__VarTypes_22, transform_hlds__term_pass1__OutputSupplierMap0_12, transform_hlds__term_pass1__EmptyMap_25, transform_hlds__term_pass1__MaxErrors_27, transform_hlds__term_pass1__MaxPaths_28, &transform_hlds__term_pass1__Params_29);
    }
#line 238 "term_pass1.m"
    {
#line 238 "term_pass1.m"
      transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46, transform_hlds__term_pass1__ArgModes_21, transform_hlds__term_pass1__Args_20, &transform_hlds__term_pass1__InVars_30, &transform_hlds__term_pass1__OutVars_31);
    }
#line 239 "term_pass1.m"
    {
#line 239 "term_pass1.m"
      transform_hlds__term_pass1__Path0_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 239 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 239 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 2) = ((MR_Box) ((MR_Integer) 0));
#line 239 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 4) = ((MR_Box) (transform_hlds__term_pass1__OutVars_31));
#line 239 "term_pass1.m"
    }
#line 3471 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeCtorInfo_59_59 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 240 "term_pass1.m"
    {
#line 240 "term_pass1.m"
      transform_hlds__term_pass1__PathSet0_33 = mercury__set__make_singleton_set_1_f_0(transform_hlds__term_pass1__TypeCtorInfo_59_59, ((MR_Box) (transform_hlds__term_pass1__Path0_32)));
    }
#line 241 "term_pass1.m"
    {
#line 241 "term_pass1.m"
      transform_hlds__term_pass1__Info0_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_34, 0) = ((MR_Box) (transform_hlds__term_pass1__PathSet0_33));
#line 241 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "term_pass1.m"
    }
#line 242 "term_pass1.m"
    {
#line 242 "term_pass1.m"
      transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_pass1__Goal_24, transform_hlds__term_pass1__Params_29, transform_hlds__term_pass1__Info0_34, &transform_hlds__term_pass1__Info_35, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_47);
    }
#line 262 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Info_35)) == (MR_mktag((MR_Integer) 1))))
#line 263 "term_pass1.m"
      {
#line 263 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Errors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_35, (MR_Integer) 0)));

#line 263 "term_pass1.m"
        *transform_hlds__term_pass1__TermErrors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_35, (MR_Integer) 1)));
#line 264 "term_pass1.m"
        {
#line 264 "term_pass1.m"
          MR_Word base;
#line 264 "term_pass1.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "term_pass1.m"
          *transform_hlds__term_pass1__Result_13 = base;
#line 264 "term_pass1.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_45));
#line 264 "term_pass1.m"
        }
#line 263 "term_pass1.m"
      }
#line 262 "term_pass1.m"
    else
#line 245 "term_pass1.m"
      {
#line 245 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Paths_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_35, (MR_Integer) 0)));
#line 245 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PathList_37;
#line 245 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__AllActiveVars_38;
#line 245 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSuppliers0_39;
#line 245 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSuppliers_40;
#line 245 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_41;
#line 245 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__SubsetErrors_42;
#line 248 "term_pass1.m"
        MR_Box transform_hlds__term_pass1__conv0_OutputSuppliers0_39;

#line 245 "term_pass1.m"
        *transform_hlds__term_pass1__TermErrors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_35, (MR_Integer) 1)));
#line 246 "term_pass1.m"
        {
#line 246 "term_pass1.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_59_59, transform_hlds__term_pass1__Paths_36, &transform_hlds__term_pass1__PathList_37);
        }
#line 247 "term_pass1.m"
        {
#line 247 "term_pass1.m"
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_pass1__PathList_37, &transform_hlds__term_pass1__AllActiveVars_38);
        }
#line 248 "term_pass1.m"
        {
#line 248 "term_pass1.m"
          mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_57_57, transform_hlds__term_pass1__TypeInfo_58_58, transform_hlds__term_pass1__OutputSupplierMap0_12, ((MR_Box) (transform_hlds__term_pass1__PPId_10)), &transform_hlds__term_pass1__conv0_OutputSuppliers0_39);
        }
#line 248 "term_pass1.m"
        transform_hlds__term_pass1__OutputSuppliers0_39 = ((MR_Word) transform_hlds__term_pass1__conv0_OutputSuppliers0_39);
#line 249 "term_pass1.m"
        {
#line 249 "term_pass1.m"
          transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__Args_20, transform_hlds__term_pass1__AllActiveVars_38, transform_hlds__term_pass1__OutputSuppliers0_39, &transform_hlds__term_pass1__OutputSuppliers_40);
        }
#line 251 "term_pass1.m"
        {
#line 251 "term_pass1.m"
          mercury__map__det_update_4_p_0(transform_hlds__term_pass1__TypeCtorInfo_57_57, transform_hlds__term_pass1__TypeInfo_58_58, ((MR_Box) (transform_hlds__term_pass1__PPId_10)), ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_40)), transform_hlds__term_pass1__OutputSupplierMap0_12, &transform_hlds__term_pass1__OutputSupplierMap_41);
        }
#line 253 "term_pass1.m"
        {
#line 253 "term_pass1.m"
          transform_hlds__term_pass1__succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__AllActiveVars_38, transform_hlds__term_pass1__InVars_30);
        }
#line 255 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 254 "term_pass1.m"
          transform_hlds__term_pass1__SubsetErrors_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "term_pass1.m"
        else
#line 256 "term_pass1.m"
          {
#line 256 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__SubsetError_43;
#line 256 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__SubsetErrorContext_44;

#line 256 "term_pass1.m"
            {
#line 256 "term_pass1.m"
              transform_hlds__term_pass1__SubsetError_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 256 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetError_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 256 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetError_43, 1) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 256 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetError_43, 2) = ((MR_Box) (transform_hlds__term_pass1__AllActiveVars_38));
#line 256 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetError_43, 3) = ((MR_Box) (transform_hlds__term_pass1__InVars_30));
#line 256 "term_pass1.m"
            }
#line 257 "term_pass1.m"
            {
#line 257 "term_pass1.m"
              transform_hlds__term_pass1__SubsetErrorContext_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetErrorContext_44, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetError_43));
#line 257 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetErrorContext_44, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_19));
#line 257 "term_pass1.m"
            }
#line 259 "term_pass1.m"
            {
#line 259 "term_pass1.m"
              transform_hlds__term_pass1__SubsetErrors_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_42, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrorContext_44));
#line 259 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "term_pass1.m"
            }
#line 256 "term_pass1.m"
          }
#line 261 "term_pass1.m"
        {
#line 261 "term_pass1.m"
          MR_Word base;
#line 261 "term_pass1.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 261 "term_pass1.m"
          *transform_hlds__term_pass1__Result_13 = base;
#line 261 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PathList_37));
#line 261 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_41));
#line 261 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_42));
#line 261 "term_pass1.m"
        }
#line 245 "term_pass1.m"
      }
#line 221 "term_pass1.m"
  }
#line 216 "term_pass1.m"
}

#line 202 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0_1(
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 202 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 202 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 202 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 202 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 202 "term_pass1.m"
{
#line 202 "term_pass1.m"
  {
#line 202 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 202 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_17;
#line 202 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 202 "term_pass1.m"
    {
#line 202 "term_pass1.m"
      transform_hlds__term_pass1__check_proc_non_term_calls_7_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_17, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 202 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_17));
#line 202 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 202 "term_pass1.m"
  }
#line 202 "term_pass1.m"
}

#line 175 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0(
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_2,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_6,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_8,
#line 175 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9,
#line 175 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_10)
#line 175 "term_pass1.m"
{
#line 182 "term_pass1.m"
  while (MR_TRUE)
#line 182 "term_pass1.m"
    {
#line 182 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 182 "term_pass1.m"
      {
#line 182 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;

#line 182 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 182 "term_pass1.m"
          {
#line 183 "term_pass1.m"
            {
#line 183 "term_pass1.m"
              MR_Word base;
#line 183 "term_pass1.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 183 "term_pass1.m"
              *transform_hlds__term_pass1__Result_6 = base;
#line 183 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__4_4));
#line 183 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__3_3));
#line 183 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__5_5));
#line 183 "term_pass1.m"
            }
#line 182 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9;
#line 182 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_8 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7;
#line 182 "term_pass1.m"
          }
#line 182 "term_pass1.m"
        else
#line 186 "term_pass1.m"
          {
#line 186 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__TypeCtorInfo_67_67;
#line 186 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPId_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 186 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Result1_37;
#line 186 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ProcTermErrors_38;
#line 186 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__MaxErrors_40;
#line 186 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_55_55;
#line 186 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_57_57;
#line 186 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_58_58;
#line 190 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_39_39;
#line 190 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__V_41_41;

#line 187 "term_pass1.m"
            {
#line 187 "term_pass1.m"
              transform_hlds__term_pass1__find_arg_sizes_pred_9_p_0(transform_hlds__term_pass1__PPId_27, transform_hlds__term_pass1__PassInfo_2, transform_hlds__term_pass1__HeadVar__3_3, &transform_hlds__term_pass1__Result1_37, &transform_hlds__term_pass1__ProcTermErrors_38, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_55_55);
            }
#line 3781 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeCtorInfo_67_67 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 189 "term_pass1.m"
            {
#line 189 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_57_57 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_67_67, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7, transform_hlds__term_pass1__ProcTermErrors_38);
            }
#line 190 "term_pass1.m"
            transform_hlds__term_pass1__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 0)));
#line 190 "term_pass1.m"
            transform_hlds__term_pass1__MaxErrors_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 1)));
#line 190 "term_pass1.m"
            transform_hlds__term_pass1__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 2)));
#line 191 "term_pass1.m"
            {
#line 191 "term_pass1.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_67_67, transform_hlds__term_pass1__MaxErrors_40, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_57_57, &transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_58_58);
            }
#line 205 "term_pass1.m"
            if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result1_37)) == (MR_mktag((MR_Integer) 1))))
#line 193 "term_pass1.m"
              {
#line 193 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__OtherTermErrors_43;
#line 202 "term_pass1.m"
                MR_Box transform_hlds__term_pass1__conv4_OtherTermErrors_43;
#line 202 "term_pass1.m"
                MR_Box transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_10;
#line 202 "term_pass1.m"
                MR_Box transform_hlds__term_pass1__conv2_STATE_VARIABLE_IO_12;

#line 194 "term_pass1.m"
                *transform_hlds__term_pass1__Result_6 = transform_hlds__term_pass1__Result1_37;
#line 202 "term_pass1.m"
                {
#line 202 "term_pass1.m"
                  mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[6], transform_hlds__term_pass1__PPIds_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_pass1__conv4_OtherTermErrors_43, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_55_55)), &transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv2_STATE_VARIABLE_IO_12);
                }
#line 202 "term_pass1.m"
                transform_hlds__term_pass1__OtherTermErrors_43 = ((MR_Word) transform_hlds__term_pass1__conv4_OtherTermErrors_43);
#line 202 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_10);
#line 204 "term_pass1.m"
                {
#line 204 "term_pass1.m"
                  mercury__list__append_3_p_1(transform_hlds__term_pass1__TypeCtorInfo_67_67, transform_hlds__term_pass1__OtherTermErrors_43, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_58_58, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_8);
#line 204 "term_pass1.m"
                  return;
                }
#line 193 "term_pass1.m"
              }
#line 205 "term_pass1.m"
            else
#line 206 "term_pass1.m"
              {
#line 206 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Paths1_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_37, (MR_Integer) 0)));
#line 206 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__OutputSupplierMap1_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_37, (MR_Integer) 1)));
#line 206 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__SubsetErrors1_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_37, (MR_Integer) 2)));
#line 206 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Paths_47;
#line 206 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__SubsetErrors_48;

#line 207 "term_pass1.m"
                {
#line 207 "term_pass1.m"
                  transform_hlds__term_pass1__Paths_47 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_pass1__HeadVar__4_4, transform_hlds__term_pass1__Paths1_44);
                }
#line 208 "term_pass1.m"
                {
#line 208 "term_pass1.m"
                  transform_hlds__term_pass1__SubsetErrors_48 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_67_67, transform_hlds__term_pass1__HeadVar__5_5, transform_hlds__term_pass1__SubsetErrors1_46);
                }
#line 209 "term_pass1.m"
                /* direct tailcall eliminated */
#line 209 "term_pass1.m"
                {
#line 209 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass1__PPIds_28;
#line 209 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__3__tmp_copy_3 = transform_hlds__term_pass1__OutputSupplierMap1_45;
#line 209 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__4__tmp_copy_4 = transform_hlds__term_pass1__Paths_47;
#line 209 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__5__tmp_copy_5 = transform_hlds__term_pass1__SubsetErrors_48;
#line 209 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_7 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_58_58;
#line 209 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_55_55;

#line 209 "term_pass1.m"
                  transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9;
#line 209 "term_pass1.m"
                  transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_7;
#line 209 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__5_5 = transform_hlds__term_pass1__HeadVar__5__tmp_copy_5;
#line 209 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__4_4 = transform_hlds__term_pass1__HeadVar__4__tmp_copy_4;
#line 209 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__3_3 = transform_hlds__term_pass1__HeadVar__3__tmp_copy_3;
#line 209 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__HeadVar__1__tmp_copy_1;
#line 209 "term_pass1.m"
                }
#line 209 "term_pass1.m"
                continue;
#line 206 "term_pass1.m"
              }
#line 186 "term_pass1.m"
          }
#line 182 "term_pass1.m"
      }
#line 182 "term_pass1.m"
      break;
#line 182 "term_pass1.m"
    }
#line 175 "term_pass1.m"
}

#line 151 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_p_0(
#line 151 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_10,
#line 151 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_11,
#line 151 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_12,
#line 151 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_13,
#line 151 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_14,
#line 151 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_23,
#line 151 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_24)
#line 151 "term_pass1.m"
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
        MR_Word transform_hlds__term_pass1__Result0_17;
#line 157 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TermErrors0_18;
#line 157 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30;

#line 158 "term_pass1.m"
        {
#line 158 "term_pass1.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0(transform_hlds__term_pass1__SCC_10, transform_hlds__term_pass1__PassInfo_11, transform_hlds__term_pass1__OutputSupplierMap0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__Result0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__TermErrors0_18, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30);
        }
#line 164 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result0_17)) == (MR_mktag((MR_Integer) 1))))
#line 161 "term_pass1.m"
          {
#line 162 "term_pass1.m"
            *transform_hlds__term_pass1__Result_13 = transform_hlds__term_pass1__Result0_17;
#line 163 "term_pass1.m"
            *transform_hlds__term_pass1__TermErrors_14 = transform_hlds__term_pass1__TermErrors0_18;
#line 161 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30;
#line 161 "term_pass1.m"
          }
#line 164 "term_pass1.m"
        else
#line 165 "term_pass1.m"
          {
#line 165 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplierMap1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_17, (MR_Integer) 1)));
#line 165 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_17, (MR_Integer) 0)));
#line 165 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_17, (MR_Integer) 2)));

#line 166 "term_pass1.m"
            {
#line 166 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap1_21)), ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap0_12)));
            }
#line 169 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 167 "term_pass1.m"
              {
#line 167 "term_pass1.m"
                *transform_hlds__term_pass1__Result_13 = transform_hlds__term_pass1__Result0_17;
#line 168 "term_pass1.m"
                *transform_hlds__term_pass1__TermErrors_14 = transform_hlds__term_pass1__TermErrors0_18;
#line 167 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30;
#line 167 "term_pass1.m"
              }
#line 169 "term_pass1.m"
            else
#line 170 "term_pass1.m"
              {
#line 170 "term_pass1.m"
                /* direct tailcall eliminated */
#line 170 "term_pass1.m"
                {
#line 170 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_12 = transform_hlds__term_pass1__OutputSupplierMap1_21;
#line 170 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0__tmp_copy_23 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30;

#line 170 "term_pass1.m"
                  transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_23 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0__tmp_copy_23;
#line 170 "term_pass1.m"
                  transform_hlds__term_pass1__OutputSupplierMap0_12 = transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_12;
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
#line 151 "term_pass1.m"
}

#line 145 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
#line 145 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 145 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 145 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 145 "term_pass1.m"
{
#line 145 "term_pass1.m"
  {
#line 145 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 145 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__2_19;

#line 145 "term_pass1.m"
    {
#line 145 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__145__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_HeadVar__2_19);
    }
#line 145 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__2_19));
#line 145 "term_pass1.m"
  }
#line 145 "term_pass1.m"
}

#line 136 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
#line 136 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 136 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_2,
#line 136 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3)
#line 136 "term_pass1.m"
{
#line 139 "term_pass1.m"
  {
#line 139 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 139 "term_pass1.m"
    if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 139 "term_pass1.m"
      {
#line 140 "term_pass1.m"
        {
#line 140 "term_pass1.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], transform_hlds__term_pass1__HeadVar__3_3);
#line 140 "term_pass1.m"
          return;
        }
#line 139 "term_pass1.m"
      }
#line 139 "term_pass1.m"
    else
#line 141 "term_pass1.m"
      {
#line 141 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 141 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PPIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 141 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10;
#line 141 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__ProcInfo_12;
#line 141 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__HeadVars_13;
#line 141 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__BoolList_17;
#line 143 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_11_11;

#line 142 "term_pass1.m"
        {
#line 142 "term_pass1.m"
          transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__PPIds_7, transform_hlds__term_pass1__ModuleInfo_2, &transform_hlds__term_pass1__OutputSupplierMap0_10);
        }
#line 143 "term_pass1.m"
        {
#line 143 "term_pass1.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_2, transform_hlds__term_pass1__PPId_6, &transform_hlds__term_pass1__V_11_11, &transform_hlds__term_pass1__ProcInfo_12);
        }
#line 144 "term_pass1.m"
        {
#line 144 "term_pass1.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_12, &transform_hlds__term_pass1__HeadVars_13);
        }
#line 146 "term_pass1.m"
        {
#line 146 "term_pass1.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[5], transform_hlds__term_pass1__HeadVars_13, &transform_hlds__term_pass1__BoolList_17);
        }
#line 147 "term_pass1.m"
        {
#line 147 "term_pass1.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass1__PPId_6)), ((MR_Box) (transform_hlds__term_pass1__BoolList_17)), transform_hlds__term_pass1__OutputSupplierMap0_10, transform_hlds__term_pass1__HeadVar__3_3);
#line 147 "term_pass1.m"
          return;
        }
#line 141 "term_pass1.m"
      }
#line 139 "term_pass1.m"
  }
#line 136 "term_pass1.m"
}

#line 420 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_2(
#line 420 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 420 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 420 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 420 "term_pass1.m"
{
#line 420 "term_pass1.m"
  {
#line 420 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 420 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_HeadVar__4_4;

#line 420 "term_pass1.m"
    {
#line 420 "term_pass1.m"
      transform_hlds__term_pass1__lookup_coeff_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv1_HeadVar__4_4);
    }
#line 420 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv1_HeadVar__4_4));
#line 420 "term_pass1.m"
  }
#line 420 "term_pass1.m"
}

#line 438 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_1(
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 438 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 438 "term_pass1.m"
{
#line 438 "term_pass1.m"
  {
#line 438 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 438 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__2_20;

#line 438 "term_pass1.m"
    {
#line 438 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__438__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_HeadVar__2_20);
    }
#line 438 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__2_20));
#line 438 "term_pass1.m"
  }
#line 438 "term_pass1.m"
}

#line 49 "term_pass1.m"
void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0(
#line 49 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_9,
#line 49 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_10,
#line 49 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__ArgSize_11,
#line 49 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_12,
#line 49 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_29,
#line 49 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30)
#line 49 "term_pass1.m"
{
#line 94 "term_pass1.m"
  {
#line 94 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 94 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__InitOutputSupplierMap_15;
#line 94 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Result_16;

#line 95 "term_pass1.m"
    {
#line 95 "term_pass1.m"
      transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__SCC_9, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__term_pass1__InitOutputSupplierMap_15);
    }
#line 96 "term_pass1.m"
    {
#line 96 "term_pass1.m"
      transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_p_0(transform_hlds__term_pass1__SCC_9, transform_hlds__term_pass1__PassInfo_10, transform_hlds__term_pass1__InitOutputSupplierMap_15, &transform_hlds__term_pass1__Result_16, transform_hlds__term_pass1__TermErrors_12, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30);
    }
#line 125 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result_16)) == (MR_mktag((MR_Integer) 1))))
#line 126 "term_pass1.m"
      {
#line 126 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Errors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Result_16, (MR_Integer) 0)));

#line 127 "term_pass1.m"
        {
#line 127 "term_pass1.m"
          MR_Word base;
#line 127 "term_pass1.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 127 "term_pass1.m"
          *transform_hlds__term_pass1__ArgSize_11 = base;
#line 127 "term_pass1.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_28));
#line 127 "term_pass1.m"
        }
#line 126 "term_pass1.m"
      }
#line 125 "term_pass1.m"
    else
#line 99 "term_pass1.m"
      {
#line 99 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Paths_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_16, (MR_Integer) 0)));
#line 99 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_16, (MR_Integer) 1)));
#line 99 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__SubsetErrors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_16, (MR_Integer) 2)));

#line 103 "term_pass1.m"
        if ((transform_hlds__term_pass1__SubsetErrors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "term_pass1.m"
          if ((transform_hlds__term_pass1__Paths_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 106 "term_pass1.m"
            {
#line 106 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Context_22;
#line 106 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__ArgSizeError_23;
#line 106 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_40_40;

#line 107 "term_pass1.m"
              {
#line 107 "term_pass1.m"
                transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__SCC_9, *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30, &transform_hlds__term_pass1__Context_22);
              }
#line 108 "term_pass1.m"
              {
#line 108 "term_pass1.m"
                transform_hlds__term_pass1__ArgSizeError_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 108 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 108 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_23, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_22));
#line 108 "term_pass1.m"
              }
#line 109 "term_pass1.m"
              {
#line 109 "term_pass1.m"
                transform_hlds__term_pass1__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 109 "term_pass1.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_40_40, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_23));
#line 109 "term_pass1.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 109 "term_pass1.m"
              }
#line 109 "term_pass1.m"
              {
#line 109 "term_pass1.m"
                MR_Word base;
#line 109 "term_pass1.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 109 "term_pass1.m"
                *transform_hlds__term_pass1__ArgSize_11 = base;
#line 109 "term_pass1.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_40_40));
#line 109 "term_pass1.m"
              }
#line 106 "term_pass1.m"
            }
#line 110 "term_pass1.m"
          else
#line 4312 "transform_hlds.term_pass1.c"
            {
#line 4314 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Varset_54;
#line 4316 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Equations_55;
#line 4318 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Objective_56;
#line 4320 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__PPVars_57;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_25_91;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeInfo_26_92;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_27_93;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeInfo_28_94;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Varset0_77;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__PPVars0_78;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__EqnSet0_79;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__EqnSet_80;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Vars_81;
#line 430 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Convert_82;

#line 431 "term_pass1.m"
              {
#line 431 "term_pass1.m"
                mercury__varset__init_1_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Varset0_77);
              }
#line 4348 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeCtorInfo_25_91 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4350 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeInfo_26_92 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 432 "term_pass1.m"
              {
#line 432 "term_pass1.m"
                mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_91, transform_hlds__term_pass1__TypeInfo_26_92, &transform_hlds__term_pass1__PPVars0_78);
              }
#line 4357 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeCtorInfo_27_93 = (MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0;
#line 433 "term_pass1.m"
              {
#line 433 "term_pass1.m"
                mercury__set__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_93, &transform_hlds__term_pass1__EqnSet0_79);
              }
#line 434 "term_pass1.m"
              {
#line 434 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1__convert_equations_2_7_p_0(transform_hlds__term_pass1__Paths_17, transform_hlds__term_pass1__PPVars0_78, &transform_hlds__term_pass1__PPVars_57, transform_hlds__term_pass1__Varset0_77, &transform_hlds__term_pass1__Varset_54, transform_hlds__term_pass1__EqnSet0_79, &transform_hlds__term_pass1__EqnSet_80);
              }
#line 430 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 430 "term_pass1.m"
                {
#line 436 "term_pass1.m"
                  {
#line 436 "term_pass1.m"
                    mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_93, transform_hlds__term_pass1__EqnSet_80, &transform_hlds__term_pass1__Equations_55);
                  }
#line 437 "term_pass1.m"
                  {
#line 437 "term_pass1.m"
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_91, transform_hlds__term_pass1__TypeInfo_26_92, transform_hlds__term_pass1__PPVars_57, &transform_hlds__term_pass1__Vars_81);
                  }
#line 438 "term_pass1.m"
                  transform_hlds__term_pass1__Convert_82 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[4];
#line 4385 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__TypeInfo_28_94 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1];
#line 439 "term_pass1.m"
                  {
#line 439 "term_pass1.m"
                    mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeInfo_26_92, transform_hlds__term_pass1__TypeInfo_28_94, transform_hlds__term_pass1__Convert_82, transform_hlds__term_pass1__Vars_81, &transform_hlds__term_pass1__Objective_56);
                  }
#line 439 "term_pass1.m"
                  transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 430 "term_pass1.m"
                }
#line 4396 "transform_hlds.term_pass1.c"
              if (transform_hlds__term_pass1__succeeded)
#line 4398 "transform_hlds.term_pass1.c"
                {
#line 4400 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__TypeCtorInfo_25_67 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4402 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__TypeInfo_26_68 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 4404 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__AllVars0_58;
#line 4406 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__AllVars_59;
#line 4408 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__Soln_60;

#line 412 "term_pass1.m"
                  {
#line 412 "term_pass1.m"
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_67, transform_hlds__term_pass1__TypeInfo_26_68, transform_hlds__term_pass1__PPVars_57, &transform_hlds__term_pass1__AllVars0_58);
                  }
#line 413 "term_pass1.m"
                  {
#line 413 "term_pass1.m"
                    mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__term_pass1__TypeInfo_26_68, transform_hlds__term_pass1__AllVars0_58, &transform_hlds__term_pass1__AllVars_59);
                  }
#line 414 "term_pass1.m"
                  {
#line 414 "term_pass1.m"
                    libs__lp__lp_solve_8_p_0(transform_hlds__term_pass1__Equations_55, (MR_Integer) 1, transform_hlds__term_pass1__Objective_56, transform_hlds__term_pass1__Varset_54, transform_hlds__term_pass1__AllVars_59, &transform_hlds__term_pass1__Soln_60);
                  }
#line 4426 "transform_hlds.term_pass1.c"
                  if ((transform_hlds__term_pass1__Soln_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4428 "transform_hlds.term_pass1.c"
                    {
#line 4430 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__V_37_37;
#line 4432 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__Context_42;
#line 4434 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__ArgSizeError_43;

#line 118 "term_pass1.m"
                      {
#line 118 "term_pass1.m"
                        transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__SCC_9, *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30, &transform_hlds__term_pass1__Context_42);
                      }
#line 119 "term_pass1.m"
                      {
#line 119 "term_pass1.m"
                        transform_hlds__term_pass1__ArgSizeError_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 119 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_43, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_42));
#line 119 "term_pass1.m"
                      }
#line 121 "term_pass1.m"
                      {
#line 121 "term_pass1.m"
                        transform_hlds__term_pass1__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_37_37, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_43));
#line 121 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "term_pass1.m"
                      }
#line 121 "term_pass1.m"
                      {
#line 121 "term_pass1.m"
                        MR_Word base;
#line 121 "term_pass1.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 121 "term_pass1.m"
                        *transform_hlds__term_pass1__ArgSize_11 = base;
#line 121 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_37_37));
#line 121 "term_pass1.m"
                      }
#line 4474 "transform_hlds.term_pass1.c"
                    }
#line 4476 "transform_hlds.term_pass1.c"
                  else
#line 4478 "transform_hlds.term_pass1.c"
                    {
#line 4480 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__Solution_27;
#line 4482 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__SolnVal_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_60, (MR_Integer) 1)));
#line 4484 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__V_66_66;
#line 419 "term_pass1.m"
                      MR_Float transform_hlds__term_pass1___ObjVal_61 = MR_unbox_float((MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_60, (MR_Integer) 0)));

#line 420 "term_pass1.m"
                      {
#line 420 "term_pass1.m"
                        transform_hlds__term_pass1__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 420 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[0]));
#line 420 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_2));
#line 420 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 420 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 3) = ((MR_Box) (transform_hlds__term_pass1__PPVars_57));
#line 420 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 4) = ((MR_Box) (transform_hlds__term_pass1__SolnVal_62));
#line 420 "term_pass1.m"
                      }
#line 420 "term_pass1.m"
                      {
#line 420 "term_pass1.m"
                        mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_67, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[0], transform_hlds__term_pass1__V_66_66, transform_hlds__term_pass1__SCC_9, &transform_hlds__term_pass1__Solution_27);
                      }
#line 115 "term_pass1.m"
                      {
#line 115 "term_pass1.m"
                        MR_Word base;
#line 115 "term_pass1.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "term_pass1.m"
                        *transform_hlds__term_pass1__ArgSize_11 = base;
#line 115 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Solution_27));
#line 115 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_18));
#line 115 "term_pass1.m"
                      }
#line 4524 "transform_hlds.term_pass1.c"
                    }
#line 4526 "transform_hlds.term_pass1.c"
                }
#line 4528 "transform_hlds.term_pass1.c"
              else
#line 4530 "transform_hlds.term_pass1.c"
                {
#line 4532 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__V_98_98;
#line 4534 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__Context_100;
#line 4536 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__ArgSizeError_101;

#line 118 "term_pass1.m"
                  {
#line 118 "term_pass1.m"
                    transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__SCC_9, *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30, &transform_hlds__term_pass1__Context_100);
                  }
#line 119 "term_pass1.m"
                  {
#line 119 "term_pass1.m"
                    transform_hlds__term_pass1__ArgSizeError_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 119 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_101, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_100));
#line 119 "term_pass1.m"
                  }
#line 121 "term_pass1.m"
                  {
#line 121 "term_pass1.m"
                    transform_hlds__term_pass1__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_98_98, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_101));
#line 121 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "term_pass1.m"
                  }
#line 121 "term_pass1.m"
                  {
#line 121 "term_pass1.m"
                    MR_Word base;
#line 121 "term_pass1.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 121 "term_pass1.m"
                    *transform_hlds__term_pass1__ArgSize_11 = base;
#line 121 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_98_98));
#line 121 "term_pass1.m"
                  }
#line 4576 "transform_hlds.term_pass1.c"
                }
#line 4578 "transform_hlds.term_pass1.c"
            }
#line 103 "term_pass1.m"
        else
#line 102 "term_pass1.m"
          {
#line 102 "term_pass1.m"
            MR_Word base;
#line 102 "term_pass1.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 102 "term_pass1.m"
            *transform_hlds__term_pass1__ArgSize_11 = base;
#line 102 "term_pass1.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_19));
#line 102 "term_pass1.m"
          }
#line 99 "term_pass1.m"
      }
#line 94 "term_pass1.m"
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
