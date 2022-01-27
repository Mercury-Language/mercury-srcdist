/*
** Automatically generated from `term_pass1.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "float.mih"
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
#include "set_tree234.mih"
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
#include "transform_hlds.term_traversal.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 141 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0;

#line 144 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 147 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 150 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 153 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0;

#line 156 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 162 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 168 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 171 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

#line 174 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

#line 177 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0;

#line 180 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 183 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2];

#line 186 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0;

#line 189 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

#line 192 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1];

#line 195 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1;

#line 198 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1];

#line 201 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1];

#line 204 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0[2];

#line 207 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2];

#line 210 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2];

#line 213 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

#line 216 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3];

#line 219 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0;

#line 222 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1];

#line 225 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1;

#line 228 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1];

#line 231 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1];

#line 234 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0[2];

#line 237 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2];

#line 240 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2];

#line 243 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
#line 246 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 248 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

#line 251 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
#line 254 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 256 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 258 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

#line 261 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
#line 264 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 266 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

#line 269 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
#line 272 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 274 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 276 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

#line 144 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_52_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 144 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_19);

#line 452 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_p_0(
#line 452 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_53,
#line 452 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_54,
#line 452 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_55,
#line 452 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_56,
#line 452 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_57,
#line 452 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__6_58);

#line 437 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__437__1_2_p_0(
#line 437 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_19,
#line 437 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_20);

#line 144 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__144__1_2_p_0(
#line 144 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_18,
#line 144 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_19);

#line 76 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
#line 76 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
#line 76 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 76 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3);

#line 76 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
#line 76 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 76 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2);

#line 461 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
#line 461 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPIds_5,
#line 461 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Soln_6,
#line 461 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_7,
#line 461 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

#line 452 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
#line 452 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 452 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 452 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
#line 452 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
#line 452 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
#line 452 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
#line 452 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6);

#line 440 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
#line 440 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 440 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
#line 440 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
#line 440 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
#line 440 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
#line 440 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
#line 440 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7);

#line 392 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_9_p_0(
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_11,
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_18,
#line 392 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_19,
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_20,
#line 392 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_21);

#line 362 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_4(
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 362 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 362 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 362 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 367 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_3(
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 367 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 367 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 367 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 358 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_2(
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 358 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_1(
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 310 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_11,
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Goal_12,
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67,
#line 310 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_68,
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69,
#line 310 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70);

#line 299 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_7_p_0(
#line 299 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 299 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_16,
#line 299 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_17,
#line 299 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_18,
#line 299 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_19);

#line 266 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
#line 266 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 266 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 266 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 266 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

#line 215 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_9_p_0(
#line 215 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 215 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_11,
#line 215 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_12,
#line 215 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_13,
#line 215 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_14,
#line 215 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46,
#line 215 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_47);

#line 201 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0_1(
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 201 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 201 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 201 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7);

#line 174 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0(
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_2,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
#line 174 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_6,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7,
#line 174 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_8,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9,
#line 174 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_10);

#line 150 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_p_0(
#line 150 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_10,
#line 150 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_11,
#line 150 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_12,
#line 150 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_13,
#line 150 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_14,
#line 150 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_23,
#line 150 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_24);

#line 144 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
#line 144 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 144 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 144 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

#line 135 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
#line 135 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 135 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_2,
#line 135 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3);

#line 419 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_2(
#line 419 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 419 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 419 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

#line 437 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_1(
#line 437 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 437 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 437 "term_pass1.m"
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



#line 865 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 873 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 881 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 890 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 899 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 908 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 917 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 925 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 933 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 941 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 950 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 958 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 967 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0
  }
};

#line 975 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 983 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 992 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

#line 998 "transform_hlds.term_pass1.c"
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

#line 1013 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0
  }
};

#line 1021 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 1026 "transform_hlds.term_pass1.c"
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

#line 1041 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

#line 1046 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1
};

#line 1051 "transform_hlds.term_pass1.c"
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

#line 1065 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

#line 1071 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1077 "transform_hlds.term_pass1.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_arg_size_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass1",
  (MR_String) "arg_size_result",
  {
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0
  },
  {
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0
};

#line 1098 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

#line 1106 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 1113 "transform_hlds.term_pass1.c"
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

#line 1128 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
};

#line 1133 "transform_hlds.term_pass1.c"
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

#line 1148 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

#line 1153 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1
};

#line 1158 "transform_hlds.term_pass1.c"
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

#line 1172 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

#line 1178 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1184 "transform_hlds.term_pass1.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass1__transform_hlds__term_pass1__type_ctor_info_pass1_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass1____Unify____pass1_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass1____Compare____pass1_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass1",
  (MR_String) "pass1_result",
  {
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0
  },
  {
    transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0
};

#line 1205 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
#line 1208 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 1210 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
#line 1212 "transform_hlds.term_pass1.c"
{
#line 1214 "transform_hlds.term_pass1.c"
  {
#line 1216 "transform_hlds.term_pass1.c"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 1219 "transform_hlds.term_pass1.c"
    {
#line 1221 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____arg_size_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
#line 1224 "transform_hlds.term_pass1.c"
    return transform_hlds__term_pass1__succeeded;
#line 1226 "transform_hlds.term_pass1.c"
  }
#line 1228 "transform_hlds.term_pass1.c"
}

#line 1231 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
#line 1234 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 1236 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 1238 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
#line 1240 "transform_hlds.term_pass1.c"
{
#line 1242 "transform_hlds.term_pass1.c"
  {
#line 1244 "transform_hlds.term_pass1.c"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

#line 1247 "transform_hlds.term_pass1.c"
    {
#line 1249 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1____Compare____arg_size_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
#line 1252 "transform_hlds.term_pass1.c"
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
#line 1254 "transform_hlds.term_pass1.c"
  }
#line 1256 "transform_hlds.term_pass1.c"
}

#line 1259 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
#line 1262 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 1264 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
#line 1266 "transform_hlds.term_pass1.c"
{
#line 1268 "transform_hlds.term_pass1.c"
  {
#line 1270 "transform_hlds.term_pass1.c"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 1273 "transform_hlds.term_pass1.c"
    {
#line 1275 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____pass1_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
#line 1278 "transform_hlds.term_pass1.c"
    return transform_hlds__term_pass1__succeeded;
#line 1280 "transform_hlds.term_pass1.c"
  }
#line 1282 "transform_hlds.term_pass1.c"
}

#line 1285 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
#line 1288 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 1290 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 1292 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
#line 1294 "transform_hlds.term_pass1.c"
{
#line 1296 "transform_hlds.term_pass1.c"
  {
#line 1298 "transform_hlds.term_pass1.c"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

#line 1301 "transform_hlds.term_pass1.c"
    {
#line 1303 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1____Compare____pass1_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
#line 1306 "transform_hlds.term_pass1.c"
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
#line 1308 "transform_hlds.term_pass1.c"
  }
#line 1310 "transform_hlds.term_pass1.c"
}

#line 144 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_52_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 144 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_19)
#line 144 "term_pass1.m"
{
#line 144 "term_pass1.m"
  {
#line 144 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 144 "term_pass1.m"
    *transform_hlds__term_pass1__HeadVar__2_19 = (MR_Integer) 0;
#line 144 "term_pass1.m"
  }
#line 144 "term_pass1.m"
}

#line 452 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_p_0(
#line 452 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_53,
#line 452 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_54,
#line 452 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_55,
#line 452 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_56,
#line 452 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_57,
#line 452 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__6_58)
#line 452 "term_pass1.m"
{
#line 452 "term_pass1.m"
  {
#line 452 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 452 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var_37;
#line 475 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var0_87;
#line 473 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv0_Var0_87;

#line 473 "term_pass1.m"
    {
#line 473 "term_pass1.m"
      transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__HeadVar__5_57, ((MR_Box) (transform_hlds__term_pass1__HeadVar__1_53)), &transform_hlds__term_pass1__conv0_Var0_87);
    }
#line 473 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 473 "term_pass1.m"
      {
#line 473 "term_pass1.m"
        transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
#line 473 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 473 "term_pass1.m"
      }
#line 475 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 474 "term_pass1.m"
      {
#line 474 "term_pass1.m"
        transform_hlds__term_pass1__Var_37 = transform_hlds__term_pass1__Var0_87;
#line 474 "term_pass1.m"
        *transform_hlds__term_pass1__HeadVar__6_58 = transform_hlds__term_pass1__HeadVar__5_57;
#line 474 "term_pass1.m"
        *transform_hlds__term_pass1__HeadVar__4_56 = transform_hlds__term_pass1__HeadVar__3_55;
#line 474 "term_pass1.m"
      }
#line 475 "term_pass1.m"
    else
#line 476 "term_pass1.m"
      {
#line 476 "term_pass1.m"
        {
#line 476 "term_pass1.m"
          mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Var_37, transform_hlds__term_pass1__HeadVar__3_55, transform_hlds__term_pass1__HeadVar__4_56);
        }
#line 477 "term_pass1.m"
        {
#line 477 "term_pass1.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__HeadVar__1_53)), ((MR_Box) (transform_hlds__term_pass1__Var_37)), transform_hlds__term_pass1__HeadVar__5_57, transform_hlds__term_pass1__HeadVar__6_58);
        }
#line 476 "term_pass1.m"
      }
#line 455 "term_pass1.m"
    {
#line 455 "term_pass1.m"
      MR_Word base;
#line 455 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 455 "term_pass1.m"
      *transform_hlds__term_pass1__HeadVar__2_54 = base;
#line 455 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Var_37));
#line 455 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) -1.0000000000000000);
#line 455 "term_pass1.m"
    }
#line 452 "term_pass1.m"
  }
#line 452 "term_pass1.m"
}

#line 437 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__437__1_2_p_0(
#line 437 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_19,
#line 437 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_20)
#line 437 "term_pass1.m"
{
#line 437 "term_pass1.m"
  {
#line 437 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 437 "term_pass1.m"
    {
#line 437 "term_pass1.m"
      MR_Word base;
#line 437 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "term_pass1.m"
      *transform_hlds__term_pass1__HeadVar__2_20 = base;
#line 437 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__1_19));
#line 437 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 437 "term_pass1.m"
    }
#line 437 "term_pass1.m"
  }
#line 437 "term_pass1.m"
}

#line 144 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__144__1_2_p_0(
#line 144 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_18,
#line 144 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__2_19)
#line 144 "term_pass1.m"
{
#line 144 "term_pass1.m"
  {
#line 144 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 144 "term_pass1.m"
    {
#line 144 "term_pass1.m"
      transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_52_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass1__HeadVar__2_19);
#line 144 "term_pass1.m"
      return;
    }
#line 144 "term_pass1.m"
  }
#line 144 "term_pass1.m"
}

#line 76 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0(
#line 76 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
#line 76 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 76 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3)
#line 76 "term_pass1.m"
{
#line 76 "term_pass1.m"
  {
#line 76 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 76 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_22 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;
#line 76 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_23 = (MR_Integer) transform_hlds__term_pass1__HeadVar__3_3;

#line 76 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_22 == transform_hlds__term_pass1__CastY_23);
#line 76 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 1505 "transform_hlds.term_pass1.c"
      *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "term_pass1.m"
    else
#line 76 "term_pass1.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 76 "term_pass1.m"
        {
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "term_pass1.m"
          if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 76 "term_pass1.m"
            {
#line 76 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));

#line 76 "term_pass1.m"
              {
#line 76 "term_pass1.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_28_28)), ((MR_Box) (transform_hlds__term_pass1__V_21_21)));
#line 76 "term_pass1.m"
                return;
              }
#line 76 "term_pass1.m"
            }
#line 76 "term_pass1.m"
          else
#line 1534 "transform_hlds.term_pass1.c"
            *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "term_pass1.m"
        }
#line 76 "term_pass1.m"
      else
#line 76 "term_pass1.m"
        {
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "term_pass1.m"
          if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1551 "transform_hlds.term_pass1.c"
            *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "term_pass1.m"
          else
#line 76 "term_pass1.m"
            {
#line 76 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 2)));
#line 76 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_10_10;

#line 76 "term_pass1.m"
              {
#line 76 "term_pass1.m"
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[6], &transform_hlds__term_pass1__V_10_10, ((MR_Box) (transform_hlds__term_pass1__V_31_31)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
              }
#line 1571 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_10_10 == (MR_Integer) 0);
#line 76 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
#line 76 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 76 "term_pass1.m"
                *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_10_10;
#line 76 "term_pass1.m"
              else
#line 76 "term_pass1.m"
                {
#line 76 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_11_11;

#line 76 "term_pass1.m"
                  {
#line 76 "term_pass1.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], &transform_hlds__term_pass1__V_11_11, ((MR_Box) (transform_hlds__term_pass1__V_30_30)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
                  }
#line 1591 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_11_11 == (MR_Integer) 0);
#line 76 "term_pass1.m"
                  transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
#line 76 "term_pass1.m"
                  if (transform_hlds__term_pass1__succeeded)
#line 76 "term_pass1.m"
                    *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_11_11;
#line 76 "term_pass1.m"
                  else
#line 76 "term_pass1.m"
                    {
#line 76 "term_pass1.m"
                      {
#line 76 "term_pass1.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_29_29)), ((MR_Box) (transform_hlds__term_pass1__V_9_9)));
#line 76 "term_pass1.m"
                        return;
                      }
#line 76 "term_pass1.m"
                    }
#line 76 "term_pass1.m"
                }
#line 76 "term_pass1.m"
            }
#line 76 "term_pass1.m"
        }
#line 76 "term_pass1.m"
  }
#line 76 "term_pass1.m"
}

#line 76 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0(
#line 76 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 76 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2)
#line 76 "term_pass1.m"
{
#line 76 "term_pass1.m"
  {
#line 76 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 76 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_11 = (MR_Integer) transform_hlds__term_pass1__HeadVar__1_1;
#line 76 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_12 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;

#line 76 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_11 == transform_hlds__term_pass1__CastY_12);
#line 76 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 76 "term_pass1.m"
      transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 76 "term_pass1.m"
    else
#line 76 "term_pass1.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 76 "term_pass1.m"
        {
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__TypeInfo_13_13;
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_10_10;

#line 76 "term_pass1.m"
          transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 76 "term_pass1.m"
          if (transform_hlds__term_pass1__succeeded)
#line 76 "term_pass1.m"
            {
#line 76 "term_pass1.m"
              transform_hlds__term_pass1__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 1668 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1670 "transform_hlds.term_pass1.c"
              {
#line 1672 "transform_hlds.term_pass1.c"
                return transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_pass1__V_9_9)), ((MR_Box) (transform_hlds__term_pass1__V_10_10)));
              }
#line 76 "term_pass1.m"
            }
#line 76 "term_pass1.m"
        }
#line 76 "term_pass1.m"
      else
#line 76 "term_pass1.m"
        {
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__TypeInfo_14_14;
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__TypeInfo_15_15;
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__TypeInfo_16_16;
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 2)));
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_6_6;
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_7_7;
#line 76 "term_pass1.m"
          MR_Word transform_hlds__term_pass1__V_8_8;

#line 76 "term_pass1.m"
          transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 76 "term_pass1.m"
          if (transform_hlds__term_pass1__succeeded)
#line 76 "term_pass1.m"
            {
#line 76 "term_pass1.m"
              transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "term_pass1.m"
              transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "term_pass1.m"
              transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 2)));
#line 1714 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[6];
#line 1716 "transform_hlds.term_pass1.c"
              {
#line 1718 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
              }
#line 76 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 76 "term_pass1.m"
                {
#line 1725 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
#line 1727 "transform_hlds.term_pass1.c"
                  {
#line 1729 "transform_hlds.term_pass1.c"
                    transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_pass1__V_4_4)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
                  }
#line 76 "term_pass1.m"
                  if (transform_hlds__term_pass1__succeeded)
#line 76 "term_pass1.m"
                    {
#line 1736 "transform_hlds.term_pass1.c"
                      transform_hlds__term_pass1__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1738 "transform_hlds.term_pass1.c"
                      {
#line 1740 "transform_hlds.term_pass1.c"
                        return transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_pass1__V_5_5)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
                      }
#line 76 "term_pass1.m"
                    }
#line 76 "term_pass1.m"
                }
#line 76 "term_pass1.m"
            }
#line 76 "term_pass1.m"
        }
#line 76 "term_pass1.m"
    return transform_hlds__term_pass1__succeeded;
#line 76 "term_pass1.m"
  }
#line 76 "term_pass1.m"
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
#line 1782 "transform_hlds.term_pass1.c"
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
#line 1811 "transform_hlds.term_pass1.c"
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
#line 1826 "transform_hlds.term_pass1.c"
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
#line 1844 "transform_hlds.term_pass1.c"
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
#line 1919 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1921 "transform_hlds.term_pass1.c"
              {
#line 1923 "transform_hlds.term_pass1.c"
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
#line 1957 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[5];
#line 1959 "transform_hlds.term_pass1.c"
              {
#line 1961 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_5_5)));
              }
#line 37 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 37 "term_pass1.m"
                {
#line 1968 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
#line 1970 "transform_hlds.term_pass1.c"
                  {
#line 1972 "transform_hlds.term_pass1.c"
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

#line 461 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
#line 461 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPIds_5,
#line 461 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Soln_6,
#line 461 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_7,
#line 461 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
#line 461 "term_pass1.m"
{
#line 464 "term_pass1.m"
  {
#line 464 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 464 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 464 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__ICoeff_8;
#line 464 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var_9;
#line 464 "term_pass1.m"
    MR_Float transform_hlds__term_pass1__Coeff_10;
#line 465 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv0_Var_9;
#line 466 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv1_Coeff_10;

#line 465 "term_pass1.m"
    {
#line 465 "term_pass1.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_pass1__TypeInfo_12_12, transform_hlds__term_pass1__PPIds_5, ((MR_Box) (transform_hlds__term_pass1__PPId_7)), &transform_hlds__term_pass1__conv0_Var_9);
    }
#line 465 "term_pass1.m"
    transform_hlds__term_pass1__Var_9 = ((MR_Word) transform_hlds__term_pass1__conv0_Var_9);
#line 466 "term_pass1.m"
    {
#line 466 "term_pass1.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeInfo_12_12, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, transform_hlds__term_pass1__Soln_6, ((MR_Box) (transform_hlds__term_pass1__Var_9)), &transform_hlds__term_pass1__conv1_Coeff_10);
    }
#line 466 "term_pass1.m"
    transform_hlds__term_pass1__Coeff_10 = MR_unbox_float(transform_hlds__term_pass1__conv1_Coeff_10);
#line 467 "term_pass1.m"
    {
#line 467 "term_pass1.m"
      transform_hlds__term_pass1__ICoeff_8 = mercury__float__ceiling_to_int_1_f_0(transform_hlds__term_pass1__Coeff_10);
    }
#line 464 "term_pass1.m"
    {
#line 464 "term_pass1.m"
      MR_Word base;
#line 464 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 464 "term_pass1.m"
      *transform_hlds__term_pass1__HeadVar__4_4 = base;
#line 464 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_7));
#line 464 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__ICoeff_8));
#line 464 "term_pass1.m"
    }
#line 464 "term_pass1.m"
  }
#line 461 "term_pass1.m"
}

#line 452 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
#line 452 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 452 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 452 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
#line 452 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
#line 452 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
#line 452 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
#line 452 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6)
#line 452 "term_pass1.m"
{
#line 452 "term_pass1.m"
  {
#line 452 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 452 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv3_HeadVar__2_54;
#line 452 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv2_HeadVar__4_56;
#line 452 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_HeadVar__6_58;

#line 452 "term_pass1.m"
    {
#line 452 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__452__1_6_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv3_HeadVar__2_54, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3), &transform_hlds__term_pass1__conv2_HeadVar__4_56, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_5), &transform_hlds__term_pass1__conv1_HeadVar__6_58);
    }
#line 452 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv3_HeadVar__2_54));
#line 452 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_pass1__conv2_HeadVar__4_56));
#line 452 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_6 = ((MR_Box) (transform_hlds__term_pass1__conv1_HeadVar__6_58));
#line 452 "term_pass1.m"
  }
#line 452 "term_pass1.m"
}

#line 440 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
#line 440 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 440 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
#line 440 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
#line 440 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
#line 440 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
#line 440 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
#line 440 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7)
#line 440 "term_pass1.m"
{
#line 445 "term_pass1.m"
  while (MR_TRUE)
#line 445 "term_pass1.m"
    {
#line 445 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 445 "term_pass1.m"
      {
#line 445 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;

#line 445 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "term_pass1.m"
          {
#line 445 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6;
#line 445 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Varset_5 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
#line 445 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
#line 445 "term_pass1.m"
            transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 445 "term_pass1.m"
          }
#line 445 "term_pass1.m"
        else
#line 446 "term_pass1.m"
          {
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Path_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Paths_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ThisPPId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 0)));
#line 446 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__IntGamma_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 2)));
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 3)));
#line 446 "term_pass1.m"
            MR_Float transform_hlds__term_pass1__FloatGamma_27;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Eqn_28;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Coeffs_29;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ThisVar_30;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__RestCoeffs_31;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_47_47;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
#line 446 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 1)));
#line 447 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 4)));
#line 475 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Var0_87;
#line 473 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv0_Var0_87;
#line 457 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62;
#line 457 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63;

#line 448 "term_pass1.m"
            {
#line 448 "term_pass1.m"
              transform_hlds__term_pass1__FloatGamma_27 = mercury__float__float_1_f_0(transform_hlds__term_pass1__IntGamma_24);
            }
#line 473 "term_pass1.m"
            {
#line 473 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), &transform_hlds__term_pass1__conv0_Var0_87);
            }
#line 473 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 473 "term_pass1.m"
              {
#line 473 "term_pass1.m"
                transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
#line 473 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 473 "term_pass1.m"
              }
#line 475 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 474 "term_pass1.m"
              {
#line 474 "term_pass1.m"
                transform_hlds__term_pass1__ThisVar_30 = transform_hlds__term_pass1__Var0_87;
#line 474 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
#line 474 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
#line 474 "term_pass1.m"
              }
#line 475 "term_pass1.m"
            else
#line 476 "term_pass1.m"
              {
#line 476 "term_pass1.m"
                {
#line 476 "term_pass1.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__ThisVar_30, transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4, &transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45);
                }
#line 477 "term_pass1.m"
                {
#line 477 "term_pass1.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), ((MR_Box) (transform_hlds__term_pass1__ThisVar_30)), transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, &transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46);
                }
#line 476 "term_pass1.m"
              }
#line 451 "term_pass1.m"
            {
#line 451 "term_pass1.m"
              transform_hlds__term_pass1__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 451 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 0) = ((MR_Box) (transform_hlds__term_pass1__ThisVar_30));
#line 451 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 451 "term_pass1.m"
            }
#line 457 "term_pass1.m"
            {
#line 457 "term_pass1.m"
              mercury__list__map_foldl2_7_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1], (MR_Word) &transform_hlds__term_pass1_scalar_common_1[4], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[2], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[7], transform_hlds__term_pass1__PPIds_25, &transform_hlds__term_pass1__RestCoeffs_31, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45)), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46)), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
            }
#line 457 "term_pass1.m"
            transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62 = ((MR_Word) transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62);
#line 457 "term_pass1.m"
            transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63 = ((MR_Word) transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
#line 451 "term_pass1.m"
            {
#line 451 "term_pass1.m"
              transform_hlds__term_pass1__Coeffs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 0) = ((MR_Box) (transform_hlds__term_pass1__V_47_47));
#line 451 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 1) = ((MR_Box) (transform_hlds__term_pass1__RestCoeffs_31));
#line 451 "term_pass1.m"
            }
#line 449 "term_pass1.m"
            {
#line 449 "term_pass1.m"
              transform_hlds__term_pass1__Eqn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 449 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 0) = ((MR_Box) (transform_hlds__term_pass1__Coeffs_29));
#line 449 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 1) = ((MR_Box) ((MR_Integer) 2));
#line 449 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 2) = MR_box_float(transform_hlds__term_pass1__FloatGamma_27);
#line 449 "term_pass1.m"
            }
#line 458 "term_pass1.m"
            {
#line 458 "term_pass1.m"
              mercury__set__insert_3_p_0((MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0, ((MR_Box) (transform_hlds__term_pass1__Eqn_28)), transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6, &transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64);
            }
#line 459 "term_pass1.m"
            /* direct tailcall eliminated */
#line 459 "term_pass1.m"
            {
#line 459 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass1__Paths_18;
#line 459 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
#line 459 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
#line 459 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;

#line 459 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6;
#line 459 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4;
#line 459 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2;
#line 459 "term_pass1.m"
              transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__HeadVar__1__tmp_copy_1;
#line 459 "term_pass1.m"
            }
#line 459 "term_pass1.m"
            continue;
#line 446 "term_pass1.m"
          }
#line 445 "term_pass1.m"
        return transform_hlds__term_pass1__succeeded;
#line 445 "term_pass1.m"
      }
#line 445 "term_pass1.m"
      break;
#line 445 "term_pass1.m"
    }
#line 440 "term_pass1.m"
}

#line 392 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_9_p_0(
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_11,
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_18,
#line 392 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_19,
#line 392 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_20,
#line 392 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_21)
#line 392 "term_pass1.m"
{
#line 398 "term_pass1.m"
  {
#line 398 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 398 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 2)));
#line 397 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 397 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));

#line 399 "term_pass1.m"
    {
#line 399 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(transform_hlds__term_pass1__PPId_10, transform_hlds__term_pass1__VarTypes_11, transform_hlds__term_pass1__Goal_14, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_18, transform_hlds__term_pass1__STATE_VARIABLE_Errors_19, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_21);
#line 399 "term_pass1.m"
      return;
    }
#line 398 "term_pass1.m"
  }
#line 392 "term_pass1.m"
}

#line 362 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_4(
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 362 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 362 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 362 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 362 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 362 "term_pass1.m"
{
#line 362 "term_pass1.m"
  {
#line 362 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 362 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv16_STATE_VARIABLE_Errors_19;
#line 362 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv15_STATE_VARIABLE_ModuleInfo_21;

#line 362 "term_pass1.m"
    {
#line 362 "term_pass1.m"
      transform_hlds__term_pass1__check_cases_non_term_calls_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv16_STATE_VARIABLE_Errors_19, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv15_STATE_VARIABLE_ModuleInfo_21);
    }
#line 362 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv16_STATE_VARIABLE_Errors_19));
#line 362 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv15_STATE_VARIABLE_ModuleInfo_21));
#line 362 "term_pass1.m"
  }
#line 362 "term_pass1.m"
}

#line 367 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_3(
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 367 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 367 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 367 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 367 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 367 "term_pass1.m"
{
#line 367 "term_pass1.m"
  {
#line 367 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 367 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv11_STATE_VARIABLE_Errors_68;
#line 367 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv10_STATE_VARIABLE_ModuleInfo_70;

#line 367 "term_pass1.m"
    {
#line 367 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv11_STATE_VARIABLE_Errors_68, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv10_STATE_VARIABLE_ModuleInfo_70);
    }
#line 367 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv11_STATE_VARIABLE_Errors_68));
#line 367 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv10_STATE_VARIABLE_ModuleInfo_70));
#line 367 "term_pass1.m"
  }
#line 367 "term_pass1.m"
}

#line 358 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_2(
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 358 "term_pass1.m"
{
#line 358 "term_pass1.m"
  {
#line 358 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 358 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_68;
#line 358 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv5_STATE_VARIABLE_ModuleInfo_70;

#line 358 "term_pass1.m"
    {
#line 358 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_68, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_ModuleInfo_70);
    }
#line 358 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_68));
#line 358 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv5_STATE_VARIABLE_ModuleInfo_70));
#line 358 "term_pass1.m"
  }
#line 358 "term_pass1.m"
}

#line 358 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_1(
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 358 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 358 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 358 "term_pass1.m"
{
#line 358 "term_pass1.m"
  {
#line 358 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 358 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_68;
#line 358 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_70;

#line 358 "term_pass1.m"
    {
#line 358 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_68, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_70);
    }
#line 358 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_68));
#line 358 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_70));
#line 358 "term_pass1.m"
  }
#line 358 "term_pass1.m"
}

#line 310 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_11,
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Goal_12,
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67,
#line 310 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_68,
#line 310 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69,
#line 310 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70)
#line 310 "term_pass1.m"
{
#line 315 "term_pass1.m"
  while (MR_TRUE)
#line 315 "term_pass1.m"
    {
#line 315 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 315 "term_pass1.m"
      {
#line 315 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;
#line 315 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_12, (MR_Integer) 0)));
#line 315 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_12, (MR_Integer) 1)));

#line 320 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 0))))
#line 370 "term_pass1.m"
          {
#line 370 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__SubGoal_62 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_pass1__GoalExpr_16), (MR_Integer) 0);

#line 371 "term_pass1.m"
            /* direct tailcall eliminated */
#line 371 "term_pass1.m"
            {
#line 371 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Goal__tmp_copy_12 = transform_hlds__term_pass1__SubGoal_62;

#line 371 "term_pass1.m"
              transform_hlds__term_pass1__Goal_12 = transform_hlds__term_pass1__Goal__tmp_copy_12;
#line 371 "term_pass1.m"
            }
#line 371 "term_pass1.m"
            continue;
#line 370 "term_pass1.m"
          }
#line 320 "term_pass1.m"
        else
#line 320 "term_pass1.m"
          if (((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 2))))
#line 321 "term_pass1.m"
            {
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__CallPredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)));
#line 321 "term_pass1.m"
              MR_Integer transform_hlds__term_pass1__CallProcId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__CallPPId_29;
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__ProcInfo_31;
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TerminationInfo_32;
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Context_33;
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101;
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 3)));
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 4)));
#line 321 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 5)));
#line 323 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_30_30;

#line 322 "term_pass1.m"
              {
#line 322 "term_pass1.m"
                transform_hlds__term_pass1__CallPPId_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_29, 0) = ((MR_Box) (transform_hlds__term_pass1__CallPredId_23));
#line 322 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_29, 1) = ((MR_Box) (transform_hlds__term_pass1__CallProcId_24));
#line 322 "term_pass1.m"
              }
#line 323 "term_pass1.m"
              {
#line 323 "term_pass1.m"
                hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69, transform_hlds__term_pass1__CallPPId_29, &transform_hlds__term_pass1__V_30_30, &transform_hlds__term_pass1__ProcInfo_31);
              }
#line 324 "term_pass1.m"
              {
#line 324 "term_pass1.m"
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_pass1__ProcInfo_31, &transform_hlds__term_pass1__TerminationInfo_32);
              }
#line 325 "term_pass1.m"
              {
#line 325 "term_pass1.m"
                transform_hlds__term_pass1__Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_17);
              }
#line 332 "term_pass1.m"
              if ((transform_hlds__term_pass1__TerminationInfo_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 332 "term_pass1.m"
              else
#line 332 "term_pass1.m"
                {
#line 332 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__TerminationInfo_32, (MR_Integer) 0)));

#line 332 "term_pass1.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_pass1__V_155_155)) == (MR_mktag((MR_Integer) 1))))
#line 327 "term_pass1.m"
                    {
#line 327 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__CanLoopError_35;
#line 327 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__CanLoopErrorContext_36;

#line 328 "term_pass1.m"
                      {
#line 328 "term_pass1.m"
                        transform_hlds__term_pass1__CanLoopError_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopError_35, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 328 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopError_35, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_29));
#line 328 "term_pass1.m"
                      }
#line 329 "term_pass1.m"
                      {
#line 329 "term_pass1.m"
                        transform_hlds__term_pass1__CanLoopErrorContext_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopErrorContext_36, 0) = ((MR_Box) (transform_hlds__term_pass1__CanLoopError_35));
#line 329 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopErrorContext_36, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_33));
#line 329 "term_pass1.m"
                      }
#line 331 "term_pass1.m"
                      {
#line 331 "term_pass1.m"
                        mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, ((MR_Box) (transform_hlds__term_pass1__CanLoopErrorContext_36)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67, &transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101);
                      }
#line 327 "term_pass1.m"
                    }
#line 332 "term_pass1.m"
                  else
#line 333 "term_pass1.m"
                    transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 332 "term_pass1.m"
                }
#line 337 "term_pass1.m"
              {
#line 337 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_pass1__Args_25, transform_hlds__term_pass1__VarTypes_11);
              }
#line 342 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 338 "term_pass1.m"
                {
#line 338 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HigherOrderError_38;
#line 338 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HigherOrderErrorContext_39;

#line 338 "term_pass1.m"
                  {
#line 338 "term_pass1.m"
                    transform_hlds__term_pass1__HigherOrderError_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "term_pass1.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderError_38, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 338 "term_pass1.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderError_38, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_29));
#line 338 "term_pass1.m"
                  }
#line 339 "term_pass1.m"
                  {
#line 339 "term_pass1.m"
                    transform_hlds__term_pass1__HigherOrderErrorContext_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderErrorContext_39, 0) = ((MR_Box) (transform_hlds__term_pass1__HigherOrderError_38));
#line 339 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderErrorContext_39, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_33));
#line 339 "term_pass1.m"
                  }
#line 341 "term_pass1.m"
                  {
#line 341 "term_pass1.m"
                    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, ((MR_Box) (transform_hlds__term_pass1__HigherOrderErrorContext_39)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101, transform_hlds__term_pass1__STATE_VARIABLE_Errors_68);
                  }
#line 338 "term_pass1.m"
                }
#line 342 "term_pass1.m"
              else
#line 341 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_101_101;
#line 341 "term_pass1.m"
              *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 321 "term_pass1.m"
            }
#line 320 "term_pass1.m"
          else
#line 320 "term_pass1.m"
            if (((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 1))))
#line 318 "term_pass1.m"
              {
#line 318 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 318 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 318 "term_pass1.m"
              }
#line 320 "term_pass1.m"
            else
#line 320 "term_pass1.m"
              if (((((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 346 "term_pass1.m"
                {
#line 346 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 346 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 346 "term_pass1.m"
                }
#line 320 "term_pass1.m"
              else
#line 320 "term_pass1.m"
                if (((((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 357 "term_pass1.m"
                  {
#line 357 "term_pass1.m"
                    MR_Word transform_hlds__term_pass1__Goals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 357 "term_pass1.m"
                    MR_Word transform_hlds__term_pass1__V_93_93;
#line 355 "term_pass1.m"
                    MR_Word transform_hlds__term_pass1__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 358 "term_pass1.m"
                    MR_Box transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_68;
#line 358 "term_pass1.m"
                    MR_Box transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_70;
#line 358 "term_pass1.m"
                    MR_Box transform_hlds__term_pass1__conv2_STATE_VARIABLE_IO_72;

#line 358 "term_pass1.m"
                    {
#line 358 "term_pass1.m"
                      transform_hlds__term_pass1__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 358 "term_pass1.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_6[0]));
#line 358 "term_pass1.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_1));
#line 358 "term_pass1.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 358 "term_pass1.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 3) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 358 "term_pass1.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_93_93, 4) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_11));
#line 358 "term_pass1.m"
                    }
#line 358 "term_pass1.m"
                    {
#line 358 "term_pass1.m"
                      mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_pass1__V_93_93, transform_hlds__term_pass1__Goals_54, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67)), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_68, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69)), &transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_70, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv2_STATE_VARIABLE_IO_72);
                    }
#line 358 "term_pass1.m"
                    *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = ((MR_Word) transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_68);
#line 358 "term_pass1.m"
                    *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = ((MR_Word) transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_70);
#line 357 "term_pass1.m"
                  }
#line 320 "term_pass1.m"
                else
#line 320 "term_pass1.m"
                  if (((((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 357 "term_pass1.m"
                    {
#line 357 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__Goals_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 357 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__V_150_150;
#line 358 "term_pass1.m"
                      MR_Box transform_hlds__term_pass1__conv9_STATE_VARIABLE_Errors_68;
#line 358 "term_pass1.m"
                      MR_Box transform_hlds__term_pass1__conv8_STATE_VARIABLE_ModuleInfo_70;
#line 358 "term_pass1.m"
                      MR_Box transform_hlds__term_pass1__conv7_STATE_VARIABLE_IO_72;

#line 358 "term_pass1.m"
                      {
#line 358 "term_pass1.m"
                        transform_hlds__term_pass1__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 358 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_6[0]));
#line 358 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_2));
#line 358 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 358 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 3) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 358 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_150_150, 4) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_11));
#line 358 "term_pass1.m"
                      }
#line 358 "term_pass1.m"
                      {
#line 358 "term_pass1.m"
                        mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_pass1__V_150_150, transform_hlds__term_pass1__Goals_149, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67)), &transform_hlds__term_pass1__conv9_STATE_VARIABLE_Errors_68, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69)), &transform_hlds__term_pass1__conv8_STATE_VARIABLE_ModuleInfo_70, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv7_STATE_VARIABLE_IO_72);
                      }
#line 358 "term_pass1.m"
                      *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = ((MR_Word) transform_hlds__term_pass1__conv9_STATE_VARIABLE_Errors_68);
#line 358 "term_pass1.m"
                      *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = ((MR_Word) transform_hlds__term_pass1__conv8_STATE_VARIABLE_ModuleInfo_70);
#line 357 "term_pass1.m"
                    }
#line 320 "term_pass1.m"
                  else
#line 320 "term_pass1.m"
                    if (((((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 349 "term_pass1.m"
                      {
#line 349 "term_pass1.m"
                        MR_Word transform_hlds__term_pass1__Error_52;
#line 349 "term_pass1.m"
                        MR_Word transform_hlds__term_pass1__Context_103;

#line 351 "term_pass1.m"
                        {
#line 351 "term_pass1.m"
                          transform_hlds__term_pass1__Context_103 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_17);
                        }
#line 352 "term_pass1.m"
                        {
#line 352 "term_pass1.m"
                          transform_hlds__term_pass1__Error_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "term_pass1.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 352 "term_pass1.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_52, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_103));
#line 352 "term_pass1.m"
                        }
#line 353 "term_pass1.m"
                        {
#line 353 "term_pass1.m"
                          mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0, ((MR_Box) (transform_hlds__term_pass1__Error_52)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67, transform_hlds__term_pass1__STATE_VARIABLE_Errors_68);
                        }
#line 353 "term_pass1.m"
                        *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 349 "term_pass1.m"
                      }
#line 320 "term_pass1.m"
                    else
#line 320 "term_pass1.m"
                      if (((((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 365 "term_pass1.m"
                        {
#line 365 "term_pass1.m"
                          MR_Word transform_hlds__term_pass1__Cond_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 365 "term_pass1.m"
                          MR_Word transform_hlds__term_pass1__Then_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 3)));
#line 365 "term_pass1.m"
                          MR_Word transform_hlds__term_pass1__Else_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 4)));
#line 365 "term_pass1.m"
                          MR_Word transform_hlds__term_pass1__V_82_82;
#line 365 "term_pass1.m"
                          MR_Word transform_hlds__term_pass1__V_83_83;
#line 365 "term_pass1.m"
                          MR_Word transform_hlds__term_pass1__V_85_85;
#line 365 "term_pass1.m"
                          MR_Word transform_hlds__term_pass1__Goals_104;
#line 365 "term_pass1.m"
                          MR_Word transform_hlds__term_pass1__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 367 "term_pass1.m"
                          MR_Box transform_hlds__term_pass1__conv14_STATE_VARIABLE_Errors_68;
#line 367 "term_pass1.m"
                          MR_Box transform_hlds__term_pass1__conv13_STATE_VARIABLE_ModuleInfo_70;
#line 367 "term_pass1.m"
                          MR_Box transform_hlds__term_pass1__conv12_STATE_VARIABLE_IO_72;

#line 366 "term_pass1.m"
                          {
#line 366 "term_pass1.m"
                            transform_hlds__term_pass1__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "term_pass1.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 0) = ((MR_Box) (transform_hlds__term_pass1__Else_61));
#line 366 "term_pass1.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "term_pass1.m"
                          }
#line 366 "term_pass1.m"
                          {
#line 366 "term_pass1.m"
                            transform_hlds__term_pass1__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "term_pass1.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_82_82, 0) = ((MR_Box) (transform_hlds__term_pass1__Then_60));
#line 366 "term_pass1.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_82_82, 1) = ((MR_Box) (transform_hlds__term_pass1__V_83_83));
#line 366 "term_pass1.m"
                          }
#line 366 "term_pass1.m"
                          {
#line 366 "term_pass1.m"
                            transform_hlds__term_pass1__Goals_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "term_pass1.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_104, 0) = ((MR_Box) (transform_hlds__term_pass1__Cond_59));
#line 366 "term_pass1.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_104, 1) = ((MR_Box) (transform_hlds__term_pass1__V_82_82));
#line 366 "term_pass1.m"
                          }
#line 367 "term_pass1.m"
                          {
#line 367 "term_pass1.m"
                            transform_hlds__term_pass1__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 367 "term_pass1.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_6[0]));
#line 367 "term_pass1.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_3));
#line 367 "term_pass1.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 367 "term_pass1.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 3) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 367 "term_pass1.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_85_85, 4) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_11));
#line 367 "term_pass1.m"
                          }
#line 367 "term_pass1.m"
                          {
#line 367 "term_pass1.m"
                            mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_pass1__V_85_85, transform_hlds__term_pass1__Goals_104, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67)), &transform_hlds__term_pass1__conv14_STATE_VARIABLE_Errors_68, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69)), &transform_hlds__term_pass1__conv13_STATE_VARIABLE_ModuleInfo_70, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv12_STATE_VARIABLE_IO_72);
                          }
#line 367 "term_pass1.m"
                          *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = ((MR_Word) transform_hlds__term_pass1__conv14_STATE_VARIABLE_Errors_68);
#line 367 "term_pass1.m"
                          *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = ((MR_Word) transform_hlds__term_pass1__conv13_STATE_VARIABLE_ModuleInfo_70);
#line 365 "term_pass1.m"
                        }
#line 320 "term_pass1.m"
                      else
#line 320 "term_pass1.m"
                        if (((((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 374 "term_pass1.m"
                          {
#line 374 "term_pass1.m"
                            MR_Word transform_hlds__term_pass1__Reason_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 374 "term_pass1.m"
                            MR_Word transform_hlds__term_pass1__SubGoal_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 376 "term_pass1.m"
                            MR_Word transform_hlds__term_pass1__FGT_65;
#line 376 "term_pass1.m"
                            MR_Word transform_hlds__term_pass1__V_64_64;

#line 376 "term_pass1.m"
                            transform_hlds__term_pass1__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_pass1__Reason_63)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_63, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 376 "term_pass1.m"
                            if (transform_hlds__term_pass1__succeeded)
#line 376 "term_pass1.m"
                              {
#line 376 "term_pass1.m"
                                transform_hlds__term_pass1__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_63, (MR_Integer) 1)));
#line 376 "term_pass1.m"
                                transform_hlds__term_pass1__FGT_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_63, (MR_Integer) 2)));
#line 378 "term_pass1.m"
                                if ((transform_hlds__term_pass1__FGT_65 == (MR_Integer) 1))
#line 377 "term_pass1.m"
                                  transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 378 "term_pass1.m"
                                else
#line 378 "term_pass1.m"
                                  if ((transform_hlds__term_pass1__FGT_65 == (MR_Integer) 2))
#line 378 "term_pass1.m"
                                    transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 378 "term_pass1.m"
                                  else
#line 378 "term_pass1.m"
                                    transform_hlds__term_pass1__succeeded = MR_FALSE;
#line 376 "term_pass1.m"
                              }
#line 383 "term_pass1.m"
                            if (transform_hlds__term_pass1__succeeded)
#line 382 "term_pass1.m"
                              {
#line 382 "term_pass1.m"
                                *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69;
#line 382 "term_pass1.m"
                                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67;
#line 382 "term_pass1.m"
                              }
#line 383 "term_pass1.m"
                            else
#line 384 "term_pass1.m"
                              {
#line 384 "term_pass1.m"
                                /* direct tailcall eliminated */
#line 384 "term_pass1.m"
                                {
#line 384 "term_pass1.m"
                                  MR_Word transform_hlds__term_pass1__Goal__tmp_copy_12 = transform_hlds__term_pass1__SubGoal_105;

#line 384 "term_pass1.m"
                                  transform_hlds__term_pass1__Goal_12 = transform_hlds__term_pass1__Goal__tmp_copy_12;
#line 384 "term_pass1.m"
                                }
#line 384 "term_pass1.m"
                                continue;
#line 384 "term_pass1.m"
                              }
#line 374 "term_pass1.m"
                          }
#line 320 "term_pass1.m"
                        else
#line 320 "term_pass1.m"
                          if (((((MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 388 "term_pass1.m"
                            {
#line 389 "term_pass1.m"
                              {
#line 389 "term_pass1.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.check_goal_non_term_calls\'/9", (MR_String) "shorthand");
#line 389 "term_pass1.m"
                                return;
                              }
#line 388 "term_pass1.m"
                            }
#line 320 "term_pass1.m"
                          else
#line 361 "term_pass1.m"
                            {
#line 361 "term_pass1.m"
                              MR_Word transform_hlds__term_pass1__Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 3)));
#line 361 "term_pass1.m"
                              MR_Word transform_hlds__term_pass1__V_89_89;
#line 361 "term_pass1.m"
                              MR_Word transform_hlds__term_pass1__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 1)));
#line 361 "term_pass1.m"
                              MR_Word transform_hlds__term_pass1__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_16, (MR_Integer) 2)));
#line 362 "term_pass1.m"
                              MR_Box transform_hlds__term_pass1__conv19_STATE_VARIABLE_Errors_68;
#line 362 "term_pass1.m"
                              MR_Box transform_hlds__term_pass1__conv18_STATE_VARIABLE_ModuleInfo_70;
#line 362 "term_pass1.m"
                              MR_Box transform_hlds__term_pass1__conv17_STATE_VARIABLE_IO_72;

#line 362 "term_pass1.m"
                              {
#line 362 "term_pass1.m"
                                transform_hlds__term_pass1__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 362 "term_pass1.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_6[1]));
#line 362 "term_pass1.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0_4));
#line 362 "term_pass1.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 362 "term_pass1.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 3) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 362 "term_pass1.m"
                                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_89_89, 4) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_11));
#line 362 "term_pass1.m"
                              }
#line 362 "term_pass1.m"
                              {
#line 362 "term_pass1.m"
                                mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__term_pass1__V_89_89, transform_hlds__term_pass1__Cases_57, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_67)), &transform_hlds__term_pass1__conv19_STATE_VARIABLE_Errors_68, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_69)), &transform_hlds__term_pass1__conv18_STATE_VARIABLE_ModuleInfo_70, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv17_STATE_VARIABLE_IO_72);
                              }
#line 362 "term_pass1.m"
                              *transform_hlds__term_pass1__STATE_VARIABLE_Errors_68 = ((MR_Word) transform_hlds__term_pass1__conv19_STATE_VARIABLE_Errors_68);
#line 362 "term_pass1.m"
                              *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_70 = ((MR_Word) transform_hlds__term_pass1__conv18_STATE_VARIABLE_ModuleInfo_70);
#line 361 "term_pass1.m"
                            }
#line 315 "term_pass1.m"
      }
#line 315 "term_pass1.m"
      break;
#line 315 "term_pass1.m"
    }
#line 310 "term_pass1.m"
}

#line 299 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_7_p_0(
#line 299 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 299 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_16,
#line 299 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_17,
#line 299 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_18,
#line 299 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_19)
#line 299 "term_pass1.m"
{
#line 303 "term_pass1.m"
  {
#line 303 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 303 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ProcInfo_13;
#line 303 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_14;
#line 303 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__VarTypes_15;
#line 304 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_12_12;

#line 304 "term_pass1.m"
    {
#line 304 "term_pass1.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__term_pass1__PPId_8, &transform_hlds__term_pass1__V_12_12, &transform_hlds__term_pass1__ProcInfo_13);
    }
#line 305 "term_pass1.m"
    {
#line 305 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_13, &transform_hlds__term_pass1__Goal_14);
    }
#line 306 "term_pass1.m"
    {
#line 306 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_13, &transform_hlds__term_pass1__VarTypes_15);
    }
#line 307 "term_pass1.m"
    {
#line 307 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_9_p_0(transform_hlds__term_pass1__PPId_8, transform_hlds__term_pass1__VarTypes_15, transform_hlds__term_pass1__Goal_14, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_16, transform_hlds__term_pass1__STATE_VARIABLE_Errors_17, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_18, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_19);
#line 307 "term_pass1.m"
      return;
    }
#line 303 "term_pass1.m"
  }
#line 299 "term_pass1.m"
}

#line 266 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
#line 266 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 266 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 266 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 266 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
#line 266 "term_pass1.m"
{
#line 269 "term_pass1.m"
  {
#line 269 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 269 "term_pass1.m"
    if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "term_pass1.m"
      if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "term_pass1.m"
        *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 269 "term_pass1.m"
      else
#line 272 "term_pass1.m"
        {
#line 272 "term_pass1.m"
          *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 273 "term_pass1.m"
          {
#line 273 "term_pass1.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
#line 273 "term_pass1.m"
            return;
          }
#line 272 "term_pass1.m"
        }
#line 269 "term_pass1.m"
    else
#line 269 "term_pass1.m"
      {
#line 269 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));

#line 269 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "term_pass1.m"
          {
#line 270 "term_pass1.m"
            *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 271 "term_pass1.m"
            {
#line 271 "term_pass1.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
#line 271 "term_pass1.m"
              return;
            }
#line 270 "term_pass1.m"
          }
#line 269 "term_pass1.m"
        else
#line 276 "term_pass1.m"
          {
#line 276 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplier0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSuppliers0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplier_23;
#line 276 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSuppliers_24;

#line 277 "term_pass1.m"
            {
#line 277 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__HeadVar__2_2, ((MR_Box) (transform_hlds__term_pass1__V_27_27)));
            }
#line 279 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 278 "term_pass1.m"
              transform_hlds__term_pass1__OutputSupplier_23 = (MR_Integer) 1;
#line 279 "term_pass1.m"
            else
#line 283 "term_pass1.m"
              transform_hlds__term_pass1__OutputSupplier_23 = transform_hlds__term_pass1__OutputSupplier0_21;
#line 285 "term_pass1.m"
            {
#line 285 "term_pass1.m"
              transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__V_26_26, transform_hlds__term_pass1__HeadVar__2_2, transform_hlds__term_pass1__OutputSuppliers0_22, &transform_hlds__term_pass1__OutputSuppliers_24);
            }
#line 276 "term_pass1.m"
            {
#line 276 "term_pass1.m"
              MR_Word base;
#line 276 "term_pass1.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "term_pass1.m"
              *transform_hlds__term_pass1__HeadVar__4_4 = base;
#line 276 "term_pass1.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplier_23));
#line 276 "term_pass1.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_24));
#line 276 "term_pass1.m"
            }
#line 276 "term_pass1.m"
          }
#line 269 "term_pass1.m"
      }
#line 269 "term_pass1.m"
  }
#line 266 "term_pass1.m"
}

#line 215 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_9_p_0(
#line 215 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_10,
#line 215 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_11,
#line 215 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_12,
#line 215 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_13,
#line 215 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_14,
#line 215 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46,
#line 215 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_47)
#line 215 "term_pass1.m"
{
#line 220 "term_pass1.m"
  {
#line 220 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_57_57;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeInfo_58_58;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_59_59;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__PredInfo_17;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ProcInfo_18;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Context_19;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Args_20;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ArgModes_21;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__VarTypes_22;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal0_23;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_24;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__EmptyMap_25;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__FunctorInfo_26;
#line 220 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__MaxErrors_27;
#line 220 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__MaxPaths_28;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Params_29;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__InVars_30;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__OutVars_31;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Path0_32;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__PathSet0_33;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Info0_34;
#line 220 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Info_35;

#line 221 "term_pass1.m"
    {
#line 221 "term_pass1.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46, transform_hlds__term_pass1__PPId_10, &transform_hlds__term_pass1__PredInfo_17, &transform_hlds__term_pass1__ProcInfo_18);
    }
#line 222 "term_pass1.m"
    {
#line 222 "term_pass1.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass1__PredInfo_17, &transform_hlds__term_pass1__Context_19);
    }
#line 223 "term_pass1.m"
    {
#line 223 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_18, &transform_hlds__term_pass1__Args_20);
    }
#line 224 "term_pass1.m"
    {
#line 224 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass1__ProcInfo_18, &transform_hlds__term_pass1__ArgModes_21);
    }
#line 225 "term_pass1.m"
    {
#line 225 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_18, &transform_hlds__term_pass1__VarTypes_22);
    }
#line 226 "term_pass1.m"
    {
#line 226 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_18, &transform_hlds__term_pass1__Goal0_23);
    }
#line 231 "term_pass1.m"
    {
#line 231 "term_pass1.m"
      transform_hlds__term_pass1__Goal_24 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_pass1__Goal0_23);
    }
#line 3411 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3413 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeInfo_58_58 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0];
#line 232 "term_pass1.m"
    {
#line 232 "term_pass1.m"
      mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_57_57, transform_hlds__term_pass1__TypeInfo_58_58, &transform_hlds__term_pass1__EmptyMap_25);
    }
#line 233 "term_pass1.m"
    transform_hlds__term_pass1__FunctorInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_11, (MR_Integer) 0)));
#line 233 "term_pass1.m"
    transform_hlds__term_pass1__MaxErrors_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_11, (MR_Integer) 1)));
#line 233 "term_pass1.m"
    transform_hlds__term_pass1__MaxPaths_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_11, (MR_Integer) 2)));
#line 234 "term_pass1.m"
    {
#line 234 "term_pass1.m"
      transform_hlds__term_traversal__init_term_traversal_params_9_p_0(transform_hlds__term_pass1__FunctorInfo_26, transform_hlds__term_pass1__PPId_10, transform_hlds__term_pass1__Context_19, transform_hlds__term_pass1__VarTypes_22, transform_hlds__term_pass1__OutputSupplierMap0_12, transform_hlds__term_pass1__EmptyMap_25, transform_hlds__term_pass1__MaxErrors_27, transform_hlds__term_pass1__MaxPaths_28, &transform_hlds__term_pass1__Params_29);
    }
#line 237 "term_pass1.m"
    {
#line 237 "term_pass1.m"
      transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46, transform_hlds__term_pass1__ArgModes_21, transform_hlds__term_pass1__Args_20, &transform_hlds__term_pass1__InVars_30, &transform_hlds__term_pass1__OutVars_31);
    }
#line 238 "term_pass1.m"
    {
#line 238 "term_pass1.m"
      transform_hlds__term_pass1__Path0_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 238 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 238 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 2) = ((MR_Box) ((MR_Integer) 0));
#line 238 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_32, 4) = ((MR_Box) (transform_hlds__term_pass1__OutVars_31));
#line 238 "term_pass1.m"
    }
#line 3452 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeCtorInfo_59_59 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 239 "term_pass1.m"
    {
#line 239 "term_pass1.m"
      transform_hlds__term_pass1__PathSet0_33 = mercury__set__make_singleton_set_1_f_0(transform_hlds__term_pass1__TypeCtorInfo_59_59, ((MR_Box) (transform_hlds__term_pass1__Path0_32)));
    }
#line 240 "term_pass1.m"
    {
#line 240 "term_pass1.m"
      transform_hlds__term_pass1__Info0_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_34, 0) = ((MR_Box) (transform_hlds__term_pass1__PathSet0_33));
#line 240 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "term_pass1.m"
    }
#line 241 "term_pass1.m"
    {
#line 241 "term_pass1.m"
      transform_hlds__term_traversal__term_traverse_goal_8_p_0(transform_hlds__term_pass1__Goal_24, transform_hlds__term_pass1__Params_29, transform_hlds__term_pass1__Info0_34, &transform_hlds__term_pass1__Info_35, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_46, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_47);
    }
#line 261 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Info_35)) == (MR_mktag((MR_Integer) 1))))
#line 262 "term_pass1.m"
      {
#line 262 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Errors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_35, (MR_Integer) 0)));

#line 262 "term_pass1.m"
        *transform_hlds__term_pass1__TermErrors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_35, (MR_Integer) 1)));
#line 263 "term_pass1.m"
        {
#line 263 "term_pass1.m"
          MR_Word base;
#line 263 "term_pass1.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 263 "term_pass1.m"
          *transform_hlds__term_pass1__Result_13 = base;
#line 263 "term_pass1.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_45));
#line 263 "term_pass1.m"
        }
#line 262 "term_pass1.m"
      }
#line 261 "term_pass1.m"
    else
#line 244 "term_pass1.m"
      {
#line 244 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Paths_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_35, (MR_Integer) 0)));
#line 244 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PathList_37;
#line 244 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__AllActiveVars_38;
#line 244 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSuppliers0_39;
#line 244 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSuppliers_40;
#line 244 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_41;
#line 244 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__SubsetErrors_42;
#line 247 "term_pass1.m"
        MR_Box transform_hlds__term_pass1__conv0_OutputSuppliers0_39;

#line 244 "term_pass1.m"
        *transform_hlds__term_pass1__TermErrors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_35, (MR_Integer) 1)));
#line 245 "term_pass1.m"
        {
#line 245 "term_pass1.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_59_59, transform_hlds__term_pass1__Paths_36, &transform_hlds__term_pass1__PathList_37);
        }
#line 246 "term_pass1.m"
        {
#line 246 "term_pass1.m"
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_pass1__PathList_37, &transform_hlds__term_pass1__AllActiveVars_38);
        }
#line 247 "term_pass1.m"
        {
#line 247 "term_pass1.m"
          mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_57_57, transform_hlds__term_pass1__TypeInfo_58_58, transform_hlds__term_pass1__OutputSupplierMap0_12, ((MR_Box) (transform_hlds__term_pass1__PPId_10)), &transform_hlds__term_pass1__conv0_OutputSuppliers0_39);
        }
#line 247 "term_pass1.m"
        transform_hlds__term_pass1__OutputSuppliers0_39 = ((MR_Word) transform_hlds__term_pass1__conv0_OutputSuppliers0_39);
#line 248 "term_pass1.m"
        {
#line 248 "term_pass1.m"
          transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__Args_20, transform_hlds__term_pass1__AllActiveVars_38, transform_hlds__term_pass1__OutputSuppliers0_39, &transform_hlds__term_pass1__OutputSuppliers_40);
        }
#line 250 "term_pass1.m"
        {
#line 250 "term_pass1.m"
          mercury__map__det_update_4_p_0(transform_hlds__term_pass1__TypeCtorInfo_57_57, transform_hlds__term_pass1__TypeInfo_58_58, ((MR_Box) (transform_hlds__term_pass1__PPId_10)), ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_40)), transform_hlds__term_pass1__OutputSupplierMap0_12, &transform_hlds__term_pass1__OutputSupplierMap_41);
        }
#line 252 "term_pass1.m"
        {
#line 252 "term_pass1.m"
          transform_hlds__term_pass1__succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__AllActiveVars_38, transform_hlds__term_pass1__InVars_30);
        }
#line 254 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 253 "term_pass1.m"
          transform_hlds__term_pass1__SubsetErrors_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "term_pass1.m"
        else
#line 255 "term_pass1.m"
          {
#line 255 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__SubsetError_43;
#line 255 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__SubsetErrorContext_44;

#line 255 "term_pass1.m"
            {
#line 255 "term_pass1.m"
              transform_hlds__term_pass1__SubsetError_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 255 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetError_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 255 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetError_43, 1) = ((MR_Box) (transform_hlds__term_pass1__PPId_10));
#line 255 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetError_43, 2) = ((MR_Box) (transform_hlds__term_pass1__AllActiveVars_38));
#line 255 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetError_43, 3) = ((MR_Box) (transform_hlds__term_pass1__InVars_30));
#line 255 "term_pass1.m"
            }
#line 256 "term_pass1.m"
            {
#line 256 "term_pass1.m"
              transform_hlds__term_pass1__SubsetErrorContext_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 256 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetErrorContext_44, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetError_43));
#line 256 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetErrorContext_44, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_19));
#line 256 "term_pass1.m"
            }
#line 258 "term_pass1.m"
            {
#line 258 "term_pass1.m"
              transform_hlds__term_pass1__SubsetErrors_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_42, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrorContext_44));
#line 258 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "term_pass1.m"
            }
#line 255 "term_pass1.m"
          }
#line 260 "term_pass1.m"
        {
#line 260 "term_pass1.m"
          MR_Word base;
#line 260 "term_pass1.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 260 "term_pass1.m"
          *transform_hlds__term_pass1__Result_13 = base;
#line 260 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PathList_37));
#line 260 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_41));
#line 260 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_42));
#line 260 "term_pass1.m"
        }
#line 244 "term_pass1.m"
      }
#line 220 "term_pass1.m"
  }
#line 215 "term_pass1.m"
}

#line 201 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0_1(
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 201 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3,
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_4,
#line 201 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_5,
#line 201 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_6,
#line 201 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_7)
#line 201 "term_pass1.m"
{
#line 201 "term_pass1.m"
  {
#line 201 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 201 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_17;
#line 201 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 201 "term_pass1.m"
    {
#line 201 "term_pass1.m"
      transform_hlds__term_pass1__check_proc_non_term_calls_7_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_17, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_4), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 201 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_17));
#line 201 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_5 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 201 "term_pass1.m"
  }
#line 201 "term_pass1.m"
}

#line 174 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0(
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_2,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
#line 174 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_6,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7,
#line 174 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_8,
#line 174 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9,
#line 174 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_10)
#line 174 "term_pass1.m"
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
        if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "term_pass1.m"
          {
#line 182 "term_pass1.m"
            {
#line 182 "term_pass1.m"
              MR_Word base;
#line 182 "term_pass1.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 182 "term_pass1.m"
              *transform_hlds__term_pass1__Result_6 = base;
#line 182 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__4_4));
#line 182 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__3_3));
#line 182 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__5_5));
#line 182 "term_pass1.m"
            }
#line 181 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_10 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9;
#line 181 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_8 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7;
#line 181 "term_pass1.m"
          }
#line 181 "term_pass1.m"
        else
#line 185 "term_pass1.m"
          {
#line 185 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__TypeCtorInfo_67_67;
#line 185 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPId_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 185 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Result1_37;
#line 185 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ProcTermErrors_38;
#line 185 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__MaxErrors_40;
#line 185 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_55_55;
#line 185 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_57_57;
#line 185 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_58_58;
#line 189 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_39_39;
#line 189 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__V_41_41;

#line 186 "term_pass1.m"
            {
#line 186 "term_pass1.m"
              transform_hlds__term_pass1__find_arg_sizes_pred_9_p_0(transform_hlds__term_pass1__PPId_27, transform_hlds__term_pass1__PassInfo_2, transform_hlds__term_pass1__HeadVar__3_3, &transform_hlds__term_pass1__Result1_37, &transform_hlds__term_pass1__ProcTermErrors_38, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9, &transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_55_55);
            }
#line 3762 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeCtorInfo_67_67 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
#line 188 "term_pass1.m"
            {
#line 188 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_57_57 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_67_67, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7, transform_hlds__term_pass1__ProcTermErrors_38);
            }
#line 189 "term_pass1.m"
            transform_hlds__term_pass1__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 0)));
#line 189 "term_pass1.m"
            transform_hlds__term_pass1__MaxErrors_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 1)));
#line 189 "term_pass1.m"
            transform_hlds__term_pass1__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 2)));
#line 190 "term_pass1.m"
            {
#line 190 "term_pass1.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_67_67, transform_hlds__term_pass1__MaxErrors_40, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_57_57, &transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_58_58);
            }
#line 204 "term_pass1.m"
            if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result1_37)) == (MR_mktag((MR_Integer) 1))))
#line 192 "term_pass1.m"
              {
#line 192 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__OtherTermErrors_43;
#line 201 "term_pass1.m"
                MR_Box transform_hlds__term_pass1__conv4_OtherTermErrors_43;
#line 201 "term_pass1.m"
                MR_Box transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_10;
#line 201 "term_pass1.m"
                MR_Box transform_hlds__term_pass1__conv2_STATE_VARIABLE_IO_12;

#line 193 "term_pass1.m"
                *transform_hlds__term_pass1__Result_6 = transform_hlds__term_pass1__Result1_37;
#line 201 "term_pass1.m"
                {
#line 201 "term_pass1.m"
                  mercury__list__foldl3_8_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[6], transform_hlds__term_pass1__PPIds_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_pass1__conv4_OtherTermErrors_43, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_55_55)), &transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__term_pass1__conv2_STATE_VARIABLE_IO_12);
                }
#line 201 "term_pass1.m"
                transform_hlds__term_pass1__OtherTermErrors_43 = ((MR_Word) transform_hlds__term_pass1__conv4_OtherTermErrors_43);
#line 201 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) transform_hlds__term_pass1__conv3_STATE_VARIABLE_ModuleInfo_10);
#line 203 "term_pass1.m"
                {
#line 203 "term_pass1.m"
                  mercury__list__append_3_p_1(transform_hlds__term_pass1__TypeCtorInfo_67_67, transform_hlds__term_pass1__OtherTermErrors_43, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_58_58, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_8);
#line 203 "term_pass1.m"
                  return;
                }
#line 192 "term_pass1.m"
              }
#line 204 "term_pass1.m"
            else
#line 205 "term_pass1.m"
              {
#line 205 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Paths1_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_37, (MR_Integer) 0)));
#line 205 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__OutputSupplierMap1_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_37, (MR_Integer) 1)));
#line 205 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__SubsetErrors1_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_37, (MR_Integer) 2)));
#line 205 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Paths_47;
#line 205 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__SubsetErrors_48;

#line 206 "term_pass1.m"
                {
#line 206 "term_pass1.m"
                  transform_hlds__term_pass1__Paths_47 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_pass1__HeadVar__4_4, transform_hlds__term_pass1__Paths1_44);
                }
#line 207 "term_pass1.m"
                {
#line 207 "term_pass1.m"
                  transform_hlds__term_pass1__SubsetErrors_48 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_67_67, transform_hlds__term_pass1__HeadVar__5_5, transform_hlds__term_pass1__SubsetErrors1_46);
                }
#line 208 "term_pass1.m"
                /* direct tailcall eliminated */
#line 208 "term_pass1.m"
                {
#line 208 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass1__PPIds_28;
#line 208 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__3__tmp_copy_3 = transform_hlds__term_pass1__OutputSupplierMap1_45;
#line 208 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__4__tmp_copy_4 = transform_hlds__term_pass1__Paths_47;
#line 208 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__5__tmp_copy_5 = transform_hlds__term_pass1__SubsetErrors_48;
#line 208 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_7 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_58_58;
#line 208 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_55_55;

#line 208 "term_pass1.m"
                  transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_9 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0__tmp_copy_9;
#line 208 "term_pass1.m"
                  transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_7 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_7;
#line 208 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__5_5 = transform_hlds__term_pass1__HeadVar__5__tmp_copy_5;
#line 208 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__4_4 = transform_hlds__term_pass1__HeadVar__4__tmp_copy_4;
#line 208 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__3_3 = transform_hlds__term_pass1__HeadVar__3__tmp_copy_3;
#line 208 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__HeadVar__1__tmp_copy_1;
#line 208 "term_pass1.m"
                }
#line 208 "term_pass1.m"
                continue;
#line 205 "term_pass1.m"
              }
#line 185 "term_pass1.m"
          }
#line 181 "term_pass1.m"
      }
#line 181 "term_pass1.m"
      break;
#line 181 "term_pass1.m"
    }
#line 174 "term_pass1.m"
}

#line 150 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_p_0(
#line 150 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_10,
#line 150 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_11,
#line 150 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_12,
#line 150 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_13,
#line 150 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_14,
#line 150 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_23,
#line 150 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_24)
#line 150 "term_pass1.m"
{
#line 156 "term_pass1.m"
  while (MR_TRUE)
#line 156 "term_pass1.m"
    {
#line 156 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 156 "term_pass1.m"
      {
#line 156 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;
#line 156 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Result0_17;
#line 156 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TermErrors0_18;
#line 156 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30;

#line 157 "term_pass1.m"
        {
#line 157 "term_pass1.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_12_p_0(transform_hlds__term_pass1__SCC_10, transform_hlds__term_pass1__PassInfo_11, transform_hlds__term_pass1__OutputSupplierMap0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__Result0_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__TermErrors0_18, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_23, &transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30);
        }
#line 163 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result0_17)) == (MR_mktag((MR_Integer) 1))))
#line 160 "term_pass1.m"
          {
#line 161 "term_pass1.m"
            *transform_hlds__term_pass1__Result_13 = transform_hlds__term_pass1__Result0_17;
#line 162 "term_pass1.m"
            *transform_hlds__term_pass1__TermErrors_14 = transform_hlds__term_pass1__TermErrors0_18;
#line 162 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30;
#line 160 "term_pass1.m"
          }
#line 163 "term_pass1.m"
        else
#line 164 "term_pass1.m"
          {
#line 164 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplierMap1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_17, (MR_Integer) 1)));
#line 164 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_17, (MR_Integer) 0)));
#line 164 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_17, (MR_Integer) 2)));

#line 165 "term_pass1.m"
            {
#line 165 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap1_21)), ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap0_12)));
            }
#line 168 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 166 "term_pass1.m"
              {
#line 166 "term_pass1.m"
                *transform_hlds__term_pass1__Result_13 = transform_hlds__term_pass1__Result0_17;
#line 167 "term_pass1.m"
                *transform_hlds__term_pass1__TermErrors_14 = transform_hlds__term_pass1__TermErrors0_18;
#line 167 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_24 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30;
#line 166 "term_pass1.m"
              }
#line 168 "term_pass1.m"
            else
#line 169 "term_pass1.m"
              {
#line 169 "term_pass1.m"
                /* direct tailcall eliminated */
#line 169 "term_pass1.m"
                {
#line 169 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_12 = transform_hlds__term_pass1__OutputSupplierMap1_21;
#line 169 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0__tmp_copy_23 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30_30;

#line 169 "term_pass1.m"
                  transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_23 = transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0__tmp_copy_23;
#line 169 "term_pass1.m"
                  transform_hlds__term_pass1__OutputSupplierMap0_12 = transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_12;
#line 169 "term_pass1.m"
                }
#line 169 "term_pass1.m"
                continue;
#line 169 "term_pass1.m"
              }
#line 164 "term_pass1.m"
          }
#line 156 "term_pass1.m"
      }
#line 156 "term_pass1.m"
      break;
#line 156 "term_pass1.m"
    }
#line 150 "term_pass1.m"
}

#line 144 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
#line 144 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 144 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 144 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 144 "term_pass1.m"
{
#line 144 "term_pass1.m"
  {
#line 144 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 144 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__2_19;

#line 144 "term_pass1.m"
    {
#line 144 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__144__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_HeadVar__2_19);
    }
#line 144 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__2_19));
#line 144 "term_pass1.m"
  }
#line 144 "term_pass1.m"
}

#line 135 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
#line 135 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 135 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_2,
#line 135 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3)
#line 135 "term_pass1.m"
{
#line 138 "term_pass1.m"
  {
#line 138 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 138 "term_pass1.m"
    if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "term_pass1.m"
      {
#line 139 "term_pass1.m"
        {
#line 139 "term_pass1.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], transform_hlds__term_pass1__HeadVar__3_3);
#line 139 "term_pass1.m"
          return;
        }
#line 138 "term_pass1.m"
      }
#line 138 "term_pass1.m"
    else
#line 140 "term_pass1.m"
      {
#line 140 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 140 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PPIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 140 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10;
#line 140 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__ProcInfo_12;
#line 140 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__HeadVars_13;
#line 140 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__BoolList_17;
#line 142 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_11_11;

#line 141 "term_pass1.m"
        {
#line 141 "term_pass1.m"
          transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__PPIds_7, transform_hlds__term_pass1__ModuleInfo_2, &transform_hlds__term_pass1__OutputSupplierMap0_10);
        }
#line 142 "term_pass1.m"
        {
#line 142 "term_pass1.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_2, transform_hlds__term_pass1__PPId_6, &transform_hlds__term_pass1__V_11_11, &transform_hlds__term_pass1__ProcInfo_12);
        }
#line 143 "term_pass1.m"
        {
#line 143 "term_pass1.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_12, &transform_hlds__term_pass1__HeadVars_13);
        }
#line 145 "term_pass1.m"
        {
#line 145 "term_pass1.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[5], transform_hlds__term_pass1__HeadVars_13, &transform_hlds__term_pass1__BoolList_17);
        }
#line 146 "term_pass1.m"
        {
#line 146 "term_pass1.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass1__PPId_6)), ((MR_Box) (transform_hlds__term_pass1__BoolList_17)), transform_hlds__term_pass1__OutputSupplierMap0_10, transform_hlds__term_pass1__HeadVar__3_3);
#line 146 "term_pass1.m"
          return;
        }
#line 140 "term_pass1.m"
      }
#line 138 "term_pass1.m"
  }
#line 135 "term_pass1.m"
}

#line 419 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_2(
#line 419 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 419 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 419 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 419 "term_pass1.m"
{
#line 419 "term_pass1.m"
  {
#line 419 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 419 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_HeadVar__4_4;

#line 419 "term_pass1.m"
    {
#line 419 "term_pass1.m"
      transform_hlds__term_pass1__lookup_coeff_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv1_HeadVar__4_4);
    }
#line 419 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv1_HeadVar__4_4));
#line 419 "term_pass1.m"
  }
#line 419 "term_pass1.m"
}

#line 437 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_1(
#line 437 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 437 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 437 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 437 "term_pass1.m"
{
#line 437 "term_pass1.m"
  {
#line 437 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 437 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__2_20;

#line 437 "term_pass1.m"
    {
#line 437 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__437__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_HeadVar__2_20);
    }
#line 437 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__2_20));
#line 437 "term_pass1.m"
  }
#line 437 "term_pass1.m"
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
#line 93 "term_pass1.m"
  {
#line 93 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 93 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__InitOutputSupplierMap_15;
#line 93 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Result_16;

#line 94 "term_pass1.m"
    {
#line 94 "term_pass1.m"
      transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__SCC_9, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__term_pass1__InitOutputSupplierMap_15);
    }
#line 95 "term_pass1.m"
    {
#line 95 "term_pass1.m"
      transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_9_p_0(transform_hlds__term_pass1__SCC_9, transform_hlds__term_pass1__PassInfo_10, transform_hlds__term_pass1__InitOutputSupplierMap_15, &transform_hlds__term_pass1__Result_16, transform_hlds__term_pass1__TermErrors_12, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30);
    }
#line 124 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result_16)) == (MR_mktag((MR_Integer) 1))))
#line 125 "term_pass1.m"
      {
#line 125 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Errors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Result_16, (MR_Integer) 0)));

#line 126 "term_pass1.m"
        {
#line 126 "term_pass1.m"
          MR_Word base;
#line 126 "term_pass1.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 126 "term_pass1.m"
          *transform_hlds__term_pass1__ArgSize_11 = base;
#line 126 "term_pass1.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_28));
#line 126 "term_pass1.m"
        }
#line 125 "term_pass1.m"
      }
#line 124 "term_pass1.m"
    else
#line 98 "term_pass1.m"
      {
#line 98 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Paths_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_16, (MR_Integer) 0)));
#line 98 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_16, (MR_Integer) 1)));
#line 98 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__SubsetErrors_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_16, (MR_Integer) 2)));

#line 102 "term_pass1.m"
        if ((transform_hlds__term_pass1__SubsetErrors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 109 "term_pass1.m"
          if ((transform_hlds__term_pass1__Paths_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 105 "term_pass1.m"
            {
#line 105 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Context_22;
#line 105 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__ArgSizeError_23;
#line 105 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_40_40;

#line 106 "term_pass1.m"
              {
#line 106 "term_pass1.m"
                transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__SCC_9, *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30, &transform_hlds__term_pass1__Context_22);
              }
#line 107 "term_pass1.m"
              {
#line 107 "term_pass1.m"
                transform_hlds__term_pass1__ArgSizeError_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 107 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_23, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_22));
#line 107 "term_pass1.m"
              }
#line 108 "term_pass1.m"
              {
#line 108 "term_pass1.m"
                transform_hlds__term_pass1__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "term_pass1.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_40_40, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_23));
#line 108 "term_pass1.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "term_pass1.m"
              }
#line 108 "term_pass1.m"
              {
#line 108 "term_pass1.m"
                MR_Word base;
#line 108 "term_pass1.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "term_pass1.m"
                *transform_hlds__term_pass1__ArgSize_11 = base;
#line 108 "term_pass1.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_40_40));
#line 108 "term_pass1.m"
              }
#line 105 "term_pass1.m"
            }
#line 109 "term_pass1.m"
          else
#line 4293 "transform_hlds.term_pass1.c"
            {
#line 4295 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Varset_54;
#line 4297 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Equations_55;
#line 4299 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Objective_56;
#line 4301 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__PPVars_57;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_25_91;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeInfo_26_92;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_27_93;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeInfo_28_94;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Varset0_77;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__PPVars0_78;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__EqnSet0_79;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__EqnSet_80;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Vars_81;
#line 429 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Convert_82;

#line 430 "term_pass1.m"
              {
#line 430 "term_pass1.m"
                mercury__varset__init_1_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Varset0_77);
              }
#line 4329 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeCtorInfo_25_91 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4331 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeInfo_26_92 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 431 "term_pass1.m"
              {
#line 431 "term_pass1.m"
                mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_91, transform_hlds__term_pass1__TypeInfo_26_92, &transform_hlds__term_pass1__PPVars0_78);
              }
#line 4338 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeCtorInfo_27_93 = (MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0;
#line 432 "term_pass1.m"
              {
#line 432 "term_pass1.m"
                mercury__set__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_93, &transform_hlds__term_pass1__EqnSet0_79);
              }
#line 433 "term_pass1.m"
              {
#line 433 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1__convert_equations_2_7_p_0(transform_hlds__term_pass1__Paths_17, transform_hlds__term_pass1__PPVars0_78, &transform_hlds__term_pass1__PPVars_57, transform_hlds__term_pass1__Varset0_77, &transform_hlds__term_pass1__Varset_54, transform_hlds__term_pass1__EqnSet0_79, &transform_hlds__term_pass1__EqnSet_80);
              }
#line 429 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 429 "term_pass1.m"
                {
#line 435 "term_pass1.m"
                  {
#line 435 "term_pass1.m"
                    mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_93, transform_hlds__term_pass1__EqnSet_80, &transform_hlds__term_pass1__Equations_55);
                  }
#line 436 "term_pass1.m"
                  {
#line 436 "term_pass1.m"
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_91, transform_hlds__term_pass1__TypeInfo_26_92, transform_hlds__term_pass1__PPVars_57, &transform_hlds__term_pass1__Vars_81);
                  }
#line 437 "term_pass1.m"
                  transform_hlds__term_pass1__Convert_82 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[4];
#line 4366 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__TypeInfo_28_94 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1];
#line 438 "term_pass1.m"
                  {
#line 438 "term_pass1.m"
                    mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeInfo_26_92, transform_hlds__term_pass1__TypeInfo_28_94, transform_hlds__term_pass1__Convert_82, transform_hlds__term_pass1__Vars_81, &transform_hlds__term_pass1__Objective_56);
                  }
#line 438 "term_pass1.m"
                  transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 429 "term_pass1.m"
                }
#line 4377 "transform_hlds.term_pass1.c"
              if (transform_hlds__term_pass1__succeeded)
#line 4379 "transform_hlds.term_pass1.c"
                {
#line 4381 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__TypeCtorInfo_25_67 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4383 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__TypeInfo_26_68 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 4385 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__AllVars0_58;
#line 4387 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__AllVars_59;
#line 4389 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__Soln_60;

#line 411 "term_pass1.m"
                  {
#line 411 "term_pass1.m"
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_67, transform_hlds__term_pass1__TypeInfo_26_68, transform_hlds__term_pass1__PPVars_57, &transform_hlds__term_pass1__AllVars0_58);
                  }
#line 412 "term_pass1.m"
                  {
#line 412 "term_pass1.m"
                    mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__term_pass1__TypeInfo_26_68, transform_hlds__term_pass1__AllVars0_58, &transform_hlds__term_pass1__AllVars_59);
                  }
#line 413 "term_pass1.m"
                  {
#line 413 "term_pass1.m"
                    libs__lp__lp_solve_8_p_0(transform_hlds__term_pass1__Equations_55, (MR_Integer) 1, transform_hlds__term_pass1__Objective_56, transform_hlds__term_pass1__Varset_54, transform_hlds__term_pass1__AllVars_59, &transform_hlds__term_pass1__Soln_60);
                  }
#line 4407 "transform_hlds.term_pass1.c"
                  if ((transform_hlds__term_pass1__Soln_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4409 "transform_hlds.term_pass1.c"
                    {
#line 4411 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__V_37_37;
#line 4413 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__Context_42;
#line 4415 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__ArgSizeError_43;

#line 117 "term_pass1.m"
                      {
#line 117 "term_pass1.m"
                        transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__SCC_9, *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30, &transform_hlds__term_pass1__Context_42);
                      }
#line 118 "term_pass1.m"
                      {
#line 118 "term_pass1.m"
                        transform_hlds__term_pass1__ArgSizeError_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 118 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_43, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_42));
#line 118 "term_pass1.m"
                      }
#line 120 "term_pass1.m"
                      {
#line 120 "term_pass1.m"
                        transform_hlds__term_pass1__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_37_37, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_43));
#line 120 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "term_pass1.m"
                      }
#line 120 "term_pass1.m"
                      {
#line 120 "term_pass1.m"
                        MR_Word base;
#line 120 "term_pass1.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 120 "term_pass1.m"
                        *transform_hlds__term_pass1__ArgSize_11 = base;
#line 120 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_37_37));
#line 120 "term_pass1.m"
                      }
#line 4455 "transform_hlds.term_pass1.c"
                    }
#line 4457 "transform_hlds.term_pass1.c"
                  else
#line 4459 "transform_hlds.term_pass1.c"
                    {
#line 4461 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__Solution_27;
#line 4463 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__SolnVal_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_60, (MR_Integer) 1)));
#line 4465 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__V_66_66;
#line 418 "term_pass1.m"
                      MR_Float transform_hlds__term_pass1___ObjVal_61 = MR_unbox_float((MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_60, (MR_Integer) 0)));

#line 419 "term_pass1.m"
                      {
#line 419 "term_pass1.m"
                        transform_hlds__term_pass1__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 419 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[0]));
#line 419 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_8_p_0_2));
#line 419 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 419 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 3) = ((MR_Box) (transform_hlds__term_pass1__PPVars_57));
#line 419 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_66_66, 4) = ((MR_Box) (transform_hlds__term_pass1__SolnVal_62));
#line 419 "term_pass1.m"
                      }
#line 419 "term_pass1.m"
                      {
#line 419 "term_pass1.m"
                        mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_67, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[0], transform_hlds__term_pass1__V_66_66, transform_hlds__term_pass1__SCC_9, &transform_hlds__term_pass1__Solution_27);
                      }
#line 114 "term_pass1.m"
                      {
#line 114 "term_pass1.m"
                        MR_Word base;
#line 114 "term_pass1.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "term_pass1.m"
                        *transform_hlds__term_pass1__ArgSize_11 = base;
#line 114 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Solution_27));
#line 114 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_18));
#line 114 "term_pass1.m"
                      }
#line 4505 "transform_hlds.term_pass1.c"
                    }
#line 4507 "transform_hlds.term_pass1.c"
                }
#line 4509 "transform_hlds.term_pass1.c"
              else
#line 4511 "transform_hlds.term_pass1.c"
                {
#line 4513 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__V_98_98;
#line 4515 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__Context_100;
#line 4517 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__ArgSizeError_101;

#line 117 "term_pass1.m"
                  {
#line 117 "term_pass1.m"
                    transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__SCC_9, *transform_hlds__term_pass1__STATE_VARIABLE_ModuleInfo_30, &transform_hlds__term_pass1__Context_100);
                  }
#line 118 "term_pass1.m"
                  {
#line 118 "term_pass1.m"
                    transform_hlds__term_pass1__ArgSizeError_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 118 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_101, 1) = ((MR_Box) (transform_hlds__term_pass1__Context_100));
#line 118 "term_pass1.m"
                  }
#line 120 "term_pass1.m"
                  {
#line 120 "term_pass1.m"
                    transform_hlds__term_pass1__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_98_98, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_101));
#line 120 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "term_pass1.m"
                  }
#line 120 "term_pass1.m"
                  {
#line 120 "term_pass1.m"
                    MR_Word base;
#line 120 "term_pass1.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 120 "term_pass1.m"
                    *transform_hlds__term_pass1__ArgSize_11 = base;
#line 120 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_98_98));
#line 120 "term_pass1.m"
                  }
#line 4557 "transform_hlds.term_pass1.c"
                }
#line 4559 "transform_hlds.term_pass1.c"
            }
#line 102 "term_pass1.m"
        else
#line 101 "term_pass1.m"
          {
#line 101 "term_pass1.m"
            MR_Word base;
#line 101 "term_pass1.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 101 "term_pass1.m"
            *transform_hlds__term_pass1__ArgSize_11 = base;
#line 101 "term_pass1.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_19));
#line 101 "term_pass1.m"
          }
#line 98 "term_pass1.m"
      }
#line 93 "term_pass1.m"
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
