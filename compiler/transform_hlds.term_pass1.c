/*
** Automatically generated from `term_pass1.m'
** by the Mercury compiler,
** version DEV
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




#line 143 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 146 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0;

#line 149 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 152 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 155 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0;

#line 158 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0;

#line 161 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 167 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 173 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 176 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

#line 179 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0;

#line 182 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0;

#line 185 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 188 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2];

#line 191 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0;

#line 194 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 197 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1];

#line 200 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1;

#line 203 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1];

#line 206 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1];

#line 209 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_arg_size_result_0[2];

#line 212 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2];

#line 215 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2];

#line 218 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0;

#line 221 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3];

#line 224 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0;

#line 227 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1];

#line 230 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDesc transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1;

#line 233 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1];

#line 236 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1];

#line 239 "transform_hlds.term_pass1.c"
static const MR_DuPtagLayout transform_hlds__term_pass1__transform_hlds__term_pass1__du_ptag_ordered_pass1_result_0[2];

#line 242 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2];

#line 245 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2];

#line 248 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
#line 251 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 253 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

#line 256 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
#line 259 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 261 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 263 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

#line 266 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
#line 269 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 271 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2);

#line 274 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
#line 277 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 279 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 281 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3);

#line 143 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_51_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 143 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19);

#line 438 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__438__1_6_p_0(
#line 438 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_53,
#line 438 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_54,
#line 438 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__3_55,
#line 438 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__4_56,
#line 438 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__5_57,
#line 438 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__6_58);

#line 423 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__423__1_2_p_0(
#line 423 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_19,
#line 423 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_20);

#line 143 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__143__1_2_p_0(
#line 143 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_18,
#line 143 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19);

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

#line 447 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
#line 447 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPIds_5,
#line 447 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Soln_6,
#line 447 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_7,
#line 447 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

#line 438 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 438 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
#line 438 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
#line 438 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6);

#line 426 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
#line 426 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
#line 426 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
#line 426 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7);

#line 379 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_9,
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Case_10,
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_15,
#line 379 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_16);

#line 350 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4(
#line 350 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 350 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 350 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 350 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 355 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3(
#line 355 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 355 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 355 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 355 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 346 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2(
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 346 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 346 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1(
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 346 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 301 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_9,
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Goal_10,
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63,
#line 301 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_64);

#line 292 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(
#line 292 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_5,
#line 292 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_6,
#line 292 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_12,
#line 292 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_13);

#line 259 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
#line 259 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 259 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 259 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 259 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4);

#line 210 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(
#line 210 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 210 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_8,
#line 210 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_9,
#line 210 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
#line 210 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_11,
#line 210 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_12);

#line 197 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1(
#line 197 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 197 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 197 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 197 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3);

#line 172 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_2,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__6_6,
#line 172 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_7,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8,
#line 172 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9);

#line 149 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(
#line 149 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 149 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_8,
#line 149 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_9,
#line 149 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
#line 149 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_11,
#line 149 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_12);

#line 143 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
#line 143 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 143 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 143 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

#line 134 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
#line 134 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
#line 134 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 134 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3);

#line 405 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2(
#line 405 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 405 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 405 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2);

#line 423 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1(
#line 423 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 423 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 423 "term_pass1.m"
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



#line 785 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 793 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 801 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 810 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 819 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 828 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 837 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 845 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 853 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 861 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_pass1__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass1__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 870 "transform_hlds.term_pass1.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass1__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 878 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 887 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_pass1__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0
  }
};

#line 895 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 903 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass1__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 912 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

#line 918 "transform_hlds.term_pass1.c"
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

#line 933 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 941 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_arg_size_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 946 "transform_hlds.term_pass1.c"
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

#line 961 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

#line 966 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_arg_size_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1
};

#line 971 "transform_hlds.term_pass1.c"
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

#line 985 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_arg_size_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_arg_size_result_0_0
};

#line 991 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_arg_size_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 997 "transform_hlds.term_pass1.c"
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

#line 1014 "transform_hlds.term_pass1.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0
  }
};

#line 1022 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_traversal__type_ctor_info_term_path_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 1029 "transform_hlds.term_pass1.c"
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

#line 1044 "transform_hlds.term_pass1.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass1__transform_hlds__term_pass1__field_types_pass1_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass1__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 1049 "transform_hlds.term_pass1.c"
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

#line 1064 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_0[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

#line 1069 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_stag_ordered_pass1_result_0_1[1] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1
};

#line 1074 "transform_hlds.term_pass1.c"
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

#line 1088 "transform_hlds.term_pass1.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass1__transform_hlds__term_pass1__du_name_ordered_pass1_result_0[2] = {
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_1,
  &transform_hlds__term_pass1__transform_hlds__term_pass1__du_functor_desc_pass1_result_0_0
};

#line 1094 "transform_hlds.term_pass1.c"
static const MR_Integer transform_hlds__term_pass1__transform_hlds__term_pass1__functor_number_map_pass1_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1100 "transform_hlds.term_pass1.c"
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

#line 1117 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0_10001(
#line 1120 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 1122 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
#line 1124 "transform_hlds.term_pass1.c"
{
#line 1126 "transform_hlds.term_pass1.c"
  {
#line 1128 "transform_hlds.term_pass1.c"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 1131 "transform_hlds.term_pass1.c"
    {
#line 1133 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____arg_size_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
#line 1136 "transform_hlds.term_pass1.c"
    return transform_hlds__term_pass1__succeeded;
#line 1138 "transform_hlds.term_pass1.c"
  }
#line 1140 "transform_hlds.term_pass1.c"
}

#line 1143 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0_10001(
#line 1146 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 1148 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 1150 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
#line 1152 "transform_hlds.term_pass1.c"
{
#line 1154 "transform_hlds.term_pass1.c"
  {
#line 1156 "transform_hlds.term_pass1.c"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

#line 1159 "transform_hlds.term_pass1.c"
    {
#line 1161 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1____Compare____arg_size_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
#line 1164 "transform_hlds.term_pass1.c"
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
#line 1166 "transform_hlds.term_pass1.c"
  }
#line 1168 "transform_hlds.term_pass1.c"
}

#line 1171 "transform_hlds.term_pass1.c"
static MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____pass1_result_0_0_10001(
#line 1174 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 1176 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2)
#line 1178 "transform_hlds.term_pass1.c"
{
#line 1180 "transform_hlds.term_pass1.c"
  {
#line 1182 "transform_hlds.term_pass1.c"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 1185 "transform_hlds.term_pass1.c"
    {
#line 1187 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1____Unify____pass1_result_0_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2));
    }
#line 1190 "transform_hlds.term_pass1.c"
    return transform_hlds__term_pass1__succeeded;
#line 1192 "transform_hlds.term_pass1.c"
  }
#line 1194 "transform_hlds.term_pass1.c"
}

#line 1197 "transform_hlds.term_pass1.c"
static void MR_CALL 
transform_hlds__term_pass1____Compare____pass1_result_0_0_10001(
#line 1200 "transform_hlds.term_pass1.c"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_1,
#line 1202 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 1204 "transform_hlds.term_pass1.c"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3)
#line 1206 "transform_hlds.term_pass1.c"
{
#line 1208 "transform_hlds.term_pass1.c"
  {
#line 1210 "transform_hlds.term_pass1.c"
    MR_Word transform_hlds__term_pass1__conv0_HeadVar__1_1;

#line 1213 "transform_hlds.term_pass1.c"
    {
#line 1215 "transform_hlds.term_pass1.c"
      transform_hlds__term_pass1____Compare____pass1_result_0_0(&transform_hlds__term_pass1__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3));
    }
#line 1218 "transform_hlds.term_pass1.c"
    *transform_hlds__term_pass1__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass1__conv0_HeadVar__1_1));
#line 1220 "transform_hlds.term_pass1.c"
  }
#line 1222 "transform_hlds.term_pass1.c"
}

#line 143 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_51_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 143 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19)
#line 143 "term_pass1.m"
{
#line 143 "term_pass1.m"
  {
#line 143 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 143 "term_pass1.m"
    *transform_hlds__term_pass1__LambdaHeadVar__2_19 = (MR_Integer) 0;
#line 143 "term_pass1.m"
  }
#line 143 "term_pass1.m"
}

#line 438 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__438__1_6_p_0(
#line 438 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_53,
#line 438 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_54,
#line 438 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__3_55,
#line 438 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__4_56,
#line 438 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__5_57,
#line 438 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__6_58)
#line 438 "term_pass1.m"
{
#line 438 "term_pass1.m"
  {
#line 438 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 438 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var_37;
#line 461 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var0_87;
#line 459 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv0_Var0_87;

#line 459 "term_pass1.m"
    {
#line 459 "term_pass1.m"
      transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__LambdaHeadVar__5_57, ((MR_Box) (transform_hlds__term_pass1__LambdaHeadVar__1_53)), &transform_hlds__term_pass1__conv0_Var0_87);
    }
#line 459 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 459 "term_pass1.m"
      {
#line 459 "term_pass1.m"
        transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
#line 459 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 459 "term_pass1.m"
      }
#line 461 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 460 "term_pass1.m"
      {
#line 460 "term_pass1.m"
        transform_hlds__term_pass1__Var_37 = transform_hlds__term_pass1__Var0_87;
#line 460 "term_pass1.m"
        *transform_hlds__term_pass1__LambdaHeadVar__6_58 = transform_hlds__term_pass1__LambdaHeadVar__5_57;
#line 460 "term_pass1.m"
        *transform_hlds__term_pass1__LambdaHeadVar__4_56 = transform_hlds__term_pass1__LambdaHeadVar__3_55;
#line 460 "term_pass1.m"
      }
#line 461 "term_pass1.m"
    else
#line 462 "term_pass1.m"
      {
#line 462 "term_pass1.m"
        {
#line 462 "term_pass1.m"
          mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Var_37, transform_hlds__term_pass1__LambdaHeadVar__3_55, transform_hlds__term_pass1__LambdaHeadVar__4_56);
        }
#line 463 "term_pass1.m"
        {
#line 463 "term_pass1.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__LambdaHeadVar__1_53)), ((MR_Box) (transform_hlds__term_pass1__Var_37)), transform_hlds__term_pass1__LambdaHeadVar__5_57, transform_hlds__term_pass1__LambdaHeadVar__6_58);
        }
#line 462 "term_pass1.m"
      }
#line 441 "term_pass1.m"
    {
#line 441 "term_pass1.m"
      MR_Word base;
#line 441 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "term_pass1.m"
      *transform_hlds__term_pass1__LambdaHeadVar__2_54 = base;
#line 441 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Var_37));
#line 441 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) -1.0000000000000000);
#line 441 "term_pass1.m"
    }
#line 438 "term_pass1.m"
  }
#line 438 "term_pass1.m"
}

#line 423 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__423__1_2_p_0(
#line 423 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_19,
#line 423 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_20)
#line 423 "term_pass1.m"
{
#line 423 "term_pass1.m"
  {
#line 423 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 423 "term_pass1.m"
    {
#line 423 "term_pass1.m"
      MR_Word base;
#line 423 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "term_pass1.m"
      *transform_hlds__term_pass1__LambdaHeadVar__2_20 = base;
#line 423 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__LambdaHeadVar__1_19));
#line 423 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 423 "term_pass1.m"
    }
#line 423 "term_pass1.m"
  }
#line 423 "term_pass1.m"
}

#line 143 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__143__1_2_p_0(
#line 143 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__LambdaHeadVar__1_18,
#line 143 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__LambdaHeadVar__2_19)
#line 143 "term_pass1.m"
{
#line 143 "term_pass1.m"
  {
#line 143 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 143 "term_pass1.m"
    {
#line 143 "term_pass1.m"
      transform_hlds__term_pass1__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_111_117_116_112_117_116_95_115_117_112_112_108_105_101_114_115_95_95_49_52_51_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass1__LambdaHeadVar__2_19);
    }
#line 143 "term_pass1.m"
  }
#line 143 "term_pass1.m"
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
#line 1415 "transform_hlds.term_pass1.c"
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
            }
#line 76 "term_pass1.m"
          }
#line 76 "term_pass1.m"
        else
#line 1442 "transform_hlds.term_pass1.c"
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
#line 1459 "transform_hlds.term_pass1.c"
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
#line 1479 "transform_hlds.term_pass1.c"
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
#line 1499 "transform_hlds.term_pass1.c"
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
#line 1574 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1576 "transform_hlds.term_pass1.c"
            {
#line 1578 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_pass1__V_9_9)), ((MR_Box) (transform_hlds__term_pass1__V_10_10)));
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
#line 1620 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_14_14 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[6];
#line 1622 "transform_hlds.term_pass1.c"
            {
#line 1624 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_14_14, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
            }
#line 76 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 76 "term_pass1.m"
              {
#line 1631 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__TypeInfo_15_15 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
#line 1633 "transform_hlds.term_pass1.c"
                {
#line 1635 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_15_15, ((MR_Box) (transform_hlds__term_pass1__V_4_4)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
                }
#line 76 "term_pass1.m"
                if (transform_hlds__term_pass1__succeeded)
#line 76 "term_pass1.m"
                  {
#line 1642 "transform_hlds.term_pass1.c"
                    transform_hlds__term_pass1__TypeInfo_16_16 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1644 "transform_hlds.term_pass1.c"
                    {
#line 1646 "transform_hlds.term_pass1.c"
                      transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_16_16, ((MR_Box) (transform_hlds__term_pass1__V_5_5)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
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

#line 36 "term_pass1.m"
void MR_CALL 
transform_hlds__term_pass1____Compare____arg_size_result_0_0(
#line 36 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__1_1,
#line 36 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 36 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3)
#line 36 "term_pass1.m"
{
#line 36 "term_pass1.m"
  {
#line 36 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 36 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_17 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;
#line 36 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_18 = (MR_Integer) transform_hlds__term_pass1__HeadVar__3_3;

#line 36 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_17 == transform_hlds__term_pass1__CastY_18);
#line 36 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 1688 "transform_hlds.term_pass1.c"
      *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "term_pass1.m"
    else
#line 36 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 36 "term_pass1.m"
      {
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 36 "term_pass1.m"
          {
#line 36 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));

#line 36 "term_pass1.m"
            {
#line 36 "term_pass1.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_22_22)), ((MR_Box) (transform_hlds__term_pass1__V_16_16)));
            }
#line 36 "term_pass1.m"
          }
#line 36 "term_pass1.m"
        else
#line 1715 "transform_hlds.term_pass1.c"
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "term_pass1.m"
      }
#line 36 "term_pass1.m"
    else
#line 36 "term_pass1.m"
      {
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));

#line 36 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1730 "transform_hlds.term_pass1.c"
          *transform_hlds__term_pass1__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "term_pass1.m"
        else
#line 36 "term_pass1.m"
          {
#line 36 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 36 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 36 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_8_8;

#line 36 "term_pass1.m"
            {
#line 36 "term_pass1.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[5], &transform_hlds__term_pass1__V_8_8, ((MR_Box) (transform_hlds__term_pass1__V_24_24)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
            }
#line 1748 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__V_8_8 == (MR_Integer) 0);
#line 36 "term_pass1.m"
            transform_hlds__term_pass1__succeeded = !(transform_hlds__term_pass1__succeeded);
#line 36 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 36 "term_pass1.m"
              *transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__V_8_8;
#line 36 "term_pass1.m"
            else
#line 36 "term_pass1.m"
              {
#line 36 "term_pass1.m"
                {
#line 36 "term_pass1.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], transform_hlds__term_pass1__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass1__V_23_23)), ((MR_Box) (transform_hlds__term_pass1__V_7_7)));
                }
#line 36 "term_pass1.m"
              }
#line 36 "term_pass1.m"
          }
#line 36 "term_pass1.m"
      }
#line 36 "term_pass1.m"
  }
#line 36 "term_pass1.m"
}

#line 36 "term_pass1.m"
MR_bool MR_CALL 
transform_hlds__term_pass1____Unify____arg_size_result_0_0(
#line 36 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 36 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2)
#line 36 "term_pass1.m"
{
#line 36 "term_pass1.m"
  {
#line 36 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 36 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastX_9 = (MR_Integer) transform_hlds__term_pass1__HeadVar__1_1;
#line 36 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__CastY_10 = (MR_Integer) transform_hlds__term_pass1__HeadVar__2_2;

#line 36 "term_pass1.m"
    transform_hlds__term_pass1__succeeded = (transform_hlds__term_pass1__CastX_9 == transform_hlds__term_pass1__CastY_10);
#line 36 "term_pass1.m"
    if (transform_hlds__term_pass1__succeeded)
#line 36 "term_pass1.m"
      transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 36 "term_pass1.m"
    else
#line 36 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 36 "term_pass1.m"
      {
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_11_11;
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_8_8;

#line 36 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 36 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 36 "term_pass1.m"
          {
#line 36 "term_pass1.m"
            transform_hlds__term_pass1__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 1821 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2];
#line 1823 "transform_hlds.term_pass1.c"
            {
#line 1825 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_pass1__V_7_7)), ((MR_Box) (transform_hlds__term_pass1__V_8_8)));
            }
#line 36 "term_pass1.m"
          }
#line 36 "term_pass1.m"
      }
#line 36 "term_pass1.m"
    else
#line 36 "term_pass1.m"
      {
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_12_12;
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TypeInfo_13_13;
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_5_5;
#line 36 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_6_6;

#line 36 "term_pass1.m"
        transform_hlds__term_pass1__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass1__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 36 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 36 "term_pass1.m"
          {
#line 36 "term_pass1.m"
            transform_hlds__term_pass1__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 36 "term_pass1.m"
            transform_hlds__term_pass1__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 1859 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[5];
#line 1861 "transform_hlds.term_pass1.c"
            {
#line 1863 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_pass1__V_3_3)), ((MR_Box) (transform_hlds__term_pass1__V_5_5)));
            }
#line 36 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 36 "term_pass1.m"
              {
#line 1870 "transform_hlds.term_pass1.c"
                transform_hlds__term_pass1__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[3];
#line 1872 "transform_hlds.term_pass1.c"
                {
#line 1874 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass1__TypeInfo_13_13, ((MR_Box) (transform_hlds__term_pass1__V_4_4)), ((MR_Box) (transform_hlds__term_pass1__V_6_6)));
                }
#line 36 "term_pass1.m"
              }
#line 36 "term_pass1.m"
          }
#line 36 "term_pass1.m"
      }
#line 36 "term_pass1.m"
    return transform_hlds__term_pass1__succeeded;
#line 36 "term_pass1.m"
  }
#line 36 "term_pass1.m"
}

#line 447 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__lookup_coeff_4_p_0(
#line 447 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPIds_5,
#line 447 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Soln_6,
#line 447 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_7,
#line 447 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
#line 447 "term_pass1.m"
{
#line 450 "term_pass1.m"
  {
#line 450 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 450 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 450 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__ICoeff_8;
#line 450 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Var_9;
#line 450 "term_pass1.m"
    MR_Float transform_hlds__term_pass1__Coeff_10;
#line 451 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv0_Var_9;
#line 452 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__conv1_Coeff_10;

#line 451 "term_pass1.m"
    {
#line 451 "term_pass1.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_pass1__TypeInfo_12_12, transform_hlds__term_pass1__PPIds_5, ((MR_Box) (transform_hlds__term_pass1__PPId_7)), &transform_hlds__term_pass1__conv0_Var_9);
    }
#line 451 "term_pass1.m"
    transform_hlds__term_pass1__Var_9 = ((MR_Word) transform_hlds__term_pass1__conv0_Var_9);
#line 452 "term_pass1.m"
    {
#line 452 "term_pass1.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeInfo_12_12, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, transform_hlds__term_pass1__Soln_6, ((MR_Box) (transform_hlds__term_pass1__Var_9)), &transform_hlds__term_pass1__conv1_Coeff_10);
    }
#line 452 "term_pass1.m"
    transform_hlds__term_pass1__Coeff_10 = MR_unbox_float(transform_hlds__term_pass1__conv1_Coeff_10);
#line 453 "term_pass1.m"
    {
#line 453 "term_pass1.m"
      transform_hlds__term_pass1__ICoeff_8 = mercury__float__ceiling_to_int_1_f_0(transform_hlds__term_pass1__Coeff_10);
    }
#line 450 "term_pass1.m"
    {
#line 450 "term_pass1.m"
      MR_Word base;
#line 450 "term_pass1.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 450 "term_pass1.m"
      *transform_hlds__term_pass1__HeadVar__4_4 = base;
#line 450 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_7));
#line 450 "term_pass1.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__ICoeff_8));
#line 450 "term_pass1.m"
    }
#line 450 "term_pass1.m"
  }
#line 447 "term_pass1.m"
}

#line 438 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0_1(
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 438 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2,
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_3,
#line 438 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_4,
#line 438 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_5,
#line 438 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_6)
#line 438 "term_pass1.m"
{
#line 438 "term_pass1.m"
  {
#line 438 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 438 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv3_LambdaHeadVar__2_54;
#line 438 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv2_LambdaHeadVar__4_56;
#line 438 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_LambdaHeadVar__6_58;

#line 438 "term_pass1.m"
    {
#line 438 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations_2__438__1_6_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv3_LambdaHeadVar__2_54, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_3), &transform_hlds__term_pass1__conv2_LambdaHeadVar__4_56, ((MR_Word) transform_hlds__term_pass1__wrapper_arg_5), &transform_hlds__term_pass1__conv1_LambdaHeadVar__6_58);
    }
#line 438 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv3_LambdaHeadVar__2_54));
#line 438 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_4 = ((MR_Box) (transform_hlds__term_pass1__conv2_LambdaHeadVar__4_56));
#line 438 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_6 = ((MR_Box) (transform_hlds__term_pass1__conv1_LambdaHeadVar__6_58));
#line 438 "term_pass1.m"
  }
#line 438 "term_pass1.m"
}

#line 426 "term_pass1.m"
static MR_bool MR_CALL 
transform_hlds__term_pass1__convert_equations_2_7_p_0(
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2,
#line 426 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3,
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4,
#line 426 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Varset_5,
#line 426 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6,
#line 426 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7)
#line 426 "term_pass1.m"
{
#line 431 "term_pass1.m"
  while (MR_TRUE)
#line 431 "term_pass1.m"
    {
#line 431 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 431 "term_pass1.m"
      {
#line 431 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;

#line 431 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "term_pass1.m"
          {
#line 431 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Eqns_7 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6;
#line 431 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Varset_5 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
#line 431 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_PPVars_3 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
#line 431 "term_pass1.m"
            transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 431 "term_pass1.m"
          }
#line 431 "term_pass1.m"
        else
#line 432 "term_pass1.m"
          {
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Path_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Paths_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ThisPPId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 0)));
#line 432 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__IntGamma_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 2)));
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPIds_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 3)));
#line 432 "term_pass1.m"
            MR_Float transform_hlds__term_pass1__FloatGamma_27;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Eqn_28;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Coeffs_29;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ThisVar_30;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__RestCoeffs_31;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_47_47;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
#line 432 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;
#line 433 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 1)));
#line 433 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path_17, (MR_Integer) 4)));
#line 461 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Var0_87;
#line 459 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv0_Var0_87;
#line 443 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62;
#line 443 "term_pass1.m"
            MR_Box transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63;

#line 434 "term_pass1.m"
            {
#line 434 "term_pass1.m"
              transform_hlds__term_pass1__FloatGamma_27 = mercury__float__float_1_f_0(transform_hlds__term_pass1__IntGamma_24);
            }
#line 459 "term_pass1.m"
            {
#line 459 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), &transform_hlds__term_pass1__conv0_Var0_87);
            }
#line 459 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 459 "term_pass1.m"
              {
#line 459 "term_pass1.m"
                transform_hlds__term_pass1__Var0_87 = ((MR_Word) transform_hlds__term_pass1__conv0_Var0_87);
#line 459 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 459 "term_pass1.m"
              }
#line 461 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 460 "term_pass1.m"
              {
#line 460 "term_pass1.m"
                transform_hlds__term_pass1__ThisVar_30 = transform_hlds__term_pass1__Var0_87;
#line 460 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2;
#line 460 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4;
#line 460 "term_pass1.m"
              }
#line 461 "term_pass1.m"
            else
#line 462 "term_pass1.m"
              {
#line 462 "term_pass1.m"
                {
#line 462 "term_pass1.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__ThisVar_30, transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4, &transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45);
                }
#line 463 "term_pass1.m"
                {
#line 463 "term_pass1.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3], ((MR_Box) (transform_hlds__term_pass1__ThisPPId_22)), ((MR_Box) (transform_hlds__term_pass1__ThisVar_30)), transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2, &transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46);
                }
#line 462 "term_pass1.m"
              }
#line 437 "term_pass1.m"
            {
#line 437 "term_pass1.m"
              transform_hlds__term_pass1__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 0) = ((MR_Box) (transform_hlds__term_pass1__ThisVar_30));
#line 437 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_47_47, 1) = MR_box_float((MR_Float) 1.0000000000000000);
#line 437 "term_pass1.m"
            }
#line 443 "term_pass1.m"
            {
#line 443 "term_pass1.m"
              mercury__list__map_foldl2_7_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1], (MR_Word) &transform_hlds__term_pass1_scalar_common_1[4], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[2], (MR_Word) &transform_hlds__term_pass1_scalar_common_2[6], transform_hlds__term_pass1__PPIds_25, &transform_hlds__term_pass1__RestCoeffs_31, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Varset_45_45)), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_PPVars_46_46)), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
            }
#line 443 "term_pass1.m"
            transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62 = ((MR_Word) transform_hlds__term_pass1__conv5_STATE_VARIABLE_Varset_62_62);
#line 443 "term_pass1.m"
            transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63 = ((MR_Word) transform_hlds__term_pass1__conv4_STATE_VARIABLE_PPVars_63_63);
#line 437 "term_pass1.m"
            {
#line 437 "term_pass1.m"
              transform_hlds__term_pass1__Coeffs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 0) = ((MR_Box) (transform_hlds__term_pass1__V_47_47));
#line 437 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Coeffs_29, 1) = ((MR_Box) (transform_hlds__term_pass1__RestCoeffs_31));
#line 437 "term_pass1.m"
            }
#line 435 "term_pass1.m"
            {
#line 435 "term_pass1.m"
              transform_hlds__term_pass1__Eqn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 0) = ((MR_Box) (transform_hlds__term_pass1__Coeffs_29));
#line 435 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 1) = ((MR_Box) ((MR_Integer) 2));
#line 435 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Eqn_28, 2) = MR_box_float(transform_hlds__term_pass1__FloatGamma_27);
#line 435 "term_pass1.m"
            }
#line 444 "term_pass1.m"
            {
#line 444 "term_pass1.m"
              mercury__set__insert_3_p_0((MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0, ((MR_Box) (transform_hlds__term_pass1__Eqn_28)), transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6, &transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64);
            }
#line 445 "term_pass1.m"
            /* direct tailcall eliminated */
#line 445 "term_pass1.m"
            {
#line 445 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass1__Paths_18;
#line 445 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_63_63;
#line 445 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_62_62;
#line 445 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_64_64;

#line 445 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0_6 = transform_hlds__term_pass1__STATE_VARIABLE_Eqns_0__tmp_copy_6;
#line 445 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_Varset_0_4 = transform_hlds__term_pass1__STATE_VARIABLE_Varset_0__tmp_copy_4;
#line 445 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0_2 = transform_hlds__term_pass1__STATE_VARIABLE_PPVars_0__tmp_copy_2;
#line 445 "term_pass1.m"
              transform_hlds__term_pass1__HeadVar__1_1 = transform_hlds__term_pass1__HeadVar__1__tmp_copy_1;
#line 445 "term_pass1.m"
            }
#line 445 "term_pass1.m"
            continue;
#line 432 "term_pass1.m"
          }
#line 431 "term_pass1.m"
        return transform_hlds__term_pass1__succeeded;
#line 431 "term_pass1.m"
      }
#line 431 "term_pass1.m"
      break;
#line 431 "term_pass1.m"
    }
#line 426 "term_pass1.m"
}

#line 379 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_9,
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Case_10,
#line 379 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_15,
#line 379 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_16)
#line 379 "term_pass1.m"
{
#line 383 "term_pass1.m"
  {
#line 383 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 383 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Case_10, (MR_Integer) 2)));
#line 384 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Case_10, (MR_Integer) 0)));
#line 384 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Case_10, (MR_Integer) 1)));

#line 385 "term_pass1.m"
    {
#line 385 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__PPId_8, transform_hlds__term_pass1__VarTypes_9, transform_hlds__term_pass1__Goal_14, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_15, transform_hlds__term_pass1__STATE_VARIABLE_Errors_16);
    }
#line 383 "term_pass1.m"
  }
#line 379 "term_pass1.m"
}

#line 350 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4(
#line 350 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 350 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 350 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 350 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 350 "term_pass1.m"
{
#line 350 "term_pass1.m"
  {
#line 350 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 350 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_16;

#line 350 "term_pass1.m"
    {
#line 350 "term_pass1.m"
      transform_hlds__term_pass1__check_cases_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_16);
    }
#line 350 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv6_STATE_VARIABLE_Errors_16));
#line 350 "term_pass1.m"
  }
#line 350 "term_pass1.m"
}

#line 355 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3(
#line 355 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 355 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 355 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 355 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 355 "term_pass1.m"
{
#line 355 "term_pass1.m"
  {
#line 355 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 355 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_64;

#line 355 "term_pass1.m"
    {
#line 355 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_64);
    }
#line 355 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv4_STATE_VARIABLE_Errors_64));
#line 355 "term_pass1.m"
  }
#line 355 "term_pass1.m"
}

#line 346 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2(
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 346 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 346 "term_pass1.m"
{
#line 346 "term_pass1.m"
  {
#line 346 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 346 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv2_STATE_VARIABLE_Errors_64;

#line 346 "term_pass1.m"
    {
#line 346 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv2_STATE_VARIABLE_Errors_64);
    }
#line 346 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv2_STATE_VARIABLE_Errors_64));
#line 346 "term_pass1.m"
  }
#line 346 "term_pass1.m"
}

#line 346 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1(
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 346 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 346 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 346 "term_pass1.m"
{
#line 346 "term_pass1.m"
  {
#line 346 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 346 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_64;

#line 346 "term_pass1.m"
    {
#line 346 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_64);
    }
#line 346 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_64));
#line 346 "term_pass1.m"
  }
#line 346 "term_pass1.m"
}

#line 301 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_8,
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__VarTypes_9,
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__Goal_10,
#line 301 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63,
#line 301 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_64)
#line 301 "term_pass1.m"
{
#line 305 "term_pass1.m"
  while (MR_TRUE)
#line 305 "term_pass1.m"
    {
#line 305 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 305 "term_pass1.m"
      {
#line 305 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;
#line 305 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_10, (MR_Integer) 0)));
#line 305 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Goal_10, (MR_Integer) 1)));

#line 310 "term_pass1.m"
#line 310 "term_pass1.m"
        switch (MR_tag((MR_Word) transform_hlds__term_pass1__GoalExpr_12)) {
#line 310 "term_pass1.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 310 "term_pass1.m"
          case (MR_Integer) 0:
#line 358 "term_pass1.m"
            {
#line 358 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__SubGoal_58 = (MR_Word) MR_body(((MR_Word) transform_hlds__term_pass1__GoalExpr_12), (MR_Integer) 0);

#line 359 "term_pass1.m"
              /* direct tailcall eliminated */
#line 359 "term_pass1.m"
              {
#line 359 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Goal__tmp_copy_10 = transform_hlds__term_pass1__SubGoal_58;

#line 359 "term_pass1.m"
                transform_hlds__term_pass1__Goal_10 = transform_hlds__term_pass1__Goal__tmp_copy_10;
#line 359 "term_pass1.m"
              }
#line 359 "term_pass1.m"
              continue;
#line 358 "term_pass1.m"
            }
#line 310 "term_pass1.m"
            break;
#line 310 "term_pass1.m"
          case (MR_Integer) 1:
#line 308 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 310 "term_pass1.m"
            break;
#line 310 "term_pass1.m"
          case (MR_Integer) 2:
#line 311 "term_pass1.m"
            {
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__CallPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 0)));
#line 311 "term_pass1.m"
              MR_Integer transform_hlds__term_pass1__CallProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__CallPPId_25;
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__ProcInfo_27;
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TerminationInfo_28;
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Context_29;
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83;
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 3)));
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 4)));
#line 311 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 5)));
#line 313 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_26_26;

#line 312 "term_pass1.m"
              {
#line 312 "term_pass1.m"
                transform_hlds__term_pass1__CallPPId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_25, 0) = ((MR_Box) (transform_hlds__term_pass1__CallPredId_19));
#line 312 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CallPPId_25, 1) = ((MR_Box) (transform_hlds__term_pass1__CallProcId_20));
#line 312 "term_pass1.m"
              }
#line 313 "term_pass1.m"
              {
#line 313 "term_pass1.m"
                hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__CallPPId_25, &transform_hlds__term_pass1__V_26_26, &transform_hlds__term_pass1__ProcInfo_27);
              }
#line 314 "term_pass1.m"
              {
#line 314 "term_pass1.m"
                hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_pass1__ProcInfo_27, &transform_hlds__term_pass1__TerminationInfo_28);
              }
#line 315 "term_pass1.m"
              {
#line 315 "term_pass1.m"
                transform_hlds__term_pass1__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_13);
              }
#line 321 "term_pass1.m"
              if ((transform_hlds__term_pass1__TerminationInfo_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 323 "term_pass1.m"
                transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 321 "term_pass1.m"
              else
#line 321 "term_pass1.m"
                {
#line 321 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__TerminationInfo_28, (MR_Integer) 0)));

#line 321 "term_pass1.m"
                  if (((MR_tag((MR_Word) transform_hlds__term_pass1__V_113_113)) == (MR_mktag((MR_Integer) 1))))
#line 317 "term_pass1.m"
                    {
#line 317 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__CanLoopErrorKind_31;
#line 317 "term_pass1.m"
                      MR_Word transform_hlds__term_pass1__CanLoopError_32;

#line 318 "term_pass1.m"
                      {
#line 318 "term_pass1.m"
                        transform_hlds__term_pass1__CanLoopErrorKind_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopErrorKind_31, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 318 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__CanLoopErrorKind_31, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_25));
#line 318 "term_pass1.m"
                      }
#line 319 "term_pass1.m"
                      {
#line 319 "term_pass1.m"
                        transform_hlds__term_pass1__CanLoopError_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopError_32, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_29));
#line 319 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__CanLoopError_32, 1) = ((MR_Box) (transform_hlds__term_pass1__CanLoopErrorKind_31));
#line 319 "term_pass1.m"
                      }
#line 320 "term_pass1.m"
                      {
#line 320 "term_pass1.m"
                        mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, ((MR_Box) (transform_hlds__term_pass1__CanLoopError_32)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63, &transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83);
                      }
#line 317 "term_pass1.m"
                    }
#line 321 "term_pass1.m"
                  else
#line 322 "term_pass1.m"
                    transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 321 "term_pass1.m"
                }
#line 326 "term_pass1.m"
              {
#line 326 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = transform_hlds__term_util__horder_vars_2_p_0(transform_hlds__term_pass1__Args_21, transform_hlds__term_pass1__VarTypes_9);
              }
#line 330 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 327 "term_pass1.m"
                {
#line 327 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HigherOrderErrorKind_34;
#line 327 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HigherOrderError_35;

#line 327 "term_pass1.m"
                  {
#line 327 "term_pass1.m"
                    transform_hlds__term_pass1__HigherOrderErrorKind_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "term_pass1.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderErrorKind_34, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 327 "term_pass1.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__term_pass1__HigherOrderErrorKind_34, 1) = ((MR_Box) (transform_hlds__term_pass1__CallPPId_25));
#line 327 "term_pass1.m"
                  }
#line 328 "term_pass1.m"
                  {
#line 328 "term_pass1.m"
                    transform_hlds__term_pass1__HigherOrderError_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 328 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderError_35, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_29));
#line 328 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__HigherOrderError_35, 1) = ((MR_Box) (transform_hlds__term_pass1__HigherOrderErrorKind_34));
#line 328 "term_pass1.m"
                  }
#line 329 "term_pass1.m"
                  {
#line 329 "term_pass1.m"
                    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, ((MR_Box) (transform_hlds__term_pass1__HigherOrderError_35)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83, transform_hlds__term_pass1__STATE_VARIABLE_Errors_64);
                  }
#line 327 "term_pass1.m"
                }
#line 330 "term_pass1.m"
              else
#line 330 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_83_83;
#line 311 "term_pass1.m"
            }
#line 310 "term_pass1.m"
            break;
#line 310 "term_pass1.m"
          case (MR_Integer) 3:
#line 310 "term_pass1.m"
#line 310 "term_pass1.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 0)))) {
#line 310 "term_pass1.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 310 "term_pass1.m"
              case (MR_Integer) 0:
#line 337 "term_pass1.m"
                {
#line 337 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Error_48;
#line 337 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Context_85;

#line 339 "term_pass1.m"
                  {
#line 339 "term_pass1.m"
                    transform_hlds__term_pass1__Context_85 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__term_pass1__GoalInfo_13);
                  }
#line 340 "term_pass1.m"
                  {
#line 340 "term_pass1.m"
                    transform_hlds__term_pass1__Error_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_48, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_85));
#line 340 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Error_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 340 "term_pass1.m"
                  }
#line 341 "term_pass1.m"
                  {
#line 341 "term_pass1.m"
                    mercury__list__cons_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, ((MR_Box) (transform_hlds__term_pass1__Error_48)), transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63, transform_hlds__term_pass1__STATE_VARIABLE_Errors_64);
                  }
#line 337 "term_pass1.m"
                }
#line 310 "term_pass1.m"
                break;
#line 310 "term_pass1.m"
              case (MR_Integer) 1:
#line 334 "term_pass1.m"
                *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 310 "term_pass1.m"
                break;
#line 310 "term_pass1.m"
              case (MR_Integer) 2:
#line 345 "term_pass1.m"
                {
#line 345 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 345 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_77_77;
#line 343 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 346 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_64;

#line 346 "term_pass1.m"
                  {
#line 346 "term_pass1.m"
                    transform_hlds__term_pass1__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0]));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_1));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_77_77, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
#line 346 "term_pass1.m"
                  }
#line 346 "term_pass1.m"
                  {
#line 346 "term_pass1.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_77_77, transform_hlds__term_pass1__Goals_50, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_64);
                  }
#line 346 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv1_STATE_VARIABLE_Errors_64);
#line 345 "term_pass1.m"
                }
#line 310 "term_pass1.m"
                break;
#line 310 "term_pass1.m"
              case (MR_Integer) 3:
#line 345 "term_pass1.m"
                {
#line 345 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Goals_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 345 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_110_110;
#line 346 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv3_STATE_VARIABLE_Errors_64;

#line 346 "term_pass1.m"
                  {
#line 346 "term_pass1.m"
                    transform_hlds__term_pass1__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0]));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_2));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 346 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_110_110, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
#line 346 "term_pass1.m"
                  }
#line 346 "term_pass1.m"
                  {
#line 346 "term_pass1.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_110_110, transform_hlds__term_pass1__Goals_109, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv3_STATE_VARIABLE_Errors_64);
                  }
#line 346 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv3_STATE_VARIABLE_Errors_64);
#line 345 "term_pass1.m"
                }
#line 310 "term_pass1.m"
                break;
#line 310 "term_pass1.m"
              case (MR_Integer) 4:
#line 349 "term_pass1.m"
                {
#line 349 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Cases_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 3)));
#line 349 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_75_75;
#line 349 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 349 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 350 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv7_STATE_VARIABLE_Errors_64;

#line 350 "term_pass1.m"
                  {
#line 350 "term_pass1.m"
                    transform_hlds__term_pass1__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 350 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[1]));
#line 350 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_4));
#line 350 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 350 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
#line 350 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 350 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_75_75, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
#line 350 "term_pass1.m"
                  }
#line 350 "term_pass1.m"
                  {
#line 350 "term_pass1.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_75_75, transform_hlds__term_pass1__Cases_53, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv7_STATE_VARIABLE_Errors_64);
                  }
#line 350 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv7_STATE_VARIABLE_Errors_64);
#line 349 "term_pass1.m"
                }
#line 310 "term_pass1.m"
                break;
#line 310 "term_pass1.m"
              case (MR_Integer) 5:
#line 361 "term_pass1.m"
                {
#line 361 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Reason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 361 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__SubGoal_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 363 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__FGT_61;
#line 363 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_60_60;

#line 363 "term_pass1.m"
                  transform_hlds__term_pass1__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_pass1__Reason_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_59, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 363 "term_pass1.m"
                  if (transform_hlds__term_pass1__succeeded)
#line 363 "term_pass1.m"
                    {
#line 363 "term_pass1.m"
                      transform_hlds__term_pass1__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_59, (MR_Integer) 1)));
#line 363 "term_pass1.m"
                      transform_hlds__term_pass1__FGT_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__Reason_59, (MR_Integer) 2)));
#line 365 "term_pass1.m"
#line 365 "term_pass1.m"
                      switch (transform_hlds__term_pass1__FGT_61) {
#line 365 "term_pass1.m"
                        default:
#line 365 "term_pass1.m"
                          transform_hlds__term_pass1__succeeded = MR_FALSE;
#line 365 "term_pass1.m"
                          break;
#line 365 "term_pass1.m"
                        case (MR_Integer) 1:
#line 364 "term_pass1.m"
                          transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 365 "term_pass1.m"
                          break;
#line 365 "term_pass1.m"
                        case (MR_Integer) 2:
#line 365 "term_pass1.m"
                          transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 365 "term_pass1.m"
                          break;
#line 365 "term_pass1.m"
                      }
#line 363 "term_pass1.m"
                    }
#line 370 "term_pass1.m"
                  if (transform_hlds__term_pass1__succeeded)
#line 370 "term_pass1.m"
                    *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63;
#line 370 "term_pass1.m"
                  else
#line 371 "term_pass1.m"
                    {
#line 371 "term_pass1.m"
                      /* direct tailcall eliminated */
#line 371 "term_pass1.m"
                      {
#line 371 "term_pass1.m"
                        MR_Word transform_hlds__term_pass1__Goal__tmp_copy_10 = transform_hlds__term_pass1__SubGoal_87;

#line 371 "term_pass1.m"
                        transform_hlds__term_pass1__Goal_10 = transform_hlds__term_pass1__Goal__tmp_copy_10;
#line 371 "term_pass1.m"
                      }
#line 371 "term_pass1.m"
                      continue;
#line 371 "term_pass1.m"
                    }
#line 361 "term_pass1.m"
                }
#line 310 "term_pass1.m"
                break;
#line 310 "term_pass1.m"
              case (MR_Integer) 6:
#line 353 "term_pass1.m"
                {
#line 353 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Cond_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 2)));
#line 353 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Then_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 3)));
#line 353 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Else_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 4)));
#line 353 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_70_70;
#line 353 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_71_71;
#line 353 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_73_73;
#line 353 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__Goals_86;
#line 353 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__GoalExpr_12, (MR_Integer) 1)));
#line 355 "term_pass1.m"
                  MR_Box transform_hlds__term_pass1__conv5_STATE_VARIABLE_Errors_64;

#line 354 "term_pass1.m"
                  {
#line 354 "term_pass1.m"
                    transform_hlds__term_pass1__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_71_71, 0) = ((MR_Box) (transform_hlds__term_pass1__Else_57));
#line 354 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "term_pass1.m"
                  }
#line 354 "term_pass1.m"
                  {
#line 354 "term_pass1.m"
                    transform_hlds__term_pass1__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_70_70, 0) = ((MR_Box) (transform_hlds__term_pass1__Then_56));
#line 354 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_70_70, 1) = ((MR_Box) (transform_hlds__term_pass1__V_71_71));
#line 354 "term_pass1.m"
                  }
#line 354 "term_pass1.m"
                  {
#line 354 "term_pass1.m"
                    transform_hlds__term_pass1__Goals_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_86, 0) = ((MR_Box) (transform_hlds__term_pass1__Cond_55));
#line 354 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Goals_86, 1) = ((MR_Box) (transform_hlds__term_pass1__V_70_70));
#line 354 "term_pass1.m"
                  }
#line 355 "term_pass1.m"
                  {
#line 355 "term_pass1.m"
                    transform_hlds__term_pass1__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 355 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_5[0]));
#line 355 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 1) = ((MR_Box) (transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0_3));
#line 355 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 355 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_7));
#line 355 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 4) = ((MR_Box) (transform_hlds__term_pass1__PPId_8));
#line 355 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_73_73, 5) = ((MR_Box) (transform_hlds__term_pass1__VarTypes_9));
#line 355 "term_pass1.m"
                  }
#line 355 "term_pass1.m"
                  {
#line 355 "term_pass1.m"
                    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_73_73, transform_hlds__term_pass1__Goals_86, ((MR_Box) (transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_63)), &transform_hlds__term_pass1__conv5_STATE_VARIABLE_Errors_64);
                  }
#line 355 "term_pass1.m"
                  *transform_hlds__term_pass1__STATE_VARIABLE_Errors_64 = ((MR_Word) transform_hlds__term_pass1__conv5_STATE_VARIABLE_Errors_64);
#line 353 "term_pass1.m"
                }
#line 310 "term_pass1.m"
                break;
#line 310 "term_pass1.m"
              case (MR_Integer) 7:
#line 375 "term_pass1.m"
                {
#line 376 "term_pass1.m"
                  {
#line 376 "term_pass1.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.check_goal_non_term_calls\'/6", (MR_String) "shorthand");
#line 376 "term_pass1.m"
                    return;
                  }
#line 375 "term_pass1.m"
                }
#line 310 "term_pass1.m"
                break;
#line 310 "term_pass1.m"
            }
#line 310 "term_pass1.m"
            break;
#line 310 "term_pass1.m"
        }
#line 305 "term_pass1.m"
      }
#line 305 "term_pass1.m"
      break;
#line 305 "term_pass1.m"
    }
#line 301 "term_pass1.m"
}

#line 292 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(
#line 292 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_5,
#line 292 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_6,
#line 292 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_12,
#line 292 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_Errors_13)
#line 292 "term_pass1.m"
{
#line 295 "term_pass1.m"
  {
#line 295 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 295 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ProcInfo_9;
#line 295 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_10;
#line 295 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__VarTypes_11;
#line 296 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__V_8_8;

#line 296 "term_pass1.m"
    {
#line 296 "term_pass1.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_5, transform_hlds__term_pass1__PPId_6, &transform_hlds__term_pass1__V_8_8, &transform_hlds__term_pass1__ProcInfo_9);
    }
#line 297 "term_pass1.m"
    {
#line 297 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_9, &transform_hlds__term_pass1__Goal_10);
    }
#line 298 "term_pass1.m"
    {
#line 298 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_9, &transform_hlds__term_pass1__VarTypes_11);
    }
#line 299 "term_pass1.m"
    {
#line 299 "term_pass1.m"
      transform_hlds__term_pass1__check_goal_non_term_calls_6_p_0(transform_hlds__term_pass1__ModuleInfo_5, transform_hlds__term_pass1__PPId_6, transform_hlds__term_pass1__VarTypes_11, transform_hlds__term_pass1__Goal_10, transform_hlds__term_pass1__STATE_VARIABLE_Errors_0_12, transform_hlds__term_pass1__STATE_VARIABLE_Errors_13);
    }
#line 295 "term_pass1.m"
  }
#line 292 "term_pass1.m"
}

#line 259 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__update_output_suppliers_4_p_0(
#line 259 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__1_1,
#line 259 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 259 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 259 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__4_4)
#line 259 "term_pass1.m"
{
#line 262 "term_pass1.m"
  {
#line 262 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 262 "term_pass1.m"
    if ((transform_hlds__term_pass1__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 262 "term_pass1.m"
      if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 262 "term_pass1.m"
        *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 262 "term_pass1.m"
      else
#line 265 "term_pass1.m"
        {
#line 265 "term_pass1.m"
          *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "term_pass1.m"
          {
#line 266 "term_pass1.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
#line 266 "term_pass1.m"
            return;
          }
#line 265 "term_pass1.m"
        }
#line 262 "term_pass1.m"
    else
#line 262 "term_pass1.m"
      {
#line 262 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__1_1, (MR_Integer) 0)));

#line 262 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "term_pass1.m"
          {
#line 263 "term_pass1.m"
            *transform_hlds__term_pass1__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 264 "term_pass1.m"
            {
#line 264 "term_pass1.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass1", (MR_String) "predicate \140transform_hlds.term_pass1.update_output_suppliers\'/4", (MR_String) "umatched variables");
#line 264 "term_pass1.m"
              return;
            }
#line 263 "term_pass1.m"
          }
#line 262 "term_pass1.m"
        else
#line 269 "term_pass1.m"
          {
#line 269 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplier0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 269 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSuppliers0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 269 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplier_23;
#line 269 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSuppliers_24;

#line 270 "term_pass1.m"
            {
#line 270 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__HeadVar__2_2, ((MR_Box) (transform_hlds__term_pass1__V_27_27)));
            }
#line 272 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 271 "term_pass1.m"
              transform_hlds__term_pass1__OutputSupplier_23 = (MR_Integer) 1;
#line 272 "term_pass1.m"
            else
#line 276 "term_pass1.m"
              transform_hlds__term_pass1__OutputSupplier_23 = transform_hlds__term_pass1__OutputSupplier0_21;
#line 278 "term_pass1.m"
            {
#line 278 "term_pass1.m"
              transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__V_26_26, transform_hlds__term_pass1__HeadVar__2_2, transform_hlds__term_pass1__OutputSuppliers0_22, &transform_hlds__term_pass1__OutputSuppliers_24);
            }
#line 269 "term_pass1.m"
            {
#line 269 "term_pass1.m"
              MR_Word base;
#line 269 "term_pass1.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "term_pass1.m"
              *transform_hlds__term_pass1__HeadVar__4_4 = base;
#line 269 "term_pass1.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplier_23));
#line 269 "term_pass1.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_24));
#line 269 "term_pass1.m"
            }
#line 269 "term_pass1.m"
          }
#line 262 "term_pass1.m"
      }
#line 262 "term_pass1.m"
  }
#line 259 "term_pass1.m"
}

#line 210 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(
#line 210 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 210 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_8,
#line 210 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PPId_9,
#line 210 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
#line 210 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_11,
#line 210 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_12)
#line 210 "term_pass1.m"
{
#line 214 "term_pass1.m"
  {
#line 214 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_47_47;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeInfo_48_48;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__TypeCtorInfo_49_49;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__PredInfo_13;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ProcInfo_14;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Context_15;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Args_16;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__ArgModes_17;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__VarTypes_18;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal0_19;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Goal_20;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__EmptyMap_21;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__FunctorInfo_22;
#line 214 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__MaxErrors_23;
#line 214 "term_pass1.m"
    MR_Integer transform_hlds__term_pass1__MaxPaths_24;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Params_25;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__InVars_26;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__OutVars_27;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Path0_28;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__PathSet0_29;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Info0_30;
#line 214 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Info_31;

#line 215 "term_pass1.m"
    {
#line 215 "term_pass1.m"
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__PPId_9, &transform_hlds__term_pass1__PredInfo_13, &transform_hlds__term_pass1__ProcInfo_14);
    }
#line 216 "term_pass1.m"
    {
#line 216 "term_pass1.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass1__PredInfo_13, &transform_hlds__term_pass1__Context_15);
    }
#line 217 "term_pass1.m"
    {
#line 217 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__Args_16);
    }
#line 218 "term_pass1.m"
    {
#line 218 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__ArgModes_17);
    }
#line 219 "term_pass1.m"
    {
#line 219 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__VarTypes_18);
    }
#line 220 "term_pass1.m"
    {
#line 220 "term_pass1.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass1__ProcInfo_14, &transform_hlds__term_pass1__Goal0_19);
    }
#line 225 "term_pass1.m"
    {
#line 225 "term_pass1.m"
      transform_hlds__term_pass1__Goal_20 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_pass1__Goal0_19);
    }
#line 3246 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3248 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeInfo_48_48 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0];
#line 226 "term_pass1.m"
    {
#line 226 "term_pass1.m"
      mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_47_47, transform_hlds__term_pass1__TypeInfo_48_48, &transform_hlds__term_pass1__EmptyMap_21);
    }
#line 227 "term_pass1.m"
    transform_hlds__term_pass1__FunctorInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_8, (MR_Integer) 0)));
#line 227 "term_pass1.m"
    transform_hlds__term_pass1__MaxErrors_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_8, (MR_Integer) 1)));
#line 227 "term_pass1.m"
    transform_hlds__term_pass1__MaxPaths_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_8, (MR_Integer) 2)));
#line 228 "term_pass1.m"
    {
#line 228 "term_pass1.m"
      transform_hlds__term_traversal__init_term_traversal_params_9_p_0(transform_hlds__term_pass1__FunctorInfo_22, transform_hlds__term_pass1__PPId_9, transform_hlds__term_pass1__Context_15, transform_hlds__term_pass1__VarTypes_18, transform_hlds__term_pass1__OutputSupplierMap0_10, transform_hlds__term_pass1__EmptyMap_21, transform_hlds__term_pass1__MaxErrors_23, transform_hlds__term_pass1__MaxPaths_24, &transform_hlds__term_pass1__Params_25);
    }
#line 231 "term_pass1.m"
    {
#line 231 "term_pass1.m"
      transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__ArgModes_17, transform_hlds__term_pass1__Args_16, &transform_hlds__term_pass1__InVars_26, &transform_hlds__term_pass1__OutVars_27);
    }
#line 232 "term_pass1.m"
    {
#line 232 "term_pass1.m"
      transform_hlds__term_pass1__Path0_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 232 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 0) = ((MR_Box) (transform_hlds__term_pass1__PPId_9));
#line 232 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 2) = ((MR_Box) ((MR_Integer) 0));
#line 232 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Path0_28, 4) = ((MR_Box) (transform_hlds__term_pass1__OutVars_27));
#line 232 "term_pass1.m"
    }
#line 3287 "transform_hlds.term_pass1.c"
    transform_hlds__term_pass1__TypeCtorInfo_49_49 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 233 "term_pass1.m"
    {
#line 233 "term_pass1.m"
      transform_hlds__term_pass1__PathSet0_29 = mercury__set__make_singleton_set_1_f_0(transform_hlds__term_pass1__TypeCtorInfo_49_49, ((MR_Box) (transform_hlds__term_pass1__Path0_28)));
    }
#line 234 "term_pass1.m"
    {
#line 234 "term_pass1.m"
      transform_hlds__term_pass1__Info0_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_30, 0) = ((MR_Box) (transform_hlds__term_pass1__PathSet0_29));
#line 234 "term_pass1.m"
      MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info0_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "term_pass1.m"
    }
#line 235 "term_pass1.m"
    {
#line 235 "term_pass1.m"
      transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__Params_25, transform_hlds__term_pass1__Goal_20, transform_hlds__term_pass1__Info0_30, &transform_hlds__term_pass1__Info_31);
    }
#line 254 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Info_31)) == (MR_mktag((MR_Integer) 1))))
#line 255 "term_pass1.m"
      {
#line 255 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Errors_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_31, (MR_Integer) 0)));

#line 255 "term_pass1.m"
        *transform_hlds__term_pass1__TermErrors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Info_31, (MR_Integer) 1)));
#line 256 "term_pass1.m"
        {
#line 256 "term_pass1.m"
          MR_Word base;
#line 256 "term_pass1.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 256 "term_pass1.m"
          *transform_hlds__term_pass1__Result_11 = base;
#line 256 "term_pass1.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_41));
#line 256 "term_pass1.m"
        }
#line 255 "term_pass1.m"
      }
#line 254 "term_pass1.m"
    else
#line 238 "term_pass1.m"
      {
#line 238 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Paths_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_31, (MR_Integer) 0)));
#line 238 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PathList_33;
#line 238 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__AllActiveVars_34;
#line 238 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSuppliers0_35;
#line 238 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSuppliers_36;
#line 238 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_37;
#line 238 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__SubsetErrors_38;
#line 241 "term_pass1.m"
        MR_Box transform_hlds__term_pass1__conv0_OutputSuppliers0_35;

#line 238 "term_pass1.m"
        *transform_hlds__term_pass1__TermErrors_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Info_31, (MR_Integer) 1)));
#line 239 "term_pass1.m"
        {
#line 239 "term_pass1.m"
          mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_49_49, transform_hlds__term_pass1__Paths_32, &transform_hlds__term_pass1__PathList_33);
        }
#line 240 "term_pass1.m"
        {
#line 240 "term_pass1.m"
          transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_pass1__PathList_33, &transform_hlds__term_pass1__AllActiveVars_34);
        }
#line 241 "term_pass1.m"
        {
#line 241 "term_pass1.m"
          mercury__map__lookup_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_47_47, transform_hlds__term_pass1__TypeInfo_48_48, transform_hlds__term_pass1__OutputSupplierMap0_10, ((MR_Box) (transform_hlds__term_pass1__PPId_9)), &transform_hlds__term_pass1__conv0_OutputSuppliers0_35);
        }
#line 241 "term_pass1.m"
        transform_hlds__term_pass1__OutputSuppliers0_35 = ((MR_Word) transform_hlds__term_pass1__conv0_OutputSuppliers0_35);
#line 242 "term_pass1.m"
        {
#line 242 "term_pass1.m"
          transform_hlds__term_pass1__update_output_suppliers_4_p_0(transform_hlds__term_pass1__Args_16, transform_hlds__term_pass1__AllActiveVars_34, transform_hlds__term_pass1__OutputSuppliers0_35, &transform_hlds__term_pass1__OutputSuppliers_36);
        }
#line 244 "term_pass1.m"
        {
#line 244 "term_pass1.m"
          mercury__map__det_update_4_p_0(transform_hlds__term_pass1__TypeCtorInfo_47_47, transform_hlds__term_pass1__TypeInfo_48_48, ((MR_Box) (transform_hlds__term_pass1__PPId_9)), ((MR_Box) (transform_hlds__term_pass1__OutputSuppliers_36)), transform_hlds__term_pass1__OutputSupplierMap0_10, &transform_hlds__term_pass1__OutputSupplierMap_37);
        }
#line 246 "term_pass1.m"
        {
#line 246 "term_pass1.m"
          transform_hlds__term_pass1__succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], transform_hlds__term_pass1__AllActiveVars_34, transform_hlds__term_pass1__InVars_26);
        }
#line 248 "term_pass1.m"
        if (transform_hlds__term_pass1__succeeded)
#line 247 "term_pass1.m"
          transform_hlds__term_pass1__SubsetErrors_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 248 "term_pass1.m"
        else
#line 249 "term_pass1.m"
          {
#line 249 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__SubsetErrorKind_39;
#line 249 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__SubsetError_40;

#line 249 "term_pass1.m"
            {
#line 249 "term_pass1.m"
              transform_hlds__term_pass1__SubsetErrorKind_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 249 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 249 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 1) = ((MR_Box) (transform_hlds__term_pass1__PPId_9));
#line 249 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 2) = ((MR_Box) (transform_hlds__term_pass1__AllActiveVars_34));
#line 249 "term_pass1.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass1__SubsetErrorKind_39, 3) = ((MR_Box) (transform_hlds__term_pass1__InVars_26));
#line 249 "term_pass1.m"
            }
#line 250 "term_pass1.m"
            {
#line 250 "term_pass1.m"
              transform_hlds__term_pass1__SubsetError_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetError_40, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_15));
#line 250 "term_pass1.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__SubsetError_40, 1) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrorKind_39));
#line 250 "term_pass1.m"
            }
#line 251 "term_pass1.m"
            {
#line 251 "term_pass1.m"
              transform_hlds__term_pass1__SubsetErrors_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_38, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetError_40));
#line 251 "term_pass1.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__SubsetErrors_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "term_pass1.m"
            }
#line 249 "term_pass1.m"
          }
#line 253 "term_pass1.m"
        {
#line 253 "term_pass1.m"
          MR_Word base;
#line 253 "term_pass1.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 253 "term_pass1.m"
          *transform_hlds__term_pass1__Result_11 = base;
#line 253 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__PathList_33));
#line 253 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_37));
#line 253 "term_pass1.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_38));
#line 253 "term_pass1.m"
        }
#line 238 "term_pass1.m"
      }
#line 214 "term_pass1.m"
  }
#line 210 "term_pass1.m"
}

#line 197 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1(
#line 197 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 197 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 197 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_2,
#line 197 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_3)
#line 197 "term_pass1.m"
{
#line 197 "term_pass1.m"
  {
#line 197 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 197 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_13;

#line 197 "term_pass1.m"
    {
#line 197 "term_pass1.m"
      transform_hlds__term_pass1__check_proc_non_term_calls_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_2), &transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_13);
    }
#line 197 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_pass1__conv0_STATE_VARIABLE_Errors_13));
#line 197 "term_pass1.m"
  }
#line 197 "term_pass1.m"
}

#line 172 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_2,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__3_3,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__4_4,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__5_5,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__6_6,
#line 172 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_7,
#line 172 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8,
#line 172 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9)
#line 172 "term_pass1.m"
{
#line 178 "term_pass1.m"
  while (MR_TRUE)
#line 178 "term_pass1.m"
    {
#line 178 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 178 "term_pass1.m"
      {
#line 178 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;

#line 178 "term_pass1.m"
        if ((transform_hlds__term_pass1__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "term_pass1.m"
          {
#line 179 "term_pass1.m"
            {
#line 179 "term_pass1.m"
              MR_Word base;
#line 179 "term_pass1.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 179 "term_pass1.m"
              *transform_hlds__term_pass1__Result_7 = base;
#line 179 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__5_5));
#line 179 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__4_4));
#line 179 "term_pass1.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__term_pass1__HeadVar__6_6));
#line 179 "term_pass1.m"
            }
#line 178 "term_pass1.m"
            *transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8;
#line 178 "term_pass1.m"
          }
#line 178 "term_pass1.m"
        else
#line 181 "term_pass1.m"
          {
#line 181 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__TypeCtorInfo_48_48;
#line 181 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 0)));
#line 181 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__PPIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__3_3, (MR_Integer) 1)));
#line 181 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__Result1_28;
#line 181 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__ProcTermErrors_29;
#line 181 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__MaxErrors_31;
#line 181 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_42_42;
#line 181 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43;
#line 185 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_30_30;
#line 185 "term_pass1.m"
            MR_Integer transform_hlds__term_pass1__V_32_32;

#line 182 "term_pass1.m"
            {
#line 182 "term_pass1.m"
              transform_hlds__term_pass1__find_arg_sizes_pred_6_p_0(transform_hlds__term_pass1__ModuleInfo_1, transform_hlds__term_pass1__PassInfo_2, transform_hlds__term_pass1__PPId_21, transform_hlds__term_pass1__HeadVar__4_4, &transform_hlds__term_pass1__Result1_28, &transform_hlds__term_pass1__ProcTermErrors_29);
            }
#line 3579 "transform_hlds.term_pass1.c"
            transform_hlds__term_pass1__TypeCtorInfo_48_48 = (MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0;
#line 184 "term_pass1.m"
            {
#line 184 "term_pass1.m"
              transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_42_42 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8, transform_hlds__term_pass1__ProcTermErrors_29);
            }
#line 185 "term_pass1.m"
            transform_hlds__term_pass1__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 0)));
#line 185 "term_pass1.m"
            transform_hlds__term_pass1__MaxErrors_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 1)));
#line 185 "term_pass1.m"
            transform_hlds__term_pass1__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__PassInfo_2, (MR_Integer) 2)));
#line 186 "term_pass1.m"
            {
#line 186 "term_pass1.m"
              mercury__list__take_upto_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__MaxErrors_31, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_42_42, &transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43);
            }
#line 200 "term_pass1.m"
            if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result1_28)) == (MR_mktag((MR_Integer) 1))))
#line 188 "term_pass1.m"
              {
#line 188 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__OtherTermErrors_34;
#line 188 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__V_45_45;
#line 197 "term_pass1.m"
                MR_Box transform_hlds__term_pass1__conv1_OtherTermErrors_34;

#line 189 "term_pass1.m"
                *transform_hlds__term_pass1__Result_7 = transform_hlds__term_pass1__Result1_28;
#line 197 "term_pass1.m"
                {
#line 197 "term_pass1.m"
                  transform_hlds__term_pass1__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 197 "term_pass1.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[1]));
#line 197 "term_pass1.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0_1));
#line 197 "term_pass1.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 197 "term_pass1.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_45_45, 3) = ((MR_Box) (transform_hlds__term_pass1__ModuleInfo_1));
#line 197 "term_pass1.m"
                }
#line 197 "term_pass1.m"
                {
#line 197 "term_pass1.m"
                  mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[2], transform_hlds__term_pass1__V_45_45, transform_hlds__term_pass1__PPIds_22, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_pass1__conv1_OtherTermErrors_34);
                }
#line 197 "term_pass1.m"
                transform_hlds__term_pass1__OtherTermErrors_34 = ((MR_Word) transform_hlds__term_pass1__conv1_OtherTermErrors_34);
#line 199 "term_pass1.m"
                {
#line 199 "term_pass1.m"
                  mercury__list__append_3_p_1(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__OtherTermErrors_34, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43, transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_9);
                }
#line 188 "term_pass1.m"
              }
#line 200 "term_pass1.m"
            else
#line 201 "term_pass1.m"
              {
#line 201 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Paths1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_28, (MR_Integer) 0)));
#line 201 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__OutputSupplierMap1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_28, (MR_Integer) 1)));
#line 201 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__SubsetErrors1_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result1_28, (MR_Integer) 2)));
#line 201 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__Paths_38;
#line 201 "term_pass1.m"
                MR_Word transform_hlds__term_pass1__SubsetErrors_39;

#line 202 "term_pass1.m"
                {
#line 202 "term_pass1.m"
                  transform_hlds__term_pass1__Paths_38 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0, transform_hlds__term_pass1__HeadVar__5_5, transform_hlds__term_pass1__Paths1_35);
                }
#line 203 "term_pass1.m"
                {
#line 203 "term_pass1.m"
                  transform_hlds__term_pass1__SubsetErrors_39 = mercury__list__f_43_43_2_f_0(transform_hlds__term_pass1__TypeCtorInfo_48_48, transform_hlds__term_pass1__HeadVar__6_6, transform_hlds__term_pass1__SubsetErrors1_37);
                }
#line 204 "term_pass1.m"
                /* direct tailcall eliminated */
#line 204 "term_pass1.m"
                {
#line 204 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__3__tmp_copy_3 = transform_hlds__term_pass1__PPIds_22;
#line 204 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__4__tmp_copy_4 = transform_hlds__term_pass1__OutputSupplierMap1_36;
#line 204 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__5__tmp_copy_5 = transform_hlds__term_pass1__Paths_38;
#line 204 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__HeadVar__6__tmp_copy_6 = transform_hlds__term_pass1__SubsetErrors_39;
#line 204 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_8 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_43_43;

#line 204 "term_pass1.m"
                  transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0_8 = transform_hlds__term_pass1__STATE_VARIABLE_TermErrors_0__tmp_copy_8;
#line 204 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__6_6 = transform_hlds__term_pass1__HeadVar__6__tmp_copy_6;
#line 204 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__5_5 = transform_hlds__term_pass1__HeadVar__5__tmp_copy_5;
#line 204 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__4_4 = transform_hlds__term_pass1__HeadVar__4__tmp_copy_4;
#line 204 "term_pass1.m"
                  transform_hlds__term_pass1__HeadVar__3_3 = transform_hlds__term_pass1__HeadVar__3__tmp_copy_3;
#line 204 "term_pass1.m"
                }
#line 204 "term_pass1.m"
                continue;
#line 201 "term_pass1.m"
              }
#line 181 "term_pass1.m"
          }
#line 178 "term_pass1.m"
      }
#line 178 "term_pass1.m"
      break;
#line 178 "term_pass1.m"
    }
#line 172 "term_pass1.m"
}

#line 149 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(
#line 149 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_7,
#line 149 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_8,
#line 149 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_9,
#line 149 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10,
#line 149 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__Result_11,
#line 149 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_12)
#line 149 "term_pass1.m"
{
#line 154 "term_pass1.m"
  while (MR_TRUE)
#line 154 "term_pass1.m"
    {
#line 154 "term_pass1.m"
      /* tailcall optimized into a loop */
#line 154 "term_pass1.m"
      {
#line 154 "term_pass1.m"
        MR_bool transform_hlds__term_pass1__succeeded;
#line 154 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Result0_13;
#line 154 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__TermErrors0_14;

#line 155 "term_pass1.m"
        {
#line 155 "term_pass1.m"
          transform_hlds__term_pass1__find_arg_sizes_in_scc_pass_9_p_0(transform_hlds__term_pass1__ModuleInfo_7, transform_hlds__term_pass1__PassInfo_8, transform_hlds__term_pass1__SCC_9, transform_hlds__term_pass1__OutputSupplierMap0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__Result0_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__term_pass1__TermErrors0_14);
        }
#line 161 "term_pass1.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result0_13)) == (MR_mktag((MR_Integer) 1))))
#line 158 "term_pass1.m"
          {
#line 159 "term_pass1.m"
            *transform_hlds__term_pass1__Result_11 = transform_hlds__term_pass1__Result0_13;
#line 160 "term_pass1.m"
            *transform_hlds__term_pass1__TermErrors_12 = transform_hlds__term_pass1__TermErrors0_14;
#line 158 "term_pass1.m"
          }
#line 161 "term_pass1.m"
        else
#line 162 "term_pass1.m"
          {
#line 162 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__OutputSupplierMap1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_13, (MR_Integer) 1)));
#line 162 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_13, (MR_Integer) 0)));
#line 162 "term_pass1.m"
            MR_Word transform_hlds__term_pass1__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result0_13, (MR_Integer) 2)));

#line 163 "term_pass1.m"
            {
#line 163 "term_pass1.m"
              transform_hlds__term_pass1__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_2[3], ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap1_17)), ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap0_10)));
            }
#line 166 "term_pass1.m"
            if (transform_hlds__term_pass1__succeeded)
#line 164 "term_pass1.m"
              {
#line 164 "term_pass1.m"
                *transform_hlds__term_pass1__Result_11 = transform_hlds__term_pass1__Result0_13;
#line 165 "term_pass1.m"
                *transform_hlds__term_pass1__TermErrors_12 = transform_hlds__term_pass1__TermErrors0_14;
#line 164 "term_pass1.m"
              }
#line 166 "term_pass1.m"
            else
#line 167 "term_pass1.m"
              {
#line 167 "term_pass1.m"
                /* direct tailcall eliminated */
#line 167 "term_pass1.m"
                {
#line 167 "term_pass1.m"
                  MR_Word transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_10 = transform_hlds__term_pass1__OutputSupplierMap1_17;

#line 167 "term_pass1.m"
                  transform_hlds__term_pass1__OutputSupplierMap0_10 = transform_hlds__term_pass1__OutputSupplierMap0__tmp_copy_10;
#line 167 "term_pass1.m"
                }
#line 167 "term_pass1.m"
                continue;
#line 167 "term_pass1.m"
              }
#line 162 "term_pass1.m"
          }
#line 154 "term_pass1.m"
      }
#line 154 "term_pass1.m"
      break;
#line 154 "term_pass1.m"
    }
#line 149 "term_pass1.m"
}

#line 143 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0_1(
#line 143 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 143 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 143 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 143 "term_pass1.m"
{
#line 143 "term_pass1.m"
  {
#line 143 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 143 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_LambdaHeadVar__2_19;

#line 143 "term_pass1.m"
    {
#line 143 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__init_output_suppliers__143__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_LambdaHeadVar__2_19);
    }
#line 143 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_LambdaHeadVar__2_19));
#line 143 "term_pass1.m"
  }
#line 143 "term_pass1.m"
}

#line 134 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__init_output_suppliers_3_p_0(
#line 134 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_1,
#line 134 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__HeadVar__2_2,
#line 134 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__HeadVar__3_3)
#line 134 "term_pass1.m"
{
#line 137 "term_pass1.m"
  {
#line 137 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;

#line 137 "term_pass1.m"
    if ((transform_hlds__term_pass1__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 137 "term_pass1.m"
      {
#line 138 "term_pass1.m"
        {
#line 138 "term_pass1.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], transform_hlds__term_pass1__HeadVar__3_3);
        }
#line 137 "term_pass1.m"
      }
#line 137 "term_pass1.m"
    else
#line 139 "term_pass1.m"
      {
#line 139 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PPId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__PPIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__HeadVar__2_2, (MR_Integer) 1)));
#line 139 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap0_10;
#line 139 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__ProcInfo_12;
#line 139 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__HeadVars_13;
#line 139 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__BoolList_17;
#line 141 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__V_11_11;

#line 140 "term_pass1.m"
        {
#line 140 "term_pass1.m"
          transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__ModuleInfo_1, transform_hlds__term_pass1__PPIds_8, &transform_hlds__term_pass1__OutputSupplierMap0_10);
        }
#line 141 "term_pass1.m"
        {
#line 141 "term_pass1.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass1__ModuleInfo_1, transform_hlds__term_pass1__PPId_7, &transform_hlds__term_pass1__V_11_11, &transform_hlds__term_pass1__ProcInfo_12);
        }
#line 142 "term_pass1.m"
        {
#line 142 "term_pass1.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass1__ProcInfo_12, &transform_hlds__term_pass1__HeadVars_13);
        }
#line 144 "term_pass1.m"
        {
#line 144 "term_pass1.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass1_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[5], transform_hlds__term_pass1__HeadVars_13, &transform_hlds__term_pass1__BoolList_17);
        }
#line 145 "term_pass1.m"
        {
#line 145 "term_pass1.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass1_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass1__PPId_7)), ((MR_Box) (transform_hlds__term_pass1__BoolList_17)), transform_hlds__term_pass1__OutputSupplierMap0_10, transform_hlds__term_pass1__HeadVar__3_3);
        }
#line 139 "term_pass1.m"
      }
#line 137 "term_pass1.m"
  }
#line 134 "term_pass1.m"
}

#line 405 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2(
#line 405 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 405 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 405 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 405 "term_pass1.m"
{
#line 405 "term_pass1.m"
  {
#line 405 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 405 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv1_HeadVar__4_4;

#line 405 "term_pass1.m"
    {
#line 405 "term_pass1.m"
      transform_hlds__term_pass1__lookup_coeff_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv1_HeadVar__4_4);
    }
#line 405 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv1_HeadVar__4_4));
#line 405 "term_pass1.m"
  }
#line 405 "term_pass1.m"
}

#line 423 "term_pass1.m"
static void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_1(
#line 423 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__closure_arg,
#line 423 "term_pass1.m"
  MR_Box transform_hlds__term_pass1__wrapper_arg_1,
#line 423 "term_pass1.m"
  MR_Box * transform_hlds__term_pass1__wrapper_arg_2)
#line 423 "term_pass1.m"
{
#line 423 "term_pass1.m"
  {
#line 423 "term_pass1.m"
    MR_Box transform_hlds__term_pass1__closure = transform_hlds__term_pass1__closure_arg;
#line 423 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__conv0_LambdaHeadVar__2_20;

#line 423 "term_pass1.m"
    {
#line 423 "term_pass1.m"
      transform_hlds__term_pass1__IntroducedFrom__pred__convert_equations__423__1_2_p_0(((MR_Word) transform_hlds__term_pass1__wrapper_arg_1), &transform_hlds__term_pass1__conv0_LambdaHeadVar__2_20);
    }
#line 423 "term_pass1.m"
    *transform_hlds__term_pass1__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass1__conv0_LambdaHeadVar__2_20));
#line 423 "term_pass1.m"
  }
#line 423 "term_pass1.m"
}

#line 48 "term_pass1.m"
void MR_CALL 
transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0(
#line 48 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__ModuleInfo_6,
#line 48 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__PassInfo_7,
#line 48 "term_pass1.m"
  MR_Word transform_hlds__term_pass1__SCC_8,
#line 48 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__ArgSize_9,
#line 48 "term_pass1.m"
  MR_Word * transform_hlds__term_pass1__TermErrors_10)
#line 48 "term_pass1.m"
{
#line 93 "term_pass1.m"
  {
#line 93 "term_pass1.m"
    MR_bool transform_hlds__term_pass1__succeeded;
#line 93 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__InitOutputSupplierMap_11;
#line 93 "term_pass1.m"
    MR_Word transform_hlds__term_pass1__Result_12;

#line 94 "term_pass1.m"
    {
#line 94 "term_pass1.m"
      transform_hlds__term_pass1__init_output_suppliers_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__InitOutputSupplierMap_11);
    }
#line 95 "term_pass1.m"
    {
#line 95 "term_pass1.m"
      transform_hlds__term_pass1__find_arg_sizes_in_scc_fixpoint_6_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__PassInfo_7, transform_hlds__term_pass1__SCC_8, transform_hlds__term_pass1__InitOutputSupplierMap_11, &transform_hlds__term_pass1__Result_12, transform_hlds__term_pass1__TermErrors_10);
    }
#line 123 "term_pass1.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass1__Result_12)) == (MR_mktag((MR_Integer) 1))))
#line 124 "term_pass1.m"
      {
#line 124 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Errors_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Result_12, (MR_Integer) 0)));

#line 125 "term_pass1.m"
        {
#line 125 "term_pass1.m"
          MR_Word base;
#line 125 "term_pass1.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 125 "term_pass1.m"
          *transform_hlds__term_pass1__ArgSize_9 = base;
#line 125 "term_pass1.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Errors_24));
#line 125 "term_pass1.m"
        }
#line 124 "term_pass1.m"
      }
#line 123 "term_pass1.m"
    else
#line 98 "term_pass1.m"
      {
#line 98 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__Paths_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_12, (MR_Integer) 0)));
#line 98 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__OutputSupplierMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_12, (MR_Integer) 1)));
#line 98 "term_pass1.m"
        MR_Word transform_hlds__term_pass1__SubsetErrors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__Result_12, (MR_Integer) 2)));

#line 102 "term_pass1.m"
        if ((transform_hlds__term_pass1__SubsetErrors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 109 "term_pass1.m"
          if ((transform_hlds__term_pass1__Paths_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 105 "term_pass1.m"
            {
#line 105 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Context_18;
#line 105 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__ArgSizeError_19;
#line 105 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__V_29_29;

#line 106 "term_pass1.m"
              {
#line 106 "term_pass1.m"
                transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Context_18);
              }
#line 107 "term_pass1.m"
              {
#line 107 "term_pass1.m"
                transform_hlds__term_pass1__ArgSizeError_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_19, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_18));
#line 107 "term_pass1.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 107 "term_pass1.m"
              }
#line 108 "term_pass1.m"
              {
#line 108 "term_pass1.m"
                transform_hlds__term_pass1__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "term_pass1.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_29_29, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_19));
#line 108 "term_pass1.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "term_pass1.m"
              }
#line 108 "term_pass1.m"
              {
#line 108 "term_pass1.m"
                MR_Word base;
#line 108 "term_pass1.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "term_pass1.m"
                *transform_hlds__term_pass1__ArgSize_9 = base;
#line 108 "term_pass1.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_29_29));
#line 108 "term_pass1.m"
              }
#line 105 "term_pass1.m"
            }
#line 109 "term_pass1.m"
          else
#line 4096 "transform_hlds.term_pass1.c"
            {
#line 4098 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Varset_40;
#line 4100 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Equations_41;
#line 4102 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__Objective_42;
#line 4104 "transform_hlds.term_pass1.c"
              MR_Word transform_hlds__term_pass1__PPVars_43;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_25_76;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeInfo_26_77;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeCtorInfo_27_78;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__TypeInfo_28_79;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Varset0_62;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__PPVars0_63;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__EqnSet0_64;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__EqnSet_65;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Vars_66;
#line 415 "term_pass1.m"
              MR_Word transform_hlds__term_pass1__Convert_67;

#line 416 "term_pass1.m"
              {
#line 416 "term_pass1.m"
                mercury__varset__init_1_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &transform_hlds__term_pass1__Varset0_62);
              }
#line 4132 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeCtorInfo_25_76 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4134 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeInfo_26_77 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 417 "term_pass1.m"
              {
#line 417 "term_pass1.m"
                mercury__map__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_76, transform_hlds__term_pass1__TypeInfo_26_77, &transform_hlds__term_pass1__PPVars0_63);
              }
#line 4141 "transform_hlds.term_pass1.c"
              transform_hlds__term_pass1__TypeCtorInfo_27_78 = (MR_Word) &libs__lp__libs__lp__type_ctor_info_equation_0;
#line 418 "term_pass1.m"
              {
#line 418 "term_pass1.m"
                mercury__set__init_1_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_78, &transform_hlds__term_pass1__EqnSet0_64);
              }
#line 419 "term_pass1.m"
              {
#line 419 "term_pass1.m"
                transform_hlds__term_pass1__succeeded = transform_hlds__term_pass1__convert_equations_2_7_p_0(transform_hlds__term_pass1__Paths_13, transform_hlds__term_pass1__PPVars0_63, &transform_hlds__term_pass1__PPVars_43, transform_hlds__term_pass1__Varset0_62, &transform_hlds__term_pass1__Varset_40, transform_hlds__term_pass1__EqnSet0_64, &transform_hlds__term_pass1__EqnSet_65);
              }
#line 415 "term_pass1.m"
              if (transform_hlds__term_pass1__succeeded)
#line 415 "term_pass1.m"
                {
#line 421 "term_pass1.m"
                  {
#line 421 "term_pass1.m"
                    mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_27_78, transform_hlds__term_pass1__EqnSet_65, &transform_hlds__term_pass1__Equations_41);
                  }
#line 422 "term_pass1.m"
                  {
#line 422 "term_pass1.m"
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_25_76, transform_hlds__term_pass1__TypeInfo_26_77, transform_hlds__term_pass1__PPVars_43, &transform_hlds__term_pass1__Vars_66);
                  }
#line 423 "term_pass1.m"
                  transform_hlds__term_pass1__Convert_67 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[4];
#line 4169 "transform_hlds.term_pass1.c"
                  transform_hlds__term_pass1__TypeInfo_28_79 = (MR_Word) &transform_hlds__term_pass1_scalar_common_2[1];
#line 424 "term_pass1.m"
                  {
#line 424 "term_pass1.m"
                    mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeInfo_26_77, transform_hlds__term_pass1__TypeInfo_28_79, transform_hlds__term_pass1__Convert_67, transform_hlds__term_pass1__Vars_66, &transform_hlds__term_pass1__Objective_42);
                  }
#line 424 "term_pass1.m"
                  transform_hlds__term_pass1__succeeded = MR_TRUE;
#line 415 "term_pass1.m"
                }
#line 4180 "transform_hlds.term_pass1.c"
              if (transform_hlds__term_pass1__succeeded)
#line 4182 "transform_hlds.term_pass1.c"
                {
#line 4184 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__TypeCtorInfo_19_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4186 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__TypeInfo_20_53 = (MR_Word) &transform_hlds__term_pass1_scalar_common_1[3];
#line 4188 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__AllVars0_44;
#line 4190 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__AllVars_45;
#line 4192 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__Soln_46;

#line 397 "term_pass1.m"
                  {
#line 397 "term_pass1.m"
                    mercury__map__values_2_p_0(transform_hlds__term_pass1__TypeCtorInfo_19_52, transform_hlds__term_pass1__TypeInfo_20_53, transform_hlds__term_pass1__PPVars_43, &transform_hlds__term_pass1__AllVars0_44);
                  }
#line 398 "term_pass1.m"
                  {
#line 398 "term_pass1.m"
                    mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__term_pass1__TypeInfo_20_53, transform_hlds__term_pass1__AllVars0_44, &transform_hlds__term_pass1__AllVars_45);
                  }
#line 399 "term_pass1.m"
                  {
#line 399 "term_pass1.m"
                    libs__lp__lp_solve_6_p_0(transform_hlds__term_pass1__Equations_41, (MR_Integer) 1, transform_hlds__term_pass1__Objective_42, transform_hlds__term_pass1__Varset_40, transform_hlds__term_pass1__AllVars_45, &transform_hlds__term_pass1__Soln_46);
                  }
#line 4210 "transform_hlds.term_pass1.c"
                  if ((transform_hlds__term_pass1__Soln_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4212 "transform_hlds.term_pass1.c"
                    {
#line 4214 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__V_26_26;
#line 4216 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__Context_31;
#line 4218 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__ArgSizeError_32;

#line 117 "term_pass1.m"
                      {
#line 117 "term_pass1.m"
                        transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Context_31);
                      }
#line 118 "term_pass1.m"
                      {
#line 118 "term_pass1.m"
                        transform_hlds__term_pass1__ArgSizeError_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_32, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_31));
#line 118 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 118 "term_pass1.m"
                      }
#line 119 "term_pass1.m"
                      {
#line 119 "term_pass1.m"
                        transform_hlds__term_pass1__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_26_26, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_32));
#line 119 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "term_pass1.m"
                      }
#line 119 "term_pass1.m"
                      {
#line 119 "term_pass1.m"
                        MR_Word base;
#line 119 "term_pass1.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 119 "term_pass1.m"
                        *transform_hlds__term_pass1__ArgSize_9 = base;
#line 119 "term_pass1.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_26_26));
#line 119 "term_pass1.m"
                      }
#line 4258 "transform_hlds.term_pass1.c"
                    }
#line 4260 "transform_hlds.term_pass1.c"
                  else
#line 4262 "transform_hlds.term_pass1.c"
                    {
#line 4264 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__Solution_23;
#line 4266 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__SolnVal_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_46, (MR_Integer) 1)));
#line 4268 "transform_hlds.term_pass1.c"
                      MR_Word transform_hlds__term_pass1__V_51_51;
#line 404 "term_pass1.m"
                      MR_Float transform_hlds__term_pass1___ObjVal_47 = MR_unbox_float((MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__Soln_46, (MR_Integer) 0)));

#line 405 "term_pass1.m"
                      {
#line 405 "term_pass1.m"
                        transform_hlds__term_pass1__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 405 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 0) = ((MR_Box) (&transform_hlds__term_pass1_scalar_common_4[0]));
#line 405 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 1) = ((MR_Box) (transform_hlds__term_pass1__find_arg_sizes_in_scc_5_p_0_2));
#line 405 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 405 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 3) = ((MR_Box) (transform_hlds__term_pass1__PPVars_43));
#line 405 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__V_51_51, 4) = ((MR_Box) (transform_hlds__term_pass1__SolnVal_48));
#line 405 "term_pass1.m"
                      }
#line 405 "term_pass1.m"
                      {
#line 405 "term_pass1.m"
                        mercury__list__map_3_p_0(transform_hlds__term_pass1__TypeCtorInfo_19_52, (MR_Word) &transform_hlds__term_pass1_scalar_common_2[0], transform_hlds__term_pass1__V_51_51, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Solution_23);
                      }
#line 114 "term_pass1.m"
                      {
#line 114 "term_pass1.m"
                        MR_Word base;
#line 114 "term_pass1.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "term_pass1.m"
                        *transform_hlds__term_pass1__ArgSize_9 = base;
#line 114 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass1__Solution_23));
#line 114 "term_pass1.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass1__OutputSupplierMap_14));
#line 114 "term_pass1.m"
                      }
#line 4308 "transform_hlds.term_pass1.c"
                    }
#line 4310 "transform_hlds.term_pass1.c"
                }
#line 4312 "transform_hlds.term_pass1.c"
              else
#line 4314 "transform_hlds.term_pass1.c"
                {
#line 4316 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__V_83_83;
#line 4318 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__Context_85;
#line 4320 "transform_hlds.term_pass1.c"
                  MR_Word transform_hlds__term_pass1__ArgSizeError_86;

#line 117 "term_pass1.m"
                  {
#line 117 "term_pass1.m"
                    transform_hlds__term_util__get_context_from_scc_3_p_0(transform_hlds__term_pass1__ModuleInfo_6, transform_hlds__term_pass1__SCC_8, &transform_hlds__term_pass1__Context_85);
                  }
#line 118 "term_pass1.m"
                  {
#line 118 "term_pass1.m"
                    transform_hlds__term_pass1__ArgSizeError_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_86, 0) = ((MR_Box) (transform_hlds__term_pass1__Context_85));
#line 118 "term_pass1.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__term_pass1__ArgSizeError_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 118 "term_pass1.m"
                  }
#line 119 "term_pass1.m"
                  {
#line 119 "term_pass1.m"
                    transform_hlds__term_pass1__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 0) = ((MR_Box) (transform_hlds__term_pass1__ArgSizeError_86));
#line 119 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_pass1__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "term_pass1.m"
                  }
#line 119 "term_pass1.m"
                  {
#line 119 "term_pass1.m"
                    MR_Word base;
#line 119 "term_pass1.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 119 "term_pass1.m"
                    *transform_hlds__term_pass1__ArgSize_9 = base;
#line 119 "term_pass1.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__V_83_83));
#line 119 "term_pass1.m"
                  }
#line 4360 "transform_hlds.term_pass1.c"
                }
#line 4362 "transform_hlds.term_pass1.c"
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
            *transform_hlds__term_pass1__ArgSize_9 = base;
#line 101 "term_pass1.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass1__SubsetErrors_15));
#line 101 "term_pass1.m"
          }
#line 98 "term_pass1.m"
      }
#line 93 "term_pass1.m"
  }
#line 48 "term_pass1.m"
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
