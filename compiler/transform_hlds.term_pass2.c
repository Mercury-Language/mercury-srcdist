/*
** Automatically generated from `term_pass2.m'
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


/* :- module transform_hlds.term_pass2. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_pass2__init
ENDINIT
*/

#include "transform_hlds.term_pass2.mih"


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
#include "check_hlds.mode_util.mih"
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



#line 33 "term_pass2.m"
struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s {
#line 85 "term_pass2.m"
  MR_bool transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded;
#line 90 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_13;
#line 101 "term_pass2.m"
  jmp_buf transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0;
#line 101 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15;
#line 101 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__V_20_20;
#line 101 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_15;
#line 33 "term_pass2.m"
};


#line 159 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 171 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

#line 174 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

#line 177 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0;

#line 180 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

#line 183 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0[2];

#line 186 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0;

#line 189 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0[1];

#line 192 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0[1];

#line 195 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0[1];

#line 198 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0[1];

#line 201 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0;

#line 204 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1;

#line 207 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0[2];

#line 210 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0[2];

#line 213 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0[2];

#line 216 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0;

#line 219 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

#line 222 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0[2];

#line 225 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0;

#line 228 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1[1];

#line 231 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1;

#line 234 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0[1];

#line 237 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1[1];

#line 240 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0[2];

#line 243 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0[2];

#line 246 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0[2];

#line 249 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
#line 252 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 254 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 257 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
#line 260 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 262 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 264 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 267 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
#line 270 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 272 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 275 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
#line 278 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 280 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 282 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 285 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
#line 288 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 290 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 293 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
#line 296 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 298 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 300 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 303 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
#line 306 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 308 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 311 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
#line 314 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 316 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 318 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 321 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
#line 324 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 326 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2);

#line 329 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
#line 332 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 334 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 336 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3);

#line 279 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_55_57_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 279 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23);

#line 248 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_52_56_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 248 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20);

#line 387 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__387__1_2_p_0(
#line 387 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_39,
#line 387 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_60);

#line 404 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__404__1_2_p_0(
#line 404 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_55,
#line 404 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_61);

#line 279 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__279__1_2_p_0(
#line 279 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_22,
#line 279 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23);

#line 248 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__248__1_2_p_0(
#line 248 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_19,
#line 248 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20);

#line 139 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__139__1_3_p_0(
#line 139 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__InArgs_15,
#line 139 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_21,
#line 139 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__3_22);

#line 74 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
#line 74 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 74 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 61 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
#line 61 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 61 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 61 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 61 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
#line 61 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_1,
#line 61 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 65 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
#line 65 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 65 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 65 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 65 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
#line 65 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 65 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 71 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
#line 71 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 71 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 71 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 71 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
#line 71 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 71 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 72 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
#line 72 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 72 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 72 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3);

#line 72 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
#line 72 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 72 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2);

#line 569 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_11,
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ProcContext_12,
#line 569 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar0_13,
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_14,
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_15,
#line 569 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Cycles_16);

#line 554 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_2,
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Context_3,
#line 554 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar_4,
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_5,
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_6,
#line 554 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7);

#line 529 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
#line 529 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 529 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_2,
#line 529 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3,
#line 529 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__4_4);

#line 462 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
#line 462 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 462 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 462 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3,
#line 462 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4);

#line 411 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ActiveVars_2,
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 411 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6,
#line 411 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7);

#line 387 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2(
#line 387 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg);

#line 404 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1(
#line 404 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg);

#line 361 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_2,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap_5,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__6_6,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__7_7,
#line 361 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__8_8);

#line 330 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_8,
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_9,
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_10,
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap0_11,
#line 330 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Result_12);

#line 279 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
#line 279 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 279 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 279 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

#line 271 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
#line 271 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 271 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 271 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3,
#line 271 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4);

#line 248 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
#line 248 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 248 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 248 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

#line 239 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
#line 239 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_5,
#line 239 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 239 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum_8,
#line 239 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__BoolList_9);

#line 202 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(
#line 202 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
#line 202 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_8,
#line 202 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__TrialPPId_9,
#line 202 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RestSCC_10,
#line 202 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum0_11,
#line 202 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Terminates_12);

#line 182 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
#line 182 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 182 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 182 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__BestSofarPPId_3,
#line 182 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__BestSofarArity_4,
#line 182 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 182 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__6_6);

#line 136 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1(
#line 136 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 136 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 136 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2);

#line 125 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(
#line 125 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 125 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_2,
#line 125 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__3_3);

#line 101 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(
#line 101 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);

#line 101 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3(
#line 101 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);

#line 101 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(
#line 101 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);

#line 101 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(
#line 101 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg);


static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_1[3][2];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_4[1][6];

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_5[3][5];




static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_1[3][2] = {
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
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_pass2_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0)),
    ((MR_Box) (&transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 861 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 869 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__bag__pti_bag_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_pass2__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 877 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 885 "transform_hlds.term_pass2.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_pass2__list__pti_list_1__plain_transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 893 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 902 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  }
};

#line 911 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_dst_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 928 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
  }
};

#line 937 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 954 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

#line 962 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
};

#line 968 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0 = {
  (MR_String) "call_weight_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_call_weight_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 983 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0
};

#line 988 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_call_weight_info_0_0
  }
};

#line 997 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_call_weight_info_0_0
};

#line 1002 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0[1] = {
  (MR_Integer) 0
};

#line 1007 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "call_weight_info",
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_call_weight_info_0 },
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_call_weight_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_call_weight_info_0
};

#line 1024 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0 = {
  (MR_String) "up",
  (MR_Integer) 0
};

#line 1030 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1 = {
  (MR_String) "down",
  (MR_Integer) 1
};

#line 1036 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1
};

#line 1042 "transform_hlds.term_pass2.c"
static const MR_EnumFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0
};

#line 1048 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1054 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_fixpoint_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "fixpoint_dir",
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0 },
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0
};

#line 1071 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1079 "transform_hlds.term_pass2.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_pass2__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

#line 1088 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

#line 1094 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0 = {
  (MR_String) "term_pass2_ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 1109 "transform_hlds.term_pass2.c"
static const MR_PseudoTypeInfo transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_pass2__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
};

#line 1114 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDesc transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1 = {
  (MR_String) "term_pass2_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__term_pass2__transform_hlds__term_pass2__field_types_term_pass2_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 1129 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0
};

#line 1134 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1[1] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1
};

#line 1139 "transform_hlds.term_pass2.c"
static const MR_DuPtagLayout transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_pass2__transform_hlds__term_pass2__du_stag_ordered_term_pass2_result_0_1
  }
};

#line 1153 "transform_hlds.term_pass2.c"
static const MR_DuFunctorDescPtr transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0[2] = {
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_1,
  &transform_hlds__term_pass2__transform_hlds__term_pass2__du_functor_desc_term_pass2_result_0_0
};

#line 1159 "transform_hlds.term_pass2.c"
static const MR_Integer transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1165 "transform_hlds.term_pass2.c"
const MR_TypeCtorInfo_Struct transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_term_pass2_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001)),
  ((MR_Box) (transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001)),
  (MR_String) "transform_hlds.term_pass2",
  (MR_String) "term_pass2_result",
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_name_ordered_term_pass2_result_0 },
  {     transform_hlds__term_pass2__transform_hlds__term_pass2__du_ptag_ordered_term_pass2_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__term_pass2__transform_hlds__term_pass2__functor_number_map_term_pass2_result_0
};

#line 1182 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0_10001(
#line 1185 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1187 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1189 "transform_hlds.term_pass2.c"
{
#line 1191 "transform_hlds.term_pass2.c"
  {
#line 1193 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1196 "transform_hlds.term_pass2.c"
    {
#line 1198 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1201 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1203 "transform_hlds.term_pass2.c"
  }
#line 1205 "transform_hlds.term_pass2.c"
}

#line 1208 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0_10001(
#line 1211 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1213 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1215 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1217 "transform_hlds.term_pass2.c"
{
#line 1219 "transform_hlds.term_pass2.c"
  {
#line 1221 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1224 "transform_hlds.term_pass2.c"
    {
#line 1226 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1229 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1231 "transform_hlds.term_pass2.c"
  }
#line 1233 "transform_hlds.term_pass2.c"
}

#line 1236 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0_10001(
#line 1239 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1241 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1243 "transform_hlds.term_pass2.c"
{
#line 1245 "transform_hlds.term_pass2.c"
  {
#line 1247 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1250 "transform_hlds.term_pass2.c"
    {
#line 1252 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_graph_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1255 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1257 "transform_hlds.term_pass2.c"
  }
#line 1259 "transform_hlds.term_pass2.c"
}

#line 1262 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0_10001(
#line 1265 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1267 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1269 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1271 "transform_hlds.term_pass2.c"
{
#line 1273 "transform_hlds.term_pass2.c"
  {
#line 1275 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1278 "transform_hlds.term_pass2.c"
    {
#line 1280 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____call_weight_graph_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1283 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1285 "transform_hlds.term_pass2.c"
  }
#line 1287 "transform_hlds.term_pass2.c"
}

#line 1290 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0_10001(
#line 1293 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1295 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1297 "transform_hlds.term_pass2.c"
{
#line 1299 "transform_hlds.term_pass2.c"
  {
#line 1301 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1304 "transform_hlds.term_pass2.c"
    {
#line 1306 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1309 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1311 "transform_hlds.term_pass2.c"
  }
#line 1313 "transform_hlds.term_pass2.c"
}

#line 1316 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0_10001(
#line 1319 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1321 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1323 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1325 "transform_hlds.term_pass2.c"
{
#line 1327 "transform_hlds.term_pass2.c"
  {
#line 1329 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1332 "transform_hlds.term_pass2.c"
    {
#line 1334 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____call_weight_info_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1337 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1339 "transform_hlds.term_pass2.c"
  }
#line 1341 "transform_hlds.term_pass2.c"
}

#line 1344 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0_10001(
#line 1347 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1349 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1351 "transform_hlds.term_pass2.c"
{
#line 1353 "transform_hlds.term_pass2.c"
  {
#line 1355 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1358 "transform_hlds.term_pass2.c"
    {
#line 1360 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1363 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1365 "transform_hlds.term_pass2.c"
  }
#line 1367 "transform_hlds.term_pass2.c"
}

#line 1370 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0_10001(
#line 1373 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1375 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1377 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1379 "transform_hlds.term_pass2.c"
{
#line 1381 "transform_hlds.term_pass2.c"
  {
#line 1383 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1386 "transform_hlds.term_pass2.c"
    {
#line 1388 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1391 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1393 "transform_hlds.term_pass2.c"
  }
#line 1395 "transform_hlds.term_pass2.c"
}

#line 1398 "transform_hlds.term_pass2.c"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0_10001(
#line 1401 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 1403 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2)
#line 1405 "transform_hlds.term_pass2.c"
{
#line 1407 "transform_hlds.term_pass2.c"
  {
#line 1409 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 1412 "transform_hlds.term_pass2.c"
    {
#line 1414 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____term_pass2_result_0_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2));
    }
#line 1417 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1419 "transform_hlds.term_pass2.c"
  }
#line 1421 "transform_hlds.term_pass2.c"
}

#line 1424 "transform_hlds.term_pass2.c"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0_10001(
#line 1427 "transform_hlds.term_pass2.c"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_1,
#line 1429 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_2,
#line 1431 "transform_hlds.term_pass2.c"
  MR_Box transform_hlds__term_pass2__wrapper_arg_3)
#line 1433 "transform_hlds.term_pass2.c"
{
#line 1435 "transform_hlds.term_pass2.c"
  {
#line 1437 "transform_hlds.term_pass2.c"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__1_1;

#line 1440 "transform_hlds.term_pass2.c"
    {
#line 1442 "transform_hlds.term_pass2.c"
      transform_hlds__term_pass2____Compare____term_pass2_result_0_0(&transform_hlds__term_pass2__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_pass2__wrapper_arg_2), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_3));
    }
#line 1445 "transform_hlds.term_pass2.c"
    *transform_hlds__term_pass2__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__1_1));
#line 1447 "transform_hlds.term_pass2.c"
  }
#line 1449 "transform_hlds.term_pass2.c"
}

#line 279 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_55_57_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 279 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23)
#line 279 "term_pass2.m"
{
#line 612 "term_pass2.m"
  {
#line 612 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 612 "term_pass2.m"
    *transform_hlds__term_pass2__HeadVar__2_23 = (MR_Integer) 0;
#line 612 "term_pass2.m"
  }
#line 279 "term_pass2.m"
}

#line 248 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_52_56_95_95_49_95_95_91_49_93_95_48_2_p_0(
#line 248 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20)
#line 248 "term_pass2.m"
{
#line 612 "term_pass2.m"
  {
#line 612 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 612 "term_pass2.m"
    *transform_hlds__term_pass2__HeadVar__2_20 = (MR_Integer) 0;
#line 612 "term_pass2.m"
  }
#line 248 "term_pass2.m"
}

#line 387 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__387__1_2_p_0(
#line 387 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_39,
#line 387 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_60)
#line 387 "term_pass2.m"
{
#line 387 "term_pass2.m"
  {
#line 387 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 387 "term_pass2.m"
    {
#line 387 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__CanLoop_39)), ((MR_Box) (transform_hlds__term_pass2__HeadVar__2_60)));
    }
#line 387 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 387 "term_pass2.m"
  }
#line 387 "term_pass2.m"
}

#line 404 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__404__1_2_p_0(
#line 404 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_55,
#line 404 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CanLoop_61)
#line 404 "term_pass2.m"
{
#line 404 "term_pass2.m"
  {
#line 404 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 404 "term_pass2.m"
    {
#line 404 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__CanLoop_61)), ((MR_Box) (transform_hlds__term_pass2__HeadVar__1_55)));
    }
#line 404 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 404 "term_pass2.m"
  }
#line 404 "term_pass2.m"
}

#line 279 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__279__1_2_p_0(
#line 279 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_22,
#line 279 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_23)
#line 279 "term_pass2.m"
{
#line 612 "term_pass2.m"
  {
#line 612 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 612 "term_pass2.m"
    {
#line 612 "term_pass2.m"
      transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_55_57_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass2__HeadVar__2_23);
#line 612 "term_pass2.m"
      return;
    }
#line 612 "term_pass2.m"
  }
#line 279 "term_pass2.m"
}

#line 248 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__248__1_2_p_0(
#line 248 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_19,
#line 248 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__2_20)
#line 248 "term_pass2.m"
{
#line 612 "term_pass2.m"
  {
#line 612 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 612 "term_pass2.m"
    {
#line 612 "term_pass2.m"
      transform_hlds__term_pass2__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_52_56_95_95_49_95_95_91_49_93_95_48_2_p_0(transform_hlds__term_pass2__HeadVar__2_20);
#line 612 "term_pass2.m"
      return;
    }
#line 612 "term_pass2.m"
  }
#line 248 "term_pass2.m"
}

#line 139 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__139__1_3_p_0(
#line 139 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__InArgs_15,
#line 139 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_21,
#line 139 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__3_22)
#line 139 "term_pass2.m"
{
#line 139 "term_pass2.m"
  {
#line 139 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 137 "term_pass2.m"
    {
#line 137 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__InArgs_15, ((MR_Box) (transform_hlds__term_pass2__HeadVar__2_21)));
    }
#line 139 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 138 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__3_22 = (MR_Integer) 1;
#line 139 "term_pass2.m"
    else
#line 140 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__3_22 = (MR_Integer) 0;
#line 139 "term_pass2.m"
  }
#line 139 "term_pass2.m"
}

#line 74 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____term_pass2_result_0_0(
#line 74 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 74 "term_pass2.m"
{
#line 74 "term_pass2.m"
  {
#line 74 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 74 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_17 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
#line 74 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_18 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

#line 74 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_17 == transform_hlds__term_pass2__CastY_18);
#line 74 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 1652 "transform_hlds.term_pass2.c"
      *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "term_pass2.m"
    else
#line 74 "term_pass2.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 74 "term_pass2.m"
      {
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));

#line 74 "term_pass2.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 74 "term_pass2.m"
          {
#line 74 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));

#line 74 "term_pass2.m"
            {
#line 74 "term_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_22_22)), ((MR_Box) (transform_hlds__term_pass2__V_16_16)));
#line 74 "term_pass2.m"
              return;
            }
#line 74 "term_pass2.m"
          }
#line 74 "term_pass2.m"
        else
#line 1681 "transform_hlds.term_pass2.c"
          *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "term_pass2.m"
      }
#line 74 "term_pass2.m"
    else
#line 74 "term_pass2.m"
      {
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));

#line 74 "term_pass2.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1696 "transform_hlds.term_pass2.c"
          *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "term_pass2.m"
        else
#line 74 "term_pass2.m"
          {
#line 74 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_8_8;

#line 74 "term_pass2.m"
            {
#line 74 "term_pass2.m"
              transform_hlds__term_pass2____Compare____call_weight_info_0_0(&transform_hlds__term_pass2__V_8_8, transform_hlds__term_pass2__V_24_24, transform_hlds__term_pass2__V_6_6);
            }
#line 1714 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__V_8_8 == (MR_Integer) 0);
#line 74 "term_pass2.m"
            transform_hlds__term_pass2__succeeded = !(transform_hlds__term_pass2__succeeded);
#line 74 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 74 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__V_8_8;
#line 74 "term_pass2.m"
            else
#line 74 "term_pass2.m"
              {
#line 74 "term_pass2.m"
                {
#line 74 "term_pass2.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[4], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_23_23)), ((MR_Box) (transform_hlds__term_pass2__V_7_7)));
#line 74 "term_pass2.m"
                  return;
                }
#line 74 "term_pass2.m"
              }
#line 74 "term_pass2.m"
          }
#line 74 "term_pass2.m"
      }
#line 74 "term_pass2.m"
  }
#line 74 "term_pass2.m"
}

#line 74 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____term_pass2_result_0_0(
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 74 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 74 "term_pass2.m"
{
#line 74 "term_pass2.m"
  {
#line 74 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 74 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_9 = (MR_Integer) transform_hlds__term_pass2__HeadVar__1_1;
#line 74 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_10 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;

#line 74 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_9 == transform_hlds__term_pass2__CastY_10);
#line 74 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 74 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 74 "term_pass2.m"
    else
#line 74 "term_pass2.m"
    if (((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 74 "term_pass2.m"
      {
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_11_11;
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_8_8;

#line 74 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 74 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 74 "term_pass2.m"
          {
#line 74 "term_pass2.m"
            transform_hlds__term_pass2__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 1789 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_11_11 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[2];
#line 1791 "transform_hlds.term_pass2.c"
            {
#line 1793 "transform_hlds.term_pass2.c"
              return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_11_11, ((MR_Box) (transform_hlds__term_pass2__V_7_7)), ((MR_Box) (transform_hlds__term_pass2__V_8_8)));
            }
#line 74 "term_pass2.m"
          }
#line 74 "term_pass2.m"
      }
#line 74 "term_pass2.m"
    else
#line 74 "term_pass2.m"
      {
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_12_12;
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_5_5;
#line 74 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_6_6;

#line 74 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 74 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 74 "term_pass2.m"
          {
#line 74 "term_pass2.m"
            transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "term_pass2.m"
            transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 1825 "transform_hlds.term_pass2.c"
            {
#line 1827 "transform_hlds.term_pass2.c"
              transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2____Unify____call_weight_info_0_0(transform_hlds__term_pass2__V_3_3, transform_hlds__term_pass2__V_5_5);
            }
#line 74 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 74 "term_pass2.m"
              {
#line 1834 "transform_hlds.term_pass2.c"
                transform_hlds__term_pass2__TypeInfo_12_12 = (MR_Word) &transform_hlds__term_pass2_scalar_common_2[4];
#line 1836 "transform_hlds.term_pass2.c"
                {
#line 1838 "transform_hlds.term_pass2.c"
                  return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_12_12, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
                }
#line 74 "term_pass2.m"
              }
#line 74 "term_pass2.m"
          }
#line 74 "term_pass2.m"
      }
#line 74 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 74 "term_pass2.m"
  }
#line 74 "term_pass2.m"
}

#line 61 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____fixpoint_dir_0_0(
#line 61 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 61 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 61 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 61 "term_pass2.m"
{
#line 61 "term_pass2.m"
  {
#line 61 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 61 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
#line 61 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

#line 61 "term_pass2.m"
    {
#line 61 "term_pass2.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_pass2__HeadVar__1_1, transform_hlds__term_pass2__Cast_HeadVar1_4, transform_hlds__term_pass2__Cast_HeadVar2_5);
#line 61 "term_pass2.m"
      return;
    }
#line 61 "term_pass2.m"
  }
#line 61 "term_pass2.m"
}

#line 61 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____fixpoint_dir_0_0(
#line 61 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_1,
#line 61 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 61 "term_pass2.m"
{
#line 1895 "transform_hlds.term_pass2.c"
  {
#line 1897 "transform_hlds.term_pass2.c"
    MR_bool transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__HeadVar__2_1 == transform_hlds__term_pass2__HeadVar__2_2);

#line 1900 "transform_hlds.term_pass2.c"
    return transform_hlds__term_pass2__succeeded;
#line 1902 "transform_hlds.term_pass2.c"
  }
#line 61 "term_pass2.m"
}

#line 65 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_info_0_0(
#line 65 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 65 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 65 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 65 "term_pass2.m"
{
#line 65 "term_pass2.m"
  {
#line 65 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 65 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_9 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;
#line 65 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_10 = (MR_Integer) transform_hlds__term_pass2__HeadVar__3_3;

#line 65 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_9 == transform_hlds__term_pass2__CastY_10);
#line 65 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 1931 "transform_hlds.term_pass2.c"
      *transform_hlds__term_pass2__HeadVar__1_1 = (MR_Integer) 0;
#line 65 "term_pass2.m"
    else
#line 65 "term_pass2.m"
      {
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_8_8;

#line 65 "term_pass2.m"
        {
#line 65 "term_pass2.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], &transform_hlds__term_pass2__V_8_8, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
        }
#line 1953 "transform_hlds.term_pass2.c"
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__V_8_8 == (MR_Integer) 0);
#line 65 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = !(transform_hlds__term_pass2__succeeded);
#line 65 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 65 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__V_8_8;
#line 65 "term_pass2.m"
        else
#line 65 "term_pass2.m"
          {
#line 65 "term_pass2.m"
            {
#line 65 "term_pass2.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__V_5_5)), ((MR_Box) (transform_hlds__term_pass2__V_7_7)));
#line 65 "term_pass2.m"
              return;
            }
#line 65 "term_pass2.m"
          }
#line 65 "term_pass2.m"
      }
#line 65 "term_pass2.m"
  }
#line 65 "term_pass2.m"
}

#line 65 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_info_0_0(
#line 65 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 65 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 65 "term_pass2.m"
{
#line 65 "term_pass2.m"
  {
#line 65 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 65 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastX_7 = (MR_Integer) transform_hlds__term_pass2__HeadVar__1_1;
#line 65 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__CastY_8 = (MR_Integer) transform_hlds__term_pass2__HeadVar__2_2;

#line 65 "term_pass2.m"
    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__CastX_7 == transform_hlds__term_pass2__CastY_8);
#line 65 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 65 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 65 "term_pass2.m"
    else
#line 65 "term_pass2.m"
      {
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_10_10;
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));

#line 2020 "transform_hlds.term_pass2.c"
        {
#line 2022 "transform_hlds.term_pass2.c"
          transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[2], ((MR_Box) (transform_hlds__term_pass2__V_3_3)), ((MR_Box) (transform_hlds__term_pass2__V_5_5)));
        }
#line 65 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 65 "term_pass2.m"
          {
#line 2029 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_10_10 = (MR_Word) &transform_hlds__term_pass2_scalar_common_2[3];
#line 2031 "transform_hlds.term_pass2.c"
            {
#line 2033 "transform_hlds.term_pass2.c"
              return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_pass2__TypeInfo_10_10, ((MR_Box) (transform_hlds__term_pass2__V_4_4)), ((MR_Box) (transform_hlds__term_pass2__V_6_6)));
            }
#line 65 "term_pass2.m"
          }
#line 65 "term_pass2.m"
      }
#line 65 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 65 "term_pass2.m"
  }
#line 65 "term_pass2.m"
}

#line 71 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_graph_0_0(
#line 71 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 71 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 71 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 71 "term_pass2.m"
{
#line 71 "term_pass2.m"
  {
#line 71 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 71 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_4 = transform_hlds__term_pass2__HeadVar__2_2;
#line 71 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_5 = transform_hlds__term_pass2__HeadVar__3_3;

#line 71 "term_pass2.m"
    {
#line 71 "term_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_5)));
#line 71 "term_pass2.m"
      return;
    }
#line 71 "term_pass2.m"
  }
#line 71 "term_pass2.m"
}

#line 71 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_graph_0_0(
#line 71 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 71 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 71 "term_pass2.m"
{
#line 71 "term_pass2.m"
  {
#line 71 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 71 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_3 = transform_hlds__term_pass2__HeadVar__1_1;
#line 71 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_4 = transform_hlds__term_pass2__HeadVar__2_2;

#line 71 "term_pass2.m"
    {
#line 71 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[3], ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_4)));
    }
#line 71 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 71 "term_pass2.m"
  }
#line 71 "term_pass2.m"
}

#line 72 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2____Compare____call_weight_dst_map_0_0(
#line 72 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__1_1,
#line 72 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 72 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3)
#line 72 "term_pass2.m"
{
#line 72 "term_pass2.m"
  {
#line 72 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 72 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_4 = transform_hlds__term_pass2__HeadVar__2_2;
#line 72 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_5 = transform_hlds__term_pass2__HeadVar__3_3;

#line 72 "term_pass2.m"
    {
#line 72 "term_pass2.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__HeadVar__1_1, ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_5)));
#line 72 "term_pass2.m"
      return;
    }
#line 72 "term_pass2.m"
  }
#line 72 "term_pass2.m"
}

#line 72 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2____Unify____call_weight_dst_map_0_0(
#line 72 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 72 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2)
#line 72 "term_pass2.m"
{
#line 72 "term_pass2.m"
  {
#line 72 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 72 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar1_3 = transform_hlds__term_pass2__HeadVar__1_1;
#line 72 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Cast_HeadVar2_4 = transform_hlds__term_pass2__HeadVar__2_2;

#line 72 "term_pass2.m"
    {
#line 72 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_pass2__Cast_HeadVar2_4)));
    }
#line 72 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 72 "term_pass2.m"
  }
#line 72 "term_pass2.m"
}

#line 569 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_11,
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ProcContext_12,
#line 569 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar0_13,
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_14,
#line 569 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_15,
#line 569 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Cycles_16)
#line 569 "term_pass2.m"
{
#line 576 "term_pass2.m"
  {
#line 576 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 576 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__CurPPId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 576 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Context_9;
#line 576 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__EdgeWeight_10;
#line 576 "term_pass2.m"
    MR_Integer transform_hlds__term_pass2__WeightSoFar1_17;
#line 576 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));

#line 574 "term_pass2.m"
    transform_hlds__term_pass2__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_26_26, (MR_Integer) 0)));
#line 574 "term_pass2.m"
    transform_hlds__term_pass2__EdgeWeight_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_26_26, (MR_Integer) 1)));
#line 577 "term_pass2.m"
    transform_hlds__term_pass2__WeightSoFar1_17 = (transform_hlds__term_pass2__WeightSoFar0_13 + transform_hlds__term_pass2__EdgeWeight_10);
#line 579 "term_pass2.m"
    {
#line 579 "term_pass2.m"
      transform_hlds__term_pass2__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_pass2__CurPPId_8, transform_hlds__term_pass2__LookforPPId_11);
    }
#line 591 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 588 "term_pass2.m"
      {
#line 582 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__WeightSoFar1_17 >= (MR_Integer) 0);
#line 588 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 583 "term_pass2.m"
          {
#line 583 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__FinalVisitedCalls_18;
#line 583 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RevFinalVisitedCalls_19;
#line 583 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CycleError_20;
#line 583 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CycleErrorContext_21;
#line 583 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_28_28;

#line 583 "term_pass2.m"
            {
#line 583 "term_pass2.m"
              transform_hlds__term_pass2__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_28_28, 0) = ((MR_Box) (transform_hlds__term_pass2__CurPPId_8));
#line 583 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_28_28, 1) = ((MR_Box) (transform_hlds__term_pass2__Context_9));
#line 583 "term_pass2.m"
            }
#line 583 "term_pass2.m"
            {
#line 583 "term_pass2.m"
              transform_hlds__term_pass2__FinalVisitedCalls_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__FinalVisitedCalls_18, 0) = ((MR_Box) (transform_hlds__term_pass2__V_28_28));
#line 583 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__FinalVisitedCalls_18, 1) = ((MR_Box) (transform_hlds__term_pass2__VisitedCalls_14));
#line 583 "term_pass2.m"
            }
#line 584 "term_pass2.m"
            {
#line 584 "term_pass2.m"
              mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[2], transform_hlds__term_pass2__FinalVisitedCalls_18, &transform_hlds__term_pass2__RevFinalVisitedCalls_19);
            }
#line 585 "term_pass2.m"
            {
#line 585 "term_pass2.m"
              transform_hlds__term_pass2__CycleError_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 585 "term_pass2.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 585 "term_pass2.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 1) = ((MR_Box) (transform_hlds__term_pass2__LookforPPId_11));
#line 585 "term_pass2.m"
              MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__CycleError_20, 2) = ((MR_Box) (transform_hlds__term_pass2__RevFinalVisitedCalls_19));
#line 585 "term_pass2.m"
            }
#line 586 "term_pass2.m"
            {
#line 586 "term_pass2.m"
              transform_hlds__term_pass2__CycleErrorContext_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CycleErrorContext_21, 0) = ((MR_Box) (transform_hlds__term_pass2__ProcContext_12));
#line 586 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CycleErrorContext_21, 1) = ((MR_Box) (transform_hlds__term_pass2__CycleError_20));
#line 586 "term_pass2.m"
            }
#line 587 "term_pass2.m"
            {
#line 587 "term_pass2.m"
              MR_Word base;
#line 587 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "term_pass2.m"
              *transform_hlds__term_pass2__Cycles_16 = base;
#line 587 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__CycleErrorContext_21));
#line 587 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "term_pass2.m"
            }
#line 583 "term_pass2.m"
          }
#line 588 "term_pass2.m"
        else
#line 589 "term_pass2.m"
          *transform_hlds__term_pass2__Cycles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 588 "term_pass2.m"
      }
#line 591 "term_pass2.m"
    else
#line 598 "term_pass2.m"
      {
#line 592 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 592 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__VisitedPPIds_22;

#line 592 "term_pass2.m"
        {
#line 592 "term_pass2.m"
          mercury__assoc_list__keys_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_32_32, (MR_Word) &mercury__term__term__type_ctor_info_context_0, transform_hlds__term_pass2__VisitedCalls_14, &transform_hlds__term_pass2__VisitedPPIds_22);
        }
#line 593 "term_pass2.m"
        {
#line 593 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = mercury__list__member_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_32_32, ((MR_Box) (transform_hlds__term_pass2__CurPPId_8)), transform_hlds__term_pass2__VisitedPPIds_22);
        }
#line 598 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 597 "term_pass2.m"
          *transform_hlds__term_pass2__Cycles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "term_pass2.m"
        else
#line 600 "term_pass2.m"
          {
#line 600 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_34_34;
#line 600 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__NewVisitedCalls_23;
#line 600 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__NeighboursMap_24;
#line 600 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__NeighboursList_25;
#line 600 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_30_30;
#line 601 "term_pass2.m"
            MR_Box transform_hlds__term_pass2__conv0_NeighboursMap_24;

#line 600 "term_pass2.m"
            {
#line 600 "term_pass2.m"
              transform_hlds__term_pass2__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 600 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_30_30, 0) = ((MR_Box) (transform_hlds__term_pass2__CurPPId_8));
#line 600 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_30_30, 1) = ((MR_Box) (transform_hlds__term_pass2__Context_9));
#line 600 "term_pass2.m"
            }
#line 600 "term_pass2.m"
            {
#line 600 "term_pass2.m"
              transform_hlds__term_pass2__NewVisitedCalls_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__NewVisitedCalls_23, 0) = ((MR_Box) (transform_hlds__term_pass2__V_30_30));
#line 600 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__NewVisitedCalls_23, 1) = ((MR_Box) (transform_hlds__term_pass2__VisitedCalls_14));
#line 600 "term_pass2.m"
            }
#line 2366 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 601 "term_pass2.m"
            {
#line 601 "term_pass2.m"
              mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_15, ((MR_Box) (transform_hlds__term_pass2__CurPPId_8)), &transform_hlds__term_pass2__conv0_NeighboursMap_24);
            }
#line 601 "term_pass2.m"
            transform_hlds__term_pass2__NeighboursMap_24 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighboursMap_24);
#line 602 "term_pass2.m"
            {
#line 602 "term_pass2.m"
              mercury__map__to_assoc_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_34_34, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighboursMap_24, &transform_hlds__term_pass2__NeighboursList_25);
            }
#line 603 "term_pass2.m"
            {
#line 603 "term_pass2.m"
              transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__NeighboursList_25, transform_hlds__term_pass2__LookforPPId_11, transform_hlds__term_pass2__ProcContext_12, transform_hlds__term_pass2__WeightSoFar1_17, transform_hlds__term_pass2__NewVisitedCalls_23, transform_hlds__term_pass2__CallWeights_15, transform_hlds__term_pass2__Cycles_16);
#line 603 "term_pass2.m"
              return;
            }
#line 600 "term_pass2.m"
          }
#line 598 "term_pass2.m"
      }
#line 576 "term_pass2.m"
  }
#line 569 "term_pass2.m"
}

#line 554 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__LookforPPId_2,
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__Context_3,
#line 554 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__WeightSoFar_4,
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__VisitedCalls_5,
#line 554 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_6,
#line 554 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__7_7)
#line 554 "term_pass2.m"
{
#line 559 "term_pass2.m"
  {
#line 559 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 559 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "term_pass2.m"
    else
#line 562 "term_pass2.m"
      {
#line 562 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Neighbour_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 562 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Neighbours_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 562 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles1_21;
#line 562 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles2_22;

#line 563 "term_pass2.m"
        {
#line 563 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_p_0(transform_hlds__term_pass2__Neighbour_13, transform_hlds__term_pass2__LookforPPId_2, transform_hlds__term_pass2__Context_3, transform_hlds__term_pass2__WeightSoFar_4, transform_hlds__term_pass2__VisitedCalls_5, transform_hlds__term_pass2__CallWeights_6, &transform_hlds__term_pass2__Cycles1_21);
        }
#line 565 "term_pass2.m"
        {
#line 565 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__Neighbours_14, transform_hlds__term_pass2__LookforPPId_2, transform_hlds__term_pass2__Context_3, transform_hlds__term_pass2__WeightSoFar_4, transform_hlds__term_pass2__VisitedCalls_5, transform_hlds__term_pass2__CallWeights_6, &transform_hlds__term_pass2__Cycles2_22);
        }
#line 567 "term_pass2.m"
        {
#line 567 "term_pass2.m"
          mercury__list__append_3_p_1((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__Cycles1_21, transform_hlds__term_pass2__Cycles2_22, transform_hlds__term_pass2__HeadVar__7_7);
#line 567 "term_pass2.m"
          return;
        }
#line 562 "term_pass2.m"
      }
#line 559 "term_pass2.m"
  }
#line 554 "term_pass2.m"
}

#line 529 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(
#line 529 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 529 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__CallWeights_2,
#line 529 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__3_3,
#line 529 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__4_4)
#line 529 "term_pass2.m"
{
#line 533 "term_pass2.m"
  {
#line 533 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 533 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "term_pass2.m"
      *transform_hlds__term_pass2__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "term_pass2.m"
    else
#line 535 "term_pass2.m"
      {
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_17_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 0)));
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__3_3, (MR_Integer) 1)));
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles1_12;
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Cycles2_13;
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__NeighboursMap_19;
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__NeighboursList_20;
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PredId_21;
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PredInfo_23;
#line 535 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Context_24;
#line 546 "term_pass2.m"
        MR_Box transform_hlds__term_pass2__conv0_NeighboursMap_19;
#line 548 "term_pass2.m"
        MR_Integer transform_hlds__term_pass2___ProcId_22;

#line 546 "term_pass2.m"
        {
#line 546 "term_pass2.m"
          mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_17_27, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_2, ((MR_Box) (transform_hlds__term_pass2__PPId_9)), &transform_hlds__term_pass2__conv0_NeighboursMap_19);
        }
#line 546 "term_pass2.m"
        transform_hlds__term_pass2__NeighboursMap_19 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighboursMap_19);
#line 547 "term_pass2.m"
        {
#line 547 "term_pass2.m"
          mercury__map__to_assoc_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_17_27, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighboursMap_19, &transform_hlds__term_pass2__NeighboursList_20);
        }
#line 548 "term_pass2.m"
        transform_hlds__term_pass2__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PPId_9, (MR_Integer) 0)));
#line 548 "term_pass2.m"
        transform_hlds__term_pass2___ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PPId_9, (MR_Integer) 1)));
#line 549 "term_pass2.m"
        {
#line 549 "term_pass2.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PredId_21, &transform_hlds__term_pass2__PredInfo_23);
        }
#line 550 "term_pass2.m"
        {
#line 550 "term_pass2.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass2__PredInfo_23, &transform_hlds__term_pass2__Context_24);
        }
#line 551 "term_pass2.m"
        {
#line 551 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_p_0(transform_hlds__term_pass2__NeighboursList_20, transform_hlds__term_pass2__PPId_9, transform_hlds__term_pass2__Context_24, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_pass2__CallWeights_2, &transform_hlds__term_pass2__Cycles1_12);
        }
#line 538 "term_pass2.m"
        {
#line 538 "term_pass2.m"
          transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__CallWeights_2, transform_hlds__term_pass2__PPIds_10, &transform_hlds__term_pass2__Cycles2_13);
        }
#line 540 "term_pass2.m"
        {
#line 540 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__Cycles1_12, transform_hlds__term_pass2__Cycles2_13);
        }
#line 535 "term_pass2.m"
      }
#line 533 "term_pass2.m"
  }
#line 529 "term_pass2.m"
}

#line 462 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__add_call_arcs_4_p_0(
#line 462 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 462 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 462 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3,
#line 462 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4)
#line 462 "term_pass2.m"
{
#line 465 "term_pass2.m"
  while (MR_TRUE)
#line 465 "term_pass2.m"
    {
#line 465 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 465 "term_pass2.m"
      {
#line 465 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;

#line 465 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_4 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3;
#line 465 "term_pass2.m"
        else
#line 466 "term_pass2.m"
          {
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Path_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Paths_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 0)));
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CallSite_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 1)));
#line 466 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__GammaConst_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 2)));
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__GammaVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 3)));
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__ActiveVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Path_9, (MR_Integer) 4)));
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CallPPId_20;
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Context_21;
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__InfCalls0_24;
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__CallWeights0_25;
#line 466 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46;

#line 472 "term_pass2.m"
            if ((transform_hlds__term_pass2__CallSite_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "term_pass2.m"
              {
#line 474 "term_pass2.m"
                {
#line 474 "term_pass2.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "no call site in path in stage 2");
#line 474 "term_pass2.m"
                  return;
                }
#line 473 "term_pass2.m"
              }
#line 472 "term_pass2.m"
            else
#line 469 "term_pass2.m"
              {
#line 469 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__CallSite_14, (MR_Integer) 0)));

#line 469 "term_pass2.m"
                transform_hlds__term_pass2__CallPPId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_40_40, (MR_Integer) 0)));
#line 469 "term_pass2.m"
                transform_hlds__term_pass2__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_40_40, (MR_Integer) 1)));
#line 469 "term_pass2.m"
              }
#line 478 "term_pass2.m"
            if ((transform_hlds__term_pass2__GammaVars_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "term_pass2.m"
              {
#line 477 "term_pass2.m"
              }
#line 478 "term_pass2.m"
            else
#line 479 "term_pass2.m"
              {
#line 480 "term_pass2.m"
                {
#line 480 "term_pass2.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.add_call_arcs\'/4", (MR_String) "gamma variables in path in stage 2");
#line 480 "term_pass2.m"
                  return;
                }
#line 479 "term_pass2.m"
              }
#line 482 "term_pass2.m"
            transform_hlds__term_pass2__InfCalls0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 0)));
#line 482 "term_pass2.m"
            transform_hlds__term_pass2__CallWeights0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3, (MR_Integer) 1)));
#line 483 "term_pass2.m"
            {
#line 483 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = mercury__bag__is_subbag_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_17, transform_hlds__term_pass2__HeadVar__2_2);
            }
#line 503 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 501 "term_pass2.m"
              {
#line 501 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CallWeights1_32;
#line 498 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__NeighbourMap0_26;
#line 484 "term_pass2.m"
                MR_Box transform_hlds__term_pass2__conv0_NeighbourMap0_26;

#line 484 "term_pass2.m"
                {
#line 484 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights0_25, ((MR_Box) (transform_hlds__term_pass2__PPId_13)), &transform_hlds__term_pass2__conv0_NeighbourMap0_26);
                }
#line 484 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 484 "term_pass2.m"
                  {
#line 484 "term_pass2.m"
                    transform_hlds__term_pass2__NeighbourMap0_26 = ((MR_Word) transform_hlds__term_pass2__conv0_NeighbourMap0_26);
#line 484 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 484 "term_pass2.m"
                  }
#line 498 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 496 "term_pass2.m"
                  {
#line 496 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__NeighbourMap_31;
#line 493 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__OldEdgeInfo_27;
#line 485 "term_pass2.m"
                    MR_Box transform_hlds__term_pass2__conv1_OldEdgeInfo_27;

#line 485 "term_pass2.m"
                    {
#line 485 "term_pass2.m"
                      transform_hlds__term_pass2__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], transform_hlds__term_pass2__NeighbourMap0_26, ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), &transform_hlds__term_pass2__conv1_OldEdgeInfo_27);
                    }
#line 485 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 485 "term_pass2.m"
                      {
#line 485 "term_pass2.m"
                        transform_hlds__term_pass2__OldEdgeInfo_27 = ((MR_Word) transform_hlds__term_pass2__conv1_OldEdgeInfo_27);
#line 485 "term_pass2.m"
                        transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 485 "term_pass2.m"
                      }
#line 493 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 486 "term_pass2.m"
                      {
#line 486 "term_pass2.m"
                        MR_Integer transform_hlds__term_pass2__OldWeight_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__OldEdgeInfo_27, (MR_Integer) 1)));
#line 486 "term_pass2.m"
                        MR_Word transform_hlds__term_pass2__EdgeInfo_30;
#line 486 "term_pass2.m"
                        MR_Word transform_hlds__term_pass2___OldContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__OldEdgeInfo_27, (MR_Integer) 0)));

#line 487 "term_pass2.m"
                        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__OldWeight_29 >= transform_hlds__term_pass2__GammaConst_15);
#line 489 "term_pass2.m"
                        if (transform_hlds__term_pass2__succeeded)
#line 488 "term_pass2.m"
                          transform_hlds__term_pass2__EdgeInfo_30 = transform_hlds__term_pass2__OldEdgeInfo_27;
#line 489 "term_pass2.m"
                        else
#line 490 "term_pass2.m"
                          {
#line 490 "term_pass2.m"
                            transform_hlds__term_pass2__EdgeInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 490 "term_pass2.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__EdgeInfo_30, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 490 "term_pass2.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__EdgeInfo_30, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
#line 490 "term_pass2.m"
                          }
#line 492 "term_pass2.m"
                        {
#line 492 "term_pass2.m"
                          mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__EdgeInfo_30)), transform_hlds__term_pass2__NeighbourMap0_26, &transform_hlds__term_pass2__NeighbourMap_31);
                        }
#line 486 "term_pass2.m"
                      }
#line 493 "term_pass2.m"
                    else
#line 494 "term_pass2.m"
                      {
#line 494 "term_pass2.m"
                        MR_Word transform_hlds__term_pass2__V_44_44;

#line 494 "term_pass2.m"
                        {
#line 494 "term_pass2.m"
                          transform_hlds__term_pass2__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "term_pass2.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_44_44, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 494 "term_pass2.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_44_44, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
#line 494 "term_pass2.m"
                        }
#line 494 "term_pass2.m"
                        {
#line 494 "term_pass2.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__V_44_44)), transform_hlds__term_pass2__NeighbourMap0_26, &transform_hlds__term_pass2__NeighbourMap_31);
                        }
#line 494 "term_pass2.m"
                      }
#line 497 "term_pass2.m"
                    {
#line 497 "term_pass2.m"
                      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__PPId_13)), ((MR_Box) (transform_hlds__term_pass2__NeighbourMap_31)), transform_hlds__term_pass2__CallWeights0_25, &transform_hlds__term_pass2__CallWeights1_32);
                    }
#line 496 "term_pass2.m"
                  }
#line 498 "term_pass2.m"
                else
#line 499 "term_pass2.m"
                  {
#line 499 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 499 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_45_45;
#line 499 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__NeighbourMap_50;

#line 499 "term_pass2.m"
                    {
#line 499 "term_pass2.m"
                      transform_hlds__term_pass2__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "term_pass2.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_45_45, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 499 "term_pass2.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_45_45, 1) = ((MR_Box) (transform_hlds__term_pass2__GammaConst_15));
#line 499 "term_pass2.m"
                    }
#line 499 "term_pass2.m"
                    {
#line 499 "term_pass2.m"
                      transform_hlds__term_pass2__NeighbourMap_50 = mercury__map__singleton_2_f_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[0], ((MR_Box) (transform_hlds__term_pass2__CallPPId_20)), ((MR_Box) (transform_hlds__term_pass2__V_45_45)));
                    }
#line 500 "term_pass2.m"
                    {
#line 500 "term_pass2.m"
                      mercury__map__det_insert_4_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], ((MR_Box) (transform_hlds__term_pass2__PPId_13)), ((MR_Box) (transform_hlds__term_pass2__NeighbourMap_50)), transform_hlds__term_pass2__CallWeights0_25, &transform_hlds__term_pass2__CallWeights1_32);
                    }
#line 499 "term_pass2.m"
                  }
#line 502 "term_pass2.m"
                {
#line 502 "term_pass2.m"
                  transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 502 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCalls0_24));
#line 502 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeights1_32));
#line 502 "term_pass2.m"
                }
#line 501 "term_pass2.m"
              }
#line 503 "term_pass2.m"
            else
#line 504 "term_pass2.m"
              {
#line 504 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__InfCall_33;
#line 504 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__InfCalls1_34;
#line 504 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_47_47;

#line 504 "term_pass2.m"
                {
#line 504 "term_pass2.m"
                  transform_hlds__term_pass2__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 504 "term_pass2.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 504 "term_pass2.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 1) = ((MR_Box) (transform_hlds__term_pass2__PPId_13));
#line 504 "term_pass2.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__term_pass2__V_47_47, 2) = ((MR_Box) (transform_hlds__term_pass2__CallPPId_20));
#line 504 "term_pass2.m"
                }
#line 504 "term_pass2.m"
                {
#line 504 "term_pass2.m"
                  transform_hlds__term_pass2__InfCall_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 504 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__InfCall_33, 0) = ((MR_Box) (transform_hlds__term_pass2__Context_21));
#line 504 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__InfCall_33, 1) = ((MR_Box) (transform_hlds__term_pass2__V_47_47));
#line 504 "term_pass2.m"
                }
#line 505 "term_pass2.m"
                {
#line 505 "term_pass2.m"
                  transform_hlds__term_pass2__InfCalls1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "term_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__InfCalls1_34, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCall_33));
#line 505 "term_pass2.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__InfCalls1_34, 1) = ((MR_Box) (transform_hlds__term_pass2__InfCalls0_24));
#line 505 "term_pass2.m"
                }
#line 506 "term_pass2.m"
                {
#line 506 "term_pass2.m"
                  transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 506 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 0) = ((MR_Box) (transform_hlds__term_pass2__InfCalls1_34));
#line 506 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeights0_25));
#line 506 "term_pass2.m"
                }
#line 504 "term_pass2.m"
              }
#line 508 "term_pass2.m"
            /* direct tailcall eliminated */
#line 508 "term_pass2.m"
            {
#line 508 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__HeadVar__1__tmp_copy_1 = transform_hlds__term_pass2__Paths_10;
#line 508 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0__tmp_copy_3 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_46_46;

#line 508 "term_pass2.m"
              transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0_3 = transform_hlds__term_pass2__STATE_VARIABLE_CallInfo_0__tmp_copy_3;
#line 508 "term_pass2.m"
              transform_hlds__term_pass2__HeadVar__1_1 = transform_hlds__term_pass2__HeadVar__1__tmp_copy_1;
#line 508 "term_pass2.m"
            }
#line 508 "term_pass2.m"
            continue;
#line 466 "term_pass2.m"
          }
#line 465 "term_pass2.m"
      }
#line 465 "term_pass2.m"
      break;
#line 465 "term_pass2.m"
    }
#line 462 "term_pass2.m"
}

#line 411 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ActiveVars_2,
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 411 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 411 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6,
#line 411 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7)
#line 411 "term_pass2.m"
{
#line 415 "term_pass2.m"
  {
#line 415 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 415 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "term_pass2.m"
      if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "term_pass2.m"
        {
#line 415 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7 = transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6;
#line 415 "term_pass2.m"
        }
#line 415 "term_pass2.m"
      else
#line 418 "term_pass2.m"
        {
#line 418 "term_pass2.m"
          *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "term_pass2.m"
          {
#line 419 "term_pass2.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
#line 419 "term_pass2.m"
            return;
          }
#line 418 "term_pass2.m"
        }
#line 415 "term_pass2.m"
    else
#line 415 "term_pass2.m"
      {
#line 415 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 415 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));

#line 415 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "term_pass2.m"
          {
#line 416 "term_pass2.m"
            *transform_hlds__term_pass2__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "term_pass2.m"
            {
#line 417 "term_pass2.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.update_rec_input_suppliers\'/7", (MR_String) "unmatched variables");
#line 417 "term_pass2.m"
              return;
            }
#line 416 "term_pass2.m"
          }
#line 415 "term_pass2.m"
        else
#line 422 "term_pass2.m"
          {
#line 422 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSupplier0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 0)));
#line 422 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSuppliers0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 1)));
#line 422 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSupplier_37;
#line 422 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecInputSuppliers_38;
#line 422 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42;

#line 426 "term_pass2.m"
#line 426 "term_pass2.m"
            switch (transform_hlds__term_pass2__RecInputSupplier0_35) {
#line 426 "term_pass2.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 426 "term_pass2.m"
              case (MR_Integer) 0:
#line 427 "term_pass2.m"
                transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42 = transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6;
#line 426 "term_pass2.m"
                break;
#line 426 "term_pass2.m"
              case (MR_Integer) 1:
#line 424 "term_pass2.m"
                {
#line 425 "term_pass2.m"
                  {
#line 425 "term_pass2.m"
                    mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], ((MR_Box) (transform_hlds__term_pass2__V_48_48)), transform_hlds__term_pass2__STATE_VARIABLE_RecBag_0_6, &transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42);
                  }
#line 424 "term_pass2.m"
                }
#line 426 "term_pass2.m"
                break;
#line 426 "term_pass2.m"
            }
#line 438 "term_pass2.m"
#line 438 "term_pass2.m"
            switch (transform_hlds__term_pass2__FixDir_3) {
#line 438 "term_pass2.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 438 "term_pass2.m"
              case (MR_Integer) 1:
#line 430 "term_pass2.m"
                {
#line 433 "term_pass2.m"
                  {
#line 433 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_2, ((MR_Box) (transform_hlds__term_pass2__V_48_48)));
                  }
#line 430 "term_pass2.m"
                  if (transform_hlds__term_pass2__succeeded)
#line 434 "term_pass2.m"
                    transform_hlds__term_pass2__RecInputSupplier_37 = transform_hlds__term_pass2__RecInputSupplier0_35;
#line 430 "term_pass2.m"
                  else
#line 436 "term_pass2.m"
                    transform_hlds__term_pass2__RecInputSupplier_37 = (MR_Integer) 0;
#line 430 "term_pass2.m"
                }
#line 438 "term_pass2.m"
                break;
#line 438 "term_pass2.m"
              case (MR_Integer) 0:
#line 439 "term_pass2.m"
                {
#line 442 "term_pass2.m"
                  {
#line 442 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = mercury__bag__contains_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__ActiveVars_2, ((MR_Box) (transform_hlds__term_pass2__V_48_48)));
                  }
#line 439 "term_pass2.m"
                  if (transform_hlds__term_pass2__succeeded)
#line 443 "term_pass2.m"
                    transform_hlds__term_pass2__RecInputSupplier_37 = (MR_Integer) 1;
#line 439 "term_pass2.m"
                  else
#line 445 "term_pass2.m"
                    transform_hlds__term_pass2__RecInputSupplier_37 = transform_hlds__term_pass2__RecInputSupplier0_35;
#line 439 "term_pass2.m"
                }
#line 438 "term_pass2.m"
                break;
#line 438 "term_pass2.m"
            }
#line 448 "term_pass2.m"
            {
#line 448 "term_pass2.m"
              transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(transform_hlds__term_pass2__V_47_47, transform_hlds__term_pass2__ActiveVars_2, transform_hlds__term_pass2__FixDir_3, transform_hlds__term_pass2__RecInputSuppliers0_36, &transform_hlds__term_pass2__RecInputSuppliers_38, transform_hlds__term_pass2__STATE_VARIABLE_RecBag_42_42, transform_hlds__term_pass2__STATE_VARIABLE_RecBag_7);
            }
#line 422 "term_pass2.m"
            {
#line 422 "term_pass2.m"
              MR_Word base;
#line 422 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__5_5 = base;
#line 422 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__RecInputSupplier_37));
#line 422 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RecInputSuppliers_38));
#line 422 "term_pass2.m"
            }
#line 422 "term_pass2.m"
          }
#line 415 "term_pass2.m"
      }
#line 415 "term_pass2.m"
  }
#line 411 "term_pass2.m"
}

#line 387 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2(
#line 387 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg)
#line 387 "term_pass2.m"
{
#line 387 "term_pass2.m"
  {
#line 387 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 387 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;

#line 387 "term_pass2.m"
    {
#line 387 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__387__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 4))));
    }
#line 387 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 387 "term_pass2.m"
  }
#line 387 "term_pass2.m"
}

#line 404 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1(
#line 404 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg)
#line 404 "term_pass2.m"
{
#line 404 "term_pass2.m"
  {
#line 404 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;
#line 404 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;

#line 404 "term_pass2.m"
    {
#line 404 "term_pass2.m"
      return transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__404__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 4))));
    }
#line 404 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 404 "term_pass2.m"
  }
#line 404 "term_pass2.m"
}

#line 361 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_2,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_3,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__4_4,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap_5,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__6_6,
#line 361 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__7_7,
#line 361 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__8_8)
#line 361 "term_pass2.m"
{
#line 365 "term_pass2.m"
  while (MR_TRUE)
#line 365 "term_pass2.m"
    {
#line 365 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 365 "term_pass2.m"
      {
#line 365 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;

#line 365 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "term_pass2.m"
          {
#line 366 "term_pass2.m"
            MR_Word base;
#line 366 "term_pass2.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "term_pass2.m"
            *transform_hlds__term_pass2__HeadVar__8_8 = base;
#line 366 "term_pass2.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_pass2__HeadVar__7_7));
#line 366 "term_pass2.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_pass2__HeadVar__6_6));
#line 366 "term_pass2.m"
          }
#line 365 "term_pass2.m"
        else
#line 368 "term_pass2.m"
          {
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_62_62;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeInfo_63_63;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__TypeCtorInfo_64_64;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 0)));
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__4_4, (MR_Integer) 1)));
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PredInfo_24;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__ProcInfo_25;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Context_26;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Goal0_27;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Goal_28;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__VarTypes_29;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__EmptyMap_30;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__FunctorInfo_31;
#line 368 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__MaxErrors_32;
#line 368 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__MaxPaths_33;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Params_34;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PathSet0_35;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Info0_36;
#line 368 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Info_37;

#line 369 "term_pass2.m"
            {
#line 369 "term_pass2.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPId_18, &transform_hlds__term_pass2__PredInfo_24, &transform_hlds__term_pass2__ProcInfo_25);
            }
#line 370 "term_pass2.m"
            {
#line 370 "term_pass2.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_pass2__PredInfo_24, &transform_hlds__term_pass2__Context_26);
            }
#line 371 "term_pass2.m"
            {
#line 371 "term_pass2.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__term_pass2__ProcInfo_25, &transform_hlds__term_pass2__Goal0_27);
            }
#line 376 "term_pass2.m"
            {
#line 376 "term_pass2.m"
              transform_hlds__term_pass2__Goal_28 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(transform_hlds__term_pass2__Goal0_27);
            }
#line 377 "term_pass2.m"
            {
#line 377 "term_pass2.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_pass2__ProcInfo_25, &transform_hlds__term_pass2__VarTypes_29);
            }
#line 3279 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 3281 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_63_63 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0];
#line 378 "term_pass2.m"
            {
#line 378 "term_pass2.m"
              mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, transform_hlds__term_pass2__TypeInfo_63_63, &transform_hlds__term_pass2__EmptyMap_30);
            }
#line 379 "term_pass2.m"
            transform_hlds__term_pass2__FunctorInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_2, (MR_Integer) 0)));
#line 379 "term_pass2.m"
            transform_hlds__term_pass2__MaxErrors_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_2, (MR_Integer) 1)));
#line 379 "term_pass2.m"
            transform_hlds__term_pass2__MaxPaths_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_2, (MR_Integer) 2)));
#line 380 "term_pass2.m"
            {
#line 380 "term_pass2.m"
              transform_hlds__term_traversal__init_term_traversal_params_9_p_0(transform_hlds__term_pass2__FunctorInfo_31, transform_hlds__term_pass2__PPId_18, transform_hlds__term_pass2__Context_26, transform_hlds__term_pass2__VarTypes_29, transform_hlds__term_pass2__EmptyMap_30, transform_hlds__term_pass2__RecSupplierMap_5, transform_hlds__term_pass2__MaxErrors_32, transform_hlds__term_pass2__MaxPaths_33, &transform_hlds__term_pass2__Params_34);
            }
#line 3299 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_64_64 = (MR_Word) &transform_hlds__term_traversal__transform_hlds__term_traversal__type_ctor_info_term_path_info_0;
#line 382 "term_pass2.m"
            {
#line 382 "term_pass2.m"
              mercury__set__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_64_64, &transform_hlds__term_pass2__PathSet0_35);
            }
#line 383 "term_pass2.m"
            {
#line 383 "term_pass2.m"
              transform_hlds__term_pass2__Info0_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 383 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info0_36, 0) = ((MR_Box) (transform_hlds__term_pass2__PathSet0_35));
#line 383 "term_pass2.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info0_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 383 "term_pass2.m"
            }
#line 384 "term_pass2.m"
            {
#line 384 "term_pass2.m"
              transform_hlds__term_traversal__term_traverse_goal_5_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__Params_34, transform_hlds__term_pass2__Goal_28, transform_hlds__term_pass2__Info0_36, &transform_hlds__term_pass2__Info_37);
            }
#line 402 "term_pass2.m"
            if (((MR_tag((MR_Word) transform_hlds__term_pass2__Info_37)) == (MR_mktag((MR_Integer) 1))))
#line 403 "term_pass2.m"
              {
#line 403 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__Errors_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Info_37, (MR_Integer) 0)));
#line 403 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_51_51;
#line 403 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CanLoop_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Info_37, (MR_Integer) 1)));

#line 404 "term_pass2.m"
                {
#line 404 "term_pass2.m"
                  transform_hlds__term_pass2__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 404 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[2]));
#line 404 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_1));
#line 404 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 404 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_51_51, 4) = ((MR_Box) (transform_hlds__term_pass2__CanLoop_61));
#line 404 "term_pass2.m"
                }
#line 404 "term_pass2.m"
                {
#line 404 "term_pass2.m"
                  mercury__require__expect_4_p_0(transform_hlds__term_pass2__V_51_51, (MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/8", (MR_String) "can_loop detected in pass2 but not pass1");
                }
#line 406 "term_pass2.m"
                {
#line 406 "term_pass2.m"
                  MR_Word base;
#line 406 "term_pass2.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "term_pass2.m"
                  *transform_hlds__term_pass2__HeadVar__8_8 = base;
#line 406 "term_pass2.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__Errors_49));
#line 406 "term_pass2.m"
                }
#line 403 "term_pass2.m"
              }
#line 402 "term_pass2.m"
            else
#line 386 "term_pass2.m"
              {
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__Paths_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info_37, (MR_Integer) 0)));
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CanLoop_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Info_37, (MR_Integer) 1)));
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__PathList_40;
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__ActiveVars_41;
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__RecSuppliers0_42;
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__Args_43;
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__EmptyBag_44;
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__RecSuppliers_45;
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__RecSuppliers0Bag_46;
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__NewRecSupplierMap1_47;
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__CallInfo1_48;
#line 386 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_56_56;
#line 391 "term_pass2.m"
                MR_Box transform_hlds__term_pass2__conv0_RecSuppliers0_42;

#line 387 "term_pass2.m"
                {
#line 387 "term_pass2.m"
                  transform_hlds__term_pass2__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 387 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_5[2]));
#line 387 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 1) = ((MR_Box) (transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0_2));
#line 387 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 387 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 3) = ((MR_Box) (transform_hlds__term_pass2__CanLoop_39));
#line 387 "term_pass2.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__V_56_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "term_pass2.m"
                }
#line 387 "term_pass2.m"
                {
#line 387 "term_pass2.m"
                  mercury__require__expect_4_p_0(transform_hlds__term_pass2__V_56_56, (MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_pass\'/8", (MR_String) "can_loop detected in pass2 but not pass1");
                }
#line 389 "term_pass2.m"
                {
#line 389 "term_pass2.m"
                  mercury__set__to_sorted_list_2_p_0(transform_hlds__term_pass2__TypeCtorInfo_64_64, transform_hlds__term_pass2__Paths_38, &transform_hlds__term_pass2__PathList_40);
                }
#line 390 "term_pass2.m"
                {
#line 390 "term_pass2.m"
                  transform_hlds__term_traversal__upper_bound_active_vars_2_p_0(transform_hlds__term_pass2__PathList_40, &transform_hlds__term_pass2__ActiveVars_41);
                }
#line 391 "term_pass2.m"
                {
#line 391 "term_pass2.m"
                  mercury__map__lookup_3_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, transform_hlds__term_pass2__TypeInfo_63_63, transform_hlds__term_pass2__RecSupplierMap_5, ((MR_Box) (transform_hlds__term_pass2__PPId_18)), &transform_hlds__term_pass2__conv0_RecSuppliers0_42);
                }
#line 391 "term_pass2.m"
                transform_hlds__term_pass2__RecSuppliers0_42 = ((MR_Word) transform_hlds__term_pass2__conv0_RecSuppliers0_42);
#line 392 "term_pass2.m"
                {
#line 392 "term_pass2.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_25, &transform_hlds__term_pass2__Args_43);
                }
#line 393 "term_pass2.m"
                {
#line 393 "term_pass2.m"
                  mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], &transform_hlds__term_pass2__EmptyBag_44);
                }
#line 394 "term_pass2.m"
                {
#line 394 "term_pass2.m"
                  transform_hlds__term_pass2__update_rec_input_suppliers_7_p_0(transform_hlds__term_pass2__Args_43, transform_hlds__term_pass2__ActiveVars_41, transform_hlds__term_pass2__FixDir_3, transform_hlds__term_pass2__RecSuppliers0_42, &transform_hlds__term_pass2__RecSuppliers_45, transform_hlds__term_pass2__EmptyBag_44, &transform_hlds__term_pass2__RecSuppliers0Bag_46);
                }
#line 397 "term_pass2.m"
                {
#line 397 "term_pass2.m"
                  mercury__map__det_insert_4_p_0(transform_hlds__term_pass2__TypeCtorInfo_62_62, transform_hlds__term_pass2__TypeInfo_63_63, ((MR_Box) (transform_hlds__term_pass2__PPId_18)), ((MR_Box) (transform_hlds__term_pass2__RecSuppliers_45)), transform_hlds__term_pass2__HeadVar__6_6, &transform_hlds__term_pass2__NewRecSupplierMap1_47);
                }
#line 399 "term_pass2.m"
                {
#line 399 "term_pass2.m"
                  transform_hlds__term_pass2__add_call_arcs_4_p_0(transform_hlds__term_pass2__PathList_40, transform_hlds__term_pass2__RecSuppliers0Bag_46, transform_hlds__term_pass2__HeadVar__7_7, &transform_hlds__term_pass2__CallInfo1_48);
                }
#line 400 "term_pass2.m"
                /* direct tailcall eliminated */
#line 400 "term_pass2.m"
                {
#line 400 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVar__4__tmp_copy_4 = transform_hlds__term_pass2__PPIds_19;
#line 400 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVar__6__tmp_copy_6 = transform_hlds__term_pass2__NewRecSupplierMap1_47;
#line 400 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVar__7__tmp_copy_7 = transform_hlds__term_pass2__CallInfo1_48;

#line 400 "term_pass2.m"
                  transform_hlds__term_pass2__HeadVar__7_7 = transform_hlds__term_pass2__HeadVar__7__tmp_copy_7;
#line 400 "term_pass2.m"
                  transform_hlds__term_pass2__HeadVar__6_6 = transform_hlds__term_pass2__HeadVar__6__tmp_copy_6;
#line 400 "term_pass2.m"
                  transform_hlds__term_pass2__HeadVar__4_4 = transform_hlds__term_pass2__HeadVar__4__tmp_copy_4;
#line 400 "term_pass2.m"
                }
#line 400 "term_pass2.m"
                continue;
#line 386 "term_pass2.m"
              }
#line 368 "term_pass2.m"
          }
#line 365 "term_pass2.m"
      }
#line 365 "term_pass2.m"
      break;
#line 365 "term_pass2.m"
    }
#line 361 "term_pass2.m"
}

#line 330 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_8,
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__FixDir_9,
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_10,
#line 330 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RecSupplierMap0_11,
#line 330 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Result_12)
#line 330 "term_pass2.m"
{
#line 335 "term_pass2.m"
  while (MR_TRUE)
#line 335 "term_pass2.m"
    {
#line 335 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 335 "term_pass2.m"
      {
#line 335 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;
#line 335 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 335 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__NewRecSupplierMap0_13;
#line 335 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__CallWeightGraph0_14;
#line 335 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__CallInfo0_15;
#line 335 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__Result1_16;

#line 336 "term_pass2.m"
        {
#line 336 "term_pass2.m"
          mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], &transform_hlds__term_pass2__NewRecSupplierMap0_13);
        }
#line 337 "term_pass2.m"
        {
#line 337 "term_pass2.m"
          mercury__map__init_1_p_0(transform_hlds__term_pass2__TypeCtorInfo_21_21, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], &transform_hlds__term_pass2__CallWeightGraph0_14);
        }
#line 338 "term_pass2.m"
        {
#line 338 "term_pass2.m"
          transform_hlds__term_pass2__CallInfo0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo0_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo0_15, 1) = ((MR_Box) (transform_hlds__term_pass2__CallWeightGraph0_14));
#line 338 "term_pass2.m"
        }
#line 339 "term_pass2.m"
        {
#line 339 "term_pass2.m"
          transform_hlds__term_pass2__prove_termination_in_scc_pass_8_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__PassInfo_8, transform_hlds__term_pass2__FixDir_9, transform_hlds__term_pass2__SCC_10, transform_hlds__term_pass2__RecSupplierMap0_11, transform_hlds__term_pass2__NewRecSupplierMap0_13, transform_hlds__term_pass2__CallInfo0_15, &transform_hlds__term_pass2__Result1_16);
        }
#line 351 "term_pass2.m"
        if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result1_16)) == (MR_mktag((MR_Integer) 1))))
#line 353 "term_pass2.m"
          *transform_hlds__term_pass2__Result_12 = transform_hlds__term_pass2__Result1_16;
#line 351 "term_pass2.m"
        else
#line 342 "term_pass2.m"
          {
#line 342 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RecSupplierMap1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result1_16, (MR_Integer) 1)));
#line 342 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result1_16, (MR_Integer) 0)));

#line 343 "term_pass2.m"
            {
#line 343 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_2[4], ((MR_Box) (transform_hlds__term_pass2__RecSupplierMap1_18)), ((MR_Box) (transform_hlds__term_pass2__RecSupplierMap0_11)));
            }
#line 347 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 346 "term_pass2.m"
              *transform_hlds__term_pass2__Result_12 = transform_hlds__term_pass2__Result1_16;
#line 347 "term_pass2.m"
            else
#line 348 "term_pass2.m"
              {
#line 348 "term_pass2.m"
                /* direct tailcall eliminated */
#line 348 "term_pass2.m"
                {
#line 348 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__RecSupplierMap0__tmp_copy_11 = transform_hlds__term_pass2__RecSupplierMap1_18;

#line 348 "term_pass2.m"
                  transform_hlds__term_pass2__RecSupplierMap0_11 = transform_hlds__term_pass2__RecSupplierMap0__tmp_copy_11;
#line 348 "term_pass2.m"
                }
#line 348 "term_pass2.m"
                continue;
#line 348 "term_pass2.m"
              }
#line 342 "term_pass2.m"
          }
#line 335 "term_pass2.m"
      }
#line 335 "term_pass2.m"
      break;
#line 335 "term_pass2.m"
    }
#line 330 "term_pass2.m"
}

#line 279 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0_1(
#line 279 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 279 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 279 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
#line 279 "term_pass2.m"
{
#line 279 "term_pass2.m"
  {
#line 279 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
#line 279 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__2_23;

#line 279 "term_pass2.m"
    {
#line 279 "term_pass2.m"
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__279__1_2_p_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__2_23);
    }
#line 279 "term_pass2.m"
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__2_23));
#line 279 "term_pass2.m"
  }
#line 279 "term_pass2.m"
}

#line 271 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(
#line 271 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 271 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 271 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3,
#line 271 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4)
#line 271 "term_pass2.m"
{
#line 274 "term_pass2.m"
  while (MR_TRUE)
#line 274 "term_pass2.m"
    {
#line 274 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 274 "term_pass2.m"
      {
#line 274 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;

#line 274 "term_pass2.m"
        if ((transform_hlds__term_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "term_pass2.m"
          *transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_4 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3;
#line 274 "term_pass2.m"
        else
#line 276 "term_pass2.m"
          {
#line 276 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__PPIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__ProcInfo_14;
#line 276 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__HeadVars_15;
#line 276 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__BoolList_16;
#line 276 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20;
#line 277 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_13_13;

#line 277 "term_pass2.m"
            {
#line 277 "term_pass2.m"
              hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPId_10, &transform_hlds__term_pass2__V_13_13, &transform_hlds__term_pass2__ProcInfo_14);
            }
#line 278 "term_pass2.m"
            {
#line 278 "term_pass2.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_14, &transform_hlds__term_pass2__HeadVars_15);
            }
#line 279 "term_pass2.m"
            {
#line 279 "term_pass2.m"
              mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[6], transform_hlds__term_pass2__HeadVars_15, &transform_hlds__term_pass2__BoolList_16);
            }
#line 280 "term_pass2.m"
            {
#line 280 "term_pass2.m"
              mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass2__PPId_10)), ((MR_Box) (transform_hlds__term_pass2__BoolList_16)), transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3, &transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20);
            }
#line 281 "term_pass2.m"
            /* direct tailcall eliminated */
#line 281 "term_pass2.m"
            {
#line 281 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__HeadVar__2__tmp_copy_2 = transform_hlds__term_pass2__PPIds_11;
#line 281 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0__tmp_copy_3 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_20_20;

#line 281 "term_pass2.m"
              transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0_3 = transform_hlds__term_pass2__STATE_VARIABLE_RecSupplierMap_0__tmp_copy_3;
#line 281 "term_pass2.m"
              transform_hlds__term_pass2__HeadVar__2_2 = transform_hlds__term_pass2__HeadVar__2__tmp_copy_2;
#line 281 "term_pass2.m"
            }
#line 281 "term_pass2.m"
            continue;
#line 276 "term_pass2.m"
          }
#line 274 "term_pass2.m"
      }
#line 274 "term_pass2.m"
      break;
#line 274 "term_pass2.m"
    }
#line 271 "term_pass2.m"
}

#line 248 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0_1(
#line 248 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 248 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 248 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
#line 248 "term_pass2.m"
{
#line 248 "term_pass2.m"
  {
#line 248 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
#line 248 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__2_20;

#line 248 "term_pass2.m"
    {
#line 248 "term_pass2.m"
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__248__1_2_p_0(((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__2_20);
    }
#line 248 "term_pass2.m"
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__2_20));
#line 248 "term_pass2.m"
  }
#line 248 "term_pass2.m"
}

#line 239 "term_pass2.m"
static MR_bool MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(
#line 239 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_5,
#line 239 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 239 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum_8,
#line 239 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__BoolList_9)
#line 239 "term_pass2.m"
{
#line 243 "term_pass2.m"
  {
#line 243 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 243 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Mode_6;
#line 243 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__Modes_7;

#line 242 "term_pass2.m"
    if (transform_hlds__term_pass2__succeeded)
#line 242 "term_pass2.m"
      {
#line 242 "term_pass2.m"
        transform_hlds__term_pass2__Mode_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 242 "term_pass2.m"
        transform_hlds__term_pass2__Modes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "term_pass2.m"
        {
#line 245 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Mode_6);
        }
#line 245 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 246 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__ArgNum_8 == (MR_Integer) 1);
#line 250 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 248 "term_pass2.m"
          {
#line 248 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__BoolListTail_10;

#line 248 "term_pass2.m"
            {
#line 248 "term_pass2.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[5], transform_hlds__term_pass2__Modes_7, &transform_hlds__term_pass2__BoolListTail_10);
            }
#line 249 "term_pass2.m"
            {
#line 249 "term_pass2.m"
              MR_Word base;
#line 249 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "term_pass2.m"
              *transform_hlds__term_pass2__BoolList_9 = base;
#line 249 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
#line 249 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__BoolListTail_10));
#line 249 "term_pass2.m"
            }
#line 248 "term_pass2.m"
            transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 248 "term_pass2.m"
          }
#line 250 "term_pass2.m"
        else
#line 267 "term_pass2.m"
          {
#line 267 "term_pass2.m"
            MR_Integer transform_hlds__term_pass2__NextArgNum_11;
#line 267 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_16_16;
#line 267 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__BoolListTail_17;

#line 252 "term_pass2.m"
            {
#line 252 "term_pass2.m"
              transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Mode_6);
            }
#line 255 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 254 "term_pass2.m"
              {
#line 254 "term_pass2.m"
                transform_hlds__term_pass2__NextArgNum_11 = transform_hlds__term_pass2__ArgNum_8;
#line 254 "term_pass2.m"
                transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 254 "term_pass2.m"
              }
#line 255 "term_pass2.m"
            else
#line 260 "term_pass2.m"
              {
#line 260 "term_pass2.m"
                MR_Integer transform_hlds__term_pass2__V_14_14;
#line 260 "term_pass2.m"
                MR_Integer transform_hlds__term_pass2__V_15_15;

#line 256 "term_pass2.m"
                {
#line 256 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Mode_6);
                }
#line 260 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 260 "term_pass2.m"
                  {
#line 257 "term_pass2.m"
                    transform_hlds__term_pass2__V_14_14 = (MR_Integer) 1;
#line 257 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__ArgNum_8 > transform_hlds__term_pass2__V_14_14);
#line 260 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 260 "term_pass2.m"
                      {
#line 259 "term_pass2.m"
                        transform_hlds__term_pass2__V_15_15 = (MR_Integer) 1;
#line 259 "term_pass2.m"
                        transform_hlds__term_pass2__NextArgNum_11 = (transform_hlds__term_pass2__ArgNum_8 - transform_hlds__term_pass2__V_15_15);
#line 259 "term_pass2.m"
                        transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 260 "term_pass2.m"
                      }
#line 260 "term_pass2.m"
                  }
#line 260 "term_pass2.m"
              }
#line 267 "term_pass2.m"
            if (transform_hlds__term_pass2__succeeded)
#line 267 "term_pass2.m"
              {
#line 264 "term_pass2.m"
                {
#line 264 "term_pass2.m"
                  transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(transform_hlds__term_pass2__ModuleInfo_5, transform_hlds__term_pass2__Modes_7, transform_hlds__term_pass2__NextArgNum_11, &transform_hlds__term_pass2__BoolListTail_17);
                }
#line 267 "term_pass2.m"
                if (transform_hlds__term_pass2__succeeded)
#line 267 "term_pass2.m"
                  {
#line 266 "term_pass2.m"
                    transform_hlds__term_pass2__V_16_16 = (MR_Integer) 0;
#line 266 "term_pass2.m"
                    {
#line 266 "term_pass2.m"
                      MR_Word base;
#line 266 "term_pass2.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "term_pass2.m"
                      *transform_hlds__term_pass2__BoolList_9 = base;
#line 266 "term_pass2.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__V_16_16));
#line 266 "term_pass2.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__BoolListTail_17));
#line 266 "term_pass2.m"
                    }
#line 266 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 267 "term_pass2.m"
                  }
#line 267 "term_pass2.m"
              }
#line 267 "term_pass2.m"
          }
#line 242 "term_pass2.m"
      }
#line 243 "term_pass2.m"
    return transform_hlds__term_pass2__succeeded;
#line 243 "term_pass2.m"
  }
#line 239 "term_pass2.m"
}

#line 202 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(
#line 202 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_7,
#line 202 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_8,
#line 202 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__TrialPPId_9,
#line 202 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__RestSCC_10,
#line 202 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__ArgNum0_11,
#line 202 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Terminates_12)
#line 202 "term_pass2.m"
{
#line 222 "term_pass2.m"
  while (MR_TRUE)
#line 222 "term_pass2.m"
    {
#line 222 "term_pass2.m"
      /* tailcall optimized into a loop */
#line 222 "term_pass2.m"
      {
#line 222 "term_pass2.m"
        MR_bool transform_hlds__term_pass2__succeeded;
#line 222 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__InitRecSuppliers_13;
#line 230 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeCtorInfo_16_31;
#line 230 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TypeInfo_17_32;
#line 230 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ProcInfo_27;
#line 230 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ArgModes_28;
#line 230 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__TrialPPIdRecSuppliers_29;
#line 230 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__RecSupplierMap0_30;
#line 231 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_26_26;

#line 231 "term_pass2.m"
        {
#line 231 "term_pass2.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__TrialPPId_9, &transform_hlds__term_pass2__V_26_26, &transform_hlds__term_pass2__ProcInfo_27);
        }
#line 232 "term_pass2.m"
        {
#line 232 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass2__ProcInfo_27, &transform_hlds__term_pass2__ArgModes_28);
        }
#line 233 "term_pass2.m"
        {
#line 233 "term_pass2.m"
          transform_hlds__term_pass2__succeeded = transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__ArgModes_28, transform_hlds__term_pass2__ArgNum0_11, &transform_hlds__term_pass2__TrialPPIdRecSuppliers_29);
        }
#line 230 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 230 "term_pass2.m"
          {
#line 4007 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeCtorInfo_16_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 4009 "transform_hlds.term_pass2.c"
            transform_hlds__term_pass2__TypeInfo_17_32 = (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0];
#line 235 "term_pass2.m"
            {
#line 235 "term_pass2.m"
              transform_hlds__term_pass2__RecSupplierMap0_30 = mercury__map__singleton_2_f_0(transform_hlds__term_pass2__TypeCtorInfo_16_31, transform_hlds__term_pass2__TypeInfo_17_32, ((MR_Box) (transform_hlds__term_pass2__TrialPPId_9)), ((MR_Box) (transform_hlds__term_pass2__TrialPPIdRecSuppliers_29)));
            }
#line 236 "term_pass2.m"
            {
#line 236 "term_pass2.m"
              transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__RestSCC_10, transform_hlds__term_pass2__RecSupplierMap0_30, &transform_hlds__term_pass2__InitRecSuppliers_13);
            }
#line 236 "term_pass2.m"
            transform_hlds__term_pass2__succeeded = MR_TRUE;
#line 230 "term_pass2.m"
          }
#line 222 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 212 "term_pass2.m"
          {
#line 212 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__V_18_18;
#line 212 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__Result_39;

#line 212 "term_pass2.m"
            {
#line 212 "term_pass2.m"
              transform_hlds__term_pass2__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__V_18_18, 0) = ((MR_Box) (transform_hlds__term_pass2__TrialPPId_9));
#line 212 "term_pass2.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__V_18_18, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC_10));
#line 212 "term_pass2.m"
            }
#line 299 "term_pass2.m"
            {
#line 299 "term_pass2.m"
              transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 0, transform_hlds__term_pass2__V_18_18, transform_hlds__term_pass2__InitRecSuppliers_13, &transform_hlds__term_pass2__Result_39);
            }
#line 4049 "transform_hlds.term_pass2.c"
            if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result_39)) == (MR_mktag((MR_Integer) 1))))
#line 4051 "transform_hlds.term_pass2.c"
              {
#line 4053 "transform_hlds.term_pass2.c"
                MR_Integer transform_hlds__term_pass2__ArgNum1_16 = (transform_hlds__term_pass2__ArgNum0_11 + (MR_Integer) 1);

#line 219 "term_pass2.m"
                /* direct tailcall eliminated */
#line 219 "term_pass2.m"
                {
#line 219 "term_pass2.m"
                  MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_11 = transform_hlds__term_pass2__ArgNum1_16;

#line 219 "term_pass2.m"
                  transform_hlds__term_pass2__ArgNum0_11 = transform_hlds__term_pass2__ArgNum0__tmp_copy_11;
#line 219 "term_pass2.m"
                }
#line 219 "term_pass2.m"
                continue;
#line 4069 "transform_hlds.term_pass2.c"
              }
#line 4071 "transform_hlds.term_pass2.c"
            else
#line 4073 "transform_hlds.term_pass2.c"
              {
#line 4075 "transform_hlds.term_pass2.c"
                MR_Word transform_hlds__term_pass2__CallInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_39, (MR_Integer) 0)));
#line 4077 "transform_hlds.term_pass2.c"
                MR_Word transform_hlds__term_pass2__InfCalls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_40, (MR_Integer) 0)));
#line 4079 "transform_hlds.term_pass2.c"
                MR_Word transform_hlds__term_pass2__CallWeights_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_40, (MR_Integer) 1)));
#line 302 "term_pass2.m"
                MR_Word transform_hlds__term_pass2__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_39, (MR_Integer) 1)));

#line 4084 "transform_hlds.term_pass2.c"
                if ((transform_hlds__term_pass2__InfCalls_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4086 "transform_hlds.term_pass2.c"
                  {
#line 4088 "transform_hlds.term_pass2.c"
                    MR_Word transform_hlds__term_pass2__Cycles_50;
#line 313 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__PPIds_66;
#line 314 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_51_51;
#line 314 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_52_52;

#line 526 "term_pass2.m"
                    {
#line 526 "term_pass2.m"
                      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_43, &transform_hlds__term_pass2__PPIds_66);
                    }
#line 527 "term_pass2.m"
                    {
#line 527 "term_pass2.m"
                      transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__ModuleInfo_7, transform_hlds__term_pass2__CallWeights_43, transform_hlds__term_pass2__PPIds_66, &transform_hlds__term_pass2__Cycles_50);
                    }
#line 314 "term_pass2.m"
                    transform_hlds__term_pass2__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__Cycles_50)) == (MR_mktag((MR_Integer) 1)));
#line 314 "term_pass2.m"
                    if (transform_hlds__term_pass2__succeeded)
#line 314 "term_pass2.m"
                      {
#line 314 "term_pass2.m"
                        transform_hlds__term_pass2__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_50, (MR_Integer) 0)));
#line 314 "term_pass2.m"
                        transform_hlds__term_pass2__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_50, (MR_Integer) 1)));
#line 4117 "transform_hlds.term_pass2.c"
                        {
#line 4119 "transform_hlds.term_pass2.c"
                          MR_Integer transform_hlds__term_pass2__MaxErrors_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 1)));
#line 4121 "transform_hlds.term_pass2.c"
                          MR_Integer transform_hlds__term_pass2__ArgNum1_69;
#line 316 "term_pass2.m"
                          MR_Word transform_hlds__term_pass2__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 0)));
#line 316 "term_pass2.m"
                          MR_Integer transform_hlds__term_pass2__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 2)));
#line 317 "term_pass2.m"
                          MR_Word transform_hlds__term_pass2__ReportedCycles_55;

#line 317 "term_pass2.m"
                          {
#line 317 "term_pass2.m"
                            mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_58, transform_hlds__term_pass2__Cycles_50, &transform_hlds__term_pass2__ReportedCycles_55);
                          }
#line 218 "term_pass2.m"
                          transform_hlds__term_pass2__ArgNum1_69 = (transform_hlds__term_pass2__ArgNum0_11 + (MR_Integer) 1);
#line 219 "term_pass2.m"
                          /* direct tailcall eliminated */
#line 219 "term_pass2.m"
                          {
#line 219 "term_pass2.m"
                            MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_11 = transform_hlds__term_pass2__ArgNum1_69;

#line 219 "term_pass2.m"
                            transform_hlds__term_pass2__ArgNum0_11 = transform_hlds__term_pass2__ArgNum0__tmp_copy_11;
#line 219 "term_pass2.m"
                          }
#line 219 "term_pass2.m"
                          continue;
#line 4150 "transform_hlds.term_pass2.c"
                        }
#line 314 "term_pass2.m"
                      }
#line 314 "term_pass2.m"
                    else
#line 215 "term_pass2.m"
                      *transform_hlds__term_pass2__Terminates_12 = (MR_Integer) 1;
#line 4158 "transform_hlds.term_pass2.c"
                  }
#line 4160 "transform_hlds.term_pass2.c"
                else
#line 4162 "transform_hlds.term_pass2.c"
                  {
#line 4164 "transform_hlds.term_pass2.c"
                    MR_Integer transform_hlds__term_pass2__MaxErrors_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 1)));
#line 4166 "transform_hlds.term_pass2.c"
                    MR_Integer transform_hlds__term_pass2__ArgNum1_77;
#line 306 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 0)));
#line 306 "term_pass2.m"
                    MR_Integer transform_hlds__term_pass2__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_8, (MR_Integer) 2)));
#line 307 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__ReportedInfCalls_49;

#line 307 "term_pass2.m"
                    {
#line 307 "term_pass2.m"
                      mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_47, transform_hlds__term_pass2__InfCalls_42, &transform_hlds__term_pass2__ReportedInfCalls_49);
                    }
#line 218 "term_pass2.m"
                    transform_hlds__term_pass2__ArgNum1_77 = (transform_hlds__term_pass2__ArgNum0_11 + (MR_Integer) 1);
#line 219 "term_pass2.m"
                    /* direct tailcall eliminated */
#line 219 "term_pass2.m"
                    {
#line 219 "term_pass2.m"
                      MR_Integer transform_hlds__term_pass2__ArgNum0__tmp_copy_11 = transform_hlds__term_pass2__ArgNum1_77;

#line 219 "term_pass2.m"
                      transform_hlds__term_pass2__ArgNum0_11 = transform_hlds__term_pass2__ArgNum0__tmp_copy_11;
#line 219 "term_pass2.m"
                    }
#line 219 "term_pass2.m"
                    continue;
#line 4195 "transform_hlds.term_pass2.c"
                  }
#line 4197 "transform_hlds.term_pass2.c"
              }
#line 212 "term_pass2.m"
          }
#line 222 "term_pass2.m"
        else
#line 223 "term_pass2.m"
          *transform_hlds__term_pass2__Terminates_12 = (MR_Integer) 0;
#line 222 "term_pass2.m"
      }
#line 222 "term_pass2.m"
      break;
#line 222 "term_pass2.m"
    }
#line 202 "term_pass2.m"
}

#line 182 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__find_min_arity_proc_6_p_0(
#line 182 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_1,
#line 182 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__2_2,
#line 182 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__BestSofarPPId_3,
#line 182 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__BestSofarArity_4,
#line 182 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__5_5,
#line 182 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__6_6)
#line 182 "term_pass2.m"
{
#line 186 "term_pass2.m"
  {
#line 186 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 186 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "term_pass2.m"
      {
#line 186 "term_pass2.m"
        *transform_hlds__term_pass2__HeadVar__5_5 = transform_hlds__term_pass2__BestSofarPPId_3;
#line 186 "term_pass2.m"
        *transform_hlds__term_pass2__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 186 "term_pass2.m"
      }
#line 186 "term_pass2.m"
    else
#line 188 "term_pass2.m"
      {
#line 188 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 0)));
#line 188 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__2_2, (MR_Integer) 1)));
#line 188 "term_pass2.m"
        MR_Integer transform_hlds__term_pass2__Arity_17;
#line 188 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ProcInfo_24;
#line 188 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__HeadVars_25;
#line 287 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_23_23;

#line 287 "term_pass2.m"
        {
#line 287 "term_pass2.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPId_11, &transform_hlds__term_pass2__V_23_23, &transform_hlds__term_pass2__ProcInfo_24);
        }
#line 288 "term_pass2.m"
        {
#line 288 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_24, &transform_hlds__term_pass2__HeadVars_25);
        }
#line 289 "term_pass2.m"
        {
#line 289 "term_pass2.m"
          mercury__list__length_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__HeadVars_25, &transform_hlds__term_pass2__Arity_17);
        }
#line 190 "term_pass2.m"
        transform_hlds__term_pass2__succeeded = (transform_hlds__term_pass2__Arity_17 < transform_hlds__term_pass2__BestSofarArity_4);
#line 194 "term_pass2.m"
        if (transform_hlds__term_pass2__succeeded)
#line 192 "term_pass2.m"
          {
#line 192 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RestSCC0_18;

#line 191 "term_pass2.m"
            {
#line 191 "term_pass2.m"
              transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPIds_12, transform_hlds__term_pass2__PPId_11, transform_hlds__term_pass2__Arity_17, transform_hlds__term_pass2__HeadVar__5_5, &transform_hlds__term_pass2__RestSCC0_18);
            }
#line 193 "term_pass2.m"
            {
#line 193 "term_pass2.m"
              MR_Word base;
#line 193 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__6_6 = base;
#line 193 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__BestSofarPPId_3));
#line 193 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC0_18));
#line 193 "term_pass2.m"
            }
#line 192 "term_pass2.m"
          }
#line 194 "term_pass2.m"
        else
#line 196 "term_pass2.m"
          {
#line 196 "term_pass2.m"
            MR_Word transform_hlds__term_pass2__RestSCC0_19;

#line 195 "term_pass2.m"
            {
#line 195 "term_pass2.m"
              transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__ModuleInfo_1, transform_hlds__term_pass2__PPIds_12, transform_hlds__term_pass2__BestSofarPPId_3, transform_hlds__term_pass2__BestSofarArity_4, transform_hlds__term_pass2__HeadVar__5_5, &transform_hlds__term_pass2__RestSCC0_19);
            }
#line 197 "term_pass2.m"
            {
#line 197 "term_pass2.m"
              MR_Word base;
#line 197 "term_pass2.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "term_pass2.m"
              *transform_hlds__term_pass2__HeadVar__6_6 = base;
#line 197 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_pass2__PPId_11));
#line 197 "term_pass2.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_pass2__RestSCC0_19));
#line 197 "term_pass2.m"
            }
#line 196 "term_pass2.m"
          }
#line 188 "term_pass2.m"
      }
#line 186 "term_pass2.m"
  }
#line 182 "term_pass2.m"
}

#line 136 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1(
#line 136 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__closure_arg,
#line 136 "term_pass2.m"
  MR_Box transform_hlds__term_pass2__wrapper_arg_1,
#line 136 "term_pass2.m"
  MR_Box * transform_hlds__term_pass2__wrapper_arg_2)
#line 136 "term_pass2.m"
{
#line 136 "term_pass2.m"
  {
#line 136 "term_pass2.m"
    MR_Box transform_hlds__term_pass2__closure = transform_hlds__term_pass2__closure_arg;
#line 136 "term_pass2.m"
    MR_Word transform_hlds__term_pass2__conv0_HeadVar__3_22;

#line 136 "term_pass2.m"
    {
#line 136 "term_pass2.m"
      transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__139__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_pass2__wrapper_arg_1), &transform_hlds__term_pass2__conv0_HeadVar__3_22);
    }
#line 136 "term_pass2.m"
    *transform_hlds__term_pass2__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_pass2__conv0_HeadVar__3_22));
#line 136 "term_pass2.m"
  }
#line 136 "term_pass2.m"
}

#line 125 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(
#line 125 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__HeadVar__1_1,
#line 125 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_2,
#line 125 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__HeadVar__3_3)
#line 125 "term_pass2.m"
{
#line 128 "term_pass2.m"
  {
#line 128 "term_pass2.m"
    MR_bool transform_hlds__term_pass2__succeeded;

#line 128 "term_pass2.m"
    if ((transform_hlds__term_pass2__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "term_pass2.m"
      {
#line 129 "term_pass2.m"
        {
#line 129 "term_pass2.m"
          mercury__map__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], transform_hlds__term_pass2__HeadVar__3_3);
#line 129 "term_pass2.m"
          return;
        }
#line 128 "term_pass2.m"
      }
#line 128 "term_pass2.m"
    else
#line 130 "term_pass2.m"
      {
#line 130 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__PPIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__RecSupplierMap0_10;
#line 130 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ProcInfo_12;
#line 130 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__HeadVars_13;
#line 130 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__ArgModes_14;
#line 130 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__InArgs_15;
#line 130 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__MapIsInput_17;
#line 130 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__BoolList_20;
#line 132 "term_pass2.m"
        MR_Word transform_hlds__term_pass2__V_11_11;
#line 135 "term_pass2.m"
        MR_Word transform_hlds__term_pass2___OutVars_16;

#line 131 "term_pass2.m"
        {
#line 131 "term_pass2.m"
          transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(transform_hlds__term_pass2__PPIds_7, transform_hlds__term_pass2__ModuleInfo_2, &transform_hlds__term_pass2__RecSupplierMap0_10);
        }
#line 132 "term_pass2.m"
        {
#line 132 "term_pass2.m"
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_2, transform_hlds__term_pass2__PPId_6, &transform_hlds__term_pass2__V_11_11, &transform_hlds__term_pass2__ProcInfo_12);
        }
#line 133 "term_pass2.m"
        {
#line 133 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_12, &transform_hlds__term_pass2__HeadVars_13);
        }
#line 134 "term_pass2.m"
        {
#line 134 "term_pass2.m"
          hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_pass2__ProcInfo_12, &transform_hlds__term_pass2__ArgModes_14);
        }
#line 135 "term_pass2.m"
        {
#line 135 "term_pass2.m"
          transform_hlds__term_util__partition_call_args_5_p_0(transform_hlds__term_pass2__ModuleInfo_2, transform_hlds__term_pass2__ArgModes_14, transform_hlds__term_pass2__HeadVars_13, &transform_hlds__term_pass2__InArgs_15, &transform_hlds__term_pass2___OutVars_16);
        }
#line 136 "term_pass2.m"
        {
#line 136 "term_pass2.m"
          transform_hlds__term_pass2__MapIsInput_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 136 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 0) = ((MR_Box) (&transform_hlds__term_pass2_scalar_common_4[0]));
#line 136 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 1) = ((MR_Box) (transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0_1));
#line 136 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 136 "term_pass2.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__MapIsInput_17, 3) = ((MR_Box) (transform_hlds__term_pass2__InArgs_15));
#line 136 "term_pass2.m"
        }
#line 143 "term_pass2.m"
        {
#line 143 "term_pass2.m"
          mercury__list__map_3_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_pass2__MapIsInput_17, transform_hlds__term_pass2__HeadVars_13, &transform_hlds__term_pass2__BoolList_20);
        }
#line 144 "term_pass2.m"
        {
#line 144 "term_pass2.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_1[0], ((MR_Box) (transform_hlds__term_pass2__PPId_6)), ((MR_Box) (transform_hlds__term_pass2__BoolList_20)), transform_hlds__term_pass2__RecSupplierMap0_10, transform_hlds__term_pass2__HeadVar__3_3);
#line 144 "term_pass2.m"
          return;
        }
#line 130 "term_pass2.m"
      }
#line 128 "term_pass2.m"
  }
#line 125 "term_pass2.m"
}

#line 101 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(
#line 101 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 101 "term_pass2.m"
{
#line 101 "term_pass2.m"
  {
#line 101 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 101 "term_pass2.m"
    MR_builtin_longjmp((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0, 1);
#line 101 "term_pass2.m"
  }
#line 101 "term_pass2.m"
}

#line 101 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3(
#line 101 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 101 "term_pass2.m"
{
#line 101 "term_pass2.m"
  {
#line 101 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 101 "term_pass2.m"
    (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15 = ((MR_Word) (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_15);
#line 101 "term_pass2.m"
    {
#line 101 "term_pass2.m"
      transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(transform_hlds__term_pass2__env_ptr);
#line 101 "term_pass2.m"
      return;
    }
#line 101 "term_pass2.m"
  }
#line 101 "term_pass2.m"
}

#line 101 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_2(
#line 101 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 101 "term_pass2.m"
{
#line 101 "term_pass2.m"
  {
#line 101 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 101 "term_pass2.m"
    {
#line 102 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15, (MR_Integer) 0)));

#line 102 "term_pass2.m"
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Error_15, (MR_Integer) 1)));
#line 102 "term_pass2.m"
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = ((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 102 "term_pass2.m"
      if ((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
#line 102 "term_pass2.m"
        {
#line 102 "term_pass2.m"
          transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_1(transform_hlds__term_pass2__env_ptr);
#line 102 "term_pass2.m"
          return;
        }
#line 101 "term_pass2.m"
    }
#line 101 "term_pass2.m"
  }
#line 101 "term_pass2.m"
}

#line 101 "term_pass2.m"
static void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(
#line 101 "term_pass2.m"
  void * transform_hlds__term_pass2__env_ptr_arg)
#line 101 "term_pass2.m"
{
#line 101 "term_pass2.m"
  {
#line 101 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s * transform_hlds__term_pass2__env_ptr = (struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s *) transform_hlds__term_pass2__env_ptr_arg;

#line 101 "term_pass2.m"
    if (MR_builtin_setjmp((transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__commit_0) == 0)
#line 101 "term_pass2.m"
      {
#line 101 "term_pass2.m"
        {
#line 101 "term_pass2.m"
          {
#line 101 "term_pass2.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, &(transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__conv0_Error_15, (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_13, transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_3, transform_hlds__term_pass2__env_ptr);
          }
#line 101 "term_pass2.m"
        }
#line 101 "term_pass2.m"
        (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = MR_FALSE;
#line 101 "term_pass2.m"
      }
#line 101 "term_pass2.m"
    else
#line 101 "term_pass2.m"
      (transform_hlds__term_pass2__env_ptr)->transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = MR_TRUE;
#line 101 "term_pass2.m"
  }
#line 101 "term_pass2.m"
}

#line 33 "term_pass2.m"
void MR_CALL 
transform_hlds__term_pass2__prove_termination_in_scc_5_p_0(
#line 33 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__ModuleInfo_6,
#line 33 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__PassInfo_7,
#line 33 "term_pass2.m"
  MR_Word transform_hlds__term_pass2__SCC_8,
#line 33 "term_pass2.m"
  MR_Integer transform_hlds__term_pass2__SingleArgs_9,
#line 33 "term_pass2.m"
  MR_Word * transform_hlds__term_pass2__Termination_10)
#line 33 "term_pass2.m"
{
#line 33 "term_pass2.m"
  {
#line 33 "term_pass2.m"
    struct transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0_s transform_hlds__term_pass2__env;

#line 85 "term_pass2.m"
    {
#line 85 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__InitRecSuppliers_11;
#line 85 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__Termination0_12;
#line 85 "term_pass2.m"
      MR_Word transform_hlds__term_pass2__Result_30;

#line 86 "term_pass2.m"
      {
#line 86 "term_pass2.m"
        transform_hlds__term_pass2__init_rec_input_suppliers_3_p_0(transform_hlds__term_pass2__SCC_8, transform_hlds__term_pass2__ModuleInfo_6, &transform_hlds__term_pass2__InitRecSuppliers_11);
      }
#line 299 "term_pass2.m"
      {
#line 299 "term_pass2.m"
        transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_6_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 1, transform_hlds__term_pass2__SCC_8, transform_hlds__term_pass2__InitRecSuppliers_11, &transform_hlds__term_pass2__Result_30);
      }
#line 323 "term_pass2.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__Result_30)) == (MR_mktag((MR_Integer) 1))))
#line 324 "term_pass2.m"
        {
#line 324 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__Errors_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Result_30, (MR_Integer) 0)));

#line 325 "term_pass2.m"
          {
#line 325 "term_pass2.m"
            transform_hlds__term_pass2__Termination0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "term_pass2.m"
            MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, 0) = ((MR_Box) (transform_hlds__term_pass2__Errors_47));
#line 325 "term_pass2.m"
          }
#line 324 "term_pass2.m"
        }
#line 323 "term_pass2.m"
      else
#line 302 "term_pass2.m"
        {
#line 302 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__CallInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_30, (MR_Integer) 0)));
#line 302 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__InfCalls_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_31, (MR_Integer) 0)));
#line 302 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__CallWeights_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__CallInfo_31, (MR_Integer) 1)));
#line 302 "term_pass2.m"
          MR_Word transform_hlds__term_pass2__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__Result_30, (MR_Integer) 1)));

#line 309 "term_pass2.m"
          if ((transform_hlds__term_pass2__InfCalls_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "term_pass2.m"
            {
#line 319 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__Cycles_41;
#line 313 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__PPIds_57;
#line 314 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_42_42;
#line 314 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_43_43;

#line 526 "term_pass2.m"
              {
#line 526 "term_pass2.m"
                mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__term_pass2_scalar_common_2[1], transform_hlds__term_pass2__CallWeights_34, &transform_hlds__term_pass2__PPIds_57);
              }
#line 527 "term_pass2.m"
              {
#line 527 "term_pass2.m"
                transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__CallWeights_34, transform_hlds__term_pass2__PPIds_57, &transform_hlds__term_pass2__Cycles_41);
              }
#line 314 "term_pass2.m"
              (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__term_pass2__Cycles_41)) == (MR_mktag((MR_Integer) 1)));
#line 314 "term_pass2.m"
              if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
#line 314 "term_pass2.m"
                {
#line 314 "term_pass2.m"
                  transform_hlds__term_pass2__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_41, (MR_Integer) 0)));
#line 314 "term_pass2.m"
                  transform_hlds__term_pass2__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Cycles_41, (MR_Integer) 1)));
#line 316 "term_pass2.m"
                  {
#line 316 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__ReportedCycles_46;
#line 316 "term_pass2.m"
                    MR_Integer transform_hlds__term_pass2__MaxErrors_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 1)));
#line 316 "term_pass2.m"
                    MR_Word transform_hlds__term_pass2__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 0)));
#line 316 "term_pass2.m"
                    MR_Integer transform_hlds__term_pass2__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 2)));

#line 317 "term_pass2.m"
                    {
#line 317 "term_pass2.m"
                      mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_49, transform_hlds__term_pass2__Cycles_41, &transform_hlds__term_pass2__ReportedCycles_46);
                    }
#line 318 "term_pass2.m"
                    {
#line 318 "term_pass2.m"
                      transform_hlds__term_pass2__Termination0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "term_pass2.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, 0) = ((MR_Box) (transform_hlds__term_pass2__ReportedCycles_46));
#line 318 "term_pass2.m"
                    }
#line 316 "term_pass2.m"
                  }
#line 314 "term_pass2.m"
                }
#line 314 "term_pass2.m"
              else
#line 320 "term_pass2.m"
                {
#line 320 "term_pass2.m"
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 320 "term_pass2.m"
                  transform_hlds__term_pass2__Termination0_12 = (MR_Word) &transform_hlds__term_pass2_scalar_common_3[0];
#line 320 "term_pass2.m"
                }
#line 319 "term_pass2.m"
            }
#line 309 "term_pass2.m"
          else
#line 305 "term_pass2.m"
            {
#line 305 "term_pass2.m"
              MR_Integer transform_hlds__term_pass2__MaxErrors_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 1)));
#line 305 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__ReportedInfCalls_40;
#line 306 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 0)));
#line 306 "term_pass2.m"
              MR_Integer transform_hlds__term_pass2__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_pass2__PassInfo_7, (MR_Integer) 2)));

#line 307 "term_pass2.m"
              {
#line 307 "term_pass2.m"
                mercury__list__take_upto_3_p_0((MR_Word) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0, transform_hlds__term_pass2__MaxErrors_38, transform_hlds__term_pass2__InfCalls_33, &transform_hlds__term_pass2__ReportedInfCalls_40);
              }
#line 308 "term_pass2.m"
              {
#line 308 "term_pass2.m"
                transform_hlds__term_pass2__Termination0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 308 "term_pass2.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, 0) = ((MR_Box) (transform_hlds__term_pass2__ReportedInfCalls_40));
#line 308 "term_pass2.m"
              }
#line 305 "term_pass2.m"
            }
#line 302 "term_pass2.m"
        }
#line 117 "term_pass2.m"
      if (((MR_tag((MR_Word) transform_hlds__term_pass2__Termination0_12)) == (MR_mktag((MR_Integer) 1))))
#line 90 "term_pass2.m"
        {
#line 95 "term_pass2.m"
          MR_Integer transform_hlds__term_pass2__ProcCount_14;

#line 90 "term_pass2.m"
          (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__Errors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__Termination0_12, (MR_Integer) 0)));
#line 95 "term_pass2.m"
          {
#line 95 "term_pass2.m"
            mercury__list__length_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_pass2__SCC_8, &transform_hlds__term_pass2__ProcCount_14);
          }
#line 96 "term_pass2.m"
          (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = (transform_hlds__term_pass2__ProcCount_14 <= transform_hlds__term_pass2__SingleArgs_9);
#line 95 "term_pass2.m"
          if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
#line 95 "term_pass2.m"
            {
#line 101 "term_pass2.m"
              {
#line 101 "term_pass2.m"
                transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_4(&transform_hlds__term_pass2__env);
              }
#line 100 "term_pass2.m"
              (transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded = !((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded);
#line 95 "term_pass2.m"
            }
#line 114 "term_pass2.m"
          if ((transform_hlds__term_pass2__env).transform_hlds__term_pass2__prove_termination_in_scc_5_p_0_env_0__succeeded)
#line 106 "term_pass2.m"
            {
#line 106 "term_pass2.m"
              MR_Word transform_hlds__term_pass2__SingleArgTerminates_17;

#line 168 "term_pass2.m"
              if ((transform_hlds__term_pass2__SCC_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "term_pass2.m"
                {
#line 176 "term_pass2.m"
                  {
#line 176 "term_pass2.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_pass2", (MR_String) "predicate \140transform_hlds.term_pass2.prove_termination_in_scc_single_arg\'/4", (MR_String) "empty SCC");
#line 176 "term_pass2.m"
                    return;
                  }
#line 175 "term_pass2.m"
                }
#line 168 "term_pass2.m"
              else
#line 168 "term_pass2.m"
                {
#line 168 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__FirstPPId_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__SCC_8, (MR_Integer) 0)));
#line 168 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__LaterPPIds_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_pass2__SCC_8, (MR_Integer) 1)));
#line 168 "term_pass2.m"
                  MR_Integer transform_hlds__term_pass2__FirstArity_66;
#line 168 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__TrialPPId_67;
#line 168 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__RestSCC_68;
#line 168 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__ProcInfo_77;
#line 168 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__HeadVars_78;
#line 287 "term_pass2.m"
                  MR_Word transform_hlds__term_pass2__V_76_76;

#line 287 "term_pass2.m"
                  {
#line 287 "term_pass2.m"
                    hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__FirstPPId_64, &transform_hlds__term_pass2__V_76_76, &transform_hlds__term_pass2__ProcInfo_77);
                  }
#line 288 "term_pass2.m"
                  {
#line 288 "term_pass2.m"
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_pass2__ProcInfo_77, &transform_hlds__term_pass2__HeadVars_78);
                  }
#line 289 "term_pass2.m"
                  {
#line 289 "term_pass2.m"
                    mercury__list__length_2_p_0((MR_Word) &transform_hlds__term_pass2_scalar_common_1[1], transform_hlds__term_pass2__HeadVars_78, &transform_hlds__term_pass2__FirstArity_66);
                  }
#line 170 "term_pass2.m"
                  {
#line 170 "term_pass2.m"
                    transform_hlds__term_pass2__find_min_arity_proc_6_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__LaterPPIds_65, transform_hlds__term_pass2__FirstPPId_64, transform_hlds__term_pass2__FirstArity_66, &transform_hlds__term_pass2__TrialPPId_67, &transform_hlds__term_pass2__RestSCC_68);
                  }
#line 172 "term_pass2.m"
                  {
#line 172 "term_pass2.m"
                    transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_6_p_0(transform_hlds__term_pass2__ModuleInfo_6, transform_hlds__term_pass2__PassInfo_7, transform_hlds__term_pass2__TrialPPId_67, transform_hlds__term_pass2__RestSCC_68, (MR_Integer) 1, &transform_hlds__term_pass2__SingleArgTerminates_17);
                  }
#line 168 "term_pass2.m"
                }
#line 110 "term_pass2.m"
#line 110 "term_pass2.m"
              switch (transform_hlds__term_pass2__SingleArgTerminates_17) {
#line 110 "term_pass2.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 110 "term_pass2.m"
                case (MR_Integer) 0:
#line 112 "term_pass2.m"
                  *transform_hlds__term_pass2__Termination_10 = transform_hlds__term_pass2__Termination0_12;
#line 110 "term_pass2.m"
                  break;
#line 110 "term_pass2.m"
                case (MR_Integer) 1:
#line 108 "term_pass2.m"
                  {
#line 109 "term_pass2.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 109 "term_pass2.m"
                    *transform_hlds__term_pass2__Termination_10 = (MR_Word) &transform_hlds__term_pass2_scalar_common_3[0];
#line 108 "term_pass2.m"
                  }
#line 110 "term_pass2.m"
                  break;
#line 110 "term_pass2.m"
              }
#line 106 "term_pass2.m"
            }
#line 114 "term_pass2.m"
          else
#line 115 "term_pass2.m"
            *transform_hlds__term_pass2__Termination_10 = transform_hlds__term_pass2__Termination0_12;
#line 90 "term_pass2.m"
        }
#line 117 "term_pass2.m"
      else
#line 119 "term_pass2.m"
        *transform_hlds__term_pass2__Termination_10 = transform_hlds__term_pass2__Termination0_12;
#line 85 "term_pass2.m"
    }
#line 33 "term_pass2.m"
  }
#line 33 "term_pass2.m"
}

void mercury__transform_hlds__term_pass2__init(void)
{
}

void mercury__transform_hlds__term_pass2__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_call_weight_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_fixpoint_dir_0);
	MR_register_type_ctor_info(&transform_hlds__term_pass2__transform_hlds__term_pass2__type_ctor_info_term_pass2_result_0);
}

void mercury__transform_hlds__term_pass2__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_pass2. */
